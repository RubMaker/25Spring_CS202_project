// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Branch_Predictor.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_Branch_Predictor___ico_sequent__TOP__CPU__if_stage__BP__0(VCPU_Branch_Predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_Branch_Predictor___ico_sequent__TOP__CPU__if_stage__BP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.rst) | (~ (IData)(vlSelfRef.__PVT__StartFlag))))) {
        vlSelfRef.__PVT__PredictResultReg = 0U;
        vlSelfRef.__PVT__TargetPCInt = 0U;
    } else if ((0U == (((IData)(vlSymsp->TOP__CPU__if_stage.__PVT__BranchInst) 
                        << 1U) | (IData)(vlSymsp->TOP__CPU__if_stage.__PVT__Predict)))) {
        vlSelfRef.__PVT__PredictResultReg = 0U;
        vlSelfRef.__PVT__TargetPCInt = ((IData)(4U) 
                                        + vlSymsp->TOP__CPU__pc_module.__PVT__pc);
    } else if ((2U == (((IData)(vlSymsp->TOP__CPU__if_stage.__PVT__BranchInst) 
                        << 1U) | (IData)(vlSymsp->TOP__CPU__if_stage.__PVT__Predict)))) {
        vlSelfRef.__PVT__PredictResultReg = 1U;
        vlSelfRef.__PVT__TargetPCInt = ((1U == (IData)(vlSymsp->TOP__CPU__if_stage.__Vcellinp__BP__rs1))
                                         ? vlSelfRef.__PVT__Return_Addr
                                        [vlSelfRef.__PVT__RASTop]
                                         : (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                            + vlSymsp->TOP__CPU__if_stage__ImmGen.__PVT__ImmData));
    } else if ((3U == (((IData)(vlSymsp->TOP__CPU__if_stage.__PVT__BranchInst) 
                        << 1U) | (IData)(vlSymsp->TOP__CPU__if_stage.__PVT__Predict)))) {
        vlSelfRef.__PVT__PredictResultReg = (1U < vlSelfRef.__PVT__History_Table
                                             [(0xfU 
                                               & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                  >> 2U))]);
        vlSelfRef.__PVT__TargetPCInt = ((IData)(vlSelfRef.__PVT__PredictResultReg)
                                         ? (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                            + vlSymsp->TOP__CPU__if_stage__ImmGen.__PVT__ImmData)
                                         : ((IData)(4U) 
                                            + vlSymsp->TOP__CPU__pc_module.__PVT__pc));
    } else {
        vlSelfRef.__PVT__PredictResultReg = 0U;
        vlSelfRef.__PVT__TargetPCInt = ((IData)(4U) 
                                        + vlSymsp->TOP__CPU__pc_module.__PVT__pc);
    }
}

