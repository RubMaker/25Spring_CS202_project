`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module: Hazard
// Description:
//   This hazard detection unit detects load-use hazards. It examines if the
//   previous instruction (in the ID/EX stage) is a load (MemRead asserted) and
//   if its destination register (ID_EX_Rd) is used as either source register (Rs1 or Rs2)
//   in the current instruction. If so, it asserts Stall and disables writing into
//   the IF/ID pipeline register via IF_ID_Write.
//////////////////////////////////////////////////////////////////////////////////

module Hazard(
    input  wire         ID_EX_MemRead, // 1 if the previous instruction is a load
    input  wire [4:0]   ID_EX_Rd,      // Destination register from the previous instruction
    input  wire [4:0]   IF_Rs1,        // Rs1 field of the current instruction
    input  wire [4:0]   IF_Rs2,        // Rs2 field of the current instruction
    output wire         Stall,         // Stall signal: asserted if a hazard is detected
    output wire         PcWrite,
    output wire         IF_ID_Write    // Write enable for IF/ID pipeline register; low when stall is needed
);

    // Detect hazard: if previous instruction is a load and its destination register
    // equals either the current instruction's Rs1 or Rs2.
    assign Stall = ID_EX_MemRead && ((ID_EX_Rd == IF_Rs1) || (ID_EX_Rd == IF_Rs2));
    // When a stall is detected, IF_ID_Write is deasserted (0) to freeze the pipeline register.
    assign IF_ID_Write = ~Stall;
    assign PcWrite     = ~Stall;
    
endmodule
