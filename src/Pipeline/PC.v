`timescale 1ns / 1ps

module PC(
    input         clk,
    input         rst,
    input         PC_Write,      // When low, the PC is stalled (hazard detected)
    input         icache_stall,  // Stall signal from ICache
    input         dcache_stall,  // Stall signal from DCache
    input  [31:0] new_pc,        // Next PC value to load when not stalled
    output [31:0] pc_out         // Current PC value
);

    reg [31:0] pc;

    // Connect internal register to output
    assign pc_out = pc;

    // On reset, initialize PC to 0; otherwise, update PC only when no stall signals are active.
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pc <= 32'd0;
        end else if (!PC_Write || icache_stall || dcache_stall) begin
            pc <= pc; // Stall: Keep the current PC value
        end else begin
            pc <= new_pc; // Update: load the next PC value
        end
    end

endmodule