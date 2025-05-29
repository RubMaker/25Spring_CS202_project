// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPU__SYMS_H_
#define VERILATED_VCPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCPU.h"

// INCLUDE MODULE CLASSES
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

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCPU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCPU* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCPU___024root                 TOP;
    VCPU_CPU                       TOP__CPU;
    VCPU_BRUSin                    TOP__CPU__Bru_sl;
    VCPU_Mux2                      TOP__CPU__Src1ForAlu_sl;
    VCPU_Mux2                      TOP__CPU__Src2ForAlu_sl;
    VCPU_Mux3                      TOP__CPU__WriteBack_sl;
    VCPU_ALU                       TOP__CPU__alu_sl;
    VCPU_Controller                TOP__CPU__constrol_sl;
    VCPU_DataCache                 TOP__CPU__dcache_sl;
    VCPU_InstCache                 TOP__CPU__icache_sl;
    VCPU_ImmGenerator              TOP__CPU__imm_sl;
    VCPU_Memory                    TOP__CPU__memory_sl;
    VCPU_ExpAddressHandler         TOP__CPU__memory_sl__exp_inst;
    VCPU_MMIO                      TOP__CPU__memory_sl__mmio_inst;
    VCPU_MemorySim                 TOP__CPU__memory_sl__mem_inst;
    VCPU_ProgramCounter            TOP__CPU__pc_sl;
    VCPU_RegisterFile              TOP__CPU__regf_sl;

    // SCOPE NAMES
    VerilatedScope __Vscope_CPU;
    VerilatedScope __Vscope_CPU__memory_sl;
    VerilatedScope __Vscope_CPU__memory_sl__mem_inst;
    VerilatedScope __Vscope_CPU__pc_sl;
    VerilatedScope __Vscope_CPU__regf_sl;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    VCPU__Syms(VerilatedContext* contextp, const char* namep, VCPU* modelp);
    ~VCPU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
