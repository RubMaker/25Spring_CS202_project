// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin_MemorySim.h"

VL_ATTR_COLD void VCPUSin_MemorySim___ctor_var_reset(VCPUSin_MemorySim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPUSin_MemorySim___ctor_var_reset\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clka = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10236781857238200718ull);
    vlSelf->__PVT__clkb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1787115651125850892ull);
    vlSelf->__PVT__addra = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6194089451892971914ull);
    vlSelf->__PVT__addrb = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 117565213273520006ull);
    vlSelf->__PVT__write_datab = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18221714089981634199ull);
    vlSelf->__PVT__web = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10586552684039994716ull);
    vlSelf->__PVT__dataa = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2066974822982174084ull);
    vlSelf->__PVT__datab = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9572636468595325695ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4032165174000709208ull);
    }
    vlSelf->__PVT__dataa_temp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8687744538232222369ull);
    vlSelf->__PVT__datab_temp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12135208847731540758ull);
}
