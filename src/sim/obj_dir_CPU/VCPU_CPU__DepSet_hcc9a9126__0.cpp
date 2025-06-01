// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_CPU.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_CPU___nba_sequent__TOP__CPU__0(VCPU_CPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPU_CPU___nba_sequent__TOP__CPU__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__new_pc = ((IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)
                                ? vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__OldPc
                                : ((IData)(4U) + vlSymsp->TOP__CPU__pc_module.__PVT__pc));
}
