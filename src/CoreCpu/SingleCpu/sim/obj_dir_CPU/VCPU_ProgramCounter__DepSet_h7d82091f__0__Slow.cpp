// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ProgramCounter.h"

VL_ATTR_COLD void VCPU_ProgramCounter___ctor_var_reset(VCPU_ProgramCounter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ProgramCounter___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__PcInput = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11524954777339028499ull);
    vlSelf->__PVT__PcOutput = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7725605446549387884ull);
    vlSelf->PcReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10502367719974596245ull);
    vlSelf->__PVT__reset_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8014405204363881578ull);
}
