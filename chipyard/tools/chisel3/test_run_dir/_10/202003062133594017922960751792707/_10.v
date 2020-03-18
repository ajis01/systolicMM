module _10(
  input   clock,
  input   reset
);
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  done; // @[Counter.scala 37:24]
  wire [1:0] _T_10; // @[Counter.scala 38:22]
  wire  _T_12; // @[CompatibilitySpec.scala 524:21]
  assign done = value == 2'h3; // @[Counter.scala 37:24]
  assign _T_10 = value + 2'h1; // @[Counter.scala 38:22]
  assign _T_12 = reset == 1'h0; // @[CompatibilitySpec.scala 524:21]
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
  value = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 2'h0;
    end else begin
      value <= _T_10;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_12) begin
          $finish; // @[CompatibilitySpec.scala 524:21]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule