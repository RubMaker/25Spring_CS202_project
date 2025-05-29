// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ProgramCounter.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_ProgramCounter___nba_sequent__TOP__CPU__pc_sl__0(VCPU_ProgramCounter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ProgramCounter___nba_sequent__TOP__CPU__pc_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PcReg = ((IData)(vlSymsp->TOP__CPU.__PVT__RealReset)
                        ? 0U : ((IData)(vlSelfRef.__PVT__reset_done)
                                 ? vlSymsp->TOP__CPU__Bru_sl.__PVT__NewPc
                                 : 0U));
    vlSelfRef.__PVT__reset_done = (1U & (~ (IData)(vlSymsp->TOP__CPU.__PVT__RealReset)));
}
