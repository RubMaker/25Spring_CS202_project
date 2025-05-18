// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPUSin__Syms.h"


void VCPUSin___024root__trace_chg_0_sub_0(VCPUSin___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPUSin___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_chg_0\n"); );
    // Init
    VCPUSin___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUSin___024root*>(voidSelf);
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPUSin___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCPUSin___024root__trace_chg_0_sub_0(VCPUSin___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_chg_0_sub_0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__hit));
        bufp->chgIData(oldp+2,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+4,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__CPUSin.__PVT__UartMemAddress),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__CPUSin.__PVT__UartMemData),32);
        bufp->chgIData(oldp+7,(((IData)(vlSymsp->TOP__CPUSin.__PVT__Mem2Reg)
                                 ? vlSymsp->TOP__CPUSin.__PVT__AluResult
                                 : vlSymsp->TOP__CPUSin.__PVT__DataFromCache)),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__CPUSin.__PVT__DataFromCache),32);
        bufp->chgBit(oldp+9,((0xffffU == (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                                          >> 0x10U))));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__EnWB));
        bufp->chgSData(oldp+11,((0x3fffU & (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                                            >> 2U))),14);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__CPUSin__memory_sl.__Vcellinp__mem_inst__write_datab),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+13,(vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__dataa),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__datab),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__dataa_temp),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__datab_temp),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+18,(vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg),32);
        bufp->chgQData(oldp+19,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[0]),44);
        bufp->chgQData(oldp+21,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[1]),44);
        bufp->chgQData(oldp+23,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[2]),44);
        bufp->chgQData(oldp+25,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[3]),44);
        bufp->chgQData(oldp+27,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[4]),44);
        bufp->chgQData(oldp+29,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[5]),44);
        bufp->chgQData(oldp+31,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[6]),44);
        bufp->chgQData(oldp+33,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[7]),44);
        bufp->chgQData(oldp+35,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[8]),44);
        bufp->chgQData(oldp+37,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[9]),44);
        bufp->chgQData(oldp+39,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[10]),44);
        bufp->chgQData(oldp+41,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[11]),44);
        bufp->chgQData(oldp+43,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[12]),44);
        bufp->chgQData(oldp+45,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[13]),44);
        bufp->chgQData(oldp+47,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[14]),44);
        bufp->chgQData(oldp+49,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache[15]),44);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__unnamedblk2__DOT__i),32);
        bufp->chgQData(oldp+52,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[0]),43);
        bufp->chgQData(oldp+54,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[1]),43);
        bufp->chgQData(oldp+56,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[2]),43);
        bufp->chgQData(oldp+58,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[3]),43);
        bufp->chgQData(oldp+60,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[4]),43);
        bufp->chgQData(oldp+62,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[5]),43);
        bufp->chgQData(oldp+64,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[6]),43);
        bufp->chgQData(oldp+66,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[7]),43);
        bufp->chgQData(oldp+68,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[8]),43);
        bufp->chgQData(oldp+70,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[9]),43);
        bufp->chgQData(oldp+72,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[10]),43);
        bufp->chgQData(oldp+74,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[11]),43);
        bufp->chgQData(oldp+76,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[12]),43);
        bufp->chgQData(oldp+78,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[13]),43);
        bufp->chgQData(oldp+80,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[14]),43);
        bufp->chgQData(oldp+82,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__cache[15]),43);
        bufp->chgCData(oldp+84,((0xfU & (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                         >> 2U))),4);
        bufp->chgSData(oldp+85,((0x3ffU & (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                           >> 6U))),10);
        bufp->chgBit(oldp+86,((0x1c09U == (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                           >> 0x10U))));
        bufp->chgIData(oldp+87,(vlSymsp->TOP__CPUSin.__PVT__icache_sl__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[0]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[1]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[2]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[3]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[4]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[5]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[6]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[7]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[8]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[9]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[10]),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[11]),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[12]),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[13]),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[14]),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[15]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[16]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[17]),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[18]),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[19]),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[20]),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[21]),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[22]),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[23]),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[24]),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[25]),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[26]),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[27]),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[28]),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[29]),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[30]),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__Registers[31]),32);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__CPUSin.__PVT__regf_sl__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+121,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__ExpData),32);
        bufp->chgBit(oldp+122,((0x1c09U == (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                            >> 0x10U))));
        bufp->chgSData(oldp+123,((0x3fffU & (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                             >> 2U))),14);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+124,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Led1),8);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Led2),8);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__Seg1),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+127,(vlSymsp->TOP__CPUSin.__PVT__FetchInstr),32);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataA),32);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__CPUSin.__PVT__ImmData),32);
        bufp->chgCData(oldp+130,((0x1fU & (vlSymsp->TOP__CPUSin.__PVT__FetchInstr 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+131,((0x1fU & (vlSymsp->TOP__CPUSin.__PVT__FetchInstr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+132,((0x1fU & (vlSymsp->TOP__CPUSin.__PVT__FetchInstr 
                                           >> 7U))),5);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__CPUSin.__PVT__Reg1Data),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__CPUSin.__PVT__Reg2Data),32);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__CPUSin.__PVT__JumpLink));
        bufp->chgCData(oldp+136,(vlSymsp->TOP__CPUSin.__PVT__BranchOperation),3);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__CPUSin.__PVT__AluOperation),4);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__CPUSin.__PVT__MemoryOperation),3);
        bufp->chgBit(oldp+139,(vlSymsp->TOP__CPUSin.__PVT__MemWriteEn));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__CPUSin.__PVT__MemReadEn));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__CPUSin.__PVT__RegWriteEn));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__CPUSin.__PVT__Mem2Reg));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__CPUSin.__PVT__AluSrc1Selector));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__CPUSin.__PVT__AluSrc2Selector));
        bufp->chgIData(oldp+145,(vlSymsp->TOP__CPUSin.__PVT__AluSrc1),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__CPUSin.__PVT__AluSrc2),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__CPUSin.__PVT__AluResult),32);
        bufp->chgIData(oldp+148,(((IData)(vlSymsp->TOP__CPUSin.__PVT__MemWriteEn)
                                   ? vlSymsp->TOP__CPUSin.__PVT__Reg2Data
                                   : 0U)),32);
        bufp->chgBit(oldp+149,(((4U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                 ? ((2U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                     ? ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation)) 
                                        || (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                            >= vlSymsp->TOP__CPUSin.__PVT__Reg2Data))
                                     : ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                         ? (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                            < vlSymsp->TOP__CPUSin.__PVT__Reg2Data)
                                         : VL_GTES_III(32, vlSymsp->TOP__CPUSin.__PVT__Reg1Data, vlSymsp->TOP__CPUSin.__PVT__Reg2Data)))
                                 : ((2U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                     ? ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                         ? VL_LTS_III(32, vlSymsp->TOP__CPUSin.__PVT__Reg1Data, vlSymsp->TOP__CPUSin.__PVT__Reg2Data)
                                         : (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                            != vlSymsp->TOP__CPUSin.__PVT__Reg2Data))
                                     : ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation)) 
                                        && (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                            == vlSymsp->TOP__CPUSin.__PVT__Reg2Data))))));
        bufp->chgQData(oldp+150,(vlSymsp->TOP__CPUSin.__PVT__alu_sl__DOT__Mul),64);
        bufp->chgQData(oldp+152,(vlSymsp->TOP__CPUSin.__PVT__alu_sl__DOT__SignedInputAExt),64);
        bufp->chgQData(oldp+154,(vlSymsp->TOP__CPUSin.__PVT__alu_sl__DOT__UnsignedInputBExt),64);
        bufp->chgWData(oldp+156,(vlSymsp->TOP__CPUSin.__PVT__alu_sl__DOT__FullMul),128);
        bufp->chgCData(oldp+160,((0xfU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                          >> 2U))),4);
        bufp->chgSData(oldp+161,((0x3ffU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                            >> 6U))),10);
        bufp->chgBit(oldp+162,((0xfU == (0xfU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                 >> 0x10U)))));
    }
    bufp->chgBit(oldp+163,(vlSelfRef.clk));
    bufp->chgBit(oldp+164,(vlSelfRef.memclk));
    bufp->chgBit(oldp+165,(vlSelfRef.reset));
    bufp->chgIData(oldp+166,(vlSelfRef.UartData),32);
    bufp->chgIData(oldp+167,(vlSelfRef.UartAddress),32);
    bufp->chgBit(oldp+168,(vlSelfRef.UartOver));
    bufp->chgCData(oldp+169,(vlSelfRef.Switch1),8);
    bufp->chgCData(oldp+170,(vlSelfRef.Switch2),8);
    bufp->chgBit(oldp+171,(vlSelfRef.Button1));
    bufp->chgBit(oldp+172,(vlSelfRef.Button2));
    bufp->chgBit(oldp+173,(vlSelfRef.Button3));
    bufp->chgBit(oldp+174,(vlSelfRef.Button4));
    bufp->chgBit(oldp+175,(vlSelfRef.Button5));
    bufp->chgCData(oldp+176,(vlSelfRef.Led1),8);
    bufp->chgCData(oldp+177,(vlSelfRef.Led2),8);
    bufp->chgIData(oldp+178,(vlSelfRef.Seg1Out),32);
    bufp->chgSData(oldp+179,(vlSelfRef.VgaAddress),12);
    bufp->chgCData(oldp+180,(vlSelfRef.CharOut),8);
    bufp->chgCData(oldp+181,(vlSelfRef.ColorOut),8);
    bufp->chgIData(oldp+182,(vlSelfRef.Pc_test),32);
    bufp->chgIData(oldp+183,(vlSelfRef.Inst_test),32);
    bufp->chgCData(oldp+184,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                               ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__chars
                              [vlSelfRef.VgaAddress]
                               : 0U)),8);
    bufp->chgCData(oldp+185,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                               ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__mmio_inst__DOT__color
                              [vlSelfRef.VgaAddress]
                               : 0U)),8);
    bufp->chgIData(oldp+186,((((4U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                ? ((2U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                    ? ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation)) 
                                       || (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                           >= vlSymsp->TOP__CPUSin.__PVT__Reg2Data))
                                    : ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                        ? (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                           < vlSymsp->TOP__CPUSin.__PVT__Reg2Data)
                                        : VL_GTES_III(32, vlSymsp->TOP__CPUSin.__PVT__Reg1Data, vlSymsp->TOP__CPUSin.__PVT__Reg2Data)))
                                : ((2U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                    ? ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation))
                                        ? VL_LTS_III(32, vlSymsp->TOP__CPUSin.__PVT__Reg1Data, vlSymsp->TOP__CPUSin.__PVT__Reg2Data)
                                        : (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                           != vlSymsp->TOP__CPUSin.__PVT__Reg2Data))
                                    : ((1U & (IData)(vlSymsp->TOP__CPUSin.__PVT__BranchOperation)) 
                                       && (vlSymsp->TOP__CPUSin.__PVT__Reg1Data 
                                           == vlSymsp->TOP__CPUSin.__PVT__Reg2Data))))
                               ? ((IData)(vlSymsp->TOP__CPUSin.__PVT__JumpLink)
                                   ? (vlSymsp->TOP__CPUSin.__PVT__ImmData 
                                      + vlSymsp->TOP__CPUSin.__PVT__Reg1Data)
                                   : (vlSymsp->TOP__CPUSin.__PVT__ImmData 
                                      + vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg))
                               : ((IData)(4U) + vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg))),32);
    bufp->chgBit(oldp+187,((1U & ((~ (IData)(vlSelfRef.UartOver)) 
                                  | (IData)(vlSymsp->TOP__CPUSin.__PVT__MemWriteEn)))));
    bufp->chgBit(oldp+188,(((IData)((vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                     [(0xfU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                               >> 2U))] 
                                     >> 0x2bU)) & (
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                                               [
                                                               (0xfU 
                                                                & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                                   >> 2U))] 
                                                               >> 0x20U))) 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                       >> 6U))))));
    bufp->chgIData(oldp+189,(((0xfU == (0xfU & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                >> 0x10U)))
                               ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                               : (((IData)((vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                            [(0xfU 
                                              & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                 >> 2U))] 
                                            >> 0x2bU)) 
                                   & ((0x3ffU & (IData)(
                                                        (vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                                         [
                                                         (0xfU 
                                                          & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                             >> 2U))] 
                                                         >> 0x20U))) 
                                      == (0x3ffU & 
                                          (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                           >> 6U))))
                                   ? (IData)(vlSymsp->TOP__CPUSin.__PVT__dcache_sl__DOT__cache
                                             [(0xfU 
                                               & (vlSymsp->TOP__CPUSin.__PVT__AluResult 
                                                  >> 2U))])
                                   : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))),32);
    bufp->chgIData(oldp+190,(((0xffffff00U == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                               ? (IData)(vlSelfRef.Switch1)
                               : ((0xffffff04U == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                   ? (IData)(vlSelfRef.Switch2)
                                   : ((0xffffff14U 
                                       == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                       ? ((IData)(vlSelfRef.Button1)
                                           ? 1U : 0U)
                                       : ((0xffffff18U 
                                           == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                           ? ((IData)(vlSelfRef.Button2)
                                               ? 1U
                                               : 0U)
                                           : ((0xffffff1cU 
                                               == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                               ? ((IData)(vlSelfRef.Button3)
                                                   ? 1U
                                                   : 0U)
                                               : ((0xffffff20U 
                                                   == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                                   ? 
                                                  ((IData)(vlSelfRef.Button4)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xffffff24U 
                                                    == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                                    ? 
                                                   ((IData)(vlSelfRef.Button5)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)))))))),32);
    bufp->chgBit(oldp+191,((1U & (~ (IData)(vlSelfRef.memclk)))));
}

void VCPUSin___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUSin___024root__trace_cleanup\n"); );
    // Init
    VCPUSin___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUSin___024root*>(voidSelf);
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
