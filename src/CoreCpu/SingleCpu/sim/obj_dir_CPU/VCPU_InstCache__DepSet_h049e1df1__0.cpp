// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_InstCache.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_InstCache___ico_sequent__TOP__CPU__icache_sl__0(VCPU_InstCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_InstCache___ico_sequent__TOP__CPU__icache_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Instruction = ((IData)(vlSymsp->TOP__CPU.__PVT__RealReset)
                                     ? 0U : ((0x1c09U 
                                              == (vlSymsp->TOP__CPU__pc_sl.PcReg 
                                                  >> 0x10U))
                                              ? vlSymsp->TOP__CPU__memory_sl__exp_inst.__PVT__ExpData
                                              : vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__dataa));
}
