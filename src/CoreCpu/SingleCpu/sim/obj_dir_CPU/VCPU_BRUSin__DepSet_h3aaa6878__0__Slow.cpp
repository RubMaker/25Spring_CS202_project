// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_BRUSin.h"

VL_ATTR_COLD void VCPU_BRUSin___ctor_var_reset(VCPU_BRUSin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_BRUSin___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__Source1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9318983660308004029ull);
    vlSelf->__PVT__Source2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1470871869985941727ull);
    vlSelf->__PVT__Pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13336631297988802748ull);
    vlSelf->__PVT__Immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14068096434120916981ull);
    vlSelf->__PVT__BRUOperation = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10546921086470390433ull);
    vlSelf->__PVT__Jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16079061686573847129ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__NewPc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4717041672066176815ull);
}
