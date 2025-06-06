`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/14 17:01:15
// Design Name: 
// Module Name: LED
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
//////////////////////////////////////////////////////////////////////////////////

module LED (
    input			ledrst,		// reset, active high (��λ�ź�,�ߵ�ƽ��Ч)
    input			led_clk,	// clk for led (ʱ���ź�)
    input			ledwrite,	// led write enable, active high (д�ź�,�ߵ�ƽ��Ч)
    input	[7:0]	ledwdata,	// the data (from register/memorio)  waiting for to be writen to the leds of the board
    output	[7:0]	led_out		// the data writen to the leds  of the board
);
  
    reg [7:0] ledout;
    always @ (posedge led_clk or posedge ledrst) begin
        if (ledrst)
            ledout <= 8'h00;
		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		else if (ledwrite) begin
            ledout <= ledwdata;
        end
        else begin
            ledout <= 8'h00;
        end
    end
    assign led_out = ledout;
	
endmodule

