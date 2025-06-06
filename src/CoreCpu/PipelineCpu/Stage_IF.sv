`timescale 1ns / 1ps
`include "Constants.vh"

module Stage_IF (
    input                    clk, rst,
    input  logic [`DATA_WIDTH] pc_in,
    input  logic             dcache_stall, IF_ID_Write,
    input  logic             old_predict, old_branch, branch_result,
    input  logic [`DATA_WIDTH] old_pc, old_branch_pc, old_predict_pc,
    output logic [`DATA_WIDTH] pc_out,
    output logic [`DATA_WIDTH] inst_out,
    output logic             icache_stall,
    output logic             predict_result,
    output logic             predict_fail,
    // interact with Memory
    input  logic [`DATA_WIDTH] mem_inst,
    output logic [`DATA_WIDTH] mem_pc
);

    logic branch, predict, excp, jump, sret;
    logic [`REGS_WIDTH] rs1, rd;
    logic [`DATA_WIDTH] new_pc, imm, inst;
    assign inst_out = inst;
    assign pc_out = new_pc;
    assign jump = inst[6:0] == `JAL_OPERATION || inst[6:0] == `JALR_OPERATION;
    assign branch = inst[6:0] == `BRANCH_OPERATION || jump;
    assign predict = !jump && branch;
    assign excp = inst[6:0] == `ECALL_OPERATION;
    assign sret = excp && inst[31:25] == `SRET_OPERATION;
    assign rs1 = inst[6:0] != `JAL_OPERATION ? inst[19:15] : 0;
    assign rd = inst[11:7];

    ICache icache_inst (
        .clk,
        .rst,
        .addr(pc_in),
        .inst,
        .predict_fail,
        .icache_stall,
        .mem_inst,
        .mem_pc
    );

    ImmGen immgen_inst (
        .inst,
        .imm
    );

    Branch_Predictor bp_inst (
        .clk,
        .rst,
        .stall(icache_stall || dcache_stall || IF_ID_Write),
        .branch,
        .predict,
        .excp,
        .sret,
        .rs1,
        .rd,
        .pc(pc_in),
        .imm,
        .old_pc,
        .old_predict,
        .old_actual(branch_result),
        .old_branch,
        .old_branch_pc,
        .old_predict_pc,
        .target_pc(new_pc),
        .predict_result,
        .predict_fail
    );

endmodule  
