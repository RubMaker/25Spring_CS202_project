`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/15/2025 09:17:21 PM
// Design Name: 
// Module Name: BRUSin
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////0


module BRUSin(
    input logic [`DATA_WIDTH] Source1, Source2,  // Two source operands for comparison
    input logic [`DATA_WIDTH] Pc,               // Current instruction PC
    input logic [`DATA_WIDTH] Immediate,                // Immediate value (offset for branch)
    input logic [`BRUOP_WIDTH] BRUOperation,               // Branch operation code (controls comparison type)
    input logic              Jalr,                 // Jalr instruction flag (whether it is a register jump)
    output logic [`DATA_WIDTH ] NewPc               // Directly output the next instruction PC (no old PC needed for single-cycle)
);

    logic Res;  // Branch result (internal use, no need to output)

    // Branch condition judgment (consistent with original logic)
    always_comb begin : BRU
        unique case (BRUOperation)
            `BRU_NOP: Res = 0;        // No operation (non-branch)
            `BRU_EQ:  Res = (Source1 == Source2);  // Jump if equal
            `BRU_NE:  Res = (Source1 != Source2);  // Jump if not equal
            `BRU_LT:  Res = ($signed(Source1) < $signed(Source2));  // Jump if signed less than
            `BRU_GE:  Res = ($signed(Source1) >= $signed(Source2)); // Jump if signed greater or equal
            `BRU_LTU: Res = (Source1 < Source2);  // Jump if unsigned less than
            `BRU_GEU: Res = (Source1 >= Source2); // Jump if unsigned greater or equal
            `BRU_JMP: Res = 1;        // Unconditional jump
            default:  Res = 0;        // Default: no jump
        endcase
    end

    // Calculate next PC (directly output, no need to save old PC)
    always_comb begin : Next_PC
        if (Res) begin
            NewPc = Jalr ? (Source1 + Immediate) : (Pc + Immediate);  // Jump: select address based on Jalr
        end else begin
            NewPc = Pc + 4;  // No jump: PC+4 (sequential execution)
        end
    end

endmodule 
