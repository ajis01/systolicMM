module BlackBoxTester(
  input   clock,
  input   reset
);
  wire  blackBoxPos_in; // @[BlackBox.scala 41:27]
  wire  blackBoxPos_out; // @[BlackBox.scala 41:27]
  wire  blackBoxNeg_in; // @[BlackBox.scala 42:27]
  wire  blackBoxNeg_out; // @[BlackBox.scala 42:27]
  wire  _T; // @[BlackBox.scala 47:29]
  wire  _T_2; // @[BlackBox.scala 47:9]
  wire  _T_3; // @[BlackBox.scala 47:9]
  wire  _T_4; // @[BlackBox.scala 48:29]
  wire  _T_6; // @[BlackBox.scala 48:9]
  wire  _T_7; // @[BlackBox.scala 48:9]
  wire  _T_9; // @[BlackBox.scala 49:7]
  BlackBoxInverter blackBoxPos ( // @[BlackBox.scala 41:27]
    .in(blackBoxPos_in),
    .out(blackBoxPos_out)
  );
  BlackBoxInverter blackBoxNeg ( // @[BlackBox.scala 42:27]
    .in(blackBoxNeg_in),
    .out(blackBoxNeg_out)
  );
  assign _T = blackBoxNeg_out; // @[BlackBox.scala 47:29]
  assign _T_2 = _T | reset; // @[BlackBox.scala 47:9]
  assign _T_3 = _T_2 == 1'h0; // @[BlackBox.scala 47:9]
  assign _T_4 = blackBoxPos_out == 1'h0; // @[BlackBox.scala 48:29]
  assign _T_6 = _T_4 | reset; // @[BlackBox.scala 48:9]
  assign _T_7 = _T_6 == 1'h0; // @[BlackBox.scala 48:9]
  assign _T_9 = reset == 1'h0; // @[BlackBox.scala 49:7]
  assign blackBoxPos_in = 1'h1; // @[BlackBox.scala 44:21]
  assign blackBoxNeg_in = 1'h0; // @[BlackBox.scala 45:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:47 assert(blackBoxNeg.io.out === 1.U)\n"); // @[BlackBox.scala 47:9]
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
          $fatal; // @[BlackBox.scala 47:9]
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
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:48 assert(blackBoxPos.io.out === 0.U)\n"); // @[BlackBox.scala 48:9]
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
          $fatal; // @[BlackBox.scala 48:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_9) begin
          $finish; // @[BlackBox.scala 49:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
