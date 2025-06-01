// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Registers.h"

VL_ATTR_COLD void VCPU_Registers___eval_initial__TOP__CPU__reg_file(VCPU_Registers* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Registers___eval_initial__TOP__CPU__reg_file\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__regs[0U] = 0U;
    vlSelfRef.__PVT__regs[1U] = 0U;
    vlSelfRef.__PVT__regs[2U] = 0U;
    vlSelfRef.__PVT__regs[3U] = 0U;
    vlSelfRef.__PVT__regs[4U] = 0U;
    vlSelfRef.__PVT__regs[5U] = 0U;
    vlSelfRef.__PVT__regs[6U] = 0U;
    vlSelfRef.__PVT__regs[7U] = 0U;
    vlSelfRef.__PVT__regs[8U] = 0U;
    vlSelfRef.__PVT__regs[9U] = 0U;
    vlSelfRef.__PVT__regs[0xaU] = 0U;
    vlSelfRef.__PVT__regs[0xbU] = 0U;
    vlSelfRef.__PVT__regs[0xcU] = 0U;
    vlSelfRef.__PVT__regs[0xdU] = 0U;
    vlSelfRef.__PVT__regs[0xeU] = 0U;
    vlSelfRef.__PVT__regs[0xfU] = 0U;
    vlSelfRef.__PVT__regs[0x10U] = 0U;
    vlSelfRef.__PVT__regs[0x11U] = 0U;
    vlSelfRef.__PVT__regs[0x12U] = 0U;
    vlSelfRef.__PVT__regs[0x13U] = 0U;
    vlSelfRef.__PVT__regs[0x14U] = 0U;
    vlSelfRef.__PVT__regs[0x15U] = 0U;
    vlSelfRef.__PVT__regs[0x16U] = 0U;
    vlSelfRef.__PVT__regs[0x17U] = 0U;
    vlSelfRef.__PVT__regs[0x18U] = 0U;
    vlSelfRef.__PVT__regs[0x19U] = 0U;
    vlSelfRef.__PVT__regs[0x1aU] = 0U;
    vlSelfRef.__PVT__regs[0x1bU] = 0U;
    vlSelfRef.__PVT__regs[0x1cU] = 0U;
    vlSelfRef.__PVT__regs[0x1dU] = 0U;
    vlSelfRef.__PVT__regs[0x1eU] = 0U;
    vlSelfRef.__PVT__regs[0x1fU] = 0U;
    vlSelfRef.__PVT__i = 0x20U;
}

VL_ATTR_COLD void VCPU_Registers___ctor_var_reset(VCPU_Registers* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Registers___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7583249219640028756ull);
    vlSelf->__PVT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16827201314045723821ull);
    vlSelf->__PVT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16624318508599476813ull);
    vlSelf->__PVT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10683005467506302743ull);
    vlSelf->__PVT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
    vlSelf->__PVT__rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7950012703377089919ull);
    vlSelf->__PVT__rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17824471296722538975ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2303844575473820508ull);
    }
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
}
