`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Module: EX
// Description: Execution stage module.
//              Performs ALU operations and uses BRU for branch decision.
//              Data forwarding is implemented using the Forward module so that
//              the ALU can use the most recent value even if the register write-back
//              has not yet updated the register file.
//////////////////////////////////////////////////////////////////////////////////

module EX (
    // Original ALU inputs (from register file via ID/EX)
    input  wire [31:0] Rs1Data,         // Data from register file for Rs1
    input  wire [31:0] Rs2Data,         // Data from register file for Rs2
    
    // NEW: Source register numbers from ID/EX stage
    input  wire [4:0]  rs1,             // Source register number for Rs1 (from instruction field)
    input  wire [4:0]  rs2,             // Source register number for Rs2 (from instruction field)
    
    // Forwarding signals from later pipeline registers:
    // From EX_MEM
    input  wire [4:0]  ex_mem_rd,       // Destination register number from EX_MEM
    input  wire        ex_mem_regwrite, // Write enable from EX_MEM
    input  wire [31:0] ex_mem_aluresult,// ALU result from EX_MEM stage
    // From MEM_WB
    input  wire [4:0]  mem_wb_rd,       // Destination register number from MEM_WB
    input  wire        mem_wb_regwrite, // Write enable from MEM_WB
    input  wire [31:0] wb_result,       // Write-back result from MEM_WB stage

    input  wire [31:0] Imm,             // Immediate value from ID stage
    input  wire        ALUSrc,          // Selects second ALU operand (1: immediate; 0: forwarded Rs2)
    input  wire [3:0]  ALUOp,           // ALU operation control signal
    input  wire        Branch,          // Indicates if the instruction is a branch
    input  wire [2:0]  BRU_op,          // Branch unit control signal
    input  wire [31:0] Pc,              // Current Program Counter value
    
    // Outputs from EX stage
    output wire [31:0] ALU_result,      // Result computed by the ALU
    output wire        BranchTaken,     // Branch outcome (1 if branch is taken)
    output wire [31:0] OldPc            // New PC computed by BRU (renamed to OldPc)
);

    // Forwarding unit wires
    wire [31:0] forwarded_A, forwarded_B;
    
    // Instantiate the forwarding unit.
    Forwarding forward_inst (
        .EX_rs1(rs1),
        .EX_rs2(rs2),
        .MEM_rd(ex_mem_rd),
        .MEM_RegWrite(ex_mem_regwrite),
        .EX_MEM_AluResult(ex_mem_aluresult),
        .WB_rd(mem_wb_rd),
        .WB_RegWrite(mem_wb_regwrite),
        .WB_Result(wb_result),
        .Rs1Data(Rs1Data),
        .Rs2Data(Rs2Data),
        .Forwarded_A(forwarded_A),
        .Forwarded_B(forwarded_B)
    );
    
    // Choose second ALU operand: immediate if ALUSrc is asserted, else forwarded Rs2.
    wire [31:0] ALUIn2;
    assign ALUIn2 = ALUSrc ? Imm : forwarded_B;

    // Instantiate ALU with forwarded operand A and selected operand2.
    ALU ALU_Instance (
        .ALU_in1(forwarded_A),
        .ALU_in2(ALUIn2),
        .ALUOp(ALUOp),
        .ALU_result(ALU_result)
    );
    
    // Instantiate BRU (Branch Resolution Unit) for branch decision and PC update.
    wire BruTaken;
    wire [31:0] BruNewPc;
    BRU BRU_Instance (
        .Rs1Data(forwarded_A),
        .Rs2Data(forwarded_B),
        .BRUOp(BRU_op),
        .Pc(Pc),
        .Imm(Imm),
        .BranchTaken(BruTaken),
        .OldPc(BruNewPc)
    );

    // Connect BRU outputs.
    assign BranchTaken = BruTaken;
    assign OldPc = BruNewPc;

endmodule