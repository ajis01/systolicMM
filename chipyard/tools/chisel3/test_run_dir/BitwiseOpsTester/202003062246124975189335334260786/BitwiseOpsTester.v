module BitwiseOpsTester(
  input   clock,
  input   reset
);
  wire  _T_21; // @[BitwiseOps.scala 16:7]
  assign _T_21 = reset == 1'h0; // @[BitwiseOps.scala 16:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_21) begin
          $finish; // @[BitwiseOps.scala 16:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
