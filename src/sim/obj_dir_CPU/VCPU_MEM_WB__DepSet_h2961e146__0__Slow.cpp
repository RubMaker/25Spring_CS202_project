// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_MEM_WB.h"

VL_ATTR_COLD void VCPU_MEM_WB___ctor_var_reset(VCPU_MEM_WB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_MEM_WB___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->__PVT__MemResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12632990514707710610ull);
    vlSelf->__PVT__MemRegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 113797547525274994ull);
    vlSelf->__PVT__MemRd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 152702911951040760ull);
    vlSelf->__PVT__WbData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16846077907156387338ull);
    vlSelf->__PVT__WbRegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16564406611513064804ull);
    vlSelf->__PVT__WbRd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 123283844937425049ull);
    vlSelf->__PVT__Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5129377351112949026ull);
    vlSelf->__PVT__Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4925852885074210900ull);
    vlSelf->__PVT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
}
