// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCPU__pch.h"
#include "VCPU.h"
#include "VCPU___024root.h"
#include "VCPU_CPU.h"
#include "VCPU_ProgramCounter.h"
#include "VCPU_InstCache.h"
#include "VCPU_ImmGenerator.h"
#include "VCPU_Controller.h"
#include "VCPU_RegisterFile.h"
#include "VCPU_Mux2.h"
#include "VCPU_ALU.h"
#include "VCPU_BRUSin.h"
#include "VCPU_DataCache.h"
#include "VCPU_Mux3.h"
#include "VCPU_Memory.h"
#include "VCPU_MemorySim.h"
#include "VCPU_ExpAddressHandler.h"
#include "VCPU_MMIO.h"

// FUNCTIONS
VCPU__Syms::~VCPU__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_CPU);
    __Vhier.remove(&__Vscope_CPU, &__Vscope_CPU__memory_sl);
    __Vhier.remove(&__Vscope_CPU, &__Vscope_CPU__pc_sl);
    __Vhier.remove(&__Vscope_CPU, &__Vscope_CPU__regf_sl);
    __Vhier.remove(&__Vscope_CPU__memory_sl, &__Vscope_CPU__memory_sl__mem_inst);

}

VCPU__Syms::VCPU__Syms(VerilatedContext* contextp, const char* namep, VCPU* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__CPU{this, Verilated::catName(namep, "CPU")}
    , TOP__CPU__Bru_sl{this, Verilated::catName(namep, "CPU.Bru_sl")}
    , TOP__CPU__Src1ForAlu_sl{this, Verilated::catName(namep, "CPU.Src1ForAlu_sl")}
    , TOP__CPU__Src2ForAlu_sl{this, Verilated::catName(namep, "CPU.Src2ForAlu_sl")}
    , TOP__CPU__WriteBack_sl{this, Verilated::catName(namep, "CPU.WriteBack_sl")}
    , TOP__CPU__alu_sl{this, Verilated::catName(namep, "CPU.alu_sl")}
    , TOP__CPU__constrol_sl{this, Verilated::catName(namep, "CPU.constrol_sl")}
    , TOP__CPU__dcache_sl{this, Verilated::catName(namep, "CPU.dcache_sl")}
    , TOP__CPU__icache_sl{this, Verilated::catName(namep, "CPU.icache_sl")}
    , TOP__CPU__imm_sl{this, Verilated::catName(namep, "CPU.imm_sl")}
    , TOP__CPU__memory_sl{this, Verilated::catName(namep, "CPU.memory_sl")}
    , TOP__CPU__memory_sl__exp_inst{this, Verilated::catName(namep, "CPU.memory_sl.exp_inst")}
    , TOP__CPU__memory_sl__mmio_inst{this, Verilated::catName(namep, "CPU.memory_sl.mmio_inst")}
    , TOP__CPU__memory_sl__mem_inst{this, Verilated::catName(namep, "CPU.memory_sl.mem_inst")}
    , TOP__CPU__pc_sl{this, Verilated::catName(namep, "CPU.pc_sl")}
    , TOP__CPU__regf_sl{this, Verilated::catName(namep, "CPU.regf_sl")}
{
        // Check resources
        Verilated::stackCheck(269);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.CPU = &TOP__CPU;
    TOP__CPU.__PVT__Bru_sl = &TOP__CPU__Bru_sl;
    TOP__CPU.__PVT__Src1ForAlu_sl = &TOP__CPU__Src1ForAlu_sl;
    TOP__CPU.__PVT__Src2ForAlu_sl = &TOP__CPU__Src2ForAlu_sl;
    TOP__CPU.__PVT__WriteBack_sl = &TOP__CPU__WriteBack_sl;
    TOP__CPU.__PVT__alu_sl = &TOP__CPU__alu_sl;
    TOP__CPU.__PVT__constrol_sl = &TOP__CPU__constrol_sl;
    TOP__CPU.__PVT__dcache_sl = &TOP__CPU__dcache_sl;
    TOP__CPU.__PVT__icache_sl = &TOP__CPU__icache_sl;
    TOP__CPU.__PVT__imm_sl = &TOP__CPU__imm_sl;
    TOP__CPU.memory_sl = &TOP__CPU__memory_sl;
    TOP__CPU__memory_sl.__PVT__exp_inst = &TOP__CPU__memory_sl__exp_inst;
    TOP__CPU__memory_sl.__PVT__mmio_inst = &TOP__CPU__memory_sl__mmio_inst;
    TOP__CPU__memory_sl.mem_inst = &TOP__CPU__memory_sl__mem_inst;
    TOP__CPU.pc_sl = &TOP__CPU__pc_sl;
    TOP__CPU.regf_sl = &TOP__CPU__regf_sl;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__CPU.__Vconfigure(true);
    TOP__CPU__Bru_sl.__Vconfigure(true);
    TOP__CPU__Src1ForAlu_sl.__Vconfigure(true);
    TOP__CPU__Src2ForAlu_sl.__Vconfigure(false);
    TOP__CPU__WriteBack_sl.__Vconfigure(true);
    TOP__CPU__alu_sl.__Vconfigure(true);
    TOP__CPU__constrol_sl.__Vconfigure(true);
    TOP__CPU__dcache_sl.__Vconfigure(true);
    TOP__CPU__icache_sl.__Vconfigure(true);
    TOP__CPU__imm_sl.__Vconfigure(true);
    TOP__CPU__memory_sl.__Vconfigure(true);
    TOP__CPU__memory_sl__exp_inst.__Vconfigure(true);
    TOP__CPU__memory_sl__mmio_inst.__Vconfigure(true);
    TOP__CPU__memory_sl__mem_inst.__Vconfigure(true);
    TOP__CPU__pc_sl.__Vconfigure(true);
    TOP__CPU__regf_sl.__Vconfigure(true);
    // Setup scopes
    __Vscope_CPU.configure(this, name(), "CPU", "CPU", "CPU", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_CPU__memory_sl.configure(this, name(), "CPU.memory_sl", "memory_sl", "Memory", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_CPU__memory_sl__mem_inst.configure(this, name(), "CPU.memory_sl.mem_inst", "mem_inst", "MemorySim", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_CPU__pc_sl.configure(this, name(), "CPU.pc_sl", "pc_sl", "ProgramCounter", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_CPU__regf_sl.configure(this, name(), "CPU.regf_sl", "regf_sl", "RegisterFile", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_CPU);
    __Vhier.add(&__Vscope_CPU, &__Vscope_CPU__memory_sl);
    __Vhier.add(&__Vscope_CPU, &__Vscope_CPU__pc_sl);
    __Vhier.add(&__Vscope_CPU, &__Vscope_CPU__regf_sl);
    __Vhier.add(&__Vscope_CPU__memory_sl, &__Vscope_CPU__memory_sl__mem_inst);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_CPU__memory_sl__mem_inst.varInsert(__Vfinal,"mem", &(TOP__CPU__memory_sl__mem_inst.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,16383,0 ,31,0);
        __Vscope_CPU__pc_sl.varInsert(__Vfinal,"PcReg", &(TOP__CPU__pc_sl.PcReg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_CPU__regf_sl.varInsert(__Vfinal,"Registers", &(TOP__CPU__regf_sl.Registers), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,31 ,31,0);
    }
}
