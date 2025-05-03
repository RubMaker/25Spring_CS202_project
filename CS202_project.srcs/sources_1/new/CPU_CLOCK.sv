`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2025 01:44:25 PM
// Design Name: 
// Module Name: CPU_CLOCK
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


module CPU_CLOCK (
    input logic clk,      // Input clock signal
    output logic clk_cpu  // Output CPU clock signal
);

    // Counter register, initialized to 0
    logic [15:0] cnt = 16'b0;
    // Temporary clock signal register, initialized to 0
    logic t = 1'b0;

    // Assign the temporary clock signal to the output CPU clock signal
    assign clk_cpu = t;

    /**
     * @brief This always block increments the counter on each positive edge of the input clock.
     *        When the counter reaches 50, it resets to 0.
     */
    always @(posedge clk) begin
        if (cnt == 16'd50) begin
            cnt <= 16'b0;  // Reset the counter when it reaches 50
        end
        else begin
            cnt <= cnt + 1'b1;  // Increment the counter
        end
    end

    /**
     * @brief This always block toggles the temporary clock signal when the counter reaches 50.
     */
    always @(posedge clk) begin
        if (cnt == 16'd50) begin
            t <= ~t;  // Toggle the temporary clock signal
        end 
    end
    
endmodule