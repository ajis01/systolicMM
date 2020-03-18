module AsyncResetAggregateTester(
  input   clock,
  input   reset
);
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  cDiv; // @[Counter.scala 37:24]
  wire [1:0] _T_2; // @[Counter.scala 38:22]
  wire  slowClk; // @[AsyncResetSpec.scala 47:22]
  reg [3:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_1;
  wire  done; // @[Counter.scala 37:24]
  wire [3:0] _T_5; // @[Counter.scala 38:22]
  reg  asyncResetNext; // @[AsyncResetSpec.scala 51:31]
  reg [31:0] _RAND_2;
  wire  _T_6; // @[AsyncResetSpec.scala 52:27]
  wire  asyncReset; // @[AsyncResetSpec.scala 53:35]
  reg [7:0] reg_0_x; // @[AsyncResetSpec.scala 61:12]
  reg [31:0] _RAND_3;
  reg [7:0] reg_0_y; // @[AsyncResetSpec.scala 61:12]
  reg [31:0] _RAND_4;
  reg [7:0] reg_1_x; // @[AsyncResetSpec.scala 61:12]
  reg [31:0] _RAND_5;
  reg [7:0] reg_1_y; // @[AsyncResetSpec.scala 61:12]
  reg [31:0] _RAND_6;
  wire  _T_8; // @[AsyncResetSpec.scala 68:15]
  wire  _T_9; // @[AsyncResetSpec.scala 69:21]
  wire  _T_11; // @[AsyncResetSpec.scala 69:11]
  wire  _T_12; // @[AsyncResetSpec.scala 69:11]
  wire  _T_13; // @[AsyncResetSpec.scala 70:21]
  wire  _T_15; // @[AsyncResetSpec.scala 70:11]
  wire  _T_16; // @[AsyncResetSpec.scala 70:11]
  wire  _T_17; // @[AsyncResetSpec.scala 71:21]
  wire  _T_19; // @[AsyncResetSpec.scala 71:11]
  wire  _T_20; // @[AsyncResetSpec.scala 71:11]
  wire  _T_21; // @[AsyncResetSpec.scala 72:21]
  wire  _T_23; // @[AsyncResetSpec.scala 72:11]
  wire  _T_24; // @[AsyncResetSpec.scala 72:11]
  wire  _T_25; // @[AsyncResetSpec.scala 74:15]
  wire  _T_26; // @[AsyncResetSpec.scala 74:31]
  wire  _T_27; // @[AsyncResetSpec.scala 74:22]
  wire  _T_28; // @[AsyncResetSpec.scala 75:21]
  wire  _T_30; // @[AsyncResetSpec.scala 75:11]
  wire  _T_31; // @[AsyncResetSpec.scala 75:11]
  wire  _T_32; // @[AsyncResetSpec.scala 76:21]
  wire  _T_34; // @[AsyncResetSpec.scala 76:11]
  wire  _T_35; // @[AsyncResetSpec.scala 76:11]
  wire  _T_36; // @[AsyncResetSpec.scala 77:21]
  wire  _T_38; // @[AsyncResetSpec.scala 77:11]
  wire  _T_39; // @[AsyncResetSpec.scala 77:11]
  wire  _T_40; // @[AsyncResetSpec.scala 78:21]
  wire  _T_42; // @[AsyncResetSpec.scala 78:11]
  wire  _T_43; // @[AsyncResetSpec.scala 78:11]
  wire  _T_44; // @[AsyncResetSpec.scala 79:22]
  wire  _T_62; // @[AsyncResetSpec.scala 87:9]
  wire  _GEN_2; // @[AsyncResetSpec.scala 80:11]
  wire  _GEN_3; // @[AsyncResetSpec.scala 80:11]
  assign cDiv = value == 2'h3; // @[Counter.scala 37:24]
  assign _T_2 = value + 2'h1; // @[Counter.scala 38:22]
  assign slowClk = cDiv; // @[AsyncResetSpec.scala 47:22]
  assign done = value_1 == 4'hf; // @[Counter.scala 37:24]
  assign _T_5 = value_1 + 4'h1; // @[Counter.scala 38:22]
  assign _T_6 = value_1 == 4'h4; // @[AsyncResetSpec.scala 52:27]
  assign asyncReset = asyncResetNext; // @[AsyncResetSpec.scala 53:35]
  assign _T_8 = value_1 == 4'h3; // @[AsyncResetSpec.scala 68:15]
  assign _T_9 = reg_0_x == 8'h5; // @[AsyncResetSpec.scala 69:21]
  assign _T_11 = _T_9 | reset; // @[AsyncResetSpec.scala 69:11]
  assign _T_12 = _T_11 == 1'h0; // @[AsyncResetSpec.scala 69:11]
  assign _T_13 = reg_0_y == 8'h6; // @[AsyncResetSpec.scala 70:21]
  assign _T_15 = _T_13 | reset; // @[AsyncResetSpec.scala 70:11]
  assign _T_16 = _T_15 == 1'h0; // @[AsyncResetSpec.scala 70:11]
  assign _T_17 = reg_1_x == 8'h7; // @[AsyncResetSpec.scala 71:21]
  assign _T_19 = _T_17 | reset; // @[AsyncResetSpec.scala 71:11]
  assign _T_20 = _T_19 == 1'h0; // @[AsyncResetSpec.scala 71:11]
  assign _T_21 = reg_1_y == 8'h8; // @[AsyncResetSpec.scala 72:21]
  assign _T_23 = _T_21 | reset; // @[AsyncResetSpec.scala 72:11]
  assign _T_24 = _T_23 == 1'h0; // @[AsyncResetSpec.scala 72:11]
  assign _T_25 = value_1 >= 4'h5; // @[AsyncResetSpec.scala 74:15]
  assign _T_26 = value_1 < 4'h7; // @[AsyncResetSpec.scala 74:31]
  assign _T_27 = _T_25 & _T_26; // @[AsyncResetSpec.scala 74:22]
  assign _T_28 = reg_0_x == 8'h0; // @[AsyncResetSpec.scala 75:21]
  assign _T_30 = _T_28 | reset; // @[AsyncResetSpec.scala 75:11]
  assign _T_31 = _T_30 == 1'h0; // @[AsyncResetSpec.scala 75:11]
  assign _T_32 = reg_0_y == 8'h0; // @[AsyncResetSpec.scala 76:21]
  assign _T_34 = _T_32 | reset; // @[AsyncResetSpec.scala 76:11]
  assign _T_35 = _T_34 == 1'h0; // @[AsyncResetSpec.scala 76:11]
  assign _T_36 = reg_1_x == 8'h0; // @[AsyncResetSpec.scala 77:21]
  assign _T_38 = _T_36 | reset; // @[AsyncResetSpec.scala 77:11]
  assign _T_39 = _T_38 == 1'h0; // @[AsyncResetSpec.scala 77:11]
  assign _T_40 = reg_1_y == 8'h0; // @[AsyncResetSpec.scala 78:21]
  assign _T_42 = _T_40 | reset; // @[AsyncResetSpec.scala 78:11]
  assign _T_43 = _T_42 == 1'h0; // @[AsyncResetSpec.scala 78:11]
  assign _T_44 = value_1 >= 4'h7; // @[AsyncResetSpec.scala 79:22]
  assign _T_62 = reset == 1'h0; // @[AsyncResetSpec.scala 87:9]
  assign _GEN_2 = _T_27 == 1'h0; // @[AsyncResetSpec.scala 80:11]
  assign _GEN_3 = _GEN_2 & _T_44; // @[AsyncResetSpec.scala 80:11]
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
  reg_0_x = _RAND_3[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_0_y = _RAND_4[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg_1_x = _RAND_5[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg_1_y = _RAND_6[7:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  if (asyncReset) begin
    reg_0_x = 8'h0;
  end
  if (asyncReset) begin
    reg_0_y = 8'h0;
  end
  if (asyncReset) begin
    reg_1_x = 8'h0;
  end
  if (asyncReset) begin
    reg_1_y = 8'h0;
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
        if (_T_8 & _T_12) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:69 assert(reg(0).x === 5.U)\n"); // @[AsyncResetSpec.scala 69:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8 & _T_12) begin
          $fatal; // @[AsyncResetSpec.scala 69:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_8 & _T_16) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:70 assert(reg(0).y === 6.U)\n"); // @[AsyncResetSpec.scala 70:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8 & _T_16) begin
          $fatal; // @[AsyncResetSpec.scala 70:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_8 & _T_20) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:71 assert(reg(1).x === 7.U)\n"); // @[AsyncResetSpec.scala 71:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8 & _T_20) begin
          $fatal; // @[AsyncResetSpec.scala 71:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_8 & _T_24) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:72 assert(reg(1).y === 8.U)\n"); // @[AsyncResetSpec.scala 72:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8 & _T_24) begin
          $fatal; // @[AsyncResetSpec.scala 72:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_27 & _T_31) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:75 assert(reg(0).x === 0.U)\n"); // @[AsyncResetSpec.scala 75:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_27 & _T_31) begin
          $fatal; // @[AsyncResetSpec.scala 75:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_27 & _T_35) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:76 assert(reg(0).y === 0.U)\n"); // @[AsyncResetSpec.scala 76:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_27 & _T_35) begin
          $fatal; // @[AsyncResetSpec.scala 76:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_27 & _T_39) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:77 assert(reg(1).x === 0.U)\n"); // @[AsyncResetSpec.scala 77:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_27 & _T_39) begin
          $fatal; // @[AsyncResetSpec.scala 77:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_27 & _T_43) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:78 assert(reg(1).y === 0.U)\n"); // @[AsyncResetSpec.scala 78:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_27 & _T_43) begin
          $fatal; // @[AsyncResetSpec.scala 78:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_3 & _T_12) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:80 assert(reg(0).x === 5.U)\n"); // @[AsyncResetSpec.scala 80:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_3 & _T_12) begin
          $fatal; // @[AsyncResetSpec.scala 80:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_3 & _T_16) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:81 assert(reg(0).y === 6.U)\n"); // @[AsyncResetSpec.scala 81:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_3 & _T_16) begin
          $fatal; // @[AsyncResetSpec.scala 81:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_3 & _T_20) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:82 assert(reg(1).x === 7.U)\n"); // @[AsyncResetSpec.scala 82:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_3 & _T_20) begin
          $fatal; // @[AsyncResetSpec.scala 82:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_3 & _T_24) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:83 assert(reg(1).y === 8.U)\n"); // @[AsyncResetSpec.scala 83:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_3 & _T_24) begin
          $fatal; // @[AsyncResetSpec.scala 83:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_62) begin
          $finish; // @[AsyncResetSpec.scala 87:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge slowClk or posedge asyncReset) begin
    if (asyncReset) begin
      reg_0_x <= 8'h0;
    end else begin
      reg_0_x <= 8'h5;
    end
  end
  always @(posedge slowClk or posedge asyncReset) begin
    if (asyncReset) begin
      reg_0_y <= 8'h0;
    end else begin
      reg_0_y <= 8'h6;
    end
  end
  always @(posedge slowClk or posedge asyncReset) begin
    if (asyncReset) begin
      reg_1_x <= 8'h0;
    end else begin
      reg_1_x <= 8'h7;
    end
  end
  always @(posedge slowClk or posedge asyncReset) begin
    if (asyncReset) begin
      reg_1_y <= 8'h0;
    end else begin
      reg_1_y <= 8'h8;
    end
  end
endmodule
