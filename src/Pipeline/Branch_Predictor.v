`timescale 1ns/1ps
`include "Constants.vh"

// Module: Branch_Predictor
// Description: Implements the branch prediction mechanism using a saturating counter table (BHT)
// and a return address stack (RAS) for function calls and returns.
module Branch_Predictor 
  #(parameter BHT_SIZE = 4,    // Number of bits for index (table size = 2^BHT_SIZE)
    parameter RAS_SIZE = 4)    // Number of bits for RAS pointer (stack size = 2^RAS_SIZE)
(
    input              clk,         // Clock signal
    input              rst,         // Reset signal (active high)
    input              stall,       // Stall signal for table updates
    // Branch and prediction control signals:
    input              branch,      // Indicates the current instruction is a branch (or jump)
    input              predict,     // Enable branch prediction for conditional branches
    input              excp,        // Exception signal
    input              sret,        // Exception return signal (SRET case)
    // Register fields for call/return decision:
    input      [4:0]   rs1,
    input      [4:0]   rd,
    // Current instruction information:
    input      [31:0]  pc,
    input      [31:0]  imm,
    // Previous instruction history information used for updating the table:
    input      [31:0]  old_pc,
    input      [31:0]  old_branch_pc,
    input      [31:0]  old_predict_pc,
    input              old_predict,
    input              old_actual,
    input              old_branch,
    // Outputs:
    output     [31:0]  target_pc,      // Predicted target PC output
    output             predict_result, // Latest prediction result (1 indicates predict branch)
    output             predict_fail    // Indicates if the previous prediction was incorrect
);

  // Internal registers and signals
  reg [31:0] Sepc; // Exception return address register
  reg [1:0] History_Table [0:(1 << BHT_SIZE)-1]; // 2-bit saturating counter table
  reg [31:0] Return_Addr    [0:(1 << RAS_SIZE)-1]; // Return address stack (for function calls)
  reg [RAS_SIZE-1:0] RASTop;  // Return address stack pointer
  reg StartFlag;            // Flag to indicate module startup (avoids premature update)
  reg [31:0] TargetPCInt;   // Internal signal for target PC computation
  
  wire [31:0] PCPlus4;
  assign PCPlus4 = pc + 32'd4;
  
  // When an exception occurs, select Sepc or a fixed exception address.
  assign target_pc = (excp) ? ((sret) ? Sepc : `EXCP_ADDRESS) : TargetPCInt;
  
  // Output prediction result
  reg PredictResultReg;
  assign predict_result = PredictResultReg;
  
  // Determine if the previous prediction failed:
  // Either the actual outcome does not match the prediction or the predicted target PC is wrong.
  assign predict_fail = (old_actual != old_predict) || ((old_predict_pc != old_pc) && old_branch);
  
  integer i;
  initial begin
      Sepc = 32'd0;
      RASTop = 0;
      StartFlag = 1'b0;
      for (i = 0; i < (1 << BHT_SIZE); i = i + 1)
          History_Table[i] = 2'b01;
  end
  
  // Synchronous update for Sepc (exception return register)
  always @(posedge clk or posedge rst) begin
      if(rst)
          Sepc <= 32'd0;
      else if(excp && !sret)
          Sepc <= PCPlus4;
      else
          Sepc <= Sepc;
  end
  
  // Generate index for the branch history table using bits from pc
  wire [BHT_SIZE-1:0] TableAddr;
  wire [BHT_SIZE-1:0] UpdateAddr;
  assign TableAddr  = pc[(BHT_SIZE+1):2];
  assign UpdateAddr = old_branch_pc[(BHT_SIZE+1):2];
  
  // Update the StartFlag after reset
  always @(posedge clk or posedge rst) begin
      if(rst)
          StartFlag <= 1'b0;
      else
          StartFlag <= 1'b1;
  end
  
  // Combinational block to compute prediction and target PC
  always @(*) begin
      if(rst || (StartFlag == 1'b0)) begin
          PredictResultReg = 1'b0;
          TargetPCInt = 32'd0;
      end else if (predict_fail) begin
          PredictResultReg = 1'b0;
          TargetPCInt = old_pc;
      end else begin
          case ({branch, predict})
              2'b00: begin // Not a branch and no prediction: sequential flow
                  PredictResultReg = 1'b0;
                  TargetPCInt = PCPlus4;
              end
              2'b10: begin // Branch but not predicting (direct jump)
                  PredictResultReg = 1'b1;
                  if (rs1 == 5'd1)
                      TargetPCInt = Return_Addr[RASTop];
                  else
                      TargetPCInt = pc + imm;
              end
              2'b11: begin // Conditional branch with prediction enabled
                  if (History_Table[TableAddr] > 2'b01)
                      PredictResultReg = 1'b1;
                  else
                      PredictResultReg = 1'b0;
                  if (PredictResultReg)
                      TargetPCInt = pc + imm;
                  else
                      TargetPCInt = PCPlus4;
              end
              default: begin
                  PredictResultReg = 1'b0;
                  TargetPCInt = PCPlus4;
              end
          endcase
      end
  end
  
  // Synchronous update for the branch history table
  always @(posedge clk or posedge rst) begin
      if(rst) begin
          for (i = 0; i < (1 << BHT_SIZE); i = i + 1)
              History_Table[i] <= 2'b01;
      end else if(old_branch && !stall) begin
          if(old_actual) begin
              if(History_Table[UpdateAddr] != 2'b11)
                  History_Table[UpdateAddr] <= History_Table[UpdateAddr] + 2'b01;
              else
                  History_Table[UpdateAddr] <= History_Table[UpdateAddr];
          end else begin
              if(History_Table[UpdateAddr] != 2'b00)
                  History_Table[UpdateAddr] <= History_Table[UpdateAddr] - 2'b01;
              else
                  History_Table[UpdateAddr] <= History_Table[UpdateAddr];
          end
      end else begin
          History_Table[UpdateAddr] <= History_Table[UpdateAddr];
      end
  end
  
  // Synchronous update for the Return Address Stack (RAS)
  always @(posedge clk or posedge rst) begin
      if(rst || (StartFlag == 1'b0))
          RASTop <= 0;
      else if (({branch, predict} == 2'b10) && !stall && !predict_fail) begin
          if(rd == 5'd1) begin        // Function call: push return address
              Return_Addr[RASTop + 1] <= PCPlus4;
              RASTop <= RASTop + 1;
          end else if(rs1 == 5'd1) begin // Function return: pop return address
              RASTop <= RASTop - 1;
          end else begin
              RASTop <= RASTop;
          end
      end else begin
          RASTop <= RASTop;
      end
  end

endmodule