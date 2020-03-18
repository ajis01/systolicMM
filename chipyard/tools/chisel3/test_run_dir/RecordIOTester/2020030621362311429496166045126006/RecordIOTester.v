module RecordIOTester(
  input   clock,
  input   reset
);
  wire  _T_5; // @[RecordSpec.scala 93:9]
  assign _T_5 = reset == 1'h0; // @[RecordSpec.scala 93:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5) begin
          $finish; // @[RecordSpec.scala 93:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
