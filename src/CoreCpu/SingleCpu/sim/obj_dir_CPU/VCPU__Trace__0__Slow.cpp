// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CPU", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+45,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"memclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"UartData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"UartAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"UartOver",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+53,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"Led1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"Led2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+62,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"Pc_test",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"Inst_test",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__pc_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__icache_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__imm_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__constrol_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__regf_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__Src1ForAlu_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__Src2ForAlu_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__alu_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__Bru_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__dcache_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__WriteBack_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+45,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"memclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"UartData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"UartAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"UartOver",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+53,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"Led1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"Led2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+66,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"Pc_test",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"Inst_test",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"RealReset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"NextPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"ThisPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"MemInstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"MemData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"UartMemAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"UartMemData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"FetchInstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"ImmData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"WriteBackData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"Reg1Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"Reg2Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pc_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__pc_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("icache_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__icache_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("imm_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__imm_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+7,0,"JumpLink",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"BranchOperation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"AluOperation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"MemoryOperation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+11,0,"MemWriteEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"MemReadEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"RegWriteEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"AluSrc1Selector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"AluSrc2Selector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"Mem2Reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("constrol_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__constrol_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("regf_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__regf_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+73,0,"AluSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"AluSrc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"AluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Src1ForAlu_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__Src1ForAlu_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("Src2ForAlu_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__Src2ForAlu_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("alu_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__alu_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("Bru_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__Bru_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+22,0,"MemAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"MemWriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"DataFromCache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"MemEnWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dcache_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__dcache_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+75,0,"WriteEnPortB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("WriteBack_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__WriteBack_sl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("memory_sl", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__pc_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__pc_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+45,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"PcInput",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"PcOutput",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"PcReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"reset_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__icache_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__icache_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+45,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"Instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"MemInstruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__imm_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__imm_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"ImmData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__constrol_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__constrol_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"JumpLink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"BranchOperation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"AluOperation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"AluSrc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"AluSrc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"MemoryOperation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+11,0,"MemWriteEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"MemReadEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"RegWriteEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"Mem2Reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"CpuStart",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__regf_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__regf_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+45,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"ReadRegAddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"ReadRegAddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"WriteRegAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"ReadData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"ReadData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+77+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__Src1ForAlu_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__Src1ForAlu_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+14,0,"Select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"Input0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"Input1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"Output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__Src2ForAlu_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__Src2ForAlu_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+15,0,"Select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"Input0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Input1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"Output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__alu_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__alu_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,0,"InputA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"InputB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"AluOperation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+24,0,"Mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+26,0,"SignedInputAExt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+28,0,"UnsignedInputBExt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+30,0,"FullMul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__Bru_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__Bru_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+20,0,"Source1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"Source2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"Pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"BRUOperation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"Jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"NewPc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"Res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__dcache_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__dcache_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+45,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"MemOperation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+12,0,"MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"DataOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"MemData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"MemAddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"MemWriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"MemWriteEnB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"RawData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"Data1FF3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__WriteBack_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__WriteBack_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+16,0,"Select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"Input0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"Input1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"Input2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"Output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__mem_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__exp_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__mmio_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+69,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"clkA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"clkB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"AddressA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"AddressB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"EnableWriteB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+53,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+40,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"Led1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"Led2Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"ReadDataA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"ReadDataB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"ADDR_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"ADDR_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ReDataA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"ReDataB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"DataIo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"ExpData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"IsMMIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"IsExcept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"EnWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__mem_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exp_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__exp_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mmio_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__mmio_inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__mem_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__mem_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+46,0,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"clkb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+36,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+37,0,"write_datab",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"web",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"dataa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"datab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"dataa_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"datab_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"ShowData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__exp_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__exp_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+68,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"ExpData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__mmio_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__memory_sl__mmio_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+69,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+53,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"Led1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"Led2Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+66,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"DataIo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"Led1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"Led2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"Seg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_top\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_register\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VCPU___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VCPU___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VCPU___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU___024root__trace_const_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_const_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_const_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_const_0_sub_0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+118,(vlSymsp->TOP__CPU__dcache_sl.__PVT__Data1FF3),32);
    bufp->fullIData(oldp+119,(0xfU),32);
    bufp->fullIData(oldp+120,(2U),32);
}

