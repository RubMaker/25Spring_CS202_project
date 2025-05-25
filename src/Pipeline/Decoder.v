`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/06 15:32:11
// Design Name: 
// Module Name: Decoder
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


module Decoder(
    input clk,
    input rst,
    input regWrite,
    input [31:0] inst,
    input [31:0] writeData,
    output [31:0] imm32,
    output [31:0] rs1Data,
    output [31:0] rs2Data
    );
    
        wire [6:0]  opcode;
        wire [4:0]  rs2;
        wire [4:0]  rs1;
        wire [4:0]  rt;
        wire [4:0]  rd;
            
        assign opcode = inst[6:0];
        assign rs2 = inst[24:20];
        assign rs1 = inst[19:15];
        assign rd = inst[11:7];
        
        reg[31:0]   register[0:31];
        
        reg [31:0] imm32_reg;
            always @(*) begin
                case (opcode)
                    7'b0000011,7'b0010011,7'b1110011: // I-type
                        imm32_reg = {{20{inst[31]}}, inst[31:20]};
                    7'b0100011: // S-type
                        imm32_reg = {{20{inst[31]}}, inst[31:25], inst[11:7]};
                   7'b1100011: // B-type
                        imm32_reg = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
                    7'b1101111:// J-type
                        imm32_reg = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
                    7'b0110111,7'b0010111://U-type
                        imm32_reg = {inst[31:12], 12'b0};
                    default:    // R-type
                        imm32_reg = 32'b0;
                endcase
            end
            
            assign imm32 = imm32_reg;
            integer i;
                always @(posedge clk) begin
                    if (rst == 1'b0) begin
                        for (i = 0; i < 32; i = i + 1)
                            register[i] <= 32'b0;
                      end 
                    else begin
                        if (regWrite == 1'b1) register[rd] <= writeData;
                        register[0] <= 32'b0;
                    end
                end
                
                assign rs1Data = register[rs1];
                assign rs2Data =register[rs2];
endmodule
