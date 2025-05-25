`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module: WB
// Description: Write Back stage for a 5-stage pipelined CPU.
//              This module captures signals from the MEM stage and forwards them
//              to the register file in the next clock cycle.
//////////////////////////////////////////////////////////////////////////////////

module WB(
    input wire clk,             // Clock signal
    input wire rst,             // Asynchronous reset signal, active high
    // MEM stage inputs:
    input wire [31:0] MemResult,    // 32-bit result from MEM stage (loaded data or ALU result)
    input wire        MemRegWrite,  // Write-back enable signal from MEM stage
    input wire [4:0]  MemRd,        // 5-bit destination register number from MEM stage
    // Outputs to the register file:
    output reg [31:0] WbData,       // 32-bit data to be written-back
    output reg        WbRegWrite,   // Write-back enable signal
    output reg [4:0]  WbRd          // 5-bit destination register number
);
    /**
     * @brief Pipeline register: Captures MEM stage signals on each rising clock edge.
     */
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            WbData     <= 32'd0;
            WbRegWrite <= 1'b0;
            WbRd       <= 5'd0;
        end else begin
            WbData     <= MemResult;
            WbRegWrite <= MemRegWrite;
            WbRd       <= MemRd;
        end
    end

endmodule