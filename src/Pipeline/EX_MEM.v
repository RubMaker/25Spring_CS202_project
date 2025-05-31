`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/18 23:45:07
// Design Name: 
// Module Name: EX_MEM
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

module EX_MEM (
    input             clk,
    input             rst,
    // Stall signal to freeze the pipeline when hazards occur
    input             stall,
    // Data and control signals coming from the EX stage
    input  [31:0]     ALUres_in,
    input  [31:0]     data2_in,
    input  [4:0]      rd_in,
    input  [4:0]      MEM_ctrl_in,
    input             WB_ctrl_in,
    // Outputs to the MEM stage
    output  [31:0] ALUres_out,
    output  [31:0] data2_out,
    output  [4:0]   rd_out,
    output  [4:0]   MEM_ctrl_out,
    output          WB_ctrl_out
);

  reg [31:0] ALUres = 32'b0;
  reg [31:0] data2 = 32'b0;
  reg [4:0] rd = 5'b0;
  reg [4:0] MEM_ctrl = 5'b0;
  reg          WB_ctrl = 32'b0;
  // On the rising edge of the clock or asynchronous reset, update the pipeline registers.
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      // Reset all outputs to initial state
      ALUres   <= 32'd0;
      data2    <= 32'd0;
      rd       <= 5'd0;
      MEM_ctrl <= 5'd0;
      WB_ctrl  <= 1'd0;
    end
    else if (stall) begin
      // Stall detected: keep current values to freeze the pipeline stage
      ALUres   <= ALUres;
      data2      <= data2;
      rd       <= rd;
      MEM_ctrl <= MEM_ctrl;
      WB_ctrl  <= WB_ctrl;
    end
    else begin
      // No hazard: update the pipeline registers with new input values
      ALUres   <= ALUres;
      data2    <= data2_in;
      rd       <= rd_in;
      MEM_ctrl <= MEM_ctrl_in;
      WB_ctrl  <= WB_ctrl_in;
    end
  end
  
  assign ALUres_out = ALUres;
  assign data2_out = data2;
  assign rd_out = rd;
  assign MEM_ctrl_out = MEM_ctrl;
  assign WB_ctrl_out = WB_ctrl;
endmodule
