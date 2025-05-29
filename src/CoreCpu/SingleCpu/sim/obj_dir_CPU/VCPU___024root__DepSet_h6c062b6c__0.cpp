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

void VCPU___024root___eval_ico(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_ico\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VCPU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
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

VL_INLINE_OPT void VCPU___024root___ico_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ico_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Pc_test = vlSymsp->TOP__CPU__pc_sl.PcReg;
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

VL_INLINE_OPT void VCPU___024root___ico_sequent__TOP__1(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ico_sequent__TOP__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Inst_test = vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction;
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
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.memclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__memclk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.memclk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__memclk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__memclk__0 = vlSelfRef.memclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VCPU_MemorySim___nba_sequent__TOP__CPU__memory_sl__mem_inst__0(VCPU_MemorySim* vlSelf);
void VCPU_MMIO___nba_sequent__TOP__CPU__memory_sl__mmio_inst__0(VCPU_MMIO* vlSelf);
void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf);
void VCPU_RegisterFile___nba_sequent__TOP__CPU__regf_sl__0(VCPU_RegisterFile* vlSelf);
void VCPU_MMIO___nba_sequent__TOP__CPU__memory_sl__mmio_inst__1(VCPU_MMIO* vlSelf);
void VCPU___024root___nba_sequent__TOP__1(VCPU___024root* vlSelf);
void VCPU_ProgramCounter___nba_sequent__TOP__CPU__pc_sl__0(VCPU_ProgramCounter* vlSelf);
void VCPU___024root___nba_sequent__TOP__2(VCPU___024root* vlSelf);

void VCPU___024root___eval_nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_MemorySim___nba_sequent__TOP__CPU__memory_sl__mem_inst__0((&vlSymsp->TOP__CPU__memory_sl__mem_inst));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VCPU_MMIO___nba_sequent__TOP__CPU__memory_sl__mmio_inst__0((&vlSymsp->TOP__CPU__memory_sl__mmio_inst));
        VCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_RegisterFile___nba_sequent__TOP__CPU__regf_sl__0((&vlSymsp->TOP__CPU__regf_sl));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_MMIO___nba_sequent__TOP__CPU__memory_sl__mmio_inst__1((&vlSymsp->TOP__CPU__memory_sl__mmio_inst));
        VCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_ProgramCounter___nba_sequent__TOP__CPU__pc_sl__0((&vlSymsp->TOP__CPU__pc_sl));
        VCPU___024root___nba_sequent__TOP__2(vlSelf);
        VCPU_ExpAddressHandler___ico_sequent__TOP__CPU__memory_sl__exp_inst__0((&vlSymsp->TOP__CPU__memory_sl__exp_inst));
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_InstCache___ico_sequent__TOP__CPU__icache_sl__0((&vlSymsp->TOP__CPU__icache_sl));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        VCPU___024root___ico_sequent__TOP__1(vlSelf);
        VCPU_Controller___ico_sequent__TOP__CPU__constrol_sl__0((&vlSymsp->TOP__CPU__constrol_sl));
        VCPU_ImmGenerator___ico_sequent__TOP__CPU__imm_sl__0((&vlSymsp->TOP__CPU__imm_sl));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU_RegisterFile___ico_sequent__TOP__CPU__regf_sl__0((&vlSymsp->TOP__CPU__regf_sl));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        VCPU_BRUSin___ico_sequent__TOP__CPU__Bru_sl__0((&vlSymsp->TOP__CPU__Bru_sl));
        VCPU_ALU___ico_sequent__TOP__CPU__alu_sl__0((&vlSymsp->TOP__CPU__alu_sl));
        VCPU_CPU___ico_sequent__TOP__CPU__1((&vlSymsp->TOP__CPU));
        VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__0((&vlSymsp->TOP__CPU__memory_sl));
        VCPU_DataCache___ico_sequent__TOP__CPU__dcache_sl__0((&vlSymsp->TOP__CPU__dcache_sl));
        VCPU_CPU___ico_sequent__TOP__CPU__2((&vlSymsp->TOP__CPU));
        VCPU_Memory___ico_sequent__TOP__CPU__memory_sl__1((&vlSymsp->TOP__CPU__memory_sl));
    }
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Led1 = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Led1;
    vlSelfRef.Led2 = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Led2;
    vlSelfRef.Seg1Out = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Seg1;
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__1(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xbffU >= (IData)(vlSelfRef.VgaAddress))) {
        vlSelfRef.CharOut = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__chars
            [vlSelfRef.VgaAddress];
        vlSelfRef.ColorOut = vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__color
            [vlSelfRef.VgaAddress];
    } else {
        vlSelfRef.CharOut = 0U;
        vlSelfRef.ColorOut = 0U;
    }
}

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__2(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__2\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Pc_test = vlSymsp->TOP__CPU__pc_sl.PcReg;
}
