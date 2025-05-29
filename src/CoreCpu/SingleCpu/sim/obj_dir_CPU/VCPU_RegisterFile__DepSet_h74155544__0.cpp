// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_RegisterFile.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_RegisterFile___ico_sequent__TOP__CPU__regf_sl__0(VCPU_RegisterFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_RegisterFile___ico_sequent__TOP__CPU__regf_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ReadData1 = (((0U == (0x1fU & 
                                           (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                            >> 0xfU))) 
                                   | (IData)(vlSymsp->TOP__CPU.__PVT__RealReset))
                                   ? 0U : vlSelfRef.Registers
                                  [(0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                             >> 0xfU))]);
    vlSelfRef.__PVT__ReadData2 = (((0U == (0x1fU & 
                                           (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                            >> 0x14U))) 
                                   | (IData)(vlSymsp->TOP__CPU.__PVT__RealReset))
                                   ? 0U : vlSelfRef.Registers
                                  [(0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                             >> 0x14U))]);
}

VL_INLINE_OPT void VCPU_RegisterFile___nba_sequent__TOP__CPU__regf_sl__0(VCPU_RegisterFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_RegisterFile___nba_sequent__TOP__CPU__regf_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__Registers__v0;
    __VdlySet__Registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__Registers__v32;
    __VdlyVal__Registers__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Registers__v32;
    __VdlyDim0__Registers__v32 = 0;
    CData/*0:0*/ __VdlySet__Registers__v32;
    __VdlySet__Registers__v32 = 0;
    // Body
    __VdlySet__Registers__v0 = 0U;
    __VdlySet__Registers__v32 = 0U;
    if (vlSymsp->TOP__CPU.__PVT__RealReset) {
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x20U;
        __VdlySet__Registers__v0 = 1U;
    } else if (((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__RegWriteEn) 
                & (0U != (0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                   >> 7U))))) {
        __VdlyVal__Registers__v32 = ((0U == (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__Mem2Reg))
                                      ? vlSymsp->TOP__CPU__alu_sl.__PVT__Result
                                      : ((1U == (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__Mem2Reg))
                                          ? vlSymsp->TOP__CPU__dcache_sl.__PVT__DataOut
                                          : ((IData)(4U) 
                                             + vlSymsp->TOP__CPU__pc_sl.PcReg)));
        __VdlyDim0__Registers__v32 = (0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                               >> 7U));
        __VdlySet__Registers__v32 = 1U;
    }
    if (__VdlySet__Registers__v0) {
        vlSelfRef.Registers[0U] = 0U;
        vlSelfRef.Registers[1U] = 0U;
        vlSelfRef.Registers[2U] = 0x7ffcU;
        vlSelfRef.Registers[3U] = 0xffffff00U;
        vlSelfRef.Registers[4U] = 0U;
        vlSelfRef.Registers[5U] = 0U;
        vlSelfRef.Registers[6U] = 0U;
        vlSelfRef.Registers[7U] = 0U;
        vlSelfRef.Registers[8U] = 0U;
        vlSelfRef.Registers[9U] = 0U;
        vlSelfRef.Registers[0xaU] = 0U;
        vlSelfRef.Registers[0xbU] = 0U;
        vlSelfRef.Registers[0xcU] = 0U;
        vlSelfRef.Registers[0xdU] = 0U;
        vlSelfRef.Registers[0xeU] = 0U;
        vlSelfRef.Registers[0xfU] = 0U;
        vlSelfRef.Registers[0x10U] = 0U;
        vlSelfRef.Registers[0x11U] = 0U;
        vlSelfRef.Registers[0x12U] = 0U;
        vlSelfRef.Registers[0x13U] = 0U;
        vlSelfRef.Registers[0x14U] = 0U;
        vlSelfRef.Registers[0x15U] = 0U;
        vlSelfRef.Registers[0x16U] = 0U;
        vlSelfRef.Registers[0x17U] = 0U;
        vlSelfRef.Registers[0x18U] = 0U;
        vlSelfRef.Registers[0x19U] = 0U;
        vlSelfRef.Registers[0x1aU] = 0U;
        vlSelfRef.Registers[0x1bU] = 0U;
        vlSelfRef.Registers[0x1cU] = 0U;
        vlSelfRef.Registers[0x1dU] = 0U;
        vlSelfRef.Registers[0x1eU] = 0U;
        vlSelfRef.Registers[0x1fU] = 0U;
    }
    if (__VdlySet__Registers__v32) {
        vlSelfRef.Registers[__VdlyDim0__Registers__v32] 
            = __VdlyVal__Registers__v32;
    }
}
