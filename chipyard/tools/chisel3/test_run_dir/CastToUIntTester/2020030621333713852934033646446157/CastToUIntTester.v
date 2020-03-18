module CastToUInt(
  input  [6:0] io_in,
  output [6:0] io_out
);
  assign io_out = $unsigned(io_in); // @[StrongEnum.scala 50:10]
endmodule
module CastToUIntTester(
  input   clock,
  input   reset
);
  wire [6:0] CastToUInt_io_in; // @[StrongEnum.scala 153:21]
  wire [6:0] CastToUInt_io_out; // @[StrongEnum.scala 153:21]
  wire [6:0] CastToUInt_1_io_in; // @[StrongEnum.scala 153:21]
  wire [6:0] CastToUInt_1_io_out; // @[StrongEnum.scala 153:21]
  wire [6:0] CastToUInt_2_io_in; // @[StrongEnum.scala 153:21]
  wire [6:0] CastToUInt_2_io_out; // @[StrongEnum.scala 153:21]
  wire [6:0] CastToUInt_3_io_in; // @[StrongEnum.scala 153:21]
  wire [6:0] CastToUInt_3_io_out; // @[StrongEnum.scala 153:21]
  wire [6:0] CastToUInt_4_io_in; // @[StrongEnum.scala 153:21]
  wire [6:0] CastToUInt_4_io_out; // @[StrongEnum.scala 153:21]
  wire  _T; // @[StrongEnum.scala 155:23]
  wire  _T_2; // @[StrongEnum.scala 155:11]
  wire  _T_3; // @[StrongEnum.scala 155:11]
  wire  _T_4; // @[StrongEnum.scala 155:23]
  wire  _T_6; // @[StrongEnum.scala 155:11]
  wire  _T_7; // @[StrongEnum.scala 155:11]
  wire  _T_8; // @[StrongEnum.scala 155:23]
  wire  _T_10; // @[StrongEnum.scala 155:11]
  wire  _T_11; // @[StrongEnum.scala 155:11]
  wire  _T_12; // @[StrongEnum.scala 155:23]
  wire  _T_14; // @[StrongEnum.scala 155:11]
  wire  _T_15; // @[StrongEnum.scala 155:11]
  wire  _T_16; // @[StrongEnum.scala 155:23]
  wire  _T_18; // @[StrongEnum.scala 155:11]
  wire  _T_19; // @[StrongEnum.scala 155:11]
  wire  _T_21; // @[StrongEnum.scala 157:7]
  CastToUInt CastToUInt ( // @[StrongEnum.scala 153:21]
    .io_in(CastToUInt_io_in),
    .io_out(CastToUInt_io_out)
  );
  CastToUInt CastToUInt_1 ( // @[StrongEnum.scala 153:21]
    .io_in(CastToUInt_1_io_in),
    .io_out(CastToUInt_1_io_out)
  );
  CastToUInt CastToUInt_2 ( // @[StrongEnum.scala 153:21]
    .io_in(CastToUInt_2_io_in),
    .io_out(CastToUInt_2_io_out)
  );
  CastToUInt CastToUInt_3 ( // @[StrongEnum.scala 153:21]
    .io_in(CastToUInt_3_io_in),
    .io_out(CastToUInt_3_io_out)
  );
  CastToUInt CastToUInt_4 ( // @[StrongEnum.scala 153:21]
    .io_in(CastToUInt_4_io_in),
    .io_out(CastToUInt_4_io_out)
  );
  assign _T = CastToUInt_io_out == 7'h0; // @[StrongEnum.scala 155:23]
  assign _T_2 = _T | reset; // @[StrongEnum.scala 155:11]
  assign _T_3 = _T_2 == 1'h0; // @[StrongEnum.scala 155:11]
  assign _T_4 = CastToUInt_1_io_out == 7'h1; // @[StrongEnum.scala 155:23]
  assign _T_6 = _T_4 | reset; // @[StrongEnum.scala 155:11]
  assign _T_7 = _T_6 == 1'h0; // @[StrongEnum.scala 155:11]
  assign _T_8 = CastToUInt_2_io_out == 7'h2; // @[StrongEnum.scala 155:23]
  assign _T_10 = _T_8 | reset; // @[StrongEnum.scala 155:11]
  assign _T_11 = _T_10 == 1'h0; // @[StrongEnum.scala 155:11]
  assign _T_12 = CastToUInt_3_io_out == 7'h64; // @[StrongEnum.scala 155:23]
  assign _T_14 = _T_12 | reset; // @[StrongEnum.scala 155:11]
  assign _T_15 = _T_14 == 1'h0; // @[StrongEnum.scala 155:11]
  assign _T_16 = CastToUInt_4_io_out == 7'h65; // @[StrongEnum.scala 155:23]
  assign _T_18 = _T_16 | reset; // @[StrongEnum.scala 155:11]
  assign _T_19 = _T_18 == 1'h0; // @[StrongEnum.scala 155:11]
  assign _T_21 = reset == 1'h0; // @[StrongEnum.scala 157:7]
  assign CastToUInt_io_in = 7'h0; // @[StrongEnum.scala 154:15]
  assign CastToUInt_1_io_in = 7'h1; // @[StrongEnum.scala 154:15]
  assign CastToUInt_2_io_in = 7'h2; // @[StrongEnum.scala 154:15]
  assign CastToUInt_3_io_in = 7'h64; // @[StrongEnum.scala 154:15]
  assign CastToUInt_4_io_in = 7'h65; // @[StrongEnum.scala 154:15]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 155:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3) begin
          $fatal; // @[StrongEnum.scala 155:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_7) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 155:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_7) begin
          $fatal; // @[StrongEnum.scala 155:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_11) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 155:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_11) begin
          $fatal; // @[StrongEnum.scala 155:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_15) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 155:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_15) begin
          $fatal; // @[StrongEnum.scala 155:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_19) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 155:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_19) begin
          $fatal; // @[StrongEnum.scala 155:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_21) begin
          $finish; // @[StrongEnum.scala 157:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
