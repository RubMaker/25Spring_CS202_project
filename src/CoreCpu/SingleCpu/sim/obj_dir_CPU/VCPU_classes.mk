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
	VCPU_ProgramCounter__DepSet_h389f0391__0 \
	VCPU_InstCache__DepSet_h049e1df1__0 \
	VCPU_ImmGenerator__DepSet_h64ec1bef__0 \
	VCPU_Controller__DepSet_h75c73313__0 \
	VCPU_RegisterFile__DepSet_h74155544__0 \
	VCPU_ALU__DepSet_h92d94ea6__0 \
	VCPU_BRUSin__DepSet_h44d490dd__0 \
	VCPU_DataCache__DepSet_h9447a2f7__0 \
	VCPU_Memory__DepSet_h6e510872__0 \
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
	VCPU_ProgramCounter__Slow \
	VCPU_ProgramCounter__DepSet_h7d82091f__0__Slow \
	VCPU_InstCache__Slow \
	VCPU_InstCache__DepSet_h3d91c49f__0__Slow \
	VCPU_ImmGenerator__Slow \
	VCPU_ImmGenerator__DepSet_h9845773a__0__Slow \
	VCPU_Controller__Slow \
	VCPU_Controller__DepSet_h5d31bf70__0__Slow \
	VCPU_RegisterFile__Slow \
	VCPU_RegisterFile__DepSet_h1272410e__0__Slow \
	VCPU_Mux2__Slow \
	VCPU_Mux2__DepSet_hd0c66d75__0__Slow \
	VCPU_ALU__Slow \
	VCPU_ALU__DepSet_he5e2228c__0__Slow \
	VCPU_BRUSin__Slow \
	VCPU_BRUSin__DepSet_h3aaa6878__0__Slow \
	VCPU_DataCache__Slow \
	VCPU_DataCache__DepSet_hd51b6ec0__0__Slow \
	VCPU_Mux3__Slow \
	VCPU_Mux3__DepSet_h80a10a75__0__Slow \
	VCPU_Memory__Slow \
	VCPU_Memory__DepSet_h5584e99c__0__Slow \
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
