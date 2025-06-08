`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/31 20:00:08
// Design Name: 
// Module Name: SlowingClock
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


//--消抖模块
module SlowingClock(
			input clk,//系统时钟输入
			input rst_n,//系统复位输入
			output reg slow_clk//消抖后的波形输出
	);
 
 ///////////////////////////////////////////
	reg [31:0] cnt1;
	parameter CNT_MAX=32'd100;//0000000;


    initial begin
        slow_clk <= 1'b0;
        cnt1 <= 32'b0;
    end
	always @(posedge clk or negedge rst_n)
	begin
		if(!rst_n)
			cnt1 <= 0;    
		else
			begin
				if(cnt1==CNT_MAX)//--如果上述条件不满足，即按键为低电平，说明有按键按下，此时我们开始计数，
					cnt1 <=0;         //--因为毛刺的存在，按键低电平状态必须保持一段时间才能视为有效按下，几十毫秒是个可以接受的值
				else                     //--系统时钟是100MHz，即10ns一周期，则2000000*10ns=20000000ns=20ms
					cnt1 <=cnt1+1;       //--此段进程的目的就是，按键过程中，如果存在毛刺，则把计数寄存器清零，直到按键电平稳定为低，
			end                          //--有效计数时间能达到ms级别，我们认为按键有效
	end 

	always @(posedge clk or negedge rst_n)
	begin
		if(!rst_n)
			slow_clk <= 1'b0;
		else
			begin
				if(cnt1==CNT_MAX-1) //--接上面的进程，按键电平稳定，计数时间能达到50ms的时候，我们产生按键脉冲，用于后续程序。
					slow_clk <= ~slow_clk;
				else
					slow_clk <= slow_clk;
			end
	end 
 

endmodule