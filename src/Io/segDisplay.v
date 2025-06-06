`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/14 10:24:55
// Design Name: 
// Module Name: segDisplay
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


module segDisplay
(
	input clk,
	input rst,
	

	input [15:0]hex_data,
	input [3:0]hex_point,
	
	output [7:0] seg,
	output [3:0] sel

);



    parameter MAX_1KHZ=100000;

    reg [3:0]hex_sel = 4'b1;
    reg [7:0]hex_seg;
    reg [3:0]dis_num;
    reg disp ;
    reg [20:0]div_cnt = 21'b0;
    
    always@(posedge clk)	begin
        if(rst)
	       div_cnt <= 8'd0;
        else if(div_cnt== MAX_1KHZ -1'b1)
	       div_cnt <= 8'd0;
        else 
	       div_cnt <= div_cnt+1'b1;
    end
	
    wire flag_1k= div_cnt== MAX_1KHZ -1'b1;

    
    always@(posedge clk)	begin
        if(rst)
	       hex_sel <= 'd1;
        else if(flag_1k)
	       hex_sel <= {hex_sel[2:0],hex_sel[3]};
    end

    always@(*)	 
    begin
	   case(hex_sel)
		  4'b0001:begin disp = ~hex_point[0] ;dis_num = hex_data[3:0];  end
	   	  4'b0010:begin disp = ~hex_point[1] ;dis_num = hex_data[7:4];  end
		  4'b0100:begin disp = ~hex_point[2] ;dis_num = hex_data[11:8]; end
		  4'b1000:begin disp = ~hex_point[3] ;dis_num = hex_data[15:12];end
		  default:begin disp=1'b1 ;dis_num = 4'b0000;end
	   endcase
    end

    //display
	always@(*) begin
		case(dis_num)
			4'h0:hex_seg = {disp,7'b1000000};
			4'h1:hex_seg = {disp,7'b1111001};
			4'h2:hex_seg = {disp,7'b0100100};
			4'h3:hex_seg = {disp,7'b0110000};
			4'h4:hex_seg = {disp,7'b0011001};
			4'h5:hex_seg = {disp,7'b0010010};
			4'h6:hex_seg = {disp,7'b0000010};
			4'h7:hex_seg = {disp,7'b1111000};
			4'h8:hex_seg = {disp,7'b0000000};
			4'h9:hex_seg = {disp,7'b0010000};
			4'ha:hex_seg = {disp,7'b0001000};
			4'hb:hex_seg = {disp,7'b0000011};
			4'hc:hex_seg = {disp,7'b0100111};
			4'hd:hex_seg = {disp,7'b0100001};
			4'he:hex_seg = {disp,7'b0000110};
			4'hf:hex_seg = {disp,7'b0001110};
			default: hex_seg = {disp,7'b0};
		endcase
    end

    assign seg = ~hex_seg;
    assign sel = hex_sel;

endmodule
