circuit mem_ext_0 :
  module mem_ext_0 :
    input W0_addr : UInt<25>
    input W0_clk : Clock
    input W0_data : UInt<64>
    input W0_en : UInt<1>
    input W0_mask : UInt<8>
    input R0_addr : UInt<25>
    input R0_clk : Clock
    output R0_data : UInt<64>
    input R0_en : UInt<1>
  
    inst mem_0_0 of split_mem_ext_0
    inst mem_0_1 of split_mem_ext_0
    inst mem_0_2 of split_mem_ext_0
    inst mem_0_3 of split_mem_ext_0
    inst mem_0_4 of split_mem_ext_0
    inst mem_0_5 of split_mem_ext_0
    inst mem_0_6 of split_mem_ext_0
    inst mem_0_7 of split_mem_ext_0
    node R0_data_0_0 = mem_0_0.R0_data
    node R0_data_0_1 = mem_0_1.R0_data
    node R0_data_0_2 = mem_0_2.R0_data
    node R0_data_0_3 = mem_0_3.R0_data
    node R0_data_0_4 = mem_0_4.R0_data
    node R0_data_0_5 = mem_0_5.R0_data
    node R0_data_0_6 = mem_0_6.R0_data
    node R0_data_0_7 = mem_0_7.R0_data
    node _GEN_0 = cat(R0_data_0_1, R0_data_0_0)
    node _GEN_1 = cat(R0_data_0_2, _GEN_0)
    node _GEN_2 = cat(R0_data_0_3, _GEN_1)
    node _GEN_3 = cat(R0_data_0_4, _GEN_2)
    node _GEN_4 = cat(R0_data_0_5, _GEN_3)
    node _GEN_5 = cat(R0_data_0_6, _GEN_4)
    node R0_data_0 = cat(R0_data_0_7, _GEN_5)
    node _GEN_6 = cat(R0_data_0_1, R0_data_0_0)
    node _GEN_7 = cat(R0_data_0_2, _GEN_0)
    node _GEN_8 = cat(R0_data_0_3, _GEN_1)
    node _GEN_9 = cat(R0_data_0_4, _GEN_2)
    node _GEN_10 = cat(R0_data_0_5, _GEN_3)
    node _GEN_11 = cat(R0_data_0_6, _GEN_4)
    R0_data <= cat(R0_data_0_7, _GEN_5)
    mem_0_0.W0_addr <= W0_addr
    mem_0_0.W0_clk <= W0_clk
    mem_0_0.W0_data <= bits(W0_data, 7, 0)
    mem_0_0.W0_en <= W0_en
    mem_0_0.W0_mask <= bits(W0_mask, 0, 0)
    mem_0_0.R0_addr <= R0_addr
    mem_0_0.R0_clk <= R0_clk
    mem_0_0.R0_en <= R0_en
    mem_0_1.W0_addr <= W0_addr
    mem_0_1.W0_clk <= W0_clk
    mem_0_1.W0_data <= bits(W0_data, 15, 8)
    mem_0_1.W0_en <= W0_en
    mem_0_1.W0_mask <= bits(W0_mask, 1, 1)
    mem_0_1.R0_addr <= R0_addr
    mem_0_1.R0_clk <= R0_clk
    mem_0_1.R0_en <= R0_en
    mem_0_2.W0_addr <= W0_addr
    mem_0_2.W0_clk <= W0_clk
    mem_0_2.W0_data <= bits(W0_data, 23, 16)
    mem_0_2.W0_en <= W0_en
    mem_0_2.W0_mask <= bits(W0_mask, 2, 2)
    mem_0_2.R0_addr <= R0_addr
    mem_0_2.R0_clk <= R0_clk
    mem_0_2.R0_en <= R0_en
    mem_0_3.W0_addr <= W0_addr
    mem_0_3.W0_clk <= W0_clk
    mem_0_3.W0_data <= bits(W0_data, 31, 24)
    mem_0_3.W0_en <= W0_en
    mem_0_3.W0_mask <= bits(W0_mask, 3, 3)
    mem_0_3.R0_addr <= R0_addr
    mem_0_3.R0_clk <= R0_clk
    mem_0_3.R0_en <= R0_en
    mem_0_4.W0_addr <= W0_addr
    mem_0_4.W0_clk <= W0_clk
    mem_0_4.W0_data <= bits(W0_data, 39, 32)
    mem_0_4.W0_en <= W0_en
    mem_0_4.W0_mask <= bits(W0_mask, 4, 4)
    mem_0_4.R0_addr <= R0_addr
    mem_0_4.R0_clk <= R0_clk
    mem_0_4.R0_en <= R0_en
    mem_0_5.W0_addr <= W0_addr
    mem_0_5.W0_clk <= W0_clk
    mem_0_5.W0_data <= bits(W0_data, 47, 40)
    mem_0_5.W0_en <= W0_en
    mem_0_5.W0_mask <= bits(W0_mask, 5, 5)
    mem_0_5.R0_addr <= R0_addr
    mem_0_5.R0_clk <= R0_clk
    mem_0_5.R0_en <= R0_en
    mem_0_6.W0_addr <= W0_addr
    mem_0_6.W0_clk <= W0_clk
    mem_0_6.W0_data <= bits(W0_data, 55, 48)
    mem_0_6.W0_en <= W0_en
    mem_0_6.W0_mask <= bits(W0_mask, 6, 6)
    mem_0_6.R0_addr <= R0_addr
    mem_0_6.R0_clk <= R0_clk
    mem_0_6.R0_en <= R0_en
    mem_0_7.W0_addr <= W0_addr
    mem_0_7.W0_clk <= W0_clk
    mem_0_7.W0_data <= bits(W0_data, 63, 56)
    mem_0_7.W0_en <= W0_en
    mem_0_7.W0_mask <= bits(W0_mask, 7, 7)
    mem_0_7.R0_addr <= R0_addr
    mem_0_7.R0_clk <= R0_clk
    mem_0_7.R0_en <= R0_en

  module split_mem_ext_0 :
    input W0_addr : UInt<25>
    input W0_clk : Clock
    input W0_data : UInt<8>
    input W0_en : UInt<1>
    input W0_mask : UInt<1>
    input R0_addr : UInt<25>
    input R0_clk : Clock
    output R0_data : UInt<8>
    input R0_en : UInt<1>
  
    mem ram :
      data-type => UInt<8>
      depth => 33554432
      read-latency => 0
      write-latency => 1
      reader => R_0
      writer => W_0
      read-under-write => undefined
    R0_data <= ram.R_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = R0_en
    node _GEN_1 = R0_addr
    reg ram_R_0_addr_pipe_0 : UInt<25>, R0_clk with :
      reset => (UInt<1>("h0"), ram_R_0_addr_pipe_0)
    node ram_R_0_addr_en = R0_en
    ram_R_0_addr_pipe_0 <= mux(_GEN_0, R0_addr, ram_R_0_addr_pipe_0)
    ram.R_0.clk <= R0_clk
    ram.R_0.en <= R0_en
    ram.R_0.addr <= ram_R_0_addr_pipe_0
    node _GEN_2 = W0_en
    node _GEN_3 = W0_mask
    node _GEN_4 = W0_addr
    node _GEN_5 = W0_data
    ram.W_0.clk <= W0_clk
    ram.W_0.en <= W0_en
    ram.W_0.mask <= W0_mask
    ram.W_0.addr <= W0_addr
    ram.W_0.data <= W0_data
