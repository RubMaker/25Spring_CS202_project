`include "Constants.vh"

module Top (
    // clk -> cpuclk, memclk, vgaclk
    input                     clk, reset_n,
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
               logic [3:0] sel2
);

    wire cpu_clk, upg_clk, cpuclk, memclk, vgaclk;
    wire uart_done;
    wire [`DATA_WIDTH] uart_data, uart_addr;
    wire [`DATA_WIDTH] seg1_out, timer;
    //wire [`KBCODE_WIDTH] kb_idx;

    wire clk0;
    CPU_Clk cpu_clk_inst (       // 50MHz
        .clk,
        .clk0
    );
    wire Button_Confirm,Button_Reset;
    wire rst;
    //wire cpu_clk0,upg_clk0,vgaclk0;
    //clockGen uClkGen(.clk_in1(fpga_clk),.clk_out1(cpu_clk),.clk_out2(upg_clk),.clk_out3(vgaclk));
    assign cpuclk = uart_done ? clk0 : clk;
    assign memclk = uart_done ? clk0 : clk;

    debounce uDebounceConfirm(.clk(cpu_clk),.rst(~reset_n),.key(~Button_Mid),.key_out(Button_Confirm));
    
    assign rst = ~reset_n;
    wire [`DATA_WIDTH] pc_t, inst_t;
    wire [31:0] seg_out;
    CPU cpu_inst(
        .cpuclk(cpuclk),
        .memclk(memclk),
        .reset(rst),
        .UartData(uart_data),
        .UartAddress(uart_addr),
        .UartOver(uart_done),
        .Switch1(switches1),
        .Switch2(switches2),
        .Button_Confirm(Button_Confirm),
        .Led1(led1_out),
        .Led2(led2_out),
        .Seg1Out(seg_out)
    );

    Uart uart_inst(
        .clk(clk),
        .reset(rst),
        .rx(rx),
        .DataOut(uart_data),
        .Address(uart_addr),
        .Done(uart_done)
    );

    assign seg1_out = seg_out;
    segDisplay segDisplay_l(
        .clk(clk),
        .rst(rst),
        
    
        .hex_data(seg1_out[31:16]),
        .hex_point(0),
        
        .seg(seg1),
        .sel(sel1)
    
    );
    segDisplay segDisplay_r(
            .clk(clk),
            .rst(rst),
            
        
            .hex_data(seg1_out[15:0]),
            .hex_point(0),
            
            .seg(seg2),
            .sel(sel2)
        
        );
endmodule
