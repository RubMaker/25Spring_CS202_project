`timescale 1ns / 1ps

// PC module: Updates the program counter based on various control signals.
// When flush is asserted (branch resolved or hazards cleared), the new PC is loaded immediately.
module PC(
    input         clk,           // Clock signal
    input         rst,           // Reset signal (active high)
    input         PC_Write,      // When low, indicates a stall (hazard detected) and PC should not update
    input         icache_stall,  // Stall signal from ICache
    input         dcache_stall,  // Stall signal from DCache
    input         flush,         // Flush signal: overrides stall to update the PC immediately
    input  [31:0] new_pc,        // New PC value to load (e.g. branch target or sequential PC)
    output [31:0] pc_out         // Current PC output
);

    reg [31:0] pc;

    // Output the current PC
    assign pc_out = pc;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pc <= 32'd0;
        end else if (flush) begin
            pc <= new_pc;  // On flush, update PC immediately (override stall signals)
        end else if (!PC_Write || icache_stall || dcache_stall) begin
            pc <= pc;      // Stall: keep the current PC value
        end else begin
            pc <= new_pc;  // Normal case: update PC with new_pc
        end
    end

endmodule
