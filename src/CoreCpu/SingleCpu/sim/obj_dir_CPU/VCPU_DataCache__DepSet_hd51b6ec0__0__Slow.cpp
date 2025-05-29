// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_DataCache.h"

VL_ATTR_COLD void VCPU_DataCache___ctor_var_reset(VCPU_DataCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_DataCache___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__Address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 224589347255615128ull);
    vlSelf->__PVT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11254409076074583820ull);
    vlSelf->__PVT__MemOperation = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18154330800898925763ull);
    vlSelf->__PVT__MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434942013124915871ull);
    vlSelf->__PVT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222392603918024337ull);
    vlSelf->__PVT__DataOut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8109578801631602181ull);
    vlSelf->__PVT__MemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16023464032952556476ull);
    vlSelf->__PVT__MemAddress = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8008404268932972073ull);
    vlSelf->__PVT__MemWriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16088217852827146957ull);
    vlSelf->__PVT__MemWriteEnB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16014978651836974798ull);
    vlSelf->__PVT__Data1FF3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11058416304547717152ull);
}
