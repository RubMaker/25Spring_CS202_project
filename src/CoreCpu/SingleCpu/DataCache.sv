`include "Constants.vh"
`timescale 1ns / 1ps
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
    input  logic             MemWrite,
    output logic [`DATA_WIDTH] DataOut,
    // mem interface
    input  logic [`DATA_WIDTH] MemoryData,
    output logic [`DATA_WIDTH] MemAddress,
    output logic [`DATA_WIDTH] MemWriteData
    // output logic             MemEnWrite
);

    // 格式: valid[47-4] | dirty[46-4] | tag[45-4:32] | data[31:0]（与原设计一致）
    logic  [43:0] cache [0: 15];
    logic [3:0] offset = Address[5:2];  // 缓存行索引（与原设计一致）
    logic [9:0] tag = Address[15:6];   // 标签（与原设计一致）
    logic uncached = (Address[19:16] == 4'hf);             // MMIO地址标志
    logic hit = cache[offset][43] && (cache[offset][41:32] == tag);  // 新增：命中标志

    assign MemAddress = Address;
    // 内存写数据：写操作时直接使用CPU写数据（直写策略）
    assign MemWriteData = MemWrite ? WriteData : '0;
    // 内存写使能：所有写操作（包括缓存地址和MMIO地址）都需要写内存（直写策略）
    // assign MemEnWrite = MemWrite;

    // 缓存读数据：未缓存/未命中时取内存数据，命中时取缓存数据
    logic [`DATA_WIDTH] CacheReadData = uncached ? MemoryData : (hit ? cache[offset][31:0] : MemoryData);
    // 输入到操作解码模块的数据（与原逻辑一致）
    logic [`DATA_WIDTH] RDataIn = CacheReadData;

    // 输出数据解码（与原逻辑一致，仅调整输入源）
    always_comb begin
        unique case (MemOperation)
            `LW_OPERATION: DataOut = RDataIn;
            `LH_OPERATION: DataOut = Address[1] ? {{16{RDataIn[31]}}, RDataIn[31:16]} : {{16{RDataIn[15]}}, RDataIn[15:0]};
            `LHU_OPERATION: DataOut = Address[1] ? {16'h0, RDataIn[31:16]} : {16'h0, RDataIn[15:0]};
            `LBU_OPERATION: DataOut = Address[1] ? (Address[0] ? {24'h0, RDataIn[31:24]} : {24'h0, RDataIn[23:16]}) 
                                        : (Address[0] ? {24'h0, RDataIn[15:8]} : {24'h0, RDataIn[7:0]});
            `LB_OPERATION: unique case (Address[1:0])
                        2'b00: DataOut = {{24{RDataIn[7]}}, RDataIn[7:0]};
                        2'b01: DataOut = {{24{RDataIn[15]}}, RDataIn[15:8]};
                        2'b10: DataOut = {{24{RDataIn[23]}}, RDataIn[23:16]};
                        2'b11: DataOut = {{24{RDataIn[31]}}, RDataIn[31:24]};
                    endcase
            `SW_OPERATION: DataOut = WriteData;  // 写操作输出写数据（原逻辑）
            `SH_OPERATION: DataOut = Address[1] ? {WriteData[15:0], RDataIn[15:0]} : {RDataIn[31:16], WriteData[15:0]};
            `SB_OPERATION: unique case (Address[1:0])
                        2'b00: DataOut = {RDataIn[31:8], WriteData[7:0]};
                        2'b01: DataOut = {RDataIn[31:16], WriteData[7:0], RDataIn[7:0]}; 
                        2'b10: DataOut = {RDataIn[31:24], WriteData[7:0], RDataIn[15:0]}; 
                        2'b11: DataOut = {WriteData[7:0], RDataIn[23:0]}; 
                    endcase
            default: DataOut = '0;
        endcase
    end

    initial begin
        for (int i = 0; i < 16; i++) begin
            cache[i] = 0;  // 初始化有效位为0（与原设计一致）
        end        
    end

    // 单周期缓存更新：写操作且非复位时更新缓存（直写策略）
    always_ff @(posedge clk) begin
        if (reset) begin
            for (int i = 0; i < 16; i++) begin
                cache[i] <= 0;  // 复位时清空缓存（与原设计一致）
            end
        end else if (MemWrite && !uncached) begin  // 非MMIO写操作时更新缓存
            cache[offset] <= {1'b1, 1'b1, tag, WriteData};  // 有效位设1，脏位设1（可选，直写可设0），标签和数据
        end
    end

endmodule 
