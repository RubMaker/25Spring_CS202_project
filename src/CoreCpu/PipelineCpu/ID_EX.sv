`timescale 1ns / 1ps
`include "Constants.vh"

module ID_EX (
    input                  clk, rst,
    input  [`DATA_WIDTH    ] pc_in, data1_in, data2_in, imm_in,
    input  [`REGS_WIDTH    ] rd_in,              // inst[11-7], rd_in
    input  [`REGS_WIDTH    ] rs1_in, rs2_in,     // ID_EX_rs1, ID_EX_rs2
    input                  IF_ID_Write,        // control hazard flush, 1 yes, 0 no
    input                  dcache_stall,
    input                  predict_fail,
    input                  predict_result_in,
    input  [`DATA_WIDTH    ] old_predict_pc_in,
    output [`DATA_WIDTH    ] old_predict_pc_out, 
    output [`DATA_WIDTH    ] pc_out, data1_out, data2_out, imm_out,
    output [`REGS_WIDTH    ] rd_out,             // inst[11-7], rd_out
    output [`REGS_WIDTH    ] rs1_out, rs2_out,   // ID_EX_rs1, ID_EX_rs2
    output                 predict_result_out,
    // Control related
    input  [`EX_CTRL_WIDTH ] EX_ctrl_in,
    input  [`MEM_CTRL_WIDTH] MEM_ctrl_in,
    input  [`WB_CTRL_WIDTH ] WB_ctrl_in,
    output [`EX_CTRL_WIDTH ] EX_ctrl_out,
    output [`MEM_CTRL_WIDTH] MEM_ctrl_out,
    output [`WB_CTRL_WIDTH ] WB_ctrl_out
);

    reg [`DATA_WIDTH] pc;
    reg [`DATA_WIDTH] data1;
    reg [`DATA_WIDTH] data2;
    reg [`DATA_WIDTH] imm;
    reg [`REGS_WIDTH] rd;
    reg [`REGS_WIDTH] rs1;
    reg [`REGS_WIDTH] rs2;
    reg predict_result;
    reg [`DATA_WIDTH] old_predict_pc;
    reg [`EX_CTRL_WIDTH]  EX_ctrl;
    reg [`MEM_CTRL_WIDTH] MEM_ctrl;
    reg [`WB_CTRL_WIDTH]  WB_ctrl;
    assign pc_out = pc;
    assign data1_out = data1;
    assign data2_out = data2;
    assign imm_out = imm;
    assign rd_out = rd;
    assign rs1_out = rs1;
    assign rs2_out = rs2;
    assign EX_ctrl_out = EX_ctrl;
    assign MEM_ctrl_out = MEM_ctrl;
    assign WB_ctrl_out = WB_ctrl;
    assign predict_result_out = predict_result;
    assign old_predict_pc_out = old_predict_pc;

    always_ff @(posedge clk) begin
        if (rst || ((IF_ID_Write || predict_fail) && !dcache_stall)) begin
            pc <= 0;
            data1 <= 0;
            data2 <= 0;
            imm <= 0;
            rd <= 0;
            rs1 <= 0;
            rs2 <= 0;
            EX_ctrl <= 0;
            MEM_ctrl <= 0;
            WB_ctrl <= 0;
            predict_result <= 0;
            old_predict_pc <= 0;
        end else if (dcache_stall) begin
            pc <= pc;
            data1 <= data1;
            data2 <= data2;
            imm <= imm;
            rd <= rd;
            rs1 <= rs1;
            rs2 <= rs2;
            EX_ctrl <= EX_ctrl;
            MEM_ctrl <= MEM_ctrl;
            WB_ctrl <= WB_ctrl;
            predict_result <= predict_result;
            old_predict_pc <= old_predict_pc;
        end else begin
            pc <= pc_in;
            data1 <= data1_in;
            data2 <= data2_in;
            imm <= imm_in;
            rd <= rd_in;
            rs1 <= rs1_in;
            rs2 <= rs2_in;
            EX_ctrl <= EX_ctrl_in;
            MEM_ctrl <= MEM_ctrl_in;
            WB_ctrl <= WB_ctrl_in;
            predict_result <= predict_result_in;
            old_predict_pc <= old_predict_pc_in;
        end
    end
    
endmodule  
