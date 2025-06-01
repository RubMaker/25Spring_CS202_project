// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Hazard.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_Hazard___nba_sequent__TOP__CPU__id_stage__hazard_inst__0(VCPU_Hazard* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_Hazard___nba_sequent__TOP__CPU__id_stage__hazard_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Stall = ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead) 
                              & (((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rd) 
                                  == (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 0xfU))) 
                                 | ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rd) 
                                    == (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                 >> 0x14U)))));
}
