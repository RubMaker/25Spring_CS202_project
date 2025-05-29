// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_CPU.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_CPU___ico_sequent__TOP__CPU__0(VCPU_CPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPU_CPU___ico_sequent__TOP__CPU__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RealReset = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                        | (~ (IData)(vlSymsp->TOP.UartOver))));
}

VL_INLINE_OPT void VCPU_CPU___ico_sequent__TOP__CPU__1(VCPU_CPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPU_CPU___ico_sequent__TOP__CPU__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__UartMemAddress = ((IData)(vlSymsp->TOP.UartOver)
                                        ? vlSymsp->TOP__CPU__alu_sl.__PVT__Result
                                        : vlSymsp->TOP.UartAddress);
}

VL_INLINE_OPT void VCPU_CPU___ico_sequent__TOP__CPU__2(VCPU_CPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPU_CPU___ico_sequent__TOP__CPU__2\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__UartMemData = ((IData)(vlSymsp->TOP.UartOver)
                                     ? vlSymsp->TOP__CPU__dcache_sl.__PVT__DataOut
                                     : vlSymsp->TOP.UartData);
}
