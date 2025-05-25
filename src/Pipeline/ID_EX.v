`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Module: ID_EX
// Description:
//   The ID_EX module is a pipeline register between the Instruction Decode (ID)
//   stage and the Execution (EX) stage. It captures data (PC, source/destination
//   register numbers, immediate values) along with control signals from the ID stage
//   and passes them to the EX stage. This module also handles hazards:
//     1. On reset or flush, all registers are cleared.
//     2. On a stall, the pipeline holds its current state.
//     3. Otherwise, data is updated on the positive clock edge.
//   New: it also passes the Rs1 and Rs2 register numbers to support forwarding.
//////////////////////////////////////////////////////////////////////////////////

module ID_EX (
    input  wire         clk,         // Clock signal
    input  wire         rst,         // Asynchronous reset signal

    // Data inputs from the ID stage
    input  wire [31:0]  PcIn,        // Current program counter from ID stage
    input  wire [4:0]   Rs1In,       // Source register 1 address (data)
    input  wire [4:0]   Rs2In,       // Source register 2 address (data)
    input  wire [4:0]   RdIn,        // Destination register address
    input  wire [31:0]  ImmIn,       // Immediate value

    // New: Source register numbers from instruction fields for forwarding
    input  wire [4:0]   rs1_in,      // Source register number rs1 (from instruction)
    input  wire [4:0]   rs2_in,      // Source register number rs2 (from instruction)

    // Control signals from the ID stage
    input  wire         RegWriteIn,  // Register write enable
    input  wire         ALUSrcIn,    // ALU second operand select: 0 for Rs2 and 1 for immediate
    input  wire         MemtoRegIn,  // Write-back source select: 0 for ALU result, 1 for memory
    input  wire         MemReadIn,   // Memory read enable
    input  wire         MemWriteIn,  // Memory write enable
    input  wire         BranchIn,    // Branch instruction flag
    input  wire [3:0]   ALU_opIn,    // ALU operation code
    input  wire [2:0]   BRU_opIn,    // Branch unit control signal
    input  wire [2:0]   LS_opIn,     // Load/Store operation code

    // Hazard control signals provided by the hazard detection unit
    input  wire         stall,       // Pipeline stall signal
    input  wire         flush,       // Pipeline flush signal (e.g., branch misprediction)

    // Outputs to the EX stage
    output reg [31:0]   PcOut,
    output reg [4:0]    Rs1Out,      // Data path: source register 1 from register file
    output reg [4:0]    Rs2Out,      // Data path: source register 2 from register file
    output reg [4:0]    RdOut,
    output reg [31:0]   ImmOut,
    
    // New outputs for forwarding: the source register numbers from instruction fields
    output reg [4:0]    rs1_out,
    output reg [4:0]    rs2_out,

    // Control outputs to the EX stage
    output reg          RegWriteOut,
    output reg          ALUSrcOut,
    output reg          MemtoRegOut,
    output reg          MemReadOut,
    output reg          MemWriteOut,
    output reg          BranchOut,
    output reg [3:0]    ALU_opOut,
    output reg [2:0]    BRU_opOut,
    output reg [2:0]    LS_opOut
);

    // Synchronous register update with asynchronous reset.
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            // On reset, clear all outputs.
            PcOut       <= 32'd0;
            Rs1Out      <= 5'd0;
            Rs2Out      <= 5'd0;
            RdOut       <= 5'd0;
            ImmOut      <= 32'd0;
            rs1_out     <= 5'd0;
            rs2_out     <= 5'd0;
            RegWriteOut <= 1'b0;
            ALUSrcOut   <= 1'b0;
            MemtoRegOut <= 1'b0;
            MemReadOut  <= 1'b0;
            MemWriteOut <= 1'b0;
            BranchOut   <= 1'b0;
            ALU_opOut   <= 4'd0;
            BRU_opOut   <= 3'd0;
            LS_opOut    <= 3'd0;
        end else if (flush) begin
            // On flush (e.g., branch misprediction), clear all outputs.
            PcOut       <= 32'd0;
            Rs1Out      <= 5'd0;
            Rs2Out      <= 5'd0;
            RdOut       <= 5'd0;
            ImmOut      <= 32'd0;
            rs1_out     <= 5'd0;
            rs2_out     <= 5'd0;
            RegWriteOut <= 1'b0;
            ALUSrcOut   <= 1'b0;
            MemtoRegOut <= 1'b0;
            MemReadOut  <= 1'b0;
            MemWriteOut <= 1'b0;
            BranchOut   <= 1'b0;
            ALU_opOut   <= 4'd0;
            BRU_opOut   <= 3'd0;
            LS_opOut    <= 3'd0;
        end else if (stall) begin
            // On a stall, maintain the previous state.
            PcOut       <= PcOut;
            Rs1Out      <= Rs1Out;
            Rs2Out      <= Rs2Out;
            RdOut       <= RdOut;
            ImmOut      <= ImmOut;
            rs1_out     <= rs1_out;
            rs2_out     <= rs2_out;
            RegWriteOut <= RegWriteOut;
            ALUSrcOut   <= ALUSrcOut;
            MemtoRegOut <= MemtoRegOut;
            MemReadOut  <= MemReadOut;
            MemWriteOut <= MemWriteOut;
            BranchOut   <= BranchOut;
            ALU_opOut   <= ALU_opOut;
            BRU_opOut   <= BRU_opOut;
            LS_opOut    <= LS_opOut;
        end else begin
            // Normal operation: update pipeline registers with inputs from the ID stage.
            PcOut       <= PcIn;
            Rs1Out      <= Rs1In;
            Rs2Out      <= Rs2In;
            RdOut       <= RdIn;
            ImmOut      <= ImmIn;
            rs1_out     <= rs1_in;
            rs2_out     <= rs2_in;
            RegWriteOut <= RegWriteIn;
            ALUSrcOut   <= ALUSrcIn;
            MemtoRegOut <= MemtoRegIn;
            MemReadOut  <= MemReadIn;
            MemWriteOut <= MemWriteIn;
            BranchOut   <= BranchIn;
            ALU_opOut   <= ALU_opIn;
            BRU_opOut   <= BRU_opIn;
            LS_opOut    <= LS_opIn;
        end
    end

endmodule