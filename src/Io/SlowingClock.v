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


//--����ģ��
module SlowingClock(
			input clk,//ϵͳʱ������
			input rst_n,//ϵͳ��λ����
			output reg slow_clk//������Ĳ������
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
				if(cnt1==CNT_MAX)//--����������������㣬������Ϊ�͵�ƽ��˵���а������£���ʱ���ǿ�ʼ������
					cnt1 <=0;         //--��Ϊë�̵Ĵ��ڣ������͵�ƽ״̬���뱣��һ��ʱ�������Ϊ��Ч���£���ʮ�����Ǹ����Խ��ܵ�ֵ
				else                     //--ϵͳʱ����100MHz����10nsһ���ڣ���2000000*10ns=20000000ns=20ms
					cnt1 <=cnt1+1;       //--�˶ν��̵�Ŀ�ľ��ǣ����������У��������ë�̣���Ѽ����Ĵ������㣬ֱ��������ƽ�ȶ�Ϊ�ͣ�
			end                          //--��Ч����ʱ���ܴﵽms����������Ϊ������Ч
	end 

	always @(posedge clk or negedge rst_n)
	begin
		if(!rst_n)
			slow_clk <= 1'b0;
		else
			begin
				if(cnt1==CNT_MAX-1) //--������Ľ��̣�������ƽ�ȶ�������ʱ���ܴﵽ50ms��ʱ�����ǲ����������壬���ں�������
					slow_clk <= ~slow_clk;
				else
					slow_clk <= slow_clk;
			end
	end 
 

endmodule