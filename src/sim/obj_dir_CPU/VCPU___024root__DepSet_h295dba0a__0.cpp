// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU___024root.h"

void VCPU___024root___eval_triggers__ico(VCPU___024root* vlSelf);
void VCPU___024root___eval_ico(VCPU___024root* vlSelf);

bool VCPU___024root___eval_phase__ico(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__ico\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VCPU___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VCPU___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VCPU___024root___eval_act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VCPU___024root___eval_triggers__act(VCPU___024root* vlSelf);

bool VCPU___024root___eval_phase__act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCPU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VCPU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VCPU___024root___eval_nba(VCPU___024root* vlSelf);

bool VCPU___024root___eval_phase__nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCPU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__ico(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VCPU___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../Pipeline/../Pipeline/CPU.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VCPU___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VCPU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../Pipeline/../Pipeline/CPU.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VCPU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../Pipeline/../Pipeline/CPU.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VCPU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VCPU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_debug_assertions\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.mem_clk & 0xfeU)))) {
        Verilated::overWidthError("mem_clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
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
