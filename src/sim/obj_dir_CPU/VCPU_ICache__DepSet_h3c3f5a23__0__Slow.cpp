// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ICache.h"

VL_ATTR_COLD void VCPU_ICache___eval_initial__TOP__CPU__if_stage__U_Cache(VCPU_ICache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ICache___eval_initial__TOP__CPU__if_stage__U_Cache\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__CacheValid[0U] = 0U;
    vlSelfRef.__PVT__CacheTag[0U] = 0U;
    vlSelfRef.__PVT__CacheData[0U] = 0U;
    vlSelfRef.__PVT__CacheValid[1U] = 0U;
    vlSelfRef.__PVT__CacheTag[1U] = 0U;
    vlSelfRef.__PVT__CacheData[1U] = 0U;
    vlSelfRef.__PVT__CacheValid[2U] = 0U;
    vlSelfRef.__PVT__CacheTag[2U] = 0U;
    vlSelfRef.__PVT__CacheData[2U] = 0U;
    vlSelfRef.__PVT__CacheValid[3U] = 0U;
    vlSelfRef.__PVT__CacheTag[3U] = 0U;
    vlSelfRef.__PVT__CacheData[3U] = 0U;
    vlSelfRef.__PVT__CacheValid[4U] = 0U;
    vlSelfRef.__PVT__CacheTag[4U] = 0U;
    vlSelfRef.__PVT__CacheData[4U] = 0U;
    vlSelfRef.__PVT__CacheValid[5U] = 0U;
    vlSelfRef.__PVT__CacheTag[5U] = 0U;
    vlSelfRef.__PVT__CacheData[5U] = 0U;
    vlSelfRef.__PVT__CacheValid[6U] = 0U;
    vlSelfRef.__PVT__CacheTag[6U] = 0U;
    vlSelfRef.__PVT__CacheData[6U] = 0U;
    vlSelfRef.__PVT__CacheValid[7U] = 0U;
    vlSelfRef.__PVT__CacheTag[7U] = 0U;
    vlSelfRef.__PVT__CacheData[7U] = 0U;
    vlSelfRef.__PVT__CacheValid[8U] = 0U;
    vlSelfRef.__PVT__CacheTag[8U] = 0U;
    vlSelfRef.__PVT__CacheData[8U] = 0U;
    vlSelfRef.__PVT__CacheValid[9U] = 0U;
    vlSelfRef.__PVT__CacheTag[9U] = 0U;
    vlSelfRef.__PVT__CacheData[9U] = 0U;
    vlSelfRef.__PVT__CacheValid[0xaU] = 0U;
    vlSelfRef.__PVT__CacheTag[0xaU] = 0U;
    vlSelfRef.__PVT__CacheData[0xaU] = 0U;
    vlSelfRef.__PVT__CacheValid[0xbU] = 0U;
    vlSelfRef.__PVT__CacheTag[0xbU] = 0U;
    vlSelfRef.__PVT__CacheData[0xbU] = 0U;
    vlSelfRef.__PVT__CacheValid[0xcU] = 0U;
    vlSelfRef.__PVT__CacheTag[0xcU] = 0U;
    vlSelfRef.__PVT__CacheData[0xcU] = 0U;
    vlSelfRef.__PVT__CacheValid[0xdU] = 0U;
    vlSelfRef.__PVT__CacheTag[0xdU] = 0U;
    vlSelfRef.__PVT__CacheData[0xdU] = 0U;
    vlSelfRef.__PVT__CacheValid[0xeU] = 0U;
    vlSelfRef.__PVT__CacheTag[0xeU] = 0U;
    vlSelfRef.__PVT__CacheData[0xeU] = 0U;
    vlSelfRef.__PVT__CacheValid[0xfU] = 0U;
    vlSelfRef.__PVT__CacheTag[0xfU] = 0U;
    vlSelfRef.__PVT__CacheData[0xfU] = 0U;
    vlSelfRef.__PVT__I = 0x10U;
    vlSelfRef.__PVT__State = 0U;
    vlSelfRef.__PVT__StallReg = 0U;
    vlSelfRef.__PVT__InstReg = 0U;
}

VL_ATTR_COLD void VCPU_ICache___ctor_var_reset(VCPU_ICache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ICache___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__Addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11431796577763697799ull);
    vlSelf->__PVT__ExtMemInst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4535742080766185893ull);
    vlSelf->__PVT__Inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6741923410542025115ull);
    vlSelf->__PVT__IStall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17213618993558672001ull);
    vlSelf->__PVT__State = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6027395401049304901ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__CacheData[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15193821857469195872ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__CacheTag[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 326299123736816223ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__CacheValid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8537749185131226094ull);
    }
    vlSelf->__PVT__Hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8775842341590162641ull);
    vlSelf->__PVT__InstReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12341100620455646830ull);
    vlSelf->__PVT__StallReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3665788682302515331ull);
    vlSelf->__PVT__I = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9350754067018752509ull);
    vlSelf->__Vdly__State = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10449492374261132194ull);
    vlSelf->__VdlySet__CacheValid__v0 = 0;
    vlSelf->__VdlySet__CacheValid__v1 = 0;
    vlSelf->__VdlySet__CacheData__v16 = 0;
}
