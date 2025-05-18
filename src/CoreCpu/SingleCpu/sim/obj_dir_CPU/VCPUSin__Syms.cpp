// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCPUSin__pch.h"
#include "VCPUSin.h"
#include "VCPUSin___024root.h"
#include "VCPUSin_CPUSin.h"
#include "VCPUSin_Memory.h"
#include "VCPUSin_MemorySim.h"

// FUNCTIONS
VCPUSin__Syms::~VCPUSin__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_CPUSin);
    __Vhier.remove(&__Vscope_CPUSin, &__Vscope_CPUSin__memory_sl);
    __Vhier.remove(&__Vscope_CPUSin__memory_sl, &__Vscope_CPUSin__memory_sl__mem_inst);

}

VCPUSin__Syms::VCPUSin__Syms(VerilatedContext* contextp, const char* namep, VCPUSin* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__CPUSin{this, Verilated::catName(namep, "CPUSin")}
    , TOP__CPUSin__memory_sl{this, Verilated::catName(namep, "CPUSin.memory_sl")}
    , TOP__CPUSin__memory_sl__mem_inst{this, Verilated::catName(namep, "CPUSin.memory_sl.mem_inst")}
{
        // Check resources
        Verilated::stackCheck(249);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.CPUSin = &TOP__CPUSin;
    TOP__CPUSin.memory_sl = &TOP__CPUSin__memory_sl;
    TOP__CPUSin__memory_sl.mem_inst = &TOP__CPUSin__memory_sl__mem_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__CPUSin.__Vconfigure(true);
    TOP__CPUSin__memory_sl.__Vconfigure(true);
    TOP__CPUSin__memory_sl__mem_inst.__Vconfigure(true);
    // Setup scopes
    __Vscope_CPUSin.configure(this, name(), "CPUSin", "CPUSin", "CPUSin", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_CPUSin__memory_sl.configure(this, name(), "CPUSin.memory_sl", "memory_sl", "Memory", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_CPUSin__memory_sl__mem_inst.configure(this, name(), "CPUSin.memory_sl.mem_inst", "mem_inst", "MemorySim", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_CPUSin);
    __Vhier.add(&__Vscope_CPUSin, &__Vscope_CPUSin__memory_sl);
    __Vhier.add(&__Vscope_CPUSin__memory_sl, &__Vscope_CPUSin__memory_sl__mem_inst);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_CPUSin__memory_sl__mem_inst.varInsert(__Vfinal,"mem", &(TOP__CPUSin__memory_sl__mem_inst.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,16383,0 ,31,0);
    }
}
