module IsLitTester(
  input   clock,
  input   reset
);
  wire  _T_6; // @[StrongEnum.scala 226:7]
  assign _T_6 = reset == 1'h0; // @[StrongEnum.scala 226:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6) begin
          $finish; // @[StrongEnum.scala 226:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
