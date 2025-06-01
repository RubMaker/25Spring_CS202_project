// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_PC.h"

VL_ATTR_COLD void VCPU_PC___ctor_var_reset(VCPU_PC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_PC___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__PC_Write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6980280521158574744ull);
    vlSelf->__PVT__icache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13246208882232122535ull);
    vlSelf->__PVT__dcache_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15904628947942274641ull);
    vlSelf->__PVT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361382489806169962ull);
    vlSelf->__PVT__new_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2091841482614648415ull);
    vlSelf->__PVT__pc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4379395961601650806ull);
    vlSelf->__PVT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->__Vdly__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11429183334564586508ull);
}
