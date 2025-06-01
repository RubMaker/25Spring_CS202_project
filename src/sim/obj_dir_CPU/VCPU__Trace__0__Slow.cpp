// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CPU", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"mem_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+249,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+255,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"Led1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"Led2Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+259,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+261,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__pc_module__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_stage__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_id_reg__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__id_stage__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__id_ex_reg__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_mem_reg__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__mem_stage__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__mem_wb_reg__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__reg_file__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"mem_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+249,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+238,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"Led1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"Led2Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+263,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"IF_ID_Write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"Stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"ICacheStall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"DCacheStall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"PC_Write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"new_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"IF_PcOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"IF_InstOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"IF_ID_PcOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"IF_ID_InstOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"ID_PcOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"ID_Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"ID_Imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"ID_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ID_ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ID_MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"ID_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"ID_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"ID_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"ID_ALU_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"ID_BRU_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"ID_LS_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+28,0,"ID_Rs1Addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"ID_Rs2Addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"ID_EX_PcOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"ID_EX_Rs1Out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"ID_EX_Rs2Out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"ID_EX_RdOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"ID_EX_ImmOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"ID_EX_rs1_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"ID_EX_rs2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"ID_EX_RegWriteOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"ID_EX_ALUSrcOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"ID_EX_MemtoRegOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"ID_EX_MemReadOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"ID_EX_MemWriteOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"ID_EX_BranchOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"ID_EX_ALU_opOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"ID_EX_BRU_opOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"ID_EX_LS_opOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"EX_ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"EX_BranchTaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"EX_OldPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"EX_MEM_ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"EX_MEM_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"EX_MEM_RdOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+52,0,"EX_MEM_WB_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"MEM_ctrl_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+266,0,"MEM_Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"MEM_MemAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"MEM_MemWriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"MEM_MemWb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"MEM_WB_Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"MEM_WB_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"MEM_WB_Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"Rs1Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"Rs2Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"ExtMemInst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"MemData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pc_module", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__pc_module__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("if_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__if_stage__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("if_id_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__if_id_reg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("id_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__id_stage__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("id_ex_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__id_ex_reg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ex_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ex_mem_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__ex_mem_reg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mem_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__mem_stage__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mem_wb_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__mem_wb_reg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__reg_file__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("memory_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__pc_module__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__pc_module__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"PC_Write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"icache_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"dcache_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"new_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_stage__BP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_stage__ImmGen__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_stage__U_Cache__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_stage__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__if_stage__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"IF_ID_Write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"IStall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"ExtMemInst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"PcOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"InstOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"Imm32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+277,0,"BpPredictFail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"BpTargetPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"BpPredictResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"CacheInst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"BranchInst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"Predict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("BP", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__if_stage__BP__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ImmGen", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__if_stage__ImmGen__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("U_Cache", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__if_stage__U_Cache__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_id_reg__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__if_id_reg__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"IF_ID_Write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"DStall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"IStall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__id_stage__controller_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__id_stage__hazard_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__id_stage__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__id_stage__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"Inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"PcIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"PcOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"Rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"Imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"MemtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"PcWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"ALU_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"BRU_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"LS_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+40,0,"ID_EX_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"ID_EX_Rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"IF_ID_Write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"Rs1Addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"Rs2Addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"Stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("controller_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__id_stage__controller_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("hazard_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__id_stage__hazard_inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__id_ex_reg__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__id_ex_reg__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"PcIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"Rs1In",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"Rs2In",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"RdIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"ImmIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"rs1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"rs2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+19,0,"RegWriteIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ALUSrcIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"MemtoRegIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"MemReadIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"MemWriteIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"BranchIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"ALU_opIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"BRU_opIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"LS_opIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+264,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"PcOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"Rs1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"Rs2Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"RdOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"ImmOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"rs1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"rs2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"RegWriteOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"ALUSrcOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"MemtoRegOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"MemReadOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"MemWriteOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"BranchOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"ALU_opOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"BRU_opOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"LS_opOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"Pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"Rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"Rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"Imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"ALU_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"BRU_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"LS_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__forward_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__ALU_Instance__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__BRU_Instance__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+31,0,"Rs1Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"Rs2Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"ex_mem_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+52,0,"ex_mem_regwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"ex_mem_aluresult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"mem_wb_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+55,0,"mem_wb_regwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"wb_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"Imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"BRU_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"Pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ALU_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"BranchTaken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"OldPc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"forwarded_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"forwarded_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"AluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("forward_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__forward_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+66,0,"ALUIn2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ALU_Instance", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__ALU_Instance__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+47,0,"BruTaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"BruNewPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("BRU_Instance", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__BRU_Instance__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_mem_reg__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__ex_mem_reg__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"ALUres_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"data2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"MEM_ctrl_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"WB_ctrl_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"ALUres_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"data2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"MEM_ctrl_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+52,0,"WB_ctrl_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"ALUres",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"MEM_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+52,0,"WB_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__mem_stage__U_DCache__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__mem_stage__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__mem_stage__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"AluResult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"LS_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+266,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+264,0,"DStall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"MemData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"MemAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"MemWriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"MemWb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"CacheDataOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("U_DCache", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__mem_stage__U_DCache__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__mem_wb_reg__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__mem_wb_reg__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"MemResult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"MemRegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"MemRd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"WbData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"WbRegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"WbRd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__reg_file__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__reg_file__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+68+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+100,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__mem_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__exp_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__mmio_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+246,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"clkA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"clkB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"AddressA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"AddressB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"EnableWriteB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+249,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+233,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"Led1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"Led2Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+262,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+263,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+268,0,"ReadDataA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"ReadDataB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"ADDR_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"ADDR_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"ReDataA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"ReDataB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"DataIo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"ExpData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"IsMMIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"IsExcept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"EnWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__mem_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("exp_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__exp_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mmio_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__mmio_inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_stage__BP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__if_stage__BP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+280,0,"BHT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"RAS_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"predict",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"excp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"sret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+102,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+238,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"old_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"old_branch_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"old_predict_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+277,0,"old_predict",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"old_actual",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"old_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"target_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"predict_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"predict_fail",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"Sepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("History_Table", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+104+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("Return_Addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+120+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+136,0,"RASTop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+137,0,"StartFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"TargetPCInt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"PCPlus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"PredictResultReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+241,0,"TableAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+241,0,"UpdateAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_stage__ImmGen__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__if_stage__ImmGen__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+60,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"ImmData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__if_stage__U_Cache__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__if_stage__U_Cache__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"Addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"ExtMemInst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"Inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"IStall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+282,0,"REFILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+139,0,"State",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("CacheData", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+140+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CacheTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+156+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 25,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CacheValid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+172+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+242,0,"ReqTag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+241,0,"Index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"WordOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+272,0,"Hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"InstReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"StallReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__id_stage__controller_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__id_stage__controller_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+10,0,"Inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"Rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"Imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"MemtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"ALU_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"BRU_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"LS_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__id_stage__hazard_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__id_stage__hazard_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+40,0,"ID_EX_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"ID_EX_Rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"IF_Rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"IF_Rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"Stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"PcWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"IF_ID_Write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__forward_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__forward_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+35,0,"EX_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"EX_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+52,0,"MEM_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"EX_MEM_AluResult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"WB_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+55,0,"WB_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"WB_Result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"Rs1Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"Rs2Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"Forwarded_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"Forwarded_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__ALU_Instance__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__ALU_Instance__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+64,0,"ALU_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"ALU_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"ALU_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+189,0,"Mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__BRU_Instance__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__ex_stage__BRU_Instance__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+64,0,"Rs1Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"Rs2Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"BRUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"Pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"Imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"BranchTaken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"OldPc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__mem_stage__U_DCache__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__mem_stage__U_DCache__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+244,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"Addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"LS_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+270,0,"DataOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+264,0,"DStall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"MemData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"MemAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"MemWriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"MemWb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"BLOCK_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+286,0,"STATE_MISS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+287,0,"STATE_UPDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+191,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("Cache", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+192+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 58,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+224,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+225,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"addr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+227,0,"cache_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"cache_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+229,0,"cache_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"proc_MemData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,0,"updated_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__mem_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__mem_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+245,0,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"clkb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+8,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+9,0,"write_datab",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"web",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"dataa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"datab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"dataa_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"datab_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"ShowData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__exp_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__exp_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+238,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"ExpData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__mmio_inst__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__CPU__memory_inst__mmio_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+246,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"Switch1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"Switch2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+249,0,"Button1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"Button2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"Button3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"Button4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"Button5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"Seg1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"Led1Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"Led2Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+254,0,"VgaAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+262,0,"CharOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+263,0,"ColorOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+271,0,"DataIo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"Led1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"Led2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"Seg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+276,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_top\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_register\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VCPU___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VCPU___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VCPU___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU___024root__trace_const_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_const_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_const_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_const_0_sub_0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+277,(0U));
    bufp->fullIData(oldp+278,(0xfU),32);
    bufp->fullIData(oldp+279,(2U),32);
    bufp->fullIData(oldp+280,(4U),32);
    bufp->fullBit(oldp+281,(0U));
    bufp->fullBit(oldp+282,(1U));
    bufp->fullIData(oldp+283,(0x1aU),32);
    bufp->fullCData(oldp+284,(0U),2);
    bufp->fullIData(oldp+285,(0x3bU),32);
    bufp->fullCData(oldp+286,(1U),2);
    bufp->fullCData(oldp+287,(2U),2);
}

