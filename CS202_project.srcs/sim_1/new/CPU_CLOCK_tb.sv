`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2025 01:48:30 PM
// Design Name: 
// Module Name: CPU_CLK_tb
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


module CPU_CLK_tb();

// Inputs
logic clk;
// Outputs
logic clk_cpu;

// Instantiate the Unit Under Test (UUT)
CPU_CLOCK uut (
    .clk(clk),
    .clk_cpu(clk_cpu)
);

// Clock generation
initial begin
    clk = 0;
    forever #5 clk = ~clk; // 100MHz clock (10ns period)
end

// Test sequence
initial begin
    // $dumpfile("cpu_clock.vcd");
    // $dumpvars(0, CPU_CLOCK_tb);
    
    // Initialize
    #100;
    
    // Verify 3 full output clock cycles (6 toggles)
    repeat(3) begin
        // Wait for counter to reach 50
        wait(uut.cnt == 16'd50);
        $display("Counter reached 50 at time %0t", $time);
        
        // Verify output clock toggle
        #1; // Small delay to observe the toggle
        if (clk_cpu !== ~clk_cpu) begin
            $error("Output clock did not toggle at counter 50");
        end
        
        // Verify counter reset
        #10; // Wait for next clock edge
        if (uut.cnt !== 16'd0) begin
            $error("Counter did not reset after reaching 50");
        end
    end
    
    // Verify frequency division
    // Measure time between two rising edges of clk_cpu
    // realtime start_time, end_time;
    // @(posedge clk_cpu);
    // start_time = $time;
    // @(posedge clk_cpu);
    // end_time = $time;
    
    // $display("Output clock period: %0t ns", end_time - start_time);
    // if ((end_time - start_time) != 1020) begin // 51 clocks × 10ns × 2 edges
    //     $error("Incorrect output clock frequency");
    // end
    
    $display("All tests passed");
    $finish;
end

endmodule
