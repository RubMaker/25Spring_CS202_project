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
    output [31:0] WbData,      // Write-back data to be written to the register file
    output        WbRegWrite,  // Write-back enable signal
    output [4:0]  WbRd         // Destination register number for write-back
);

    reg [4:0]  Rd = 4'b0;
    reg [31:0] Data = 32'b0;
    reg        RegWrite = 1'b0; 

    // Pipeline register update: update on positive clock edge
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            // Reset pipeline registers
            Data     <= 32'd0;
            RegWrite <= 1'b0;
            Rd       <= 5'd0;
        end else if (stall) begin
            // Stall: hold the current values
            Data     <= Data;
            RegWrite <= RegWrite;
            Rd       <= Rd;
        end else begin
            // Normal operation: capture MEM stage inputs
            Data     <= MemResult;
            RegWrite <= MemRegWrite;
            Rd       <= MemRd;
        end
    end

    assign WbData = Data;
    assign WbRegWrite = RegWrite;
    assign WbRd = Rd;
endmodule
