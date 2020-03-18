module RecordDigitTester(
  input   clock,
  input   reset
);
  wire  _T_6; // @[RecordSpec.scala 100:9]
  assign _T_6 = reset == 1'h0; // @[RecordSpec.scala 100:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6) begin
          $finish; // @[RecordSpec.scala 100:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
