module _1(
  input   clock,
  input   reset
);
  wire  _T_6; // @[EnumSpec.scala 16:11]
  assign _T_6 = reset == 1'h0; // @[EnumSpec.scala 16:11]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6) begin
          $finish; // @[EnumSpec.scala 16:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
