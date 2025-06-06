`timescale 1ns / 1ps
`include "Constants.vh"

module Queue (
    input  logic        clk, reset,
    input  logic [7:0]  DataIn,
    input  logic        Ready,
    output logic [`DATA_WIDTH] DataOut,
    output logic [`DATA_WIDTH] Address
);

    logic [31:0] DataQueue;
    logic [2:0] cnt;
    logic [4:0] clkCnt;
    logic [31:0] Address_;
    logic full;

    assign DataOut = DataQueue;
    assign full = (cnt == 4);

    assign Address = Address_;

    always_ff @(posedge clk) begin : addr
        if (reset) begin
            Address_ <= 0;
        end else if (full && clkCnt == 0) begin
            Address_ <= Address_ + 4;
        end else begin
            Address_ <= Address_;
        end
    end

    always_ff @(posedge clk) begin : cnt_for_mem
        if (reset) begin
            clkCnt <= 0;
        end else if (clkCnt == 15) begin
            clkCnt <= 0;
        end else if (full) begin
            clkCnt <= clkCnt + 1;
        end else begin
            clkCnt <= clkCnt;
        end
    end

    always_ff @(posedge clk) begin : write
        if (reset || (full && clkCnt == 15)) begin
            cnt <= 0;
            DataQueue <= 0;
        end else if (Ready) begin
            cnt <= cnt + 1;
            DataQueue <= {DataIn, DataQueue[31:8]};
        end else begin
            cnt <= cnt;
            DataQueue <= DataQueue;
        end
    end
    
endmodule
