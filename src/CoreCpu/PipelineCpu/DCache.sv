`timescale 1ns / 1ps
`include "Constants.vh"

module DCache #(
    parameter CACHE_WIDTH = 4
)(
    input  logic             clk, rst,
    // cpu interface
    input  logic [`DATA_WIDTH] addr,
    input  logic [`DATA_WIDTH] write_data,
    input  logic [`LDST_WIDTH] MEMOp,
    input  logic             MemRead,
    input  logic             MemWrite,
    output logic [`DATA_WIDTH] data_out,
    output logic             dcache_stall,
    // mem interface
    input  logic [`DATA_WIDTH] mem_data,
    output logic [`DATA_WIDTH] mem_addr,
    output logic [`DATA_WIDTH] mem_write_data,
    output logic             mem_web
);

    // format: valid[47-CACHE_WIDTH] | dirty[46-CACHE_WIDTH] | tag[45-CACHE_WIDTH:32] | data[31:0]
    reg  [47-CACHE_WIDTH:0] cache [0: (1 << CACHE_WIDTH) - 1];
    reg  [47-CACHE_WIDTH:0] old_cache;
    // state: 0: idle, 1: reading, 2: finish [3: writing, 4: finish]
    reg  [2:0] cache_state;
    reg  [`DATA_WIDTH] rdata_out;
    wire [CACHE_WIDTH-1:0] offset = addr[CACHE_WIDTH+1:2];
    wire [13-CACHE_WIDTH:0] tag = addr[15:CACHE_WIDTH+2];
    wire uncached = (addr[19:16] == 4'hf);  // 1: mmio, 0: memory
    wire [`DATA_WIDTH] rdata_in = (cache_state == 2 || uncached) ? mem_data : cache[offset][31:0];
    wire [`DATA_WIDTH] cache_wdata = (MemRead && cache_state == 2) ? mem_data : rdata_out;
    wire [2:0] end_state = (old_cache[46-CACHE_WIDTH] && old_cache[45-CACHE_WIDTH:32] != tag) ? 4 : 2;
    wire cache_web = (MemRead && cache_state == 2) || (MemWrite && cache_state == 2)
    || (MemWrite && cache[offset][47-CACHE_WIDTH] && cache[offset][45-CACHE_WIDTH:32] == tag && cache_state == 0);
    assign data_out = rdata_out;
    assign dcache_stall = !uncached && (MemRead || MemWrite) && cache_state != end_state
    && (!cache[offset][47-CACHE_WIDTH] || cache[offset][45-CACHE_WIDTH:32] != tag || (old_cache[46-CACHE_WIDTH] && old_cache[45-CACHE_WIDTH:32] != tag));

    initial begin
        for (int i = 0; i < (1 << CACHE_WIDTH); i++) begin
            cache[i] = 0;
        end        
    end

    // transition of cache state and store old cache
    always_ff @(negedge clk) begin
        if (rst || !dcache_stall) begin
            cache_state <= 0;
            old_cache <= 0;
        end else begin
            cache_state <= cache_state + 1;
            old_cache <= (cache_state == 0) ? cache[offset] : old_cache;
        end
    end

    // write to cache
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < (1 << CACHE_WIDTH); i++) begin
                cache[i] <= 0;
            end
        end else begin
            cache[offset] <= cache_web ? {1'b1, MemWrite, tag, cache_wdata} : cache[offset];
        end
    end

    // interaction with memory
    always_comb begin
        unique case (cache_state)
            0: begin
                mem_addr = addr;
                mem_write_data = uncached ? write_data : 0;
                mem_web = 0;
            end
            1: begin
                mem_addr = addr;
                mem_write_data = 0;
                mem_web = 0;
            end
            2: begin
                mem_addr = {16'b0, old_cache[45-CACHE_WIDTH:32], addr[CACHE_WIDTH+1:0]};
                mem_write_data = old_cache[31:0];
                mem_web = (old_cache[46-CACHE_WIDTH] && old_cache[45-CACHE_WIDTH:32] != tag);
            end
            3: begin
                mem_addr = {16'b0, old_cache[45-CACHE_WIDTH:32], addr[CACHE_WIDTH+1:0]};
                mem_write_data = old_cache[31:0];
                mem_web = 1;
            end
            default: begin
                mem_addr = 0;
                mem_write_data = 0;
                mem_web = 0;
            end
        endcase
    end

    // input: rdata_in, output: rdata_out
    always_comb begin
        unique case (MEMOp)
            `LW_OPERATION: begin
                rdata_out = rdata_in;
            end
            `LH_OPERATION: begin
                if (addr[1]) begin
                    rdata_out = {rdata_in[31] ? 16'hffff : 16'h0000, rdata_in[31:16]};
                end
                else begin
                    rdata_out = {rdata_in[15] ? 16'hffff : 16'h0000, rdata_in[15:0]};
                end
            end
            `LHU_OPERATION: begin
                rdata_out = {16'h0000, addr[1] ? rdata_in[31:16] : rdata_in[15:0]};
            end
            `LBU_OPERATION: begin
                rdata_out = {24'h000000, addr[1] ? (addr[0] ? rdata_in[31:24] : rdata_in[23:16]) : (addr[0] ? rdata_in[15:8] : rdata_in[7:0])};
            end
            `LB_OPERATION: begin
                unique case (addr[1:0])
                    2'b00: rdata_out = {rdata_in[7] ? 24'hffffff : 24'h000000, rdata_in[7:0]};
                    2'b01: rdata_out = {rdata_in[15] ? 24'hffffff : 24'h000000, rdata_in[15:8]};
                    2'b10: rdata_out = {rdata_in[23] ? 24'hffffff : 24'h000000, rdata_in[23:16]};
                    2'b11: rdata_out = {rdata_in[31] ? 24'hffffff : 24'h000000, rdata_in[31:24]};
                endcase
            end
            `SW_OPERATION: begin
                rdata_out = write_data;
            end
            `SH_OPERATION: begin
                rdata_out = addr[1] ? {write_data[15:0], rdata_in[15:0]} : {rdata_in[31:16], write_data[15:0]};
            end
            `SB_OPERATION: begin
                unique case (addr[1:0])
                    2'b00: rdata_out = {rdata_in[31:8], write_data[7:0]};
                    2'b01: rdata_out = {rdata_in[31:16], write_data[7:0], rdata_in[7:0]}; 
                    2'b10: rdata_out = {rdata_in[31:24], write_data[7:0], rdata_in[15:0]}; 
                    2'b11: rdata_out = {write_data[7:0], rdata_in[23:0]}; 
                endcase
            end
        endcase
    end
    
endmodule  
