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
    output [31:0] PcOut,
    output [31:0] Rs1Out,
    output [31:0] Rs2Out,
    output [4:0]  RdOut,
    output [31:0] ImmOut,
    output [4:0]  rs1_out,
    output [4:0]  rs2_out,
    output        RegWriteOut,
    output        ALUSrcOut,
    output        MemtoRegOut,
    output        MemReadOut,
    output        MemWriteOut,
    output        BranchOut,
    output [3:0]  ALU_opOut,
    output [2:0]  BRU_opOut,
    output [2:0]  LS_opOut
);

  reg [31:0] Pc = 32'b0;
  reg [31:0] Rs1 = 32'b0;
  reg [31:0] Rs2 = 32'b0;
  reg [4:0]  Rd = 5'b0;
  reg [31:0] Imm = 32'b0;
  reg [4:0]  rs1 = 5'b0;
  reg [4:0]  rs2 = 5'b0;
  reg        RegWrite = 1'b0;
  reg        ALUSrc = 1'b0;
  reg        MemtoReg = 1'b0;
  reg        MemRead = 1'b0;
  reg        MemWrite = 1'b0;
  reg        Branch = 1'b0;
  reg [3:0]  ALU_op = 4'b0;
  reg [2:0]  BRU_op = 3'b0;
  reg [2:0]  LS_op = 3'b0;

  always @(posedge clk or posedge rst) begin
    if (rst || flush) begin
      Pc <= 32'b0;
      Rs1 <= 32'b0;
      Rs2 <= 32'b0;
      Rd <= 5'b0;
      Imm <= 32'b0;
      rs1 <= 5'b0;
      rs2 <= 5'b0;
      RegWrite <= 1'b0;
      ALUSrc <= 1'b0;
      MemtoReg <= 1'b0;
      MemRead <= 1'b0;
      MemWrite <= 1'b0;
      Branch <= 1'b0;
      ALU_op <= 4'b0;
      BRU_op <= 3'b0;
      LS_op <= 3'b0;
    end else if (stall) begin
      Pc <= Pc;
      Rs1 <= Rs1;
      Rs2 <= Rs2;
      Rd <= Rd;
      Imm <= Imm;
      rs1 <= rs1;
      rs2 <= rs2;
      RegWrite <= RegWrite;
      ALUSrc <= ALUSrc;
      MemtoReg <= MemtoReg;
      MemRead <= MemRead;
      MemWrite <= MemWrite;
      Branch <= Branch;
      ALU_op <= ALU_op;
      BRU_op <= BRU_op;
      LS_op <= LS_op;
    end else begin
      Pc <= PcIn;
      Rs1 <= Rs1In;
      Rs2 <= Rs2In;
      Rd <= RdIn;
      Imm <= ImmIn;
      rs1 <= rs1_in;
      rs2 <= rs2_in;
      RegWrite <= RegWriteIn;
      ALUSrc <= ALUSrcIn;
      MemtoReg <= MemtoRegIn;
      MemRead <= MemReadIn;
      MemWrite <= MemWriteIn;
      Branch <= BranchIn;
      ALU_op <= ALU_opIn;
      BRU_op <= BRU_opIn;
      LS_op <= LS_opIn;
    end
  end

  assign PcOut = Pc;
  assign Rs1Out = Rs1;
  assign Rs2Out = Rs2;
  assign  RdOut = Rd;
  assign ImmOut = Imm;
  assign  rs1_out = rs1;
  assign  rs2_out = rs2;
  assign   RegWriteOut = RegWrite;
  assign   ALUSrcOut = ALUSrc;
  assign    MemtoRegOut = MemtoReg;
  assign      MemReadOut = MemRead;
  assign      MemWriteOut = MemWrite;
  assign    BranchOut = Branch;
  assign  ALU_opOut = ALU_op;
  assign  BRU_opOut = BRU_op;
  assign  LS_opOut = LS_op; 

endmodule
