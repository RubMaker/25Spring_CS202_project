`timescale 1ns / 1ps
`include "Constants.vh"

//////////////////////////////////////////////////////////////////////////////////
// Module: Forward
// Description:
//   This module implements the forwarding (bypassing) logic to resolve data hazards.
//   It checks whether the source registers (rs1 and rs2) in the EX stage match with the
//   destination registers from later pipeline stages (EX_MEM and MEM_WB). When a match
//   is found (and if writing is enabled), the corresponding forwarded data is output.
//   Otherwise, the original data read from the register file is used.
//////////////////////////////////////////////////////////////////////////////////

module Forwarding(
    input  wire [4:0] EX_rs1,                // Source register 1 number in EX stage
    input  wire [4:0] EX_rs2,                // Source register 2 number in EX stage

    // Signals from the EX/MEM stage
    input  wire [4:0] MEM_rd,                // Destination register number in EX_MEM stage
    input  wire       MEM_RegWrite,          // Write enable from EX_MEM stage
    input  wire [31:0] EX_MEM_AluResult,      // ALU result forwarded from EX_MEM stage

    // Signals from the MEM/WB stage
    input  wire [4:0] WB_rd,                 // Destination register number in MEM_WB stage
    input  wire       WB_RegWrite,           // Write enable from MEM_WB stage
    input  wire [31:0] WB_Result,           // Write-back result forwarded from MEM_WB stage

    // Original register file data (from ID stage)
    input  wire [31:0] Rs1Data,              // Data for source register 1
    input  wire [31:0] Rs2Data,              // Data for source register 2

    // Forwarded outputs for ALU operands
    output reg  [31:0] Forwarded_A,          // Forwarded first ALU operand
    output reg  [31:0] Forwarded_B           // Forwarded second ALU operand
);

  always @(*) begin
    // Forward for operand A (rs1):
    if (MEM_RegWrite && (MEM_rd != 5'd0) && (MEM_rd == EX_rs1))
      Forwarded_A = EX_MEM_AluResult;
    else if (WB_RegWrite && (WB_rd != 5'd0) && (WB_rd == EX_rs1))
      Forwarded_A = WB_Result;
    else
      Forwarded_A = Rs1Data;

    // Forward for operand B (rs2):
    if (MEM_RegWrite && (MEM_rd != 5'd0) && (MEM_rd == EX_rs2))
      Forwarded_B = EX_MEM_AluResult;
    else if (WB_RegWrite && (WB_rd != 5'd0) && (WB_rd == EX_rs2))
      Forwarded_B = WB_Result;
    else
      Forwarded_B = Rs2Data;
  end

endmodule
