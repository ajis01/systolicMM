module CastFromLit(
  output [6:0] io_out,
  output       io_valid
);
  wire  _T; // @[StrongEnum.scala 60:22]
  wire  _T_1; // @[StrongEnum.scala 60:22]
  wire  _T_2; // @[StrongEnum.scala 60:22]
  wire  _T_3; // @[StrongEnum.scala 60:22]
  wire  _T_4; // @[StrongEnum.scala 60:22]
  wire  _T_5; // @[StrongEnum.scala 60:22]
  wire  _T_6; // @[StrongEnum.scala 60:22]
  wire  _T_7; // @[StrongEnum.scala 60:22]
  assign _T = io_out == 7'h0; // @[StrongEnum.scala 60:22]
  assign _T_1 = io_out == 7'h1; // @[StrongEnum.scala 60:22]
  assign _T_2 = io_out == 7'h2; // @[StrongEnum.scala 60:22]
  assign _T_3 = io_out == 7'h64; // @[StrongEnum.scala 60:22]
  assign _T_4 = io_out == 7'h65; // @[StrongEnum.scala 60:22]
  assign _T_5 = _T | _T_1; // @[StrongEnum.scala 60:22]
  assign _T_6 = _T_5 | _T_2; // @[StrongEnum.scala 60:22]
  assign _T_7 = _T_6 | _T_3; // @[StrongEnum.scala 60:22]
  assign io_out = 7'h0; // @[StrongEnum.scala 59:10]
  assign io_valid = _T_7 | _T_4; // @[StrongEnum.scala 60:12]
endmodule
module CastFromLit_1(
  output [6:0] io_out,
  output       io_valid
);
  wire  _T; // @[StrongEnum.scala 60:22]
  wire  _T_1; // @[StrongEnum.scala 60:22]
  wire  _T_2; // @[StrongEnum.scala 60:22]
  wire  _T_3; // @[StrongEnum.scala 60:22]
  wire  _T_4; // @[StrongEnum.scala 60:22]
  wire  _T_5; // @[StrongEnum.scala 60:22]
  wire  _T_6; // @[StrongEnum.scala 60:22]
  wire  _T_7; // @[StrongEnum.scala 60:22]
  assign _T = io_out == 7'h0; // @[StrongEnum.scala 60:22]
  assign _T_1 = io_out == 7'h1; // @[StrongEnum.scala 60:22]
  assign _T_2 = io_out == 7'h2; // @[StrongEnum.scala 60:22]
  assign _T_3 = io_out == 7'h64; // @[StrongEnum.scala 60:22]
  assign _T_4 = io_out == 7'h65; // @[StrongEnum.scala 60:22]
  assign _T_5 = _T | _T_1; // @[StrongEnum.scala 60:22]
  assign _T_6 = _T_5 | _T_2; // @[StrongEnum.scala 60:22]
  assign _T_7 = _T_6 | _T_3; // @[StrongEnum.scala 60:22]
  assign io_out = 7'h1; // @[StrongEnum.scala 59:10]
  assign io_valid = _T_7 | _T_4; // @[StrongEnum.scala 60:12]
endmodule
module CastFromLit_2(
  output [6:0] io_out,
  output       io_valid
);
  wire  _T; // @[StrongEnum.scala 60:22]
  wire  _T_1; // @[StrongEnum.scala 60:22]
  wire  _T_2; // @[StrongEnum.scala 60:22]
  wire  _T_3; // @[StrongEnum.scala 60:22]
  wire  _T_4; // @[StrongEnum.scala 60:22]
  wire  _T_5; // @[StrongEnum.scala 60:22]
  wire  _T_6; // @[StrongEnum.scala 60:22]
  wire  _T_7; // @[StrongEnum.scala 60:22]
  assign _T = io_out == 7'h0; // @[StrongEnum.scala 60:22]
  assign _T_1 = io_out == 7'h1; // @[StrongEnum.scala 60:22]
  assign _T_2 = io_out == 7'h2; // @[StrongEnum.scala 60:22]
  assign _T_3 = io_out == 7'h64; // @[StrongEnum.scala 60:22]
  assign _T_4 = io_out == 7'h65; // @[StrongEnum.scala 60:22]
  assign _T_5 = _T | _T_1; // @[StrongEnum.scala 60:22]
  assign _T_6 = _T_5 | _T_2; // @[StrongEnum.scala 60:22]
  assign _T_7 = _T_6 | _T_3; // @[StrongEnum.scala 60:22]
  assign io_out = 7'h2; // @[StrongEnum.scala 59:10]
  assign io_valid = _T_7 | _T_4; // @[StrongEnum.scala 60:12]
