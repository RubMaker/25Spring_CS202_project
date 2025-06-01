// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_MEM_WB.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_MEM_WB___nba_sequent__TOP__CPU__mem_wb_reg__0(VCPU_MEM_WB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_MEM_WB___nba_sequent__TOP__CPU__mem_wb_reg__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RegWrite = ((1U & (~ (IData)(vlSymsp->TOP.rst))) 
                                 && ((IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall)
                                      ? (IData)(vlSelfRef.__PVT__RegWrite)
                                      : (IData)(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__WB_ctrl)));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__Rd = 0U;
        vlSelfRef.__PVT__Data = 0U;
    } else if (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall) {
        vlSelfRef.__PVT__Rd = vlSelfRef.__PVT__Rd;
        vlSelfRef.__PVT__Data = vlSelfRef.__PVT__Data;
    } else {
        vlSelfRef.__PVT__Rd = vlSymsp->TOP__CPU__ex_mem_reg.__PVT__rd;
        vlSelfRef.__PVT__Data = ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead)
                                  ? vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DataOut
                                  : vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres);
    }
}
