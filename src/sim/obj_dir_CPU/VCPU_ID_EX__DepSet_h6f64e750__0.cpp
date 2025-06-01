// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ID_EX.h"

VL_INLINE_OPT void VCPU_ID_EX___nba_sequent__TOP__CPU__id_ex_reg__1(VCPU_ID_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ID_EX___nba_sequent__TOP__CPU__id_ex_reg__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Rs2 = vlSelfRef.__Vdly__Rs2;
    vlSelfRef.__PVT__RegWrite = vlSelfRef.__Vdly__RegWrite;
    vlSelfRef.__PVT__Rd = vlSelfRef.__Vdly__Rd;
    vlSelfRef.__PVT__MemtoReg = vlSelfRef.__Vdly__MemtoReg;
    vlSelfRef.__PVT__MemRead = vlSelfRef.__Vdly__MemRead;
    vlSelfRef.__PVT__MemWrite = vlSelfRef.__Vdly__MemWrite;
}
