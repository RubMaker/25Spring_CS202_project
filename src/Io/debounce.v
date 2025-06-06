`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/14 11:09:02
// Design Name: 
// Module Name: debounce
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


module debounce(
			input clk,//系统时钟输入
			input rst,//系统复位输入
			input key,//外部按键输入
			output reg key_out//消抖后的波形输出
	);
 
 ///////////////////////////////////////////
	reg [31:0] cnt1;
	parameter CNT_MAX=32'd40000;

	always @(posedge clk)
	begin
		if(rst)
			cnt1 <= 0;    
		else
			begin
				if(key)                  //--当按键为1，即高电平的时候，说明没有按键按下（硬件特性），把计数寄存器清零，geo1的按键按下去时高电平，平时为低电平，因此输入时需要取反
					cnt1 <= 0;
				else if(cnt1==CNT_MAX)//--如果上述条件不满足，即按键为低电平，说明有按键按下，此时我们开始计数，
					cnt1 <= 0;         //--因为毛刺的存在，按键低电平状态必须保持一段时间才能视为有效按下，几十毫秒是个可以接受的值
				else                     //--系统时钟是100MHz，即10ns一周期，则2000000*10ns=20000000ns=20ms
					cnt1 <=cnt1+1;       //--此段进程的目的就是，按键过程中，如果存在毛刺，则把计数寄存器清零，直到按键电平稳定为低，
			end                          //--有效计数时间能达到ms级别，我们认为按键有效
	end 

	always @(posedge clk)
	begin
		if(rst)
			key_out <= 1'b0;
		else
			begin
				if(cnt1==CNT_MAX-1)//--接上面的进程，按键电平稳定，计数时间能达到50ms的时候，我们产生按键脉冲，用于后续程序。
					key_out <= 1'b1;
				else
					key_out <= 1'b0;
			end
	end 
 

endmodule
