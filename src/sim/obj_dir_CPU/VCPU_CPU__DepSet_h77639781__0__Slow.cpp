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
    vlSelf->mem_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7558918319745958442ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->Switch1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4485436964664171585ull);
    vlSelf->Switch2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3114214373581963742ull);
    vlSelf->Button1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17633132580082582429ull);
    vlSelf->Button2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5586330257011968540ull);
    vlSelf->Button3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426938642945806753ull);
    vlSelf->Button4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716315135285041578ull);
    vlSelf->Button5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583275299557269326ull);
    vlSelf->VgaAddress = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9329207576302704564ull);
    vlSelf->pc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4379395961601650806ull);
    vlSelf->inst_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17653795111096142571ull);
    vlSelf->Led1Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8449347946087016731ull);
    vlSelf->Led2Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16107725052017714950ull);
    vlSelf->Seg1Out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17693769927085233887ull);
    vlSelf->CharOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4076422713069510402ull);
    vlSelf->ColorOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16966566493434470373ull);
    vlSelf->__PVT__new_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2091841482614648415ull);
}
