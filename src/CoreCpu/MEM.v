`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module: MEM
// Description: Memory Access stage module.
//              For load instructions, it fetches data from the DCache.
//              For others, it passes the ALU result to the next stage.
//////////////////////////////////////////////////////////////////////////////////

module MEM(
    input         clk,         // Clock signal
    input         rst,         // Reset signal, active high
    // Inputs from EX stage:
    input  [31:0] AluResult,   // Effective address from EX stage
    input  [31:0] WriteData,   // Data for store instructions
    input         MemRead,     // Memory read flag (load)
    input         MemWrite,    // Memory write flag (store)
    input  [2:0]  LS_op,       // Load/Store operation type
    // Outputs to WB stage:
    output [31:0] Result,      // Data result from cache (for loads) or ALU result
    output        Stall,       // Stall signal due to DCache miss
    // External memory interface:
    input  [31:0] MemData,     
    output [31:0] MemAddr,     
    output [31:0] MemWriteData,
    output        MemWe
);

   // Internal signal for data output from DCache
   wire [31:0] CacheDataOut;

   // Instantiate DCache module for load/store operations.
   DCache U_DCache (
      .clk(clk),
      .rst(rst),
      .Addr(AluResult),
      .WriteData(WriteData),
      .MemRead(MemRead),
      .MemWrite(MemWrite),
      .LS_op(LS_op),
      .DataOut(CacheDataOut),
      .Stall(Stall),
      .MemData(MemData),
      .MemAddr(MemAddr),
      .MemWriteData(MemWriteData),
      .MemWe(MemWe)
   );

   // For load instructions, forward the data from DCache; otherwise, pass through the ALU result.
   assign Result = MemRead ? CacheDataOut : AluResult;

endmodule