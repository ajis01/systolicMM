module GCD(
  input         clock,
  input         io_e,
  output [31:0] io_z,
  output        io_v
);
  reg [31:0] x; // @[GCD.scala 16:14]
  reg [31:0] _RAND_0;
  reg [31:0] y; // @[GCD.scala 17:14]
  reg [31:0] _RAND_1;
  wire  _T; // @[GCD.scala 18:11]
  wire [31:0] _T_2; // @[GCD.scala 18:27]
  wire [31:0] _T_4; // @[GCD.scala 19:27]
  assign _T = x > y; // @[GCD.scala 18:11]
  assign _T_2 = x - y; // @[GCD.scala 18:27]
  assign _T_4 = y - x; // @[GCD.scala 19:27]
  assign io_z = x; // @[GCD.scala 21:8]
  assign io_v = y == 32'h0; // @[GCD.scala 22:8]
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
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  x = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  y = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (io_e) begin
      x <= 32'hc;
    end else begin
      if (_T) begin
        x <= _T_2;
      end
    end
    if (io_e) begin
      y <= 32'h9;
    end else begin
      if (!(_T)) begin
        y <= _T_4;
      end
    end
  end
endmodule
module GCDTester(
  input   clock,
  input   reset
);
  wire  dut_clock; // @[GCD.scala 26:19]
  wire  dut_io_e; // @[GCD.scala 26:19]
  wire [31:0] dut_io_z; // @[GCD.scala 26:19]
  wire  dut_io_v; // @[GCD.scala 26:19]
  reg  first; // @[GCD.scala 27:22]
  reg [31:0] _RAND_0;
  wire  _GEN_0; // @[GCD.scala 31:15]
  wire  _T; // @[GCD.scala 32:8]
  wire  _T_1; // @[GCD.scala 32:15]
  wire  _T_2; // @[GCD.scala 33:21]
  wire  _T_4; // @[GCD.scala 33:11]
  wire  _T_5; // @[GCD.scala 33:11]
  wire  _T_7; // @[GCD.scala 34:9]
  GCD dut ( // @[GCD.scala 26:19]
    .clock(dut_clock),
    .io_e(dut_io_e),
    .io_z(dut_io_z),
    .io_v(dut_io_v)
  );
  assign _GEN_0 = first ? 1'h0 : first; // @[GCD.scala 31:15]
  assign _T = first == 1'h0; // @[GCD.scala 32:8]
  assign _T_1 = _T & dut_io_v; // @[GCD.scala 32:15]
  assign _T_2 = dut_io_z == 32'h3; // @[GCD.scala 33:21]
  assign _T_4 = _T_2 | reset; // @[GCD.scala 33:11]
  assign _T_5 = _T_4 == 1'h0; // @[GCD.scala 33:11]
  assign _T_7 = reset == 1'h0; // @[GCD.scala 34:9]
  assign dut_clock = clock;
  assign dut_io_e = first; // @[GCD.scala 30:12]
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
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  first = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    first <= reset | _GEN_0;
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & _T_5) begin
          $fwrite(32'h80000002,"Assertion failed\n    at GCD.scala:33 assert(dut.io.z === z.U)\n"); // @[GCD.scala 33:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & _T_5) begin
          $fatal; // @[GCD.scala 33:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & _T_7) begin
          $finish; // @[GCD.scala 34:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
