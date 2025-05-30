module CPU_Sim ();

    logic cpuclk, memclk, rst_n, uart_done;
    logic [7:0] switches1;
    logic [7:0] led1;
    logic bt1;
    logic [31:0] pc_t;
    logic [31:0] inst_t;
    logic [31:0] mem_inst;
    logic [31:0] mem_data;
    
    CPU cpu_inst (
        .cpuclk,
        .memclk,
        .rst_n,
        .uart_done,
        .switches1,
        .bt1,
        .led1_out(led1),
        .pc_t,
        .inst_t,
        .mem_data,
        .mem_inst
    );

    initial begin
        rst_n = 0;
        cpuclk = 0;
        memclk = 0;
        uart_done = 0;
        switches1 = 0;
        bt1 = 0;
        forever begin
            #5 memclk = ~memclk;
        end
    end

    initial fork
        #5 uart_done = 1;
    join

    initial fork
        forever begin
            #5 cpuclk = ~cpuclk;
        end
    join
    
    initial fork
        #30 rst_n = 1;
    join

    initial fork
        #200 switches1 = 8'h09;
        #253 bt1 = 1;
        #680 bt1 = 0;
    join

    initial fork
        #800 $finish;
    join
    
endmodule