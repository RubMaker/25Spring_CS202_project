`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/13/2025 06:08:50 PM
// Design Name: 
// Module Name: ExpAddressHandler
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


module ExpAddressHandler(
    input  logic [31:0] Address,  // Exception address input
    output logic [31:0] ExpData  // Exception instruction output
);
    always_comb begin : exception_instruction
        unique case (Address)
            32'h1c090000: ExpData = 32'hff810113;
            32'h1c090004: ExpData = 32'h00512223;
            32'h1c090008: ExpData = 32'h00612023;
            32'h1c09000c: ExpData = 32'h00a00293;
            32'h1c090010: ExpData = 32'h02588c63;
            32'h1c090014: ExpData = 32'h00100293;
            32'h1c090018: ExpData = 32'h04588663;
            32'h1c09001c: ExpData = 32'h00200293;
            32'h1c090020: ExpData = 32'h04588663;
            32'h1c090024: ExpData = 32'h00300293;
            32'h1c090028: ExpData = 32'h04588663;
            32'h1c09002c: ExpData = 32'h00500293;
            32'h1c090030: ExpData = 32'h00588e63;
            32'h1c090034: ExpData = 32'h00600293;
            32'h1c090038: ExpData = 32'h00588e63;
            32'h1c09003c: ExpData = 32'h00700293;
            32'h1c090040: ExpData = 32'h00588e63;
            32'h1c090044: ExpData = 32'h0380006f;
            32'h1c090048: ExpData = 32'h0000006f;
            32'h1c09004c: ExpData = 32'h0001a503;
            32'h1c090050: ExpData = 32'h02c0006f;
            32'h1c090054: ExpData = 32'h0041a503;
            32'h1c090058: ExpData = 32'h0240006f;
            32'h1c09005c: ExpData = 32'h0081a503;
            32'h1c090060: ExpData = 32'h01c0006f;
            32'h1c090064: ExpData = 32'h00a1a623;
            32'h1c090068: ExpData = 32'h0140006f;
            32'h1c09006c: ExpData = 32'h00a1a823;
            32'h1c090070: ExpData = 32'h00c0006f;
            32'h1c090074: ExpData = 32'h02a1a423;
            32'h1c090078: ExpData = 32'h0040006f;
            32'h1c09007c: ExpData = 32'h00012303;
            32'h1c090080: ExpData = 32'h00412283;
            32'h1c090084: ExpData = 32'h00810113;
            32'h1c090088: ExpData = 32'h10200073;
            default: ExpData = 32'h00000000;
        endcase
    end

endmodule
