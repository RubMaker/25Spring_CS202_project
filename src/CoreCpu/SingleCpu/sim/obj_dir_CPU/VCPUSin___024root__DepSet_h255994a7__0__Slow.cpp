// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin__Syms.h"
#include "VCPUSin___024root.h"

VL_ATTR_COLD void VCPUSin_CPUSin___eval_static__TOP__CPUSin(VCPUSin_CPUSin* vlSelf);
VL_ATTR_COLD void VCPUSin___024root____Vm_traceActivitySetAll(VCPUSin___024root* vlSelf);

VL_ATTR_COLD void VCPUSin___024root___eval_static(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_static\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPUSin_CPUSin___eval_static__TOP__CPUSin((&vlSymsp->TOP__CPUSin));
    VCPUSin___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__memclk__0 = vlSelfRef.memclk;
}

VL_ATTR_COLD void VCPUSin_CPUSin___eval_initial__TOP__CPUSin(VCPUSin_CPUSin* vlSelf);

VL_ATTR_COLD void VCPUSin___024root___eval_initial(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_initial\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPUSin_CPUSin___eval_initial__TOP__CPUSin((&vlSymsp->TOP__CPUSin));
    VCPUSin___024root____Vm_traceActivitySetAll(vlSelf);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPUSin___024root___dump_triggers__stl(VCPUSin___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPUSin___024root___eval_triggers__stl(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_triggers__stl\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPUSin___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VCPUSin___024root___stl_sequent__TOP__0(VCPUSin___024root* vlSelf);
VL_ATTR_COLD void VCPUSin_Memory___stl_sequent__TOP__CPUSin__memory_sl__0(VCPUSin_Memory* vlSelf);
void VCPUSin_CPUSin___nba_comb__TOP__CPUSin__0(VCPUSin_CPUSin* vlSelf);
void VCPUSin___024root___nba_comb__TOP__0(VCPUSin___024root* vlSelf);
void VCPUSin_Memory___ico_sequent__TOP__CPUSin__memory_sl__0(VCPUSin_Memory* vlSelf);
void VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__1(VCPUSin_CPUSin* vlSelf);

VL_ATTR_COLD void VCPUSin___024root___eval_stl(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_stl\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCPUSin___024root___stl_sequent__TOP__0(vlSelf);
        VCPUSin___024root____Vm_traceActivitySetAll(vlSelf);
        VCPUSin_Memory___stl_sequent__TOP__CPUSin__memory_sl__0((&vlSymsp->TOP__CPUSin__memory_sl));
        VCPUSin_CPUSin___nba_comb__TOP__CPUSin__0((&vlSymsp->TOP__CPUSin));
        VCPUSin___024root___nba_comb__TOP__0(vlSelf);
        VCPUSin_Memory___ico_sequent__TOP__CPUSin__memory_sl__0((&vlSymsp->TOP__CPUSin__memory_sl));
        VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__1((&vlSymsp->TOP__CPUSin));
    }
}

VL_ATTR_COLD void VCPUSin___024root___stl_sequent__TOP__0(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___stl_sequent__TOP__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Pc_test = vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg;
    vlSelfRef.Seg1Out = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Seg1;
    vlSelfRef.Led2 = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Led2;
    vlSelfRef.Led1 = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Led1;
    if ((0xbffU >= (IData)(vlSelfRef.VgaAddress))) {
        vlSelfRef.ColorOut = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__color
            [vlSelfRef.VgaAddress];
        vlSelfRef.CharOut = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__chars
            [vlSelfRef.VgaAddress];
    } else {
        vlSelfRef.ColorOut = 0U;
        vlSelfRef.CharOut = 0U;
    }
}
