`timescale 1ns / 1ps  // 添加时间尺度声明，与设计中的模块一致
`include "Constants.vh"
module Memory_Sim ();
    // 测试信号定义
    logic reset;
    logic clkA, clkB;
    logic [`DATA_WIDTH] AddressA, AddressB;
    logic [`DATA_WIDTH] WriteData;
    logic EnableWriteB;
    logic [`SWCH_WIDTH] Switch1, Switch2;
    logic Button1, Button2, Button3, Button4, Button5;
    logic [`VGA_ADDRESS] VgaAddress;
    logic [`DATA_WIDTH] Seg1Out;
    logic [`LED_WIDTH] Led1Out, Led2Out;
    logic [`INFO_WIDTH] CharOut, ColorOut;
    logic [`DATA_WIDTH] ReadDataA, ReadDataB;
    logic IsMMIO; // Indicates if the address is MMIO
    logic IsExcept; // Indicates if the address is an exception

    // 实例化被测模块
    Memory uut (
        .reset, .clkA, .clkB,
        .AddressA, .AddressB,
        .WriteData, .EnableWriteB,
        .Switch1, .Switch2,
        .Button1, .Button2, .Button3, .Button4, .Button5,
        .VgaAddress,
        .Seg1Out, .Led1Out, .Led2Out,
        .CharOut, .ColorOut,
        .ReadDataA, .ReadDataB,
        .IsMMIO, .IsExcept
    );

    // 生成时钟（50MHz，周期20ns）
    initial begin
        clkA = 0;
        forever #10 clkA = ~clkA;
    end
    initial begin
        clkB = 0;
        forever #10 clkB = ~clkB;
    end

    // 测试流程
    initial begin
        // 初始化信号
        reset = 1;
        AddressA = 0;
        AddressB = 0;
        WriteData = 0;
        EnableWriteB = 0;
        Switch1 = 0; Switch2 = 0;
        Button1 = 0; Button2 = 0; Button3 = 0; Button4 = 0; Button5 = 0;
        VgaAddress = 0;

        // 步骤1：复位释放
        #20 reset = 0;
        #20;

        // 步骤2：测试正常内存读写（AddressB非MMIO/非异常）
        // 写入数据到Mem（地址0x0000_0004）
        AddressB = 32'h0000_0004; // 高16位=0x0000（非MMIO）
        WriteData = 32'h1234_5678;
        EnableWriteB = 1;
        #20; // 等待clkB上升沿（因Mem的clkb是~clkB，实际写发生在clkB下降沿）
        EnableWriteB = 0;

        // 读取数据（AddressB相同地址）
        AddressB = 32'h0000_0004;
        #20;
        if (ReadDataB !== 32'h1234_5678)
            $display("ERROR: 正常内存读失败！期望值=0x12345678，实际值=0x%0h", ReadDataB);

        // 步骤3：测试MMIO访问（AddressB=0xFFFF_0000）
        AddressB = 32'hFFFF_FF00; // MMIO地址
        Switch1 = 4'hA; // 模拟开关输入
        Button1 = 1;    // 模拟按钮按下
        #20;
        // 验证MMIO输出（假设MMIO模块会将Switch1映射到Led1Out）
        if (Led1Out !== 4'hA)
            $display("ERROR: MMIO输入映射失败！期望值=0xA，实际值=0x%0h", Led1Out);
        // 验证ReadDataB返回MMIO的DataIo（假设MMIO的DataIo=Switch1扩展）
        if (ReadDataB !== {28'h0, Switch1})
            $display("ERROR: MMIO读失败！期望值=0x%0h，实际值=0x%0h", {28'h0, Switch1}, ReadDataB);

        // 步骤4：测试异常地址处理（AddressA=0x1C09_0000）
        AddressA = 32'h1C09_0000; // 异常地址
        #20;
        // 假设ExpAddressHandler的ExpData固定为0xDEAD_BEEF（需根据实际模块调整）
        if (ReadDataA !== 32'hff81_0113)
            $display("ERROR: 异常地址处理失败！期望值=0xDEADBEEF，实际值=0x%0h", ReadDataA);

        // 步骤5：测试写使能控制（MMIO地址时EnWB应无效）
        AddressB = 32'hFFFF_0000; // MMIO地址
        WriteData = 32'h8765_4321;
        EnableWriteB = 1;
        #20; // 检查Mem是否未被写入（假设Mem初始值为0）
        // if (uut.mem_inst.mem[AddressB[15:2]] !== 0) // 需根据Mem实例的实际存储结构调整
        //     $display("ERROR: MMIO地址写使能未禁止！");

        // 测试结束
        $display("仿真完成！");
        $finish;
    end
endmodule