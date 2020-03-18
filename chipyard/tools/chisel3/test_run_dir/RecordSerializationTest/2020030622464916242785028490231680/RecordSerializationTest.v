module RecordSerializationTest(
  input   clock,
  input   reset
);
  wire  _T_20; // @[RecordSpec.scala 59:9]
  assign _T_20 = reset == 1'h0; // @[RecordSpec.scala 59:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_20) begin
          $finish; // @[RecordSpec.scala 59:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
