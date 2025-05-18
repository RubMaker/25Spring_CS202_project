// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPUSin__Syms.h"


VL_ATTR_COLD void VCPUSin___024root__trace_init_sub__TOP__CPUSin__0(VCPUSin___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPUSin___024root__trace_init_sub__TOP__0(VCPUSin___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_init_sub__TOP__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CPUSin", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPUSin___024root__trace_init_sub__TOP__CPUSin__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"memclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"UartData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"UartAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"UartOver",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+172,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"Led1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"Led2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+181,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"Pc_test",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"Inst_test",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPUSin___024root__trace_init_sub__TOP__CPUSin__memory_sl__0(VCPUSin___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPUSin___024root__trace_init_sub__TOP__CPUSin__0(VCPUSin___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_init_sub__TOP__CPUSin__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"memclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"UartData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"UartAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"UartOver",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+172,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"Led1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"Led2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+185,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"Pc_test",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"Inst_test",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"NextPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"ThisPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"MemInstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"MemData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"MemPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"UartMemAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"UartMemData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"FetchInstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"ImmData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"TotalBus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+131,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+132,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+133,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+195,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"WriteBackData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"Reg1Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"Reg2Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"JumpLink",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"BranchOperation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+138,0,"AluOperation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"MemoryOperation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+140,0,"MemWriteEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"MemReadEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"RegWriteEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"Mem2Reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"AluSrc1Selector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"AluSrc2Selector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"AluSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"AluSrc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"AluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"MemAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"MemWriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"DataFromCache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"WriteEnPortB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("memory_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPUSin___024root__trace_init_sub__TOP__CPUSin__memory_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("Bru_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+134,0,"Source1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"Source2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"Pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"Immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"BRUOperation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+136,0,"Jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"NewPc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"Res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Src1ForAlu_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"Select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"Input0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"Input1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"Output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Src2ForAlu_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+145,0,"Select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"Input0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"Input1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"Output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WriteBack_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+143,0,"Select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"Input0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"Input1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"Output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+146,0,"InputA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"InputB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"AluOperation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+151,0,"Mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+153,0,"SignedInputAExt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+155,0,"UnsignedInputBExt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+157,0,"FullMul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("constrol_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+128,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"JumpLink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"BranchOperation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+138,0,"AluOperation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+144,0,"AluSrc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"AluSrc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"MemoryOperation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+140,0,"MemWriteEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"MemReadEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"RegWriteEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"Mem2Reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dcache_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"MemOperation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+140,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"DataOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"MemoryData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"MemAddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"MemWriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cache", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+20+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 43,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+161,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+162,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+163,0,"uncached",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"CacheReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"RDataIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("icache_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"Instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"MemInstruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cache", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+53+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 42,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+85,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+86,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"uncached",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imm_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+128,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"ImmData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"PcInput",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"PcOutput",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"PcReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("regf_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"ReadRegAddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+132,0,"ReadRegAddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+133,0,"WriteRegAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"ReadData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"ReadData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+121,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPUSin___024root__trace_init_sub__TOP__CPUSin__memory_sl__mem_inst__0(VCPUSin___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPUSin___024root__trace_init_sub__TOP__CPUSin__memory_sl__0(VCPUSin___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_init_sub__TOP__CPUSin__memory_sl__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+166,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"clkA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"clkB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"AddressA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"AddressB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"EnableWriteB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+172,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+127,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"Led1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"Led2Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"ReadDataA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"ReadDataB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"ADDR_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"ADDR_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"ReDataA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"ReDataB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"DataIo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"ExpData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"IsMMIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"IsExcept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"EnWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPUSin___024root__trace_init_sub__TOP__CPUSin__memory_sl__mem_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exp_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"ExpData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mmio_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+172,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"Led1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"Led2Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+185,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+191,0,"DataIo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"Led1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"Led2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"Seg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPUSin___024root__trace_init_sub__TOP__CPUSin__memory_sl__mem_inst__0(VCPUSin___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_init_sub__TOP__CPUSin__memory_sl__mem_inst__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+192,0,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"clkb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+12,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+13,0,"write_datab",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"web",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"dataa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"datab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"dataa_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"datab_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPUSin___024root__trace_init_top(VCPUSin___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_init_top\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPUSin___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPUSin___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCPUSin___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUSin___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUSin___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPUSin___024root__trace_register(VCPUSin___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_register\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VCPUSin___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VCPUSin___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VCPUSin___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VCPUSin___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPUSin___024root__trace_const_0_sub_0(VCPUSin___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPUSin___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_const_0\n"); );
    // Init
    VCPUSin___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUSin___024root*>(voidSelf);
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPUSin___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPUSin___024root__trace_const_0_sub_0(VCPUSin___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_const_0_sub_0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+193,(vlSymsp->TOP__CPUSin.__PVT__MemPc),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__CPUSin.__PVT__TotalBus),17);
    bufp->fullBit(oldp+195,(vlSymsp->TOP__CPUSin.__PVT__RegWrite));
    bufp->fullIData(oldp+196,(0xfU),32);
    bufp->fullIData(oldp+197,(2U),32);
}

VL_ATTR_COLD void VCPUSin___024root__trace_full_0_sub_0(VCPUSin___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPUSin___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_full_0\n"); );
    // Init
    VCPUSin___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUSin___024root*>(voidSelf);
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPUSin___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPUSin___024root__trace_full_0_sub_0(VCPUSin___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_full_0_sub_0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+2,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__hit));
    bufp->fullIData(oldp+3,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__CPUSin.__PVT__UartMemAddress),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__CPUSin.__PVT__UartMemData),32);
    bufp->fullIData(oldp+8,(((IData)(vlSymsp->TOP__CPUSin.__PVT__Mem2Reg)
                              ? vlSymsp->TOP__CPUSin.__PVT__AluResult
                              : vlSymsp->TOP__CPUSin.__PVT__DataFromCache)),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__CPUSin.__PVT__DataFromCache),32);
    bufp->fullBit(oldp+10,((0xffffU == (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                                        >> 0x10U))));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__EnWB));
    bufp->fullSData(oldp+12,((0x3fffU & (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                                         >> 2U))),14);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__CPUSin__memory_sl.__Vcellinp__mem_inst__write_datab),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__dataa),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__datab),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__dataa_temp),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__datab_temp),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg),32);
    bufp->fullQData(oldp+20,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[0]),44);
    bufp->fullQData(oldp+22,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[1]),44);
    bufp->fullQData(oldp+24,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[2]),44);
    bufp->fullQData(oldp+26,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[3]),44);
    bufp->fullQData(oldp+28,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[4]),44);
    bufp->fullQData(oldp+30,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[5]),44);
    bufp->fullQData(oldp+32,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[6]),44);
    bufp->fullQData(oldp+34,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[7]),44);
    bufp->fullQData(oldp+36,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[8]),44);
    bufp->fullQData(oldp+38,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[9]),44);
    bufp->fullQData(oldp+40,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[10]),44);
    bufp->fullQData(oldp+42,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[11]),44);
    bufp->fullQData(oldp+44,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[12]),44);
    bufp->fullQData(oldp+46,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[13]),44);
    bufp->fullQData(oldp+48,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[14]),44);
    bufp->fullQData(oldp+50,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[15]),44);
    bufp->fullIData(oldp+52,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__unnamedblk2__DOT__i),32);
    bufp->fullQData(oldp+53,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[0]),43);
    bufp->fullQData(oldp+55,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[1]),43);
    bufp->fullQData(oldp+57,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[2]),43);
    bufp->fullQData(oldp+59,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[3]),43);
    bufp->fullQData(oldp+61,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[4]),43);
    bufp->fullQData(oldp+63,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[5]),43);
    bufp->fullQData(oldp+65,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[6]),43);
    bufp->fullQData(oldp+67,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[7]),43);
    bufp->fullQData(oldp+69,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[8]),43);
    bufp->fullQData(oldp+71,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[9]),43);
    bufp->fullQData(oldp+73,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[10]),43);
    bufp->fullQData(oldp+75,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[11]),43);
    bufp->fullQData(oldp+77,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[12]),43);
    bufp->fullQData(oldp+79,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[13]),43);
    bufp->fullQData(oldp+81,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[14]),43);
    bufp->fullQData(oldp+83,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[15]),43);
    bufp->fullCData(oldp+85,((0xfU & (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                      >> 2U))),4);
    bufp->fullSData(oldp+86,((0x3ffU & (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                        >> 6U))),10);
    bufp->fullBit(oldp+87,((0x1c09U == (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                        >> 0x10U))));
    bufp->fullIData(oldp+88,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[0]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[1]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[2]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[3]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[4]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[5]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[6]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[7]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[8]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[9]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[10]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[11]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[12]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[13]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[14]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[15]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[16]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[17]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[18]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[19]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[20]),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[21]),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[22]),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[23]),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[24]),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[25]),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[26]),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[27]),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[28]),32);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[29]),32);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[30]),32);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[31]),32);
    bufp->fullIData(oldp+121,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+122,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__ExpData),32);
    bufp->fullBit(oldp+123,((0x1c09U == (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                         >> 0x10U))));
    bufp->fullSData(oldp+124,((0x3fffU & (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                          >> 2U))),14);
    bufp->fullCData(oldp+125,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Led1),8);
    bufp->fullCData(oldp+126,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Led2),8);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Seg1),32);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__CPUSin.__PVT__FetchInstr),32);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataA),32);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__CPUSin.__PVT__ImmData),32);
    bufp->fullCData(oldp+131,((0x1fU & (vlSymsp->TOP__CPUSin.__PVT__FetchInstr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+132,((0x1fU & (vlSymsp->TOP__CPUSin.__PVT__FetchInstr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+133,((0x1fU & (vlSymsp->TOP__CPUSin.__PVT__FetchInstr 
                                        >> 7U))),5);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__CPUSin.__PVT__Reg1Data),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__CPUSin.__PVT__Reg2Data),32);
    bufp->fullBit(oldp+136,(vlSymsp->TOP__CPUSin.__PVT__JumpLink));
    bufp->fullCData(oldp+137,(vlSymsp->TOP__CPUSin.__PVT__BranchOperation),3);
    bufp->fullCData(oldp+138,(vlSymsp->TOP__CPUSin.__PVT__AluOperation),4);
    bufp->fullCData(oldp+139,(vlSymsp->TOP__CPUSin.__PVT__MemoryOperation),3);
    bufp->fullBit(oldp+140,(vlSymsp->TOP__CPUSin.__PVT__MemWriteEn));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__CPUSin.__PVT__MemReadEn));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__CPUSin.__PVT__RegWriteEn));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__CPUSin.__PVT__Mem2Reg));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__CPUSin.__PVT__AluSrc1Selector));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__CPUSin.__PVT__AluSrc2Selector));
    bufp->fullIData(oldp+146,(vlSymsp->TOP__CPUSin.__PVT__AluSrc1),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__CPUSin.__PVT__AluSrc2),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__CPUSin.__PVT__AluResult),32);
    bufp->fullIData(oldp+149,(((IData)(vlSymsp->TOP__CPUSin.__PVT__MemWriteEn)
                                ? vlSymsp->TOP__CPUSin.__PVT__Reg2Data
                                : 0U)),32);
    bufp->fullBit(oldp+150,(((4U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                              ? ((2U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                  ? ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation)) 
                                     || (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                         >= vlSymsp->TOP__CPUSin.__PVT__Reg2Data))
                                  : ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                      ? (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                         < vlSymsp->TOP__CPUSin.__PVT__Reg2Data)
                                      : VL_GTES_III(32, vlSymsp->TOP__CPUSin.__PVT__Reg1Data, vlSymsp->TOP__CPUSin.__PVT__Reg2Data)))
                              : ((2U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                  ? ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                      ? VL_LTS_III(32, vlSymsp->TOP__CPUSin.__PVT__Reg1Data, vlSymsp->TOP__CPUSin.__PVT__Reg2Data)
                                      : (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                         != vlSymsp->TOP__CPUSin.__PVT__Reg2Data))
                                  : ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation)) 
                                     && (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                         == vlSymsp->TOP__CPUSin.__PVT__Reg2Data))))));
    bufp->fullQData(oldp+151,(vlSymsp->TOP__CPUSin.__PVT__alu_sl__DOT__Mul),64);
    bufp->fullQData(oldp+153,(vlSymsp->TOP__CPUSin.__PVT__alu_sl__DOT__SignedInputAExt),64);
    bufp->fullQData(oldp+155,(vlSymsp->TOP__CPUSin.__PVT__alu_sl__DOT__UnsignedInputBExt),64);
    bufp->fullWData(oldp+157,(vlSymsp->TOP__CPUSin.__PVT__alu_sl__DOT__FullMul),128);
    bufp->fullCData(oldp+161,((0xfU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                       >> 2U))),4);
    bufp->fullSData(oldp+162,((0x3ffU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                         >> 6U))),10);
    bufp->fullBit(oldp+163,((0xfU == (0xfU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                              >> 0x10U)))));
    bufp->fullBit(oldp+164,(vlSelfRef.clk));
    bufp->fullBit(oldp+165,(vlSelfRef.memclk));
    bufp->fullBit(oldp+166,(vlSelfRef.reset));
    bufp->fullIData(oldp+167,(vlSelfRef.UartData),32);
    bufp->fullIData(oldp+168,(vlSelfRef.UartAddress),32);
    bufp->fullBit(oldp+169,(vlSelfRef.UartOver));
    bufp->fullCData(oldp+170,(vlSelfRef.Switch1),8);
    bufp->fullCData(oldp+171,(vlSelfRef.Switch2),8);
    bufp->fullBit(oldp+172,(vlSelfRef.Button1));
    bufp->fullBit(oldp+173,(vlSelfRef.Button2));
    bufp->fullBit(oldp+174,(vlSelfRef.Button3));
    bufp->fullBit(oldp+175,(vlSelfRef.Button4));
    bufp->fullBit(oldp+176,(vlSelfRef.Button5));
    bufp->fullCData(oldp+177,(vlSelfRef.Led1),8);
    bufp->fullCData(oldp+178,(vlSelfRef.Led2),8);
    bufp->fullIData(oldp+179,(vlSelfRef.Seg1Out),32);
    bufp->fullSData(oldp+180,(vlSelfRef.VgaAddress),12);
    bufp->fullCData(oldp+181,(vlSelfRef.CharOut),8);
    bufp->fullCData(oldp+182,(vlSelfRef.ColorOut),8);
    bufp->fullIData(oldp+183,(vlSelfRef.Pc_test),32);
    bufp->fullIData(oldp+184,(vlSelfRef.Inst_test),32);
    bufp->fullCData(oldp+185,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                                ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__chars
                               [vlSelfRef.VgaAddress]
                                : 0U)),8);
    bufp->fullCData(oldp+186,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                                ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__color
                               [vlSelfRef.VgaAddress]
                                : 0U)),8);
    bufp->fullIData(oldp+187,((((4U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                 ? ((2U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                     ? ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation)) 
                                        || (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                            >= vlSymsp->TOP__CPUSin.__PVT__Reg2Data))
                                     : ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                         ? (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                            < vlSymsp->TOP__CPUSin.__PVT__Reg2Data)
                                         : VL_GTES_III(32, vlSymsp->TOP__CPUSin.__PVT__Reg1Data, vlSymsp->TOP__CPUSin.__PVT__Reg2Data)))
                                 : ((2U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                     ? ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                         ? VL_LTS_III(32, vlSymsp->TOP__CPUSin.__PVT__Reg1Data, vlSymsp->TOP__CPUSin.__PVT__Reg2Data)
                                         : (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                            != vlSymsp->TOP__CPUSin.__PVT__Reg2Data))
                                     : ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation)) 
                                        && (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                            == vlSymsp->TOP__CPUSin.__PVT__Reg2Data))))
                                ? ((IData)(vlSymsp->TOP__CPUSin.__PVT__JumpLink)
                                    ? (vlSymsp->TOP__CPUSin.__PVT__ImmData 
                                       + vlSymsp->TOP__CPUSin.__PVT__Reg1Data)
                                    : (vlSymsp->TOP__CPUSin.__PVT__ImmData 
                                       + vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg))
                                : ((IData)(4U) + vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg))),32);
    bufp->fullBit(oldp+188,((1U & ((~ (IData)(vlSelfRef.UartOver)) 
                                   | (IData)(vlSymsp->TOP__CPUSin.__PVT__MemWriteEn)))));
    bufp->fullBit(oldp+189,(((IData)((vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                      [(0xfU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                >> 2U))] 
                                      >> 0x2bU)) & 
                             ((0x3ffU & (IData)((vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                                 [(0xfU 
                                                   & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                      >> 2U))] 
                                                 >> 0x20U))) 
                              == (0x3ffU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                            >> 6U))))));
    bufp->fullIData(oldp+190,(((0xfU == (0xfU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                 >> 0x10U)))
                                ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                : (((IData)((vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                             [(0xfU 
                                               & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                  >> 2U))] 
                                             >> 0x2bU)) 
                                    & ((0x3ffU & (IData)(
                                                         (vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                                          [
                                                          (0xfU 
                                                           & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                              >> 2U))] 
                                                          >> 0x20U))) 
                                       == (0x3ffU & 
                                           (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                            >> 6U))))
                                    ? (IData)(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                              [(0xfU 
                                                & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                   >> 2U))])
                                    : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))),32);
    bufp->fullIData(oldp+191,(((0xffffff00U == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                ? (IData)(vlSelfRef.Switch1)
                                : ((0xffffff04U == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                    ? (IData)(vlSelfRef.Switch2)
                                    : ((0xffffff14U 
                                        == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                        ? ((IData)(vlSelfRef.Button1)
                                            ? 1U : 0U)
                                        : ((0xffffff18U 
                                            == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                            ? ((IData)(vlSelfRef.Button2)
                                                ? 1U
                                                : 0U)
                                            : ((0xffffff1cU 
                                                == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                                ? ((IData)(vlSelfRef.Button3)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (0xffffff20U 
                                                    == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                                    ? 
                                                   ((IData)(vlSelfRef.Button4)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0xffffff24U 
                                                     == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                                     ? 
                                                    ((IData)(vlSelfRef.Button5)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)))))))),32);
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelfRef.memclk)))));
}
