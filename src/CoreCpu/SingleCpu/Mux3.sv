`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/17/2025 07:40:18 PM
// Design Name: 
// Module Name: Mux3
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


module Mux3(
    input logic [1:0] Select,
    input logic [`DATA_WIDTH] Input0,
    input logic [`DATA_WIDTH] Input1,
    input logic [`DATA_WIDTH] Input2,
    output logic [`DATA_WIDTH] Output
    );
    assign Output = (Select == 2'b00) ? Input0 : ((Select == 2'b01) ? Input1 : Input2);
endmodule
