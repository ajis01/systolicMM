module UInt2VecOfBool(
  input   clock,
  input   reset
);
  reg  value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  _T_2; // @[Counter.scala 38:22]
  wire  _T_4; // @[CookbookSpec.scala 19:21]
  assign _T_2 = value + 1'h1; // @[Counter.scala 38:22]
  assign _T_4 = reset == 1'h0; // @[CookbookSpec.scala 19:21]
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
  value = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 1'h0;
    end else begin
      value <= _T_2;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (value & _T_4) begin
          $finish; // @[CookbookSpec.scala 19:21]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_4) begin
          $fwrite(32'h80000002,"Vec(%d, %d, %d, %d)",1'h0,1'h0,1'h1,1'h1); // @[UInt2VecOfBool.scala 16:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
