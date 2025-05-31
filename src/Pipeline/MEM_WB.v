`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/18 23:38:01
// Design Name: 
// Module Name: MEM_WB
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

module MEM_WB(
    input clk,              // Clock signal
    input rst,              // Reset signal, active high
    input stall,            // Stall signal: holds current pipeline register data

    // Inputs from MEM stage
    input [31:0] MemResult,    // Result from MEM stage (data from memory load or ALU result)
    input        MemRegWrite,  // Write enable signal from MEM stage
    input [4:0]  MemRd,        // Destination register number from MEM stage

    // Outputs to Write Back stage
    output reg [31:0] WbData,      // Write-back data to be written to the register file
    output reg        WbRegWrite,  // Write-back enable signal
    output reg [4:0]  WbRd         // Destination register number for write-back
);

    // Pipeline register update: update on positive clock edge
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            // Reset pipeline registers
            WbData     <= 32'd0;
            WbRegWrite <= 1'b0;
            WbRd       <= 5'd0;
        end else if (stall) begin
            // Stall: hold the current values
            WbData     <= WbData;
            WbRegWrite <= WbRegWrite;
            WbRd       <= WbRd;
        end else begin
            // Normal operation: capture MEM stage inputs
            WbData     <= MemResult;
            WbRegWrite <= MemRegWrite;
            WbRd       <= MemRd;
        end
    end

endmodule
