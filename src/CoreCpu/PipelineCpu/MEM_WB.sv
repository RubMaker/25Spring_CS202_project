`timescale 1ns / 1ps
`include "Constants.vh"

module MEM_WB (
    input                       clk, rst,
    input                       dcache_stall,
    input  logic [`DATA_WIDTH   ] addr_in, data_in,
    input  logic [`REGS_WIDTH   ] rd_in,
    output logic [`DATA_WIDTH   ] addr_out, data_out,
    output logic [`REGS_WIDTH   ] rd_out,
    // Control related
    input  logic [`WB_CTRL_WIDTH] WB_ctrl_in,
    output logic [`WB_CTRL_WIDTH] WB_ctrl_out
);

    reg [`DATA_WIDTH] addr;
    reg [`DATA_WIDTH] data;
    reg [`REGS_WIDTH] rd;
    reg [`WB_CTRL_WIDTH]  WB_ctrl;
    assign addr_out = addr;
    assign data_out = data;
    assign rd_out = rd;
    assign WB_ctrl_out = WB_ctrl;

    always_ff @(posedge clk) begin
        if (rst) begin
            addr <= 0;
            data <= 0;
            rd <= 0;
            WB_ctrl <= 0;
        end else if (dcache_stall) begin
            addr <= addr;
            data <= data;
            rd <= rd;
            WB_ctrl <= WB_ctrl;
        end else begin
            addr <= addr_in;
            data <= data_in;
            rd <= rd_in;
            WB_ctrl <= WB_ctrl_in;
        end
    end
    
endmodule  
