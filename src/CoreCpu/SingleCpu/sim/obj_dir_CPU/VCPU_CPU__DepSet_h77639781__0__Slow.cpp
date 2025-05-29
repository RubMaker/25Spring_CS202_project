// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_CPU.h"

VL_ATTR_COLD void VCPU_CPU___ctor_var_reset(VCPU_CPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPU_CPU___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->memclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10349351081086712565ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->UartData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3571579159515240112ull);
    vlSelf->UartAddress = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6759084871031218071ull);
    vlSelf->UartOver = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9857322573290285699ull);
    vlSelf->Switch1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4485436964664171585ull);
    vlSelf->Switch2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3114214373581963742ull);
    vlSelf->Button1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17633132580082582429ull);
    vlSelf->Button2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5586330257011968540ull);
    vlSelf->Button3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426938642945806753ull);
    vlSelf->Button4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716315135285041578ull);
    vlSelf->Button5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583275299557269326ull);
    vlSelf->Led1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7922926604351290714ull);
    vlSelf->Led2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18333335547205238031ull);
    vlSelf->Seg1Out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17693769927085233887ull);
    vlSelf->VgaAddress = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9329207576302704564ull);
    vlSelf->CharOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4076422713069510402ull);
    vlSelf->ColorOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16966566493434470373ull);
    vlSelf->Pc_test = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6835443492677354364ull);
    vlSelf->Inst_test = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7577123024841876526ull);
    vlSelf->__PVT__RealReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 392782760684123114ull);
    vlSelf->__PVT__UartMemAddress = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11758991453112877566ull);
    vlSelf->__PVT__UartMemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7940956678024607255ull);
}
