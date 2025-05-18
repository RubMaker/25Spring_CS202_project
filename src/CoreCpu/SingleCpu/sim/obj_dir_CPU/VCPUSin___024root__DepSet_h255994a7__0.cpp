// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin__Syms.h"
#include "VCPUSin___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPUSin___024root___dump_triggers__ico(VCPUSin___024root* vlSelf);
#endif  // VL_DEBUG

void VCPUSin___024root___eval_triggers__ico(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_triggers__ico\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPUSin___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VCPUSin___024root___ico_sequent__TOP__0(VCPUSin___024root* vlSelf);
void VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__0(VCPUSin_CPUSin* vlSelf);
void VCPUSin_Memory___ico_sequent__TOP__CPUSin__memory_sl__0(VCPUSin_Memory* vlSelf);
void VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__1(VCPUSin_CPUSin* vlSelf);

void VCPUSin___024root___eval_ico(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_ico\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VCPUSin___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__0((&vlSymsp->TOP__CPUSin));
        VCPUSin_Memory___ico_sequent__TOP__CPUSin__memory_sl__0((&vlSymsp->TOP__CPUSin__memory_sl));
        VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__1((&vlSymsp->TOP__CPUSin));
    }
}

VL_INLINE_OPT void VCPUSin___024root___ico_sequent__TOP__0(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___ico_sequent__TOP__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPUSin___024root___dump_triggers__act(VCPUSin___024root* vlSelf);
#endif  // VL_DEBUG

void VCPUSin___024root___eval_triggers__act(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_triggers__act\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.memclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__memclk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.memclk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__memclk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__memclk__0 = vlSelfRef.memclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPUSin___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VCPUSin_MemorySim___nba_sequent__TOP__CPUSin__memory_sl__mem_inst__0(VCPUSin_MemorySim* vlSelf);
void VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__0(VCPUSin_Memory* vlSelf);
void VCPUSin___024root___nba_sequent__TOP__0(VCPUSin___024root* vlSelf);
void VCPUSin_CPUSin___nba_sequent__TOP__CPUSin__0(VCPUSin_CPUSin* vlSelf);
void VCPUSin___024root___nba_sequent__TOP__1(VCPUSin___024root* vlSelf);
void VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__1(VCPUSin_Memory* vlSelf);
void VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__2(VCPUSin_Memory* vlSelf);
void VCPUSin___024root___nba_sequent__TOP__2(VCPUSin___024root* vlSelf);
void VCPUSin_Memory___nba_comb__TOP__CPUSin__memory_sl__0(VCPUSin_Memory* vlSelf);
void VCPUSin_CPUSin___nba_comb__TOP__CPUSin__0(VCPUSin_CPUSin* vlSelf);
void VCPUSin___024root___nba_comb__TOP__0(VCPUSin___024root* vlSelf);

void VCPUSin___024root___eval_nba(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_nba\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPUSin_MemorySim___nba_sequent__TOP__CPUSin__memory_sl__mem_inst__0((&vlSymsp->TOP__CPUSin__memory_sl__mem_inst));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__0((&vlSymsp->TOP__CPUSin__memory_sl));
        VCPUSin___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPUSin_CPUSin___nba_sequent__TOP__CPUSin__0((&vlSymsp->TOP__CPUSin));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        VCPUSin___024root___nba_sequent__TOP__1(vlSelf);
        VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__1((&vlSymsp->TOP__CPUSin__memory_sl));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__2((&vlSymsp->TOP__CPUSin__memory_sl));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        VCPUSin___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPUSin_Memory___nba_comb__TOP__CPUSin__memory_sl__0((&vlSymsp->TOP__CPUSin__memory_sl));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        VCPUSin_CPUSin___nba_comb__TOP__CPUSin__0((&vlSymsp->TOP__CPUSin));
        VCPUSin___024root___nba_comb__TOP__0(vlSelf);
        VCPUSin_Memory___ico_sequent__TOP__CPUSin__memory_sl__0((&vlSymsp->TOP__CPUSin__memory_sl));
        VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__1((&vlSymsp->TOP__CPUSin));
    }
}

VL_INLINE_OPT void VCPUSin___024root___nba_sequent__TOP__0(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___nba_sequent__TOP__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xbffU >= (IData)(vlSelfRef.VgaAddress))) {
        vlSelfRef.CharOut = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__chars
            [vlSelfRef.VgaAddress];
        vlSelfRef.ColorOut = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__color
            [vlSelfRef.VgaAddress];
    } else {
        vlSelfRef.CharOut = 0U;
        vlSelfRef.ColorOut = 0U;
    }
}

VL_INLINE_OPT void VCPUSin___024root___nba_sequent__TOP__1(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___nba_sequent__TOP__1\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Pc_test = vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg;
}

VL_INLINE_OPT void VCPUSin___024root___nba_sequent__TOP__2(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___nba_sequent__TOP__2\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Led1 = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Led1;
    vlSelfRef.Led2 = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Led2;
    vlSelfRef.Seg1Out = vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Seg1;
}

VL_INLINE_OPT void VCPUSin___024root___nba_comb__TOP__0(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___nba_comb__TOP__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Inst_test = vlSymsp->TOP__CPUSin.__PVT__FetchInstr;
}
