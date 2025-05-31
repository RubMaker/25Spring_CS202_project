`timescale 1ns/1ps
`include "Constants.vh"

module DCache(
    input             clk,
    input             rst,
    // CPU interface
    input  [31:0]     Addr,
    input  [31:0]     WriteData,
    input             MemRead,
    input             MemWrite,
    input  [2:0]      LS_op,
    output reg [31:0] DataOut,
    output reg        DStall,
    // Memory interface
    input  [31:0]     MemData,
    output reg [31:0] MemAddr,
    output reg [31:0] MemWriteData,
    output reg        MemWb
);

  // Parameter definitions
  localparam INDEX_BITS  = 4;
  localparam OFFSET_BITS = 2;
  localparam TAG_BITS    = 32 - INDEX_BITS - OFFSET_BITS;
  // Cache format: { valid (1 bit), tag (TAG_BITS), data (32 bits) }
  localparam BLOCK_WIDTH = 1 + TAG_BITS + 32;

  // State machine states
  localparam STATE_IDLE   = 2'b00;
  localparam STATE_MISS   = 2'b01;
  localparam STATE_UPDATE = 2'b10;
  
  reg [1:0] state;

  // Cache array: total number of cache lines is 2^(INDEX_BITS)
  reg [BLOCK_WIDTH-1:0] Cache [0:(1<<INDEX_BITS)-1];
  integer i;
  
  // 初始化 cache 数组与状态
  initial begin
    for (i = 0; i < (1 << INDEX_BITS); i = i + 1) begin
      Cache[i] = 0;
    end
    state = STATE_IDLE;
  end

  // Address decoding:
  // Tag: Addr[31: OFFSET_BITS + INDEX_BITS]
  // Index: Addr[OFFSET_BITS + INDEX_BITS - 1: OFFSET_BITS]
  // Offset: Addr[OFFSET_BITS - 1: 0]
  wire [INDEX_BITS-1:0] index = Addr[OFFSET_BITS + INDEX_BITS - 1: OFFSET_BITS];
  wire [TAG_BITS-1:0] addr_tag = Addr[31:OFFSET_BITS + INDEX_BITS];

  // Extract valid bit, tag, and data from the selected cache line
  wire cache_valid = Cache[index][BLOCK_WIDTH-1];
  wire [TAG_BITS-1:0] cache_tag = Cache[index][BLOCK_WIDTH-2 -: TAG_BITS];
  wire [31:0] cache_data = Cache[index][31:0];

  // Determine a cache hit: valid must be true and tags must match
  wire hit = cache_valid && (cache_tag == addr_tag);

  // Process external memory data based on LS_op for load operations
  reg [31:0] proc_MemData;
  always @(*) begin
    if (rst) begin
      proc_MemData = 32'b0;
    end
    else if (MemRead) begin
      case (LS_op)
        `LW_OPERATION: proc_MemData = MemData;
        `LH_OPERATION: begin
          if (Addr[1])
            proc_MemData = {{16{MemData[31]}}, MemData[31:16]};
          else
            proc_MemData = {{16{MemData[15]}}, MemData[15:0]};
        end
        `LHU_OPERATION: begin
          if (Addr[1])
            proc_MemData = {16'b0, MemData[31:16]};
          else
            proc_MemData = {16'b0, MemData[15:0]};
        end
        `LB_OPERATION: begin
          case (Addr[1:0])
            2'b00: proc_MemData = {{24{MemData[7]}},  MemData[7:0]};
            2'b01: proc_MemData = {{24{MemData[15]}}, MemData[15:8]};
            2'b10: proc_MemData = {{24{MemData[23]}}, MemData[23:16]};
            2'b11: proc_MemData = {{24{MemData[31]}}, MemData[31:24]};
            default: proc_MemData = MemData;
          endcase
        end
        `LBU_OPERATION: begin
          case (Addr[1:0])
            2'b00: proc_MemData = {24'b0, MemData[7:0]};
            2'b01: proc_MemData = {24'b0, MemData[15:8]};
            2'b10: proc_MemData = {24'b0, MemData[23:16]};
            2'b11: proc_MemData = {24'b0, MemData[31:24]};
            default: proc_MemData = MemData;
          endcase
        end
        default: proc_MemData = MemData;
      endcase
    end
    else begin
      proc_MemData = WriteData;
    end
  end

  // For store operations on cache hit, merge the new store data with the cache data
  reg [31:0] updated_data;
  always @(*) begin
    if (rst) begin
      updated_data = 32'b0;
    end
    else if (MemWrite && hit) begin
      case (LS_op)
        `SW_OPERATION: updated_data = WriteData;
        `SH_OPERATION: begin
          if (Addr[1])
            updated_data = {WriteData[15:0], cache_data[15:0]};
          else
            updated_data = {cache_data[31:16], WriteData[15:0]};
        end
        `SB_OPERATION: begin
          case (Addr[1:0])
            2'b00: updated_data = {cache_data[31:8], WriteData[7:0]};
            2'b01: updated_data = {cache_data[31:16], WriteData[7:0], cache_data[7:0]};
            2'b10: updated_data = {cache_data[31:24], WriteData[7:0], cache_data[15:0]};
            2'b11: updated_data = {WriteData[7:0], cache_data[23:0]};
            default: updated_data = WriteData;
          endcase
        end
        default: updated_data = WriteData;
      endcase
    end else begin
      updated_data = WriteData;
    end
  end
  
  // 组合逻辑：在 rst 有效时输出默认值，避免 X 值传递
  always @(*) begin
    if (rst) begin
         DataOut = 32'b0;
         MemAddr = 32'b0;
         MemWriteData = 32'b0;
         MemWb = 1'b0;
         DStall = 1'b0;
    end else begin
         case (state)
           STATE_IDLE: begin
             if (MemRead) begin
               if (hit) begin
                 DStall = 0;
                 case (LS_op)
                   `LW_OPERATION: DataOut = cache_data;
                   `LH_OPERATION: begin
                     if (Addr[1])
                       DataOut = {{16{cache_data[31]}}, cache_data[31:16]};
                     else
                       DataOut = {{16{cache_data[15]}}, cache_data[15:0]};
                   end
                   `LHU_OPERATION: begin
                     if (Addr[1])
                       DataOut = {16'b0, cache_data[31:16]};
                     else
                       DataOut = {16'b0, cache_data[15:0]};
                   end
                   `LB_OPERATION: begin
                     case (Addr[1:0])
                       2'b00: DataOut = {{24{cache_data[7]}}, cache_data[7:0]};
                       2'b01: DataOut = {{24{cache_data[15]}}, cache_data[15:8]};
                       2'b10: DataOut = {{24{cache_data[23]}}, cache_data[23:16]};
                       2'b11: DataOut = {{24{cache_data[31]}}, cache_data[31:24]};
                       default: DataOut = cache_data;
                     endcase
                   end
                   `LBU_OPERATION: begin
                     case (Addr[1:0])
                       2'b00: DataOut = {24'b0, cache_data[7:0]};
                       2'b01: DataOut = {24'b0, cache_data[15:8]};
                       2'b10: DataOut = {24'b0, cache_data[23:16]};
                       2'b11: DataOut = {24'b0, cache_data[31:24]};
                       default: DataOut = cache_data;
                     endcase
                   end
                   default: DataOut = cache_data;
                 endcase
               end else begin
                 DStall = 1;
                 MemAddr = Addr;
               end
             end else if (MemWrite) begin
               if (hit) begin
                 DStall = 0;
                 MemAddr = Addr;
                 MemWriteData = updated_data;
                 MemWb = 1;
                 DataOut = updated_data;
               end else begin
                 DStall = 1;
                 MemAddr = Addr;
               end
             end else begin
               DStall = 0;
             end
           end
           STATE_MISS: begin
             DStall = 1;
             MemAddr = Addr;
           end
           STATE_UPDATE: begin
             DStall = 0;
             if (MemWrite) begin
               DataOut = updated_data;
               MemAddr = Addr;
               MemWriteData = updated_data;
               MemWb = 1;
             end else begin
               case (LS_op)
                 `LW_OPERATION: DataOut = proc_MemData;
                 `LH_OPERATION: begin
                   if (Addr[1])
                     DataOut = {{16{proc_MemData[31]}}, proc_MemData[31:16]};
                   else
                     DataOut = {{16{proc_MemData[15]}}, proc_MemData[15:0]};
                 end
                 `LHU_OPERATION: begin
                   if (Addr[1])
                     DataOut = {16'b0, proc_MemData[31:16]};
                   else
                     DataOut = {16'b0, proc_MemData[15:0]};
                 end
                 `LB_OPERATION: begin
                   case (Addr[1:0])
                     2'b00: DataOut = {{24{proc_MemData[7]}}, proc_MemData[7:0]};
                     2'b01: DataOut = {{24{proc_MemData[15]}}, proc_MemData[15:8]};
                     2'b10: DataOut = {{24{proc_MemData[23]}}, proc_MemData[23:16]};
                     2'b11: DataOut = {{24{proc_MemData[31]}}, proc_MemData[31:24]};
                     default: DataOut = proc_MemData;
                   endcase
                 end
                 `LBU_OPERATION: begin
                   case (Addr[1:0])
                     2'b00: DataOut = {24'b0, proc_MemData[7:0]};
                     2'b01: DataOut = {24'b0, proc_MemData[15:8]};
                     2'b10: DataOut = {24'b0, proc_MemData[23:16]};
                     2'b11: DataOut = {24'b0, proc_MemData[31:24]};
                     default: DataOut = proc_MemData;
                   endcase
                 end
                 default: DataOut = proc_MemData;
               endcase
               MemAddr = Addr;
             end
           end
           default: begin
             DStall = 0;
             DataOut = 32'b0;
           end
         endcase
    end
  end

  // State machine update
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      state <= STATE_IDLE;
      for (i = 0; i < (1 << INDEX_BITS); i = i + 1) begin
        Cache[i] <= 0;
      end
    end else begin
      case (state)
        STATE_IDLE: begin
          if ((MemRead || MemWrite) && !hit)
            state <= STATE_MISS;
          else begin
            if (MemWrite && hit)
              Cache[index] <= {1'b1, addr_tag, updated_data};
            state <= STATE_IDLE;
          end
        end
        STATE_MISS: state <= STATE_UPDATE;
        STATE_UPDATE: begin
          if (MemRead)
            Cache[index] <= {1'b1, addr_tag, MemData};
          else if (MemWrite)
            Cache[index] <= {1'b1, addr_tag, updated_data};
          state <= STATE_IDLE;
        end
        default: state <= STATE_IDLE;
      endcase
    end
  end

endmodule
