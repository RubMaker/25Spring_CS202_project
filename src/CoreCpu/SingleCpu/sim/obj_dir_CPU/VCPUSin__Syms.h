// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPUSIN__SYMS_H_
#define VERILATED_VCPUSIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCPUSin.h"

// INCLUDE MODULE CLASSES
#include "VCPUSin___024root.h"
#include "VCPUSin_CPUSin.h"
#include "VCPUSin_Memory.h"
#include "VCPUSin_MemorySim.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCPUSin__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCPUSin* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCPUSin___024root              TOP;
    VCPUSin_CPUSin                 TOP__CPUSin;
    VCPUSin_Memory                 TOP__CPUSin__memory_sl;
    VCPUSin_MemorySim              TOP__CPUSin__memory_sl__mem_inst;

    // SCOPE NAMES
    VerilatedScope __Vscope_CPUSin;
    VerilatedScope __Vscope_CPUSin__memory_sl;
    VerilatedScope __Vscope_CPUSin__memory_sl__mem_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    VCPUSin__Syms(VerilatedContext* contextp, const char* namep, VCPUSin* modelp);
    ~VCPUSin__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
