// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_BRUSin.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_BRUSin___ico_sequent__TOP__CPU__Bru_sl__0(VCPU_BRUSin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_BRUSin___ico_sequent__TOP__CPU__Bru_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NewPc = (((4U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                ? ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                    ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation)) 
                                       || (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                           >= vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                    : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                        ? (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                           < vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)
                                        : VL_GTES_III(32, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)))
                                : ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                    ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
                                        ? VL_LTS_III(32, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1, vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)
                                        : (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                           != vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                    : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation)) 
                                       && (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1 
                                           == vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))))
                               ? ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__JumpLink)
                                   ? (vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData 
                                      + vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1)
                                   : (vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData 
                                      + vlSymsp->TOP__CPU__pc_sl.PcReg))
                               : ((IData)(vlSymsp->TOP__CPU.__PVT__RealReset)
                                   ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                   : ((IData)(4U) + vlSymsp->TOP__CPU__pc_sl.PcReg)));
}
