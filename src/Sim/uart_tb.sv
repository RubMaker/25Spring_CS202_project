`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/31/2025 11:35:49 PM
// Design Name: 
// Module Name: uart_tb
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
`timescale 1ns / 1ps
`include "Constants.vh"

module Uart_tb();
    // 时钟和复位信号
    reg clk, reset;
    reg rx;  // UART接收线
    
    // UART输出监控
    wire [`DATA_WIDTH] DataOut;
    wire [`DATA_WIDTH] Address;
    wire Done;
    
    // 实例化被测UART模块
    Uart uut (
        .clk(clk),
        .reset(reset),
        .rx(rx),
        .DataOut(DataOut),
        .Address(Address),
        .Done(Done)
    );
    
    // 生成50MHz时钟
    initial begin
        clk = 0;
        forever #10 clk = ~clk;  // 20ns周期(50MHz)
    end
    
    // UART发送任务：模拟发送单字节数据
    task uart_send_byte(input [7:0] data);
        integer i;
        begin
            rx = 1'b1;          // 空闲状态
            #1000;              // 等待稳定
            
            // 发送起始位
            rx = 1'b0;          // 起始位(低电平)
            #(`BPS_CNT * 10);   // 等待1个比特周期
            
            // 发送数据位(LSB first)
            for (i = 0; i < 8; i = i + 1) begin
                rx = data[i];   // 发送数据位
                #(`BPS_CNT * 10);
            end
            
            // 发送停止位
            rx = 1'b1;          // 停止位(高电平)
            #(`BPS_CNT * 20);   // 等待2个比特周期
        end
    endtask
    
    // 主测试序列
    initial begin
        // 初始化
        reset = 1;
        rx = 1'b1;  // UART空闲状态为高电平
        #100;
        
        // 释放复位
        reset = 0;
        #100;
        
        $display("===== 测试开始 =====");
        
        // 测试用例1：发送单个字节
        $display("[测试1] 发送字节: 0x55");
        uart_send_byte(8'h55);
        #1000;
        if (DataOut !== 8'h55) begin
            $display("[错误] 接收数据错误! 期望:0x55, 实际:0x%h", DataOut);
            $finish;
        end else begin
            $display("[通过] 数据接收正确");
        end
        
        // 测试用例2：连续发送多个字节
        $display("\n[测试2] 连续发送3字节序列");
        uart_send_byte(8'hAA);
        uart_send_byte(8'hBB);
        uart_send_byte(8'hCC);
        #2000;
        
        // 检查地址递增
        if (Address !== 32'h0000000C) begin  // 假设队列深度为4
            $display("[错误] 地址错误! 期望:0xC, 实际:0x%h", Address);
            $finish;
        end
        
        // 测试用例3：超时检测
        $display("\n[测试3] 测试超时机制");
        #(`MAX_IDLE * 10 * 2);  // 等待超时
        if (!Done) begin
            $display("[错误] 超时信号未触发!");
            $finish;
        end else begin
            $display("[通过] 超时检测正常");
        end
        
        // 测试用例4：噪声过滤测试
        $display("\n[测试4] 噪声过滤测试");
        rx = 1'b0;  // 模拟虚假起始位
        #(`BPS_CNT * 2);
        rx = 1'b1;
        #100;
        if (DataOut == 8'h00) begin  // 应忽略噪声
            $display("[通过] 噪声过滤正常");
        end else begin
            $display("[错误] 噪声被误接收!");
            $finish;
        end
        
        $display("\n===== 所有测试通过! =====");
        $finish;
    end
    
    // 实时监控
    always @(posedge clk) begin
        if (uut.RxDone) begin
            $display("时间=%0t: 收到数据 0x%h, 地址=0x%h", 
                     $time, DataOut, Address);
        end
    end
endmodule