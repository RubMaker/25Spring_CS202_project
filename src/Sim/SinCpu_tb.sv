module CPUSin_tb ();

    logic clk, memclk, reset, UartOver;
    logic [7:0] Switch1;
    logic [7:0] led1;
    logic Button1;
    logic [31:0] Pc_test;
    logic [31:0] Inst_test;
    // logic [4:0] rs1,rs2,thisPc, nextPc;
    // logic hit, uncached;
    CPUSin cpu_inst (
        .clk,
        .memclk,
        .reset,
        .UartOver,
        .Switch1,
        .Button1,
        .Led1(led1),
        .Pc_test,
        .Inst_test
        // .rs1,
        // .rs2,
        // .hit,
        // .uncached
    );

    initial begin
        reset = 1;
        clk = 0;
        memclk = 0;
        UartOver = 0;
        Switch1 = 0;
        Button1 = 0;
        forever begin
            #5 memclk = ~memclk;
        end
    end

    initial fork
        #5 UartOver = 1;
    join

    initial fork
        forever begin
            #5 clk = ~clk;
        end
    join
    
    initial fork
        #30 reset = 0;
    join

    initial fork
        #200 Switch1 = 8'h09;
        #253 Button1 = 1;
        #680 Button1 = 0;
    join

    initial fork
        #800 $finish;
    join
    
endmodule
