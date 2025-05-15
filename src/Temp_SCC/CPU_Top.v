`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/05/13 19:05:28
// Design Name: 
// Module Name: CPU_Top
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


module CPU_TOP(
    input fpga_rst, /*Active High */
    input fpga_clk, 
    //input[23:0] switch2N4, output[23:0] led2N4, 
    input confirm_button,
    input [7:0] sw_data,
    input [3:0] sw_case,
    output [7:0] led,
    
    output [7:0] seg1,
    output [7:0] seg2,
    output [3:0] sel1,
    output [3:0] sel2,
    /* UART Programmer Pinouts
                                                                / start Uart communicate at high level */
    //input start_pg,
    input rx,
    output tx
    );
    // UART Programmer Pinouts
    wire start_pg = 1'b0;
    wire upg_clk, upg_clk_o;
    wire upg_wen_o; //Uart write out enable
    wire upg_done_o; //Uart rx data have done
    //data to which memory unit of program_rom/dmemory32
    wire [14:0] upg_adr_o;
    //data to program_rom or dmemory32
    wire [31:0] upg_dat_o;
    wire spg_bufg;
    BUFG U1(.I(start_pg), .O(spg_bufg)); // de-twitter
    // Generate UART Programmer reset signal
    reg upg_rst;
    always @ (posedge fpga_clk) begin
        if (spg_bufg) upg_rst <= 0;
        if (fpga_rst) upg_rst <= 1;
    end
    wire cpu_clk;
    cpuclk uCPU_clk(.clk_in1(fpga_clk),.clk_out1(cpu_clk),.clk_out2(upg_clk));
    uart_bmpg_0 uart(
        .upg_clk_i(upg_clk),.upg_rst_i(upg_rst),.upg_rx_i(rx),
        .upg_clk_o(upg_clk_o),.upg_wen_o(upg_wen_o),.upg_adr_o(upg_adr_o),.upg_dat_o(upg_dat_o),.upg_done_o(upg_done_o),.upg_tx_o(tx)
    ); 
    wire rst;//used for other modules which don't relate to UART
    assign rst = fpga_rst;
    wire confirm;
    debounce confirm_debounce(.clk(cpu_clk),.rst(rst),.key(confirm_button),.key_out(confirm));
    LED uLED(.ledrst(rst),.led_clk(cpu_clk),.ledwrite(sw_case[0]),.ledwdata(sw_data),.led_out(led));
    /*Modules:*/
    //////////////////////////////////////////////////////////////////////////////////
    //IFetch
    wire [31:0] inst;
    wire [13:0] rom_adr_o;
    //Controller:
    wire mem2reg, ram_memWrite_o,
          branch_o, memRead, ALUSrc_o,
          ram_regWrite_o;
    wire [1:0] ALUOp_o;
    //ALU
    wire [31:0] ALUResult_o;
    wire zero_o;
    //Decoder
    wire signed [31:0] imm32_o;
    wire signed [31:0] rs1Data_o;
    wire signed [31:0] rs2Data_o;
    //DMem
    wire signed [31:0] ram_dat_o;
    //programrom
    wire [31:0] instruction_o;
    //DMem
    DMem uDMem(
        .ram_clk_i(cpu_clk), // from CPU top
        .ram_wen_i(ram_memWrite_o), // from Controller
        .ram_adr_i(ALUResult_o[13:0]), // from alu_result of ALU
        .ram_dat_i(rs2Data_o), // from read_data_2 of Decoder
        
        .ram_dat_o(ram_dat_o), // the data read
        
        .upg_rst_i(upg_rst), // UPG reset (Active High)
        .upg_clk_i(upg_clk_o), // UPG ram_clk_i (10MHz)
        .upg_wen_i(upg_wen_o & upg_adr_o[14]), // UPG write enable
        .upg_adr_i(upg_adr_o[13:0]), // UPG write address
        .upg_dat_i(upg_dat_o), // UPG write data
        .upg_done_i(upg_done_o) // 1 if programming is finished
        );
    //programrom
    programrom upramrom(
                .rom_clk_i(cpu_clk), // from CPU top
                .rom_adr_i(rom_adr_o), // From IFetch
                
                .instruction_o(instruction_o),
                
                .upg_rst_i(upg_rst), // UPG reset (Active High)
                .upg_clk_i(upg_clk_o), // UPG ram_clk_i (10MHz)
                .upg_wen_i(upg_wen_o & ~upg_adr_o[14]), // UPG write enable
                .upg_adr_i(upg_adr_o[13:0]), // UPG write address
                .upg_dat_i(upg_dat_o), // UPG write data
                .upg_done_i(upg_done_o) // 1 if programming is finished
                );
    //IFetch
    IFetch uIFetch(
            .clk(cpu_clk),
            .rst(rst | ~upg_done_o),
            .branch(branch_o),
            .zero(zero_o),
            .imm32(imm32_o),
            .inst_i(instruction_o),
            
            .inst_o(inst),
            .rom_adr_o(rom_adr_o)
        );
    //ALU
    ALU uALU(
            .ReadData1(rs1Data_o),
            .ReadData2(rs2Data_o),
            .imm32(imm32_o),
            .ALUSrc(ALUSrc_o), 
            .ALUOp(ALUOp_o), 
            .funct3(inst[14:12]), 
            .funct7(inst[31:25]), 
            
            .ALUResult(ALUResult_o),
            .zero(zero_o)
    );
    //Decoder
    Decoder uDecoder(
            .clk(cpu_clk),
            .rst( rst),
            .regWrite(ram_regWrite_o),
            .inst(inst),
            .writeData(ALUResult_o),

            .imm32(imm32_o),
            .rs1Data(rs1Data_o),
            .rs2Data(rs2Data_o)
        );
    //////////////////////////////////////////////////////////////////////////////////
    //Under Construction
    //Controller
    Controller uController(
        .inst(inst),
        
        .MemtoReg(mem2reg),
        .MemWrite(ram_memWrite_o),
        .Branch(branch_o),
        .MemRead(memRead),
        .ALUSrc(ALUSrc_o),
        .RegWrite(ram_regWrite_o),
        .ALUOp(ALUOp_o)
        );
    //////////////////////////////////////////////////////////////////////////////////
    parameter DISPLAYEX = 32'h0002a303;
    //Display inst
    segDisplay segDisplayL(
    	.clk(cpu_clk),
        .rst(rst),
    

        .hex_data(DISPLAYEX[31:16]),
        .hex_point(0),
    
        .seg(seg1),
        .sel(sel1)
    );
    segDisplay segDisplayR(
        .clk(cpu_clk),
        .rst(rst),
        
        .hex_data(DISPLAYEX[15:0]),
        .hex_point(0),
        
        .seg(seg2),
        .sel(sel2)
        );
endmodule
