// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin_Memory.h"

VL_ATTR_COLD void VCPUSin_Memory___ctor_var_reset(VCPUSin_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPUSin_Memory___ctor_var_reset\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__clkA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10641079913424131307ull);
    vlSelf->__PVT__clkB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10183626740355000738ull);
    vlSelf->__PVT__AddressA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12752028479778482852ull);
    vlSelf->__PVT__AddressB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10597426591882465081ull);
    vlSelf->__PVT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11254409076074583820ull);
    vlSelf->__PVT__EnableWriteB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13030959999506812317ull);
    vlSelf->__PVT__Switch1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4485436964664171585ull);
    vlSelf->__PVT__Switch2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3114214373581963742ull);
    vlSelf->__PVT__Button1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17633132580082582429ull);
    vlSelf->__PVT__Button2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5586330257011968540ull);
    vlSelf->__PVT__Button3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426938642945806753ull);
    vlSelf->__PVT__Button4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716315135285041578ull);
    vlSelf->__PVT__Button5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583275299557269326ull);
    vlSelf->__PVT__VgaAddress = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9329207576302704564ull);
    vlSelf->__PVT__Seg1Out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17693769927085233887ull);
    vlSelf->__PVT__Led1Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8449347946087016731ull);
    vlSelf->__PVT__Led2Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16107725052017714950ull);
    vlSelf->__PVT__CharOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4076422713069510402ull);
    vlSelf->__PVT__ColorOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16966566493434470373ull);
    vlSelf->__PVT__ReadDataA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17847928076046410816ull);
    vlSelf->__PVT__ReadDataB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8898793145177960034ull);
    vlSelf->__PVT__ExpData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4782245183224647954ull);
    vlSelf->__PVT__EnWB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14184778588536195003ull);
    vlSelf->__Vcellinp__mem_inst__write_datab = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12909444172292474851ull);
    vlSelf->__PVT__mmio_inst__DOT__Led1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2197550850956191228ull);
    vlSelf->__PVT__mmio_inst__DOT__Led2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6220269018603491740ull);
    vlSelf->__PVT__mmio_inst__DOT__Seg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7427787594796946749ull);
    for (int __Vi0 = 0; __Vi0 < 3072; ++__Vi0) {
        vlSelf->__PVT__mmio_inst__DOT__chars[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5247861759442230379ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3072; ++__Vi0) {
        vlSelf->__PVT__mmio_inst__DOT__color[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13436191544753799778ull);
    }
    vlSelf->__PVT__mmio_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->mmio_inst__DOT____Vlvbound_h1410888b__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14952127335391175009ull);
    vlSelf->mmio_inst__DOT____Vlvbound_hf13a2a6e__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5851415750998022403ull);
    vlSelf->mmio_inst__DOT____Vlvbound_h37617fa1__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13390529399582102952ull);
    vlSelf->mmio_inst__DOT____Vlvbound_h45e5c314__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17856012518247507045ull);
}
