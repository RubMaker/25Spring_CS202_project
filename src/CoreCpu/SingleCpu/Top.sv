`include "Constants.vh"

module Top (
    // clk -> cpuclk, memclk, vgaclk
    input                     fpga_clk, reset_n,
    // uart related
    input  logic              rx,
    // interact with devices
    input  logic [`SWCH_WIDTH ] switches1, switches2,// switches3,
    input  logic              Button_Mid,
    input  logic              Button_Up,
    //input  logic [`KBPIN_WIDTH] kp, 
    output logic [`LED_WIDTH  ] led1_out, led2_out,// led3_out,
    //output logic [`LED_WIDTH  ] seg_en, seg_out,
    output logic [7:0] seg1,
               logic [7:0] seg2,
               logic [3:0] sel1,
               logic [3:0] sel2,
    // vga interface
    output logic              hsync,              // line synchronization signal
    output logic              vsync,              // vertical synchronization signal
    output logic [`COLOR_WIDTH] red,
    output logic [`COLOR_WIDTH] green,
    output logic [`COLOR_WIDTH] blue
);

    //wire cpu_clk, upg_clk, 
    wire cpuclk, memclk, vgaclk;
    wire uart_done;
    wire [`DATA_WIDTH] uart_data, uart_addr;
    //wire [`VGA_ADDRESS] vga_addr;
    //wire [`INFO_WIDTH] char_out, color_out;
    wire [`LED_WIDTH] VGA1Out;
    wire [`DATA_WIDTH] seg1_out, timer;
    wire [`KBCODE_WIDTH] kb_idx;

    wire cpuclk0,memclk0;
    CPU_Clk cpu_clk_inst (       // 50MHz
        .clk(fpga_clk),
        .clk0(cpuclk0)
    );
    MEM_Clk mem_clk_inst (       // 50MHz
            .clk(fpga_clk),
            .clk0(memclk0)
        );

    assign cpuclk = uart_done ? cpuclk0 : fpga_clk;
    assign memclk = uart_done ? memclk0 : fpga_clk;

    /*VGAClkGen vga_clk_gen_inst (  // 40MHz
        .clk_in1(clk),
        .clk_out1(vgaclk)
    );*/
    wire Button_Confirm,Button_Reset;
    wire rst;
    //wire cpu_clk0,upg_clk0,vgaclk0;
    clockGen uClkGen(.clk_in1(fpga_clk),.clk_out1(vgaclk));
    
    //assign cpuclk = uart_done ? cpu_clk : upg_clk;
    //SlowingClock uSlowCpuClk(.clk(cpu_clk0),.rst_n(reset_n),.slow_clk(cpu_clk));
    //SlowingClock uSlowUpgClk(.clk(upg_clk0),.rst_n(reset_n),.slow_clk(upg_clk));
    ///SlowingClock uSlowVGAClk(.clk(vgaclk0),.rst_n(reset_n),.slow_clk(vgaclk));
    //assign cpuclk = uart_done ? cpu_clk : upg_clk;
    //assign memclk = uart_done ? upg_clk : upg_clk;

    //assign Button_Confirm = Button_Mid;
    debounce uDebounceConfirm(.clk(cpuclk),.rst(~reset_n),.key(~Button_Mid),.key_out(Button_Confirm));
    //debounce uDebounceReset(.clk(fpga_clk),.rst(~reset_n),.key(~Button_Up),.key_out(Button_Reset));
    
    assign rst = ~reset_n;//| Button_Reset;
    wire [`DATA_WIDTH] pc_t, inst_t;
    wire [31:0] seg_out;
    CPU cpu_inst(
        .clk(cpuclk),
        .memclk(memclk),
        .reset(rst),
        .UartData(uart_data),
        .UartAddress(uart_addr),
        .UartOver(uart_done),
        .Switch1(switches1),
        .Switch2(switches2),
        //.Switch3,
        /*.bt1,
        .bt2,
        .bt3,
        .bt4,
        .bt5,*/
        .Button_Confirm(Button_Confirm),
        //.kb_idx,
        .Led1(led1_out),
        .Led2(led2_out),
        //.led3_out,
        //.seg1_out,
        
        .Seg1Out(seg_out),
        
        //.VgaAddress(vga_addr),
        //.CharOut(char_out),
        //.ColorOut(color_out)//,
        .VGA1Out(VGA1Out)
        //.pc_t,
        //.inst_t
    );

    Uart uart_inst(
        .clk(fpga_clk),
        .reset(rst),
        .rx(rx),
        .DataOut(uart_data),
        .Address(uart_addr),
        .Done(uart_done)
    );

    /*wire [`DATA_WIDTH] seg7data;
    assign seg7data = inst_t;

    Seg7Tube seg7tube_inst(
        .clk,
        .rst_n(~rst),
        .data_in(seg1_out),
        //.data_in(seg7data),
        .seg_en,
        .seg_out
    );*/

    VGADisplay uVGA(
        .clk(vgaclk),
        .reset_n(reset_n),
        .data(VGA1Out),
        .hsync(hsync),
        .vsync(vsync),
        .red(red),
        .green(green),
        .blue(blue)
    );

    /*Keyboard keyboard_inst (
        .kp,
        .kb_idx
    );*/
    /*always @(posedge cpu_clk) begin
                    if (!reset_n) begin
                        segout <= 32'h0;
                    end else begin
                        if(seg_out != 32'h0)  begin
                            segout <= seg_out;
                        end else begin
                        end
                    end
                end
                
    assign seg1_out = seg_out;*/
    assign seg1_out = seg_out;
    segDisplay segDisplay_l(
        .clk(fpga_clk),
        .rst(rst),
        
    
        .hex_data(seg1_out[31:16]),
        .hex_point(0),
        
        .seg(seg1),
        .sel(sel1)
    
    );
    segDisplay segDisplay_r(
            .clk(fpga_clk),
            .rst(rst),
            
        
            .hex_data(seg1_out[15:0]),
            .hex_point(0),
            
            .seg(seg2),
            .sel(sel2)
        
        );
endmodule
