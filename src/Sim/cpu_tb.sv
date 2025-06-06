`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/31/2025 11:18:58 PM
// Design Name: 
// Module Name: cpu_tb
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

module CPUSin_tb();
    // 时钟和复位信号
    reg clk, memclk, reset;
    // UART接口
    reg [`DATA_WIDTH] UartData;
    reg [`DATA_WIDTH] UartAddress;
    reg UartOver;
    // 外设输入
    reg [`LED_WIDTH] Switch1, Switch2;
    reg Button_Confirm;
    // 输出监控
    wire [`LED_WIDTH] Led1, Led2;
    wire [`DATA_WIDTH] Seg1Out;
    wire [`INFO_WIDTH] CharOut, ColorOut;
    wire [`DATA_WIDTH] Pc_test, Inst_test;

    // 实例化被测CPU
    CPU uut (
        .clk(clk), .memclk(memclk), .reset(reset),
        .UartData(UartData), .UartAddress(UartAddress), .UartOver(UartOver),
        .Switch1(Switch1), .Switch2(Switch2),
        .Button_Confirm(Button_Confirm),
        .Led1(Led1), .Led2(Led2),
        .Seg1Out(Seg1Out),
        .CharOut(CharOut), .ColorOut(ColorOut),
        .Pc_test(Pc_test), .Inst_test(Inst_test)
    );

    // 时钟生成
    initial begin
        clk = 0;
        forever #10 clk = ~clk;  // 50MHz主时钟
    end

    initial begin
        memclk = 0;
        forever #1 memclk = ~memclk;  // 33MHz内存时钟
    end

    // UART指令加载任务
    task load_instruction;
        input [`DATA_WIDTH] addr;
        input [`DATA_WIDTH] data;
        begin
            @(negedge memclk);
            UartAddress = addr;
            UartData = data;
        end
    endtask

    // 寄存器检查任务
    task check_led;
        input [`LED_WIDTH] expected;
        input [80:0] test_name;
        begin
            #100;  // 等待指令执行
            if (Led1 !== expected) begin
                $display("[ERROR] %s: LED1=%h, Expected=%h", 
                         test_name, Led1, expected);
                $finish;
            end else begin
                $display("[PASS] %s", test_name);
            end
        end
    endtask

    // 主测试序列
    initial begin
        // 初始化
        reset = 1;
        UartOver = 0;
        Switch1 = 0;
        Switch2 = 0;
        Button_Confirm = 0;
        #100;
        
        // 阶段1: 通过UART加载指令[1,7](@ref)
        $display("Loading instructions via UART...");
        // 示例RISC-V指令序列:
        // addi x1, x0, 5   -> 0x00500093
        // addi x2, x0, 3   -> 0x00300113
        // add x3, x1, x2   -> 0x002081B3
        // sw x3, 0(x0)     -> 0x00302023 (假设0地址映射到LED)
        load_instruction(32'h00000000, 32'h00500093);
        load_instruction(32'h00000004, 32'h00300113);
        load_instruction(32'h00000008, 32'h002081B3);
        load_instruction(32'h0000000C, 32'h00302023);
        
        // 启动CPU
        #50;
        UartOver = 1;
        reset = 0;
        $display("CPU Started");
        
        // 阶段2: 基础指令测试[4,7](@ref)
        // 测试1: 算术运算验证
        check_led(8'h08, "ADD Test");  // 预期5+3=8
        
        // 测试2: 内存访问测试
        @(negedge clk);
        Switch1 = 8'hAA;  // 设置开关值
        load_instruction(32'h00000010, 32'h0000A103);  // lw x2, 0(x1)
        load_instruction(32'h00000014, 32'h0020A223);  // sw x2, 4(x1)
        #200;
        if (Led2 !== 8'hAA) begin
            $display("[ERROR] Memory Access: LED2=%h, Expected=AA", Led2);
        end
        
        // 测试3: 分支指令测试[2](@ref)
        $display("Testing branch instructions...");
        // beq x1, x2, label
        load_instruction(32'h00000018, 32'h00208263); 
        // 添加更多分支测试指令
        
        // 阶段3: 外设交互测试
        $display("Testing peripheral interaction...");
        Button_Confirm = 1;  // 模拟按钮按下
        #50;
        Button_Confirm = 0;
        // 验证按钮状态是否被正确读取
        
        // 结束仿真
        #500;
        $display("All tests completed");
        $finish;
    end

    // 实时监控
    always @(posedge clk) begin
        $display("Time=%0t: PC=%h, Instr=%h, LED1=%h", 
                 $time, uut.ThisPc, uut.FetchInstr, Led1);
    end
endmodule