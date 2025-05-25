`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/11/2025 04:06:44 PM
// Design Name: 
// Module Name: RegisterFile
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


module RegisterFile(
    input logic clk,
    input logic reset,
    input logic [4:0] ReadRegAddr1,ReadRegAddr2,// support read from two Registers
    input logic [4:0] WriteRegAddr,// support write to one register
    input logic [`DATA_WIDTH] WriteData,// data to be written
    input logic RegWrite,
    output logic [`DATA_WIDTH] ReadData1,ReadData2// data read from Registers
    );
    reg [`DATA_WIDTH] Registers [0:31] /* verilator public */;// 32 Registers of 32 bits each

    initial begin
        Registers[0] = 32'b0; // Register 0 is hardwired to 0
        Registers[1] = 32'b0; // Initialize other Registers to 0
        // Registers[2] = `STAK_ADDRESS;
        Registers[3] = `MMIO_ADDRESS;
        for (int i = 4; i < 32; i++) begin
            Registers[i] = 32'b0;
        end
    end

    always_ff @(posedge clk) begin 
        if (reset) begin
            Registers[0] <= 32'b0; // Register 0 is hardwired to 0
            Registers[1] <= 32'b0; // Initialize other Registers to 0
            Registers[2] <= `STAK_ADDRESS;
            Registers[3] <= `MMIO_ADDRESS;
            for (int i = 4; i < 32; i++) begin
                Registers[i] <= 32'b0;
            end
        end else if (RegWrite && WriteRegAddr != 5'b0) begin
            Registers[WriteRegAddr] <= WriteData;
        end
    end
    // Read operations are combinational
    assign ReadData1 = (ReadRegAddr1 == 5'b0) ? 32'b0 : Registers[ReadRegAddr1];
    assign ReadData2 = (ReadRegAddr2 == 5'b0) ? 32'b0 : Registers[ReadRegAddr2];
endmodule

