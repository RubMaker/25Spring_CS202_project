`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module: ICache
// Description: Direct-mapped Instruction Cache.
//              Contains 64 blocks of 16 bytes each (4 words per block).
//              The cache uses [31:10] as tag, [9:4] as index, and [3:0] as block offset.
//////////////////////////////////////////////////////////////////////////////////

module ICache (
  input  wire         clk,          // Clock signal
  input  wire         rst,          // Asynchronous reset, active low
  input  wire [31:0]  Addr,         // Input address (byte address)
  output wire [31:0]  Inst,         // Output instruction (32-bit word)
  output wire         ICacheStall,  // Stall signal; high when cache miss occurs
  output wire [31:0]  MemPc         // Output address passed to memory interface
);

  // Pass through the input address to MemPc
  assign MemPc = Addr;

  // Cache state definitions
  parameter IDLE   = 1'b0;
  parameter REFILL = 1'b1;
  
  reg State;
  
  // Cache arrays: each block is 128 bits (4 words)
  reg [127:0] CacheData [0:63];
  reg [21:0]  CacheTag  [0:63]; // 22-bit tag (32-6-4)
  reg         CacheValid[0:63];
  
  // Simple ROM for simulating main memory (64 blocks)
  reg [127:0] Rom [0:63];
  
  // Extract tag, index, and offset from Addr
  wire [21:0] ReqTag = Addr[31:10];
  wire [5:0]  Index  = Addr[9:4];
  wire [3:0]  BlockOffset = Addr[3:0];  // Only bits [3:2] are used for word selection
  wire [1:0]  WordOffset  = Addr[3:2];
  
  // Cache hit condition: valid bit is set and tags match
  wire Hit = CacheValid[Index] && (CacheTag[Index] == ReqTag);

  // Instruction register: holds fetched instruction from cache
  reg [31:0] InstReg;
  assign Inst = InstReg;
  
  // Stall register: indicates whether the cache is stalling due to a miss
  reg StallReg;
  assign ICacheStall = StallReg;
  
  integer I;
  // Initialization: initialize ROM and invalidate cache
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

  /**
   * @brief Cache state machine:
   *        - In IDLE: Check for cache hit. On hit, output the requested word.
   *        - On miss, transition to REFILL state to load block from ROM.
   */
  always @(posedge clk or negedge rst) begin
    if (!rst) begin
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
            // Select the correct word based on WordOffset
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
          // Load block from ROM into cache
          CacheData[Index] <= Rom[Index];
          CacheTag[Index]  <= ReqTag;
          CacheValid[Index] <= 1'b1;
          // Output the requested word
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