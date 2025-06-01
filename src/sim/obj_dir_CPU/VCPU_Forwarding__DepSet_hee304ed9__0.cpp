// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Forwarding.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_Forwarding___nba_sequent__TOP__CPU__ex_stage__forward_inst__0(VCPU_Forwarding* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_Forwarding___nba_sequent__TOP__CPU__ex_stage__forward_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Forwarded_A = ((((IData)(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__WB_ctrl) 
                                      & (0U != (IData)(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__rd))) 
                                     & ((IData)(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__rd) 
                                        == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__rs1)))
                                     ? vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres
                                     : ((((IData)(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__RegWrite) 
                                          & (0U != (IData)(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Rd))) 
                                         & ((IData)(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Rd) 
                                            == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__rs1)))
                                         ? vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Data
                                         : vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs1));
    vlSelfRef.__PVT__Forwarded_B = ((((IData)(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__WB_ctrl) 
                                      & (0U != (IData)(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__rd))) 
                                     & ((IData)(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__rd) 
                                        == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__rs2)))
                                     ? vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres
                                     : ((((IData)(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__RegWrite) 
                                          & (0U != (IData)(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Rd))) 
                                         & ((IData)(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Rd) 
                                            == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__rs2)))
                                         ? vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Data
                                         : vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2));
}
