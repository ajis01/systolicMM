module mem_ext_0(
  input  [24:0] W0_addr,
  input         W0_clk,
  input  [63:0] W0_data,
  input         W0_en,
  input  [7:0]  W0_mask,
  input  [24:0] R0_addr,
  input         R0_clk,
  output [63:0] R0_data,
  input         R0_en
);
  wire [24:0] mem_0_0_W0_addr;
  wire  mem_0_0_W0_clk;
  wire [7:0] mem_0_0_W0_data;
  wire  mem_0_0_W0_en;
  wire  mem_0_0_W0_mask;
  wire [24:0] mem_0_0_R0_addr;
  wire  mem_0_0_R0_clk;
  wire [7:0] mem_0_0_R0_data;
  wire  mem_0_0_R0_en;
  wire [24:0] mem_0_1_W0_addr;
  wire  mem_0_1_W0_clk;
  wire [7:0] mem_0_1_W0_data;
  wire  mem_0_1_W0_en;
  wire  mem_0_1_W0_mask;
  wire [24:0] mem_0_1_R0_addr;
  wire  mem_0_1_R0_clk;
  wire [7:0] mem_0_1_R0_data;
  wire  mem_0_1_R0_en;
  wire [24:0] mem_0_2_W0_addr;
  wire  mem_0_2_W0_clk;
  wire [7:0] mem_0_2_W0_data;
  wire  mem_0_2_W0_en;
  wire  mem_0_2_W0_mask;
  wire [24:0] mem_0_2_R0_addr;
  wire  mem_0_2_R0_clk;
  wire [7:0] mem_0_2_R0_data;
  wire  mem_0_2_R0_en;
  wire [24:0] mem_0_3_W0_addr;
  wire  mem_0_3_W0_clk;
  wire [7:0] mem_0_3_W0_data;
  wire  mem_0_3_W0_en;
  wire  mem_0_3_W0_mask;
  wire [24:0] mem_0_3_R0_addr;
  wire  mem_0_3_R0_clk;
  wire [7:0] mem_0_3_R0_data;
  wire  mem_0_3_R0_en;
  wire [24:0] mem_0_4_W0_addr;
  wire  mem_0_4_W0_clk;
  wire [7:0] mem_0_4_W0_data;
  wire  mem_0_4_W0_en;
  wire  mem_0_4_W0_mask;
  wire [24:0] mem_0_4_R0_addr;
  wire  mem_0_4_R0_clk;
  wire [7:0] mem_0_4_R0_data;
  wire  mem_0_4_R0_en;
  wire [24:0] mem_0_5_W0_addr;
  wire  mem_0_5_W0_clk;
  wire [7:0] mem_0_5_W0_data;
  wire  mem_0_5_W0_en;
  wire  mem_0_5_W0_mask;
  wire [24:0] mem_0_5_R0_addr;
  wire  mem_0_5_R0_clk;
  wire [7:0] mem_0_5_R0_data;
  wire  mem_0_5_R0_en;
  wire [24:0] mem_0_6_W0_addr;
  wire  mem_0_6_W0_clk;
  wire [7:0] mem_0_6_W0_data;
  wire  mem_0_6_W0_en;
  wire  mem_0_6_W0_mask;
  wire [24:0] mem_0_6_R0_addr;
  wire  mem_0_6_R0_clk;
  wire [7:0] mem_0_6_R0_data;
  wire  mem_0_6_R0_en;
  wire [24:0] mem_0_7_W0_addr;
  wire  mem_0_7_W0_clk;
  wire [7:0] mem_0_7_W0_data;
  wire  mem_0_7_W0_en;
  wire  mem_0_7_W0_mask;
  wire [24:0] mem_0_7_R0_addr;
  wire  mem_0_7_R0_clk;
  wire [7:0] mem_0_7_R0_data;
  wire  mem_0_7_R0_en;
  wire [7:0] R0_data_0_0;
  wire [7:0] R0_data_0_1;
  wire [7:0] R0_data_0_2;
  wire [7:0] R0_data_0_3;
  wire [7:0] R0_data_0_4;
  wire [7:0] R0_data_0_5;
  wire [7:0] R0_data_0_6;
  wire [7:0] R0_data_0_7;
  wire [15:0] _GEN_0;
  wire [23:0] _GEN_1;
  wire [31:0] _GEN_2;
  wire [39:0] _GEN_3;
  wire [47:0] _GEN_4;
  wire [55:0] _GEN_5;
  wire [63:0] R0_data_0;
  wire [15:0] _GEN_6;
  wire [23:0] _GEN_7;
  wire [31:0] _GEN_8;
  wire [39:0] _GEN_9;
  wire [47:0] _GEN_10;
  wire [55:0] _GEN_11;
  split_mem_ext_0 mem_0_0 (
    .W0_addr(mem_0_0_W0_addr),
    .W0_clk(mem_0_0_W0_clk),
    .W0_data(mem_0_0_W0_data),
    .W0_en(mem_0_0_W0_en),
    .W0_mask(mem_0_0_W0_mask),
    .R0_addr(mem_0_0_R0_addr),
    .R0_clk(mem_0_0_R0_clk),
    .R0_data(mem_0_0_R0_data),
    .R0_en(mem_0_0_R0_en)
  );
  split_mem_ext_0 mem_0_1 (
    .W0_addr(mem_0_1_W0_addr),
    .W0_clk(mem_0_1_W0_clk),
    .W0_data(mem_0_1_W0_data),
    .W0_en(mem_0_1_W0_en),
    .W0_mask(mem_0_1_W0_mask),
    .R0_addr(mem_0_1_R0_addr),
    .R0_clk(mem_0_1_R0_clk),
    .R0_data(mem_0_1_R0_data),
    .R0_en(mem_0_1_R0_en)
  );
  split_mem_ext_0 mem_0_2 (
    .W0_addr(mem_0_2_W0_addr),
    .W0_clk(mem_0_2_W0_clk),
    .W0_data(mem_0_2_W0_data),
    .W0_en(mem_0_2_W0_en),
    .W0_mask(mem_0_2_W0_mask),
    .R0_addr(mem_0_2_R0_addr),
    .R0_clk(mem_0_2_R0_clk),
    .R0_data(mem_0_2_R0_data),
    .R0_en(mem_0_2_R0_en)
  );
  split_mem_ext_0 mem_0_3 (
    .W0_addr(mem_0_3_W0_addr),
    .W0_clk(mem_0_3_W0_clk),
    .W0_data(mem_0_3_W0_data),
    .W0_en(mem_0_3_W0_en),
    .W0_mask(mem_0_3_W0_mask),
    .R0_addr(mem_0_3_R0_addr),
    .R0_clk(mem_0_3_R0_clk),
    .R0_data(mem_0_3_R0_data),
    .R0_en(mem_0_3_R0_en)
  );
  split_mem_ext_0 mem_0_4 (
    .W0_addr(mem_0_4_W0_addr),
    .W0_clk(mem_0_4_W0_clk),
    .W0_data(mem_0_4_W0_data),
    .W0_en(mem_0_4_W0_en),
    .W0_mask(mem_0_4_W0_mask),
    .R0_addr(mem_0_4_R0_addr),
    .R0_clk(mem_0_4_R0_clk),
    .R0_data(mem_0_4_R0_data),
    .R0_en(mem_0_4_R0_en)
  );
  split_mem_ext_0 mem_0_5 (
    .W0_addr(mem_0_5_W0_addr),
    .W0_clk(mem_0_5_W0_clk),
    .W0_data(mem_0_5_W0_data),
    .W0_en(mem_0_5_W0_en),
    .W0_mask(mem_0_5_W0_mask),
    .R0_addr(mem_0_5_R0_addr),
    .R0_clk(mem_0_5_R0_clk),
    .R0_data(mem_0_5_R0_data),
    .R0_en(mem_0_5_R0_en)
  );
  split_mem_ext_0 mem_0_6 (
    .W0_addr(mem_0_6_W0_addr),
    .W0_clk(mem_0_6_W0_clk),
    .W0_data(mem_0_6_W0_data),
    .W0_en(mem_0_6_W0_en),
    .W0_mask(mem_0_6_W0_mask),
    .R0_addr(mem_0_6_R0_addr),
    .R0_clk(mem_0_6_R0_clk),
    .R0_data(mem_0_6_R0_data),
    .R0_en(mem_0_6_R0_en)
  );
  split_mem_ext_0 mem_0_7 (
    .W0_addr(mem_0_7_W0_addr),
    .W0_clk(mem_0_7_W0_clk),
    .W0_data(mem_0_7_W0_data),
    .W0_en(mem_0_7_W0_en),
    .W0_mask(mem_0_7_W0_mask),
    .R0_addr(mem_0_7_R0_addr),
    .R0_clk(mem_0_7_R0_clk),
    .R0_data(mem_0_7_R0_data),
    .R0_en(mem_0_7_R0_en)
  );
  assign R0_data_0_0 = mem_0_0_R0_data;
  assign R0_data_0_1 = mem_0_1_R0_data;
  assign R0_data_0_2 = mem_0_2_R0_data;
  assign R0_data_0_3 = mem_0_3_R0_data;
  assign R0_data_0_4 = mem_0_4_R0_data;
  assign R0_data_0_5 = mem_0_5_R0_data;
  assign R0_data_0_6 = mem_0_6_R0_data;
  assign R0_data_0_7 = mem_0_7_R0_data;
  assign _GEN_0 = {R0_data_0_1,R0_data_0_0};
  assign _GEN_1 = {R0_data_0_2,_GEN_0};
  assign _GEN_2 = {R0_data_0_3,_GEN_1};
  assign _GEN_3 = {R0_data_0_4,_GEN_2};
  assign _GEN_4 = {R0_data_0_5,_GEN_3};
  assign _GEN_5 = {R0_data_0_6,_GEN_4};
  assign R0_data_0 = {R0_data_0_7,_GEN_5};
  assign _GEN_6 = {R0_data_0_1,R0_data_0_0};
  assign _GEN_7 = {R0_data_0_2,_GEN_0};
  assign _GEN_8 = {R0_data_0_3,_GEN_1};
  assign _GEN_9 = {R0_data_0_4,_GEN_2};
  assign _GEN_10 = {R0_data_0_5,_GEN_3};
  assign _GEN_11 = {R0_data_0_6,_GEN_4};
  assign R0_data = {R0_data_0_7,_GEN_5};
  assign mem_0_0_W0_addr = W0_addr;
  assign mem_0_0_W0_clk = W0_clk;
  assign mem_0_0_W0_data = W0_data[7:0];
  assign mem_0_0_W0_en = W0_en;
  assign mem_0_0_W0_mask = W0_mask[0];
  assign mem_0_0_R0_addr = R0_addr;
  assign mem_0_0_R0_clk = R0_clk;
  assign mem_0_0_R0_en = R0_en;
  assign mem_0_1_W0_addr = W0_addr;
  assign mem_0_1_W0_clk = W0_clk;
  assign mem_0_1_W0_data = W0_data[15:8];
  assign mem_0_1_W0_en = W0_en;
  assign mem_0_1_W0_mask = W0_mask[1];
  assign mem_0_1_R0_addr = R0_addr;
  assign mem_0_1_R0_clk = R0_clk;
  assign mem_0_1_R0_en = R0_en;
  assign mem_0_2_W0_addr = W0_addr;
  assign mem_0_2_W0_clk = W0_clk;
  assign mem_0_2_W0_data = W0_data[23:16];
  assign mem_0_2_W0_en = W0_en;
  assign mem_0_2_W0_mask = W0_mask[2];
  assign mem_0_2_R0_addr = R0_addr;
  assign mem_0_2_R0_clk = R0_clk;
  assign mem_0_2_R0_en = R0_en;
  assign mem_0_3_W0_addr = W0_addr;
  assign mem_0_3_W0_clk = W0_clk;
  assign mem_0_3_W0_data = W0_data[31:24];
  assign mem_0_3_W0_en = W0_en;
  assign mem_0_3_W0_mask = W0_mask[3];
  assign mem_0_3_R0_addr = R0_addr;
  assign mem_0_3_R0_clk = R0_clk;
  assign mem_0_3_R0_en = R0_en;
  assign mem_0_4_W0_addr = W0_addr;
  assign mem_0_4_W0_clk = W0_clk;
  assign mem_0_4_W0_data = W0_data[39:32];
  assign mem_0_4_W0_en = W0_en;
  assign mem_0_4_W0_mask = W0_mask[4];
  assign mem_0_4_R0_addr = R0_addr;
  assign mem_0_4_R0_clk = R0_clk;
  assign mem_0_4_R0_en = R0_en;
  assign mem_0_5_W0_addr = W0_addr;
  assign mem_0_5_W0_clk = W0_clk;
  assign mem_0_5_W0_data = W0_data[47:40];
  assign mem_0_5_W0_en = W0_en;
  assign mem_0_5_W0_mask = W0_mask[5];
  assign mem_0_5_R0_addr = R0_addr;
  assign mem_0_5_R0_clk = R0_clk;
  assign mem_0_5_R0_en = R0_en;
  assign mem_0_6_W0_addr = W0_addr;
  assign mem_0_6_W0_clk = W0_clk;
  assign mem_0_6_W0_data = W0_data[55:48];
  assign mem_0_6_W0_en = W0_en;
  assign mem_0_6_W0_mask = W0_mask[6];
  assign mem_0_6_R0_addr = R0_addr;
  assign mem_0_6_R0_clk = R0_clk;
  assign mem_0_6_R0_en = R0_en;
  assign mem_0_7_W0_addr = W0_addr;
  assign mem_0_7_W0_clk = W0_clk;
  assign mem_0_7_W0_data = W0_data[63:56];
  assign mem_0_7_W0_en = W0_en;
  assign mem_0_7_W0_mask = W0_mask[7];
  assign mem_0_7_R0_addr = R0_addr;
  assign mem_0_7_R0_clk = R0_clk;
  assign mem_0_7_R0_en = R0_en;
