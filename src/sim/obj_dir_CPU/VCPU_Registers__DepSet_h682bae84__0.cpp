// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Registers.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_Registers___nba_sequent__TOP__CPU__reg_file__0(VCPU_Registers* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Registers___nba_sequent__TOP__CPU__reg_file__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__regs__v0;
    __VdlySet__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__regs__v32;
    __VdlyVal__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__regs__v32;
    __VdlyDim0__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__regs__v32;
    __VdlySet__regs__v32 = 0;
    // Body
    __VdlySet__regs__v0 = 0U;
    __VdlySet__regs__v32 = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__i = 0x20U;
        __VdlySet__regs__v0 = 1U;
    } else if (((IData)(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__RegWrite) 
                & (0U != (IData)(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Rd)))) {
        __VdlyVal__regs__v32 = vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Data;
        __VdlyDim0__regs__v32 = vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Rd;
        __VdlySet__regs__v32 = 1U;
    }
    if (__VdlySet__regs__v0) {
        vlSelfRef.__PVT__regs[0U] = 0U;
        vlSelfRef.__PVT__regs[1U] = 0U;
        vlSelfRef.__PVT__regs[2U] = 0U;
        vlSelfRef.__PVT__regs[3U] = 0U;
        vlSelfRef.__PVT__regs[4U] = 0U;
        vlSelfRef.__PVT__regs[5U] = 0U;
        vlSelfRef.__PVT__regs[6U] = 0U;
        vlSelfRef.__PVT__regs[7U] = 0U;
        vlSelfRef.__PVT__regs[8U] = 0U;
        vlSelfRef.__PVT__regs[9U] = 0U;
        vlSelfRef.__PVT__regs[0xaU] = 0U;
        vlSelfRef.__PVT__regs[0xbU] = 0U;
        vlSelfRef.__PVT__regs[0xcU] = 0U;
        vlSelfRef.__PVT__regs[0xdU] = 0U;
        vlSelfRef.__PVT__regs[0xeU] = 0U;
        vlSelfRef.__PVT__regs[0xfU] = 0U;
        vlSelfRef.__PVT__regs[0x10U] = 0U;
        vlSelfRef.__PVT__regs[0x11U] = 0U;
        vlSelfRef.__PVT__regs[0x12U] = 0U;
        vlSelfRef.__PVT__regs[0x13U] = 0U;
        vlSelfRef.__PVT__regs[0x14U] = 0U;
        vlSelfRef.__PVT__regs[0x15U] = 0U;
        vlSelfRef.__PVT__regs[0x16U] = 0U;
        vlSelfRef.__PVT__regs[0x17U] = 0U;
        vlSelfRef.__PVT__regs[0x18U] = 0U;
        vlSelfRef.__PVT__regs[0x19U] = 0U;
        vlSelfRef.__PVT__regs[0x1aU] = 0U;
        vlSelfRef.__PVT__regs[0x1bU] = 0U;
        vlSelfRef.__PVT__regs[0x1cU] = 0U;
        vlSelfRef.__PVT__regs[0x1dU] = 0U;
        vlSelfRef.__PVT__regs[0x1eU] = 0U;
        vlSelfRef.__PVT__regs[0x1fU] = 0U;
    }
    if (__VdlySet__regs__v32) {
        vlSelfRef.__PVT__regs[__VdlyDim0__regs__v32] 
            = __VdlyVal__regs__v32;
    }
}
