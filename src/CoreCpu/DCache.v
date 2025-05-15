`timescale 1ns / 1ps
`include "Constants.vh" 

//////////////////////////////////////////////////////////////////////////////////
// Module: DCache
// Description: Direct-mapped data cache implementation.
//              Supports load and store operations with blocking miss handling.
//////////////////////////////////////////////////////////////////////////////////

module DCache(
    input            clk,            // Clock signal
    input            rst,            // Reset signal, active high
    // CPU Interface
    input  [31:0]    Addr,           // Memory access address (byte address)
    input  [31:0]    WriteData,      // Data to be written (store instruction)
    input            MemRead,        // Memory read enable
    input            MemWrite,       // Memory write enable
    input  [2:0]     LS_OPERATION,          // Load/Store operation type
    output reg [31:0] DataOut,       // Data output for load instructions
    output reg       Stall,          // Stall signal when cache miss occurs
    // Memory Interface
    input  [31:0]    MemData,        // Data from external memory
    output reg [31:0] MemAddr,       // Address sent to memory
    output reg [31:0] MemWriteData,  // Data sent to memory for writing
    output reg       MemWe           // Memory write enable, active high
);

  // Parameters for cache configuration.
  localparam INDEX_BITS        = 6;   // 64 blocks -> 6-bit index
  localparam OFFSET_BITS       = 4;   // 16 bytes per block -> 4-bit offset
  localparam TAG_BITS          = 32 - INDEX_BITS - OFFSET_BITS; // 22 bits tag
  localparam BLOCK_SIZE        = 16;  // Block size in bytes
  localparam WORDS_PER_BLOCK   = BLOCK_SIZE / 4;  // 4 words per block
  localparam BLOCK_WIDTH       = 1 + TAG_BITS + 128;  // Valid bit + Tag + Data

  // State machine definitions.
  localparam S_IDLE  = 2'b00;
  localparam S_ALLOC = 2'b01;

  // Cache storage array: one entry per block.
  reg [BLOCK_WIDTH-1:0] Cache [0:(1<<INDEX_BITS)-1];

  // State registers.
  reg [1:0] State;
  reg [1:0] AllocCounter;       // Counter for block allocation (0 to 3)
  reg [127:0] BlockTemp;        // Temporary storage for a cache block

  // Locking request signals for a miss.
  reg [31:0] ReqAddr;
  reg        ReqMemRead;
  reg        ReqMemWrite;
  reg [2:0]  ReqLS_OPERATION;
  reg [31:0] ReqWriteData;

  // Temporary words.
  reg [31:0] UpdatedWord;
  reg [31:0] OrigWord;
  reg [31:0] UpdWord;

  // Parse address into tag, index, and offset.
  wire [TAG_BITS-1:0] AddrTag = Addr[31:(INDEX_BITS+OFFSET_BITS)];
  wire [INDEX_BITS-1:0] AddrIndex = Addr[(OFFSET_BITS+INDEX_BITS-1):OFFSET_BITS];
  wire [OFFSET_BITS-1:0] AddrOffset = Addr[OFFSET_BITS-1:0];

  // For locked request.
  wire [TAG_BITS-1:0] ReqTag = ReqAddr[31:(INDEX_BITS+OFFSET_BITS)];
  wire [INDEX_BITS-1:0] ReqIndex = ReqAddr[(OFFSET_BITS+INDEX_BITS-1):OFFSET_BITS];
  wire [OFFSET_BITS-1:0] ReqOffset = ReqAddr[OFFSET_BITS-1:0];

  // Cache hit condition.
  wire Hit;
  assign Hit = Cache[AddrIndex][BLOCK_WIDTH-1] && (Cache[AddrIndex][BLOCK_WIDTH-2 -: TAG_BITS] == AddrTag);

  // Determine which word in the block is targeted.
  wire [1:0] WordSel = AddrOffset[3:2];
  reg [31:0] CachedWord;
  always @(*) begin
    case(WordSel)
      2'b00: CachedWord = Cache[AddrIndex][127:96];
      2'b01: CachedWord = Cache[AddrIndex][95:64];
      2'b10: CachedWord = Cache[AddrIndex][63:32];
      2'b11: CachedWord = Cache[AddrIndex][31:0];
      default: CachedWord = 32'd0;
    endcase
  end

  // Function: MergeWord �? merges new data into the original word based on LS_OPERATION.
  function [31:0] MergeWord;
    input [31:0] Orig;       // Original 32-bit word
    input [31:0] NewData;    // New data to be merged
    input [2:0]  Op;         // Load/Store operation code
    input [1:0]  ByteSel;    // Byte select (from Addr[1:0])
    reg [15:0] Half;
    reg [7:0]  Byte;
    begin
      case(Op)
        `SW_OPERATION: MergeWord = NewData;  // SW_OPERATION: full word write
        `SH_OPERATION: begin                // SH_OPERATION: half-word write
                 if (ByteSel[1] == 1'b0) begin
                   Half = NewData[15:0];
                   MergeWord = {Orig[31:16], Half};
                 end else begin
                   Half = NewData[15:0];
                   MergeWord = {Half, Orig[15:0]};
                 end
               end
        `SB_OPERATION: begin                // SB_OPERATION: byte write
                 case(ByteSel)
                   2'b00: MergeWord = {Orig[31:8], NewData[7:0]};
                   2'b01: MergeWord = {Orig[31:16], NewData[7:0], Orig[7:0]};
                   2'b10: MergeWord = {Orig[31:24], NewData[7:0], Orig[15:0]};
                   2'b11: MergeWord = {NewData[7:0], Orig[23:0]};
                   default: MergeWord = Orig;
                 endcase
               end
        default: MergeWord = Orig;
      endcase
    end
  endfunction

  // Function: ExtractWord �? extracts and sign/zero extends data from a 32-bit word based on LS_OPERATION.
  function [31:0] ExtractWord;
    input [31:0] Word;
    input [2:0]  Op;
    input [1:0]  ByteSel;
    reg [7:0] B;
    reg [15:0] H;
    begin
      case(Op)
        `LW_OPERATION: ExtractWord = Word;  // LW_OPERATION
        `LB_OPERATION: begin               // LB_OPERATION (sign-extend)
                  case(ByteSel)
                    2'b00: B = Word[7:0];
                    2'b01: B = Word[15:8];
                    2'b10: B = Word[23:16];
                    2'b11: B = Word[31:24];
                    default: B = 8'd0;
                  endcase
                  ExtractWord = {{24{B[7]}}, B};
                end
        `LBU_OPERATION: begin              // LBU_OPERATION (zero-extend)
                  case(ByteSel)
                    2'b00: B = Word[7:0];
                    2'b01: B = Word[15:8];
                    2'b10: B = Word[23:16];
                    2'b11: B = Word[31:24];
                    default: B = 8'd0;
                  endcase
                  ExtractWord = {24'd0, B};
                end
        `LH_OPERATION: begin               // LH_OPERATION (sign-extend)
                  if (ByteSel[1] == 1'b0)
                    H = Word[15:0];
                  else
                    H = Word[31:16];
                  ExtractWord = {{16{H[15]}}, H};
                end
        `LHU_OPERATION: begin              // LHU_OPERATION (zero-extend)
                  if (ByteSel[1] == 1'b0)
                    H = Word[15:0];
                  else
                    H = Word[31:16];
                  ExtractWord = {16'd0, H};
                end
        default: ExtractWord = Word;
      endcase
    end
  endfunction
  
  /**
   * @brief Main state machine for DCache.
   *        S_IDLE: If a valid CPU request (MemRead/MemWrite) occurs and hits in cache, perform data read/write.
   *                Otherwise, transition to S_ALLOC to fill a block from memory.
   *        S_ALLOC: Issue memory read requests to update the cache block, then process the original request.
   */
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      State         <= S_IDLE;
      Stall         <= 1'b0;
      AllocCounter  <= 2'd0;
      MemAddr       <= 32'd0;
      MemWe         <= 1'b0;
      DataOut       <= 32'd0;
      ReqAddr       <= 32'd0;
    end else begin
      case(State)
        S_IDLE: begin
          MemWe <= 1'b0;
          Stall <= 1'b0;
          if (MemRead || MemWrite) begin
            if(Hit) begin
              if(MemRead) begin
                DataOut <= ExtractWord(CachedWord, LS_OPERATION, Addr[1:0]);
              end
              if(MemWrite) begin
                case(WordSel)
                  2'b00: UpdatedWord = Cache[AddrIndex][127:96];
                  2'b01: UpdatedWord = Cache[AddrIndex][95:64];
                  2'b10: UpdatedWord = Cache[AddrIndex][63:32];
                  2'b11: UpdatedWord = Cache[AddrIndex][31:0];
                  default: UpdatedWord = 32'd0;
                endcase
                UpdatedWord = MergeWord(UpdatedWord, WriteData, LS_OPERATION, Addr[1:0]);
                case(WordSel)
                  2'b00: Cache[AddrIndex][127:96] <= UpdatedWord;
                  2'b01: Cache[AddrIndex][95:64] <= UpdatedWord;
                  2'b10: Cache[AddrIndex][63:32] <= UpdatedWord;
                  2'b11: Cache[AddrIndex][31:0]  <= UpdatedWord;
                endcase
                // Write-through to memory
                MemAddr       <= Addr;
                MemWriteData  <= WriteData;
                MemWe         <= 1'b1;
              end
            end else begin
              Stall         <= 1'b1;
              State         <= S_ALLOC;
              AllocCounter  <= 2'd0;
              ReqAddr       <= Addr;
              ReqMemRead    <= MemRead;
              ReqMemWrite   <= MemWrite;
              ReqLS_OPERATION      <= LS_OPERATION;
              ReqWriteData  <= WriteData;
            end
          end else begin
            MemWe <= 1'b0;
          end
        end
        S_ALLOC: begin
          Stall <= 1'b1;
          MemWe <= 1'b0;
          // Compute memory address for block fetch based on AllocCounter.
          MemAddr <= { ReqAddr[31:OFFSET_BITS], {OFFSET_BITS{1'b0}} } + (AllocCounter << 2);
          case(AllocCounter)
            2'd0: BlockTemp[127:96] <= MemData;
            2'd1: BlockTemp[95:64]  <= MemData;
            2'd2: BlockTemp[63:32]  <= MemData;
            2'd3: BlockTemp[31:0]   <= MemData;
          endcase
          if (AllocCounter == 2'd3) begin
            Cache[ReqIndex] <= {1'b1, ReqAddr[31:(INDEX_BITS+OFFSET_BITS)], BlockTemp};
            State <= S_IDLE;
            Stall <= 1'b0;
            if (ReqMemRead)
              case(ReqAddr[3:2])
                2'b00: DataOut <= ExtractWord(BlockTemp[127:96], ReqLS_OPERATION, ReqAddr[1:0]);
                2'b01: DataOut <= ExtractWord(BlockTemp[95:64], ReqLS_OPERATION, ReqAddr[1:0]);
                2'b10: DataOut <= ExtractWord(BlockTemp[63:32], ReqLS_OPERATION, ReqAddr[1:0]);
                2'b11: DataOut <= ExtractWord(BlockTemp[31:0], ReqLS_OPERATION, ReqAddr[1:0]);
                default: DataOut <= 32'd0;
              endcase
            else if (ReqMemWrite) begin
              case(ReqAddr[3:2])
                2'b00: OrigWord = BlockTemp[127:96];
                2'b01: OrigWord = BlockTemp[95:64];
                2'b10: OrigWord = BlockTemp[63:32];
                2'b11: OrigWord = BlockTemp[31:0];
                default: OrigWord = 32'd0;
              endcase
              UpdWord = MergeWord(OrigWord, ReqWriteData, ReqLS_OPERATION, ReqAddr[1:0]);
              case(ReqAddr[3:2])
                2'b00: Cache[ReqIndex][127:96] <= UpdWord;
                2'b01: Cache[ReqIndex][95:64] <= UpdWord;
                2'b10: Cache[ReqIndex][63:32] <= UpdWord;
                2'b11: Cache[ReqIndex][31:0]  <= UpdWord;
              endcase
              MemAddr       <= ReqAddr;
              MemWriteData  <= ReqWriteData;
              MemWe         <= 1'b1;
            end
          end else begin
            AllocCounter <= AllocCounter + 1;
          end
        end
        default: State <= S_IDLE;
      endcase
    end
  end

endmodule