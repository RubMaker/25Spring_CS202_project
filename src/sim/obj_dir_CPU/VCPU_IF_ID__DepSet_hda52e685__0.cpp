// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_IF_ID.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_IF_ID___nba_sequent__TOP__CPU__if_id_reg__0(VCPU_IF_ID* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_IF_ID___nba_sequent__TOP__CPU__if_id_reg__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pc = vlSelfRef.__PVT__pc;
    if (((IData)(vlSymsp->TOP.rst) | (((IData)(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__StallReg) 
                                       & (~ (IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall))) 
                                      & (IData)(vlSymsp->TOP__CPU__id_stage__hazard_inst.__PVT__Stall)))) {
        vlSelfRef.__Vdly__pc = 0U;
        vlSelfRef.__PVT__inst = 0U;
    } else if (((IData)(vlSymsp->TOP__CPU__id_stage__hazard_inst.__PVT__Stall) 
                | (IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall))) {
        vlSelfRef.__Vdly__pc = vlSelfRef.__PVT__pc;
        vlSelfRef.__PVT__inst = vlSelfRef.__PVT__inst;
    } else {
        vlSelfRef.__Vdly__pc = vlSymsp->TOP__CPU__if_stage__BP.__PVT__TargetPCInt;
        vlSelfRef.__PVT__inst = vlSymsp->TOP__CPU__if_stage.__PVT__InstOut;
    }
}
