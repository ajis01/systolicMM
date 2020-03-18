module SelectTester(
  input   clock,
  input   reset
);
  reg [2:0] counter; // @[SelectSpec.scala 16:24]
  reg [31:0] _RAND_0;
  wire [2:0] added; // @[SelectSpec.scala 17:23]
  wire  overflow; // @[SelectSpec.scala 19:26]
  wire  nreset; // @[SelectSpec.scala 20:31]
  wire [1:0] _T_2;
  wire [1:0] _GEN_1; // @[SelectSpec.scala 28:22]
  wire [1:0] _GEN_2; // @[SelectSpec.scala 28:22]
  wire [2:0] _GEN_7; // @[SelectSpec.scala 28:22]
  wire  _T_7; // @[SelectSpec.scala 28:22]
  wire  _T_9; // @[SelectSpec.scala 28:13]
  wire  _T_10; // @[SelectSpec.scala 28:13]
  wire  _GEN_8; // @[SelectSpec.scala 28:13]
  wire  _GEN_9; // @[SelectSpec.scala 28:13]
  assign added = counter + 3'h1; // @[SelectSpec.scala 17:23]
  assign overflow = counter >= 3'h3; // @[SelectSpec.scala 19:26]
  assign nreset = reset == 1'h0; // @[SelectSpec.scala 20:31]
  assign _T_2 = counter[1:0];
  assign _GEN_1 = 2'h1 == _T_2 ? 2'h1 : 2'h0; // @[SelectSpec.scala 28:22]
  assign _GEN_2 = 2'h2 == _T_2 ? 2'h2 : _GEN_1; // @[SelectSpec.scala 28:22]
  assign _GEN_7 = {{1'd0}, _GEN_2}; // @[SelectSpec.scala 28:22]
  assign _T_7 = counter == _GEN_7; // @[SelectSpec.scala 28:22]
  assign _T_9 = _T_7 | reset; // @[SelectSpec.scala 28:13]
  assign _T_10 = _T_9 == 1'h0; // @[SelectSpec.scala 28:13]
  assign _GEN_8 = overflow == 1'h0; // @[SelectSpec.scala 28:13]
  assign _GEN_9 = _GEN_8 & nreset; // @[SelectSpec.scala 28:13]
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
  counter = _RAND_0[2:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      counter <= 3'h0;
    end else begin
      if (overflow) begin
        counter <= 3'h0;
      end else begin
        counter <= added;
      end
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (overflow & nreset) begin
          $finish; // @[SelectSpec.scala 25:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_9 & _T_10) begin
          $fwrite(32'h80000002,"Assertion failed\n    at SelectSpec.scala:28 assert(counter === values(counter))\n"); // @[SelectSpec.scala 28:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_9 & _T_10) begin
          $fatal; // @[SelectSpec.scala 28:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_9 & nreset) begin
          $fwrite(32'h80000002,"values(%d) = %d\n",counter,_GEN_2); // @[SelectSpec.scala 29:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
