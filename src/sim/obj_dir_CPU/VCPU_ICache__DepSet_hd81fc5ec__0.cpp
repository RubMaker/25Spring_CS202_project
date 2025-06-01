// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ICache.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__0(VCPU_ICache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__State = vlSelfRef.__PVT__State;
    vlSelfRef.__VdlySet__CacheValid__v0 = 0U;
    vlSelfRef.__VdlySet__CacheValid__v1 = 0U;
    vlSelfRef.__VdlySet__CacheData__v16 = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__I = 0x10U;
    }
}

VL_INLINE_OPT void VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__1(VCPU_ICache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__CacheData__v16;
    __VdlyVal__CacheData__v16 = 0;
    CData/*3:0*/ __VdlyDim0__CacheData__v16;
    __VdlyDim0__CacheData__v16 = 0;
    IData/*25:0*/ __VdlyVal__CacheTag__v16;
    __VdlyVal__CacheTag__v16 = 0;
    CData/*3:0*/ __VdlyDim0__CacheTag__v16;
    __VdlyDim0__CacheTag__v16 = 0;
    CData/*3:0*/ __VdlyDim0__CacheValid__v16;
    __VdlyDim0__CacheValid__v16 = 0;
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__VdlySet__CacheValid__v0 = 1U;
        vlSelfRef.__Vdly__State = 0U;
        vlSelfRef.__PVT__StallReg = 0U;
        vlSelfRef.__PVT__InstReg = 0U;
        vlSelfRef.__VdlySet__CacheValid__v1 = 1U;
    } else if (vlSelfRef.__PVT__State) {
        if (vlSelfRef.__PVT__State) {
            if ((0x1c09U == (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                             >> 0x10U))) {
                __VdlyVal__CacheData__v16 = vlSymsp->TOP__CPU__memory_inst__exp_inst.__PVT__ExpData;
                vlSelfRef.__PVT__InstReg = vlSymsp->TOP__CPU__memory_inst__exp_inst.__PVT__ExpData;
            } else {
                __VdlyVal__CacheData__v16 = vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__dataa;
                vlSelfRef.__PVT__InstReg = vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__dataa;
            }
            __VdlyDim0__CacheData__v16 = (0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                  >> 2U));
            vlSelfRef.__VdlySet__CacheData__v16 = 1U;
            __VdlyVal__CacheTag__v16 = (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                        >> 6U);
            __VdlyDim0__CacheTag__v16 = (0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                 >> 2U));
            __VdlyDim0__CacheValid__v16 = (0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                   >> 2U));
            vlSelfRef.__PVT__StallReg = 0U;
            vlSelfRef.__Vdly__State = 0U;
        } else {
            vlSelfRef.__Vdly__State = 0U;
        }
    } else if (vlSelfRef.__PVT__Hit) {
        vlSelfRef.__PVT__StallReg = 0U;
        vlSelfRef.__PVT__InstReg = vlSelfRef.__PVT__CacheData
            [(0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                      >> 2U))];
    } else {
        vlSelfRef.__PVT__StallReg = 1U;
        vlSelfRef.__Vdly__State = 1U;
    }
    vlSelfRef.__PVT__State = vlSelfRef.__Vdly__State;
    if (vlSelfRef.__VdlySet__CacheValid__v0) {
        vlSelfRef.__PVT__CacheData[0U] = 0U;
        vlSelfRef.__PVT__CacheValid[0U] = 0U;
        vlSelfRef.__PVT__CacheTag[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__CacheValid__v1) {
        vlSelfRef.__PVT__CacheData[1U] = 0U;
        vlSelfRef.__PVT__CacheData[2U] = 0U;
        vlSelfRef.__PVT__CacheData[3U] = 0U;
        vlSelfRef.__PVT__CacheData[4U] = 0U;
        vlSelfRef.__PVT__CacheData[5U] = 0U;
        vlSelfRef.__PVT__CacheData[6U] = 0U;
        vlSelfRef.__PVT__CacheData[7U] = 0U;
        vlSelfRef.__PVT__CacheData[8U] = 0U;
        vlSelfRef.__PVT__CacheData[9U] = 0U;
        vlSelfRef.__PVT__CacheData[0xaU] = 0U;
        vlSelfRef.__PVT__CacheData[0xbU] = 0U;
        vlSelfRef.__PVT__CacheData[0xcU] = 0U;
        vlSelfRef.__PVT__CacheData[0xdU] = 0U;
        vlSelfRef.__PVT__CacheData[0xeU] = 0U;
        vlSelfRef.__PVT__CacheData[0xfU] = 0U;
        vlSelfRef.__PVT__CacheValid[1U] = 0U;
        vlSelfRef.__PVT__CacheValid[2U] = 0U;
        vlSelfRef.__PVT__CacheValid[3U] = 0U;
        vlSelfRef.__PVT__CacheValid[4U] = 0U;
        vlSelfRef.__PVT__CacheValid[5U] = 0U;
        vlSelfRef.__PVT__CacheValid[6U] = 0U;
        vlSelfRef.__PVT__CacheValid[7U] = 0U;
        vlSelfRef.__PVT__CacheValid[8U] = 0U;
        vlSelfRef.__PVT__CacheValid[9U] = 0U;
        vlSelfRef.__PVT__CacheValid[0xaU] = 0U;
        vlSelfRef.__PVT__CacheValid[0xbU] = 0U;
        vlSelfRef.__PVT__CacheValid[0xcU] = 0U;
        vlSelfRef.__PVT__CacheValid[0xdU] = 0U;
        vlSelfRef.__PVT__CacheValid[0xeU] = 0U;
        vlSelfRef.__PVT__CacheValid[0xfU] = 0U;
        vlSelfRef.__PVT__CacheTag[1U] = 0U;
        vlSelfRef.__PVT__CacheTag[2U] = 0U;
        vlSelfRef.__PVT__CacheTag[3U] = 0U;
        vlSelfRef.__PVT__CacheTag[4U] = 0U;
        vlSelfRef.__PVT__CacheTag[5U] = 0U;
        vlSelfRef.__PVT__CacheTag[6U] = 0U;
        vlSelfRef.__PVT__CacheTag[7U] = 0U;
        vlSelfRef.__PVT__CacheTag[8U] = 0U;
        vlSelfRef.__PVT__CacheTag[9U] = 0U;
        vlSelfRef.__PVT__CacheTag[0xaU] = 0U;
        vlSelfRef.__PVT__CacheTag[0xbU] = 0U;
        vlSelfRef.__PVT__CacheTag[0xcU] = 0U;
        vlSelfRef.__PVT__CacheTag[0xdU] = 0U;
        vlSelfRef.__PVT__CacheTag[0xeU] = 0U;
        vlSelfRef.__PVT__CacheTag[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__CacheData__v16) {
        vlSelfRef.__PVT__CacheData[__VdlyDim0__CacheData__v16] 
            = __VdlyVal__CacheData__v16;
        vlSelfRef.__PVT__CacheValid[__VdlyDim0__CacheValid__v16] = 1U;
        vlSelfRef.__PVT__CacheTag[__VdlyDim0__CacheTag__v16] 
            = __VdlyVal__CacheTag__v16;
    }
}

VL_INLINE_OPT void VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__2(VCPU_ICache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__2\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Hit = (vlSelfRef.__PVT__CacheValid
                            [(0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                      >> 2U))] & (vlSelfRef.__PVT__CacheTag
                                                  [
                                                  (0xfU 
                                                   & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                      >> 2U))] 
                                                  == 
                                                  (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                   >> 6U)));
}
