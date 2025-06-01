// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ID.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_ID___nba_sequent__TOP__CPU__id_stage__0(VCPU_ID* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ID___nba_sequent__TOP__CPU__id_stage__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PcOut = ((IData)(vlSymsp->TOP.rst)
                               ? 0U : vlSymsp->TOP__CPU__if_id_reg.__PVT__pc);
}
