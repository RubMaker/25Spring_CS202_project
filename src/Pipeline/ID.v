`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Module: ID
// Description:
//   The Instruction Decode (ID) stage of the RISC-V CPU.
//   This module reads instruction fields and passes control signals
//   output by the Controller submodule. In addition, it instantiates the 
//   Hazard detection unit to generate an IF_ID_Write signal that controls the IF and
//   IF_ID pipeline registers.
//   (Note: The register file is instantiated at the top level and is not included here.)
//   Modified: Instead of outputting Rs1 and Rs2 data, the module now outputs the
//   source register addresses extracted from the instruction.
//////////////////////////////////////////////////////////////////////////////////

module ID (
    input  wire         clk,         // Clock signal
    input  wire         rst,         // Asynchronous reset signal
    input  wire [31:0]  Inst,        // 32-bit instruction from IF stage
    input  wire [31:0]  PcIn,        // Current PC value from IF stage
    output reg  [31:0]  PcOut,       // PC forwarded to the next stage

    // Outputs from the Controller submodule
    output wire [4:0]   Rd,          // Destination register address
    output wire [31:0]  Imm,         // Immediate value (sign extended)
    output wire         RegWrite,    // Register write enable
    output wire         ALUSrc,      // ALU operand select (0 for Rs2, 1 for immediate)
    output wire         MemtoReg,    // Write-back source select (0 for ALU result, 1 for memory data)
    output wire         MemRead,     // Memory read enable
    output wire         MemWrite,    // Memory write enable
    output wire         Branch,      // Branch flag
    output wire         PcWrite,
    output wire [3:0]   ALU_op,      // ALU operation code
    output wire [2:0]   BRU_op,      // Branch unit operation code
    output wire [2:0]   LS_op,       // Load/Store operation code

    // New outputs for hazard control:
    input  wire         ID_EX_MemRead, // Indicates whether the instruction in ID/EX is a load
    input  wire [4:0]   ID_EX_Rd,      // Destination register from ID/EX stage
    output wire         IF_ID_Write,   // Write enable signal for IF/ID pipeline register; deasserted when a hazard occurs

    // output the source register addresses.
    output wire [4:0]   Rs1Addr,     // Address specified in the Rs1 field (Inst[19:15])
    output wire [4:0]   Rs2Addr,      // Address specified in the Rs2 field (Inst[24:20])
    output wire         Stall        // Stall signal for hazard detection 
);

    // Instantiate the Controller submodule to perform instruction decoding.
    Controller controller_inst (
        .Inst(Inst),
        .Rd(Rd),
        .Imm(Imm),
        .RegWrite(RegWrite),
        .ALUSrc(ALUSrc),
        .MemtoReg(MemtoReg),
        .MemRead(MemRead),
        .MemWrite(MemWrite),
        .Branch(Branch),
        .ALU_op(ALU_op),
        .BRU_op(BRU_op),
        .LS_op(LS_op)
    );
    
    // Instead of being driven by the register file, now we extract Rs1 and Rs2 addresses
    // directly from the instruction.
    assign Rs1Addr = Inst[19:15];
    assign Rs2Addr = Inst[24:20];
    
    // Instantiate the Hazard detection unit.
    Hazard hazard_inst (
        .ID_EX_MemRead(ID_EX_MemRead),
        .ID_EX_Rd(ID_EX_Rd),
        .IF_Rs1(Inst[19:15]),
        .IF_Rs2(Inst[24:20]),
        .Stall(Stall),             // For internal use if needed.
        .IF_ID_Write(IF_ID_Write),
        .PcWrite(PcWrite)
    );

    // Forward the PC value to the next stage.
    always @(posedge clk or posedge rst) begin
        if (rst)
            PcOut <= 32'd0;
        else
            PcOut <= PcIn;
    end

endmodule
