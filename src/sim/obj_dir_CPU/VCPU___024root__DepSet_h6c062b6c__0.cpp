// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU__Syms.h"
#include "VCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__ico(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval_triggers__ico(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_triggers__ico\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VCPU___024root___ico_sequent__TOP__0(VCPU___024root* vlSelf);
void VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__0(VCPU_DCache* vlSelf);
void VCPU_Branch_Predictor___ico_sequent__TOP__CPU__if_stage__BP__0(VCPU_Branch_Predictor* vlSelf);
void VCPU_Memory___ico_sequent__TOP__CPU__memory_inst__0(VCPU_Memory* vlSelf);
void VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__1(VCPU_DCache* vlSelf);

void VCPU___024root___eval_ico(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_ico\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VCPU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__0((&vlSymsp->TOP__CPU__mem_stage__U_DCache));
        VCPU_Branch_Predictor___ico_sequent__TOP__CPU__if_stage__BP__0((&vlSymsp->TOP__CPU__if_stage__BP));
        VCPU_Memory___ico_sequent__TOP__CPU__memory_inst__0((&vlSymsp->TOP__CPU__memory_inst));
        VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__1((&vlSymsp->TOP__CPU__mem_stage__U_DCache));
    }
}

VL_INLINE_OPT void VCPU___024root___ico_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ico_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval_triggers__act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_triggers__act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.mem_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_clk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.mem_clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_clk__0 = vlSelfRef.mem_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VCPU_Branch_Predictor___nba_sequent__TOP__CPU__if_stage__BP__0(VCPU_Branch_Predictor* vlSelf);
void VCPU_ID_EX___nba_sequent__TOP__CPU__id_ex_reg__0(VCPU_ID_EX* vlSelf);
void VCPU_EX_MEM___nba_sequent__TOP__CPU__ex_mem_reg__0(VCPU_EX_MEM* vlSelf);
void VCPU_Registers___nba_sequent__TOP__CPU__reg_file__0(VCPU_Registers* vlSelf);
void VCPU_MEM_WB___nba_sequent__TOP__CPU__mem_wb_reg__0(VCPU_MEM_WB* vlSelf);
void VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__0(VCPU_ICache* vlSelf);
void VCPU_IF_ID___nba_sequent__TOP__CPU__if_id_reg__0(VCPU_IF_ID* vlSelf);
void VCPU_PC___nba_sequent__TOP__CPU__pc_module__0(VCPU_PC* vlSelf);
void VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__0(VCPU_DCache* vlSelf);
void VCPU_ID___nba_sequent__TOP__CPU__id_stage__0(VCPU_ID* vlSelf);
void VCPU_ID_EX___nba_sequent__TOP__CPU__id_ex_reg__1(VCPU_ID_EX* vlSelf);
void VCPU_EX_MEM___nba_sequent__TOP__CPU__ex_mem_reg__1(VCPU_EX_MEM* vlSelf);
void VCPU_IF___nba_sequent__TOP__CPU__if_stage__0(VCPU_IF* vlSelf);
void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf);
void VCPU_Controller___nba_sequent__TOP__CPU__id_stage__controller_inst__0(VCPU_Controller* vlSelf);
void VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__1(VCPU_ICache* vlSelf);
void VCPU_IF_ID___nba_sequent__TOP__CPU__if_id_reg__1(VCPU_IF_ID* vlSelf);
void VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__1(VCPU_DCache* vlSelf);
void VCPU_Forwarding___nba_sequent__TOP__CPU__ex_stage__forward_inst__0(VCPU_Forwarding* vlSelf);
void VCPU_Hazard___nba_sequent__TOP__CPU__id_stage__hazard_inst__0(VCPU_Hazard* vlSelf);
void VCPU_ImmGenerator___nba_sequent__TOP__CPU__if_stage__ImmGen__0(VCPU_ImmGenerator* vlSelf);
void VCPU_IF___nba_sequent__TOP__CPU__if_stage__1(VCPU_IF* vlSelf);
void VCPU_ALU___nba_sequent__TOP__CPU__ex_stage__ALU_Instance__0(VCPU_ALU* vlSelf);
void VCPU_BRU___nba_sequent__TOP__CPU__ex_stage__BRU_Instance__0(VCPU_BRU* vlSelf);
void VCPU_MemorySim___nba_sequent__TOP__CPU__memory_inst__mem_inst__0(VCPU_MemorySim* vlSelf);
void VCPU_MMIO___nba_sequent__TOP__CPU__memory_inst__mmio_inst__0(VCPU_MMIO* vlSelf);
void VCPU___024root___nba_sequent__TOP__1(VCPU___024root* vlSelf);
void VCPU_MMIO___nba_sequent__TOP__CPU__memory_inst__mmio_inst__1(VCPU_MMIO* vlSelf);
void VCPU___024root___nba_sequent__TOP__2(VCPU___024root* vlSelf);
void VCPU_PC___nba_sequent__TOP__CPU__pc_module__1(VCPU_PC* vlSelf);
void VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__2(VCPU_DCache* vlSelf);
void VCPU___024root___nba_sequent__TOP__3(VCPU___024root* vlSelf);
void VCPU_ExpAddressHandler___nba_sequent__TOP__CPU__memory_inst__exp_inst__0(VCPU_ExpAddressHandler* vlSelf);
void VCPU_CPU___nba_sequent__TOP__CPU__0(VCPU_CPU* vlSelf);
void VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__2(VCPU_ICache* vlSelf);
void VCPU_Memory___nba_sequent__TOP__CPU__memory_inst__0(VCPU_Memory* vlSelf);
void VCPU_Memory___nba_comb__TOP__CPU__memory_inst__0(VCPU_Memory* vlSelf);

