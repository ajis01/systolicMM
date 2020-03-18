module AsyncResetTester(
  input   clock,
  input   reset
);
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  cDiv; // @[Counter.scala 37:24]
  wire [1:0] _T_2; // @[Counter.scala 38:22]
  wire  slowClk; // @[AsyncResetSpec.scala 13:22]
  reg [3:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_1;
  wire  done; // @[Counter.scala 37:24]
  wire [3:0] _T_5; // @[Counter.scala 38:22]
  reg  asyncResetNext; // @[AsyncResetSpec.scala 17:31]
  reg [31:0] _RAND_2;
  wire  _T_6; // @[AsyncResetSpec.scala 18:27]
  wire  asyncReset; // @[AsyncResetSpec.scala 19:35]
  reg [7:0] reg_; // @[AsyncResetSpec.scala 22:12]
  reg [31:0] _RAND_3;
  wire  _T_7; // @[AsyncResetSpec.scala 26:15]
  wire  _T_8; // @[AsyncResetSpec.scala 27:16]
  wire  _T_10; // @[AsyncResetSpec.scala 27:11]
  wire  _T_11; // @[AsyncResetSpec.scala 27:11]
  wire  _T_12; // @[AsyncResetSpec.scala 29:15]
  wire  _T_13; // @[AsyncResetSpec.scala 29:31]
  wire  _T_14; // @[AsyncResetSpec.scala 29:22]
  wire  _T_15; // @[AsyncResetSpec.scala 30:16]
  wire  _T_17; // @[AsyncResetSpec.scala 30:11]
  wire  _T_18; // @[AsyncResetSpec.scala 30:11]
  wire  _T_19; // @[AsyncResetSpec.scala 31:22]
  wire  _T_25; // @[AsyncResetSpec.scala 36:9]
  wire  _GEN_2; // @[AsyncResetSpec.scala 32:11]
  wire  _GEN_3; // @[AsyncResetSpec.scala 32:11]
  assign cDiv = value == 2'h3; // @[Counter.scala 37:24]
  assign _T_2 = value + 2'h1; // @[Counter.scala 38:22]
  assign slowClk = cDiv; // @[AsyncResetSpec.scala 13:22]
  assign done = value_1 == 4'hf; // @[Counter.scala 37:24]
  assign _T_5 = value_1 + 4'h1; // @[Counter.scala 38:22]
  assign _T_6 = value_1 == 4'h4; // @[AsyncResetSpec.scala 18:27]
  assign asyncReset = asyncResetNext; // @[AsyncResetSpec.scala 19:35]
  assign _T_7 = value_1 == 4'h3; // @[AsyncResetSpec.scala 26:15]
  assign _T_8 = reg_ == 8'h5; // @[AsyncResetSpec.scala 27:16]
  assign _T_10 = _T_8 | reset; // @[AsyncResetSpec.scala 27:11]
  assign _T_11 = _T_10 == 1'h0; // @[AsyncResetSpec.scala 27:11]
  assign _T_12 = value_1 >= 4'h5; // @[AsyncResetSpec.scala 29:15]
  assign _T_13 = value_1 < 4'h7; // @[AsyncResetSpec.scala 29:31]
  assign _T_14 = _T_12 & _T_13; // @[AsyncResetSpec.scala 29:22]
  assign _T_15 = reg_ == 8'h7b; // @[AsyncResetSpec.scala 30:16]
  assign _T_17 = _T_15 | reset; // @[AsyncResetSpec.scala 30:11]
  assign _T_18 = _T_17 == 1'h0; // @[AsyncResetSpec.scala 30:11]
  assign _T_19 = value_1 >= 4'h7; // @[AsyncResetSpec.scala 31:22]
  assign _T_25 = reset == 1'h0; // @[AsyncResetSpec.scala 36:9]
  assign _GEN_2 = _T_14 == 1'h0; // @[AsyncResetSpec.scala 32:11]
  assign _GEN_3 = _GEN_2 & _T_19; // @[AsyncResetSpec.scala 32:11]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  value = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  value_1 = _RAND_1[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  asyncResetNext = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_ = _RAND_3[7:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  if (asyncReset) begin
    reg_ = 8'h7b;
  end
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 2'h0;
    end else begin
      value <= _T_2;
    end
    if (reset) begin
      value_1 <= 4'h0;
    end else begin
      value_1 <= _T_5;
    end
    if (reset) begin
      asyncResetNext <= 1'h0;
    end else begin
      asyncResetNext <= _T_6;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_7 & _T_11) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:27 assert(reg === 5.U)\n"); // @[AsyncResetSpec.scala 27:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_7 & _T_11) begin
          $fatal; // @[AsyncResetSpec.scala 27:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_14 & _T_18) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:30 assert(reg === 123.U)\n"); // @[AsyncResetSpec.scala 30:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_14 & _T_18) begin
          $fatal; // @[AsyncResetSpec.scala 30:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_3 & _T_11) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:32 assert(reg === 5.U)\n"); // @[AsyncResetSpec.scala 32:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_3 & _T_11) begin
          $fatal; // @[AsyncResetSpec.scala 32:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_25) begin
          $finish; // @[AsyncResetSpec.scala 36:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge slowClk or posedge asyncReset) begin
    if (asyncReset) begin
      reg_ <= 8'h7b;
    end else begin
      reg_ <= 8'h5;
    end
  end
endmodule