VL_ATTR_COLD void VCPU___024root__trace_full_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_full_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_0_sub_0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__CPU__regf_sl.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData),32);
    bufp->fullCData(oldp+4,((0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+5,((0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+6,((0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                      >> 7U))),5);
    bufp->fullBit(oldp+7,(vlSymsp->TOP__CPU__constrol_sl.__PVT__JumpLink));
    bufp->fullCData(oldp+8,(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation),3);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation),4);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemoryOperation),3);
    bufp->fullBit(oldp+11,(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemWriteEn));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemReadEn));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__CPU__constrol_sl.__PVT__RegWriteEn));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2));
    bufp->fullCData(oldp+16,(vlSymsp->TOP__CPU__constrol_sl.__PVT__Mem2Reg),2);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__CPU.__PVT__UartMemAddress),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__CPU.__PVT__UartMemData),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__CPU__alu_sl.__PVT__Result),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__CPU__dcache_sl.__PVT__DataOut),32);
    bufp->fullQData(oldp+24,(vlSymsp->TOP__CPU__alu_sl.__PVT__Mul),64);
    bufp->fullQData(oldp+26,(vlSymsp->TOP__CPU__alu_sl.__PVT__SignedInputAExt),64);
    bufp->fullQData(oldp+28,(vlSymsp->TOP__CPU__alu_sl.__PVT__UnsignedInputBExt),64);
    bufp->fullWData(oldp+30,(vlSymsp->TOP__CPU__alu_sl.__PVT__FullMul),128);
    bufp->fullBit(oldp+34,((0xffffU == (vlSymsp->TOP__CPU.__PVT__UartMemAddress 
                                        >> 0x10U))));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__CPU__memory_sl.__PVT__EnWB));
    bufp->fullSData(oldp+36,((0x3fffU & (vlSymsp->TOP__CPU.__PVT__UartMemAddress 
                                         >> 2U))),14);
    bufp->fullIData(oldp+37,(vlSymsp->TOP__CPU__memory_sl.__Vcellinp__mem_inst__write_datab),32);
    bufp->fullCData(oldp+38,(vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Led1),8);
    bufp->fullCData(oldp+39,(vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Led2),8);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Seg1),32);
    bufp->fullIData(oldp+41,(vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__dataa),32);
    bufp->fullIData(oldp+42,(vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__datab),32);
    bufp->fullIData(oldp+43,(vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__dataa_temp),32);
    bufp->fullIData(oldp+44,(vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__datab_temp),32);
    bufp->fullBit(oldp+45,(vlSelfRef.clk));
    bufp->fullBit(oldp+46,(vlSelfRef.memclk));
    bufp->fullBit(oldp+47,(vlSelfRef.reset));
    bufp->fullIData(oldp+48,(vlSelfRef.UartData),32);
    bufp->fullIData(oldp+49,(vlSelfRef.UartAddress),32);
    bufp->fullBit(oldp+50,(vlSelfRef.UartOver));
    bufp->fullCData(oldp+51,(vlSelfRef.Switch1),8);
    bufp->fullCData(oldp+52,(vlSelfRef.Switch2),8);
    bufp->fullBit(oldp+53,(vlSelfRef.Button1));
    bufp->fullBit(oldp+54,(vlSelfRef.Button2));
    bufp->fullBit(oldp+55,(vlSelfRef.Button3));
    bufp->fullBit(oldp+56,(vlSelfRef.Button4));
    bufp->fullBit(oldp+57,(vlSelfRef.Button5));
    bufp->fullCData(oldp+58,(vlSelfRef.Led1),8);
    bufp->fullCData(oldp+59,(vlSelfRef.Led2),8);
    bufp->fullIData(oldp+60,(vlSelfRef.Seg1Out),32);
    bufp->fullSData(oldp+61,(vlSelfRef.VgaAddress),12);
    bufp->fullCData(oldp+62,(vlSelfRef.CharOut),8);
    bufp->fullCData(oldp+63,(vlSelfRef.ColorOut),8);
    bufp->fullIData(oldp+64,(vlSelfRef.Pc_test),32);
    bufp->fullIData(oldp+65,(vlSelfRef.Inst_test),32);
    bufp->fullCData(oldp+66,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                               ? vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__chars
                              [vlSelfRef.VgaAddress]
                               : 0U)),8);
    bufp->fullCData(oldp+67,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                               ? vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__color
                              [vlSelfRef.VgaAddress]
                               : 0U)),8);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__CPU__pc_sl.PcReg),32);
    bufp->fullBit(oldp+69,(vlSymsp->TOP__CPU.__PVT__RealReset));
    bufp->fullIData(oldp+70,((((4U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                ? ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                    ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation)) 
                                       || (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                           >= vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                    : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                        ? (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                           < vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)
                                        : VL_GTES_III(32, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)))
                                : ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                    ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                        ? VL_LTS_III(32, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)
                                        : (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                           != vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                    : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation)) 
                                       && (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                           == vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))))
                               ? ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__JumpLink)
                                   ? (vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData 
                                      + vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1)
                                   : (vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData 
                                      + vlSymsp->TOP__CPU__pc_sl.PcReg))
                               : ((IData)(vlSymsp->TOP__CPU.__PVT__RealReset)
                                   ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                   : ((IData)(4U) + vlSymsp->TOP__CPU__pc_sl.PcReg)))),32);
    bufp->fullIData(oldp+71,(((0x1c09U == (vlSymsp->TOP__CPU__pc_sl.PcReg 
                                           >> 0x10U))
                               ? vlSymsp->TOP__CPU__memory_sl__exp_inst.__PVT__ExpData
                               : vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__dataa)),32);
    bufp->fullIData(oldp+72,(((0U == (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__Mem2Reg))
                               ? vlSymsp->TOP__CPU__alu_sl.__PVT__Result
                               : ((1U == (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__Mem2Reg))
                                   ? vlSymsp->TOP__CPU__dcache_sl.__PVT__DataOut
                                   : ((IData)(4U) + vlSymsp->TOP__CPU__pc_sl.PcReg)))),32);
    bufp->fullIData(oldp+73,(((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                               ? vlSymsp->TOP__CPU__pc_sl.PcReg
                               : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1)),32);
    bufp->fullIData(oldp+74,(((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                               ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                               : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)),32);
    bufp->fullBit(oldp+75,((1U & ((~ (IData)(vlSelfRef.UartOver)) 
                                  | (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemWriteEn)))));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__CPU__pc_sl.__PVT__reset_done));
    bufp->fullIData(oldp+77,(vlSymsp->TOP__CPU__regf_sl.Registers[0]),32);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__CPU__regf_sl.Registers[1]),32);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__CPU__regf_sl.Registers[2]),32);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__CPU__regf_sl.Registers[3]),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__CPU__regf_sl.Registers[4]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__CPU__regf_sl.Registers[5]),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__CPU__regf_sl.Registers[6]),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__CPU__regf_sl.Registers[7]),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__CPU__regf_sl.Registers[8]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__CPU__regf_sl.Registers[9]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__CPU__regf_sl.Registers[10]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__CPU__regf_sl.Registers[11]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__CPU__regf_sl.Registers[12]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__CPU__regf_sl.Registers[13]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__CPU__regf_sl.Registers[14]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__CPU__regf_sl.Registers[15]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__CPU__regf_sl.Registers[16]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__CPU__regf_sl.Registers[17]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__CPU__regf_sl.Registers[18]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__CPU__regf_sl.Registers[19]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__CPU__regf_sl.Registers[20]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__CPU__regf_sl.Registers[21]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__CPU__regf_sl.Registers[22]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__CPU__regf_sl.Registers[23]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__CPU__regf_sl.Registers[24]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__CPU__regf_sl.Registers[25]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__CPU__regf_sl.Registers[26]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__CPU__regf_sl.Registers[27]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__CPU__regf_sl.Registers[28]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__CPU__regf_sl.Registers[29]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__CPU__regf_sl.Registers[30]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__CPU__regf_sl.Registers[31]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__CPU__regf_sl.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+110,(((4U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                              ? ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                  ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation)) 
                                     || (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                         >= vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                  : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                      ? (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                         < vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)
                                      : VL_GTES_III(32, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)))
                              : ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                  ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                      ? VL_LTS_III(32, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)
                                      : (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                         != vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                  : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation)) 
                                     && (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                         == vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))))));
    bufp->fullIData(oldp+111,(((IData)(4U) + vlSymsp->TOP__CPU__pc_sl.PcReg)),32);
    bufp->fullIData(oldp+112,(((0xffffff00U == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                ? (IData)(vlSelfRef.Switch1)
                                : ((0xffffff04U == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                    ? (IData)(vlSelfRef.Switch2)
                                    : ((0xffffff14U 
                                        == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                        ? ((IData)(vlSelfRef.Button1)
                                            ? 1U : 0U)
                                        : ((0xffffff18U 
                                            == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                            ? ((IData)(vlSelfRef.Button2)
                                                ? 1U
                                                : 0U)
                                            : ((0xffffff1cU 
                                                == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                                ? ((IData)(vlSelfRef.Button3)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (0xffffff20U 
                                                    == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                                    ? 
                                                   ((IData)(vlSelfRef.Button4)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0xffffff24U 
                                                     == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                                     ? 
                                                    ((IData)(vlSelfRef.Button5)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)))))))),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__CPU__memory_sl__exp_inst.__PVT__ExpData),32);
    bufp->fullBit(oldp+114,((0x1c09U == (vlSymsp->TOP__CPU__pc_sl.PcReg 
                                         >> 0x10U))));
    bufp->fullSData(oldp+115,((0x3fffU & (vlSymsp->TOP__CPU__pc_sl.PcReg 
                                          >> 2U))),14);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__CPU__memory_sl__mem_inst.mem
                              [1U]),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__unnamedblk1__DOT__i),32);
}
