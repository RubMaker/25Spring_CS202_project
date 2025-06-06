`timescale 1ns / 1ps
`include "Constants.vh"

module ICache #(
    parameter CACHE_WIDTH = 4
)(
    input  logic             clk, rst,
    // cpu interface
    input  logic [`DATA_WIDTH] addr,
    input  logic             predict_fail,
    output logic [`DATA_WIDTH] inst,
    output logic             icache_stall,
    // mem interface
    input  logic [`DATA_WIDTH] mem_inst,
    output logic [`DATA_WIDTH] mem_pc
);

    // format: valid[38] | tag[37:32] | data[31:0]
    reg  [46-CACHE_WIDTH:0] cache [0: (1 << CACHE_WIDTH) - 1];
    reg  [1:0] read_state;
    wire uncached;
    wire [CACHE_WIDTH-1:0] offset = addr[CACHE_WIDTH+1:2];
    wire [13-CACHE_WIDTH:0] tag = addr[15:CACHE_WIDTH+2];
    assign mem_pc = addr;
    assign uncached = addr[31:16] == 16'h1c09;
    assign inst = (read_state == 2 || uncached) ? mem_inst : cache[offset][`DATA_WIDTH];
    assign icache_stall = !uncached && !predict_fail && (!cache[offset][46-CACHE_WIDTH] || cache[offset][45-CACHE_WIDTH:32] != tag) && (read_state != 3);

    initial begin
        // read_state = 0;
        for (int i = 0; i < (1 << CACHE_WIDTH); i++) begin
            cache[i] = 0;
        end        
    end

    // read from memory
    always_ff @(negedge clk) begin
        if (rst || !icache_stall) begin
            read_state <= 0;
        end else begin
            read_state <= read_state + 1;
        end
    end

    // write to cache
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < (1 << CACHE_WIDTH); i++) begin
                cache[i] <= 0;
            end
        end else begin
            cache[offset] <= (read_state == 2) ? {1'b1, tag, mem_inst} : cache[offset];
        end
    end
    
endmodule  
