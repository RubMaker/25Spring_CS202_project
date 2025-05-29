// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Controller.h"

VL_ATTR_COLD void VCPU_Controller___ctor_var_reset(VCPU_Controller* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Controller___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__Instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6259496675603560950ull);
    vlSelf->__PVT__JumpLink = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7605993951060768050ull);
    vlSelf->__PVT__BranchOperation = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 402487696388586532ull);
    vlSelf->__PVT__AluOperation = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1322679058490821605ull);
    vlSelf->__PVT__AluSrc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9988978378834034763ull);
    vlSelf->__PVT__AluSrc2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10003207036479681151ull);
    vlSelf->__PVT__MemoryOperation = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9616295375275476819ull);
    vlSelf->__PVT__MemWriteEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1083109016743070886ull);
    vlSelf->__PVT__MemReadEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2410936158534757273ull);
    vlSelf->__PVT__RegWriteEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10161890702638847423ull);
    vlSelf->__PVT__Mem2Reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3225738768541059872ull);
    vlSelf->__PVT__CpuStart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8463617887036665708ull);
}
