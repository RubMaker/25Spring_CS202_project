// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_MMIO.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_MMIO___nba_sequent__TOP__CPU__memory_sl__mmio_inst__0(VCPU_MMIO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_MMIO___nba_sequent__TOP__CPU__memory_sl__mmio_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__CPU.__PVT__RealReset) {
        vlSelfRef.__PVT__Led1 = 0U;
        vlSelfRef.__PVT__Led2 = 0U;
        vlSelfRef.__PVT__Seg1 = 0U;
    } else {
        if ((0xffffff0cU == vlSymsp->TOP__CPU.__PVT__UartMemAddress)) {
            vlSelfRef.__PVT__Led1 = (0xffU & vlSymsp->TOP__CPU.__PVT__UartMemData);
        }
        if ((0xffffff0cU != vlSymsp->TOP__CPU.__PVT__UartMemAddress)) {
            if ((0xffffff10U == vlSymsp->TOP__CPU.__PVT__UartMemAddress)) {
                vlSelfRef.__PVT__Led2 = (0xffU & vlSymsp->TOP__CPU.__PVT__UartMemData);
            }
            if ((0xffffff10U != vlSymsp->TOP__CPU.__PVT__UartMemAddress)) {
                if ((0xffffff28U == vlSymsp->TOP__CPU.__PVT__UartMemAddress)) {
                    vlSelfRef.__PVT__Seg1 = vlSymsp->TOP__CPU.__PVT__UartMemData;
                }
            }
        }
    }
}

VL_INLINE_OPT void VCPU_MMIO___nba_sequent__TOP__CPU__memory_sl__mmio_inst__1(VCPU_MMIO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_MMIO___nba_sequent__TOP__CPU__memory_sl__mmio_inst__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__chars__v0;
    __VdlyVal__chars__v0 = 0;
    SData/*11:0*/ __VdlyDim0__chars__v0;
    __VdlyDim0__chars__v0 = 0;
    CData/*7:0*/ __VdlyVal__color__v0;
    __VdlyVal__color__v0 = 0;
    SData/*11:0*/ __VdlyDim0__color__v0;
    __VdlyDim0__color__v0 = 0;
    CData/*7:0*/ __VdlyVal__chars__v1;
    __VdlyVal__chars__v1 = 0;
    SData/*11:0*/ __VdlyDim0__chars__v1;
    __VdlyDim0__chars__v1 = 0;
    CData/*7:0*/ __VdlyVal__color__v1;
    __VdlyVal__color__v1 = 0;
    SData/*11:0*/ __VdlyDim0__color__v1;
    __VdlyDim0__color__v1 = 0;
    // Body
    if (vlSymsp->TOP__CPU.__PVT__RealReset) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0xc00U, vlSelfRef.__PVT__unnamedblk1__DOT__i)) {
            vlSelfRef.__Vlvbound_h1410888b__0 = 0U;
            if (VL_LIKELY(((0xbffU >= (0xfffU & vlSelfRef.__PVT__unnamedblk1__DOT__i))))) {
                __VdlyVal__chars__v0 = vlSelfRef.__Vlvbound_h1410888b__0;
                __VdlyDim0__chars__v0 = (0xfffU & vlSelfRef.__PVT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuechars.enqueue(__VdlyVal__chars__v0, (IData)(__VdlyDim0__chars__v0));
            }
            vlSelfRef.__Vlvbound_hf13a2a6e__0 = 0U;
            if (VL_LIKELY(((0xbffU >= (0xfffU & vlSelfRef.__PVT__unnamedblk1__DOT__i))))) {
                __VdlyVal__color__v0 = vlSelfRef.__Vlvbound_hf13a2a6e__0;
                __VdlyDim0__color__v0 = (0xfffU & vlSelfRef.__PVT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuecolor.enqueue(__VdlyVal__color__v0, (IData)(__VdlyDim0__color__v0));
            }
            vlSelfRef.__PVT__unnamedblk1__DOT__i = 
                ((IData)(1U) + vlSelfRef.__PVT__unnamedblk1__DOT__i);
        }
    } else if ((0xffffeU == (vlSymsp->TOP__CPU.__PVT__UartMemAddress 
                             >> 0xcU))) {
        vlSelfRef.__Vlvbound_h37617fa1__0 = (0xffU 
                                             & vlSymsp->TOP__CPU.__PVT__UartMemData);
        if ((0xbffU >= (0xfffU & vlSymsp->TOP__CPU.__PVT__UartMemAddress))) {
            __VdlyVal__chars__v1 = vlSelfRef.__Vlvbound_h37617fa1__0;
            __VdlyDim0__chars__v1 = (0xfffU & vlSymsp->TOP__CPU.__PVT__UartMemAddress);
            vlSelfRef.__VdlyCommitQueuechars.enqueue(__VdlyVal__chars__v1, (IData)(__VdlyDim0__chars__v1));
        }
    } else if ((0xffffdU == (vlSymsp->TOP__CPU.__PVT__UartMemAddress 
                             >> 0xcU))) {
        vlSelfRef.__Vlvbound_h45e5c314__0 = (0xffU 
                                             & vlSymsp->TOP__CPU.__PVT__UartMemData);
        if ((0xbffU >= (0xfffU & vlSymsp->TOP__CPU.__PVT__UartMemAddress))) {
            __VdlyVal__color__v1 = vlSelfRef.__Vlvbound_h45e5c314__0;
            __VdlyDim0__color__v1 = (0xfffU & vlSymsp->TOP__CPU.__PVT__UartMemAddress);
            vlSelfRef.__VdlyCommitQueuecolor.enqueue(__VdlyVal__color__v1, (IData)(__VdlyDim0__color__v1));
        }
    }
    vlSelfRef.__VdlyCommitQueuechars.commit(vlSelfRef.__PVT__chars);
    vlSelfRef.__VdlyCommitQueuecolor.commit(vlSelfRef.__PVT__color);
}
