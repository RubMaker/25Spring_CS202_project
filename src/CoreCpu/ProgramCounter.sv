`include "Constants.vh"
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2025 02:14:36 PM
// Design Name: 
// Module Name: ProgramCounter
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


module ProgramCounter(
    input clk,
    input reset,
    input logic PcWriteEn,       // Program counter write enable signal
    input logic InstCacheEn,     // Instruction cache enable signal
    input logic DataCacheEn,     // Data cache enable signal
    input logic [`DATA_WIDTH] PcInput,  // Input value of the program counter
    output logic [`DATA_WIDTH] PcOutput // Output value of the program counter
    );
    // Program counter register, initialized to 0
    logic [`DATA_WIDTH] PcReg = 32'h0000_0000; 
    // Sequential logic block, triggered on the rising edge of the clock
    always_ff @(posedge clk) begin
        // When the reset signal is active, reset the program counter register to 0
        if (reset) begin
            PcReg <= 32'h0000_0000; 
        // When the program counter write enable signal is active, keep the value of the program counter register unchanged
        end else if (PcWriteEn) begin
            PcReg <= PcReg;
        // When the instruction cache enable signal or data cache enable signal is active, keep the value of the program counter register unchanged
        end else if (InstCacheEn) begin
            PcReg <= PcReg;
        // In other cases, update the value of the program counter register with the input value
        end else if (DataCacheEn) begin
            PcReg <= PcReg;
        end else begin
            PcReg <= PcInput; 
        end
    end

    // Assign the value of the program counter register to the output port
    assign PcOutput = PcReg; 
endmodule
