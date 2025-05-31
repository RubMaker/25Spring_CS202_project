`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module: WB
// Description: Write Back stage for a 5-stage pipelined CPU.
//              This module captures signals from the MEM stage and forwards them
//              to the register file in the next clock cycle.
//////////////////////////////////////////////////////////////////////////////////

module WB(
    // MEM stage inputs:
    input wire [31:0] MemResult,    // 32-bit result from MEM stage (loaded data or ALU result)
    input wire        MemRegWrite,  // Write-back enable signal from MEM stage
    // Outputs to the register file:
    output [31:0] WbData      // 32-bit data to be written-back
);
    
    assign WbData = MemResult;

endmodule
