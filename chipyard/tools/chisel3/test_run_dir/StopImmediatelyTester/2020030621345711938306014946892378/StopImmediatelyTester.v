module StopImmediatelyTester(
  input   clock,
  input   reset
);
  reg [3:0] cycle; // @[Stop.scala 13:22]
  reg [31:0] _RAND_0;
  wire [3:0] _T_1; // @[Stop.scala 14:18]
  wire  _T_2; // @[Stop.scala 15:15]
  wire  _T_4; // @[Stop.scala 16:9]
  wire  _T_5; // @[Stop.scala 18:16]
  wire  _T_7; // @[Stop.scala 18:9]
  wire  _T_8; // @[Stop.scala 18:9]
  assign _T_1 = cycle + 4'h1; // @[Stop.scala 14:18]
  assign _T_2 = cycle == 4'h4; // @[Stop.scala 15:15]
  assign _T_4 = reset == 1'h0; // @[Stop.scala 16:9]
  assign _T_5 = cycle != 4'h5; // @[Stop.scala 18:16]
  assign _T_7 = _T_5 | reset; // @[Stop.scala 18:9]
  assign _T_8 = _T_7 == 1'h0; // @[Stop.scala 18:9]
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
  cycle = _RAND_0[3:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      cycle <= 4'h0;
    end else begin
      cycle <= _T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & _T_4) begin
          $finish; // @[Stop.scala 16:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_8) begin
          $fwrite(32'h80000002,"Assertion failed: Simulation did not exit upon executing stop()\n    at Stop.scala:18 assert(cycle =/= 5.U, \"Simulation did not exit upon executing stop()\")\n"); // @[Stop.scala 18:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8) begin
          $fatal; // @[Stop.scala 18:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
