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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__TargetPCInt),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemWriteData),32);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__PredictResultReg));
        bufp->chgBit(oldp+4,((0xffffU == (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                          >> 0x10U))));
        bufp->chgBit(oldp+5,((0x1c09U == (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                          >> 0x10U))));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__CPU__memory_inst.__PVT__EnWB));
        bufp->chgSData(oldp+7,((0x3fffU & (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                           >> 2U))),14);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__CPU__memory_inst.__Vcellinp__mem_inst__write_datab),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+9,(vlSymsp->TOP__CPU__if_id_reg.__PVT__inst),32);
        bufp->chgBit(oldp+10,((1U & (~ (IData)(vlSymsp->TOP__CPU__id_stage__hazard_inst.__PVT__Stall)))));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__CPU__id_stage__hazard_inst.__PVT__Stall));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__StallReg));
        bufp->chgIData(oldp+13,(vlSymsp->TOP__CPU__if_stage.__PVT__InstOut),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__CPU__if_id_reg.__PVT__pc),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__CPU__id_stage.__PVT__PcOut),32);
        bufp->chgCData(oldp+16,((0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__Imm),32);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__RegWrite));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__ALUSrc));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__MemtoReg));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__MemRead));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__MemWrite));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__Branch));
        bufp->chgCData(oldp+24,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__ALU_op),4);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__BRU_op),3);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__LS_op),3);
        bufp->chgCData(oldp+27,((0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+28,((0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Pc),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs1),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2),32);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rd),5);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm),32);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__rs1),5);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__rs2),5);
        bufp->chgBit(oldp+36,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__RegWrite));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemtoReg));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Branch));
        bufp->chgCData(oldp+42,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op),4);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op),3);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op),3);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__CPU__ex_stage__ALU_Instance.__PVT__ALU_result),32);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken));
        bufp->chgIData(oldp+47,(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__OldPc),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__data2),32);
        bufp->chgCData(oldp+50,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__rd),5);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__WB_ctrl));
        bufp->chgCData(oldp+52,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__MEM_ctrl),5);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Data),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__RegWrite));
        bufp->chgCData(oldp+55,(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Rd),5);
        bufp->chgIData(oldp+56,(((0U == (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 0xfU)))
                                  ? 0U : vlSymsp->TOP__CPU__reg_file.__PVT__regs
                                 [(0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                            >> 0xfU))])),32);
        bufp->chgIData(oldp+57,(((0U == (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 0x14U)))
                                  ? 0U : vlSymsp->TOP__CPU__reg_file.__PVT__regs
                                 [(0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                            >> 0x14U))])),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__CPU__if_stage__ImmGen.__PVT__ImmData),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg),32);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__CPU__if_stage.__PVT__Jump));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__CPU__if_stage.__PVT__BranchInst));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__CPU__if_stage.__PVT__Predict));
        bufp->chgIData(oldp+63,(vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B),32);
        bufp->chgIData(oldp+65,(((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                  ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                  : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)),32);
        bufp->chgCData(oldp+66,(((((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) 
                                   << 3U) | ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead) 
                                             << 2U)) 
                                 | ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemtoReg) 
                                    << 1U))),5);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[0]),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[1]),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[2]),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[3]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[4]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[5]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[6]),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[7]),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[8]),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[9]),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[10]),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[11]),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[12]),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[13]),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[14]),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[15]),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[16]),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[17]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[18]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[19]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[20]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[21]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[22]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[23]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[24]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[25]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[26]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[27]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[28]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[29]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[30]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[31]),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__CPU__reg_file.__PVT__i),32);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__CPU__if_stage.__Vcellinp__BP__rs1),5);
        bufp->chgCData(oldp+101,((0x1fU & (vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg 
                                           >> 7U))),5);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Sepc),32);
        bufp->chgCData(oldp+103,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[0]),2);
        bufp->chgCData(oldp+104,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[1]),2);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[2]),2);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[3]),2);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[4]),2);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[5]),2);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[6]),2);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[7]),2);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[8]),2);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[9]),2);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[10]),2);
        bufp->chgCData(oldp+114,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[11]),2);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[12]),2);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[13]),2);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[14]),2);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[15]),2);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[0]),32);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[1]),32);
        bufp->chgIData(oldp+121,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[2]),32);
        bufp->chgIData(oldp+122,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[3]),32);
        bufp->chgIData(oldp+123,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[4]),32);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[5]),32);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[6]),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[7]),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[8]),32);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[9]),32);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[10]),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[11]),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[12]),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[13]),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[14]),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[15]),32);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__RASTop),4);
        bufp->chgBit(oldp+136,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__StartFlag));
        bufp->chgIData(oldp+137,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__i),32);
        bufp->chgBit(oldp+138,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__State));
        bufp->chgIData(oldp+139,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[0]),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[1]),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[2]),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[3]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[4]),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[5]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[6]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[7]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[8]),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[9]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[10]),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[11]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[12]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[13]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[14]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[15]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[0]),26);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[1]),26);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[2]),26);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[3]),26);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[4]),26);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[5]),26);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[6]),26);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[7]),26);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[8]),26);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[9]),26);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[10]),26);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[11]),26);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[12]),26);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[13]),26);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[14]),26);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[15]),26);
        bufp->chgBit(oldp+171,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[0]));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[1]));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[2]));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[3]));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[4]));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[5]));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[6]));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[7]));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[8]));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[9]));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[10]));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[11]));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[12]));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[13]));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[14]));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[15]));
        bufp->chgIData(oldp+187,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__I),32);
        bufp->chgQData(oldp+188,(vlSymsp->TOP__CPU__ex_stage__ALU_Instance.__PVT__Mult),64);
        bufp->chgCData(oldp+190,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__state),2);
        bufp->chgQData(oldp+191,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[0]),59);
        bufp->chgQData(oldp+193,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[1]),59);
        bufp->chgQData(oldp+195,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[2]),59);
        bufp->chgQData(oldp+197,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[3]),59);
        bufp->chgQData(oldp+199,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[4]),59);
        bufp->chgQData(oldp+201,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[5]),59);
        bufp->chgQData(oldp+203,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[6]),59);
        bufp->chgQData(oldp+205,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[7]),59);
        bufp->chgQData(oldp+207,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[8]),59);
        bufp->chgQData(oldp+209,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[9]),59);
        bufp->chgQData(oldp+211,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[10]),59);
        bufp->chgQData(oldp+213,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[11]),59);
        bufp->chgQData(oldp+215,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[12]),59);
        bufp->chgQData(oldp+217,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[13]),59);
        bufp->chgQData(oldp+219,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[14]),59);
        bufp->chgQData(oldp+221,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[15]),59);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__i),32);
        bufp->chgCData(oldp+224,((0xfU & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                          >> 2U))),4);
        bufp->chgIData(oldp+225,((vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                  >> 6U)),26);
        bufp->chgBit(oldp+226,((1U & (IData)((vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache
                                              [(0xfU 
                                                & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                   >> 2U))] 
                                              >> 0x3aU)))));
        bufp->chgIData(oldp+227,((0x3ffffffU & (IData)(
                                                       (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache
                                                        [
                                                        (0xfU 
                                                         & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                            >> 2U))] 
                                                        >> 0x20U)))),26);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__cache_data),32);
        bufp->chgBit(oldp+229,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__hit));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+230,(vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Led1),8);
        bufp->chgCData(oldp+231,(vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Led2),8);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Seg1),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__dataa),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__datab),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__dataa_temp),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__datab_temp),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+237,(vlSymsp->TOP__CPU__pc_module.__PVT__pc),32);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__CPU__memory_inst__exp_inst.__PVT__ExpData),32);
        bufp->chgIData(oldp+239,(((IData)(4U) + vlSymsp->TOP__CPU__pc_module.__PVT__pc)),32);
        bufp->chgCData(oldp+240,((0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                          >> 2U))),4);
        bufp->chgIData(oldp+241,((vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                  >> 6U)),26);
        bufp->chgSData(oldp+242,((0x3fffU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                             >> 2U))),14);
    }
    bufp->chgBit(oldp+243,(vlSelfRef.clk));
    bufp->chgBit(oldp+244,(vlSelfRef.mem_clk));
    bufp->chgBit(oldp+245,(vlSelfRef.rst));
    bufp->chgCData(oldp+246,(vlSelfRef.Switch1),8);
    bufp->chgCData(oldp+247,(vlSelfRef.Switch2),8);
    bufp->chgBit(oldp+248,(vlSelfRef.Button1));
    bufp->chgBit(oldp+249,(vlSelfRef.Button2));
    bufp->chgBit(oldp+250,(vlSelfRef.Button3));
    bufp->chgBit(oldp+251,(vlSelfRef.Button4));
    bufp->chgBit(oldp+252,(vlSelfRef.Button5));
    bufp->chgSData(oldp+253,(vlSelfRef.VgaAddress),12);
    bufp->chgIData(oldp+254,(vlSelfRef.pc_out),32);
    bufp->chgIData(oldp+255,(vlSelfRef.inst_out),32);
    bufp->chgCData(oldp+256,(vlSelfRef.Led1Out),8);
    bufp->chgCData(oldp+257,(vlSelfRef.Led2Out),8);
    bufp->chgIData(oldp+258,(vlSelfRef.Seg1Out),32);
    bufp->chgCData(oldp+259,(vlSelfRef.CharOut),8);
    bufp->chgCData(oldp+260,(vlSelfRef.ColorOut),8);
    bufp->chgCData(oldp+261,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                               ? vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__chars
                              [vlSelfRef.VgaAddress]
                               : 0U)),8);
    bufp->chgCData(oldp+262,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                               ? vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__color
                              [vlSelfRef.VgaAddress]
                               : 0U)),8);
    bufp->chgBit(oldp+263,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall));
    bufp->chgIData(oldp+264,(((IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)
                               ? vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__OldPc
                               : ((IData)(4U) + vlSymsp->TOP__CPU__pc_module.__PVT__pc))),32);
    bufp->chgIData(oldp+265,(((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead)
                               ? vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DataOut
                               : vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)),32);
    bufp->chgBit(oldp+266,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemWb));
    bufp->chgIData(oldp+267,(((0x1c09U == (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                           >> 0x10U))
                               ? vlSymsp->TOP__CPU__memory_inst__exp_inst.__PVT__ExpData
                               : vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__dataa)),32);
    bufp->chgIData(oldp+268,(vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB),32);
    bufp->chgIData(oldp+269,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DataOut),32);
    bufp->chgIData(oldp+270,(((0xffffff00U == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                               ? (IData)(vlSelfRef.Switch1)
                               : ((0xffffff04U == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                   ? (IData)(vlSelfRef.Switch2)
                                   : ((0xffffff14U 
                                       == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                       ? ((IData)(vlSelfRef.Button1)
                                           ? 1U : 0U)
                                       : ((0xffffff18U 
                                           == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                           ? ((IData)(vlSelfRef.Button2)
                                               ? 1U
                                               : 0U)
                                           : ((0xffffff1cU 
                                               == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                               ? ((IData)(vlSelfRef.Button3)
                                                   ? 1U
                                                   : 0U)
                                               : ((0xffffff20U 
                                                   == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                   ? 
                                                  ((IData)(vlSelfRef.Button4)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xffffff24U 
                                                    == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                    ? 
                                                   ((IData)(vlSelfRef.Button5)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)))))))),32);
    bufp->chgBit(oldp+271,((vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid
                            [(0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                      >> 2U))] & (vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag
                                                  [
                                                  (0xfU 
                                                   & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                      >> 2U))] 
                                                  == 
                                                  (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                   >> 6U)))));
    bufp->chgIData(oldp+272,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__proc_MemData),32);
    bufp->chgIData(oldp+273,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__updated_data),32);
    bufp->chgIData(oldp+274,(vlSymsp->TOP__CPU__memory_inst__mem_inst.mem
                             [1U]),32);
    bufp->chgIData(oldp+275,(vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__unnamedblk1__DOT__i),32);
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
