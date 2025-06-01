`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/01/2025 06:32:55 AM
// Design Name: 
// Module Name: top_tb
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

module Top_tb;
    // 声明与DUT（Top模块）连接的信号
    reg fpga_clk, reset_n;
    reg rx;  // UART接收线，需模拟输入
    reg [7:0] switches1, switches2;
    reg Button_Mid, Button_Up;
    wire [7:0] led1_out, led2_out;
    wire [7:0] seg1, seg2;
    wire [3:0] sel1, sel2;
    wire [32:0] UartData;
    wire UartOver;
    
    // 实例化被测设计（DUT）
    Top uut (
        .fpga_clk(fpga_clk),
        .reset_n(reset_n),
        .rx(rx),
        .switches1(switches1),
        .switches2(switches2),
        .Button_Mid(Button_Mid),
        .Button_Up(Button_Up),
        .led1_out(led1_out),
        .led2_out(led2_out),
        .seg1(seg1),
        .seg2(seg2),
        .sel1(sel1),
        .sel2(sel2),
        .UartData(UartData),
        .UartOver(UartOver)
    );

    // 生成50MHz主时钟（FPGA时钟）
    initial begin
        fpga_clk = 0;
        forever #1 fpga_clk = ~fpga_clk;  // 周期20ns（50MHz）[1,2](@ref)
    end

    // 复位信号初始化
    initial begin
        reset_n = 0;  // 初始复位有效
        #100 reset_n = 1;  // 100ns后释放复位[1](@ref)
    end

    // 定义UART发送任务：模拟通过rx线传输单字节数据
    task uart_send_byte(input [7:0] data);
        integer i;
        begin
            rx = 1'b0;          // 发送起始位（逻辑0）[6,7](@ref)
            #5;             // 波特率9600bps，每比特时间≈5ns（1/9600秒）

            for (i = 0; i < 8; i = i + 1) begin
                rx = data[i];   // LSB first，先发送最低位[6,7](@ref)
                #5;
            end

            rx = 1'b1;          // 停止位（逻辑1）
            #5;
        end
    endtask

    // 主测试序列：发送RISC-V指令
    initial begin
        // 初始化输入信号
        rx = 1'b1;             // UART空闲状态为高电平[6](@ref)
        switches1 = 0;
        switches2 = 0;
        Button_Mid = 0;
        Button_Up = 0;
        #200;                  // 等待复位完成

        // 发送示例RISC-V指令（32位指令拆分为4字节）[6,7](@ref)
        // 指令1: addi x1, x0, 1 (编码: 0x00100093)
        uart_send_byte(8'h93); // 字节0 (LSB)
        uart_send_byte(8'h00);
        uart_send_byte(8'h10);
        uart_send_byte(8'h00); // 字节3 (MSB)

        // 指令2: nop (编码: 0x00000013)
        uart_send_byte(8'h13);
        uart_send_byte(8'h00);
        uart_send_byte(8'h00);
        uart_send_byte(8'h00);

        // 监控输出信号
        $monitor("Time=%0t: LED1=%h, LED2=%h, SEG1=%h", $time, led1_out, led2_out, {seg2, seg1});
        #50000;                // 延长仿真时间以观察结果
        $finish;               // 结束仿真
    end
endmodule