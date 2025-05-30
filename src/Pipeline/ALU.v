`timescale 1ns / 1ps
`include "Constants.vh"

//////////////////////////////////////////////////////////////////////////////////
// Module: ALU
// Description: Extended Arithmetic Logic Unit (ALU) for RISC-V.
//              Supports operations: ADD, SUB, AND, OR, XOR, shifts, SLT, MUL, DIV, REM, etc.
//////////////////////////////////////////////////////////////////////////////////

module ALU (
    input  wire [31:0] ALU_in1,    // First ALU operand
    input  wire [31:0] ALU_in2,    // Second ALU operand
    input  wire [3:0]  ALUOp,      // ALU operation selection signal
    output reg  [31:0] ALU_result // 32-bit result of ALU computation
);

    // Temporary 64-bit variable for multiplication and division operations.
    reg [63:0] Mult;

    /**
     * @brief Combinatorial ALU operation block.
     */
    always @(*) begin
        Mult = 64'd0; // Reset multiplier
        ALU_result = 32'd0; // Reset ALU result
        case (ALUOp)
            `ALU_ADD: ALU_result = ALU_in1 + ALU_in2; // ADD
            `ALU_SUB: ALU_result = ALU_in1 - ALU_in2; // SUB
            `ALU_AND: ALU_result = ALU_in1 & ALU_in2; // AND
            `ALU_OR:  ALU_result = ALU_in1 | ALU_in2; // OR
            `ALU_XOR: ALU_result = ALU_in1 ^ ALU_in2; // XOR
            `ALU_SLL: ALU_result = ALU_in1 << ALU_in2[4:0]; // SLL
            `ALU_SRL: ALU_result = ALU_in1 >> ALU_in2[4:0]; // SRL
            `ALU_SRA: ALU_result = $signed(ALU_in1) >>> ALU_in2[4:0]; // SRA
            `ALU_SLT: ALU_result = ($signed(ALU_in1) < $signed(ALU_in2)) ? 32'd1 : 32'd0; // SLT
            `ALU_SLTU: ALU_result = (ALU_in1 < ALU_in2) ? 32'd1 : 32'd0; // SLTU
            `ALU_MUL: ALU_result = ALU_in1 * ALU_in2; // MUL, lower 32 bits
            `ALU_MULH: begin  // MULH: signed multiplication, high 32 bits
                         Mult = $signed(ALU_in1) * $signed(ALU_in2);
                         ALU_result = Mult[63:32];
                      end
            `ALU_MULHSU: begin  // MULHSU: signed * unsigned multiplication, high 32 bits
                         Mult = $signed(ALU_in1) * ALU_in2;
                         ALU_result = Mult[63:32];
                      end
            `ALU_MULHU: begin  // MULHU: unsigned multiplication, high 32 bits
                         Mult = ALU_in1 * ALU_in2;
                         ALU_result = Mult[63:32];
                      end
            `ALU_DIV: begin  // DIV: signed division; if divisor is 0, output 32'hFFFFFFFF
                         if (ALU_in2 == 32'd0)
                             ALU_result = 32'hFFFFFFFF;
                         else
                             ALU_result = $signed(ALU_in1) / $signed(ALU_in2);
                      end
            `ALU_REM: begin  // REM: signed remainder; if divisor is 0, output ALU_in1
                         if (ALU_in2 == 32'd0)
                             ALU_result = ALU_in1;
                         else
                             ALU_result = $signed(ALU_in1) % $signed(ALU_in2);
                      end
            default: begin 
                ALU_result = 32'd0;
                Mult = 64'd0; // Default case, reset result and multiplier
            end
        endcase
    end

endmodule
