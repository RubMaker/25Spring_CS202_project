// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_IF_ID.h"

VL_INLINE_OPT void VCPU_IF_ID___nba_sequent__TOP__CPU__if_id_reg__1(VCPU_IF_ID* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_IF_ID___nba_sequent__TOP__CPU__if_id_reg__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pc = vlSelfRef.__Vdly__pc;
}
