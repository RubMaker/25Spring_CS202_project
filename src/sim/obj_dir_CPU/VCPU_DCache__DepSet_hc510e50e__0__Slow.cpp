// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_DCache.h"

VL_ATTR_COLD void VCPU_DCache___eval_initial__TOP__CPU__mem_stage__U_DCache(VCPU_DCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_DCache___eval_initial__TOP__CPU__mem_stage__U_DCache\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Cache[0U] = 0ULL;
    vlSelfRef.__PVT__Cache[1U] = 0ULL;
    vlSelfRef.__PVT__Cache[2U] = 0ULL;
    vlSelfRef.__PVT__Cache[3U] = 0ULL;
    vlSelfRef.__PVT__Cache[4U] = 0ULL;
    vlSelfRef.__PVT__Cache[5U] = 0ULL;
    vlSelfRef.__PVT__Cache[6U] = 0ULL;
    vlSelfRef.__PVT__Cache[7U] = 0ULL;
    vlSelfRef.__PVT__Cache[8U] = 0ULL;
    vlSelfRef.__PVT__Cache[9U] = 0ULL;
    vlSelfRef.__PVT__Cache[0xaU] = 0ULL;
    vlSelfRef.__PVT__Cache[0xbU] = 0ULL;
    vlSelfRef.__PVT__Cache[0xcU] = 0ULL;
    vlSelfRef.__PVT__Cache[0xdU] = 0ULL;
    vlSelfRef.__PVT__Cache[0xeU] = 0ULL;
    vlSelfRef.__PVT__Cache[0xfU] = 0ULL;
    vlSelfRef.__PVT__i = 0x10U;
    vlSelfRef.__PVT__state = 0U;
}

VL_ATTR_COLD void VCPU_DCache___ctor_var_reset(VCPU_DCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_DCache___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__Addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11431796577763697799ull);
    vlSelf->__PVT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11254409076074583820ull);
    vlSelf->__PVT__MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434942013124915871ull);
    vlSelf->__PVT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222392603918024337ull);
    vlSelf->__PVT__LS_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12618763082606707403ull);
    vlSelf->__PVT__DataOut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8109578801631602181ull);
    vlSelf->__PVT__DStall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6319916911617467031ull);
    vlSelf->__PVT__MemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16023464032952556476ull);
    vlSelf->__PVT__MemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14206314125122513421ull);
    vlSelf->__PVT__MemWriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16088217852827146957ull);
    vlSelf->__PVT__MemWb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6813334784926811339ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9404372463396948974ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__Cache[__Vi0] = VL_SCOPED_RAND_RESET_Q(59, __VscopeHash, 6207059817603094535ull);
    }
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
    vlSelf->__PVT__cache_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2160241639092631442ull);
    vlSelf->__PVT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8008975632350775116ull);
    vlSelf->__PVT__proc_MemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5595643013823807138ull);
    vlSelf->__PVT__updated_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6343901335006796779ull);
    vlSelf->__VdfgRegularize_hc4d58fb9_0_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14058261303147059973ull);
    vlSelf->__VdfgRegularize_hc4d58fb9_0_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11061379244242172806ull);
    vlSelf->__VdfgRegularize_hc4d58fb9_0_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15723564573347477836ull);
}
