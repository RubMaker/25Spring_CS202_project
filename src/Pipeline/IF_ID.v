`timescale 1ns/1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/18 20:40:33
// Design Name: 
// Module Name: IF_ID
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
module IF_ID (
    input         clk,           // Clock signal
    input         rst,           // Asynchronous reset (active high)
    input         IF_ID_Write,   // Pipeline register write enable (active high)
    input         DStall,         
    input         IStall, 
    input  [31:0] inst_in,       // Instruction input from IF stage
    input  [31:0] pc_in,         // Program counter input from IF stage
    output [31:0] inst_out,  // Instruction output to ID stage
    output [31:0] pc_out     // PC output to ID stage
);

  reg [31:0] inst = 32'b0; 
  reg [31:0] pc = 32'b0;
  // Update pipeline register on the rising edge of the clock or reset
  always @(posedge clk or posedge rst) begin
    if (rst || (IStall && !DStall && !IF_ID_Write)) begin
      // On reset, clear the pipeline register registers to zero
      inst <= 32'd0;
      pc   <= 32'd0;
    end else if (!IF_ID_Write || DStall) begin
      // If write enable is low or a stall condition is asserted,
      // maintain the current values in the pipeline register
      inst <= inst;
      pc   <= pc;
    end else begin
      // Otherwise update the pipeline register with new IF stage outputs
      inst <= inst_in;
      pc   <= pc_in;
    end
  end

  assign inst_out = inst;
  assign pc_out = pc;
endmodule
