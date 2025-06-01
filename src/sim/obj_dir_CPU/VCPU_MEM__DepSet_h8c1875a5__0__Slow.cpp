// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_MEM.h"

VL_ATTR_COLD void VCPU_MEM___ctor_var_reset(VCPU_MEM* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_MEM___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__AluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3388407518017186040ull);
    vlSelf->__PVT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11254409076074583820ull);
    vlSelf->__PVT__MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434942013124915871ull);
    vlSelf->__PVT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222392603918024337ull);
    vlSelf->__PVT__LS_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12618763082606707403ull);
    vlSelf->__PVT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9792351497816924968ull);
    vlSelf->__PVT__DStall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6319916911617467031ull);
    vlSelf->__PVT__MemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16023464032952556476ull);
    vlSelf->__PVT__MemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14206314125122513421ull);
    vlSelf->__PVT__MemWriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16088217852827146957ull);
    vlSelf->__PVT__MemWb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6813334784926811339ull);
}
