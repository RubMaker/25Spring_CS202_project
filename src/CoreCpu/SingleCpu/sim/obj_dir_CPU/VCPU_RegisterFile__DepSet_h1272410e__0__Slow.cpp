// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_RegisterFile.h"

VL_ATTR_COLD void VCPU_RegisterFile___eval_initial__TOP__CPU__regf_sl(VCPU_RegisterFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_RegisterFile___eval_initial__TOP__CPU__regf_sl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Registers[0U] = 0U;
    vlSelfRef.Registers[1U] = 0U;
    vlSelfRef.Registers[3U] = 0xffffff00U;
    vlSelfRef.Registers[4U] = 0U;
    vlSelfRef.Registers[5U] = 0U;
    vlSelfRef.Registers[6U] = 0U;
    vlSelfRef.Registers[7U] = 0U;
    vlSelfRef.Registers[8U] = 0U;
    vlSelfRef.Registers[9U] = 0U;
    vlSelfRef.Registers[0xaU] = 0U;
    vlSelfRef.Registers[0xbU] = 0U;
    vlSelfRef.Registers[0xcU] = 0U;
    vlSelfRef.Registers[0xdU] = 0U;
    vlSelfRef.Registers[0xeU] = 0U;
    vlSelfRef.Registers[0xfU] = 0U;
    vlSelfRef.Registers[0x10U] = 0U;
    vlSelfRef.Registers[0x11U] = 0U;
    vlSelfRef.Registers[0x12U] = 0U;
    vlSelfRef.Registers[0x13U] = 0U;
    vlSelfRef.Registers[0x14U] = 0U;
    vlSelfRef.Registers[0x15U] = 0U;
    vlSelfRef.Registers[0x16U] = 0U;
    vlSelfRef.Registers[0x17U] = 0U;
    vlSelfRef.Registers[0x18U] = 0U;
    vlSelfRef.Registers[0x19U] = 0U;
    vlSelfRef.Registers[0x1aU] = 0U;
    vlSelfRef.Registers[0x1bU] = 0U;
    vlSelfRef.Registers[0x1cU] = 0U;
    vlSelfRef.Registers[0x1dU] = 0U;
    vlSelfRef.Registers[0x1eU] = 0U;
    vlSelfRef.Registers[0x1fU] = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void VCPU_RegisterFile___ctor_var_reset(VCPU_RegisterFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_RegisterFile___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__ReadRegAddr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5719650817268074879ull);
    vlSelf->__PVT__ReadRegAddr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13135140931573766117ull);
    vlSelf->__PVT__WriteRegAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14535424149355836260ull);
    vlSelf->__PVT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11254409076074583820ull);
    vlSelf->__PVT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
    vlSelf->__PVT__ReadData1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12590533694866391593ull);
    vlSelf->__PVT__ReadData2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10951770798241919100ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 749056718725872132ull);
    }
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__unnamedblk2__DOT__i = 0;
}
