`include "Constants.vh"
`timescale 1ns / 1ps
//claude 4
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/30/2025 06:06:15 PM
// Design Name: 
// Module Name: DataCache
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
module DataCache (
    input  logic             clk, reset,
    // cpu interface
    input  logic [`DATA_WIDTH] Address,
    input  logic [`DATA_WIDTH] WriteData,
    input  logic [`LDST_WIDTH] MemOperation,
    input  logic             MemRead,
    input  logic             MemWrite,
    output logic [`DATA_WIDTH] DataOut,
    // mem interface
    input  logic [`DATA_WIDTH] MemData,
    output logic [`DATA_WIDTH] MemAddress,
    output logic [`DATA_WIDTH] MemWriteData,
    output logic             MemWriteEnB
);

    wire [`DATA_WIDTH] RawData = MemData;  // 所有读操作使用主存数据
    logic [`DATA_WIDTH] Data1FF3;
    // assign Data1FF3 = (Address[15:2] == 14'h1ff3) ? MemData : 32'b0;  // 直接写入主存数据
    assign MemAddress = Address;
    assign MemWriteData = DataOut;
    assign MemWriteEnB = MemWrite;  // 写操作直接使能主存写
    
    // 数据格式化输出
    always_comb begin
        unique case (MemOperation)
            `LW_OPERATION: begin
                DataOut = RawData;
            end
            `LH_OPERATION: begin
                if (Address[1]) begin
                    DataOut = {RawData[31] ? 16'hffff : 16'h0000, RawData[31:16]};
                end
                else begin
                    DataOut = {RawData[15] ? 16'hffff : 16'h0000, RawData[15:0]};
                end
            end
            `LHU_OPERATION: begin
                DataOut = {16'h0000, Address[1] ? RawData[31:16] : RawData[15:0]};
            end
            `LBU_OPERATION: begin
                DataOut = {24'h000000, Address[1] ? (Address[0] ? RawData[31:24] : RawData[23:16]) : (Address[0] ? RawData[15:8] : RawData[7:0])};
            end
            `LB_OPERATION: begin
                unique case (Address[1:0])
                    2'b00: DataOut = {RawData[7] ? 24'hffffff : 24'h000000, RawData[7:0]};
                    2'b01: DataOut = {RawData[15] ? 24'hffffff : 24'h000000, RawData[15:8]};
                    2'b10: DataOut = {RawData[23] ? 24'hffffff : 24'h000000, RawData[23:16]};
                    2'b11: DataOut = {RawData[31] ? 24'hffffff : 24'h000000, RawData[31:24]};
                endcase
            end
            `SW_OPERATION: begin
                DataOut = WriteData;
            end
            `SH_OPERATION: begin
                DataOut = Address[1] ? {WriteData[15:0], RawData[15:0]} : {RawData[31:16], WriteData[15:0]};
            end
            `SB_OPERATION: begin
                unique case (Address[1:0])
                    2'b00: DataOut = {RawData[31:8], WriteData[7:0]};
                    2'b01: DataOut = {RawData[31:16], WriteData[7:0], RawData[7:0]}; 
                    2'b10: DataOut = {RawData[31:24], WriteData[7:0], RawData[15:0]}; 
                    2'b11: DataOut = {WriteData[7:0], RawData[23:0]}; 
                endcase
            end
            default: begin
                DataOut = RawData;
            end
        endcase
    end
    
endmodule
