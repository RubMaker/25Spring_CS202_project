`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/13/2025 08:43:14 PM
// Design Name: 
// Module Name: ImmGenerator
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


module ImmGenerator(
    input wire [31:0] Instruction,  // 32-bit input instruction
    output reg [31:0] ImmData      // 32-bit generated immediate value
);

    // Combinational logic to generate immediate based on instruction type
    always @(*) begin
        // I-type instructions (Arithmetic Immediate, Load, JALR)
        if (Instruction[6:0] == `ART_IMM_OPERATION || Instruction[6:0] == `LOAD_OPERATION || Instruction[6:0] == `JALR_OPERATION) begin 
            ImmData[11:0] = Instruction[31:20];          // Lower 12 bits from instruction[31:20]
            ImmData[31:12] = (Instruction[31] == 1'b1) ? 20'hfffff : 20'b0;  // Sign extension (MSB determines padding)
        end 
        // S-type instructions (Store)
        else if (Instruction[6:0] == `STORE_OPERATION) begin        
            ImmData[11:0] = {Instruction[31:25], Instruction[11:7]};  // Lower 12 bits from instruction[31:25] and [11:7]
            ImmData[31:12] = (Instruction[31] == 1'b1) ? 20'hfffff : 20'b0;  // Sign extension
        end
        // B-type instructions (Branch)
        else if (Instruction[6:0] == `BRANCH_OPERATION) begin        
            ImmData[12:0] = {Instruction[31], Instruction[7], Instruction[30:25], Instruction[11:8], 1'b0};  // Lower 13 bits with LSB=0 (alignment)
            ImmData[31:13] = (Instruction[31] == 1'b1) ? 19'b1111_1111_1111_1111_111 : 19'b0;  // Sign extension
        end
        // U-type instructions (LUI, AUIPC)
        else if (Instruction[6:0] == `LUI_OPERATION | Instruction[6:0] == `AUIPC_OPERATION) begin        
            ImmData[31:12] = Instruction[31:12];  // Upper 20 bits directly from instruction[31:12]
            ImmData[11:0] = 12'b0000_0000_0000;   // Lower 12 bits zero-padded
        end
        // J-type instructions (JAL)
        else if (Instruction[6:0] == `JAL_OPERATION) begin        
            ImmData[20:0] = {Instruction[31], Instruction[19:12], Instruction[20], Instruction[30:21], 1'b0};  // Lower 21 bits with LSB=0 (alignment)
            ImmData[31:21] = (Instruction[31] == 1'b1) ? 11'b1111_1111_111 : 11'b0;  // Sign extension
        end
        // R-type and other undefined instructions
        else begin                                     
            ImmData[31:0] = 32'h0000_0000;  // Immediate value set to zero
        end
    end

endmodule
