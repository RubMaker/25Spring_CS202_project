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
    input logic [`DATA_WIDTH] a,           // First operand
    input logic [`DATA_WIDTH] b,           // Second operand
    input logic [`ALUOP_WIDTH] aluop,        // ALU operation control
    output logic [`DATA_WIDTH] result     // Result of operation
);

    // 定义 64 位乘法结果变量
    logic [63:0] mul;

    always_comb begin
        // 初始化乘法结果和运算结果
        mul = 64'h0000_0000_0000_0000;
        result = {`DATA_LENGTH{1'b0}};

        unique case (aluop)
            `ALU_ADD:  result = a + b;
            `ALU_SUB:  result = a - b;
            `ALU_AND:  result = a & b;
            `ALU_OR:   result = a | b;
            `ALU_XOR:  result = a ^ b;
            `ALU_SLL:  result = a << b[4:0];   // Shift left logical
            `ALU_SRL:  result = a >> b[4:0];   // Shift right logical
            `ALU_SRA:  result = $signed(a) >>> b[4:0]; // Shift right arithmetic
            `ALU_SLT:  result = ($signed(a) < $signed(b)) ? 1 : {`DATA_LENGTH{1'b0}}; // Set less than (signed)
            `ALU_SLTU: result = (a < b) ? 1 : {`DATA_LENGTH{1'b0}}; // Set less than unsigned
            // `ALU_LUI:  result = b;      // Load upper immediate
            // `ALU_NOR:  result = ~(a | b);
            `ALU_MUL: begin
                mul = $signed(a) * $signed(b);
                result = mul[31:0];
            end
            `ALU_MULH: begin
                mul = $signed(a) * $signed(b);
                result = mul[63:32];
            end
            `ALU_MULHSU: begin
                logic signed [63:0] signed_a_ext = {{32{a[31]}}, a};       
                logic unsigned [63:0] unsigned_b_ext = $signed({32'b0, b});   
                logic signed [127:0] full_mul = signed_a_ext * unsigned_b_ext;
                // mul = $signed(a) * $unsigned(b);
                // result = $signed(mul[63:32]); 
                result = $signed(full_mul[63:32]); 
            end
            `ALU_MULHU: begin
                mul = $unsigned(a) * $unsigned(b);
                result = mul[63:32];
            end
            `ALU_DIV:  result = $signed(a) / $signed(b);
            `ALU_REM:  result = $signed(a) % $signed(b);
            default:   result = {`DATA_LENGTH{1'b0}};
        endcase
    end

endmodule

