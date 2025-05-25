`timescale 1ns/1ps
// Module: ICache
// Description: Direct-mapped Instruction Cache that contains 64 blocks, each holding 16 bytes (4 32-bit instructions).
module ICache (
  input  wire         clk,         // Clock signal
  input  wire         rst,         // Reset signal (active high)
  input  wire [31:0]  Addr,        // Input address (byte address)
  output wire [31:0]  Inst,        // Output instruction (32-bit word)
  output wire         ICacheStall, // Stall signal; high when the cache miss occurs
  output wire [31:0]  MemPc        // Address passed to the memory interface
);

  // Pass the input address directly to MemPc
  assign MemPc = Addr;

  // State definitions
  parameter IDLE   = 1'b0;
  parameter REFILL = 1'b1;
  
  reg State;
  
  // Cache arrays: each block is 128 bits (4 x 32-bit instructions)
  reg [127:0] CacheData [0:63];
  reg [21:0]  CacheTag  [0:63]; // 22-bit tag (bits [31:10])
  reg         CacheValid[0:63];
  
  // Simple ROM that simulates main memory (64 blocks)
  reg [127:0] Rom [0:63];
  
  // Extract Tag, Index, and Offset from Addr
  wire [21:0] ReqTag = Addr[31:10];
  wire [5:0]  Index  = Addr[9:4];
  wire [3:0]  BlockOffset = Addr[3:0];  // Only bits [3:2] are used for word selection
  wire [1:0]  WordOffset  = Addr[3:2];
  
  // Cache hit condition: valid bit is high and the Tag matches
  wire Hit = CacheValid[Index] && (CacheTag[Index] == ReqTag);

  // Instruction register that holds the fetched instruction
  reg [31:0] InstReg;
  assign Inst = InstReg;
  
  // Stall register: indicates when a cache miss occurs
  reg StallReg;
  assign ICacheStall = StallReg;
  
  integer I;
  // Initialization: populate each ROM block and invalidate all cache entries
  initial begin
    for (I = 0; I < 64; I = I + 1) begin
      Rom[I] = {4{I, I, I, I}}; // Simplified initialization pattern
    end
    for (I = 0; I < 64; I = I + 1) begin
      CacheValid[I] = 1'b0;
      CacheTag[I]   = 22'd0;
      CacheData[I]  = 128'd0;
    end
    State = IDLE;
    StallReg = 1'b0;
    InstReg  = 32'd0;
  end

  // Cache state machine:
  // - In the IDLE state: check for cache hit. If hit, output the corresponding 32-bit word.
  // - On cache miss, transition to the REFILL state, load the block from ROM into the cache, and output the instruction.
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      for (I = 0; I < 64; I = I + 1) begin
        CacheValid[I] <= 1'b0;
        CacheTag[I]   <= 22'd0;
        CacheData[I]  <= 128'd0;
      end
      State <= IDLE;
      StallReg <= 1'b0;
      InstReg  <= 32'd0;
    end else begin
      case (State)
        IDLE: begin
          if (Hit) begin
            StallReg <= 1'b0;
            // Select the appropriate 32-bit word based on WordOffset
            case (WordOffset)
              2'd0: InstReg <= CacheData[Index][127:96];
              2'd1: InstReg <= CacheData[Index][95:64];
              2'd2: InstReg <= CacheData[Index][63:32];
              2'd3: InstReg <= CacheData[Index][31:0];
              default: InstReg <= 32'd0;
            endcase
          end else begin
            StallReg <= 1'b1;
            State <= REFILL;
          end
        end
        REFILL: begin
          // Load block from ROM into the cache
          CacheData[Index] <= Rom[Index];
          CacheTag[Index]  <= ReqTag;
          CacheValid[Index] <= 1'b1;
          // Output the requested 32-bit instruction
          case (WordOffset)
            2'd0: InstReg <= Rom[Index][127:96];
            2'd1: InstReg <= Rom[Index][95:64];
            2'd2: InstReg <= Rom[Index][63:32];
            2'd3: InstReg <= Rom[Index][31:0];
            default: InstReg <= 32'd0;
          endcase
          StallReg <= 1'b0;
          State <= IDLE;
        end
        default: State <= IDLE;
      endcase
    end
  end

endmodule