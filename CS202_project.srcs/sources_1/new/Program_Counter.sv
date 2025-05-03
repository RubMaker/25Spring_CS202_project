`include "Constants.vh"
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2025 02:14:36 PM
// Design Name: 
// Module Name: Program_Counter
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module Program_Counter(
    input clk,
    input reset,
    input logic pc_wr_en,
    input logic icache_en,
    input logic dcache_en,
    input logic [31:0] pc_in,
    output logic [31:0] pc_out
    );
    //pc_wr_en icache_en dcache_en are low active
    logic [31:0] pc_reg = 32'h0000_0000; // Initialize PC to 0
    assign pc_out = pc_reg; // Output the current PC value
    always_ff @(posedge clk) begin
        if (reset) begin
            pc_reg <= 32'h0000_0000; // Reset PC to 0
        end else if (pc_wr_en) begin
            // pc_reg <= pc_reg;
        end else if (icache_en || dcache_en) begin
            // pc_reg <= pc_reg;
        end else begin
            pc_reg <= pc_in; // Hold current PC value
        end
    end
endmodule
