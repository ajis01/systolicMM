module MemVecTester(
  input   clock,
  input   reset
);
  reg [7:0] mem_0 [0:1]; // @[Mem.scala 10:16]
  reg [31:0] _RAND_0;
  wire [7:0] mem_0__T_5_data; // @[Mem.scala 10:16]
  wire  mem_0__T_5_addr; // @[Mem.scala 10:16]
  wire [7:0] mem_0__T_3_data; // @[Mem.scala 10:16]
  wire  mem_0__T_3_addr; // @[Mem.scala 10:16]
  wire  mem_0__T_3_mask; // @[Mem.scala 10:16]
  wire  mem_0__T_3_en; // @[Mem.scala 10:16]
  reg  value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_1;
  wire  _T_2; // @[Counter.scala 38:22]
  wire  _T_6; // @[Mem.scala 17:29]
  wire  _T_8; // @[Mem.scala 17:11]
  wire  _T_9; // @[Mem.scala 17:11]
  wire  _T_11; // @[Mem.scala 18:9]
  assign mem_0__T_5_addr = 1'h0;
  assign mem_0__T_5_data = mem_0[mem_0__T_5_addr]; // @[Mem.scala 10:16]
  assign mem_0__T_3_data = 8'h1;
  assign mem_0__T_3_addr = 1'h0;
  assign mem_0__T_3_mask = 1'h1;
  assign mem_0__T_3_en = 1'h1;
  assign _T_2 = value + 1'h1; // @[Counter.scala 38:22]
  assign _T_6 = mem_0__T_5_data == 8'h1; // @[Mem.scala 17:29]
  assign _T_8 = _T_6 | reset; // @[Mem.scala 17:11]
  assign _T_9 = _T_8 == 1'h0; // @[Mem.scala 17:11]
  assign _T_11 = reset == 1'h0; // @[Mem.scala 18:9]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    mem_0[initvar] = _RAND_0[7:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  value = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(mem_0__T_3_en & mem_0__T_3_mask) begin
      mem_0[mem_0__T_3_addr] <= mem_0__T_3_data; // @[Mem.scala 10:16]
    end
    if (reset) begin
      value <= 1'h0;
    end else begin
      value <= _T_2;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (value & _T_9) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Mem.scala:17 assert(mem.read(0.U)(0) === 1.U)\n"); // @[Mem.scala 17:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (value & _T_9) begin
          $fatal; // @[Mem.scala 17:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (value & _T_11) begin
          $finish; // @[Mem.scala 18:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