endmodule
module split_mem_ext_0(
  input  [24:0] W0_addr,
  input         W0_clk,
  input  [7:0]  W0_data,
  input         W0_en,
  input         W0_mask,
  input  [24:0] R0_addr,
  input         R0_clk,
  output [7:0]  R0_data,
  input         R0_en
);
  reg [7:0] ram [0:33554431];
  reg [31:0] _RAND_0;
  wire [7:0] ram_R_0_data;
  wire [24:0] ram_R_0_addr;
  wire [7:0] ram_W_0_data;
  wire [24:0] ram_W_0_addr;
  wire  ram_W_0_mask;
  wire  ram_W_0_en;
  wire  _GEN_0;
  wire [24:0] _GEN_1;
  reg [24:0] ram_R_0_addr_pipe_0;
  reg [31:0] _RAND_1;
  wire  ram_R_0_addr_en;
  wire  _GEN_2;
  wire  _GEN_3;
  wire [24:0] _GEN_4;
  wire [7:0] _GEN_5;
  assign ram_R_0_addr = ram_R_0_addr_pipe_0;
  assign ram_R_0_data = ram[ram_R_0_addr];
  assign ram_W_0_data = W0_data;
  assign ram_W_0_addr = W0_addr;
  assign ram_W_0_mask = W0_mask;
  assign ram_W_0_en = W0_en;
  assign R0_data = ram_R_0_data;
  assign _GEN_0 = R0_en;
  assign _GEN_1 = R0_addr;
  assign ram_R_0_addr_en = R0_en;
  assign _GEN_2 = W0_en;
  assign _GEN_3 = W0_mask;
  assign _GEN_4 = W0_addr;
  assign _GEN_5 = W0_data;
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
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 33554432; initvar = initvar+1)
    ram[initvar] = _RAND_0[7:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_R_0_addr_pipe_0 = _RAND_1[24:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge W0_clk) begin
    if(ram_W_0_en & ram_W_0_mask) begin
      ram[ram_W_0_addr] <= ram_W_0_data;
    end
  end
  always @(posedge R0_clk) begin
    if (_GEN_0) begin
      ram_R_0_addr_pipe_0 <= R0_addr;
    end
  end
endmodule
