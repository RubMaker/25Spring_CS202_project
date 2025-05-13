`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module: EX
// Description: Execution stage module.
//              Performs ALU operations and uses the BRU to update the PC for branches.
//////////////////////////////////////////////////////////////////////////////////

module EX (
    input  wire [31:0] Rs1Data,     // First operand from register file
    input  wire [31:0] Rs2Data,     // Second operand from register file
    input  wire [31:0] Imm,         // Immediate value from ID stage
    input  wire        ALUSrc,      // Selects second ALU operand (1: immediate; 0: Rs2Data)
    input  wire [3:0]  ALUOp,       // ALU operation control signal
    input  wire        Branch,      // Indicates if the instruction is a branch
    input  wire [2:0]  BRU_op,      // Branch unit control signal
    input  wire [31:0] Pc,          // Current Program Counter value
    output wire [31:0] ALU_result,  // Result computed by the ALU
    output wire        BranchTaken, // Result of branch comparison (1 if branch taken)
    output wire [31:0] NewPc        // Updated PC value computed by the BRU
);

    // Choose ALU second operand: Immediate if ALUSrc is asserted; otherwise, Rs2Data.
    wire [31:0] ALUIn2;
    assign ALUIn2 = ALUSrc ? Imm : Rs2Data;

    // Instantiate ALU
    ALU ALU_Instance (
        .ALU_in1(Rs1Data),
        .ALU_in2(ALUIn2),
        .ALUOp(ALUOp),
        .ALU_result(ALU_result)
    );
    
    // Instantiate BRU for branch decision and PC update.
    wire BruTaken;
    wire [31:0] BruNewPc;
    BRU BRU_Instance (
        .Rs1Data(Rs1Data),
        .Rs2Data(Rs2Data),
        .BRUOp(BRU_op),
        .Pc(Pc),
        .Imm(Imm),
        .BranchTaken(BruTaken),
        .NewPc(BruNewPc)
    );

    // Connect outputs
    assign BranchTaken = BruTaken;
    assign NewPc = BruNewPc;

endmodule