// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_BRU.h"

VL_ATTR_COLD void VCPU_BRU___ctor_var_reset(VCPU_BRU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_BRU___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__Rs1Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9501844586541972087ull);
    vlSelf->__PVT__Rs2Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5509325145560023827ull);
    vlSelf->__PVT__BRUOp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4360759353576860720ull);
    vlSelf->__PVT__Pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13336631297988802748ull);
    vlSelf->__PVT__Imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13463656139135615001ull);
    vlSelf->__PVT__BranchTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11755471588695498047ull);
    vlSelf->__PVT__OldPc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14395524403238895593ull);
}
