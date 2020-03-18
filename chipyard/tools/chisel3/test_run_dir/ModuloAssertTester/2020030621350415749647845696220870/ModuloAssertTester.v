module ModuloAssertTester(
  input   clock,
  input   reset
);
  wire [2:0] _GEN_0; // @[Assert.scala 47:15]
  wire [1:0] _T; // @[Assert.scala 47:15]
  wire  _T_1; // @[Assert.scala 47:22]
  wire  _T_3; // @[Assert.scala 47:9]
  wire  _T_4; // @[Assert.scala 47:9]
  wire  _T_6; // @[Assert.scala 48:7]
  assign _GEN_0 = 3'h4 % 3'h2; // @[Assert.scala 47:15]
  assign _T = _GEN_0[1:0]; // @[Assert.scala 47:15]
  assign _T_1 = _T == 2'h0; // @[Assert.scala 47:22]
  assign _T_3 = _T_1 | reset; // @[Assert.scala 47:9]
  assign _T_4 = _T_3 == 1'h0; // @[Assert.scala 47:9]
  assign _T_6 = reset == 1'h0; // @[Assert.scala 48:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_4) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Assert.scala:47 assert((4.U %% 2.U) === 0.U)\n"); // @[Assert.scala 47:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4) begin
          $fatal; // @[Assert.scala 47:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6) begin
          $finish; // @[Assert.scala 48:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
