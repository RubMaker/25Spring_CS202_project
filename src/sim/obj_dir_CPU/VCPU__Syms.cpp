// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCPU__pch.h"
#include "VCPU.h"
#include "VCPU___024root.h"
#include "VCPU_CPU.h"
#include "VCPU_PC.h"
#include "VCPU_IF.h"
#include "VCPU_IF_ID.h"
#include "VCPU_ID.h"
#include "VCPU_ID_EX.h"
#include "VCPU_EX.h"
#include "VCPU_EX_MEM.h"
#include "VCPU_MEM.h"
#include "VCPU_MEM_WB.h"
#include "VCPU_Registers.h"
#include "VCPU_Memory.h"
#include "VCPU_Branch_Predictor.h"
#include "VCPU_ImmGenerator.h"
#include "VCPU_ICache.h"
#include "VCPU_Controller.h"
#include "VCPU_Hazard.h"
#include "VCPU_Forwarding.h"
#include "VCPU_ALU.h"
#include "VCPU_BRU.h"
#include "VCPU_DCache.h"
#include "VCPU_MemorySim.h"
#include "VCPU_ExpAddressHandler.h"
#include "VCPU_MMIO.h"

// FUNCTIONS
VCPU__Syms::~VCPU__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_CPU);
    __Vhier.remove(&__Vscope_CPU, &__Vscope_CPU__memory_inst);
    __Vhier.remove(&__Vscope_CPU__memory_inst, &__Vscope_CPU__memory_inst__mem_inst);

}

