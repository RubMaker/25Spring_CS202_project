`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/31 22:36:19
// Design Name: 
// Module Name: VGA_Test
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


module VGA_Test(
    input fpga_clk,
    input vga_addr,
    input char_out,
    input color_out,
    output  hsync,              // line synchronization signal
    output  vsync,              // vertical synchronization signal
    output  red,
    output [`COLOR_WIDTH] green,
    output [`COLOR_WIDTH] blue
    );
    wire vgaclk;
    clockGen uVGATestGen(.clk_in1(fpga_clk),.clk_out1(),.clk_out2(),.clk_out3(vgaclk));
    VGA vga_inst(
            .clk(vgaclk),
            .vga_addr(vga_addr),
            .ch(char_out),
            .color(color_out),
            .hsync(hsync),
            .vsync(vsync),
            .red(red),
            .green(green),
            .blue(blue)
        );
endmodule
