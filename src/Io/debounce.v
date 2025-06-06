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
			input clk,//ϵͳʱ������
			input rst,//ϵͳ��λ����
			input key,//�ⲿ��������
			output reg key_out//������Ĳ������
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
				if(key)                  //--������Ϊ1�����ߵ�ƽ��ʱ��˵��û�а������£�Ӳ�����ԣ����Ѽ����Ĵ������㣬geo1�İ�������ȥʱ�ߵ�ƽ��ƽʱΪ�͵�ƽ���������ʱ��Ҫȡ��
					cnt1 <= 0;
				else if(cnt1==CNT_MAX)//--����������������㣬������Ϊ�͵�ƽ��˵���а������£���ʱ���ǿ�ʼ������
					cnt1 <= 0;         //--��Ϊë�̵Ĵ��ڣ������͵�ƽ״̬���뱣��һ��ʱ�������Ϊ��Ч���£���ʮ�����Ǹ����Խ��ܵ�ֵ
				else                     //--ϵͳʱ����100MHz����10nsһ���ڣ���2000000*10ns=20000000ns=20ms
					cnt1 <=cnt1+1;       //--�˶ν��̵�Ŀ�ľ��ǣ����������У��������ë�̣���Ѽ����Ĵ������㣬ֱ��������ƽ�ȶ�Ϊ�ͣ�
			end                          //--��Ч����ʱ���ܴﵽms����������Ϊ������Ч
	end 

	always @(posedge clk)
	begin
		if(rst)
			key_out <= 1'b0;
		else
			begin
				if(cnt1==CNT_MAX-1)//--������Ľ��̣�������ƽ�ȶ�������ʱ���ܴﵽ50ms��ʱ�����ǲ����������壬���ں�������
					key_out <= 1'b1;
				else
					key_out <= 1'b0;
			end
	end 
 

endmodule