VCPU__Syms::VCPU__Syms(VerilatedContext* contextp, const char* namep, VCPU* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__CPU{this, Verilated::catName(namep, "CPU")}
    , TOP__CPU__ex_mem_reg{this, Verilated::catName(namep, "CPU.ex_mem_reg")}
    , TOP__CPU__ex_stage{this, Verilated::catName(namep, "CPU.ex_stage")}
    , TOP__CPU__ex_stage__ALU_Instance{this, Verilated::catName(namep, "CPU.ex_stage.ALU_Instance")}
    , TOP__CPU__ex_stage__BRU_Instance{this, Verilated::catName(namep, "CPU.ex_stage.BRU_Instance")}
    , TOP__CPU__ex_stage__forward_inst{this, Verilated::catName(namep, "CPU.ex_stage.forward_inst")}
    , TOP__CPU__id_ex_reg{this, Verilated::catName(namep, "CPU.id_ex_reg")}
    , TOP__CPU__id_stage{this, Verilated::catName(namep, "CPU.id_stage")}
    , TOP__CPU__id_stage__controller_inst{this, Verilated::catName(namep, "CPU.id_stage.controller_inst")}
    , TOP__CPU__id_stage__hazard_inst{this, Verilated::catName(namep, "CPU.id_stage.hazard_inst")}
    , TOP__CPU__if_id_reg{this, Verilated::catName(namep, "CPU.if_id_reg")}
    , TOP__CPU__if_stage{this, Verilated::catName(namep, "CPU.if_stage")}
    , TOP__CPU__if_stage__BP{this, Verilated::catName(namep, "CPU.if_stage.BP")}
    , TOP__CPU__if_stage__ImmGen{this, Verilated::catName(namep, "CPU.if_stage.ImmGen")}
    , TOP__CPU__if_stage__U_Cache{this, Verilated::catName(namep, "CPU.if_stage.U_Cache")}
    , TOP__CPU__mem_stage{this, Verilated::catName(namep, "CPU.mem_stage")}
    , TOP__CPU__mem_stage__U_DCache{this, Verilated::catName(namep, "CPU.mem_stage.U_DCache")}
    , TOP__CPU__mem_wb_reg{this, Verilated::catName(namep, "CPU.mem_wb_reg")}
    , TOP__CPU__pc_module{this, Verilated::catName(namep, "CPU.pc_module")}
    , TOP__CPU__reg_file{this, Verilated::catName(namep, "CPU.reg_file")}
    , TOP__CPU__memory_inst{this, Verilated::catName(namep, "CPU.memory_inst")}
    , TOP__CPU__memory_inst__exp_inst{this, Verilated::catName(namep, "CPU.memory_inst.exp_inst")}
    , TOP__CPU__memory_inst__mmio_inst{this, Verilated::catName(namep, "CPU.memory_inst.mmio_inst")}
    , TOP__CPU__memory_inst__mem_inst{this, Verilated::catName(namep, "CPU.memory_inst.mem_inst")}
{
        // Check resources
        Verilated::stackCheck(185);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.CPU = &TOP__CPU;
    TOP__CPU.__PVT__ex_mem_reg = &TOP__CPU__ex_mem_reg;
    TOP__CPU.__PVT__ex_stage = &TOP__CPU__ex_stage;
    TOP__CPU__ex_stage.__PVT__ALU_Instance = &TOP__CPU__ex_stage__ALU_Instance;
    TOP__CPU__ex_stage.__PVT__BRU_Instance = &TOP__CPU__ex_stage__BRU_Instance;
    TOP__CPU__ex_stage.__PVT__forward_inst = &TOP__CPU__ex_stage__forward_inst;
    TOP__CPU.__PVT__id_ex_reg = &TOP__CPU__id_ex_reg;
    TOP__CPU.__PVT__id_stage = &TOP__CPU__id_stage;
    TOP__CPU__id_stage.__PVT__controller_inst = &TOP__CPU__id_stage__controller_inst;
    TOP__CPU__id_stage.__PVT__hazard_inst = &TOP__CPU__id_stage__hazard_inst;
    TOP__CPU.__PVT__if_id_reg = &TOP__CPU__if_id_reg;
    TOP__CPU.__PVT__if_stage = &TOP__CPU__if_stage;
    TOP__CPU__if_stage.__PVT__BP = &TOP__CPU__if_stage__BP;
    TOP__CPU__if_stage.__PVT__ImmGen = &TOP__CPU__if_stage__ImmGen;
    TOP__CPU__if_stage.__PVT__U_Cache = &TOP__CPU__if_stage__U_Cache;
    TOP__CPU.__PVT__mem_stage = &TOP__CPU__mem_stage;
    TOP__CPU__mem_stage.__PVT__U_DCache = &TOP__CPU__mem_stage__U_DCache;
    TOP__CPU.__PVT__mem_wb_reg = &TOP__CPU__mem_wb_reg;
    TOP__CPU.__PVT__pc_module = &TOP__CPU__pc_module;
    TOP__CPU.__PVT__reg_file = &TOP__CPU__reg_file;
    TOP__CPU.memory_inst = &TOP__CPU__memory_inst;
    TOP__CPU__memory_inst.__PVT__exp_inst = &TOP__CPU__memory_inst__exp_inst;
    TOP__CPU__memory_inst.__PVT__mmio_inst = &TOP__CPU__memory_inst__mmio_inst;
    TOP__CPU__memory_inst.mem_inst = &TOP__CPU__memory_inst__mem_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__CPU.__Vconfigure(true);
    TOP__CPU__ex_mem_reg.__Vconfigure(true);
    TOP__CPU__ex_stage.__Vconfigure(true);
    TOP__CPU__ex_stage__ALU_Instance.__Vconfigure(true);
    TOP__CPU__ex_stage__BRU_Instance.__Vconfigure(true);
    TOP__CPU__ex_stage__forward_inst.__Vconfigure(true);
    TOP__CPU__id_ex_reg.__Vconfigure(true);
    TOP__CPU__id_stage.__Vconfigure(true);
    TOP__CPU__id_stage__controller_inst.__Vconfigure(true);
    TOP__CPU__id_stage__hazard_inst.__Vconfigure(true);
    TOP__CPU__if_id_reg.__Vconfigure(true);
    TOP__CPU__if_stage.__Vconfigure(true);
    TOP__CPU__if_stage__BP.__Vconfigure(true);
    TOP__CPU__if_stage__ImmGen.__Vconfigure(true);
    TOP__CPU__if_stage__U_Cache.__Vconfigure(true);
    TOP__CPU__mem_stage.__Vconfigure(true);
    TOP__CPU__mem_stage__U_DCache.__Vconfigure(true);
    TOP__CPU__mem_wb_reg.__Vconfigure(true);
    TOP__CPU__pc_module.__Vconfigure(true);
    TOP__CPU__reg_file.__Vconfigure(true);
    TOP__CPU__memory_inst.__Vconfigure(true);
    TOP__CPU__memory_inst__exp_inst.__Vconfigure(true);
    TOP__CPU__memory_inst__mmio_inst.__Vconfigure(true);
    TOP__CPU__memory_inst__mem_inst.__Vconfigure(true);
    // Setup scopes
    __Vscope_CPU.configure(this, name(), "CPU", "CPU", "CPU", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_CPU__memory_inst.configure(this, name(), "CPU.memory_inst", "memory_inst", "Memory", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_CPU__memory_inst__mem_inst.configure(this, name(), "CPU.memory_inst.mem_inst", "mem_inst", "MemorySim", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_CPU);
    __Vhier.add(&__Vscope_CPU, &__Vscope_CPU__memory_inst);
    __Vhier.add(&__Vscope_CPU__memory_inst, &__Vscope_CPU__memory_inst__mem_inst);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_CPU__memory_inst__mem_inst.varInsert(__Vfinal,"mem", &(TOP__CPU__memory_inst__mem_inst.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,16383,0 ,31,0);
    }
}
