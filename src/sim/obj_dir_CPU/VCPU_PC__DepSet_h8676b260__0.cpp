// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_PC.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_PC___nba_sequent__TOP__CPU__pc_module__0(VCPU_PC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_PC___nba_sequent__TOP__CPU__pc_module__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pc = vlSelfRef.__PVT__pc;
    vlSelfRef.__Vdly__pc = ((IData)(vlSymsp->TOP.rst)
                             ? 0U : ((IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)
                                      ? vlSymsp->TOP__CPU.__PVT__new_pc
                                      : ((((IData)(vlSymsp->TOP__CPU__id_stage__hazard_inst.__PVT__Stall) 
                                           | (IData)(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__StallReg)) 
                                          | (IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall))
                                          ? vlSelfRef.__PVT__pc
                                          : vlSymsp->TOP__CPU.__PVT__new_pc)));
}
