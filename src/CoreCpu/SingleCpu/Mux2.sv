`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/17/2025 07:40:01 PM
// Design Name: 
// Module Name: Mux2
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


module Mux2(
    input logic Select,
    input logic [`DATA_WIDTH] Input0,
    input logic [`DATA_WIDTH] Input1,
    output logic [`DATA_WIDTH] Output
    );
    assign Output = (Select) ? Input1 : Input0;
endmodule
