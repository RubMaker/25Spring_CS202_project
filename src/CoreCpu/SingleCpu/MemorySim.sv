`timescale 1ns / 1ps
`include "Constants.vh"
//模拟测试用的

module MemorySim (
    input                    clka, clkb,
    input  logic [13:0     ] addra, addrb,
    input  logic [`DATA_WIDTH] write_datab,
    input  logic             web,          // port b write enable
    output logic [`DATA_WIDTH] dataa, datab
);

    reg [`DATA_WIDTH] mem [16383:0] /*verilator public*/;
    reg [`DATA_WIDTH] dataa_temp;
    reg [`DATA_WIDTH] datab_temp;
    logic [`DATA_WIDTH] ShowData;
    assign ShowData = mem[14'h0001];
    always_ff @(posedge clka) begin : inst_mem
        dataa <= mem[addra];
    end

    always_ff @(posedge clkb) begin : data_mem
    datab <= mem[addrb];
        unique if (~web) begin
            datab_temp <= mem[addrb];
        end
        else begin
            datab_temp <= write_datab;
            mem[addrb] <= write_datab;
        end
    end

endmodule
