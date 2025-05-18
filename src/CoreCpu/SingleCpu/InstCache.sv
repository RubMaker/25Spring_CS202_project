`include "Constants.vh"
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/30/2025 06:06:15 PM
// Design Name: 
// Module Name: InstructionCache
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

module InstCache (
    input  logic             clk, reset,
    // cpu interface
    input  logic [`DATA_WIDTH] Address,
    output logic [`DATA_WIDTH] Instruction,
    // mem interface
    input  logic [`DATA_WIDTH] MemInstruction
    // output logic [`DATA_WIDTH] MemPc,
    // output logic uncached,
    // output logic hit
);

    // 格式: valid[46-4] | tag[45-4:32] | data[31:0]（与原设计一致）
    logic  [42:0] cache [0: 15];
    logic [3:0] offset = Address[5:2];  // 缓存行索引（与原设计一致）
    logic [9:0] tag = Address[15:6];   // 标签（与原设计一致）
    logic hit = cache[offset][42] && (cache[offset][41:32] == tag);  // 新增：命中标志
    logic uncached = Address[31:16] == 16'h1c09;            // 未缓存地址标志（与原设计一致）

    // assign MemPc = Address;                               // 内存请求地址（与原设计一致）
    assign Instruction = uncached ? MemInstruction : (hit ? cache[offset][`DATA_WIDTH] : MemInstruction);  // 单周期选择：未缓存/命中/未命中时直接取内存数据

    initial begin
        for (int i = 0; i < (1 << 4); i++) begin
            cache[i] = 0;  // 初始化有效位为0（与原设计一致）
        end        
    end

    // 单周期缓存更新：未命中且非复位时，直接用内存数据更新缓存
    always_ff @(posedge clk) begin
        if (reset) begin
            for (int i = 0; i < (1 << 4); i++) begin
                cache[i] <= 0;  // 复位时清空缓存（与原设计一致）
            end
        end else if (!hit && !uncached) begin  // 未命中且非未缓存地址时更新
            cache[offset] <= {1'b1, tag, MemInstruction};  // 设置有效位、标签和数据
        end
    end
    
endmodule
