`timescale 1ns/1ps
`include "Constants.vh"

// Module: IF
// Description: Instruction Fetch stage. This module uses an ICache to retrieve instructions and 
// integrates the ImmGenerator and Branch_Predictor modules to update the Program Counter (PC)
// based on branch conditions and predictions. The new input pc_in is used instead of an internally
// maintained PC, and the output pc_out is connected directly to the branch predictor's target_pc.
module IF (
    input         clk,          // Clock signal
    input         rst,          // Reset signal (active high)
    input  [31:0] pc_in,        // External PC input
    // Pipeline control:
    input         IF_ID_Write,  // Enable writing to the IF/ID pipeline register
    input         Branch,       // External branch signal from the EX stage
    // ICache memory interface:
    output        IStall,  // Stall signal from the ICache module
    // External memory instruction input (provided by the testbench)
    input  [31:0] ExtMemInst,
    // Outputs to the next pipeline stage:
    output [31:0] PcOut,        // PC passed to the IF/ID pipeline register. Now linked to target_pc from Branch_Predictor.
    output reg [31:0] InstOut   // Fetched instruction passed to the IF/ID pipeline register
);

  // Generate immediate value using the ImmGenerator module.
  wire [31:0] Imm32;
  
  // Wire for branch predictor outputs.
  wire        BpPredictFail;
  wire [31:0] BpTargetPC;
  wire        BpPredictResult;
  
  // Instruction fetched from ICache.
  wire [31:0] CacheInst;
  
  // Determine whether the instruction is a jump or branch instruction.
  wire Jump;
  wire BranchInst;
  wire Predict;
  assign Jump        = ((CacheInst[6:0] == `JAL_OPERATION) || (CacheInst[6:0] == `JALR_OPERATION));
  assign BranchInst  = ((CacheInst[6:0] == `BRANCH_OPERATION) || Jump);
  // For conditional branches (non-jump), prediction is enabled.
  assign Predict     = (~Jump) & BranchInst;
  
  // Instantiate the Branch_Predictor module.
  Branch_Predictor BP (
      .clk(clk),
      .rst(rst),
      .stall(IStall),
      .branch(BranchInst),
      .predict(Predict),
      .excp(1'b0),            // No exception handling in IF stage.
      .sret(1'b0),
      // If jump, use 0 for rs1; otherwise, use instruction bits [19:15].
      .rs1( Jump ? 5'd0 : CacheInst[19:15]),
      .rd(CacheInst[11:7]),
      .pc(pc_in),             // Use the external pc_in as the current PC.
      .imm(Imm32),
      .old_pc(pc_in),
      .old_branch_pc(pc_in),
      .old_predict_pc(pc_in),
      .old_predict(1'b0),
      .old_actual(1'b0),
      .old_branch(1'b0),
      .target_pc(BpTargetPC),
      .predict_result(BpPredictResult),
      .predict_fail(BpPredictFail)
  );
  
  // Instantiate the ImmGenerator module.
  ImmGenerator ImmGen (
      .Instruction(CacheInst),
      .ImmData(Imm32)
  );
  
  // Connect the output pc_out to the target_pc from the branch predictor.
  assign PcOut = BpTargetPC;
  
  // Latch the instruction fetched from the ICache. This represents the value in the IF/ID pipeline register.
  always @(posedge clk or posedge rst) begin
      if (rst) begin
          InstOut <= 32'd0;
      end else if (IF_ID_Write) begin
          InstOut <= CacheInst;
      end
  end
  
  // Instantiate the ICache module.
  ICache U_Cache (
      .clk(clk),
      .rst(rst),
      .Addr(pc_in),          // Use external pc_in as the address.
      .ExtMemInst(ExtMemInst),
      .Inst(CacheInst),
      .IStall(IStall)
  );

endmodule
