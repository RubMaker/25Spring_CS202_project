`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////

// Company: 

// Engineer: 

// 

// Create Date: 05/03/2025 01:44:25 PM

// Design Name: 

// Module Name: CpuClock

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



module CpuClock (
    input logic clk,      // Input clock signal
    output logic CpuClock  // Output CPU clock signal
);
    // Counter register, initialized to 0
    logic [15:0] Cnt = 16'b0;
    // Temporary clock signal register, initialized to 0
    logic t = 0;
    /**
     * @brief This always block increments the counter on each positive edge of the input clock.
     *        When the counter reaches 50, it resets to 0.
     */
    always @(posedge clk) begin
        if (Cnt == 16'd50) begin
            Cnt <= 16'b0;  // Reset the counter when it reaches 50
        end else begin
            Cnt <= Cnt + 1'b1;  // Increment the counter
        end
    end

    /**
     * @brief This always block toggles the temporary clock signal when the counter reaches 50.
     */
    always @(posedge clk) begin
        if (Cnt == 16'd50) begin
            t <= ~t;  // Toggle the temporary clock signal
        end 
    end

    assign CpuClock = t;

endmodule