VL_ATTR_COLD void VCPU___024root__trace_full_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_full_0_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_0_sub_0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__TargetPCInt),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemWriteData),32);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__PredictResultReg));
    bufp->fullBit(oldp+5,((0xffffU == (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                       >> 0x10U))));
    bufp->fullBit(oldp+6,((0x1c09U == (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                       >> 0x10U))));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__CPU__memory_inst.__PVT__EnWB));
    bufp->fullSData(oldp+8,((0x3fffU & (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                        >> 2U))),14);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__CPU__memory_inst.__Vcellinp__mem_inst__write_datab),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__CPU__if_id_reg.__PVT__inst),32);
    bufp->fullBit(oldp+11,((1U & (~ (IData)(vlSymsp->TOP__CPU__id_stage__hazard_inst.__PVT__Stall)))));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__CPU__id_stage__hazard_inst.__PVT__Stall));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__StallReg));
    bufp->fullIData(oldp+14,(vlSymsp->TOP__CPU__if_stage.__PVT__InstOut),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__CPU__if_id_reg.__PVT__pc),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__CPU__id_stage.__PVT__PcOut),32);
    bufp->fullCData(oldp+17,((0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__Imm),32);
    bufp->fullBit(oldp+19,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__RegWrite));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__ALUSrc));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__MemtoReg));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__MemRead));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__MemWrite));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__Branch));
    bufp->fullCData(oldp+25,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__ALU_op),4);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__BRU_op),3);
    bufp->fullCData(oldp+27,(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__LS_op),3);
    bufp->fullCData(oldp+28,((0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+29,((0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Pc),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs1),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2),32);
    bufp->fullCData(oldp+33,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rd),5);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm),32);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__rs1),5);
    bufp->fullCData(oldp+36,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__rs2),5);
    bufp->fullBit(oldp+37,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__RegWrite));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemtoReg));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__Branch));
    bufp->fullCData(oldp+43,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op),4);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__BRU_op),3);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op),3);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__CPU__ex_stage__ALU_Instance.__PVT__ALU_result),32);
    bufp->fullBit(oldp+47,(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken));
    bufp->fullIData(oldp+48,(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__OldPc),32);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres),32);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__data2),32);
    bufp->fullCData(oldp+51,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__rd),5);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__WB_ctrl));
    bufp->fullCData(oldp+53,(vlSymsp->TOP__CPU__ex_mem_reg.__PVT__MEM_ctrl),5);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Data),32);
    bufp->fullBit(oldp+55,(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__RegWrite));
    bufp->fullCData(oldp+56,(vlSymsp->TOP__CPU__mem_wb_reg.__PVT__Rd),5);
    bufp->fullIData(oldp+57,(((0U == (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 0xfU)))
                               ? 0U : vlSymsp->TOP__CPU__reg_file.__PVT__regs
                              [(0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+58,(((0U == (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 0x14U)))
                               ? 0U : vlSymsp->TOP__CPU__reg_file.__PVT__regs
                              [(0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__CPU__if_stage__ImmGen.__PVT__ImmData),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg),32);
    bufp->fullBit(oldp+61,(vlSymsp->TOP__CPU__if_stage.__PVT__Jump));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__CPU__if_stage.__PVT__BranchInst));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__CPU__if_stage.__PVT__Predict));
    bufp->fullIData(oldp+64,(vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A),32);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B),32);
    bufp->fullIData(oldp+66,(((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                               ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                               : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)),32);
    bufp->fullCData(oldp+67,(((((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) 
                                << 3U) | ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead) 
                                          << 2U)) | 
                              ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemtoReg) 
                               << 1U))),5);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[0]),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[1]),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[2]),32);
    bufp->fullIData(oldp+71,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[3]),32);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[4]),32);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[5]),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[6]),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[7]),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[8]),32);
    bufp->fullIData(oldp+77,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[9]),32);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[10]),32);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[11]),32);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[12]),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[13]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[14]),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[15]),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[16]),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[17]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[18]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[19]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[20]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[21]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[22]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[23]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[24]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[25]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[26]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[27]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[28]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[29]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[30]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__CPU__reg_file.__PVT__regs[31]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__CPU__reg_file.__PVT__i),32);
    bufp->fullCData(oldp+101,(vlSymsp->TOP__CPU__if_stage.__Vcellinp__BP__rs1),5);
    bufp->fullCData(oldp+102,((0x1fU & (vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__InstReg 
                                        >> 7U))),5);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Sepc),32);
    bufp->fullCData(oldp+104,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[0]),2);
    bufp->fullCData(oldp+105,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[1]),2);
    bufp->fullCData(oldp+106,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[2]),2);
    bufp->fullCData(oldp+107,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[3]),2);
    bufp->fullCData(oldp+108,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[4]),2);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[5]),2);
    bufp->fullCData(oldp+110,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[6]),2);
    bufp->fullCData(oldp+111,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[7]),2);
    bufp->fullCData(oldp+112,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[8]),2);
    bufp->fullCData(oldp+113,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[9]),2);
    bufp->fullCData(oldp+114,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[10]),2);
    bufp->fullCData(oldp+115,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[11]),2);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[12]),2);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[13]),2);
    bufp->fullCData(oldp+118,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[14]),2);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__History_Table[15]),2);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[0]),32);
    bufp->fullIData(oldp+121,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[1]),32);
    bufp->fullIData(oldp+122,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[2]),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[3]),32);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[4]),32);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[5]),32);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[6]),32);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[7]),32);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[8]),32);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[9]),32);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[10]),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[11]),32);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[12]),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[13]),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[14]),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__Return_Addr[15]),32);
    bufp->fullCData(oldp+136,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__RASTop),4);
    bufp->fullBit(oldp+137,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__StartFlag));
    bufp->fullIData(oldp+138,(vlSymsp->TOP__CPU__if_stage__BP.__PVT__i),32);
    bufp->fullBit(oldp+139,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__State));
    bufp->fullIData(oldp+140,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[0]),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[1]),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[2]),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[3]),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[4]),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[5]),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[6]),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[7]),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[8]),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[9]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[10]),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[11]),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[12]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[13]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[14]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheData[15]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[0]),26);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[1]),26);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[2]),26);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[3]),26);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[4]),26);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[5]),26);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[6]),26);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[7]),26);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[8]),26);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[9]),26);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[10]),26);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[11]),26);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[12]),26);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[13]),26);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[14]),26);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag[15]),26);
    bufp->fullBit(oldp+172,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[0]));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[1]));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[2]));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[3]));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[4]));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[5]));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[6]));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[7]));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[8]));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[9]));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[10]));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[11]));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[12]));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[13]));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[14]));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid[15]));
    bufp->fullIData(oldp+188,(vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__I),32);
    bufp->fullQData(oldp+189,(vlSymsp->TOP__CPU__ex_stage__ALU_Instance.__PVT__Mult),64);
    bufp->fullCData(oldp+191,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__state),2);
    bufp->fullQData(oldp+192,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[0]),59);
    bufp->fullQData(oldp+194,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[1]),59);
    bufp->fullQData(oldp+196,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[2]),59);
    bufp->fullQData(oldp+198,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[3]),59);
    bufp->fullQData(oldp+200,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[4]),59);
    bufp->fullQData(oldp+202,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[5]),59);
    bufp->fullQData(oldp+204,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[6]),59);
    bufp->fullQData(oldp+206,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[7]),59);
    bufp->fullQData(oldp+208,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[8]),59);
    bufp->fullQData(oldp+210,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[9]),59);
    bufp->fullQData(oldp+212,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[10]),59);
    bufp->fullQData(oldp+214,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[11]),59);
    bufp->fullQData(oldp+216,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[12]),59);
    bufp->fullQData(oldp+218,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[13]),59);
    bufp->fullQData(oldp+220,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[14]),59);
    bufp->fullQData(oldp+222,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache[15]),59);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__i),32);
    bufp->fullCData(oldp+225,((0xfU & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                       >> 2U))),4);
    bufp->fullIData(oldp+226,((vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                               >> 6U)),26);
    bufp->fullBit(oldp+227,((1U & (IData)((vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache
                                           [(0xfU & 
                                             (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                              >> 2U))] 
                                           >> 0x3aU)))));
    bufp->fullIData(oldp+228,((0x3ffffffU & (IData)(
                                                    (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__Cache
                                                     [
                                                     (0xfU 
                                                      & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                         >> 2U))] 
                                                     >> 0x20U)))),26);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__cache_data),32);
    bufp->fullBit(oldp+230,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__hit));
    bufp->fullCData(oldp+231,(vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Led1),8);
    bufp->fullCData(oldp+232,(vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Led2),8);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__Seg1),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__dataa),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__datab),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__dataa_temp),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__datab_temp),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__CPU__pc_module.__PVT__pc),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__CPU__memory_inst__exp_inst.__PVT__ExpData),32);
    bufp->fullIData(oldp+240,(((IData)(4U) + vlSymsp->TOP__CPU__pc_module.__PVT__pc)),32);
    bufp->fullCData(oldp+241,((0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                       >> 2U))),4);
    bufp->fullIData(oldp+242,((vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                               >> 6U)),26);
    bufp->fullSData(oldp+243,((0x3fffU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                          >> 2U))),14);
    bufp->fullBit(oldp+244,(vlSelfRef.clk));
    bufp->fullBit(oldp+245,(vlSelfRef.mem_clk));
    bufp->fullBit(oldp+246,(vlSelfRef.rst));
    bufp->fullCData(oldp+247,(vlSelfRef.Switch1),8);
    bufp->fullCData(oldp+248,(vlSelfRef.Switch2),8);
    bufp->fullBit(oldp+249,(vlSelfRef.Button1));
    bufp->fullBit(oldp+250,(vlSelfRef.Button2));
    bufp->fullBit(oldp+251,(vlSelfRef.Button3));
    bufp->fullBit(oldp+252,(vlSelfRef.Button4));
    bufp->fullBit(oldp+253,(vlSelfRef.Button5));
    bufp->fullSData(oldp+254,(vlSelfRef.VgaAddress),12);
    bufp->fullIData(oldp+255,(vlSelfRef.pc_out),32);
    bufp->fullIData(oldp+256,(vlSelfRef.inst_out),32);
    bufp->fullCData(oldp+257,(vlSelfRef.Led1Out),8);
    bufp->fullCData(oldp+258,(vlSelfRef.Led2Out),8);
    bufp->fullIData(oldp+259,(vlSelfRef.Seg1Out),32);
    bufp->fullCData(oldp+260,(vlSelfRef.CharOut),8);
    bufp->fullCData(oldp+261,(vlSelfRef.ColorOut),8);
    bufp->fullCData(oldp+262,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                                ? vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__chars
                               [vlSelfRef.VgaAddress]
                                : 0U)),8);
    bufp->fullCData(oldp+263,(((0xbffU >= (IData)(vlSelfRef.VgaAddress))
                                ? vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__color
                               [vlSelfRef.VgaAddress]
                                : 0U)),8);
    bufp->fullBit(oldp+264,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall));
    bufp->fullIData(oldp+265,(((IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)
                                ? vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__OldPc
                                : ((IData)(4U) + vlSymsp->TOP__CPU__pc_module.__PVT__pc))),32);
    bufp->fullIData(oldp+266,(((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead)
                                ? vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DataOut
                                : vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)),32);
    bufp->fullBit(oldp+267,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemWb));
    bufp->fullIData(oldp+268,(((0x1c09U == (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                            >> 0x10U))
                                ? vlSymsp->TOP__CPU__memory_inst__exp_inst.__PVT__ExpData
                                : vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__dataa)),32);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB),32);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DataOut),32);
    bufp->fullIData(oldp+271,(((0xffffff00U == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
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
                                                : (
                                                   (0xffffff20U 
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
    bufp->fullBit(oldp+272,((vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheValid
                             [(0xfU & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                       >> 2U))] & (
                                                   vlSymsp->TOP__CPU__if_stage__U_Cache.__PVT__CacheTag
                                                   [
                                                   (0xfU 
                                                    & (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                       >> 2U))] 
                                                   == 
                                                   (vlSymsp->TOP__CPU__pc_module.__PVT__pc 
                                                    >> 6U)))));
    bufp->fullIData(oldp+273,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__proc_MemData),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__updated_data),32);
    bufp->fullIData(oldp+275,(vlSymsp->TOP__CPU__memory_inst__mem_inst.mem
                              [1U]),32);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__CPU__memory_inst__mmio_inst.__PVT__unnamedblk1__DOT__i),32);
}
