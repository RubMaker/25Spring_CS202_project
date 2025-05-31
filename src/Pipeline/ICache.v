`timescale 1ns/1ps
`include "Constants.vh"

// Module: ICache
// Description: Direct-mapped instruction cache (16 blocks). When a cache miss occurs, the external memory
// instruction (ExtMemInst) is used to refill the cache.
module ICache (
  input  wire         clk,         // Clock signal
  input  wire         rst,         // Active high reset signal
  input  wire [31:0]  Addr,        // Input address (byte address)
  input  wire [31:0]  ExtMemInst,  // Instruction from external memory (simulated by testbench)
  output wire [31:0]  Inst,        // Output instruction (32-bit word)
  output wire         IStall // Stall signal for cache miss
);
  
  // State definitions
  parameter IDLE   = 1'b0;
  parameter REFILL = 1'b1;
  
  reg State;
  
  // Cache configuration: 16 blocks with one 32-bit word per block.
  localparam INDEX_BITS = 4;   // 16 blocks require 4-bit index
  localparam OFFSET_BITS = 2;  // 4 bytes per block => 2-bit offset
  localparam TAG_BITS = 32 - INDEX_BITS - OFFSET_BITS; // Tag width
  
  // Cache storage arrays
  reg [31:0] CacheData [0:(1<<INDEX_BITS)-1];
  reg [TAG_BITS-1:0] CacheTag  [0:(1<<INDEX_BITS)-1];
  reg CacheValid[0:(1<<INDEX_BITS)-1];
  
  // Decompose the address into tag and index (offset not used because each block stores one word)
  wire [TAG_BITS-1:0] ReqTag = Addr[31:(INDEX_BITS+OFFSET_BITS)];
  wire [INDEX_BITS-1:0] Index  = Addr[(OFFSET_BITS+INDEX_BITS-1):OFFSET_BITS];
  wire [1:0] WordOffset  = 2'd0; // Always 0 because each block contains one word
  
  // Cache hit condition: valid bit set and matching tag
  wire Hit = CacheValid[Index] && (CacheTag[Index] == ReqTag);
  
  // Register to hold the output instruction
  reg [31:0] InstReg;
  assign Inst = InstReg;
  
  // Register for stall signaling
  reg StallReg;
  assign IStall = StallReg;
  
  integer I;
  // Initial block: Invalidate all cache entries and initialize state
  initial begin
    for (I = 0; I < (1<<INDEX_BITS); I = I + 1) begin
      CacheValid[I] = 1'b0;
      CacheTag[I]   = {TAG_BITS{1'b0}};
      CacheData[I]  = 32'd0;
    end
    State = IDLE;
    StallReg = 1'b0;
    InstReg  = 32'd0;
  end

  // State machine:
  // - In IDLE state: If there is a cache hit, output the data.
  //   Otherwise, set stall signal and transition to REFILL to load instruction from external memory.
  // - In REFILL state: Update cache with ExtMemInst, output the instruction, and return to IDLE.
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      for (I = 0; I < (1<<INDEX_BITS); I = I + 1) begin
        CacheValid[I] <= 1'b0;
        CacheTag[I]   <= {TAG_BITS{1'b0}};
        CacheData[I]  <= 32'd0;
      end
      State <= IDLE;
      StallReg <= 1'b0;
      InstReg  <= 32'd0;
    end else begin
      case (State)
        IDLE: begin
          if (Hit) begin
            StallReg <= 1'b0;
            InstReg <= CacheData[Index];
          end else begin
            StallReg <= 1'b1;
            State    <= REFILL;
          end
        end
        REFILL: begin
          CacheData[Index] <= ExtMemInst;
          CacheTag[Index]  <= ReqTag;
          CacheValid[Index] <= 1'b1;
          InstReg <= ExtMemInst;
          StallReg <= 1'b0;
          State <= IDLE;
        end
        default: State <= IDLE;
      endcase
    end
  end

endmodule
