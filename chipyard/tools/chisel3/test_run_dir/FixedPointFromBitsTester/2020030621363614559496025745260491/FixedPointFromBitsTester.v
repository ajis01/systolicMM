module FixedPointFromBitsTester(
  input   clock,
  input   reset
);
  wire [6:0] _T_40; // @[FixedPointSpec.scala 55:24]
  wire [6:0] _T_41; // @[FixedPointSpec.scala 55:24]
  wire  _T_43; // @[FixedPointSpec.scala 55:27]
  wire  _T_45; // @[FixedPointSpec.scala 55:9]
  wire  _T_46; // @[FixedPointSpec.scala 55:9]
  wire  _T_52; // @[FixedPointSpec.scala 56:27]
  wire  _T_54; // @[FixedPointSpec.scala 56:9]
  wire  _T_55; // @[FixedPointSpec.scala 56:9]
  wire  _T_76; // @[FixedPointSpec.scala 78:7]
  assign _T_40 = $signed(7'sh0) - $signed(-7'sh38); // @[FixedPointSpec.scala 55:24]
  assign _T_41 = $signed(_T_40); // @[FixedPointSpec.scala 55:24]
  assign _T_43 = $signed(_T_41) == $signed(7'sh38); // @[FixedPointSpec.scala 55:27]
  assign _T_45 = _T_43 | reset; // @[FixedPointSpec.scala 55:9]
  assign _T_46 = _T_45 == 1'h0; // @[FixedPointSpec.scala 55:9]
  assign _T_52 = $signed(_T_41) != $signed(-7'sh38); // @[FixedPointSpec.scala 56:27]
  assign _T_54 = _T_52 | reset; // @[FixedPointSpec.scala 56:9]
  assign _T_55 = _T_54 == 1'h0; // @[FixedPointSpec.scala 56:9]
  assign _T_76 = reset == 1'h0; // @[FixedPointSpec.scala 78:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_46) begin
          $fwrite(32'h80000002,"Assertion failed\n    at FixedPointSpec.scala:55 assert(negativefp.abs() === positivefp)\n"); // @[FixedPointSpec.scala 55:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_46) begin
          $fatal; // @[FixedPointSpec.scala 55:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_55) begin
          $fwrite(32'h80000002,"Assertion failed\n    at FixedPointSpec.scala:56 assert(negativefp.abs() =/= negativefp)\n"); // @[FixedPointSpec.scala 56:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_55) begin
          $fatal; // @[FixedPointSpec.scala 56:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_76) begin
          $finish; // @[FixedPointSpec.scala 78:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
