// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Memory.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__0(VCPU_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__EnWB = ((0xffffU != (vlSymsp->TOP__CPU.__PVT__UartMemAddress 
                                          >> 0x10U)) 
                             & ((~ (IData)(vlSymsp->TOP.UartOver)) 
                                | (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemWriteEn)));
    vlSelfRef.__PVT__ReadDataB = ((0xffffU == (vlSymsp->TOP__CPU.__PVT__UartMemAddress 
                                               >> 0x10U))
                                   ? ((0xffffff00U 
                                       == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                       ? (IData)(vlSymsp->TOP.Switch1)
                                       : ((0xffffff04U 
                                           == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                           ? (IData)(vlSymsp->TOP.Switch2)
                                           : ((0xffffff14U 
                                               == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                               ? ((IData)(vlSymsp->TOP.Button1)
                                                   ? 1U
                                                   : 0U)
                                               : ((0xffffff18U 
                                                   == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.Button2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xffffff1cU 
                                                    == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.Button3)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0xffffff20U 
                                                     == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP.Button4)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((0xffffff24U 
                                                      == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.Button5)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))))))
                                   : vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__datab);
}

VL_INLINE_OPT void VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__1(VCPU_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__mem_inst__write_datab = (
                                                   (0xffffU 
                                                    == 
                                                    (vlSymsp->TOP__CPU.__PVT__UartMemAddress 
                                                     >> 0x10U))
                                                    ? 0U
                                                    : vlSymsp->TOP__CPU.__PVT__UartMemData);
}
