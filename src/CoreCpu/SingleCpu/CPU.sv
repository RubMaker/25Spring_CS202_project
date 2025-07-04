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
module CPU (
    input logic clk,memclk,reset,
    input logic [`DATA_WIDTH] UartData,
    input logic [`DATA_WIDTH] UartAddress,
    input logic UartOver,
    input logic [`LED_WIDTH] Switch1,Switch2,
    //input logic Button1,Button2,Button3,Button4,Button5,
    input logic Button_Confirm,
    output logic [`LED_WIDTH] Led1,Led2,
    output logic [`DATA_WIDTH] Seg1Out,
    output logic [`LED_WIDTH] VGA1Out
    //input logic [`VGA_ADDRESS] VgaAddress,
    //output logic [`INFO_WIDTH] CharOut,
    //output logic [`INFO_WIDTH] ColorOut
    //output logic [`DATA_WIDTH] Pc_test,
    //output logic [`DATA_WIDTH] Inst_test
    // output logic [4:0] rs1,rs2,
    // output logic uncached,
    // output logic hit
);
    logic RealReset ;
    assign RealReset = reset | ~UartOver;
    logic [`DATA_WIDTH] NextPc,ThisPc;
    logic [`DATA_WIDTH] MemInstr,MemData;
    logic [`DATA_WIDTH] UartMemAddress,UartMemData;
    logic [`DATA_WIDTH] FetchInstr;
    logic [`DATA_WIDTH] ImmData;
    logic [4:0] rs1,rs2,rd;
    logic [`DATA_WIDTH] WriteBackData,Reg1Data,Reg2Data;
    assign  rs1 = FetchInstr[19:15];
    assign  rs2 = FetchInstr[24:20];
    assign  rd  = FetchInstr[11:7];
    wire [31:0] segout;
    ProgramCounter pc_sl (
        .clk(clk),
        .reset(RealReset),
        .PcInput(NextPc),
        .PcOutput(ThisPc)
    );
    InstCache icache_sl(
        .clk(clk),
        .reset(RealReset),
        .Address(ThisPc),
        .MemInstruction(MemInstr),
        .Instruction(FetchInstr)
        // .uncached,
        // .hit
    );
    ImmGenerator imm_sl(
        .Instruction(FetchInstr),
        .ImmData(ImmData)
    );

    logic JumpLink;
    logic [`BRUOP_WIDTH] BranchOperation;  // Branch unit control
    logic [`ALUOP_WIDTH] AluOperation;     // ALU control code
    logic [`LDST_WIDTH] MemoryOperation;     // Memory access type
    logic MemWriteEn, MemReadEn, RegWriteEn, AluSrc1Selector, AluSrc2Selector; //0 rs2 1 imm
    logic [1:0] Mem2Reg; // 00 ALU 01 Memory 10 PC+4 11 PC+imm
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
        .RegWriteEn(RegWriteEn),
        .CpuStart(UartOver)
    );
    RegisterFile regf_sl(
        .clk(clk),
        .reset(RealReset),
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
        .Source1(Reg1Data),
        .Source2(Reg2Data),
        .Pc(ThisPc),               // Current instruction PC
        .Immediate(ImmData),                // Immediate value (offset for branch)
        .BRUOperation(BranchOperation),               // Branch operation code (controls comparison type)
        .Jalr(JumpLink),                 // Jalr instruction flag (whether it is a register jump)
        .NewPc(NextPc),               // Directly output the next instruction PC (no old PC needed for single-cycle)
        .reset(RealReset)             // Reset signal
    );
    logic [`DATA_WIDTH] MemAddress,MemWriteData,DataFromCache;
    logic MemEnWrite;
    DataCache dcache_sl(
        .clk(clk),
        .reset(RealReset),
        .Address(AluResult),
        .WriteData(Reg2Data),
        .MemData(MemData),
        .MemRead(MemReadEn),
        .MemWrite(MemWriteEn),
        .MemOperation(MemoryOperation),
        .MemAddress(MemAddress),
        .MemWriteData(MemWriteData),
        .DataOut(DataFromCache),
        .MemWriteEnB(MemEnWrite)
    );
    assign UartMemAddress = UartOver ? MemAddress : UartAddress;
    assign UartMemData = UartOver ? MemWriteData : UartData;
    logic WriteEnPortB;
    assign WriteEnPortB = ~UartOver || MemEnWrite;
    // logic [1:0] SelectorForWriteBack = {JumpLink,Mem2Reg};
    Mux3 WriteBack_sl (
        .Select(Mem2Reg),
        .Input1(DataFromCache),
        .Input0(AluResult),
        .Input2(ThisPc + 4),
        .Output(WriteBackData)
    );
    // logic [31:0] AddressReg;
    // always @(posedge clk) begin
    //     AddressReg <= ThisPc;  // 锁存地址
    // end
    Memory memory_sl (
        .clkA(memclk),
        .clkB(memclk),
        .reset(RealReset),
        .AddressA(ThisPc), 
        .AddressB(UartMemAddress), 
        .WriteData(UartMemData),        
        .EnableWriteB(WriteEnPortB),  
        .ReadDataA(MemInstr),
        .ReadDataB(MemData),

        .Switch1(Switch1),
        .Switch2(Switch2),
        /*.Button1(Button1),
        .Button2(Button2),
        .Button3(Button3),
        .Button4(Button4),
        .Button5(Button5),*/
        .Button_Confirm(Button_Confirm),
        .Led1Out(Led1),
        .Led2Out(Led2),
        .Seg1Out(Seg1Out),
        //.VgaAddress(VgaAddress),
        //.CharOut(CharOut),
        //.ColorOut(ColorOut)
        .VGA1Out(VGA1Out)
    );
    //assign Seg1Out = FetchInstr;
endmodule 
