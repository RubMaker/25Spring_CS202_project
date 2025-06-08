# 25Spring_CS202_project
  1. **创建 Vivado 项目**：通过 Vivado 创建一个 RTL Project，Project device 选择 ego1(与lab课相同)，Target Language设置为 VHDL，设置完毕并创建项目后，将所有Verilog 文件作为设计文件导入，再将 cpu_constr.xdc 作为约束文件导入
  2. **创建 IP 核** 
     - 创建 Clocking Wizard

       - 将组件名称改为 clockGen
       - 选择 PLL 时钟
       - 将 clk_in1 的 Source 修改为 Global buffer
       - 将 clk_out1 的频率设置为 25MHz 并取消 reset 信号和 locked 信号

     - 创建 Block Memory Generator

       - 将组件名称改为 Mem
       - Memory Type 选择 True Dual Port RAM
       - Port A 的 Write Width 修改为 32，Write Depth 修改为 16384 (Read Width, Read Depth 和 Port B 的相关参数会自动修改)
       - 取消勾选`Primitives Output Register`
  3. **在 Vivado 中依次 Synthesis -> Implementation -> Generate Bitstream，将生成比特流文件 (.bit) 烧写进 FPGA** 
  4. **获取执行代码的机器码文件**：使用 RARS 打开需要执行的汇编代码，点击运行，再点击左上角 File，选择 Dump Memory，Dump Format 选择 Hexadecimal Text，点击 Dump To File... 并输入文件名后保存
  5. **获取 UART 串口传输的文件**：将上一步得到的文件放在指令转换脚本 inst2txt.py 同一目录下，打开 inst2txt.py 将第 4 行的 `filename` 改为上一步所得的文件的名称，运行脚本，得到一个 .txt 文件 (如 test.txt)，这是要通过 UART 串口传输给 CPU 运行的指令
  6. **通过 UART 加载程序并运行**：打开串口工具 UARTAssist.exe，串口号选择 COM6 (一般来说直接选能选的最后一个)，波特率设置为 115200，打开连接，发送选项选择 “按十六进制发送” 并 “启用文件数据源...”，选择上一步得到的 .txt 文件并确定，然后点击发送，发送完毕后 CPU 将会自动开始运行