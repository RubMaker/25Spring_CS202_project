`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/10 10:44:05
// Design Name: 
// Module Name: IFetch
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


module IFetch(
    input wire clk,
    input wire rst,
    input wire branch,
    input wire zero,
    input wire [31:0] imm32,
    output wire [31:0] inst
    );

    reg [31:0]pc;

    always@ (negedge clk) begin
    if(!rst) begin            
      pc<=32'b0;
    end  
   else  if((branch == 1'b1) && (zero == 1'b1)) begin              
     pc<=pc+imm32;
   end
   else begin      
     pc<=pc+4;                                   
   end
   end 

   prgrom urom(.clka(clk), .addra(pc[15:2]), .douta(inst));

endmodule
