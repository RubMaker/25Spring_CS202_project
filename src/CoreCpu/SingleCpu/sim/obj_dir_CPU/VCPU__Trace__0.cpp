// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


void VCPU___024root__trace_chg_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCPU___024root__trace_chg_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_0_sub_0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__CPU__regf_sl.__PVT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgIData(oldp+1,(vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData),32);
        bufp->chgCData(oldp+3,((0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+5,((0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                         >> 7U))),5);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__CPU__constrol_sl.__PVT__JumpLink));
        bufp->chgCData(oldp+7,(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation),3);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation),4);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemoryOperation),3);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemWriteEn));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemReadEn));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__CPU__constrol_sl.__PVT__RegWriteEn));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2));
        bufp->chgCData(oldp+15,(vlSymsp->TOP__CPU__constrol_sl.__PVT__Mem2Reg),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+16,(vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__CPU.__PVT__UartMemAddress),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__CPU.__PVT__UartMemData),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__CPU__alu_sl.__PVT__Result),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__CPU__dcache_sl.__PVT__DataOut),32);
        bufp->chgQData(oldp+23,(vlSymsp->TOP__CPU__alu_sl.__PVT__Mul),64);
        bufp->chgQData(oldp+25,(vlSymsp->TOP__CPU__alu_sl.__PVT__SignedInputAExt),64);
        bufp->chgQData(oldp+27,(vlSymsp->TOP__CPU__alu_sl.__PVT__UnsignedInputBExt),64);
        bufp->chgWData(oldp+29,(vlSymsp->TOP__CPU__alu_sl.__PVT__FullMul),128);
        bufp->chgBit(oldp+33,((0xffffU == (vlSymsp->TOP__CPU.__PVT__UartMemAddress 
                                           >> 0x10U))));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__CPU__memory_sl.__PVT__EnWB));
        bufp->chgSData(oldp+35,((0x3fffU & (vlSymsp->TOP__CPU.__PVT__UartMemAddress 
                                            >> 2U))),14);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__CPU__memory_sl.__Vcellinp__mem_inst__write_datab),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+37,(vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Led1),8);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Led2),8);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__Seg1),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__dataa),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__datab),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__dataa_temp),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__datab_temp),32);
    }
    bufp->chgBit(oldp+44,(vlSelfRef.clk));
    bufp->chgBit(oldp+45,(vlSelfRef.memclk));
    bufp->chgBit(oldp+46,(vlSelfRef.reset));
    bufp->chgIData(oldp+47,(vlSelfRef.UartData),32);
    bufp->chgIData(oldp+48,(vlSelfRef.UartAddress),32);
    bufp->chgBit(oldp+49,(vlSelfRef.UartOver));
    bufp->chgCData(oldp+50,(vlSelfRef.Switch1),8);
    bufp->chgCData(oldp+51,(vlSelfRef.Switch2),8);
    bufp->chgBit(oldp+52,(vlSelfRef.Button1));
    bufp->chgBit(oldp+53,(vlSelfRef.Button2));
    bufp->chgBit(oldp+54,(vlSelfRef.Button3));
    bufp->chgBit(oldp+55,(vlSelfRef.Button4));
    bufp->chgBit(oldp+56,(vlSelfRef.Button5));
    bufp->chgCData(oldp+57,(vlSelfRef.Led1),8);
    bufp->chgCData(oldp+58,(vlSelfRef.Led2),8);
    bufp->chgIData(oldp+59,(vlSelfRef.Seg1Out),32);
    bufp->chgSData(oldp+60,(vlSelfRef.VgaAddress),12);
    bufp->chgCData(oldp+61,(vlSelfRef.CharOut),8);
    bufp->chgCData(oldp+62,(vlSelfRef.ColorOut),8);
    bufp->chgIData(oldp+63,(vlSelfRef.Pc_test),32);
    bufp->chgIData(oldp+64,(vlSelfRef.Inst_test),32);
    bufp->chgCData(oldp+65,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                              ? vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__chars
                             [vlSelfRef.VgaAddress]
                              : 0U)),8);
    bufp->chgCData(oldp+66,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                              ? vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__color
                             [vlSelfRef.VgaAddress]
                              : 0U)),8);
    bufp->chgIData(oldp+67,(vlSymsp->TOP__CPU__pc_sl.PcReg),32);
    bufp->chgBit(oldp+68,(vlSymsp->TOP__CPU.__PVT__RealReset));
    bufp->chgIData(oldp+69,((((4U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
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
                                  : ((IData)(4U) + vlSymsp->TOP__CPU__pc_sl.PcReg)))),32);
    bufp->chgIData(oldp+70,(((0x1c09U == (vlSymsp->TOP__CPU__pc_sl.PcReg 
                                          >> 0x10U))
                              ? vlSymsp->TOP__CPU__memory_sl__exp_inst.__PVT__ExpData
                              : vlSymsp->TOP__CPU__memory_sl__mem_inst.__PVT__dataa)),32);
    bufp->chgIData(oldp+71,(((0U == (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__Mem2Reg))
                              ? vlSymsp->TOP__CPU__alu_sl.__PVT__Result
                              : ((1U == (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__Mem2Reg))
                                  ? vlSymsp->TOP__CPU__dcache_sl.__PVT__DataOut
                                  : ((IData)(4U) + vlSymsp->TOP__CPU__pc_sl.PcReg)))),32);
    bufp->chgIData(oldp+72,(((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                              ? vlSymsp->TOP__CPU__pc_sl.PcReg
                              : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1)),32);
    bufp->chgIData(oldp+73,(((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                              ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                              : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)),32);
    bufp->chgBit(oldp+74,((1U & ((~ (IData)(vlSelfRef.UartOver)) 
                                 | (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemWriteEn)))));
    bufp->chgBit(oldp+75,(vlSymsp->TOP__CPU__pc_sl.__PVT__reset_done));
    bufp->chgIData(oldp+76,(vlSymsp->TOP__CPU__regf_sl.Registers[0]),32);
    bufp->chgIData(oldp+77,(vlSymsp->TOP__CPU__regf_sl.Registers[1]),32);
    bufp->chgIData(oldp+78,(vlSymsp->TOP__CPU__regf_sl.Registers[2]),32);
    bufp->chgIData(oldp+79,(vlSymsp->TOP__CPU__regf_sl.Registers[3]),32);
    bufp->chgIData(oldp+80,(vlSymsp->TOP__CPU__regf_sl.Registers[4]),32);
    bufp->chgIData(oldp+81,(vlSymsp->TOP__CPU__regf_sl.Registers[5]),32);
    bufp->chgIData(oldp+82,(vlSymsp->TOP__CPU__regf_sl.Registers[6]),32);
    bufp->chgIData(oldp+83,(vlSymsp->TOP__CPU__regf_sl.Registers[7]),32);
    bufp->chgIData(oldp+84,(vlSymsp->TOP__CPU__regf_sl.Registers[8]),32);
    bufp->chgIData(oldp+85,(vlSymsp->TOP__CPU__regf_sl.Registers[9]),32);
    bufp->chgIData(oldp+86,(vlSymsp->TOP__CPU__regf_sl.Registers[10]),32);
    bufp->chgIData(oldp+87,(vlSymsp->TOP__CPU__regf_sl.Registers[11]),32);
    bufp->chgIData(oldp+88,(vlSymsp->TOP__CPU__regf_sl.Registers[12]),32);
    bufp->chgIData(oldp+89,(vlSymsp->TOP__CPU__regf_sl.Registers[13]),32);
    bufp->chgIData(oldp+90,(vlSymsp->TOP__CPU__regf_sl.Registers[14]),32);
    bufp->chgIData(oldp+91,(vlSymsp->TOP__CPU__regf_sl.Registers[15]),32);
    bufp->chgIData(oldp+92,(vlSymsp->TOP__CPU__regf_sl.Registers[16]),32);
    bufp->chgIData(oldp+93,(vlSymsp->TOP__CPU__regf_sl.Registers[17]),32);
    bufp->chgIData(oldp+94,(vlSymsp->TOP__CPU__regf_sl.Registers[18]),32);
    bufp->chgIData(oldp+95,(vlSymsp->TOP__CPU__regf_sl.Registers[19]),32);
    bufp->chgIData(oldp+96,(vlSymsp->TOP__CPU__regf_sl.Registers[20]),32);
    bufp->chgIData(oldp+97,(vlSymsp->TOP__CPU__regf_sl.Registers[21]),32);
    bufp->chgIData(oldp+98,(vlSymsp->TOP__CPU__regf_sl.Registers[22]),32);
    bufp->chgIData(oldp+99,(vlSymsp->TOP__CPU__regf_sl.Registers[23]),32);
    bufp->chgIData(oldp+100,(vlSymsp->TOP__CPU__regf_sl.Registers[24]),32);
    bufp->chgIData(oldp+101,(vlSymsp->TOP__CPU__regf_sl.Registers[25]),32);
    bufp->chgIData(oldp+102,(vlSymsp->TOP__CPU__regf_sl.Registers[26]),32);
    bufp->chgIData(oldp+103,(vlSymsp->TOP__CPU__regf_sl.Registers[27]),32);
    bufp->chgIData(oldp+104,(vlSymsp->TOP__CPU__regf_sl.Registers[28]),32);
    bufp->chgIData(oldp+105,(vlSymsp->TOP__CPU__regf_sl.Registers[29]),32);
    bufp->chgIData(oldp+106,(vlSymsp->TOP__CPU__regf_sl.Registers[30]),32);
    bufp->chgIData(oldp+107,(vlSymsp->TOP__CPU__regf_sl.Registers[31]),32);
    bufp->chgIData(oldp+108,(vlSymsp->TOP__CPU__regf_sl.__PVT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+109,(((4U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__BranchOperation))
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
                                        == vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))))));
    bufp->chgIData(oldp+110,(((IData)(4U) + vlSymsp->TOP__CPU__pc_sl.PcReg)),32);
    bufp->chgIData(oldp+111,(((0xffffff00U == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                               ? (IData)(vlSelfRef.Switch1)
                               : ((0xffffff04U == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                   ? (IData)(vlSelfRef.Switch2)
                                   : ((0xffffff14U 
                                       == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                       ? ((IData)(vlSelfRef.Button1)
                                           ? 1U : 0U)
                                       : ((0xffffff18U 
                                           == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                           ? ((IData)(vlSelfRef.Button2)
                                               ? 1U
                                               : 0U)
                                           : ((0xffffff1cU 
                                               == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                               ? ((IData)(vlSelfRef.Button3)
                                                   ? 1U
                                                   : 0U)
                                               : ((0xffffff20U 
                                                   == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                                   ? 
                                                  ((IData)(vlSelfRef.Button4)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xffffff24U 
                                                    == vlSymsp->TOP__CPU.__PVT__UartMemAddress)
                                                    ? 
                                                   ((IData)(vlSelfRef.Button5)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)))))))),32);
    bufp->chgIData(oldp+112,(vlSymsp->TOP__CPU__memory_sl__exp_inst.__PVT__ExpData),32);
    bufp->chgBit(oldp+113,((0x1c09U == (vlSymsp->TOP__CPU__pc_sl.PcReg 
                                        >> 0x10U))));
    bufp->chgSData(oldp+114,((0x3fffU & (vlSymsp->TOP__CPU__pc_sl.PcReg 
                                         >> 2U))),14);
    bufp->chgIData(oldp+115,(vlSymsp->TOP__CPU__memory_sl__mem_inst.mem
                             [1U]),32);
    bufp->chgIData(oldp+116,(vlSymsp->TOP__CPU__memory_sl__mmio_inst.__PVT__unnamedblk1__DOT__i),32);
}

void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_cleanup\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
