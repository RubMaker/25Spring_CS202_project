`timescale 1ns/1ps
`include "Constants.vh"

module Controller_tb();
    // 时钟和复位信号
    logic clk = 0;
    logic rst_n;
    
    // DUT接口
    logic [31:0] instruction;
    wire [`CTRL_WIDTH] ctrl_bus;
    
    // 控制信号分解
    struct packed {
        logic        jalr;
        logic [2:0]  bru_op;
        logic [3:0]  alu_op;
        logic [1:0]  alu_src;
    } ex_ctrl;
    
    struct packed {
        logic [2:0]  mem_op;
        logic        mem_wr;
        logic        mem_rd;
    } mem_ctrl;
    
    struct packed {
        logic        reg_wr;
        logic        mem_to_reg;
    } wb_ctrl;

    // 实例化被测模块
    Controller dut (
        .instruction(instruction),
        .ctrl_bus(ctrl_bus)
    );

    // 控制总线解包
    assign {ex_ctrl, mem_ctrl, wb_ctrl} = ctrl_bus;

    // 时钟生成（100MHz）
    always #5 clk = ~clk;
    
    // 波形记录初始化
    initial begin
        $dumpfile("controller_wave.vcd");
        $dumpvars(0, Controller_tb);
    end

    // 主测试流程
    initial begin
        rst_n = 0;
        #20 rst_n = 1;
        
        // 测试用例1：R-type ADD指令
        test_rtype_add: begin
            instruction = 32'h00c58633; // add x12,x11,x12
            #10 verify_controls(
                .exp_alu_op(`ALU_ADD),
                .exp_reg_wr(1'b1),
                .exp_mem_rd(1'b0)
            );
        end
        
        // 测试用例2：I-type ADDI指令
        test_itype_addi: begin
            instruction = 32'h00430313; // addi x6,x6,4
            #10 verify_controls(
                .exp_alu_op(`ALU_ADD),
                .exp_alu_src(1'b1),
                .exp_reg_wr(1'b1)
            );
        end
        
        // 测试用例3：LOAD指令 (LW)
        test_load_lw: begin
            instruction = 32'h02832603; // lw x12,40(x6)
            #10 verify_controls(
                .exp_alu_op(`ALU_ADD),
                .exp_mem_rd(1'b1),
                .exp_mem_to_reg(1'b1)
            );
        end
        
        // 测试用例4：STORE指令 (SW)
        test_store_sw: begin
            instruction = 32'hfed42e23; // sw x13,-4(x8)
            #10 verify_controls(
                .exp_mem_wr(1'b1),
                .exp_reg_wr(1'b0)
            );
        end
        
        // 测试用例5：BEQ分支指令
        test_branch_beq: begin
            instruction = 32'hfe629ae3; // bne x5,x6,-12
            #10 verify_controls(
                .exp_bru_op(`BRU_NE),
                .exp_reg_wr(1'b0)
            );
        end
        
        #50 $display("[%t] 所有测试通过!", $time);
        $finish;
    end

    // 自动化验证任务
    task verify_controls(
        input logic [3:0] exp_alu_op = 4'b0000,
        input logic [2:0] exp_bru_op = `BRU_NOP,
        input logic [1:0] exp_alu_src = 0,
        input logic exp_mem_wr = 0,
        input logic exp_mem_rd = 0,
        input logic exp_reg_wr = 0,
        input logic exp_mem_to_reg = 0
    );
        begin
            print_instruction_info();
            
            // ALU操作断言
            assert (ex_ctrl.alu_op === exp_alu_op) 
            else $error("[ALU] 操作错误: exp=%0h, act=%0h", 
                exp_alu_op, ex_ctrl.alu_op);
            
            // 分支操作断言
            assert (ex_ctrl.bru_op === exp_bru_op) 
            else $error("[BRU] 操作错误: exp=%0h, act=%0h", 
                exp_bru_op, ex_ctrl.bru_op);
            
            // 数据通路断言
            assert (ex_ctrl.alu_src === exp_alu_src)
            else $error("[ALUSrc] 选择错误: exp=%0h, act=%0h",
                exp_alu_src, ex_ctrl.alu_src);
                
            assert (mem_ctrl.mem_wr === exp_mem_wr)
            else $error("[MemWr] 使能错误: exp=%0h, act=%0h",
                exp_mem_wr, mem_ctrl.mem_wr);
                
            assert (mem_ctrl.mem_rd === exp_mem_rd)
            else $error("[MemRd] 使能错误: exp=%0h, act=%0h",
                exp_mem_rd, mem_ctrl.mem_rd);
                
            assert (wb_ctrl.reg_wr === exp_reg_wr)
            else $error("[RegWr] 使能错误: exp=%0h, act=%0h",
                exp_reg_wr, wb_ctrl.reg_wr);
                
            assert (wb_ctrl.mem_to_reg === exp_mem_to_reg)
            else $error("[Mem2Reg] 选择错误: exp=%0h, act=%0h",
                exp_mem_to_reg, wb_ctrl.mem_to_reg);
        end
    endtask

    // 指令信息打印
    function void print_instruction_info();
        $display("\n[TESTCASE %0d]", $time/10);
        $display("Instruction: %32h", instruction);
        $display("Control Bus: %17b", ctrl_bus);
        $display("EX Stage: {jalr:%0d bru_op:%0d alu_op:%0d alu_src:%0d}", 
            ex_ctrl.jalr, ex_ctrl.bru_op, ex_ctrl.alu_op, ex_ctrl.alu_src);
        $display("MEM Stage: {mem_op:%0d mem_wr:%0d mem_rd:%0d}",
            mem_ctrl.mem_op, mem_ctrl.mem_wr, mem_ctrl.mem_rd);
        $display("WB Stage: {reg_wr:%0d mem_to_reg:%0d}",
            wb_ctrl.reg_wr, wb_ctrl.mem_to_reg);
    endfunction
endmodule