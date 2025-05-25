`include "Constants.vh"
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2025 02:14:36 PM
// Design Name: 
// Module Name: ProgramCounter
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


module ProgramCounter(
    input clk,
    input reset,
    input logic [`DATA_WIDTH] PcInput,  // Input value of the program counter
    output logic [`DATA_WIDTH] PcOutput // Output value of the program counter
    );
    // Program counter register, initialized to 0
    logic [`DATA_WIDTH] PcReg /* verilator public */; 
    // 新增：复位完成标志（0表示复位刚结束的第一个周期，1表示后续正常周期）
    logic reset_done;

    // 时序逻辑块，触发在时钟上升沿
    always_ff @(posedge clk) begin
        if (reset) begin
            PcReg <= 32'h0000_0000;  // 复位时PC置0
            reset_done <= 0;         // 复位时标志位清零
        end else begin
            // 复位撤销后，第一个周期保持标志位为0，后续周期置1
            // 当标志位为0（复位后第一个周期）时保持PC为0，否则加载输入值
            PcReg <= reset_done ? PcInput : 32'h0000_0000;
            reset_done <= 1; 
        end
    end

    // 保持输出赋值不变
    assign PcOutput = PcReg; 
endmodule


