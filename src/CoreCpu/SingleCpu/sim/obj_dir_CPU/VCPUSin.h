// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCPUSIN_H_
#define VERILATED_VCPUSIN_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VCPUSin__Syms;
class VCPUSin___024root;
class VerilatedVcdC;
class VCPUSin_CPUSin;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VCPUSin VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VCPUSin__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&memclk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&UartOver,0,0);
    VL_IN8(&Switch1,7,0);
    VL_IN8(&Switch2,7,0);
    VL_IN8(&Button1,0,0);
    VL_IN8(&Button2,0,0);
    VL_IN8(&Button3,0,0);
    VL_IN8(&Button4,0,0);
    VL_IN8(&Button5,0,0);
    VL_OUT8(&Led1,7,0);
    VL_OUT8(&Led2,7,0);
    VL_OUT8(&CharOut,7,0);
    VL_OUT8(&ColorOut,7,0);
    VL_IN16(&VgaAddress,11,0);
    VL_IN(&UartData,31,0);
    VL_IN(&UartAddress,31,0);
    VL_OUT(&Seg1Out,31,0);
    VL_OUT(&Pc_test,31,0);
    VL_OUT(&Inst_test,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VCPUSin_CPUSin* const CPUSin;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VCPUSin___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VCPUSin(VerilatedContext* contextp, const char* name = "TOP");
    explicit VCPUSin(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VCPUSin();
  private:
    VL_UNCOPYABLE(VCPUSin);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
