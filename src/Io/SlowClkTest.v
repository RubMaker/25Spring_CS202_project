`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/31 18:09:29
// Design Name: 
// Module Name: debounce_test
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


module SlowClkTest(
    input             fpga_clk, reset_n,
    output led
    );
    SlowingClock uSlowClk(.clk(fpga_clk),.rst_n(reset_n),.slow_clk(led));
endmodule