VL_INLINE_OPT void VCPU_Branch_Predictor___nba_sequent__TOP__CPU__if_stage__BP__0(VCPU_Branch_Predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_Branch_Predictor___nba_sequent__TOP__CPU__if_stage__BP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__RASTop;
    __Vdly__RASTop = 0;
    CData/*0:0*/ __VdlySet__History_Table__v0;
    __VdlySet__History_Table__v0 = 0;
    CData/*1:0*/ __VdlyVal__History_Table__v16;
    __VdlyVal__History_Table__v16 = 0;
    CData/*3:0*/ __VdlyDim0__History_Table__v16;
    __VdlyDim0__History_Table__v16 = 0;
    CData/*0:0*/ __VdlySet__History_Table__v16;
    __VdlySet__History_Table__v16 = 0;
    IData/*31:0*/ __VdlyVal__Return_Addr__v0;
    __VdlyVal__Return_Addr__v0 = 0;
    CData/*3:0*/ __VdlyDim0__Return_Addr__v0;
    __VdlyDim0__Return_Addr__v0 = 0;
    CData/*0:0*/ __VdlySet__Return_Addr__v0;
    __VdlySet__Return_Addr__v0 = 0;
    // Body
    __VdlySet__History_Table__v0 = 0U;
    __VdlySet__History_Table__v16 = 0U;
    __Vdly__RASTop = vlSelfRef.__PVT__RASTop;
    __VdlySet__Return_Addr__v0 = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__i = 0x10U;
        vlSelfRef.__PVT__Sepc = 0U;
        __VdlySet__History_Table__v0 = 1U;
    } else {
        vlSelfRef.__PVT__Sepc = vlSelfRef.__PVT__Sepc;
        __VdlyVal__History_Table__v16 = vlSelfRef.__PVT__History_Table
            [(0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                      >> 2U))];
        __VdlyDim0__History_Table__v16 = (0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                  >> 2U));
        __VdlySet__History_Table__v16 = 1U;
    }
    if ((1U & ((IData)(vlSymsp->TOP.rst) | (~ (IData)(vlSelfRef.__PVT__StartFlag))))) {
        __Vdly__RASTop = 0U;
    } else if (((2U == (((IData)(vlSymsp->TOP__CPU__if_stage.__PVT__BranchInst) 
                         << 1U) | (IData)(vlSymsp->TOP__CPU__if_stage.__PVT__Predict))) 
                & (~ (IData)(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__StallReg)))) {
        if ((1U == (0x1fU & (vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg 
                             >> 7U)))) {
            __VdlyVal__Return_Addr__v0 = ((IData)(4U) 
                                          + vlSymsp->TOP__CPU__pc_module.__PVT__pc);
            __VdlyDim0__Return_Addr__v0 = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__RASTop)));
            __VdlySet__Return_Addr__v0 = 1U;
            __Vdly__RASTop = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__RASTop)));
        } else {
            __Vdly__RASTop = (0xfU & ((1U == (IData)(vlSymsp->TOP__CPU__if_stage.__Vcellinp__BP__rs1))
                                       ? ((IData)(vlSelfRef.__PVT__RASTop) 
                                          - (IData)(1U))
                                       : (IData)(vlSelfRef.__PVT__RASTop)));
        }
    } else {
        __Vdly__RASTop = vlSelfRef.__PVT__RASTop;
    }
    if (__VdlySet__History_Table__v0) {
        vlSelfRef.__PVT__History_Table[0U] = 1U;
        vlSelfRef.__PVT__History_Table[1U] = 1U;
        vlSelfRef.__PVT__History_Table[2U] = 1U;
        vlSelfRef.__PVT__History_Table[3U] = 1U;
        vlSelfRef.__PVT__History_Table[4U] = 1U;
        vlSelfRef.__PVT__History_Table[5U] = 1U;
        vlSelfRef.__PVT__History_Table[6U] = 1U;
        vlSelfRef.__PVT__History_Table[7U] = 1U;
        vlSelfRef.__PVT__History_Table[8U] = 1U;
        vlSelfRef.__PVT__History_Table[9U] = 1U;
        vlSelfRef.__PVT__History_Table[0xaU] = 1U;
        vlSelfRef.__PVT__History_Table[0xbU] = 1U;
        vlSelfRef.__PVT__History_Table[0xcU] = 1U;
        vlSelfRef.__PVT__History_Table[0xdU] = 1U;
        vlSelfRef.__PVT__History_Table[0xeU] = 1U;
        vlSelfRef.__PVT__History_Table[0xfU] = 1U;
    }
    if (__VdlySet__History_Table__v16) {
        vlSelfRef.__PVT__History_Table[__VdlyDim0__History_Table__v16] 
            = __VdlyVal__History_Table__v16;
    }
    vlSelfRef.__PVT__RASTop = __Vdly__RASTop;
    if (__VdlySet__Return_Addr__v0) {
        vlSelfRef.__PVT__Return_Addr[__VdlyDim0__Return_Addr__v0] 
            = __VdlyVal__Return_Addr__v0;
    }
    vlSelfRef.__PVT__StartFlag = (1U & (~ (IData)(vlSymsp->TOP.rst)));
}
