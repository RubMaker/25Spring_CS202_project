# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCPUSin.mk for the caller.

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
	VCPUSin \
	VCPUSin___024root__DepSet_h255994a7__0 \
	VCPUSin___024root__DepSet_hd96ab13d__0 \
	VCPUSin_CPUSin__DepSet_h2af70986__0 \
	VCPUSin_Memory__DepSet_hbecb124d__0 \
	VCPUSin_MemorySim__DepSet_hecaf08cc__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCPUSin___024root__Slow \
	VCPUSin___024root__DepSet_h255994a7__0__Slow \
	VCPUSin___024root__DepSet_hd96ab13d__0__Slow \
	VCPUSin_CPUSin__Slow \
	VCPUSin_CPUSin__DepSet_h34a9c967__0__Slow \
	VCPUSin_Memory__Slow \
	VCPUSin_Memory__DepSet_hc58c8a04__0__Slow \
	VCPUSin_Memory__DepSet_hbecb124d__0__Slow \
	VCPUSin_MemorySim__Slow \
	VCPUSin_MemorySim__DepSet_h5ed024ba__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCPUSin__Dpi \
	VCPUSin__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCPUSin__Syms \
	VCPUSin__Trace__0__Slow \
	VCPUSin__TraceDecls__0__Slow \

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
