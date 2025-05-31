`timescale 1ns/1ps
`include "Constants.vh"

//-------------------------------------
// MEM模块：将 EX 结果与缓存交�?
//-------------------------------------
module MEM(
    input         clk,
    input         rst,
    // 来自 EX 阶段的输�?
    input  [31:0] AluResult,   // 有效地址�? ALU 计算结果
    input  [31:0] WriteData,   // store 时写入的数据
    input         MemRead,     // load 标志
    input         MemWrite,    // store 标志
    input  [2:0]  LS_op,       // load/store 操作类型
    // 输出�? WB 阶段
    output [31:0] Result,      // load 时为缓存/内存数据；store 时输�? ALU 结果
    output        DStall,       // DCache 访问引起的停顿信�?
    // 外部内存接口
    input  [31:0] MemData,
    output [31:0] MemAddr,
    output [31:0] MemWriteData,
    output        MemWb
);

   wire [31:0] CacheDataOut;

   DCache U_DCache(
      .clk(clk),
      .rst(rst),
      .Addr(AluResult),
      .WriteData(WriteData),
      .MemRead(MemRead),
      .MemWrite(MemWrite),
      .LS_op(LS_op),
      .Data_Out(CacheDataOut),
      .DStall(DStall),
      .MemData(MemData),
      .MemAddr(MemAddr),
      .MemWriteData(MemWriteData),
      .MemWb(MemWb)
   );

   // load：返回Cache里的数据；store：直接返回ALU结果
   assign Result = (MemRead ? CacheDataOut : AluResult);

endmodule

