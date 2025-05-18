// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin_MemorySim.h"
#include "VCPUSin__Syms.h"

VL_INLINE_OPT void VCPUSin_MemorySim___nba_sequent__TOP__CPUSin__memory_sl__mem_inst__0(VCPUSin_MemorySim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPUSin_MemorySim___nba_sequent__TOP__CPUSin__memory_sl__mem_inst__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__mem__v0;
    __VdlyVal__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__mem__v0;
    __VdlyDim0__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__mem__v0;
    __VdlySet__mem__v0 = 0;
    // Body
    __VdlySet__mem__v0 = 0U;
    vlSelfRef.__PVT__datab = vlSelfRef.__PVT__datab_temp;
    if (vlSymsp->TOP__CPUSin__memory_sl.__PVT__EnWB) {
        __VdlyVal__mem__v0 = vlSymsp->TOP__CPUSin__memory_sl.__Vcellinp__mem_inst__write_datab;
        __VdlyDim0__mem__v0 = (0x3fffU & (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                                          >> 2U));
        __VdlySet__mem__v0 = 1U;
        vlSelfRef.__PVT__datab_temp = vlSymsp->TOP__CPUSin__memory_sl.__Vcellinp__mem_inst__write_datab;
    } else {
        vlSelfRef.__PVT__datab_temp = vlSelfRef.mem
            [(0x3fffU & (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                         >> 2U))];
    }
    vlSelfRef.__PVT__dataa = vlSelfRef.__PVT__dataa_temp;
    vlSelfRef.__PVT__dataa_temp = vlSelfRef.mem[(0x3fffU 
                                                 & (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                                    >> 2U))];
    if (__VdlySet__mem__v0) {
        vlSelfRef.mem[__VdlyDim0__mem__v0] = __VdlyVal__mem__v0;
    }
}
