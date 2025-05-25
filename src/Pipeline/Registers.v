`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Module: Registers
// Description: Implements a register file with 32 general purpose registers.
//              Register 0 is hardwired to 0. The module provides two asynchronous
//              read ports and one synchronous write port.
//////////////////////////////////////////////////////////////////////////////////

module Registers (
    input  wire         clk,       // Clock signal
    input  wire         rst,       // Asynchronous reset signal
    input  wire [4:0]   rs1_addr,  // Address of the first read register
    input  wire [4:0]   rs2_addr,  // Address of the second read register
    output wire [31:0]  rs1_data,  // Data of the first read register
    output wire [31:0]  rs2_data,  // Data of the second read register
    input  wire         RegWrite,  // Write enable signal
    input  wire [4:0]   rd_addr,   // Destination register address for writing
    input  wire [31:0]  rd_data    // Data to be written to the destination register
);
    // Register file: 32 registers of 32 bits each
    reg [31:0] regs [31:0];
    integer i;
    
    // Initialize: Register 0 is always zero; all other registers are initialized to 0.
    initial begin
        regs[0] = 32'b0;
        for(i = 1; i < 32; i = i + 1) begin
            regs[i] = 32'b0;
        end
    end
    
    // Synchronous write operation (on positive clock edge), resetting all registers on reset.
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for(i = 0; i < 32; i = i + 1)
                regs[i] <= 32'b0;
        end else if (RegWrite && (rd_addr != 5'b0)) begin
            regs[rd_addr] <= rd_data;
        end
    end
    
    // Asynchronous read operations
    assign rs1_data = (rs1_addr == 5'b0) ? 32'b0 : regs[rs1_addr];
    assign rs2_data = (rs2_addr == 5'b0) ? 32'b0 : regs[rs2_addr];
    
endmodule