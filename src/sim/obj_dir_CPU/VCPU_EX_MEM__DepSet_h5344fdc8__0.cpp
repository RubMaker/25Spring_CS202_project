// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_EX_MEM.h"

VL_INLINE_OPT void VCPU_EX_MEM___nba_sequent__TOP__CPU__ex_mem_reg__1(VCPU_EX_MEM* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_EX_MEM___nba_sequent__TOP__CPU__ex_mem_reg__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__WB_ctrl = vlSelfRef.__Vdly__WB_ctrl;
    vlSelfRef.__PVT__rd = vlSelfRef.__Vdly__rd;
    vlSelfRef.__PVT__ALUres = vlSelfRef.__Vdly__ALUres;
}
