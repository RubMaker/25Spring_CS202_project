`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/31 17:39:31
// Design Name: 
// Module Name: UartTest
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


module UartTest(
    // clk -> cpuclk, memclk, vgaclk
    input             fpga_clk, reset_n,
    // uart related
    input               rx,
    // interact with devices
    output  [7:0] seg1,
            [7:0] seg2,
            [3:0] sel1,
            [3:0] sel2
    );
    wire cpu_clk;
    wire upg_clk;
    wire vgaclk;
    wire uart_done;
    wire [31:0] uart_data, uart_addr;
    wire [31:0] segOut;
    clockGen uClkGen(.clk_in1(fpga_clk),.clk_out1(cpu_clk),.clk_out2(upg_clk),.clk_out3(vgaclk));
    Uart uart_inst(
            .clk(upg_clk),
            .reset(~reset_n),
            .rx(rx),
            .DataOut(uart_data),
            .Address(uart_addr),
            .Done(uart_done)
        );
     reg [31:0] segout;
    always @(posedge fpga_clk) begin
                if (!reset_n) begin
                    segout <= 32'h0;
                end else begin
                    if(uart_addr != 32'h0)  begin
                        segout = uart_addr;
                    end else begin
                    end
                end
            end
    assign segOut = segout;
    segDisplay segDisplay_l(
                .clk(fpga_clk),
                .rst(~reset_n),
                
            
                .hex_data(segOut[31:16]),
                .hex_point(0),
                
                .seg(seg1),
                .sel(sel1)
            
            );
            segDisplay segDisplay_r(
                    .clk(fpga_clk),
                    .rst(~reset_n),
                    
                
                    .hex_data(segOut[15:0]),
                    .hex_point(0),
                    
                    .seg(seg2),
                    .sel(sel2)
                
                );
endmodule
