# CS202小组中期答辩自述文档

## 小组信息

**Lab:** 周三7-8节 王薇老师

|   学号   |  姓名  |        分工        |
| :------: | :----: | :----------------: |
| 12313023 | 黄思诚 | 核心开发、仿真测试 |
| 12313519 | 李思陈 | IO 实现、汇编软件  |
| 12312030 | 魏国新 | 架构设计、上板调试 |

## 代码规范约定

### 结构化设计

- **单一职责原则**：每个模块仅实现单一功能
- **代码量控制**：每个模块代码量控制在300行以下

```
25SPRING_CS202_PROJECT/
├── docs/
│   ├── system_design.pdf      
│   └── images/                 
├── src/                       
│   ├── CoreCpu/  	#cpu设计文件
│   ├── Sim/     	#仿真测试文件
│   ├── Io/       	#Io处理设计
│   ├── Constrain/ 	#约束处理文件
│   ├── Assembly/  	#汇编                 
├── test/                      # 测试套件
├── tools/                     # 开发工具
├── LICENSE                   # 开源协议
└── README.md                 # 项目说明
```



### 命名规范

| 变量         | 大驼峰（类型缩写可选）     | `StrUserName`       |
| ------------ | -------------------------- | ------------------- |
| **常量**     | **全大写+下划线分隔**      | `DATA_WIDTH`        |
| **设计文件** | **大驼峰（类型缩写可选）** | `RegisterFile`      |
| **仿真文件** | **大驼峰+ 下划线+tb**      | `ALU_tb`            |
| **函数**     | **小写+下划线**            | `handle_r_type_ops` |

#### 特殊项

- 时钟信号直接使用clk进行表示
- 重置信号使用 reset表示
- 运算器直接使用ALU表示

#### 禁止项

- 使用拼音缩写（如`yhxx`代替`userInfo`）
- 单字母命名（循环变量`i/j/k`除外）
- 保留字冲突（如`logic` , `int`等）

### 注释要求

#### 文件头注释

```verilog
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/06/2025 03:27:30 PM
// Design Name: 
// Module Name: MemoryAccessState
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

```

#### 接口注释

对于每个模块，使用单行注释表明每个input 和 output信号的含义。

tip: 特别明显的信号除外（Ex. clk,reset）

#### 模块注释

对于一整个实现单一功能的代码块，使用单行或多行注释解释代码的具体功能。

```verilog
/**
     * @brief This always block toggles the temporary clock signal when the counter reaches 50.
     */
    always @(posedge clk) begin
        if (Cnt == 16'd50) begin
            t <= ~t;  // Toggle the temporary clock signal
        end 
    end
```

### 常量

