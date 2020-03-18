module BlackBoxFlipTester(
  input   clock,
  input   reset
);
  wire  blackBox_in; // @[BlackBox.scala 53:24]
  wire  blackBox_out; // @[BlackBox.scala 53:24]
  wire  _T; // @[BlackBox.scala 56:26]
  wire  _T_2; // @[BlackBox.scala 56:9]
  wire  _T_3; // @[BlackBox.scala 56:9]
  wire  _T_5; // @[BlackBox.scala 57:7]
  BlackBoxPassthrough2 blackBox ( // @[BlackBox.scala 53:24]
    .in(blackBox_in),
    .out(blackBox_out)
  );
  assign _T = blackBox_out; // @[BlackBox.scala 56:26]
  assign _T_2 = _T | reset; // @[BlackBox.scala 56:9]
  assign _T_3 = _T_2 == 1'h0; // @[BlackBox.scala 56:9]
  assign _T_5 = reset == 1'h0; // @[BlackBox.scala 57:7]
  assign blackBox_in = 1'h1; // @[BlackBox.scala 55:18]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:56 assert(blackBox.io.out === 1.U)\n"); // @[BlackBox.scala 56:9]
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
          $fatal; // @[BlackBox.scala 56:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5) begin
          $finish; // @[BlackBox.scala 57:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
