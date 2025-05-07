`include "Constants.vh"
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/30/2025 06:06:15 PM
// Design Name: 
// Module Name: InstructionFetchState
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

module InstructionFetchState(
    // Clock signal
    input logic clk,
    // Reset signal
    input logic rst,
    // Input program counter value
    input logic [`DATA_WIDTH] pc_input,
    // Data cache stall signal
    input logic dcache_stall,
    // IF_ID write enable signal
    input logic IF_ID_Write,
    // Old prediction result
    input logic old_predict,
    // Old branch signal
    input logic old_branch,
    // Branch result
    input logic branch_result,
    // Old program counter value
    input logic [`DATA_WIDTH] old_pc,
    // Old branch program counter value
    input logic [`DATA_WIDTH] old_branch_pc,
    // Old predicted program counter value
    input logic [`DATA_WIDTH] old_predict_pc,
    // Output program counter value
    output logic [`DATA_WIDTH] pc_output,
    // Output instruction
    output logic [`DATA_WIDTH] inst_output,
    // Instruction cache stall signal
    output logic icache_stall,
    // Prediction result
    output logic predict_result,
    // Prediction failure signal
    output logic predict_fail,
    // Instruction read from memory
    input logic [`DATA_WIDTH] mem_inst,
    // Program counter value output to memory
    output logic [`DATA_WIDTH] mem_pc
);

    // Internal signal declarations
    logic is_branch;
    logic is_predict;
    logic is_excp;
    logic is_jump;
    logic is_sret;
    logic [`REGS_WIDTH] reg_rs1;
    logic [`REGS_WIDTH] reg_rd;
    logic [`DATA_WIDTH] next_pc;
    logic [`DATA_WIDTH] immediate;
    logic [`DATA_WIDTH] instruction;

    // Output assignments
    assign inst_output = instruction;
    assign pc_output = next_pc;

    // Control signal assignments
    assign is_jump = instruction[6:0] == `JAL_OP || instruction[6:0] == `JALR_OP;
    assign is_branch = instruction[6:0] == `BRANCH_OP || is_jump;
    assign is_predict = !is_jump && is_branch;
    assign is_excp = instruction[6:0] == `ECALL_OP;
    assign is_sret = is_excp && instruction[31:25] == `SRET_OP;
    assign reg_rs1 = instruction[6:0] != `JAL_OP ? instruction[19:15] : 0;
    assign reg_rd = instruction[11:7];

    // Instantiate the instruction cache module
    ICache icache_instance (
        .clk(clk),
        .rst(rst),
        .addr(pc_input),
        .inst(instruction),
        .predict_fail(predict_fail),
        .icache_stall(icache_stall),
        .mem_inst(mem_inst),
        .mem_pc(mem_pc)
    );

    // Instantiate the immediate generation module
    ImmGen immgen_instance (
        .inst(instruction),
        .imm(immediate)
    );

    // Instantiate the branch predictor module
    Branch_Predictor bp_instance (
        .clk(clk),
        .rst(rst),
        .stall(icache_stall || dcache_stall || IF_ID_Write),
        .branch(is_branch),
        .predict(is_predict),
        .excp(is_excp),
        .sret(is_sret),
        .rs1(reg_rs1),
        .rd(reg_rd),
        .pc(pc_input),
        .imm(immediate),
        .old_pc(old_pc),
        .old_predict(old_predict),
        .old_actual(branch_result),
        .old_branch(old_branch),
        .old_branch_pc(old_branch_pc),
        .old_predict_pc(old_predict_pc),
        .target_pc(next_pc),
        .predict_result(predict_result),
        .predict_fail(predict_fail)
    );

endmodule