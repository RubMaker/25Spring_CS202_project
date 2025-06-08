# 新增动态库路径和运行时路径
LDFLAGS := -L/usr/local/lib -lunicorn -lSDL2 -Wl,-rpath=/usr/local/lib
export LDFLAGS

SOURCE_DIR := ../CoreCpu/SingleCpu
TARGET := CPU
# 新增 --LDFLAGS 参数传递
VERILATOR_FLAGS := --cc --fno-inline --hierarchical --vpi --build -j 0 -Wall -Wno-ALWCOMBORDER -Wno-UNUSEDSIGNAL --unroll-count 2048 --trace --LDFLAGS "$(LDFLAGS)"

.PHONY: all
all: obj_dir_$(TARGET)/V$(TARGET)

obj_dir_$(TARGET)/V$(TARGET): $(SOURCE_DIR)/$(TARGET).sv $(TARGET)_Sim.cpp
	verilator $(VERILATOR_FLAGS) -I$(SOURCE_DIR) --Mdir ./obj_dir_$(TARGET) $(SOURCE_DIR)/$(TARGET).sv --exe $(TARGET)_Sim.cpp

.PHONY: test
test: all
	./obj_dir_$(TARGET)/V$(TARGET)

.PHONY: clean
clean:
	rm -rf obj_dir_*
	rm *.vcd
