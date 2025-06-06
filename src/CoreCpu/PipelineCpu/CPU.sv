`timescale 1ns / 1ps
`include "Constants.vh"

module CPU (
    input  logic               cpuclk, memclk, reset,
    // uart related
    input  logic [`DATA_WIDTH  ] UartData,
    input  logic [`DATA_WIDTH  ] UartAddress,
    input  logic               UartOver,
    // interact with devices
    input  logic [`LED_WIDTH   ] Switch1,Switch2,
    input logic Button_Confirm,
    // input  logic               bt1, bt2, bt3, bt4, bt5,
    // input  logic [`KBCODE_WIDTH] kb_idx,
    output logic [`LED_WIDTH] Led1,Led2,
    output logic [`DATA_WIDTH] Seg1Out
    // output logic [`DATA_WIDTH  ] seg1_out,
    // vga interface
    // input  logic [`VGA_ADDRESS  ] vga_addr,
    // output logic [`INFO_WIDTH  ] char_out,
    // output logic [`INFO_WIDTH  ] color_out,
    // debug port
    // output logic [`DATA_WIDTH  ] pc_t,
    // output logic [`DATA_WIDTH  ] inst_t
);

    logic PC_Write, rst, icache_stall, dcache_stall;
    logic [`DATA_WIDTH] IF_pc_in, IF_pc_out;
    logic [`DATA_WIDTH] IF_inst_out, mem_pc, mem_inst;
    logic IF_ID_Write, predict_fail, IF_predict_result_in, IF_predict_result_out;
    logic [`DATA_WIDTH] ID_inst_in, ID_pc_in, IF_predict_pc_out;
    logic [`REGS_WIDTH] ID_EX_rd, MEM_WB_rd;
    logic EX_old_predict_out, EX_old_branch_out, EX_branch_result_out;
    logic ID_EX_MemRead, MEM_WB_RegWrite;
    logic [`DATA_WIDTH] EX_old_pc_out, WB_data_out, ID_old_branch_pc;
    logic [`EX_CTRL_WIDTH] IF_EX_ctrl_out;
    logic [`MEM_CTRL_WIDTH] IF_MEM_ctrl_out;
    logic [`WB_CTRL_WIDTH] IF_WB_ctrl_out;
    logic [`REGS_WIDTH] ID_rs1_out, ID_rs2_out, ID_rd_out;
    logic [`DATA_WIDTH] ID_data1_out, ID_data2_out, ID_imm_out, ID_pc_out;
    logic [`DATA_WIDTH] EX_old_predict_pc_out;
    logic [`DATA_WIDTH] EX_pc_in, EX_data1_in, EX_data2_in, EX_imm_in;
    logic [`REGS_WIDTH] EX_rd_in, EX_rs1_in, EX_rs2_in;
    logic EX_predict_result_in;
    logic [`EX_CTRL_WIDTH] EX_EX_ctrl_in;
    logic [`MEM_CTRL_WIDTH] EX_MEM_ctrl_in;
    logic [`WB_CTRL_WIDTH] EX_WB_ctrl_in;
    logic [`DATA_WIDTH] MEMtoEX_data;
    logic [`REGS_WIDTH] MEM_rd_in, EX_rd_out;
    logic EX_MEM_RegWrite;
    logic [`DATA_WIDTH] EX_data_out, EX_ALU_res_out;
    logic [`MEM_CTRL_WIDTH] EX_MEM_ctrl_out;
    logic [`WB_CTRL_WIDTH] EX_WB_ctrl_out;
    logic [`DATA_WIDTH] WB_data1_in, WB_data2_in;
    logic [`WB_CTRL_WIDTH] WB_WB_ctrl_in;
    logic [`DATA_WIDTH] uart_mem_data, uart_mem_addr;
    logic [`DATA_WIDTH] MEM_data1_in, MEM_data2_in;
    logic [`MEM_CTRL_WIDTH] MEM_MEM_ctrl_in;
    logic [`WB_CTRL_WIDTH] MEM_WB_ctrl_in;
    logic [`REGS_WIDTH] MEM_rd_out;
    logic [`DATA_WIDTH] MEM_data1_out, MEM_data2_out;
    logic [`WB_CTRL_WIDTH] MEM_WB_ctrl_out;
    logic [`DATA_WIDTH] mem_addr, mem_write_data, mem_data;
    logic mem_web, web;
    assign MEMtoEX_data = mem_addr;
    assign EX_MEM_RegWrite = MEM_WB_ctrl_in[1];
    assign MEM_WB_RegWrite = WB_WB_ctrl_in[1];
    assign ID_old_branch_pc = EX_pc_in;

    // select uart or internal access
    assign uart_mem_addr = UartOver ? mem_addr : UartAddress;
    assign uart_mem_data = UartOver ? mem_write_data : UartData;
    assign web = ~UartOver || mem_web;
    assign rst = reset | ~UartOver;
    
    // led3
    // assign led3_out[5:0] = pc_t[7:2];
    // assign led3_out[6] = IF_pc_in == 32'h1c090048;
    // assign led3_out[7] = UartOver;

    // debug port
    // assign pc_t = IF_pc_in;
    // assign inst_t = ID_inst_in;

    // stage instances
    PC pc_inst (
        .clk(cpuclk),
        .rst,
        .PC_Write,
        .icache_stall,
        .dcache_stall,
        .new_pc(IF_pc_out),
        .pc_out(IF_pc_in)
    );

    Stage_IF if_inst (
        .clk(cpuclk),
        .rst,
        .pc_in(IF_pc_in),
        .predict_result(IF_predict_result_in),
        .predict_fail,
        .old_predict(EX_old_predict_out),
        .old_predict_pc(EX_old_predict_pc_out),
        .old_branch(EX_old_branch_out),
        .branch_result(EX_branch_result_out),
        .old_pc(EX_old_pc_out),
        .old_branch_pc(ID_old_branch_pc),
        .pc_out(IF_pc_out),
        .inst_out(IF_inst_out),
        .icache_stall,
        .dcache_stall,
        .IF_ID_Write,
        .mem_inst,
        .mem_pc
    );

    IF_ID if_id_inst (
        .clk(cpuclk),
        .rst,
        .icache_stall,
        .dcache_stall,
        .predict_fail,
        .IF_ID_Write,
        .predict_in(IF_predict_result_in),
        .predict_pc_in(IF_pc_out),
        .inst_in(IF_inst_out),
        .pc_in(IF_pc_in),
        .inst_out(ID_inst_in),
        .pc_out(ID_pc_in),
        .predict_out(IF_predict_result_out),
        .predict_pc_out(IF_predict_pc_out)
    );

    Stage_ID id_inst (
        .clk(cpuclk),
        .rst,
        .icache_stall,
        .dcache_stall,
        .pc_in(ID_pc_in),
        .inst(ID_inst_in),
        .ID_EX_rd,
        .MEM_WB_rd,
        .ID_EX_MemRead,
        .data_WB(WB_data_out),
        .RegWrite(MEM_WB_RegWrite),
        .EX_ctrl(IF_EX_ctrl_out),
        .MEM_ctrl(IF_MEM_ctrl_out),
        .WB_ctrl(IF_WB_ctrl_out),
        .rs1_out(ID_rs1_out),
        .rs2_out(ID_rs2_out),
        .rd_out(ID_rd_out),
        .reg_data1(ID_data1_out),
        .reg_data2(ID_data2_out),
        .imm_out(ID_imm_out),
        .pc_out(ID_pc_out),
        .IF_ID_Write,
        .PC_Write
    );

    ID_EX id_ex_inst (
        .clk(cpuclk),
        .rst,
        .pc_in(ID_pc_out),
        .data1_in(ID_data1_out),
        .data2_in(ID_data2_out),
        .imm_in(ID_imm_out),
        .rd_in(ID_rd_out),
        .rs1_in(ID_rs1_out),
        .rs2_in(ID_rs2_out),
        .IF_ID_Write,
        .predict_fail,
        .dcache_stall,
        .predict_result_in(IF_predict_result_out),
        .old_predict_pc_in(IF_predict_pc_out),
        .old_predict_pc_out(EX_old_predict_pc_out),
        .pc_out(EX_pc_in),
        .data1_out(EX_data1_in),
        .data2_out(EX_data2_in),
        .imm_out(EX_imm_in),
        .rd_out(EX_rd_in),
        .rs1_out(EX_rs1_in),
        .rs2_out(EX_rs2_in),
        .predict_result_out(EX_predict_result_in),
        .EX_ctrl_in(IF_EX_ctrl_out),
        .MEM_ctrl_in(IF_MEM_ctrl_out),
        .WB_ctrl_in(IF_WB_ctrl_out),
        .EX_ctrl_out(EX_EX_ctrl_in),
        .MEM_ctrl_out(EX_MEM_ctrl_in),
        .WB_ctrl_out(EX_WB_ctrl_in)
    );

    Stage_EX ex_inst (
        .EX_ctrl_in(EX_EX_ctrl_in),
        .MEM_ctrl_in(EX_MEM_ctrl_in),
        .WB_ctrl_in(EX_WB_ctrl_in),
        .reg_data1(EX_data1_in),
        .reg_data2(EX_data2_in),
        .imm(EX_imm_in),
        .pc(EX_pc_in),
        .EX_MEM_data(MEMtoEX_data),
        .MEM_WB_data(WB_data_out),
        .ID_EX_rs1(EX_rs1_in),
        .ID_EX_rs2(EX_rs2_in),
        .ID_EX_rd(EX_rd_in),
        .EX_MEM_rd(MEM_rd_in),
        .MEM_WB_rd,
        .EX_MEM_RegWrite,
        .MEM_WB_RegWrite,
        .old_predict_in(EX_predict_result_in),
        .data_out(EX_data_out),
        .write_addr(EX_ALU_res_out),
        .EX_rd_out,
        .MEM_ctrl_out(EX_MEM_ctrl_out),
        .WB_ctrl_out(EX_WB_ctrl_out),
        .ID_EX_rd_out(ID_EX_rd),
        .ID_EX_MemRead,
        .branch_result(EX_branch_result_out),
        .old_branch(EX_old_branch_out),
        .old_predict(EX_old_predict_out),
        .old_pc(EX_old_pc_out)
    );

    EX_MEM ex_mem_inst (
        .clk(cpuclk),
        .rst,
        .dcache_stall,
        .ALUres_in(EX_ALU_res_out), 
        .data2_in(EX_data_out),
        .rd_in(EX_rd_out),
        .ALUres_out(MEM_data1_in),
        .data2_out(MEM_data2_in),
        .rd_out(MEM_rd_in),
        .MEM_ctrl_in(EX_MEM_ctrl_out),
        .WB_ctrl_in(EX_WB_ctrl_out),
        .MEM_ctrl_out(MEM_MEM_ctrl_in),
        .WB_ctrl_out(MEM_WB_ctrl_in)
    );

    Stage_MEM mem_instance (
        .clk(cpuclk),
        .rst,
        .MEM_ctrl_in(MEM_MEM_ctrl_in),
        .WB_ctrl_in(MEM_WB_ctrl_in),
        .write_addr(MEM_data1_in),
        .write_data(MEM_data2_in),
        .EX_MEM_rd(MEM_rd_in),
        .MEM_rd_out,
        .addr_out(MEM_data1_out),
        .data_out(MEM_data2_out),
        .WB_ctrl_out(MEM_WB_ctrl_out),
        .dcache_stall,
        .mem_addr,
        .mem_write_data,
        .mem_web,
        .mem_data
    );

    MEM_WB mem_wb_inst (
        .clk(cpuclk),
        .rst,
        .dcache_stall,
        .addr_in(MEM_data1_out),
        .data_in(MEM_data2_out),
        .rd_in(MEM_rd_out),
        .addr_out(WB_data1_in),
        .data_out(WB_data2_in),
        .rd_out(MEM_WB_rd),
        .WB_ctrl_in(MEM_WB_ctrl_out),
        .WB_ctrl_out(WB_WB_ctrl_in)
    );

    Stage_WB wb_inst (
        .WB_ctrl(WB_WB_ctrl_in),
        .data(WB_data2_in),
        .ALU_res(WB_data1_in),
        .write_data(WB_data_out)
    );

    Memory memory_inst (
        .reset(rst),
        .clkA(memclk),
        .clkB(memclk),
        .AddressA(mem_pc),
        .AddressB(uart_mem_addr),
        .WriteData(uart_mem_data),
        .EnableWriteB(web),
        .ReadDataA(mem_inst),
        .ReadDataB(mem_data),
        .Switch1(Switch1),
        .Switch2(Switch2),
        // .switches3,
        .Button_Confirm(Button_Confirm),
        // .Button2(bt2),
        // .Button3(bt3),
        // .Button4(bt4),
        // .Button5(bt5),
        // .kb_idx,
        .Led1Out(Led1),
        .Led2Out(Led2),
        .Seg1Out(Seg1Out)
        // .vga_addr,
        // .char_out,
        // .color_out
    );

endmodule  
