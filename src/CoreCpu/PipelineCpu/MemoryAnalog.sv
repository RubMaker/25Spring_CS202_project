`timescale 1ns / 1ps
`include "Constants.vh"

module MemoryAnalog (
    input                    clka, clkb,
    input  logic [13:0     ] addra, addrb,
    input  logic [`DATA_WIDTH] write_datab,
    input  logic             web,          // port b write enable
    output logic [`DATA_WIDTH] dataa, datab
);

    reg [`DATA_WIDTH] mem [16383:0] /*verilator public*/;
    reg [`DATA_WIDTH] dataa_temp;
    reg [`DATA_WIDTH] datab_temp;

    always_ff @(posedge clka) begin : inst_mem
        dataa <= dataa_temp;
        dataa_temp <= mem[addra];
    end

    always_ff @(posedge clkb) begin : data_mem
    datab <= datab_temp;
        unique if (~web) begin
            datab_temp <= mem[addrb];
        end
        else begin
            datab_temp <= write_datab;
            mem[addrb] <= write_datab;
        end
    end

endmodule  
