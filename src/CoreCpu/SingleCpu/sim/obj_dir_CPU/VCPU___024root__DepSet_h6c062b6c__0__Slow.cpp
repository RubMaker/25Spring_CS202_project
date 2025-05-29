// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU__Syms.h"
#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU_RegisterFile___eval_initial__TOP__CPU__regf_sl(VCPU_RegisterFile* vlSelf);
VL_ATTR_COLD void VCPU___024root____Vm_traceActivitySetAll(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPU_RegisterFile___eval_initial__TOP__CPU__regf_sl((&vlSymsp->TOP__CPU__regf_sl));
    VCPU___024root____Vm_traceActivitySetAll(vlSelf);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root___eval_triggers__stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_triggers__stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf);
void VCPU_ExpAddressHandler___ico_sequent__TOP__CPU__memory_sl__exp_inst__0(VCPU_ExpAddressHandler* vlSelf);
void VCPU_CPU___ico_sequent__TOP__CPU__0(VCPU_CPU* vlSelf);
void VCPU_InstCache___ico_sequent__TOP__CPU__icache_sl__0(VCPU_InstCache* vlSelf);
void VCPU___024root___ico_sequent__TOP__1(VCPU___024root* vlSelf);
void VCPU_Controller___ico_sequent__TOP__CPU__constrol_sl__0(VCPU_Controller* vlSelf);
void VCPU_ImmGenerator___ico_sequent__TOP__CPU__imm_sl__0(VCPU_ImmGenerator* vlSelf);
void VCPU_RegisterFile___ico_sequent__TOP__CPU__regf_sl__0(VCPU_RegisterFile* vlSelf);
void VCPU_BRUSin___ico_sequent__TOP__CPU__Bru_sl__0(VCPU_BRUSin* vlSelf);
void VCPU_ALU___ico_sequent__TOP__CPU__alu_sl__0(VCPU_ALU* vlSelf);
void VCPU_CPU___ico_sequent__TOP__CPU__1(VCPU_CPU* vlSelf);
void VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__0(VCPU_Memory* vlSelf);
void VCPU_DataCache___ico_sequent__TOP__CPU__dcache_sl__0(VCPU_DataCache* vlSelf);
void VCPU_CPU___ico_sequent__TOP__CPU__2(VCPU_CPU* vlSelf);
void VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__1(VCPU_Memory* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCPU___024root___stl_sequent__TOP__0(vlSelf);
        VCPU___024root____Vm_traceActivitySetAll(vlSelf);
        VCPU_ExpAddressHandler___ico_sequent__TOP__CPU__memory_sl__exp_inst__0((&vlSymsp->TOP__CPU__memory_sl__exp_inst));
        VCPU_CPU___ico_sequent__TOP__CPU__0((&vlSymsp->TOP__CPU));
        VCPU_InstCache___ico_sequent__TOP__CPU__icache_sl__0((&vlSymsp->TOP__CPU__icache_sl));
        VCPU___024root___ico_sequent__TOP__1(vlSelf);
        VCPU_Controller___ico_sequent__TOP__CPU__constrol_sl__0((&vlSymsp->TOP__CPU__constrol_sl));
        VCPU_ImmGenerator___ico_sequent__TOP__CPU__imm_sl__0((&vlSymsp->TOP__CPU__imm_sl));
        VCPU_RegisterFile___ico_sequent__TOP__CPU__regf_sl__0((&vlSymsp->TOP__CPU__regf_sl));
        VCPU_BRUSin___ico_sequent__TOP__CPU__Bru_sl__0((&vlSymsp->TOP__CPU__Bru_sl));
        VCPU_ALU___ico_sequent__TOP__CPU__alu_sl__0((&vlSymsp->TOP__CPU__alu_sl));
        VCPU_CPU___ico_sequent__TOP__CPU__1((&vlSymsp->TOP__CPU));
        VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__0((&vlSymsp->TOP__CPU__memory_sl));
        VCPU_DataCache___ico_sequent__TOP__CPU__dcache_sl__0((&vlSymsp->TOP__CPU__dcache_sl));
        VCPU_CPU___ico_sequent__TOP__CPU__2((&vlSymsp->TOP__CPU));
        VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__1((&vlSymsp->TOP__CPU__memory_sl));
    }
}

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___stl_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Pc_test = vlSymsp->TOP__CPU__pc_sl.PcReg;
    vlSelfRef.Seg1Out = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Seg1;
    vlSelfRef.Led2 = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Led2;
    vlSelfRef.Led1 = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Led1;
    if ((0xbffU >= (IData)(vlSelfRef.VgaAddress))) {
        vlSelfRef.ColorOut = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__color
            [vlSelfRef.VgaAddress];
        vlSelfRef.CharOut = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__chars
            [vlSelfRef.VgaAddress];
    } else {
        vlSelfRef.ColorOut = 0U;
        vlSelfRef.CharOut = 0U;
    }
}
