`include "Constants.vh"
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/15/2025 06:06:15 PM
// Design Name: 
// Module Name: CPUSin
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
module CPUSin (
    input logic clk,memclk,reset,
    input logic [`DATA_WIDTH] UartData,
    input logic [`DATA_WIDTH] UartAddress,
    input logic UartOver,
    input logic [`LED_WIDTH] Switch1,Switch2,
    input logic Button1,Button2,Button3,Button4,Button5,
    output logic [`LED_WIDTH] Led1,Led2,
    output logic [`DATA_WIDTH] Seg1Out,
    input logic [`VGA_ADDRESS] VgaAddress,
    output logic [`INFO_WIDTH] CharOut,
    output logic [`INFO_WIDTH] ColorOut,
    output logic [`DATA_WIDTH] Pc_test,
    output logic [`DATA_WIDTH] Inst_test
);
    logic [`DATA_WIDTH] NextPc,ThisPc;
    logic [`DATA_WIDTH] MemInstr,MemData;
    logic [`DATA_WIDTH] MemPc,UartMemAddress,UartMemData;
    logic [`DATA_WIDTH] FetchInstr;
    logic [`DATA_WIDTH] ImmData;
    logic [`CTRL_WIDTH] TotalBus;
    logic [4:0] rs1,rs2,rd;
    logic RegWrite;
    logic [`DATA_WIDTH] WriteBackData,Reg1Data,Reg2Data;
    assign  rs1 = FetchInstr[19:15];
    assign  rs2 = FetchInstr[24:20];
    assign  rd  = FetchInstr[11:7];
    ProgramCounter pc_sl (
        .clk(clk),
        .reset(reset),
        .PcInput(NextPc),
        .PcOutput(ThisOut)
    );
    InstCache icache_sl(
        .clk(clk),
        .reset(reset),
        .Address(ThisPc),
        .MemInstruction(MemInstr),
        .Instruction(FetchInstr),
        .MemPc(MemPc)
    );
    ImmGenerator imm_sl(
        .Instruction(FetchInstr),
        .ImmData(ImmData)
    );

    logic JumpLink;
    logic [`BRUOP_WIDTH] BranchOperation;  // Branch unit control
    logic [`ALUOP_WIDTH] AluOperation;     // ALU control code
    logic [`LDST_WIDTH] MemoryOperation;     // Memory access type
    logic MemWriteEn, MemReadEn, RegWriteEn, Mem2Reg, AluSrc1Selector, AluSrc2Selector; //0 rs2 1 imm

    Controller constrol_sl(
        .Instruction(FetchInstr),
        .JumpLink(JumpLink),
        .BranchOperation(BranchOperation),
        .AluOperation(AluOperation),
        .AluSrc1(AluSrc1Selector),
        .AluSrc2(AluSrc2Selector),
        .MemoryOperation(MemoryOperation),
        .Mem2Reg(Mem2Reg),
        .MemWriteEn(MemWriteEn),
        .MemReadEn(MemReadEn),
        .RegWriteEn(RegWriteEn)
    );
    RegisterFile regf_sl(
        .clk(clk),
        .reset(reset),
        .ReadRegAddr1(rs1),
        .ReadRegAddr2(rs2),
        .WriteRegAddr(rd),
        .WriteData(WriteBackData),
        .RegWrite(RegWriteEn),
        .ReadData1(Reg1Data),
        .ReadData2(Reg2Data)
    );
    logic [`DATA_WIDTH] AluSrc1,AluSrc2,AluResult;
    Mux2 Src1ForAlu_sl (
        .Select(AluSrc1Selector),
        .Input0(Reg1Data),
        .Input1(ThisPc),
        .Output(AluSrc1)
    );
    Mux2 Src2ForAlu_sl (
        .Select(AluSrc2Selector),
        .Input0(Reg2Data),
        .Input1(ImmData),
        .Output(AluSrc2)
    );
    ALU alu_sl(
        .AluOperation(AluOperation),
        .InputA(AluSrc1),
        .InputB(AluSrc2),
        .Result(AluResult)
    );
    BRUSin Bru_sl(
        .Source1(rs1),
        .Source2(rs2),
        .Pc(ThisPc),               // Current instruction PC
        .Immediate(ImmData),                // Immediate value (offset for branch)
        .BRUOperation(BranchOperation),               // Branch operation code (controls comparison type)
        .Jalr(JumpLink),                 // Jalr instruction flag (whether it is a register jump)
        .NewPc(NextPc)               // Directly output the next instruction PC (no old PC needed for single-cycle)
    );
    logic [`DATA_WIDTH] MemAddress,MemWriteData,DataFromCache;
    DataCache dcache_sl(
        .clk(clk),
        .reset(reset),
        .Address(AluResult),
        .WriteData(Reg2Data),
        .MemoryData(MemData),
        // .MemReadEn(MemReadEn),
        .MemWrite(MemWriteEn),
        .MemOperation(MemoryOperation),
        .MemAddress(MemAddress),
        .MemWriteData(MemWriteData),
        .DataOut(DataFromCache)
        // .MemEnWrite(MemEnWrite)
    );
    assign UartMemAddress = UartOver ? MemAddress : UartAddress;
    assign UartMemData = UartOver ? MemWriteData : UartData;
    logic WriteEnPortB;
    assign WriteEnPortB = ~UartOver || MemWriteEn;

    Mux2 WriteBack_sl (
        .Select(Mem2Reg),
        .Input0(DataFromCache),
        .Input1(AluResult),
        .Output(WriteBackData)
    );
    Memory memory_sl (
        .clkA(memclk),
        .clkB(memclk),
        .reset(reset),
        .AddressA(MemPc), 
        .AddressB(UartMemAddress), 
        .WriteData(UartMemData),        
        .EnableWriteB(WriteEnPortB),  
        .ReadDataA(MemInstr),
        .ReadDataB(MemData),

        .Switch1(Switch1),
        .Switch2(Switch2),
        .Button1(Button1),
        .Button2(Button2),
        .Button3(Button3),
        .Button4(Button4),
        .Button5(Button5),
        .Led1Out(Led1),
        .Led2Out(Led2),
        .Seg1Out(Seg1Out),
        .VgaAddress(VgaAddress),
        .CharOut(CharOut),
        .ColorOut(ColorOut)
    );
endmodule