// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_EX_MEM.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_EX_MEM___nba_sequent__TOP__CPU__ex_mem_reg__0(VCPU_EX_MEM* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_EX_MEM___nba_sequent__TOP__CPU__ex_mem_reg__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__WB_ctrl = vlSelfRef.__PVT__WB_ctrl;
    vlSelfRef.__Vdly__rd = vlSelfRef.__PVT__rd;
    vlSelfRef.__Vdly__ALUres = vlSelfRef.__PVT__ALUres;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__data2 = 0U;
        vlSelfRef.__Vdly__rd = 0U;
        vlSelfRef.__PVT__MEM_ctrl = 0U;
        vlSelfRef.__Vdly__ALUres = 0U;
    } else {
        if (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall) {
            vlSelfRef.__PVT__data2 = vlSelfRef.__PVT__data2;
            vlSelfRef.__Vdly__rd = vlSelfRef.__PVT__rd;
            vlSelfRef.__PVT__MEM_ctrl = vlSelfRef.__PVT__MEM_ctrl;
        } else {
            vlSelfRef.__PVT__data2 = vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2;
            vlSelfRef.__Vdly__rd = vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rd;
            vlSelfRef.__PVT__MEM_ctrl = ((((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) 
                                           << 3U) | 
                                          ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead) 
                                           << 2U)) 
                                         | ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemtoReg) 
                                            << 1U));
        }
        vlSelfRef.__Vdly__ALUres = vlSelfRef.__PVT__ALUres;
    }
    vlSelfRef.__Vdly__WB_ctrl = ((1U & (~ (IData)(vlSymsp->TOP.rst))) 
                                 && ((IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall)
                                      ? (IData)(vlSelfRef.__PVT__WB_ctrl)
                                      : (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__RegWrite)));
}