endmodule
module CastFromLit_3(
  output [6:0] io_out,
  output       io_valid
);
  wire  _T; // @[StrongEnum.scala 60:22]
  wire  _T_1; // @[StrongEnum.scala 60:22]
  wire  _T_2; // @[StrongEnum.scala 60:22]
  wire  _T_3; // @[StrongEnum.scala 60:22]
  wire  _T_4; // @[StrongEnum.scala 60:22]
  wire  _T_5; // @[StrongEnum.scala 60:22]
  wire  _T_6; // @[StrongEnum.scala 60:22]
  wire  _T_7; // @[StrongEnum.scala 60:22]
  assign _T = io_out == 7'h0; // @[StrongEnum.scala 60:22]
  assign _T_1 = io_out == 7'h1; // @[StrongEnum.scala 60:22]
  assign _T_2 = io_out == 7'h2; // @[StrongEnum.scala 60:22]
  assign _T_3 = io_out == 7'h64; // @[StrongEnum.scala 60:22]
  assign _T_4 = io_out == 7'h65; // @[StrongEnum.scala 60:22]
  assign _T_5 = _T | _T_1; // @[StrongEnum.scala 60:22]
  assign _T_6 = _T_5 | _T_2; // @[StrongEnum.scala 60:22]
  assign _T_7 = _T_6 | _T_3; // @[StrongEnum.scala 60:22]
  assign io_out = 7'h64; // @[StrongEnum.scala 59:10]
  assign io_valid = _T_7 | _T_4; // @[StrongEnum.scala 60:12]
endmodule
module CastFromLit_4(
  output [6:0] io_out,
  output       io_valid
);
  wire  _T; // @[StrongEnum.scala 60:22]
  wire  _T_1; // @[StrongEnum.scala 60:22]
  wire  _T_2; // @[StrongEnum.scala 60:22]
  wire  _T_3; // @[StrongEnum.scala 60:22]
  wire  _T_4; // @[StrongEnum.scala 60:22]
  wire  _T_5; // @[StrongEnum.scala 60:22]
  wire  _T_6; // @[StrongEnum.scala 60:22]
  wire  _T_7; // @[StrongEnum.scala 60:22]
  assign _T = io_out == 7'h0; // @[StrongEnum.scala 60:22]
  assign _T_1 = io_out == 7'h1; // @[StrongEnum.scala 60:22]
  assign _T_2 = io_out == 7'h2; // @[StrongEnum.scala 60:22]
  assign _T_3 = io_out == 7'h64; // @[StrongEnum.scala 60:22]
  assign _T_4 = io_out == 7'h65; // @[StrongEnum.scala 60:22]
  assign _T_5 = _T | _T_1; // @[StrongEnum.scala 60:22]
  assign _T_6 = _T_5 | _T_2; // @[StrongEnum.scala 60:22]
  assign _T_7 = _T_6 | _T_3; // @[StrongEnum.scala 60:22]
  assign io_out = 7'h65; // @[StrongEnum.scala 59:10]
  assign io_valid = _T_7 | _T_4; // @[StrongEnum.scala 60:12]
