// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU___024root___eval_static(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_static\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_clk__0 = vlSelfRef.mem_clk;
}

VL_ATTR_COLD void VCPU___024root___eval_final(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_final\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCPU___024root___eval_phase__stl(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../Pipeline/../Pipeline/CPU.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root___eval_triggers__stl(VCPU___024root* vlSelf);
VL_ATTR_COLD void VCPU___024root___eval_stl(VCPU___024root* vlSelf);

VL_ATTR_COLD bool VCPU___024root___eval_phase__stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__ico(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__ico\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge mem_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge mem_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge mem_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge mem_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root____Vm_traceActivitySetAll(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root____Vm_traceActivitySetAll\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->mem_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7558918319745958442ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->Switch1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4485436964664171585ull);
    vlSelf->Switch2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3114214373581963742ull);
    vlSelf->Button1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17633132580082582429ull);
    vlSelf->Button2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5586330257011968540ull);
    vlSelf->Button3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426938642945806753ull);
    vlSelf->Button4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716315135285041578ull);
    vlSelf->Button5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583275299557269326ull);
    vlSelf->VgaAddress = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9329207576302704564ull);
    vlSelf->pc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4379395961601650806ull);
    vlSelf->inst_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17653795111096142571ull);
    vlSelf->Led1Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8449347946087016731ull);
    vlSelf->Led2Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16107725052017714950ull);
    vlSelf->Seg1Out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17693769927085233887ull);
    vlSelf->CharOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4076422713069510402ull);
    vlSelf->ColorOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16966566493434470373ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3495601893105415319ull);
    vlSelf->__Vtrigprevexpr___TOP__mem_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12139155529024073038ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
