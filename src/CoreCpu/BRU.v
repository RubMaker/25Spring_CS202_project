`timescale 1ns / 1ps
`include "Constants.vh" 

//////////////////////////////////////////////////////////////////////////////////
// Module: BRU
// Description: Branch Resolution Unit for RISC-V.
//              Compares RS1Data and RS2Data based on control signal BRUOp to determine
//              whether a branch should be taken. Computes the updated PC (PrePc).
//////////////////////////////////////////////////////////////////////////////////

module BRU (
    input  wire [31:0] Rs1Data,   // First operand for branch comparison
    input  wire [31:0] Rs2Data,   // Second operand for branch comparison
    input  wire [2:0]  BRUOp,     // Branch operation control signal
    input  wire [31:0] Pc,        // Current Program Counter value
    input  wire [31:0] Imm,       // Branch offset (immediate), already sign-extended
    output reg         BranchTaken, // '1' if branch condition is met; else '0'
    output reg [31:0]  NewPc         // Computed updated PC value
);

    /**
     * @brief Combinatorial branch decision and PC calculation.
     */
    always @(*) begin
        case (BRUOp)
            `BRU_EQ:   BranchTaken = (Rs1Data == Rs2Data);                      // BEQ
            `BRU_NE:   BranchTaken = (Rs1Data != Rs2Data);                      // BNE
            `BRU_LT:   BranchTaken = ($signed(Rs1Data) < $signed(Rs2Data));       // BLT
            `BRU_GE:   BranchTaken = ($signed(Rs1Data) >= $signed(Rs2Data));      // BGE
            `BRU_LTU:  BranchTaken = (Rs1Data < Rs2Data);                         // BLTU
            `BRU_GEU:  BranchTaken = (Rs1Data >= Rs2Data);                        // BGEU
            `BRU_JMP:  BranchTaken = 1'b1;                                        // JAL/JALR (unconditional)
            default:   BranchTaken = 1'b0;
        endcase

        // Update PC: if branch taken, new PC = Pc + Imm; otherwise, Pc + 4.
        if (BranchTaken)
            NewPc = Pc + Imm;
        else
            NewPc = Pc + 32'd4;
    end

endmodule