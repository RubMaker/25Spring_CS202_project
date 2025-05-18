`include "Constants.vh"
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/30/2025 06:06:15 PM
// Design Name: 
// Module Name: ALU
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
//////////////////////////////////////////////////////////////////////////////////

module ALU(
    input logic [`DATA_WIDTH] InputA,           // First operand
    input logic [`DATA_WIDTH] InputB,           // Second operand
    input logic [`ALUOP_WIDTH] AluOperation,        // ALU operation control
    output logic [`DATA_WIDTH] Result     // Result of operation
);

    // 定义 64 位乘法结果变量
    logic [63:0] Mul;
    logic signed [63:0] SignedInputAExt;
    logic unsigned [63:0] UnsignedInputBExt;
    logic signed [127:0] FullMul;
    always_comb begin
        // 初始化乘法结果和运算结果
        Mul = 64'h0000_0000_0000_0000;
        Result = {`DATA_LENGTH{1'b0}};
        SignedInputAExt = 0;
        UnsignedInputBExt = 0;
        FullMul = 0;

        unique case (AluOperation)
            `ALU_ADD:  Result = InputA + InputB;
            `ALU_SUB:  Result = InputA - InputB;
            `ALU_AND:  Result = InputA & InputB;
            `ALU_OR:   Result = InputA | InputB;
            `ALU_XOR:  Result = InputA ^ InputB;
            `ALU_SLL:  Result = InputA <<  InputB[4:0];   // Shift left logical
            `ALU_SRL:  Result = InputA >>  InputB[4:0];   // Shift right logical
            `ALU_SRA:  Result = $signed(InputA) >>>  InputB[4:0]; // Shift right arithmetic
            `ALU_SLT:  Result = ($signed(InputA) < $signed(InputB)) ? 1 : {`DATA_LENGTH{1'b0}}; // Set less than (signed)
            `ALU_SLTU: Result = (InputA < InputB) ? 1 : {`DATA_LENGTH{1'b0}}; // Set less than unsigned
            // `ALU_LUI:  Result = InputB;      // Load upper immediate
            // `ALU_NOR:  Result = ~(a | b);
            `ALU_MUL: begin
                Mul = $signed(InputA) * $signed(InputB);
                Result = Mul[31:0];
            end
            `ALU_MULH: begin
                Mul = $signed(InputA) * $signed(InputB);
                Result = Mul[63:32];
            end
            `ALU_MULHSU: begin
                SignedInputAExt = {{32{InputA[31]}}, InputA};       
                UnsignedInputBExt = $signed({32'b0, InputB});   
                FullMul = SignedInputAExt * UnsignedInputBExt;
                // Mul = $signed(InputA) * $unsigned(InputB);
                // Result = $signed(Mul[63:32]); 
                Result = $signed(FullMul[63:32]); 
            end
            `ALU_MULHU: begin
                Mul = $unsigned(InputA) * $unsigned(InputB);
                Result = Mul[63:32];
            end
            `ALU_DIV:  Result = $signed(InputA) / $signed(InputB);
            `ALU_REM:  Result = $signed(InputA) % $signed(InputB);
            default:   Result = {`DATA_LENGTH{1'b0}};
        endcase
    end

endmodule 


