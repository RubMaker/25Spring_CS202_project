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
    input  [0:0]      WB_ctrl_in,
    // Outputs to the MEM stage
    output reg [31:0] ALUres_out,
    output reg [31:0] data2_out,
    output reg [4:0]  rd_out,
    output reg [4:0]  MEM_ctrl_out,
    output reg [0:0]  WB_ctrl_out
);

  // On the rising edge of the clock or asynchronous reset, update the pipeline registers.
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      // Reset all outputs to initial state
      ALUres_out   <= 32'd0;
      data2_out    <= 32'd0;
      rd_out       <= 5'd0;
      MEM_ctrl_out <= 5'd0;
      WB_ctrl_out  <= 1'd0;
    end
    else if (stall) begin
      // Stall detected: keep current values to freeze the pipeline stage
      ALUres_out   <= ALUres_out;
      data2_out    <= data2_out;
      rd_out       <= rd_out;
      MEM_ctrl_out <= MEM_ctrl_out;
      WB_ctrl_out  <= WB_ctrl_out;
    end
    else begin
      // No hazard: update the pipeline registers with new input values
      ALUres_out   <= ALUres_in;
      data2_out    <= data2_in;
      rd_out       <= rd_in;
      MEM_ctrl_out <= MEM_ctrl_in;
      WB_ctrl_out  <= WB_ctrl_in;
    end
  end

endmodule
