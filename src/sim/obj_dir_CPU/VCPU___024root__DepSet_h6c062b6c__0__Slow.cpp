// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU__Syms.h"
#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU_Registers___eval_initial__TOP__CPU__reg_file(VCPU_Registers* vlSelf);
VL_ATTR_COLD void VCPU___024root____Vm_traceActivitySetAll(VCPU___024root* vlSelf);
VL_ATTR_COLD void VCPU_Branch_Predictor___eval_initial__TOP__CPU__if_stage__BP(VCPU_Branch_Predictor* vlSelf);
VL_ATTR_COLD void VCPU_ICache___eval_initial__TOP__CPU__if_stage__U_Cache(VCPU_ICache* vlSelf);
VL_ATTR_COLD void VCPU_DCache___eval_initial__TOP__CPU__mem_stage__U_DCache(VCPU_DCache* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPU_Registers___eval_initial__TOP__CPU__reg_file((&vlSymsp->TOP__CPU__reg_file));
    VCPU___024root____Vm_traceActivitySetAll(vlSelf);
    VCPU_Branch_Predictor___eval_initial__TOP__CPU__if_stage__BP((&vlSymsp->TOP__CPU__if_stage__BP));
    VCPU_ICache___eval_initial__TOP__CPU__if_stage__U_Cache((&vlSymsp->TOP__CPU__if_stage__U_Cache));
    VCPU_DCache___eval_initial__TOP__CPU__mem_stage__U_DCache((&vlSymsp->TOP__CPU__mem_stage__U_DCache));
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
void VCPU_Controller___nba_sequent__TOP__CPU__id_stage__controller_inst__0(VCPU_Controller* vlSelf);
void VCPU_ExpAddressHandler___nba_sequent__TOP__CPU__memory_inst__exp_inst__0(VCPU_ExpAddressHandler* vlSelf);
void VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__2(VCPU_ICache* vlSelf);
void VCPU_Hazard___nba_sequent__TOP__CPU__id_stage__hazard_inst__0(VCPU_Hazard* vlSelf);
void VCPU_ImmGenerator___nba_sequent__TOP__CPU__if_stage__ImmGen__0(VCPU_ImmGenerator* vlSelf);
VL_ATTR_COLD void VCPU_DCache___stl_sequent__TOP__CPU__mem_stage__U_DCache__0(VCPU_DCache* vlSelf);
void VCPU_Forwarding___nba_sequent__TOP__CPU__ex_stage__forward_inst__0(VCPU_Forwarding* vlSelf);
void VCPU_IF___nba_sequent__TOP__CPU__if_stage__1(VCPU_IF* vlSelf);
void VCPU_Memory___ico_sequent__TOP__CPU__memory_inst__0(VCPU_Memory* vlSelf);
void VCPU_ALU___nba_sequent__TOP__CPU__ex_stage__ALU_Instance__0(VCPU_ALU* vlSelf);
void VCPU_BRU___nba_sequent__TOP__CPU__ex_stage__BRU_Instance__0(VCPU_BRU* vlSelf);
void VCPU_Branch_Predictor___ico_sequent__TOP__CPU__if_stage__BP__0(VCPU_Branch_Predictor* vlSelf);
void VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__1(VCPU_DCache* vlSelf);
void VCPU_CPU___nba_sequent__TOP__CPU__0(VCPU_CPU* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCPU___024root___stl_sequent__TOP__0(vlSelf);
        VCPU___024root____Vm_traceActivitySetAll(vlSelf);
        VCPU_Controller___nba_sequent__TOP__CPU__id_stage__controller_inst__0((&vlSymsp->TOP__CPU__id_stage__controller_inst));
        VCPU_ExpAddressHandler___nba_sequent__TOP__CPU__memory_inst__exp_inst__0((&vlSymsp->TOP__CPU__memory_inst__exp_inst));
        VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__2((&vlSymsp->TOP__CPU__if_stage__U_Cache));
        VCPU_Hazard___nba_sequent__TOP__CPU__id_stage__hazard_inst__0((&vlSymsp->TOP__CPU__id_stage__hazard_inst));
        VCPU_ImmGenerator___nba_sequent__TOP__CPU__if_stage__ImmGen__0((&vlSymsp->TOP__CPU__if_stage__ImmGen));
        VCPU_DCache___stl_sequent__TOP__CPU__mem_stage__U_DCache__0((&vlSymsp->TOP__CPU__mem_stage__U_DCache));
        VCPU_Forwarding___nba_sequent__TOP__CPU__ex_stage__forward_inst__0((&vlSymsp->TOP__CPU__ex_stage__forward_inst));
        VCPU_IF___nba_sequent__TOP__CPU__if_stage__1((&vlSymsp->TOP__CPU__if_stage));
        VCPU_Memory___ico_sequent__TOP__CPU__memory_inst__0((&vlSymsp->TOP__CPU__memory_inst));
        VCPU_ALU___nba_sequent__TOP__CPU__ex_stage__ALU_Instance__0((&vlSymsp->TOP__CPU__ex_stage__ALU_Instance));
        VCPU_BRU___nba_sequent__TOP__CPU__ex_stage__BRU_Instance__0((&vlSymsp->TOP__CPU__ex_stage__BRU_Instance));
        VCPU_Branch_Predictor___ico_sequent__TOP__CPU__if_stage__BP__0((&vlSymsp->TOP__CPU__if_stage__BP));
        VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__1((&vlSymsp->TOP__CPU__mem_stage__U_DCache));
        VCPU_CPU___nba_sequent__TOP__CPU__0((&vlSymsp->TOP__CPU));
    }
}

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___stl_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Seg1Out = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Seg1;
    vlSelfRef.Led2Out = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Led2;
    vlSelfRef.Led1Out = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Led1;
    vlSelfRef.inst_out = vlSymsp->TOP__CPU__if_id_reg.__PVT__inst;
    vlSelfRef.pc_out = vlSymsp->TOP__CPU__pc_module.__PVT__pc;
    if ((0xbffU >= (IData)(vlSelfRef.VgaAddress))) {
        vlSelfRef.ColorOut = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__color
            [vlSelfRef.VgaAddress];
        vlSelfRef.CharOut = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__chars
            [vlSelfRef.VgaAddress];
    } else {
        vlSelfRef.ColorOut = 0U;
        vlSelfRef.CharOut = 0U;
    }
}
