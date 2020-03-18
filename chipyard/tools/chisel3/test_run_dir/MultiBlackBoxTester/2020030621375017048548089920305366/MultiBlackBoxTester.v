module MultiBlackBoxTester(
  input   clock,
  input   reset
);
  wire  blackBoxInvPos_in; // @[BlackBox.scala 66:30]
  wire  blackBoxInvPos_out; // @[BlackBox.scala 66:30]
  wire  blackBoxInvNeg_in; // @[BlackBox.scala 67:30]
  wire  blackBoxInvNeg_out; // @[BlackBox.scala 67:30]
  wire  blackBoxPassPos_in; // @[BlackBox.scala 68:31]
  wire  blackBoxPassPos_out; // @[BlackBox.scala 68:31]
  wire  blackBoxPassNeg_in; // @[BlackBox.scala 69:31]
  wire  blackBoxPassNeg_out; // @[BlackBox.scala 69:31]
  wire  _T; // @[BlackBox.scala 76:32]
  wire  _T_2; // @[BlackBox.scala 76:9]
  wire  _T_3; // @[BlackBox.scala 76:9]
  wire  _T_4; // @[BlackBox.scala 77:32]
  wire  _T_6; // @[BlackBox.scala 77:9]
  wire  _T_7; // @[BlackBox.scala 77:9]
  wire  _T_8; // @[BlackBox.scala 78:33]
  wire  _T_10; // @[BlackBox.scala 78:9]
  wire  _T_11; // @[BlackBox.scala 78:9]
  wire  _T_12; // @[BlackBox.scala 79:33]
  wire  _T_14; // @[BlackBox.scala 79:9]
  wire  _T_15; // @[BlackBox.scala 79:9]
  wire  _T_17; // @[BlackBox.scala 80:7]
  BlackBoxInverter blackBoxInvPos ( // @[BlackBox.scala 66:30]
    .in(blackBoxInvPos_in),
    .out(blackBoxInvPos_out)
  );
  BlackBoxInverter blackBoxInvNeg ( // @[BlackBox.scala 67:30]
    .in(blackBoxInvNeg_in),
    .out(blackBoxInvNeg_out)
  );
  BlackBoxPassthrough blackBoxPassPos ( // @[BlackBox.scala 68:31]
    .in(blackBoxPassPos_in),
    .out(blackBoxPassPos_out)
  );
  BlackBoxPassthrough blackBoxPassNeg ( // @[BlackBox.scala 69:31]
    .in(blackBoxPassNeg_in),
    .out(blackBoxPassNeg_out)
  );
  assign _T = blackBoxInvNeg_out; // @[BlackBox.scala 76:32]
  assign _T_2 = _T | reset; // @[BlackBox.scala 76:9]
  assign _T_3 = _T_2 == 1'h0; // @[BlackBox.scala 76:9]
  assign _T_4 = blackBoxInvPos_out == 1'h0; // @[BlackBox.scala 77:32]
  assign _T_6 = _T_4 | reset; // @[BlackBox.scala 77:9]
  assign _T_7 = _T_6 == 1'h0; // @[BlackBox.scala 77:9]
  assign _T_8 = blackBoxPassNeg_out == 1'h0; // @[BlackBox.scala 78:33]
  assign _T_10 = _T_8 | reset; // @[BlackBox.scala 78:9]
  assign _T_11 = _T_10 == 1'h0; // @[BlackBox.scala 78:9]
  assign _T_12 = blackBoxPassPos_out; // @[BlackBox.scala 79:33]
  assign _T_14 = _T_12 | reset; // @[BlackBox.scala 79:9]
  assign _T_15 = _T_14 == 1'h0; // @[BlackBox.scala 79:9]
  assign _T_17 = reset == 1'h0; // @[BlackBox.scala 80:7]
  assign blackBoxInvPos_in = 1'h1; // @[BlackBox.scala 71:24]
  assign blackBoxInvNeg_in = 1'h0; // @[BlackBox.scala 72:24]
  assign blackBoxPassPos_in = 1'h1; // @[BlackBox.scala 73:25]
  assign blackBoxPassNeg_in = 1'h0; // @[BlackBox.scala 74:25]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:76 assert(blackBoxInvNeg.io.out === 1.U)\n"); // @[BlackBox.scala 76:9]
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
          $fatal; // @[BlackBox.scala 76:9]
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
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:77 assert(blackBoxInvPos.io.out === 0.U)\n"); // @[BlackBox.scala 77:9]
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
          $fatal; // @[BlackBox.scala 77:9]
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
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:78 assert(blackBoxPassNeg.io.out === 0.U)\n"); // @[BlackBox.scala 78:9]
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
          $fatal; // @[BlackBox.scala 78:9]
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
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:79 assert(blackBoxPassPos.io.out === 1.U)\n"); // @[BlackBox.scala 79:9]
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
          $fatal; // @[BlackBox.scala 79:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_17) begin
          $finish; // @[BlackBox.scala 80:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