endmodule
module CastFromLitTester(
  input   clock,
  input   reset
);
  wire [6:0] CastFromLit_io_out; // @[StrongEnum.scala 162:21]
  wire  CastFromLit_io_valid; // @[StrongEnum.scala 162:21]
  wire [6:0] CastFromLit_1_io_out; // @[StrongEnum.scala 162:21]
  wire  CastFromLit_1_io_valid; // @[StrongEnum.scala 162:21]
  wire [6:0] CastFromLit_2_io_out; // @[StrongEnum.scala 162:21]
  wire  CastFromLit_2_io_valid; // @[StrongEnum.scala 162:21]
  wire [6:0] CastFromLit_3_io_out; // @[StrongEnum.scala 162:21]
  wire  CastFromLit_3_io_valid; // @[StrongEnum.scala 162:21]
  wire [6:0] CastFromLit_4_io_out; // @[StrongEnum.scala 162:21]
  wire  CastFromLit_4_io_valid; // @[StrongEnum.scala 162:21]
  wire  _T_4; // @[StrongEnum.scala 164:25]
  wire  _T_6; // @[StrongEnum.scala 164:11]
  wire  _T_7; // @[StrongEnum.scala 164:11]
  wire  _T_12; // @[StrongEnum.scala 164:25]
  wire  _T_14; // @[StrongEnum.scala 164:11]
  wire  _T_15; // @[StrongEnum.scala 164:11]
  wire  _T_20; // @[StrongEnum.scala 164:25]
  wire  _T_22; // @[StrongEnum.scala 164:11]
  wire  _T_23; // @[StrongEnum.scala 164:11]
  wire  _T_28; // @[StrongEnum.scala 164:25]
  wire  _T_30; // @[StrongEnum.scala 164:11]
  wire  _T_31; // @[StrongEnum.scala 164:11]
  wire  _T_36; // @[StrongEnum.scala 164:25]
  wire  _T_38; // @[StrongEnum.scala 164:11]
  wire  _T_39; // @[StrongEnum.scala 164:11]
  wire  _T_41; // @[StrongEnum.scala 166:7]
  CastFromLit CastFromLit ( // @[StrongEnum.scala 162:21]
    .io_out(CastFromLit_io_out),
    .io_valid(CastFromLit_io_valid)
  );
  CastFromLit_1 CastFromLit_1 ( // @[StrongEnum.scala 162:21]
    .io_out(CastFromLit_1_io_out),
    .io_valid(CastFromLit_1_io_valid)
  );
  CastFromLit_2 CastFromLit_2 ( // @[StrongEnum.scala 162:21]
    .io_out(CastFromLit_2_io_out),
    .io_valid(CastFromLit_2_io_valid)
  );
  CastFromLit_3 CastFromLit_3 ( // @[StrongEnum.scala 162:21]
    .io_out(CastFromLit_3_io_out),
    .io_valid(CastFromLit_3_io_valid)
  );
  CastFromLit_4 CastFromLit_4 ( // @[StrongEnum.scala 162:21]
    .io_out(CastFromLit_4_io_out),
    .io_valid(CastFromLit_4_io_valid)
  );
  assign _T_4 = CastFromLit_io_valid; // @[StrongEnum.scala 164:25]
  assign _T_6 = _T_4 | reset; // @[StrongEnum.scala 164:11]
  assign _T_7 = _T_6 == 1'h0; // @[StrongEnum.scala 164:11]
  assign _T_12 = CastFromLit_1_io_valid; // @[StrongEnum.scala 164:25]
  assign _T_14 = _T_12 | reset; // @[StrongEnum.scala 164:11]
  assign _T_15 = _T_14 == 1'h0; // @[StrongEnum.scala 164:11]
  assign _T_20 = CastFromLit_2_io_valid; // @[StrongEnum.scala 164:25]
  assign _T_22 = _T_20 | reset; // @[StrongEnum.scala 164:11]
  assign _T_23 = _T_22 == 1'h0; // @[StrongEnum.scala 164:11]
  assign _T_28 = CastFromLit_3_io_valid; // @[StrongEnum.scala 164:25]
  assign _T_30 = _T_28 | reset; // @[StrongEnum.scala 164:11]
  assign _T_31 = _T_30 == 1'h0; // @[StrongEnum.scala 164:11]
  assign _T_36 = CastFromLit_4_io_valid; // @[StrongEnum.scala 164:25]
  assign _T_38 = _T_36 | reset; // @[StrongEnum.scala 164:11]
  assign _T_39 = _T_38 == 1'h0; // @[StrongEnum.scala 164:11]
  assign _T_41 = reset == 1'h0; // @[StrongEnum.scala 166:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_7) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 164:11]
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
          $fatal; // @[StrongEnum.scala 164:11]
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
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 164:11]
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
          $fatal; // @[StrongEnum.scala 164:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_23) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 164:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_23) begin
          $fatal; // @[StrongEnum.scala 164:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_31) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 164:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_31) begin
          $fatal; // @[StrongEnum.scala 164:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 164:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39) begin
          $fatal; // @[StrongEnum.scala 164:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_41) begin
          $finish; // @[StrongEnum.scala 166:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
