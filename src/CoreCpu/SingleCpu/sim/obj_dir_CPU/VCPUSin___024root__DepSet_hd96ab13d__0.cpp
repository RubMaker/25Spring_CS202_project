// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin___024root.h"

void VCPUSin___024root___eval_triggers__ico(VCPUSin___024root* vlSelf);
void VCPUSin___024root___eval_ico(VCPUSin___024root* vlSelf);

bool VCPUSin___024root___eval_phase__ico(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_phase__ico\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VCPUSin___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VCPUSin___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VCPUSin___024root___eval_act(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_act\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VCPUSin___024root___eval_triggers__act(VCPUSin___024root* vlSelf);

bool VCPUSin___024root___eval_phase__act(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_phase__act\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCPUSin___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VCPUSin___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VCPUSin___024root___eval_nba(VCPUSin___024root* vlSelf);

bool VCPUSin___024root___eval_phase__nba(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_phase__nba\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCPUSin___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPUSin___024root___dump_triggers__ico(VCPUSin___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPUSin___024root___dump_triggers__nba(VCPUSin___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPUSin___024root___dump_triggers__act(VCPUSin___024root* vlSelf);
#endif  // VL_DEBUG

void VCPUSin___024root___eval(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VCPUSin___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../CPUSin.sv", 22, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VCPUSin___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VCPUSin___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../CPUSin.sv", 22, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VCPUSin___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../CPUSin.sv", 22, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VCPUSin___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VCPUSin___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCPUSin___024root___eval_debug_assertions(VCPUSin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root___eval_debug_assertions\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.memclk & 0xfeU)))) {
        Verilated::overWidthError("memclk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.UartOver & 0xfeU)))) {
        Verilated::overWidthError("UartOver");}
    if (VL_UNLIKELY(((vlSelfRef.Button1 & 0xfeU)))) {
        Verilated::overWidthError("Button1");}
    if (VL_UNLIKELY(((vlSelfRef.Button2 & 0xfeU)))) {
        Verilated::overWidthError("Button2");}
    if (VL_UNLIKELY(((vlSelfRef.Button3 & 0xfeU)))) {
        Verilated::overWidthError("Button3");}
    if (VL_UNLIKELY(((vlSelfRef.Button4 & 0xfeU)))) {
        Verilated::overWidthError("Button4");}
    if (VL_UNLIKELY(((vlSelfRef.Button5 & 0xfeU)))) {
        Verilated::overWidthError("Button5");}
    if (VL_UNLIKELY(((vlSelfRef.VgaAddress & 0xf000U)))) {
        Verilated::overWidthError("VgaAddress");}
}
#endif  // VL_DEBUG
