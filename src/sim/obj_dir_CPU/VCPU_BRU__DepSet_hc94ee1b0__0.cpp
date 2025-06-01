// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_BRU.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_BRU___nba_sequent__TOP__CPU__ex_stage__BRU_Instance__0(VCPU_BRU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_BRU___nba_sequent__TOP__CPU__ex_stage__BRU_Instance__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__BranchTaken = ((4U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op))
                                     ? ((2U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op))
                                         ? ((1U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op)) 
                                            || (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                >= vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))
                                         : ((1U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op))
                                             ? (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                < vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)
                                             : VL_GTES_III(32, vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A, vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)))
                                     : ((2U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op))
                                         ? ((1U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op))
                                             ? VL_LTS_III(32, vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A, vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)
                                             : (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                != vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))
                                         : ((1U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op)) 
                                            && (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                == vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))));
    vlSelfRef.__PVT__OldPc = ((IData)(vlSelfRef.__PVT__BranchTaken)
                               ? (((7U == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op)) 
                                   & (0U != vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A))
                                   ? (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                      + vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm)
                                   : (vlSymsp->TOP__CPU__id_ex_reg.__PVT__Pc 
                                      + vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm))
                               : ((IData)(4U) + vlSymsp->TOP__CPU__id_ex_reg.__PVT__Pc));
}
