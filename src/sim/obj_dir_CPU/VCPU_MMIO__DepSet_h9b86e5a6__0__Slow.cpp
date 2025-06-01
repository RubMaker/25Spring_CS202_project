// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_MMIO.h"

VL_ATTR_COLD void VCPU_MMIO___ctor_var_reset(VCPU_MMIO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_MMIO___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__Address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 224589347255615128ull);
    vlSelf->__PVT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11254409076074583820ull);
    vlSelf->__PVT__Switch1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4485436964664171585ull);
    vlSelf->__PVT__Switch2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3114214373581963742ull);
    vlSelf->__PVT__Button1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17633132580082582429ull);
    vlSelf->__PVT__Button2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5586330257011968540ull);
    vlSelf->__PVT__Button3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426938642945806753ull);
    vlSelf->__PVT__Button4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716315135285041578ull);
    vlSelf->__PVT__Button5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583275299557269326ull);
    vlSelf->__PVT__Seg1Out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17693769927085233887ull);
    vlSelf->__PVT__Led1Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8449347946087016731ull);
    vlSelf->__PVT__Led2Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16107725052017714950ull);
    vlSelf->__PVT__VgaAddress = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9329207576302704564ull);
    vlSelf->__PVT__CharOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4076422713069510402ull);
    vlSelf->__PVT__ColorOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16966566493434470373ull);
    vlSelf->__PVT__DataIo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3359713515413611374ull);
    vlSelf->__PVT__Led1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7922926604351290714ull);
    vlSelf->__PVT__Led2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18333335547205238031ull);
    vlSelf->__PVT__Seg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18304801912363934707ull);
    for (int __Vi0 = 0; __Vi0 < 3072; ++__Vi0) {
        vlSelf->__PVT__chars[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14899220818357511493ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3072; ++__Vi0) {
        vlSelf->__PVT__color[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 465961873555653160ull);
    }
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vlvbound_h1410888b__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4164670308120198129ull);
    vlSelf->__Vlvbound_hf13a2a6e__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16681553351057809784ull);
    vlSelf->__Vlvbound_h37617fa1__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4632244495291241574ull);
    vlSelf->__Vlvbound_h45e5c314__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11623308342609436737ull);
}
