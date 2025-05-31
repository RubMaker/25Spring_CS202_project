`timescale 1ns/1ps

module ID_EX(
    input clk,
    input rst,
    input [31:0] PcIn,
    input [31:0] Rs1In,
    input [31:0] Rs2In,
    input [4:0]  RdIn,
    input [31:0] ImmIn,
    input [4:0]  rs1_in,
    input [4:0]  rs2_in,
    input        RegWriteIn,
    input        ALUSrcIn,
    input        MemtoRegIn,
    input        MemReadIn,
    input        MemWriteIn,
    input        BranchIn,
    input [3:0]  ALU_opIn,
    input [2:0]  BRU_opIn,
    input [2:0]  LS_opIn,
    input stall,
    input flush,
    output reg [31:0] PcOut,
    output reg [31:0] Rs1Out,
    output reg [31:0] Rs2Out,
    output reg [4:0]  RdOut,
    output reg [31:0] ImmOut,
    output reg [4:0]  rs1_out,
    output reg [4:0]  rs2_out,
    output reg        RegWriteOut,
    output reg        ALUSrcOut,
    output reg        MemtoRegOut,
    output reg        MemReadOut,
    output reg        MemWriteOut,
    output reg        BranchOut,
    output reg [3:0]  ALU_opOut,
    output reg [2:0]  BRU_opOut,
    output reg [2:0]  LS_opOut
);

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      PcOut <= 32'b0;
      Rs1Out <= 32'b0;
      Rs2Out <= 32'b0;
      RdOut <= 5'b0;
      ImmOut <= 32'b0;
      rs1_out <= 5'b0;
      rs2_out <= 5'b0;
      RegWriteOut <= 1'b0;
      ALUSrcOut <= 1'b0;
      MemtoRegOut <= 1'b0;
      MemReadOut <= 1'b0;
      MemWriteOut <= 1'b0;
      BranchOut <= 1'b0;
      ALU_opOut <= 4'b0;
      BRU_opOut <= 3'b0;
      LS_opOut <= 3'b0;
    end else if (stall) begin
      // 保持当前数据
      PcOut <= PcOut;
      Rs1Out <= Rs1Out;
      Rs2Out <= Rs2Out;
      RdOut <= RdOut;
      ImmOut <= ImmOut;
      rs1_out <= rs1_out;
      rs2_out <= rs2_out;
      RegWriteOut <= RegWriteOut;
      ALUSrcOut <= ALUSrcOut;
      MemtoRegOut <= MemtoRegOut;
      MemReadOut <= MemReadOut;
      MemWriteOut <= MemWriteOut;
      BranchOut <= BranchOut;
      ALU_opOut <= ALU_opOut;
      BRU_opOut <= BRU_opOut;
      LS_opOut <= LS_opOut;
    end else if (flush) begin
      PcOut <= 32'b0;
      Rs1Out <= 32'b0;
      Rs2Out <= 32'b0;
      RdOut <= 5'b0;
      ImmOut <= 32'b0;
      rs1_out <= 5'b0;
      rs2_out <= 5'b0;
      RegWriteOut <= 1'b0;
      ALUSrcOut <= 1'b0;
      MemtoRegOut <= 1'b0;
      MemReadOut <= 1'b0;
      MemWriteOut <= 1'b0;
      BranchOut <= 1'b0;
      ALU_opOut <= 4'b0;
      BRU_opOut <= 3'b0;
      LS_opOut <= 3'b0;
    end else begin
      PcOut <= PcIn;
      Rs1Out <= Rs1In;
      Rs2Out <= Rs2In;
      RdOut <= RdIn;
      ImmOut <= ImmIn;
      rs1_out <= rs1_in;
      rs2_out <= rs2_in;
      RegWriteOut <= RegWriteIn;
      ALUSrcOut <= ALUSrcIn;
      MemtoRegOut <= MemtoRegIn;
      MemReadOut <= MemReadIn;
      MemWriteOut <= MemWriteIn;
      BranchOut <= BranchIn;
      ALU_opOut <= ALU_opIn;
      BRU_opOut <= BRU_opIn;
      LS_opOut <= LS_opIn;
    end
  end

endmodule
