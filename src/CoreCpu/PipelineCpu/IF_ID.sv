`timescale 1ns / 1ps
`include "Constants.vh"

module IF_ID (
    input              clk, rst,
    input              icache_stall,
    input              dcache_stall,
    input              IF_ID_Write,
    input              predict_fail,
    input              predict_in,
    input  [`DATA_WIDTH] predict_pc_in,
    input  [`DATA_WIDTH] inst_in, pc_in,
    output [`DATA_WIDTH] inst_out, pc_out,
    output             predict_out,
    output [`DATA_WIDTH] predict_pc_out
);

    reg [`DATA_WIDTH] inst;
    reg [`DATA_WIDTH] pc;
    reg [`DATA_WIDTH] predict_pc;
    reg predict;
    assign inst_out = inst;
    assign pc_out = pc;
    assign predict_out = predict;
    assign predict_pc_out = predict_pc;

    always_ff @(posedge clk) begin
        if (rst || (icache_stall && !dcache_stall && !IF_ID_Write) || predict_fail) begin
            inst <= 0;
            pc <= 0;
            predict <= 0;
            predict_pc <= 0;
        end else if (dcache_stall || IF_ID_Write) begin
            inst <= inst;
            pc <= pc;
            predict <= predict;
            predict_pc <= predict_pc;
        end else begin
            inst <= inst_in;
            pc <= pc_in;
            predict <= predict_in;
            predict_pc <= predict_pc_in;
        end
    end

endmodule  