void VCPU___024root___eval_nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_Branch_Predictor___nba_sequent__TOP__CPU__if_stage__BP__0((&vlSymsp->TOP__CPU__if_stage__BP));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VCPU_ID_EX___nba_sequent__TOP__CPU__id_ex_reg__0((&vlSymsp->TOP__CPU__id_ex_reg));
        VCPU_EX_MEM___nba_sequent__TOP__CPU__ex_mem_reg__0((&vlSymsp->TOP__CPU__ex_mem_reg));
        VCPU_Registers___nba_sequent__TOP__CPU__reg_file__0((&vlSymsp->TOP__CPU__reg_file));
        VCPU_MEM_WB___nba_sequent__TOP__CPU__mem_wb_reg__0((&vlSymsp->TOP__CPU__mem_wb_reg));
        VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__0((&vlSymsp->TOP__CPU__if_stage__U_Cache));
        VCPU_IF_ID___nba_sequent__TOP__CPU__if_id_reg__0((&vlSymsp->TOP__CPU__if_id_reg));
        VCPU_PC___nba_sequent__TOP__CPU__pc_module__0((&vlSymsp->TOP__CPU__pc_module));
        VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__0((&vlSymsp->TOP__CPU__mem_stage__U_DCache));
        VCPU_ID___nba_sequent__TOP__CPU__id_stage__0((&vlSymsp->TOP__CPU__id_stage));
        VCPU_ID_EX___nba_sequent__TOP__CPU__id_ex_reg__1((&vlSymsp->TOP__CPU__id_ex_reg));
        VCPU_EX_MEM___nba_sequent__TOP__CPU__ex_mem_reg__1((&vlSymsp->TOP__CPU__ex_mem_reg));
        VCPU_IF___nba_sequent__TOP__CPU__if_stage__0((&vlSymsp->TOP__CPU__if_stage));
        VCPU___024root___nba_sequent__TOP__0(vlSelf);
        VCPU_Controller___nba_sequent__TOP__CPU__id_stage__controller_inst__0((&vlSymsp->TOP__CPU__id_stage__controller_inst));
        VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__1((&vlSymsp->TOP__CPU__if_stage__U_Cache));
        VCPU_IF_ID___nba_sequent__TOP__CPU__if_id_reg__1((&vlSymsp->TOP__CPU__if_id_reg));
        VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__1((&vlSymsp->TOP__CPU__mem_stage__U_DCache));
        VCPU_Forwarding___nba_sequent__TOP__CPU__ex_stage__forward_inst__0((&vlSymsp->TOP__CPU__ex_stage__forward_inst));
        VCPU_Hazard___nba_sequent__TOP__CPU__id_stage__hazard_inst__0((&vlSymsp->TOP__CPU__id_stage__hazard_inst));
        VCPU_ImmGenerator___nba_sequent__TOP__CPU__if_stage__ImmGen__0((&vlSymsp->TOP__CPU__if_stage__ImmGen));
        VCPU_IF___nba_sequent__TOP__CPU__if_stage__1((&vlSymsp->TOP__CPU__if_stage));
        VCPU_ALU___nba_sequent__TOP__CPU__ex_stage__ALU_Instance__0((&vlSymsp->TOP__CPU__ex_stage__ALU_Instance));
        VCPU_BRU___nba_sequent__TOP__CPU__ex_stage__BRU_Instance__0((&vlSymsp->TOP__CPU__ex_stage__BRU_Instance));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_MemorySim___nba_sequent__TOP__CPU__memory_inst__mem_inst__0((&vlSymsp->TOP__CPU__memory_inst__mem_inst));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        VCPU_MMIO___nba_sequent__TOP__CPU__memory_inst__mmio_inst__0((&vlSymsp->TOP__CPU__memory_inst__mmio_inst));
        VCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_MMIO___nba_sequent__TOP__CPU__memory_inst__mmio_inst__1((&vlSymsp->TOP__CPU__memory_inst__mmio_inst));
        VCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_PC___nba_sequent__TOP__CPU__pc_module__1((&vlSymsp->TOP__CPU__pc_module));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__2((&vlSymsp->TOP__CPU__mem_stage__U_DCache));
        VCPU___024root___nba_sequent__TOP__3(vlSelf);
        VCPU_ExpAddressHandler___nba_sequent__TOP__CPU__memory_inst__exp_inst__0((&vlSymsp->TOP__CPU__memory_inst__exp_inst));
        VCPU_CPU___nba_sequent__TOP__CPU__0((&vlSymsp->TOP__CPU));
        VCPU_ICache___nba_sequent__TOP__CPU__if_stage__U_Cache__2((&vlSymsp->TOP__CPU__if_stage__U_Cache));
        VCPU_Branch_Predictor___ico_sequent__TOP__CPU__if_stage__BP__0((&vlSymsp->TOP__CPU__if_stage__BP));
        VCPU_Memory___nba_sequent__TOP__CPU__memory_inst__0((&vlSymsp->TOP__CPU__memory_inst));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_Memory___nba_comb__TOP__CPU__memory_inst__0((&vlSymsp->TOP__CPU__memory_inst));
        VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__1((&vlSymsp->TOP__CPU__mem_stage__U_DCache));
    }
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.inst_out = vlSymsp->TOP__CPU__if_id_reg.__PVT__inst;
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__1(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Led1Out = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Led1;
    vlSelfRef.Led2Out = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Led2;
    vlSelfRef.Seg1Out = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Seg1;
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__2(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__2\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xbffU >= (IData)(vlSelfRef.VgaAddress))) {
        vlSelfRef.CharOut = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__chars
            [vlSelfRef.VgaAddress];
        vlSelfRef.ColorOut = vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__color
            [vlSelfRef.VgaAddress];
    } else {
        vlSelfRef.CharOut = 0U;
        vlSelfRef.ColorOut = 0U;
    }
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__3(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__3\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc_out = vlSymsp->TOP__CPU__pc_module.__PVT__pc;
}
