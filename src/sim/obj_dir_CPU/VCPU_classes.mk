# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCPU.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCPU \
	VCPU___024root__DepSet_h6c062b6c__0 \
	VCPU___024root__DepSet_h295dba0a__0 \
	VCPU_CPU__DepSet_hcc9a9126__0 \
	VCPU_PC__DepSet_h1f30ff34__0 \
	VCPU_PC__DepSet_h8676b260__0 \
	VCPU_IF__DepSet_h73356295__0 \
	VCPU_IF_ID__DepSet_h995df558__0 \
	VCPU_IF_ID__DepSet_hda52e685__0 \
	VCPU_ID__DepSet_h284e1d8b__0 \
	VCPU_ID_EX__DepSet_h6f64e750__0 \
	VCPU_ID_EX__DepSet_hd529a90b__0 \
	VCPU_EX_MEM__DepSet_h5344fdc8__0 \
	VCPU_EX_MEM__DepSet_hf80e0c31__0 \
	VCPU_MEM_WB__DepSet_h016aeb1e__0 \
	VCPU_Registers__DepSet_h682bae84__0 \
	VCPU_Memory__DepSet_h6e510872__0 \
	VCPU_Branch_Predictor__DepSet_hdd8f198d__0 \
	VCPU_ImmGenerator__DepSet_h64ec1bef__0 \
	VCPU_ICache__DepSet_hd81fc5ec__0 \
	VCPU_Controller__DepSet_h75c73313__0 \
	VCPU_Hazard__DepSet_hd6b8e391__0 \
	VCPU_Forwarding__DepSet_hee304ed9__0 \
	VCPU_ALU__DepSet_h92d94ea6__0 \
	VCPU_BRU__DepSet_hc94ee1b0__0 \
	VCPU_DCache__DepSet_hffa75844__0 \
	VCPU_MemorySim__DepSet_h71985226__0 \
	VCPU_ExpAddressHandler__DepSet_h88fda7ba__0 \
	VCPU_MMIO__DepSet_h565386d6__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCPU___024root__Slow \
	VCPU___024root__DepSet_h6c062b6c__0__Slow \
	VCPU___024root__DepSet_h295dba0a__0__Slow \
	VCPU_CPU__Slow \
	VCPU_CPU__DepSet_h77639781__0__Slow \
	VCPU_PC__Slow \
	VCPU_PC__DepSet_h1f30ff34__0__Slow \
	VCPU_IF__Slow \
	VCPU_IF__DepSet_h0ac84342__0__Slow \
	VCPU_IF_ID__Slow \
	VCPU_IF_ID__DepSet_h995df558__0__Slow \
	VCPU_ID__Slow \
	VCPU_ID__DepSet_hf770a150__0__Slow \
	VCPU_ID_EX__Slow \
	VCPU_ID_EX__DepSet_h6f64e750__0__Slow \
	VCPU_EX__Slow \
	VCPU_EX__DepSet_h7c980952__0__Slow \
	VCPU_EX_MEM__Slow \
	VCPU_EX_MEM__DepSet_h5344fdc8__0__Slow \
	VCPU_MEM__Slow \
	VCPU_MEM__DepSet_h8c1875a5__0__Slow \
	VCPU_MEM_WB__Slow \
	VCPU_MEM_WB__DepSet_h2961e146__0__Slow \
	VCPU_Registers__Slow \
	VCPU_Registers__DepSet_h16cfd903__0__Slow \
	VCPU_Memory__Slow \
	VCPU_Memory__DepSet_h5584e99c__0__Slow \
	VCPU_Branch_Predictor__Slow \
	VCPU_Branch_Predictor__DepSet_ha247f2b8__0__Slow \
	VCPU_ImmGenerator__Slow \
	VCPU_ImmGenerator__DepSet_h9845773a__0__Slow \
	VCPU_ICache__Slow \
	VCPU_ICache__DepSet_h3c3f5a23__0__Slow \
	VCPU_Controller__Slow \
	VCPU_Controller__DepSet_h5d31bf70__0__Slow \
	VCPU_Hazard__Slow \
	VCPU_Hazard__DepSet_ha21b891f__0__Slow \
	VCPU_Forwarding__Slow \
	VCPU_Forwarding__DepSet_hc8bc8d7f__0__Slow \
	VCPU_ALU__Slow \
	VCPU_ALU__DepSet_he5e2228c__0__Slow \
	VCPU_BRU__Slow \
	VCPU_BRU__DepSet_hd85726f4__0__Slow \
	VCPU_DCache__Slow \
	VCPU_DCache__DepSet_hc510e50e__0__Slow \
	VCPU_DCache__DepSet_hffa75844__0__Slow \
	VCPU_MemorySim__Slow \
	VCPU_MemorySim__DepSet_hfe2bbae6__0__Slow \
	VCPU_ExpAddressHandler__Slow \
	VCPU_ExpAddressHandler__DepSet_he1aeb496__0__Slow \
	VCPU_MMIO__Slow \
	VCPU_MMIO__DepSet_h9b86e5a6__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCPU__Dpi \
	VCPU__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCPU__Syms \
	VCPU__Trace__0__Slow \
	VCPU__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
