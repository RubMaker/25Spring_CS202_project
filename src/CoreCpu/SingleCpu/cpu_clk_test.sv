`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/31/2025 10:55:33 PM
// Design Name: 
// Module Name: cpu_clk_test
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

module cpu_clk_test (
    input clk,
    output clk0
);

    reg [15:0] cnt;
    reg t;
    assign clk0 = t;

    always @(posedge clk) begin
        if (cnt == 10) begin
            cnt <= 0;
        end
        else begin
           cnt <= cnt + 1'b1; 
        end
    end

    always @(posedge clk) begin
        if (cnt == 10) begin
            t <= ~t;
        end 
    end
    
endmodule