module ShiftResetTester(
  input   clock,
  input   reset
);
  reg [4:0] _T_2; // @[Reg.scala 27:20]
  reg [31:0] _RAND_0;
  reg [4:0] sr; // @[Reg.scala 27:20]
  reg [31:0] _RAND_1;
  wire  _T_3; // @[Reg.scala 57:15]
  wire  _T_5; // @[Reg.scala 57:11]
  wire  _T_6; // @[Reg.scala 57:11]
  wire  _T_8; // @[Reg.scala 58:9]
  assign _T_3 = sr == 5'h1; // @[Reg.scala 57:15]
  assign _T_5 = _T_3 | reset; // @[Reg.scala 57:11]
  assign _T_6 = _T_5 == 1'h0; // @[Reg.scala 57:11]
  assign _T_8 = reset == 1'h0; // @[Reg.scala 58:9]
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
  _T_2 = _RAND_0[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  sr = _RAND_1[4:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      _T_2 <= 5'h1;
    end else begin
      _T_2 <= 5'h17;
    end
    if (reset) begin
      sr <= 5'h1;
    end else begin
      sr <= _T_2;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_6) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Reg.scala:57 assert(sr === 1.U)\n"); // @[Reg.scala 57:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6) begin
          $fatal; // @[Reg.scala 57:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8) begin
          $finish; // @[Reg.scala 58:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule