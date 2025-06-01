// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_IF.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_IF___nba_sequent__TOP__CPU__if_stage__0(VCPU_IF* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_IF___nba_sequent__TOP__CPU__if_stage__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__InstOut = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP__CPU__id_stage__hazard_inst.__PVT__Stall)))) {
        vlSelfRef.__PVT__InstOut = vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg;
    }
}

VL_INLINE_OPT void VCPU_IF___nba_sequent__TOP__CPU__if_stage__1(VCPU_IF* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_IF___nba_sequent__TOP__CPU__if_stage__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Jump = ((0x6fU == (0x7fU & vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg)) 
                             | (0x67U == (0x7fU & vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg)));
    vlSelfRef.__Vcellinp__BP__rs1 = ((IData)(vlSelfRef.__PVT__Jump)
                                      ? 0U : (0x1fU 
                                              & (vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg 
                                                 >> 0xfU)));
    vlSelfRef.__PVT__BranchInst = ((0x63U == (0x7fU 
                                              & vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg)) 
                                   | (IData)(vlSelfRef.__PVT__Jump));
    vlSelfRef.__PVT__Predict = ((~ (IData)(vlSelfRef.__PVT__Jump)) 
                                & (IData)(vlSelfRef.__PVT__BranchInst));
}
