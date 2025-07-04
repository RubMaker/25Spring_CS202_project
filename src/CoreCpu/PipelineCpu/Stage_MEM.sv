`timescale 1ns / 1ps
`include "Constants.vh"

module Stage_MEM (
    input                        clk, rst,
    input  logic [`MEM_CTRL_WIDTH] MEM_ctrl_in,
	input  logic [`WB_CTRL_WIDTH ] WB_ctrl_in,
    input  logic [`DATA_WIDTH    ] write_addr,
    input  logic [`DATA_WIDTH    ] write_data,
    input  logic [`REGS_WIDTH    ] EX_MEM_rd,
    output logic [`REGS_WIDTH    ] MEM_rd_out,
    output logic [`DATA_WIDTH    ] addr_out,
    output logic [`DATA_WIDTH    ] data_out,
    output logic [`WB_CTRL_WIDTH ] WB_ctrl_out,
    output logic                 dcache_stall,
    // interact with Memory
    input  logic [`DATA_WIDTH    ] mem_data,
    output logic [`DATA_WIDTH    ] mem_addr,
    output logic [`DATA_WIDTH    ] mem_write_data,
    output logic                 mem_web
);

    wire MemWrite, MemRead;
    wire [`LDST_WIDTH] MEMOp;
    assign WB_ctrl_out = WB_ctrl_in;
    assign MEM_rd_out = EX_MEM_rd;
    assign addr_out = write_addr;
    assign MemWrite = MEM_ctrl_in[1];
    assign MemRead = MEM_ctrl_in[0];
    assign MEMOp = MEM_ctrl_in[4:2];

    DCache dcache_inst (
        .clk,
        .rst,
        .addr(write_addr),
        .data_out,
        .write_data,
        .MEMOp,
        .MemWrite,
        .MemRead,
        .dcache_stall,
        .mem_data,
        .mem_addr,
        .mem_write_data,
        .mem_web
    );

endmodule  