- 集中存放于`constants`目录下的独立头文件`Constants.vh`中
- 采用全大写+下划线分隔方式进行命名
- 用 ``include "Constants.vh"` 语句进行导入并使用

## CPU 特性说明

### 单周期CPU

- ***冯诺依曼架构***支持 ***RISC-V*** 指令集的***五级流水线*** CPU

  + 采用前递、分支预测的方式解决冒险

  + 含 32 个 32 bit 的寄存器   
  +  寻址单位为 32 bit (4 byte)

- **时钟频率:** 
  + CPU: 最高可支持 10MHz

### Pipeline

- ***冯诺依曼架构***支持 ***RISC-V*** 指令集的***五级流水线*** CPU

  + 采用前递、分支预测的方式解决冒险

  + 含 32 个 32 bit 的寄存器   
  +  寻址单位为 32 bit (4 byte)

- **时钟频率:** 
  + CPU: 最高可支持 50MHz

### 指令集

RISC-V基础整数指令集（RV32I）定义了47条核心指令，覆盖算术运算（如ADD/SUB）、逻辑操作（AND/OR/XOR）、条件分支（BEQ/BNE）、内存访问（LW/SW）和系统调用（ECALL）等基础功能，其模块化架构允许通过可选扩展实现功能增强；

乘除扩展集（RV32M）在RV32I基础上新增8条指令，包括带符号/无符号的乘法（MUL/MULH/MULHSU/MULHU）、除法（DIV）及取余运算（REM）

| 指令                    | 指令类型 | 执行操作                                  |
| ----------------------- | -------- | ----------------------------------------- |
| `add rd, rs1, rs2`      | R        | rd = rs1 + rs2                            |
| `sub rd, rs1, rs2`      | R        | rd = rs1 - rs2                            |
| `xor rd, rs1, rs2`      | R        | rd = rs1 ^ rs2                            |
| `or rd, rs1, rs2`       | R        | rd = rs1 \| rs2                           |
| `and rd, rs1, rs2`      | R        | rd = rs1 & rs2                            |
| `sll rd, rs1, rs2`      | R        | rd = rs1 << rs2                           |
| `srl rd, rs1, rs2`      | R        | rd = rs1 >> rs2                           |
| `sra rd, rs1, rs2`      | R        | rd = rs1 >> rs2 (sign-extend)             |
| `slt rd, rs1, rs2`      | R        | rd = ( rs1 < rs2 ) ? 1 : 0                |
| `sltu rd, rs1, rs2`     | R        | rd = ( (u)rs1 < (u)rs2 ) ? 1 : 0          |
| `addi rd, rs1, rs2`     | I        | rd = rs1 + imm                            |
| `xori rd, rs1, rs2`     | I        | rd = rs1 ^ imm                            |
| `ori rd, rs1, rs2`      | I        | rd = rs1 \| imm                           |
| `andi rd, rs1, rs2`     | I        | rd = rs1 & imm                            |
| `slli rd, rs1, rs2`     | I        | rd = rs1 << imm[4:0]                      |
| `srli rd, rs1, rs2`     | I        | rd = rs1 >> imm[4:0]                      |
| `srai rd, rs1, rs2`     | I        | rd = rs1 >> imm[4:0] (sign-extend)        |
| `slti rd, rs1, rs2`     | I        | rd = (rs1 < imm) ? 1 : 0                  |
| `sltiu rd, rs1, rs2`    | I        | rd = ( (u)rs1 < (u)imm ) ? 1 : 0          |
| `lb rd, imm(rs1)`       | I        | 读取 1 byte 并做符号位扩展                |
| `lh rd, imm(rs1)`       | I        | 读取 1 half-word (2 bytes) 并做符号位扩展 |
| `lw rd, imm(rs1)`       | I        | 读取 1 word (4 bytes)                     |
| `lbu rd, imm(rs1)`      | I        | 读取 1 byte 并做 0 扩展                   |
| `lhu rd, imm(rs1)`      | I        | 读取 2 byte 并做 0 扩展                   |
| `sb rd, imm(rs1)`       | S        | 存入 1 byte                               |
| `sh rd, imm(rs1)`       | S        | 存入 1 half-word (2 bytes)                |
| `sw rd, imm(rs1)`       | S        | 存入 1 word (4 bytes)                     |
| `beq rs1, rs2, label`   | B        | if (rs1 == rs2)  pc += (imm << 1)         |
| `bne rs1, rs2, label`   | B        | if (rs1 != rs2)  pc += (imm << 1)         |
| `blt rs1, rs2, label`   | B        | if (rs1 < rs2)  pc += (imm << 1)          |
| `bge rs1, rs2, label`   | B        | if (rs1 >= rs2)  pc += (imm << 1)         |
| `bltu rs1, rs2, label`  | B        | if ( (u)rs1 < (u)rs2 )  pc += (imm << 1)  |
| `bgeu rs1, rs2, label`  | B        | if ( (u)rs1 >= (u)rs2 )  pc += (imm << 1) |
| `jal rd, label`         | J        | rd = pc + 4; pc += (imm << 1)             |
| `jalr rd, rs1, imm`     | I        | rd = pc + 4; pc = rs1 + imm               |
| `lui rd, imm`           | U        | rd = imm << 12                            |
| `auipc rd, imm`         | U        | rd = pc + (imm << 12)                     |
| `ecall`                 | I        | 控制权交给固件 (采用输入设备模拟)         |
| `sret` *                | I        | 控制权交还给程序                          |
| `mul rd, rs1, rs2` *    | R        | rd = (rs1 * rs2)[31:0]                    |
| `mulh rd, rs1, rs2` *   | R        | rd = (rs1 * rs2)[63:32]                   |
| `mulhsu rd, rs1, rs2` * | R        | rd = (rs1 * (u)rs2)[63:32]                |
| `mulhu rd, rs1, rs2` *  | R        | rd = ( (u)rs1 * (u)rs2 )[63:32]           |
| `div rd, rs1, rs2` *    | R        | rd = rs1 / rs2                            |
| `rem rd, rs1, rs2` *    | R        | rd = rs1 % rs2                            |

## CPU架构设计

### 接口

```verilog
module Top (
    // clk -> cpuclk, memclk, vgaclk
    input                     clk, reset,
    // uart related
    input  logic              Rx,
    // interact with devices
    input  logic [`SWCH_WID ] Switch1, Switch2, 
    input  logic              Button1, Button2, Button3, Button4, Button5,
    output logic [`LED_WID  ] Led1Out, Led2Out,
    output logic [`LED_WID  ] SegEn, Seg1Out, Seg2Out,
    // vga interface
	output logic              HorSynSignal,         // Horizontal Synchronization Signal
	output logic              VerSynSignal,         // Vertical Synchronization Signal
    output logic [`COLOR_WID] Red,
    output logic [`COLOR_WID] Green,
    output logic [`COLOR_WID] Blue
);
```

#### 输入信号

- 一个 100MHz 的晶振时钟
- 高电平复位信号 rst
- UART 通信串口 rx
- 2 组拨码开关
- 5 个按钮

#### 输出信号

- 2 组 led 
- 7 段数码管的控制信号
- VGA 的控制信号

### 单周期CPU

              [冯·诺依曼架构单周期CPU]
                 +-----------------+
                 | Unified Memory  |
                 | (Instr + Data)  |
                 +--------+--------+
                          | addr_bus[31:0]
                          | data_bus[31:0] (双向)
                          v
                          +---------+       +------------+     +------------+     +------------+
    |   PC    +------> RegFile    +----->    ALU     +-----> Control Unit|
    +----+----+  |   +------------+     +------+-----+     +------+-----+
         ^        |         ^                     |               |
         |        |         | reg_wdata           | mem_wdata     | mem_rdata
         |        +---------+---------------------+---------------+
         |                  |                     
         +------------------+                     
              Branch Logic (需支持数据地址跳转)

### 5-stage Pipeline

![image-20250513123648752](./images/midterm-pipeline.png)