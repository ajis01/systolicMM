circuit TestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@2.0]
  module Queue_6_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@46999.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@47000.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@47001.4]
    output io_enq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
    input io_enq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
    input io_enq_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
    input io_enq_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
    input io_enq_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
    input io_deq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
    output io_deq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
    output io_deq_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
    output io_deq_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
    output io_deq_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  
    mem _T_data : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
      data-type => UInt<64>
      depth => 1
      read-latency => 0
      write-latency => 1
      reader => _T_14
      writer => _T_10
      read-under-write => undefined
    mem _T_strb : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
      data-type => UInt<8>
      depth => 1
      read-latency => 0
      write-latency => 1
      reader => _T_14
      writer => _T_10
      read-under-write => undefined
    mem _T_last : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
      data-type => UInt<1>
      depth => 1
      read-latency => 0
      write-latency => 1
      reader => _T_14
      writer => _T_10
      read-under-write => undefined
    reg _T_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_1) @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@47005.4]
    skip
    node _T_3 = eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@47007.4]
    skip
    skip
    node _T_6 = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@47010.4]
    node _T_8 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@47013.4]
    node _GEN_9 = mux(io_deq_ready, UInt<1>("h0"), _T_6) @[Decoupled.scala 240:27:example.TestHarness.GemminiRocketConfig.fir@47044.6]
    node _GEN_14 = mux(_T_3, _GEN_9, _T_6) @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@47039.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_13 = mux(_T_3, UInt<1>("h0"), _T_8) @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@47039.4]
    skip
    node _T_11 = neq(_GEN_14, _GEN_13) @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@47024.4]
    node _GEN_7 = mux(_T_11, _GEN_14, _T_1) @[Decoupled.scala 227:28:example.TestHarness.GemminiRocketConfig.fir@47025.4]
    node _T_12 = eq(_T_3, UInt<1>("h0")) @[Decoupled.scala 231:19:example.TestHarness.GemminiRocketConfig.fir@47028.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@47031.4]
    io_deq_valid <= or(io_enq_valid, _T_12) @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@47029.4 Decoupled.scala 236:40:example.TestHarness.GemminiRocketConfig.fir@47037.6]
    io_deq_bits_data <= mux(_T_3, io_enq_bits_data, _T_data._T_14.data) @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@47035.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@47042.6]
    io_deq_bits_strb <= mux(_T_3, io_enq_bits_strb, _T_strb._T_14.data) @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@47034.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@47041.6]
    io_deq_bits_last <= mux(_T_3, io_enq_bits_last, _T_last._T_14.data) @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@47033.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@47040.6]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    _T_1 <= mux(reset, UInt<1>("h0"), _GEN_7) @[Decoupled.scala 228:16:example.TestHarness.GemminiRocketConfig.fir@47026.6]
    skip
    skip
    _T_data._T_14.clk <= clock
    _T_data._T_14.en <= UInt<1>("h1")
    _T_data._T_14.addr <= UInt<1>("h0")
    skip
    skip
    skip
    skip
    _T_data._T_10.clk <= clock
    _T_data._T_10.en <= mux(_T_3, _GEN_9, _T_6)
    _T_data._T_10.mask <= UInt<1>("h1")
    _T_data._T_10.addr <= UInt<1>("h0")
    _T_data._T_10.data <= io_enq_bits_data
    skip
    skip
    _T_strb._T_14.clk <= clock
    _T_strb._T_14.en <= UInt<1>("h1")
    _T_strb._T_14.addr <= UInt<1>("h0")
    skip
    skip
    skip
    skip
    _T_strb._T_10.clk <= clock
    _T_strb._T_10.en <= mux(_T_3, _GEN_9, _T_6)
    _T_strb._T_10.mask <= UInt<1>("h1")
    _T_strb._T_10.addr <= UInt<1>("h0")
    _T_strb._T_10.data <= io_enq_bits_strb
    skip
    skip
    _T_last._T_14.clk <= clock
    _T_last._T_14.en <= UInt<1>("h1")
    _T_last._T_14.addr <= UInt<1>("h0")
    skip
    skip
    skip
    skip
    _T_last._T_10.clk <= clock
    _T_last._T_10.en <= mux(_T_3, _GEN_9, _T_6)
    _T_last._T_10.mask <= UInt<1>("h1")
    _T_last._T_10.addr <= UInt<1>("h0")
    _T_last._T_10.data <= io_enq_bits_last

  extmodule Top : @[:example.TestHarness.GemminiRocketConfig.fir@323310.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@323311.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323312.4]
    output debug_clockeddmi_dmi_req_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    input debug_clockeddmi_dmi_req_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    input debug_clockeddmi_dmi_req_bits_addr : UInt<7> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    input debug_clockeddmi_dmi_req_bits_data : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    input debug_clockeddmi_dmi_req_bits_op : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    input debug_clockeddmi_dmi_resp_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    output debug_clockeddmi_dmi_resp_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    output debug_clockeddmi_dmi_resp_bits_data : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    output debug_clockeddmi_dmi_resp_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    input debug_clockeddmi_dmiClock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    input debug_clockeddmi_dmiReset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    output debug_ndreset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    output debug_dmactive : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323315.4]
    input interrupts : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@323316.4]
    input mem_axi4_0_aw_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_bits_addr : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_bits_lock : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_bits_cache : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_bits_prot : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_aw_bits_qos : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_w_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_w_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_w_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_w_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_w_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_b_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_b_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_b_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_b_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_ar_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_bits_addr : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_bits_lock : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_bits_cache : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_bits_prot : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_ar_bits_qos : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output mem_axi4_0_r_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_r_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_r_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_r_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_r_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    input mem_axi4_0_r_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323317.4]
    output uart_0_txd : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323320.4]
    input uart_0_rxd : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323320.4]
    output serial_in_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323321.4]
    input serial_in_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323321.4]
    input serial_in_bits : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@323321.4]
    input serial_out_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323321.4]
    output serial_out_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323321.4]
    output serial_out_bits : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@323321.4]
  
    defname = Top
    

  extmodule SimSerial : @[:example.TestHarness.GemminiRocketConfig.fir@323653.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@323654.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323655.4]
    input serial_in_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323656.4]
    output serial_in_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323656.4]
    output serial_in_bits : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@323656.4]
    output serial_out_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323656.4]
    input serial_out_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323656.4]
    input serial_out_bits : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@323656.4]
    output exit : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323657.4]
  
    defname = SimSerial
    

  module Queue_52_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@323662.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@323663.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323664.4]
    output io_enq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
    input io_enq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
    input io_enq_bits : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
    input io_deq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
    output io_deq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
    output io_deq_bits : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
  
    mem _T : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
      data-type => UInt<8>
      depth => 128
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    reg value : UInt<7>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323668.4]
    reg value_1 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323669.4]
    reg _T_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_1) @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@323670.4]
    node _T_2 = eq(value, value_1) @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@323671.4]
    node _T_3 = eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@323672.4]
    node _T_4 = and(_T_2, _T_3) @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@323673.4]
    node _T_5 = and(_T_2, _T_1) @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@323674.4]
    node _T_6 = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@323675.4]
    node _T_8 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@323678.4]
    skip
    node _T_11 = add(value, UInt<7>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323685.6]
    node _T_12 = tail(_T_11, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323686.6]
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_5 = mux(_T_6, _T_12, value) @[Decoupled.scala 220:17:example.TestHarness.GemminiRocketConfig.fir@323681.4]
    skip
    node _T_13 = add(value_1, UInt<7>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323691.6]
    node _T_14 = tail(_T_13, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323692.6]
    skip
    node _GEN_6 = mux(_T_8, _T_14, value_1) @[Decoupled.scala 224:17:example.TestHarness.GemminiRocketConfig.fir@323689.4]
    node _T_15 = neq(_T_6, _T_8) @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@323695.4]
    node _GEN_7 = mux(_T_15, _T_6, _T_1) @[Decoupled.scala 227:28:example.TestHarness.GemminiRocketConfig.fir@323696.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= eq(_T_5, UInt<1>("h0")) @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@323702.4]
    io_deq_valid <= eq(_T_4, UInt<1>("h0")) @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@323700.4]
    io_deq_bits <= _T._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@323704.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    value <= mux(reset, UInt<7>("h0"), _GEN_5) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@323687.6]
    value_1 <= mux(reset, UInt<7>("h0"), _GEN_6) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@323693.6]
    _T_1 <= mux(reset, UInt<1>("h0"), _GEN_7) @[Decoupled.scala 228:16:example.TestHarness.GemminiRocketConfig.fir@323697.6]
    skip
    skip
    _T._T_18.clk <= clock
    _T._T_18.en <= UInt<1>("h1")
    _T._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T._T_10.clk <= clock
    _T._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T._T_10.mask <= UInt<1>("h1")
    _T._T_10.addr <= value
    _T._T_10.data <= io_enq_bits

  extmodule SimUART_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@323762.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@323763.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323764.4]
    input serial_in_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323765.4]
    output serial_in_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323765.4]
    output serial_in_bits : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@323765.4]
    output serial_out_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323765.4]
    input serial_out_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323765.4]
    input serial_out_bits : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@323765.4]
  
    defname = SimUART
    parameter UARTNO = 0

  module UARTAdapter_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@323770.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@323771.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323772.4]
    input io_uart_txd : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323773.4]
    output io_uart_rxd : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323773.4]
  
    inst txfifo of Queue_52_inTestHarness @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
    inst rxfifo of Queue_52_inTestHarness @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
    inst sim of SimUART_inTestHarness @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
    reg txState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), txState) @[UARTAdapter.scala 43:24:example.TestHarness.GemminiRocketConfig.fir@323781.4]
    reg txData : UInt<8>, clock with :
      reset => (UInt<1>("h0"), txData) @[UARTAdapter.scala 44:19:example.TestHarness.GemminiRocketConfig.fir@323782.4]
    node _T = eq(txState, UInt<2>("h2")) @[UARTAdapter.scala 46:49:example.TestHarness.GemminiRocketConfig.fir@323783.4]
    node _T_1 = and(_T, txfifo.io_enq_ready) @[UARTAdapter.scala 46:61:example.TestHarness.GemminiRocketConfig.fir@323784.4]
    reg value : UInt<3>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323785.4]
    node _T_2 = eq(value, UInt<3>("h7")) @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323787.6]
    node _T_3 = add(value, UInt<3>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323788.6]
    node _T_4 = tail(_T_3, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323789.6]
    node _GEN_0 = mux(_T_1, _T_4, value) @[Counter.scala 71:17:example.TestHarness.GemminiRocketConfig.fir@323786.4]
    node txDataWrap = and(_T_1, _T_2) @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323792.4]
    node _T_5 = eq(txState, UInt<2>("h1")) @[UARTAdapter.scala 48:51:example.TestHarness.GemminiRocketConfig.fir@323793.4]
    node _T_6 = and(_T_5, txfifo.io_enq_ready) @[UARTAdapter.scala 48:63:example.TestHarness.GemminiRocketConfig.fir@323794.4]
    reg value_1 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323795.4]
    node _T_7 = eq(value_1, UInt<10>("h363")) @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323797.6]
    node _T_8 = add(value_1, UInt<10>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323798.6]
    node _T_9 = tail(_T_8, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323799.6]
    node _GEN_1 = mux(_T_7, UInt<10>("h0"), _T_9) @[Counter.scala 40:21:example.TestHarness.GemminiRocketConfig.fir@323801.6]
    node _GEN_2 = mux(_T_6, _GEN_1, value_1) @[Counter.scala 71:17:example.TestHarness.GemminiRocketConfig.fir@323796.4]
    node txBaudWrap = and(_T_6, _T_7) @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323805.4]
    node _T_10 = eq(txState, UInt<2>("h0")) @[UARTAdapter.scala 49:53:example.TestHarness.GemminiRocketConfig.fir@323806.4]
    node _T_11 = eq(io_uart_txd, UInt<1>("h0")) @[UARTAdapter.scala 49:80:example.TestHarness.GemminiRocketConfig.fir@323807.4]
    node _T_12 = and(_T_10, _T_11) @[UARTAdapter.scala 49:65:example.TestHarness.GemminiRocketConfig.fir@323808.4]
    node _T_13 = and(_T_12, txfifo.io_enq_ready) @[UARTAdapter.scala 49:88:example.TestHarness.GemminiRocketConfig.fir@323809.4]
    reg value_2 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), value_2) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323810.4]
    node _T_14 = eq(value_2, UInt<2>("h3")) @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323812.6]
    node _T_15 = add(value_2, UInt<2>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323813.6]
    node _T_16 = tail(_T_15, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323814.6]
    node _GEN_3 = mux(_T_13, _T_16, value_2) @[Counter.scala 71:17:example.TestHarness.GemminiRocketConfig.fir@323811.4]
    node txSlackWrap = and(_T_13, _T_14) @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323817.4]
    node _T_17 = eq(UInt<2>("h0"), txState) @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323818.4]
    node _GEN_4 = mux(txSlackWrap, UInt<8>("h0"), txData) @[UARTAdapter.scala 53:25:example.TestHarness.GemminiRocketConfig.fir@323820.6]
    node _GEN_5 = mux(txSlackWrap, UInt<2>("h1"), txState) @[UARTAdapter.scala 53:25:example.TestHarness.GemminiRocketConfig.fir@323820.6]
    node _T_18 = eq(UInt<2>("h1"), txState) @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323826.6]
    node _GEN_6 = mux(txBaudWrap, UInt<2>("h2"), txState) @[UARTAdapter.scala 59:24:example.TestHarness.GemminiRocketConfig.fir@323828.8]
    node _T_19 = eq(UInt<2>("h2"), txState) @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323833.8]
    node _GEN_30 = pad(io_uart_txd, 8) @[UARTAdapter.scala 65:41:example.TestHarness.GemminiRocketConfig.fir@323836.12]
    node _T_20 = dshlw(_GEN_30, value) @[UARTAdapter.scala 65:41:example.TestHarness.GemminiRocketConfig.fir@323836.12]
    node _T_21 = or(txData, _T_20) @[UARTAdapter.scala 65:26:example.TestHarness.GemminiRocketConfig.fir@323837.12]
    node _GEN_7 = mux(txfifo.io_enq_ready, _T_21, txData) @[UARTAdapter.scala 64:34:example.TestHarness.GemminiRocketConfig.fir@323835.10]
    skip
    node _T_23 = mux(io_uart_txd, UInt<2>("h0"), UInt<2>("h3")) @[UARTAdapter.scala 68:23:example.TestHarness.GemminiRocketConfig.fir@323842.12]
    node _GEN_8 = mux(txfifo.io_enq_ready, UInt<2>("h1"), txState) @[UARTAdapter.scala 69:39:example.TestHarness.GemminiRocketConfig.fir@323846.12]
    node _GEN_9 = mux(txDataWrap, _T_23, _GEN_8) @[UARTAdapter.scala 67:24:example.TestHarness.GemminiRocketConfig.fir@323840.10]
    node _T_24 = eq(UInt<2>("h3"), txState) @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323851.10]
    skip
    node _T_26 = and(io_uart_txd, txfifo.io_enq_ready) @[UARTAdapter.scala 74:32:example.TestHarness.GemminiRocketConfig.fir@323854.12]
    node _GEN_10 = mux(_T_26, UInt<2>("h0"), txState) @[UARTAdapter.scala 74:56:example.TestHarness.GemminiRocketConfig.fir@323855.12]
    node _GEN_11 = mux(_T_24, _GEN_10, txState) @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323852.10]
    node _GEN_12 = mux(_T_19, _GEN_7, txData) @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323834.8]
    node _GEN_13 = mux(_T_19, _GEN_9, _GEN_11) @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323834.8]
    node _GEN_14 = mux(_T_18, _GEN_6, _GEN_13) @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323827.6]
    node _GEN_15 = mux(_T_18, txData, _GEN_12) @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323827.6]
    skip
    node _GEN_17 = mux(_T_17, _GEN_5, _GEN_14) @[Conditional.scala 40:58:example.TestHarness.GemminiRocketConfig.fir@323819.4]
    reg rxState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), rxState) @[UARTAdapter.scala 84:24:example.TestHarness.GemminiRocketConfig.fir@323861.4]
    reg value_3 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), value_3) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323862.4]
    node _T_27 = eq(value_3, UInt<10>("h363")) @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323864.6]
    node _T_28 = add(value_3, UInt<10>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323865.6]
    node _T_29 = tail(_T_28, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323866.6]
    node _GEN_18 = mux(_T_27, UInt<10>("h0"), _T_29) @[Counter.scala 40:21:example.TestHarness.GemminiRocketConfig.fir@323868.6]
    node _GEN_19 = mux(txfifo.io_enq_ready, _GEN_18, value_3) @[Counter.scala 71:17:example.TestHarness.GemminiRocketConfig.fir@323863.4]
    node rxBaudWrap = and(txfifo.io_enq_ready, _T_27) @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323872.4]
    node _T_30 = eq(rxState, UInt<2>("h2")) @[UARTAdapter.scala 88:49:example.TestHarness.GemminiRocketConfig.fir@323873.4]
    node _T_31 = and(_T_30, txfifo.io_enq_ready) @[UARTAdapter.scala 88:61:example.TestHarness.GemminiRocketConfig.fir@323874.4]
    node _T_32 = and(_T_31, rxBaudWrap) @[UARTAdapter.scala 88:84:example.TestHarness.GemminiRocketConfig.fir@323875.4]
    reg value_4 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), value_4) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323876.4]
    node _T_33 = eq(value_4, UInt<3>("h7")) @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323878.6]
    node _T_34 = add(value_4, UInt<3>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323879.6]
    node _T_35 = tail(_T_34, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323880.6]
    node _GEN_20 = mux(_T_32, _T_35, value_4) @[Counter.scala 71:17:example.TestHarness.GemminiRocketConfig.fir@323877.4]
    node rxDataWrap = and(_T_32, _T_33) @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323883.4]
    node _T_36 = eq(UInt<2>("h0"), rxState) @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323885.4]
    node _T_37 = and(rxBaudWrap, rxfifo.io_deq_valid) @[UARTAdapter.scala 94:24:example.TestHarness.GemminiRocketConfig.fir@323888.6]
    node _GEN_21 = mux(_T_37, UInt<2>("h1"), rxState) @[UARTAdapter.scala 94:48:example.TestHarness.GemminiRocketConfig.fir@323889.6]
    node _T_38 = eq(UInt<2>("h1"), rxState) @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323894.6]
    node _GEN_22 = mux(rxBaudWrap, UInt<2>("h2"), rxState) @[UARTAdapter.scala 100:24:example.TestHarness.GemminiRocketConfig.fir@323897.8]
    node _T_39 = eq(UInt<2>("h2"), rxState) @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323902.8]
    node _T_40 = dshr(rxfifo.io_deq_bits, value_4) @[UARTAdapter.scala 105:42:example.TestHarness.GemminiRocketConfig.fir@323904.10]
    node _T_41 = bits(_T_40, 0, 0) @[UARTAdapter.scala 105:55:example.TestHarness.GemminiRocketConfig.fir@323905.10]
    node _T_42 = and(rxDataWrap, rxBaudWrap) @[UARTAdapter.scala 106:23:example.TestHarness.GemminiRocketConfig.fir@323907.10]
    node _GEN_23 = mux(_T_42, UInt<2>("h0"), rxState) @[UARTAdapter.scala 106:38:example.TestHarness.GemminiRocketConfig.fir@323908.10]
    node _GEN_24 = mux(_T_39, _T_41, UInt<1>("h1")) @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323903.8]
    node _GEN_25 = mux(_T_39, _GEN_23, rxState) @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323903.8]
    node _GEN_26 = mux(_T_38, UInt<1>("h0"), _GEN_24) @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323895.6]
    node _GEN_27 = mux(_T_38, _GEN_22, _GEN_25) @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323895.6]
    skip
    node _GEN_29 = mux(_T_36, _GEN_21, _GEN_27) @[Conditional.scala 40:58:example.TestHarness.GemminiRocketConfig.fir@323886.4]
    skip
    node _T_44 = and(_T_30, rxDataWrap) @[UARTAdapter.scala 111:48:example.TestHarness.GemminiRocketConfig.fir@323913.4]
    node _T_45 = and(_T_44, rxBaudWrap) @[UARTAdapter.scala 111:62:example.TestHarness.GemminiRocketConfig.fir@323914.4]
    skip
    skip
    io_uart_rxd <= or(_T_36, _GEN_26) @[UARTAdapter.scala 90:15:example.TestHarness.GemminiRocketConfig.fir@323884.4 UARTAdapter.scala 93:19:example.TestHarness.GemminiRocketConfig.fir@323887.6 UARTAdapter.scala 99:19:example.TestHarness.GemminiRocketConfig.fir@323896.8 UARTAdapter.scala 105:19:example.TestHarness.GemminiRocketConfig.fir@323906.10]
    txfifo.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@323776.4]
    txfifo.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@323777.4]
    txfifo.io_enq_valid <= and(_T_1, _T_2) @[UARTAdapter.scala 81:23:example.TestHarness.GemminiRocketConfig.fir@323860.4]
    txfifo.io_enq_bits <= txData @[UARTAdapter.scala 80:23:example.TestHarness.GemminiRocketConfig.fir@323859.4]
    txfifo.io_deq_ready <= sim.serial_out_ready @[UARTAdapter.scala 120:23:example.TestHarness.GemminiRocketConfig.fir@323926.4]
    rxfifo.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@323779.4]
    rxfifo.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@323780.4]
    rxfifo.io_enq_valid <= sim.serial_in_valid @[UARTAdapter.scala 123:23:example.TestHarness.GemminiRocketConfig.fir@323928.4]
    rxfifo.io_enq_bits <= sim.serial_in_bits @[UARTAdapter.scala 122:22:example.TestHarness.GemminiRocketConfig.fir@323927.4]
    rxfifo.io_deq_ready <= and(_T_45, txfifo.io_enq_ready) @[UARTAdapter.scala 111:23:example.TestHarness.GemminiRocketConfig.fir@323916.4]
    txState <= mux(reset, UInt<2>("h0"), _GEN_17) @[UARTAdapter.scala 55:17:example.TestHarness.GemminiRocketConfig.fir@323822.8 UARTAdapter.scala 60:17:example.TestHarness.GemminiRocketConfig.fir@323829.10 UARTAdapter.scala 68:17:example.TestHarness.GemminiRocketConfig.fir@323843.12 UARTAdapter.scala 70:17:example.TestHarness.GemminiRocketConfig.fir@323847.14 UARTAdapter.scala 75:17:example.TestHarness.GemminiRocketConfig.fir@323856.14]
    txData <= mux(_T_17, _GEN_4, _GEN_15) @[UARTAdapter.scala 54:17:example.TestHarness.GemminiRocketConfig.fir@323821.8 UARTAdapter.scala 65:16:example.TestHarness.GemminiRocketConfig.fir@323838.12]
    value <= mux(reset, UInt<3>("h0"), _GEN_0) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@323790.6]
    value_1 <= mux(reset, UInt<10>("h0"), _GEN_2) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@323800.6 Counter.scala 40:29:example.TestHarness.GemminiRocketConfig.fir@323802.8]
    value_2 <= mux(reset, UInt<2>("h0"), _GEN_3) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@323815.6]
    rxState <= mux(reset, UInt<2>("h0"), _GEN_29) @[UARTAdapter.scala 95:17:example.TestHarness.GemminiRocketConfig.fir@323890.8 UARTAdapter.scala 101:17:example.TestHarness.GemminiRocketConfig.fir@323898.10 UARTAdapter.scala 107:17:example.TestHarness.GemminiRocketConfig.fir@323909.12]
    value_3 <= mux(reset, UInt<10>("h0"), _GEN_19) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@323867.6 Counter.scala 40:29:example.TestHarness.GemminiRocketConfig.fir@323869.8]
    value_4 <= mux(reset, UInt<3>("h0"), _GEN_20) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@323881.6]
    sim.clock <= clock @[UARTAdapter.scala 115:16:example.TestHarness.GemminiRocketConfig.fir@323921.4]
    sim.reset <= asUInt(reset) @[UARTAdapter.scala 116:16:example.TestHarness.GemminiRocketConfig.fir@323923.4]
    sim.serial_in_ready <= rxfifo.io_enq_ready @[UARTAdapter.scala 124:26:example.TestHarness.GemminiRocketConfig.fir@323929.4]
    sim.serial_out_valid <= txfifo.io_deq_valid @[UARTAdapter.scala 119:27:example.TestHarness.GemminiRocketConfig.fir@323925.4]
    sim.serial_out_bits <= txfifo.io_deq_bits @[UARTAdapter.scala 118:26:example.TestHarness.GemminiRocketConfig.fir@323924.4]

  module AXI4RAM_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@323931.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@323932.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323933.4]
    output auto_in_aw_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_aw_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_aw_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_aw_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_aw_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_w_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_w_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_w_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_w_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_b_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_b_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_b_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_b_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_b_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_ar_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_ar_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_ar_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_ar_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_ar_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    input auto_in_r_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_r_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_r_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_r_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_r_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
    output auto_in_r_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  
    inst mem of mem_inTestHarness @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
    skip
    node _T = shr(auto_in_ar_bits_addr, 3) @[SRAM.scala 54:49:example.TestHarness.GemminiRocketConfig.fir@323943.4]
    node _T_1 = bits(_T, 0, 0) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323944.4]
    node _T_2 = bits(_T, 1, 1) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323945.4]
    node _T_3 = bits(_T, 2, 2) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323946.4]
    node _T_4 = bits(_T, 3, 3) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323947.4]
    node _T_5 = bits(_T, 4, 4) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323948.4]
    node _T_6 = bits(_T, 5, 5) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323949.4]
    node _T_7 = bits(_T, 6, 6) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323950.4]
    node _T_8 = bits(_T, 7, 7) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323951.4]
    node _T_9 = bits(_T, 8, 8) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323952.4]
    node _T_10 = bits(_T, 9, 9) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323953.4]
    node _T_11 = bits(_T, 10, 10) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323954.4]
    node _T_12 = bits(_T, 11, 11) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323955.4]
    node _T_13 = bits(_T, 12, 12) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323956.4]
    node _T_14 = bits(_T, 13, 13) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323957.4]
    node _T_15 = bits(_T, 14, 14) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323958.4]
    node _T_16 = bits(_T, 15, 15) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323959.4]
    node _T_17 = bits(_T, 16, 16) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323960.4]
    node _T_18 = bits(_T, 17, 17) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323961.4]
    node _T_19 = bits(_T, 18, 18) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323962.4]
    node _T_20 = bits(_T, 19, 19) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323963.4]
    node _T_21 = bits(_T, 20, 20) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323964.4]
    node _T_22 = bits(_T, 21, 21) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323965.4]
    node _T_23 = bits(_T, 22, 22) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323966.4]
    node _T_24 = bits(_T, 23, 23) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323967.4]
    node _T_25 = bits(_T, 24, 24) @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323968.4]
    skip
    skip
    skip
    skip
    node _T_30 = cat(cat(cat(_T_6, _T_5), _T_4), cat(cat(_T_3, _T_2), _T_1)) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323973.4]
    skip
    skip
    skip
    skip
    skip
    node _T_36 = cat(cat(cat(cat(_T_12, _T_11), _T_10), cat(cat(_T_9, _T_8), _T_7)), _T_30) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323979.4]
    skip
    skip
    skip
    skip
    node _T_41 = cat(cat(cat(_T_18, _T_17), _T_16), cat(cat(_T_15, _T_14), _T_13)) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323984.4]
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_48 = cat(cat(cat(cat(_T_25, _T_24), cat(_T_23, _T_22)), cat(cat(_T_21, _T_20), _T_19)), _T_41) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323991.4]
    skip
    skip
    node _T_49 = shr(auto_in_aw_bits_addr, 3) @[SRAM.scala 55:49:example.TestHarness.GemminiRocketConfig.fir@323993.4]
    node _T_50 = bits(_T_49, 0, 0) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323994.4]
    node _T_51 = bits(_T_49, 1, 1) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323995.4]
    node _T_52 = bits(_T_49, 2, 2) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323996.4]
    node _T_53 = bits(_T_49, 3, 3) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323997.4]
    node _T_54 = bits(_T_49, 4, 4) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323998.4]
    node _T_55 = bits(_T_49, 5, 5) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323999.4]
    node _T_56 = bits(_T_49, 6, 6) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324000.4]
    node _T_57 = bits(_T_49, 7, 7) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324001.4]
    node _T_58 = bits(_T_49, 8, 8) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324002.4]
    node _T_59 = bits(_T_49, 9, 9) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324003.4]
    node _T_60 = bits(_T_49, 10, 10) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324004.4]
    node _T_61 = bits(_T_49, 11, 11) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324005.4]
    node _T_62 = bits(_T_49, 12, 12) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324006.4]
    node _T_63 = bits(_T_49, 13, 13) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324007.4]
    node _T_64 = bits(_T_49, 14, 14) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324008.4]
    node _T_65 = bits(_T_49, 15, 15) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324009.4]
    node _T_66 = bits(_T_49, 16, 16) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324010.4]
    node _T_67 = bits(_T_49, 17, 17) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324011.4]
    node _T_68 = bits(_T_49, 18, 18) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324012.4]
    node _T_69 = bits(_T_49, 19, 19) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324013.4]
    node _T_70 = bits(_T_49, 20, 20) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324014.4]
    node _T_71 = bits(_T_49, 21, 21) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324015.4]
    node _T_72 = bits(_T_49, 22, 22) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324016.4]
    node _T_73 = bits(_T_49, 23, 23) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324017.4]
    node _T_74 = bits(_T_49, 24, 24) @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324018.4]
    skip
    skip
    skip
    skip
    node _T_79 = cat(cat(cat(_T_55, _T_54), _T_53), cat(cat(_T_52, _T_51), _T_50)) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324023.4]
    skip
    skip
    skip
    skip
    skip
    node _T_85 = cat(cat(cat(cat(_T_61, _T_60), _T_59), cat(cat(_T_58, _T_57), _T_56)), _T_79) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324029.4]
    skip
    skip
    skip
    skip
    node _T_90 = cat(cat(cat(_T_67, _T_66), _T_65), cat(cat(_T_64, _T_63), _T_62)) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324034.4]
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_97 = cat(cat(cat(cat(_T_74, _T_73), cat(_T_72, _T_71)), cat(cat(_T_70, _T_69), _T_68)), _T_90) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324041.4]
    skip
    skip
    node _T_99 = cvt(auto_in_ar_bits_addr) @[Parameters.scala 125:49:example.TestHarness.GemminiRocketConfig.fir@324044.4]
    node _T_100 = and(_T_99, SInt<29>("h-10000000")) @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324045.4]
    node _T_101 = asSInt(_T_100) @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324046.4]
    node r_sel0 = eq(_T_101, SInt<29>("h0")) @[Parameters.scala 125:67:example.TestHarness.GemminiRocketConfig.fir@324047.4]
    skip
    node _T_103 = cvt(auto_in_aw_bits_addr) @[Parameters.scala 125:49:example.TestHarness.GemminiRocketConfig.fir@324049.4]
    node _T_104 = and(_T_103, SInt<29>("h-10000000")) @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324050.4]
    node _T_105 = asSInt(_T_104) @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324051.4]
    node w_sel0 = eq(_T_105, SInt<29>("h0")) @[Parameters.scala 125:67:example.TestHarness.GemminiRocketConfig.fir@324052.4]
    reg w_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), w_full) @[SRAM.scala 59:25:example.TestHarness.GemminiRocketConfig.fir@324053.4]
    reg w_id : UInt<4>, clock with :
      reset => (UInt<1>("h0"), w_id) @[SRAM.scala 60:21:example.TestHarness.GemminiRocketConfig.fir@324054.4]
    reg w_user : UInt<1>, clock with :
      reset => (UInt<1>("h0"), w_user) @[SRAM.scala 61:21:example.TestHarness.GemminiRocketConfig.fir@324055.4]
    reg r_sel1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), r_sel1) @[SRAM.scala 62:21:example.TestHarness.GemminiRocketConfig.fir@324056.4]
    reg w_sel1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), w_sel1) @[SRAM.scala 63:21:example.TestHarness.GemminiRocketConfig.fir@324057.4]
    skip
    skip
    node _T_106 = and(auto_in_b_ready, w_full) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324058.4]
    node _GEN_0 = mux(_T_106, UInt<1>("h0"), w_full) @[SRAM.scala 65:25:example.TestHarness.GemminiRocketConfig.fir@324059.4]
    skip
    node _T_128 = eq(w_full, UInt<1>("h0")) @[SRAM.scala 81:50:example.TestHarness.GemminiRocketConfig.fir@324128.4]
    node _T_129 = or(auto_in_b_ready, _T_128) @[SRAM.scala 81:47:example.TestHarness.GemminiRocketConfig.fir@324129.4]
    node in_aw_ready = and(auto_in_w_valid, _T_129) @[SRAM.scala 81:32:example.TestHarness.GemminiRocketConfig.fir@324130.4]
    skip
    skip
    node _T_107 = and(in_aw_ready, auto_in_aw_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324062.4]
    node _GEN_1 = or(_T_107, _GEN_0) @[SRAM.scala 66:25:example.TestHarness.GemminiRocketConfig.fir@324063.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    reg r_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), r_full) @[SRAM.scala 88:25:example.TestHarness.GemminiRocketConfig.fir@324140.4]
    reg r_id : UInt<4>, clock with :
      reset => (UInt<1>("h0"), r_id) @[SRAM.scala 89:21:example.TestHarness.GemminiRocketConfig.fir@324141.4]
    reg r_user : UInt<1>, clock with :
      reset => (UInt<1>("h0"), r_user) @[SRAM.scala 90:21:example.TestHarness.GemminiRocketConfig.fir@324142.4]
    skip
    skip
    node _T_135 = and(auto_in_r_ready, r_full) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324143.4]
    node _GEN_40 = mux(_T_135, UInt<1>("h0"), r_full) @[SRAM.scala 92:25:example.TestHarness.GemminiRocketConfig.fir@324144.4]
    node _T_144 = eq(r_full, UInt<1>("h0")) @[SRAM.scala 106:34:example.TestHarness.GemminiRocketConfig.fir@324182.4]
    node in_ar_ready = or(auto_in_r_ready, _T_144) @[SRAM.scala 106:31:example.TestHarness.GemminiRocketConfig.fir@324183.4]
    skip
    skip
    node _T_136 = and(in_ar_ready, auto_in_ar_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324147.4]
    node _GEN_41 = or(_T_136, _GEN_40) @[SRAM.scala 93:25:example.TestHarness.GemminiRocketConfig.fir@324148.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    reg _T_142 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_142) @[package.scala 75:91:example.TestHarness.GemminiRocketConfig.fir@324167.4]
    reg _T_143_0 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_143_0) @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
    reg _T_143_1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_143_1) @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
    reg _T_143_2 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_143_2) @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
    reg _T_143_3 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_143_3) @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
    reg _T_143_4 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_143_4) @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
    reg _T_143_5 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_143_5) @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
    reg _T_143_6 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_143_6) @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
    reg _T_143_7 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_143_7) @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
    node _GEN_49 = mux(_T_142, mem.R0_data_0, _T_143_0) @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
    node _GEN_50 = mux(_T_142, mem.R0_data_1, _T_143_1) @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
    node _GEN_51 = mux(_T_142, mem.R0_data_2, _T_143_2) @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
    node _GEN_52 = mux(_T_142, mem.R0_data_3, _T_143_3) @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
    node _GEN_53 = mux(_T_142, mem.R0_data_4, _T_143_4) @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
    node _GEN_54 = mux(_T_142, mem.R0_data_5, _T_143_5) @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
    node _GEN_55 = mux(_T_142, mem.R0_data_6, _T_143_6) @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
    node _GEN_56 = mux(_T_142, mem.R0_data_7, _T_143_7) @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_150 = cat(cat(_GEN_52, _GEN_51), cat(_GEN_50, _GEN_49)) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324191.4]
    skip
    skip
    node _T_153 = cat(cat(_GEN_56, _GEN_55), cat(_GEN_54, _GEN_53)) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324194.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    auto_in_aw_ready <= and(auto_in_w_valid, _T_129) @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_w_ready <= and(auto_in_aw_valid, _T_129) @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_b_valid <= w_full @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_b_bits_id <= w_id @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_b_bits_resp <= mux(w_sel1, UInt<2>("h0"), UInt<2>("h3")) @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_b_bits_user <= w_user @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_ar_ready <= or(auto_in_r_ready, _T_144) @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_r_valid <= r_full @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_r_bits_id <= r_id @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_r_bits_data <= cat(_T_153, _T_150) @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_r_bits_resp <= mux(r_sel1, UInt<2>("h0"), UInt<2>("h3")) @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    auto_in_r_bits_user <= r_user @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
    skip
    mem.R0_addr <= cat(_T_48, _T_36) @[package.scala 75:58:example.TestHarness.GemminiRocketConfig.fir@324165.6]
    mem.R0_en <= and(in_ar_ready, auto_in_ar_valid) @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4 package.scala 75:58:example.TestHarness.GemminiRocketConfig.fir@324164.6]
    mem.R0_clk <= clock @[package.scala 75:58:example.TestHarness.GemminiRocketConfig.fir@324165.6]
    mem.W0_addr <= cat(_T_97, _T_85) @[:example.TestHarness.GemminiRocketConfig.fir@324101.6]
    mem.W0_en <= and(_T_107, w_sel0) @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4 :example.TestHarness.GemminiRocketConfig.fir@324101.6]
    mem.W0_clk <= clock @[:example.TestHarness.GemminiRocketConfig.fir@324101.6]
    mem.W0_data_0 <= bits(auto_in_w_bits_data, 7, 0) @[:example.TestHarness.GemminiRocketConfig.fir@324103.8]
    mem.W0_data_1 <= bits(auto_in_w_bits_data, 15, 8) @[:example.TestHarness.GemminiRocketConfig.fir@324106.8]
    mem.W0_data_2 <= bits(auto_in_w_bits_data, 23, 16) @[:example.TestHarness.GemminiRocketConfig.fir@324109.8]
    mem.W0_data_3 <= bits(auto_in_w_bits_data, 31, 24) @[:example.TestHarness.GemminiRocketConfig.fir@324112.8]
    mem.W0_data_4 <= bits(auto_in_w_bits_data, 39, 32) @[:example.TestHarness.GemminiRocketConfig.fir@324115.8]
    mem.W0_data_5 <= bits(auto_in_w_bits_data, 47, 40) @[:example.TestHarness.GemminiRocketConfig.fir@324118.8]
    mem.W0_data_6 <= bits(auto_in_w_bits_data, 55, 48) @[:example.TestHarness.GemminiRocketConfig.fir@324121.8]
    mem.W0_data_7 <= bits(auto_in_w_bits_data, 63, 56) @[:example.TestHarness.GemminiRocketConfig.fir@324124.8]
    mem.W0_mask_0 <= bits(auto_in_w_bits_strb, 0, 0) @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324103.8]
    mem.W0_mask_1 <= bits(auto_in_w_bits_strb, 1, 1) @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324106.8]
    mem.W0_mask_2 <= bits(auto_in_w_bits_strb, 2, 2) @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324109.8]
    mem.W0_mask_3 <= bits(auto_in_w_bits_strb, 3, 3) @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324112.8]
    mem.W0_mask_4 <= bits(auto_in_w_bits_strb, 4, 4) @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324115.8]
    mem.W0_mask_5 <= bits(auto_in_w_bits_strb, 5, 5) @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324118.8]
    mem.W0_mask_6 <= bits(auto_in_w_bits_strb, 6, 6) @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324121.8]
    mem.W0_mask_7 <= bits(auto_in_w_bits_strb, 7, 7) @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324124.8]
    w_full <= mux(reset, UInt<1>("h0"), _GEN_1) @[SRAM.scala 65:34:example.TestHarness.GemminiRocketConfig.fir@324060.6 SRAM.scala 66:34:example.TestHarness.GemminiRocketConfig.fir@324064.6]
    w_id <= mux(_T_107, auto_in_aw_bits_id, w_id) @[SRAM.scala 69:12:example.TestHarness.GemminiRocketConfig.fir@324068.6]
    w_user <= mux(_T_107, auto_in_aw_bits_user, w_user) @[SRAM.scala 71:40:example.TestHarness.GemminiRocketConfig.fir@324070.6]
    r_sel1 <= mux(_T_136, r_sel0, r_sel1) @[SRAM.scala 97:14:example.TestHarness.GemminiRocketConfig.fir@324154.6]
    w_sel1 <= mux(_T_107, w_sel0, w_sel1) @[SRAM.scala 70:14:example.TestHarness.GemminiRocketConfig.fir@324069.6]
    r_full <= mux(reset, UInt<1>("h0"), _GEN_41) @[SRAM.scala 92:34:example.TestHarness.GemminiRocketConfig.fir@324145.6 SRAM.scala 93:34:example.TestHarness.GemminiRocketConfig.fir@324149.6]
    r_id <= mux(_T_136, auto_in_ar_bits_id, r_id) @[SRAM.scala 96:12:example.TestHarness.GemminiRocketConfig.fir@324153.6]
    r_user <= mux(_T_136, auto_in_ar_bits_user, r_user) @[SRAM.scala 98:40:example.TestHarness.GemminiRocketConfig.fir@324155.6]
    _T_142 <= and(in_ar_ready, auto_in_ar_valid) @[package.scala 75:91:example.TestHarness.GemminiRocketConfig.fir@324168.4]
    _T_143_0 <= mux(_T_142, mem.R0_data_0, _T_143_0) @[Reg.scala 16:23:example.TestHarness.GemminiRocketConfig.fir@324171.6]
    _T_143_1 <= mux(_T_142, mem.R0_data_1, _T_143_1) @[Reg.scala 16:23:example.TestHarness.GemminiRocketConfig.fir@324172.6]
    _T_143_2 <= mux(_T_142, mem.R0_data_2, _T_143_2) @[Reg.scala 16:23:example.TestHarness.GemminiRocketConfig.fir@324173.6]
    _T_143_3 <= mux(_T_142, mem.R0_data_3, _T_143_3) @[Reg.scala 16:23:example.TestHarness.GemminiRocketConfig.fir@324174.6]
    _T_143_4 <= mux(_T_142, mem.R0_data_4, _T_143_4) @[Reg.scala 16:23:example.TestHarness.GemminiRocketConfig.fir@324175.6]
    _T_143_5 <= mux(_T_142, mem.R0_data_5, _T_143_5) @[Reg.scala 16:23:example.TestHarness.GemminiRocketConfig.fir@324176.6]
    _T_143_6 <= mux(_T_142, mem.R0_data_6, _T_143_6) @[Reg.scala 16:23:example.TestHarness.GemminiRocketConfig.fir@324177.6]
    _T_143_7 <= mux(_T_142, mem.R0_data_7, _T_143_7) @[Reg.scala 16:23:example.TestHarness.GemminiRocketConfig.fir@324178.6]

  module AXI4Xbar_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@324330.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@324331.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324332.4]
    output auto_in_aw_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_aw_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_aw_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_aw_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_aw_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_aw_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_aw_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_w_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_w_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_w_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_w_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_w_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_b_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_b_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_b_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_b_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_ar_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_ar_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_ar_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_ar_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_ar_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_ar_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_ar_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_in_r_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_r_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_r_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_r_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_r_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_in_r_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_aw_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_aw_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_aw_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_aw_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_aw_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_aw_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_aw_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_w_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_w_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_w_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_w_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_w_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_b_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_b_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_b_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_b_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_ar_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_ar_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_ar_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_ar_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_ar_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_ar_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_ar_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    output auto_out_r_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_r_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_r_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_r_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_r_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
    input auto_out_r_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_44 = eq(auto_in_aw_valid, UInt<1>("h0")) @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324439.4]
    skip
    skip
    skip
    skip
    skip
    node _T_50 = or(_T_44, auto_in_aw_valid) @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324449.4]
    skip
    node _T_52 = or(_T_50, reset) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324451.4]
    node _T_53 = eq(_T_52, UInt<1>("h0")) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324452.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_65 = eq(auto_in_ar_valid, UInt<1>("h0")) @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324485.4]
    skip
    skip
    skip
    skip
    skip
    node _T_71 = or(_T_65, auto_in_ar_valid) @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324495.4]
    skip
    node _T_73 = or(_T_71, reset) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324497.4]
    node _T_74 = eq(_T_73, UInt<1>("h0")) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324498.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_88 = eq(auto_out_r_valid, UInt<1>("h0")) @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324535.4]
    skip
    skip
    skip
    skip
    skip
    node _T_94 = or(_T_88, auto_out_r_valid) @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324545.4]
    skip
    node _T_96 = or(_T_94, reset) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324547.4]
    node _T_97 = eq(_T_96, UInt<1>("h0")) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324548.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_109 = eq(auto_out_b_valid, UInt<1>("h0")) @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324580.4]
    skip
    skip
    skip
    skip
    skip
    node _T_115 = or(_T_109, auto_out_b_valid) @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324590.4]
    skip
    node _T_117 = or(_T_115, reset) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324592.4]
    node _T_118 = eq(_T_117, UInt<1>("h0")) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324593.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    auto_in_aw_ready <= auto_out_aw_ready @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_w_ready <= auto_out_w_ready @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_b_valid <= auto_out_b_valid @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_b_bits_id <= auto_out_b_bits_id @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_b_bits_resp <= auto_out_b_bits_resp @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_ar_ready <= auto_out_ar_ready @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_r_valid <= auto_out_r_valid @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_r_bits_id <= auto_out_r_bits_id @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_r_bits_data <= auto_out_r_bits_data @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_r_bits_resp <= auto_out_r_bits_resp @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_in_r_bits_last <= auto_out_r_bits_last @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
    auto_out_aw_valid <= auto_in_aw_valid @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_aw_bits_id <= auto_in_aw_bits_id @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_aw_bits_addr <= auto_in_aw_bits_addr @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_aw_bits_len <= auto_in_aw_bits_len @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_aw_bits_size <= auto_in_aw_bits_size @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_aw_bits_burst <= auto_in_aw_bits_burst @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    skip
    skip
    skip
    skip
    auto_out_w_valid <= auto_in_w_valid @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_w_bits_data <= auto_in_w_bits_data @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_w_bits_strb <= auto_in_w_bits_strb @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_w_bits_last <= auto_in_w_bits_last @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_b_ready <= auto_in_b_ready @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_ar_valid <= auto_in_ar_valid @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_ar_bits_id <= auto_in_ar_bits_id @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_ar_bits_addr <= auto_in_ar_bits_addr @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_ar_bits_len <= auto_in_ar_bits_len @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_ar_bits_size <= auto_in_ar_bits_size @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    auto_out_ar_bits_burst <= auto_in_ar_bits_burst @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    skip
    skip
    skip
    skip
    auto_out_r_ready <= auto_in_r_ready @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    printf(clock, _T_53, "Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n") @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324454.6]
    stop(clock, _T_53, 1) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324455.6]
    skip
    skip
    printf(clock, _T_74, "Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n") @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324500.6]
    stop(clock, _T_74, 1) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324501.6]
    skip
    skip
    printf(clock, _T_97, "Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n") @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324550.6]
    stop(clock, _T_97, 1) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324551.6]
    skip
    skip
    printf(clock, _T_118, "Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n") @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324595.6]
    stop(clock, _T_118, 1) @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324596.6]

  module Queue_54_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@324616.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@324617.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324618.4]
    output io_enq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
    input io_enq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
    input io_enq_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
    input io_enq_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
    input io_enq_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
    input io_deq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
    output io_deq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
    output io_deq_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
    output io_deq_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
    output io_deq_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  
    mem _T_id : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    mem _T_addr : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
      data-type => UInt<28>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    mem _T_user : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    reg value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324622.4]
    reg value_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324623.4]
    reg _T_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_1) @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@324624.4]
    node _T_2 = eq(value, value_1) @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324625.4]
    node _T_3 = eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324626.4]
    node _T_4 = and(_T_2, _T_3) @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324627.4]
    node _T_5 = and(_T_2, _T_1) @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324628.4]
    node _T_6 = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324629.4]
    node _T_8 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324632.4]
    skip
    node _T_11 = add(value, UInt<1>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324648.6]
    node _T_12 = tail(_T_11, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324649.6]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_14 = mux(_T_6, _T_12, value) @[Decoupled.scala 220:17:example.TestHarness.GemminiRocketConfig.fir@324635.4]
    skip
    node _T_13 = add(value_1, UInt<1>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324654.6]
    node _T_14 = tail(_T_13, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324655.6]
    skip
    node _GEN_15 = mux(_T_8, _T_14, value_1) @[Decoupled.scala 224:17:example.TestHarness.GemminiRocketConfig.fir@324652.4]
    node _T_15 = neq(_T_6, _T_8) @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324658.4]
    node _GEN_16 = mux(_T_15, _T_6, _T_1) @[Decoupled.scala 227:28:example.TestHarness.GemminiRocketConfig.fir@324659.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= eq(_T_5, UInt<1>("h0")) @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@324665.4]
    io_deq_valid <= eq(_T_4, UInt<1>("h0")) @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@324663.4]
    io_deq_bits_id <= _T_id._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324676.4]
    io_deq_bits_addr <= _T_addr._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324675.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_deq_bits_user <= _T_user._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324667.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    value <= mux(reset, UInt<1>("h0"), _GEN_14) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@324650.6]
    value_1 <= mux(reset, UInt<1>("h0"), _GEN_15) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@324656.6]
    _T_1 <= mux(reset, UInt<1>("h0"), _GEN_16) @[Decoupled.scala 228:16:example.TestHarness.GemminiRocketConfig.fir@324660.6]
    skip
    skip
    _T_id._T_18.clk <= clock
    _T_id._T_18.en <= UInt<1>("h1")
    _T_id._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_id._T_10.clk <= clock
    _T_id._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_id._T_10.mask <= UInt<1>("h1")
    _T_id._T_10.addr <= value
    _T_id._T_10.data <= io_enq_bits_id
    skip
    skip
    _T_addr._T_18.clk <= clock
    _T_addr._T_18.en <= UInt<1>("h1")
    _T_addr._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_addr._T_10.clk <= clock
    _T_addr._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_addr._T_10.mask <= UInt<1>("h1")
    _T_addr._T_10.addr <= value
    _T_addr._T_10.data <= io_enq_bits_addr
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    _T_user._T_18.clk <= clock
    _T_user._T_18.en <= UInt<1>("h1")
    _T_user._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_user._T_10.clk <= clock
    _T_user._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_user._T_10.mask <= UInt<1>("h1")
    _T_user._T_10.addr <= value
    _T_user._T_10.data <= io_enq_bits_user

  module Queue_55_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@324684.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@324685.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324686.4]
    output io_enq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
    input io_enq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
    input io_enq_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
    input io_enq_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
    input io_deq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
    output io_deq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
    output io_deq_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
    output io_deq_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
  
    mem _T_data : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
      data-type => UInt<64>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    mem _T_strb : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    skip
    reg value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324690.4]
    reg value_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324691.4]
    reg _T_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_1) @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@324692.4]
    node _T_2 = eq(value, value_1) @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324693.4]
    node _T_3 = eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324694.4]
    node _T_4 = and(_T_2, _T_3) @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324695.4]
    node _T_5 = and(_T_2, _T_1) @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324696.4]
    node _T_6 = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324697.4]
    node _T_8 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324700.4]
    skip
    node _T_11 = add(value, UInt<1>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324709.6]
    node _T_12 = tail(_T_11, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324710.6]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_7 = mux(_T_6, _T_12, value) @[Decoupled.scala 220:17:example.TestHarness.GemminiRocketConfig.fir@324703.4]
    skip
    node _T_13 = add(value_1, UInt<1>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324715.6]
    node _T_14 = tail(_T_13, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324716.6]
    skip
    node _GEN_8 = mux(_T_8, _T_14, value_1) @[Decoupled.scala 224:17:example.TestHarness.GemminiRocketConfig.fir@324713.4]
    node _T_15 = neq(_T_6, _T_8) @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324719.4]
    node _GEN_9 = mux(_T_15, _T_6, _T_1) @[Decoupled.scala 227:28:example.TestHarness.GemminiRocketConfig.fir@324720.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= eq(_T_5, UInt<1>("h0")) @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@324726.4]
    io_deq_valid <= eq(_T_4, UInt<1>("h0")) @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@324724.4]
    io_deq_bits_data <= _T_data._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324730.4]
    io_deq_bits_strb <= _T_strb._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324729.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    value <= mux(reset, UInt<1>("h0"), _GEN_7) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@324711.6]
    value_1 <= mux(reset, UInt<1>("h0"), _GEN_8) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@324717.6]
    _T_1 <= mux(reset, UInt<1>("h0"), _GEN_9) @[Decoupled.scala 228:16:example.TestHarness.GemminiRocketConfig.fir@324721.6]
    skip
    skip
    _T_data._T_18.clk <= clock
    _T_data._T_18.en <= UInt<1>("h1")
    _T_data._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_data._T_10.clk <= clock
    _T_data._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_data._T_10.mask <= UInt<1>("h1")
    _T_data._T_10.addr <= value
    _T_data._T_10.data <= io_enq_bits_data
    skip
    skip
    _T_strb._T_18.clk <= clock
    _T_strb._T_18.en <= UInt<1>("h1")
    _T_strb._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_strb._T_10.clk <= clock
    _T_strb._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_strb._T_10.mask <= UInt<1>("h1")
    _T_strb._T_10.addr <= value
    _T_strb._T_10.data <= io_enq_bits_strb
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip

  module Queue_56_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@324738.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@324739.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324740.4]
    output io_enq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
    input io_enq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
    input io_enq_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
    input io_enq_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
    input io_enq_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
    input io_deq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
    output io_deq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
    output io_deq_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
    output io_deq_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
    output io_deq_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  
    mem _T_id : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    mem _T_resp : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
      data-type => UInt<2>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    mem _T_user : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    reg value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324744.4]
    reg value_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324745.4]
    reg _T_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_1) @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@324746.4]
    node _T_2 = eq(value, value_1) @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324747.4]
    node _T_3 = eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324748.4]
    node _T_4 = and(_T_2, _T_3) @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324749.4]
    node _T_5 = and(_T_2, _T_1) @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324750.4]
    node _T_6 = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324751.4]
    node _T_8 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324754.4]
    skip
    node _T_11 = add(value, UInt<1>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324763.6]
    node _T_12 = tail(_T_11, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324764.6]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_7 = mux(_T_6, _T_12, value) @[Decoupled.scala 220:17:example.TestHarness.GemminiRocketConfig.fir@324757.4]
    skip
    node _T_13 = add(value_1, UInt<1>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324769.6]
    node _T_14 = tail(_T_13, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324770.6]
    skip
    node _GEN_8 = mux(_T_8, _T_14, value_1) @[Decoupled.scala 224:17:example.TestHarness.GemminiRocketConfig.fir@324767.4]
    node _T_15 = neq(_T_6, _T_8) @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324773.4]
    node _GEN_9 = mux(_T_15, _T_6, _T_1) @[Decoupled.scala 227:28:example.TestHarness.GemminiRocketConfig.fir@324774.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= eq(_T_5, UInt<1>("h0")) @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@324780.4]
    io_deq_valid <= eq(_T_4, UInt<1>("h0")) @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@324778.4]
    io_deq_bits_id <= _T_id._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324784.4]
    io_deq_bits_resp <= _T_resp._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324783.4]
    io_deq_bits_user <= _T_user._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324782.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    value <= mux(reset, UInt<1>("h0"), _GEN_7) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@324765.6]
    value_1 <= mux(reset, UInt<1>("h0"), _GEN_8) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@324771.6]
    _T_1 <= mux(reset, UInt<1>("h0"), _GEN_9) @[Decoupled.scala 228:16:example.TestHarness.GemminiRocketConfig.fir@324775.6]
    skip
    skip
    _T_id._T_18.clk <= clock
    _T_id._T_18.en <= UInt<1>("h1")
    _T_id._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_id._T_10.clk <= clock
    _T_id._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_id._T_10.mask <= UInt<1>("h1")
    _T_id._T_10.addr <= value
    _T_id._T_10.data <= io_enq_bits_id
    skip
    skip
    _T_resp._T_18.clk <= clock
    _T_resp._T_18.en <= UInt<1>("h1")
    _T_resp._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_resp._T_10.clk <= clock
    _T_resp._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_resp._T_10.mask <= UInt<1>("h1")
    _T_resp._T_10.addr <= value
    _T_resp._T_10.data <= io_enq_bits_resp
    skip
    skip
    _T_user._T_18.clk <= clock
    _T_user._T_18.en <= UInt<1>("h1")
    _T_user._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_user._T_10.clk <= clock
    _T_user._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_user._T_10.mask <= UInt<1>("h1")
    _T_user._T_10.addr <= value
    _T_user._T_10.data <= io_enq_bits_user

  module Queue_58_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@324860.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@324861.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324862.4]
    output io_enq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    input io_enq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    input io_enq_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    input io_enq_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    input io_enq_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    input io_enq_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    input io_deq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    output io_deq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    output io_deq_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    output io_deq_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    output io_deq_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    output io_deq_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
    output io_deq_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  
    mem _T_id : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    mem _T_data : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
      data-type => UInt<64>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    mem _T_resp : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
      data-type => UInt<2>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    mem _T_user : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    mem _T_last : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    reg value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324866.4]
    reg value_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324867.4]
    reg _T_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_1) @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@324868.4]
    node _T_2 = eq(value, value_1) @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324869.4]
    node _T_3 = eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324870.4]
    node _T_4 = and(_T_2, _T_3) @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324871.4]
    node _T_5 = and(_T_2, _T_1) @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324872.4]
    node _T_6 = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324873.4]
    node _T_8 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324876.4]
    skip
    node _T_11 = add(value, UInt<1>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324887.6]
    node _T_12 = tail(_T_11, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324888.6]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_9 = mux(_T_6, _T_12, value) @[Decoupled.scala 220:17:example.TestHarness.GemminiRocketConfig.fir@324879.4]
    skip
    node _T_13 = add(value_1, UInt<1>("h1")) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324893.6]
    node _T_14 = tail(_T_13, 1) @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324894.6]
    skip
    node _GEN_10 = mux(_T_8, _T_14, value_1) @[Decoupled.scala 224:17:example.TestHarness.GemminiRocketConfig.fir@324891.4]
    node _T_15 = neq(_T_6, _T_8) @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324897.4]
    node _GEN_11 = mux(_T_15, _T_6, _T_1) @[Decoupled.scala 227:28:example.TestHarness.GemminiRocketConfig.fir@324898.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= eq(_T_5, UInt<1>("h0")) @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@324904.4]
    io_deq_valid <= eq(_T_4, UInt<1>("h0")) @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@324902.4]
    io_deq_bits_id <= _T_id._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324910.4]
    io_deq_bits_data <= _T_data._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324909.4]
    io_deq_bits_resp <= _T_resp._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324908.4]
    io_deq_bits_user <= _T_user._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324907.4]
    io_deq_bits_last <= _T_last._T_18.data @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324906.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    value <= mux(reset, UInt<1>("h0"), _GEN_9) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@324889.6]
    value_1 <= mux(reset, UInt<1>("h0"), _GEN_10) @[Counter.scala 38:13:example.TestHarness.GemminiRocketConfig.fir@324895.6]
    _T_1 <= mux(reset, UInt<1>("h0"), _GEN_11) @[Decoupled.scala 228:16:example.TestHarness.GemminiRocketConfig.fir@324899.6]
    skip
    skip
    _T_id._T_18.clk <= clock
    _T_id._T_18.en <= UInt<1>("h1")
    _T_id._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_id._T_10.clk <= clock
    _T_id._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_id._T_10.mask <= UInt<1>("h1")
    _T_id._T_10.addr <= value
    _T_id._T_10.data <= io_enq_bits_id
    skip
    skip
    _T_data._T_18.clk <= clock
    _T_data._T_18.en <= UInt<1>("h1")
    _T_data._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_data._T_10.clk <= clock
    _T_data._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_data._T_10.mask <= UInt<1>("h1")
    _T_data._T_10.addr <= value
    _T_data._T_10.data <= io_enq_bits_data
    skip
    skip
    _T_resp._T_18.clk <= clock
    _T_resp._T_18.en <= UInt<1>("h1")
    _T_resp._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_resp._T_10.clk <= clock
    _T_resp._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_resp._T_10.mask <= UInt<1>("h1")
    _T_resp._T_10.addr <= value
    _T_resp._T_10.data <= io_enq_bits_resp
    skip
    skip
    _T_user._T_18.clk <= clock
    _T_user._T_18.en <= UInt<1>("h1")
    _T_user._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_user._T_10.clk <= clock
    _T_user._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_user._T_10.mask <= UInt<1>("h1")
    _T_user._T_10.addr <= value
    _T_user._T_10.data <= io_enq_bits_user
    skip
    skip
    _T_last._T_18.clk <= clock
    _T_last._T_18.en <= UInt<1>("h1")
    _T_last._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T_last._T_10.clk <= clock
    _T_last._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T_last._T_10.mask <= UInt<1>("h1")
    _T_last._T_10.addr <= value
    _T_last._T_10.data <= UInt<1>("h1")

  module AXI4Buffer_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@324918.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@324919.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324920.4]
    output auto_in_aw_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_aw_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_aw_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_aw_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_aw_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_w_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_w_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_w_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_w_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_b_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_b_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_b_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_b_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_b_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_ar_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_ar_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_ar_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_ar_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_ar_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_in_r_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_r_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_r_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_r_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_r_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_r_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_in_r_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_aw_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_aw_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_aw_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_aw_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_aw_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_w_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_w_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_w_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_w_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_b_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_b_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_b_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_b_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_b_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_ar_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_ar_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_ar_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_ar_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_ar_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    output auto_out_r_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_r_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_r_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_r_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_r_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
    input auto_out_r_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  
    inst Queue of Queue_54_inTestHarness @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
    inst Queue_1 of Queue_55_inTestHarness @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
    inst Queue_2 of Queue_56_inTestHarness @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
    inst Queue_3 of Queue_54_inTestHarness @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
    inst Queue_4 of Queue_58_inTestHarness @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    auto_in_aw_ready <= Queue.io_enq_ready @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_w_ready <= Queue_1.io_enq_ready @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_b_valid <= Queue_2.io_deq_valid @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_b_bits_id <= Queue_2.io_deq_bits_id @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_b_bits_resp <= Queue_2.io_deq_bits_resp @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_b_bits_user <= Queue_2.io_deq_bits_user @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_ar_ready <= Queue_3.io_enq_ready @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_r_valid <= Queue_4.io_deq_valid @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_r_bits_id <= Queue_4.io_deq_bits_id @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_r_bits_data <= Queue_4.io_deq_bits_data @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_r_bits_resp <= Queue_4.io_deq_bits_resp @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_r_bits_user <= Queue_4.io_deq_bits_user @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_in_r_bits_last <= Queue_4.io_deq_bits_last @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
    auto_out_aw_valid <= Queue.io_deq_valid @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    auto_out_aw_bits_id <= Queue.io_deq_bits_id @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    auto_out_aw_bits_addr <= Queue.io_deq_bits_addr @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    auto_out_aw_bits_user <= Queue.io_deq_bits_user @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    auto_out_w_valid <= Queue_1.io_deq_valid @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    auto_out_w_bits_data <= Queue_1.io_deq_bits_data @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    auto_out_w_bits_strb <= Queue_1.io_deq_bits_strb @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    skip
    auto_out_b_ready <= Queue_2.io_enq_ready @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    auto_out_ar_valid <= Queue_3.io_deq_valid @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    auto_out_ar_bits_id <= Queue_3.io_deq_bits_id @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    auto_out_ar_bits_addr <= Queue_3.io_deq_bits_addr @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    auto_out_ar_bits_user <= Queue_3.io_deq_bits_user @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    auto_out_r_ready <= Queue_4.io_enq_ready @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
    Queue.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@324933.4]
    Queue.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@324934.4]
    Queue.io_enq_valid <= auto_in_aw_valid @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@324935.4]
    Queue.io_enq_bits_id <= auto_in_aw_bits_id @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324945.4]
    Queue.io_enq_bits_addr <= auto_in_aw_bits_addr @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324944.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    Queue.io_enq_bits_user <= auto_in_aw_bits_user @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324936.4]
    Queue.io_deq_ready <= auto_out_aw_ready @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@324959.4]
    Queue_1.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@324962.4]
    Queue_1.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@324963.4]
    Queue_1.io_enq_valid <= auto_in_w_valid @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@324964.4]
    Queue_1.io_enq_bits_data <= auto_in_w_bits_data @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324967.4]
    Queue_1.io_enq_bits_strb <= auto_in_w_bits_strb @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324966.4]
    skip
    Queue_1.io_deq_ready <= auto_out_w_ready @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@324974.4]
    Queue_2.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@324977.4]
    Queue_2.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@324978.4]
    Queue_2.io_enq_valid <= auto_out_b_valid @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@324979.4]
    Queue_2.io_enq_bits_id <= auto_out_b_bits_id @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324982.4]
    Queue_2.io_enq_bits_resp <= auto_out_b_bits_resp @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324981.4]
    Queue_2.io_enq_bits_user <= auto_out_b_bits_user @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324980.4]
    Queue_2.io_deq_ready <= auto_in_b_ready @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@324989.4]
    Queue_3.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@324992.4]
    Queue_3.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@324993.4]
    Queue_3.io_enq_valid <= auto_in_ar_valid @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@324994.4]
    Queue_3.io_enq_bits_id <= auto_in_ar_bits_id @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325004.4]
    Queue_3.io_enq_bits_addr <= auto_in_ar_bits_addr @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325003.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    Queue_3.io_enq_bits_user <= auto_in_ar_bits_user @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324995.4]
    Queue_3.io_deq_ready <= auto_out_ar_ready @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325018.4]
    Queue_4.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325021.4]
    Queue_4.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325022.4]
    Queue_4.io_enq_valid <= auto_out_r_valid @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@325023.4]
    Queue_4.io_enq_bits_id <= auto_out_r_bits_id @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325028.4]
    Queue_4.io_enq_bits_data <= auto_out_r_bits_data @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325027.4]
    Queue_4.io_enq_bits_resp <= auto_out_r_bits_resp @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325026.4]
    Queue_4.io_enq_bits_user <= auto_out_r_bits_user @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325025.4]
    skip
    Queue_4.io_deq_ready <= auto_in_r_ready @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325037.4]

  module Queue_59_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@325040.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@325041.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325042.4]
    output io_enq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    input io_enq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    input io_enq_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    input io_enq_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    input io_enq_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    input io_enq_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    input io_enq_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    input io_deq_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    output io_deq_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    output io_deq_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    output io_deq_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    output io_deq_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    output io_deq_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
    output io_deq_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  
    mem _T_id : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
      data-type => UInt<4>
      depth => 1
      read-latency => 0
      write-latency => 1
      reader => _T_14
      writer => _T_10
      read-under-write => undefined
    mem _T_addr : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
      data-type => UInt<28>
      depth => 1
      read-latency => 0
      write-latency => 1
      reader => _T_14
      writer => _T_10
      read-under-write => undefined
    mem _T_len : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
      data-type => UInt<8>
      depth => 1
      read-latency => 0
      write-latency => 1
      reader => _T_14
      writer => _T_10
      read-under-write => undefined
    mem _T_size : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
      data-type => UInt<3>
      depth => 1
      read-latency => 0
      write-latency => 1
      reader => _T_14
      writer => _T_10
      read-under-write => undefined
    mem _T_burst : @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
      data-type => UInt<2>
      depth => 1
      read-latency => 0
      write-latency => 1
      reader => _T_14
      writer => _T_10
      read-under-write => undefined
    skip
    skip
    skip
    skip
    reg _T_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_1) @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@325046.4]
    skip
    node _T_3 = eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@325048.4]
    skip
    skip
    node _T_6 = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325051.4]
    node _T_8 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325054.4]
    node _GEN_15 = mux(io_deq_ready, UInt<1>("h0"), _T_6) @[Decoupled.scala 240:27:example.TestHarness.GemminiRocketConfig.fir@325103.6]
    node _GEN_26 = mux(_T_3, _GEN_15, _T_6) @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@325092.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_25 = mux(_T_3, UInt<1>("h0"), _T_8) @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@325092.4]
    skip
    node _T_11 = neq(_GEN_26, _GEN_25) @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@325071.4]
    node _GEN_13 = mux(_T_11, _GEN_26, _T_1) @[Decoupled.scala 227:28:example.TestHarness.GemminiRocketConfig.fir@325072.4]
    node _T_12 = eq(_T_3, UInt<1>("h0")) @[Decoupled.scala 231:19:example.TestHarness.GemminiRocketConfig.fir@325075.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@325078.4]
    io_deq_valid <= or(io_enq_valid, _T_12) @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@325076.4 Decoupled.scala 236:40:example.TestHarness.GemminiRocketConfig.fir@325090.6]
    io_deq_bits_id <= mux(_T_3, io_enq_bits_id, _T_id._T_14.data) @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325088.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325101.6]
    io_deq_bits_addr <= mux(_T_3, io_enq_bits_addr, _T_addr._T_14.data) @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325087.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325100.6]
    io_deq_bits_len <= mux(_T_3, io_enq_bits_len, _T_len._T_14.data) @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325086.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325099.6]
    io_deq_bits_size <= mux(_T_3, io_enq_bits_size, _T_size._T_14.data) @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325085.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325098.6]
    io_deq_bits_burst <= mux(_T_3, io_enq_bits_burst, _T_burst._T_14.data) @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325084.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325097.6]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    _T_1 <= mux(reset, UInt<1>("h0"), _GEN_13) @[Decoupled.scala 228:16:example.TestHarness.GemminiRocketConfig.fir@325073.6]
    skip
    skip
    _T_id._T_14.clk <= clock
    _T_id._T_14.en <= UInt<1>("h1")
    _T_id._T_14.addr <= UInt<1>("h0")
    skip
    skip
    skip
    skip
    _T_id._T_10.clk <= clock
    _T_id._T_10.en <= mux(_T_3, _GEN_15, _T_6)
    _T_id._T_10.mask <= UInt<1>("h1")
    _T_id._T_10.addr <= UInt<1>("h0")
    _T_id._T_10.data <= io_enq_bits_id
    skip
    skip
    _T_addr._T_14.clk <= clock
    _T_addr._T_14.en <= UInt<1>("h1")
    _T_addr._T_14.addr <= UInt<1>("h0")
    skip
    skip
    skip
    skip
    _T_addr._T_10.clk <= clock
    _T_addr._T_10.en <= mux(_T_3, _GEN_15, _T_6)
    _T_addr._T_10.mask <= UInt<1>("h1")
    _T_addr._T_10.addr <= UInt<1>("h0")
    _T_addr._T_10.data <= io_enq_bits_addr
    skip
    skip
    _T_len._T_14.clk <= clock
    _T_len._T_14.en <= UInt<1>("h1")
    _T_len._T_14.addr <= UInt<1>("h0")
    skip
    skip
    skip
    skip
    _T_len._T_10.clk <= clock
    _T_len._T_10.en <= mux(_T_3, _GEN_15, _T_6)
    _T_len._T_10.mask <= UInt<1>("h1")
    _T_len._T_10.addr <= UInt<1>("h0")
    _T_len._T_10.data <= io_enq_bits_len
    skip
    skip
    _T_size._T_14.clk <= clock
    _T_size._T_14.en <= UInt<1>("h1")
    _T_size._T_14.addr <= UInt<1>("h0")
    skip
    skip
    skip
    skip
    _T_size._T_10.clk <= clock
    _T_size._T_10.en <= mux(_T_3, _GEN_15, _T_6)
    _T_size._T_10.mask <= UInt<1>("h1")
    _T_size._T_10.addr <= UInt<1>("h0")
    _T_size._T_10.data <= io_enq_bits_size
    skip
    skip
    _T_burst._T_14.clk <= clock
    _T_burst._T_14.en <= UInt<1>("h1")
    _T_burst._T_14.addr <= UInt<1>("h0")
    skip
    skip
    skip
    skip
    _T_burst._T_10.clk <= clock
    _T_burst._T_10.en <= mux(_T_3, _GEN_15, _T_6)
    _T_burst._T_10.mask <= UInt<1>("h1")
    _T_burst._T_10.addr <= UInt<1>("h0")
    _T_burst._T_10.data <= io_enq_bits_burst
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip

  module AXI4Fragmenter_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@325244.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@325245.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325246.4]
    output auto_in_aw_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_aw_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_aw_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_aw_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_aw_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_aw_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_aw_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_w_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_w_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_w_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_w_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_w_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_b_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_b_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_b_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_b_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_ar_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_ar_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_ar_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_ar_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_ar_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_ar_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_ar_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_in_r_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_r_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_r_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_r_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_r_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_in_r_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_aw_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_aw_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_aw_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_aw_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_aw_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_w_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_w_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_w_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_w_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_b_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_b_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_b_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_b_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_b_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_ar_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_ar_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_ar_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_ar_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_ar_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    output auto_out_r_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_r_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_r_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_r_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_r_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_r_bits_user : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
    input auto_out_r_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  
    inst Queue of Queue_59_inTestHarness @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
    inst Queue_1 of Queue_59_inTestHarness @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
    inst Queue_2 of Queue_6_inTestHarness @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
    reg _T_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_4) @[Fragmenter.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325286.4]
    reg _T_5 : UInt<28>, clock with :
      reset => (UInt<1>("h0"), _T_5) @[Fragmenter.scala 59:25:example.TestHarness.GemminiRocketConfig.fir@325287.4]
    reg _T_6 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_6) @[Fragmenter.scala 60:25:example.TestHarness.GemminiRocketConfig.fir@325288.4]
    node _T_2_bits_len = Queue.io_deq_bits_len @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325279.4]
    node _T_7 = mux(_T_4, _T_6, _T_2_bits_len) @[Fragmenter.scala 62:23:example.TestHarness.GemminiRocketConfig.fir@325289.4]
    node _T_2_bits_addr = Queue.io_deq_bits_addr @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325280.4]
    node _T_8 = mux(_T_4, _T_5, _T_2_bits_addr) @[Fragmenter.scala 63:23:example.TestHarness.GemminiRocketConfig.fir@325290.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_2_bits_burst = Queue.io_deq_bits_burst @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325277.4]
    node _T_50 = eq(_T_2_bits_burst, UInt<2>("h0")) @[Fragmenter.scala 90:34:example.TestHarness.GemminiRocketConfig.fir@325332.4]
    node _T_2_bits_size = Queue.io_deq_bits_size @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325278.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_59 = dshlw(UInt<16>("h1"), _T_2_bits_size) @[Fragmenter.scala 98:38:example.TestHarness.GemminiRocketConfig.fir@325341.4]
    node _GEN_48 = pad(_T_59, 28) @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325342.4]
    node _T_60 = add(_T_8, _GEN_48) @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325342.4]
    node _T_61 = tail(_T_60, 1) @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325343.4]
    node _T_62 = cat(_T_2_bits_len, UInt<8>("hff")) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@325344.4]
    node _GEN_49 = pad(_T_62, 23) @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325345.4]
    node _T_63 = dshlw(_GEN_49, _T_2_bits_size) @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325345.4]
    node _T_64 = shr(_T_63, 8) @[Bundles.scala 29:30:example.TestHarness.GemminiRocketConfig.fir@325346.4]
    node _T_66 = eq(_T_2_bits_burst, UInt<2>("h2")) @[Fragmenter.scala 101:28:example.TestHarness.GemminiRocketConfig.fir@325350.4]
    node _GEN_50 = pad(_T_64, 28) @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325352.6]
    node _T_67 = and(_T_61, _GEN_50) @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325352.6]
    node _T_68 = not(_T_2_bits_addr) @[Fragmenter.scala 102:49:example.TestHarness.GemminiRocketConfig.fir@325353.6]
    skip
    node _T_69 = or(_T_68, _GEN_50) @[Fragmenter.scala 102:62:example.TestHarness.GemminiRocketConfig.fir@325354.6]
    node _T_70 = not(_T_69) @[Fragmenter.scala 102:47:example.TestHarness.GemminiRocketConfig.fir@325355.6]
    node _T_71 = or(_T_67, _T_70) @[Fragmenter.scala 102:45:example.TestHarness.GemminiRocketConfig.fir@325356.6]
    node _GEN_0 = mux(_T_66, _T_71, _T_61) @[Fragmenter.scala 101:59:example.TestHarness.GemminiRocketConfig.fir@325351.4]
    skip
    node _GEN_1 = mux(_T_50, _T_2_bits_addr, _GEN_0) @[Fragmenter.scala 104:60:example.TestHarness.GemminiRocketConfig.fir@325360.4]
    node _T_73 = eq(UInt<8>("h0"), _T_7) @[Fragmenter.scala 108:27:example.TestHarness.GemminiRocketConfig.fir@325363.4]
    skip
    skip
    skip
    node _T_75 = not(_T_8) @[Fragmenter.scala 120:28:example.TestHarness.GemminiRocketConfig.fir@325369.4]
    skip
    node _T_77 = dshlw(UInt<10>("h7"), _T_2_bits_size) @[package.scala 189:77:example.TestHarness.GemminiRocketConfig.fir@325371.4]
    node _T_78 = bits(_T_77, 2, 0) @[package.scala 189:82:example.TestHarness.GemminiRocketConfig.fir@325372.4]
    node _T_79 = not(_T_78) @[package.scala 189:46:example.TestHarness.GemminiRocketConfig.fir@325373.4]
    node _GEN_52 = pad(_T_79, 28) @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325374.4]
    node _T_80 = or(_T_75, _GEN_52) @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325374.4]
    skip
    node _T_2_valid = Queue.io_deq_valid @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 310:15:example.TestHarness.GemminiRocketConfig.fir@325282.4]
    skip
    node _T_82 = and(auto_out_ar_ready, _T_2_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325377.4]
    node _T_83 = eq(_T_73, UInt<1>("h0")) @[Fragmenter.scala 123:19:example.TestHarness.GemminiRocketConfig.fir@325379.6]
    node _GEN_53 = pad(_T_7, 9) @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325382.6]
    node _T_84 = sub(_GEN_53, UInt<9>("h1")) @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325382.6]
    node _T_85 = tail(_T_84, 1) @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325383.6]
    node _GEN_2 = mux(_T_82, _T_83, _T_4) @[Fragmenter.scala 122:27:example.TestHarness.GemminiRocketConfig.fir@325378.4]
    skip
    skip
    node _GEN_4 = mux(_T_82, _T_85, pad(_T_6, 9)) @[Fragmenter.scala 122:27:example.TestHarness.GemminiRocketConfig.fir@325378.4]
    reg _T_88 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_88) @[Fragmenter.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325414.4]
    reg _T_89 : UInt<28>, clock with :
      reset => (UInt<1>("h0"), _T_89) @[Fragmenter.scala 59:25:example.TestHarness.GemminiRocketConfig.fir@325415.4]
    reg _T_90 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), _T_90) @[Fragmenter.scala 60:25:example.TestHarness.GemminiRocketConfig.fir@325416.4]
    node _T_86_bits_len = Queue_1.io_deq_bits_len @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325407.4]
    node _T_91 = mux(_T_88, _T_90, _T_86_bits_len) @[Fragmenter.scala 62:23:example.TestHarness.GemminiRocketConfig.fir@325417.4]
    node _T_86_bits_addr = Queue_1.io_deq_bits_addr @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325408.4]
    node _T_92 = mux(_T_88, _T_89, _T_86_bits_addr) @[Fragmenter.scala 63:23:example.TestHarness.GemminiRocketConfig.fir@325418.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_86_bits_burst = Queue_1.io_deq_bits_burst @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325405.4]
    node _T_134 = eq(_T_86_bits_burst, UInt<2>("h0")) @[Fragmenter.scala 90:34:example.TestHarness.GemminiRocketConfig.fir@325460.4]
    node _T_86_bits_size = Queue_1.io_deq_bits_size @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325406.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_143 = dshlw(UInt<16>("h1"), _T_86_bits_size) @[Fragmenter.scala 98:38:example.TestHarness.GemminiRocketConfig.fir@325469.4]
    node _GEN_58 = pad(_T_143, 28) @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325470.4]
    node _T_144 = add(_T_92, _GEN_58) @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325470.4]
    node _T_145 = tail(_T_144, 1) @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325471.4]
    node _T_146 = cat(_T_86_bits_len, UInt<8>("hff")) @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@325472.4]
    node _GEN_59 = pad(_T_146, 23) @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325473.4]
    node _T_147 = dshlw(_GEN_59, _T_86_bits_size) @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325473.4]
    node _T_148 = shr(_T_147, 8) @[Bundles.scala 29:30:example.TestHarness.GemminiRocketConfig.fir@325474.4]
    node _T_150 = eq(_T_86_bits_burst, UInt<2>("h2")) @[Fragmenter.scala 101:28:example.TestHarness.GemminiRocketConfig.fir@325478.4]
    node _GEN_60 = pad(_T_148, 28) @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325480.6]
    node _T_151 = and(_T_145, _GEN_60) @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325480.6]
    node _T_152 = not(_T_86_bits_addr) @[Fragmenter.scala 102:49:example.TestHarness.GemminiRocketConfig.fir@325481.6]
    skip
    node _T_153 = or(_T_152, _GEN_60) @[Fragmenter.scala 102:62:example.TestHarness.GemminiRocketConfig.fir@325482.6]
    node _T_154 = not(_T_153) @[Fragmenter.scala 102:47:example.TestHarness.GemminiRocketConfig.fir@325483.6]
    node _T_155 = or(_T_151, _T_154) @[Fragmenter.scala 102:45:example.TestHarness.GemminiRocketConfig.fir@325484.6]
    node _GEN_5 = mux(_T_150, _T_155, _T_145) @[Fragmenter.scala 101:59:example.TestHarness.GemminiRocketConfig.fir@325479.4]
    skip
    node _GEN_6 = mux(_T_134, _T_86_bits_addr, _GEN_5) @[Fragmenter.scala 104:60:example.TestHarness.GemminiRocketConfig.fir@325488.4]
    node _T_157 = eq(UInt<8>("h0"), _T_91) @[Fragmenter.scala 108:27:example.TestHarness.GemminiRocketConfig.fir@325491.4]
    skip
    reg _T_182 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), _T_182) @[Fragmenter.scala 162:30:example.TestHarness.GemminiRocketConfig.fir@325554.4]
    node _T_183 = eq(_T_182, UInt<9>("h0")) @[Fragmenter.scala 163:30:example.TestHarness.GemminiRocketConfig.fir@325555.4]
    skip
    reg _T_171 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_171) @[Fragmenter.scala 148:35:example.TestHarness.GemminiRocketConfig.fir@325530.4]
    node _T_178 = or(_T_183, _T_171) @[Fragmenter.scala 156:52:example.TestHarness.GemminiRocketConfig.fir@325546.4]
    node _T_179 = and(auto_out_aw_ready, _T_178) @[Fragmenter.scala 156:35:example.TestHarness.GemminiRocketConfig.fir@325547.4]
    skip
    skip
    node _T_159 = not(_T_92) @[Fragmenter.scala 120:28:example.TestHarness.GemminiRocketConfig.fir@325497.4]
    skip
    node _T_161 = dshlw(UInt<10>("h7"), _T_86_bits_size) @[package.scala 189:77:example.TestHarness.GemminiRocketConfig.fir@325499.4]
    node _T_162 = bits(_T_161, 2, 0) @[package.scala 189:82:example.TestHarness.GemminiRocketConfig.fir@325500.4]
    node _T_163 = not(_T_162) @[package.scala 189:46:example.TestHarness.GemminiRocketConfig.fir@325501.4]
    node _GEN_62 = pad(_T_163, 28) @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325502.4]
    node _T_164 = or(_T_159, _GEN_62) @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325502.4]
    skip
    node _T_86_valid = Queue_1.io_deq_valid @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 310:15:example.TestHarness.GemminiRocketConfig.fir@325410.4]
    skip
    node _T_166 = and(_T_179, _T_86_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325505.4]
    node _T_167 = eq(_T_157, UInt<1>("h0")) @[Fragmenter.scala 123:19:example.TestHarness.GemminiRocketConfig.fir@325507.6]
    node _GEN_63 = pad(_T_91, 9) @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325510.6]
    node _T_168 = sub(_GEN_63, UInt<9>("h1")) @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325510.6]
    node _T_169 = tail(_T_168, 1) @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325511.6]
    node _GEN_7 = mux(_T_166, _T_167, _T_88) @[Fragmenter.scala 122:27:example.TestHarness.GemminiRocketConfig.fir@325506.4]
    skip
    skip
    node _GEN_9 = mux(_T_166, _T_169, pad(_T_90, 9)) @[Fragmenter.scala 122:27:example.TestHarness.GemminiRocketConfig.fir@325506.4]
    node _T_180 = eq(_T_171, UInt<1>("h0")) @[Fragmenter.scala 157:38:example.TestHarness.GemminiRocketConfig.fir@325549.4]
    node _T_181 = and(_T_86_valid, _T_180) @[Fragmenter.scala 157:35:example.TestHarness.GemminiRocketConfig.fir@325550.4]
    skip
    node _T_174 = and(_T_181, _T_183) @[Fragmenter.scala 151:26:example.TestHarness.GemminiRocketConfig.fir@325535.4]
    node _GEN_10 = or(_T_174, _T_171) @[Fragmenter.scala 151:43:example.TestHarness.GemminiRocketConfig.fir@325536.4]
    skip
    node _T_177 = and(_T_86_valid, _T_178) @[Fragmenter.scala 155:35:example.TestHarness.GemminiRocketConfig.fir@325544.4]
    skip
    node _T_175 = and(auto_out_aw_ready, _T_177) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325539.4]
    node _GEN_11 = mux(_T_175, UInt<1>("h0"), _GEN_10) @[Fragmenter.scala 152:28:example.TestHarness.GemminiRocketConfig.fir@325540.4]
    node _T_184 = mux(_T_181, UInt<9>("h1"), UInt<9>("h0")) @[Fragmenter.scala 164:35:example.TestHarness.GemminiRocketConfig.fir@325556.4]
    node _T_185 = mux(_T_183, _T_184, _T_182) @[Fragmenter.scala 164:23:example.TestHarness.GemminiRocketConfig.fir@325557.4]
    node _T_186 = eq(_T_185, UInt<9>("h1")) @[Fragmenter.scala 165:27:example.TestHarness.GemminiRocketConfig.fir@325558.4]
    skip
    node _T_170_valid = Queue_2.io_deq_valid @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325522.4 Decoupled.scala 310:15:example.TestHarness.GemminiRocketConfig.fir@325526.4]
    node _T_197 = eq(_T_183, UInt<1>("h0")) @[Fragmenter.scala 171:37:example.TestHarness.GemminiRocketConfig.fir@325575.4]
    node _T_198 = or(_T_197, _T_181) @[Fragmenter.scala 171:51:example.TestHarness.GemminiRocketConfig.fir@325576.4]
    node _T_199 = and(_T_170_valid, _T_198) @[Fragmenter.scala 171:33:example.TestHarness.GemminiRocketConfig.fir@325577.4]
    skip
    node _T_187 = and(auto_out_w_ready, _T_199) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325559.4]
    node _GEN_64 = pad(_T_187, 9) @[Fragmenter.scala 166:27:example.TestHarness.GemminiRocketConfig.fir@325560.4]
    node _T_188 = sub(_T_185, _GEN_64) @[Fragmenter.scala 166:27:example.TestHarness.GemminiRocketConfig.fir@325560.4]
    node _T_189 = tail(_T_188, 1) @[Fragmenter.scala 166:27:example.TestHarness.GemminiRocketConfig.fir@325561.4]
    skip
    node _T_191 = eq(_T_187, UInt<1>("h0")) @[Fragmenter.scala 167:15:example.TestHarness.GemminiRocketConfig.fir@325564.4]
    node _T_192 = neq(_T_185, UInt<9>("h0")) @[Fragmenter.scala 167:39:example.TestHarness.GemminiRocketConfig.fir@325565.4]
    node _T_193 = or(_T_191, _T_192) @[Fragmenter.scala 167:29:example.TestHarness.GemminiRocketConfig.fir@325566.4]
    skip
    node _T_195 = or(_T_193, reset) @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325568.4]
    node _T_196 = eq(_T_195, UInt<1>("h0")) @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325569.4]
    skip
    skip
    skip
    node _T_203 = eq(_T_199, UInt<1>("h0")) @[Fragmenter.scala 176:15:example.TestHarness.GemminiRocketConfig.fir@325585.4]
    node _T_170_bits_last = Queue_2.io_deq_bits_last @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325522.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325523.4]
    node _T_204 = eq(_T_170_bits_last, UInt<1>("h0")) @[Fragmenter.scala 176:31:example.TestHarness.GemminiRocketConfig.fir@325586.4]
    node _T_205 = or(_T_203, _T_204) @[Fragmenter.scala 176:28:example.TestHarness.GemminiRocketConfig.fir@325587.4]
    node _T_206 = or(_T_205, _T_186) @[Fragmenter.scala 176:47:example.TestHarness.GemminiRocketConfig.fir@325588.4]
    skip
    node _T_208 = or(_T_206, reset) @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325590.4]
    node _T_209 = eq(_T_208, UInt<1>("h0")) @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325591.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _T_214 = eq(auto_out_b_bits_user, UInt<1>("h0")) @[Fragmenter.scala 188:36:example.TestHarness.GemminiRocketConfig.fir@325604.4]
    skip
    node _T_215 = or(auto_in_b_ready, _T_214) @[Fragmenter.scala 188:33:example.TestHarness.GemminiRocketConfig.fir@325605.4]
    reg _T_217_0 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_0) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_1) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_2 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_2) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_3 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_3) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_4 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_4) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_5 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_5) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_6 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_6) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_7 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_7) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_8 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_8) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_9 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_9) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_10 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_10) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_11 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_11) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_12 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_12) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_13 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_13) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_14 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_14) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    reg _T_217_15 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), _T_217_15) @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
    skip
    skip
    node _GEN_13 = mux(eq(UInt<4>("h1"), auto_out_b_bits_id), _T_217_1, _T_217_0) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_14 = mux(eq(UInt<4>("h2"), auto_out_b_bits_id), _T_217_2, _GEN_13) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_15 = mux(eq(UInt<4>("h3"), auto_out_b_bits_id), _T_217_3, _GEN_14) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_16 = mux(eq(UInt<4>("h4"), auto_out_b_bits_id), _T_217_4, _GEN_15) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_17 = mux(eq(UInt<4>("h5"), auto_out_b_bits_id), _T_217_5, _GEN_16) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_18 = mux(eq(UInt<4>("h6"), auto_out_b_bits_id), _T_217_6, _GEN_17) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_19 = mux(eq(UInt<4>("h7"), auto_out_b_bits_id), _T_217_7, _GEN_18) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_20 = mux(eq(UInt<4>("h8"), auto_out_b_bits_id), _T_217_8, _GEN_19) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_21 = mux(eq(UInt<4>("h9"), auto_out_b_bits_id), _T_217_9, _GEN_20) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_22 = mux(eq(UInt<4>("ha"), auto_out_b_bits_id), _T_217_10, _GEN_21) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_23 = mux(eq(UInt<4>("hb"), auto_out_b_bits_id), _T_217_11, _GEN_22) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_24 = mux(eq(UInt<4>("hc"), auto_out_b_bits_id), _T_217_12, _GEN_23) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_25 = mux(eq(UInt<4>("hd"), auto_out_b_bits_id), _T_217_13, _GEN_24) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_26 = mux(eq(UInt<4>("he"), auto_out_b_bits_id), _T_217_14, _GEN_25) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    node _GEN_27 = mux(eq(UInt<4>("hf"), auto_out_b_bits_id), _T_217_15, _GEN_26) @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
    skip
    skip
    skip
    skip
    node _T_220 = dshlw(UInt<16>("h1"), auto_out_b_bits_id) @[OneHot.scala 65:12:example.TestHarness.GemminiRocketConfig.fir@325629.4]
    skip
    node _T_222 = bits(_T_220, 0, 0) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325631.4]
    node _T_223 = bits(_T_220, 1, 1) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325632.4]
    node _T_224 = bits(_T_220, 2, 2) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325633.4]
    node _T_225 = bits(_T_220, 3, 3) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325634.4]
    node _T_226 = bits(_T_220, 4, 4) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325635.4]
    node _T_227 = bits(_T_220, 5, 5) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325636.4]
    node _T_228 = bits(_T_220, 6, 6) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325637.4]
    node _T_229 = bits(_T_220, 7, 7) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325638.4]
    node _T_230 = bits(_T_220, 8, 8) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325639.4]
    node _T_231 = bits(_T_220, 9, 9) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325640.4]
    node _T_232 = bits(_T_220, 10, 10) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325641.4]
    node _T_233 = bits(_T_220, 11, 11) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325642.4]
    node _T_234 = bits(_T_220, 12, 12) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325643.4]
    node _T_235 = bits(_T_220, 13, 13) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325644.4]
    node _T_236 = bits(_T_220, 14, 14) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325645.4]
    node _T_237 = bits(_T_220, 15, 15) @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325646.4]
    skip
    node _T_238 = and(_T_215, auto_out_b_valid) @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325647.4]
    node _T_239 = and(_T_222, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325648.4]
    node _T_240 = or(_T_217_0, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325650.6]
    node _T_241 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_240) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325651.6]
    node _GEN_28 = mux(_T_239, _T_241, _T_217_0) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325649.4]
    skip
    node _T_243 = and(_T_223, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325655.4]
    node _T_244 = or(_T_217_1, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325657.6]
    node _T_245 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_244) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325658.6]
    node _GEN_29 = mux(_T_243, _T_245, _T_217_1) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325656.4]
    skip
    node _T_247 = and(_T_224, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325662.4]
    node _T_248 = or(_T_217_2, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325664.6]
    node _T_249 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_248) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325665.6]
    node _GEN_30 = mux(_T_247, _T_249, _T_217_2) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325663.4]
    skip
    node _T_251 = and(_T_225, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325669.4]
    node _T_252 = or(_T_217_3, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325671.6]
    node _T_253 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_252) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325672.6]
    node _GEN_31 = mux(_T_251, _T_253, _T_217_3) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325670.4]
    skip
    node _T_255 = and(_T_226, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325676.4]
    node _T_256 = or(_T_217_4, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325678.6]
    node _T_257 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_256) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325679.6]
    node _GEN_32 = mux(_T_255, _T_257, _T_217_4) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325677.4]
    skip
    node _T_259 = and(_T_227, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325683.4]
    node _T_260 = or(_T_217_5, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325685.6]
    node _T_261 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_260) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325686.6]
    node _GEN_33 = mux(_T_259, _T_261, _T_217_5) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325684.4]
    skip
    node _T_263 = and(_T_228, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325690.4]
    node _T_264 = or(_T_217_6, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325692.6]
    node _T_265 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_264) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325693.6]
    node _GEN_34 = mux(_T_263, _T_265, _T_217_6) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325691.4]
    skip
    node _T_267 = and(_T_229, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325697.4]
    node _T_268 = or(_T_217_7, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325699.6]
    node _T_269 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_268) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325700.6]
    node _GEN_35 = mux(_T_267, _T_269, _T_217_7) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325698.4]
    skip
    node _T_271 = and(_T_230, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325704.4]
    node _T_272 = or(_T_217_8, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325706.6]
    node _T_273 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_272) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325707.6]
    node _GEN_36 = mux(_T_271, _T_273, _T_217_8) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325705.4]
    skip
    node _T_275 = and(_T_231, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325711.4]
    node _T_276 = or(_T_217_9, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325713.6]
    node _T_277 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_276) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325714.6]
    node _GEN_37 = mux(_T_275, _T_277, _T_217_9) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325712.4]
    skip
    node _T_279 = and(_T_232, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325718.4]
    node _T_280 = or(_T_217_10, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325720.6]
    node _T_281 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_280) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325721.6]
    node _GEN_38 = mux(_T_279, _T_281, _T_217_10) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325719.4]
    skip
    node _T_283 = and(_T_233, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325725.4]
    node _T_284 = or(_T_217_11, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325727.6]
    node _T_285 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_284) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325728.6]
    node _GEN_39 = mux(_T_283, _T_285, _T_217_11) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325726.4]
    skip
    node _T_287 = and(_T_234, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325732.4]
    node _T_288 = or(_T_217_12, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325734.6]
    node _T_289 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_288) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325735.6]
    node _GEN_40 = mux(_T_287, _T_289, _T_217_12) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325733.4]
    skip
    node _T_291 = and(_T_235, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325739.4]
    node _T_292 = or(_T_217_13, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325741.6]
    node _T_293 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_292) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325742.6]
    node _GEN_41 = mux(_T_291, _T_293, _T_217_13) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325740.4]
    skip
    node _T_295 = and(_T_236, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325746.4]
    node _T_296 = or(_T_217_14, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325748.6]
    node _T_297 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_296) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325749.6]
    node _GEN_42 = mux(_T_295, _T_297, _T_217_14) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325747.4]
    skip
    node _T_299 = and(_T_237, _T_238) @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325753.4]
    node _T_300 = or(_T_217_15, auto_out_b_bits_resp) @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325755.6]
    node _T_301 = mux(auto_out_b_bits_user, UInt<2>("h0"), _T_300) @[Fragmenter.scala 195:48:example.TestHarness.GemminiRocketConfig.fir@325756.6]
    node _GEN_43 = mux(_T_299, _T_301, _T_217_15) @[Fragmenter.scala 195:36:example.TestHarness.GemminiRocketConfig.fir@325754.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    auto_in_aw_ready <= Queue_1.io_enq_ready @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_w_ready <= Queue_2.io_enq_ready @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_b_valid <= and(auto_out_b_valid, auto_out_b_bits_user) @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_b_bits_id <= auto_out_b_bits_id @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_b_bits_resp <= or(auto_out_b_bits_resp, _GEN_27) @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_ar_ready <= Queue.io_enq_ready @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_r_valid <= auto_out_r_valid @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_r_bits_id <= auto_out_r_bits_id @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_r_bits_data <= auto_out_r_bits_data @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_r_bits_resp <= auto_out_r_bits_resp @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_in_r_bits_last <= and(auto_out_r_bits_last, auto_out_r_bits_user) @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
    auto_out_aw_valid <= and(_T_86_valid, _T_178) @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    auto_out_aw_bits_id <= Queue_1.io_deq_bits_id @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    auto_out_aw_bits_addr <= not(_T_164) @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    auto_out_aw_bits_user <= eq(UInt<8>("h0"), _T_91) @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    auto_out_w_valid <= and(_T_170_valid, _T_198) @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    auto_out_w_bits_data <= Queue_2.io_deq_bits_data @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    auto_out_w_bits_strb <= Queue_2.io_deq_bits_strb @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    skip
    auto_out_b_ready <= or(auto_in_b_ready, _T_214) @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    auto_out_ar_valid <= Queue.io_deq_valid @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    auto_out_ar_bits_id <= Queue.io_deq_bits_id @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    auto_out_ar_bits_addr <= not(_T_80) @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    auto_out_ar_bits_user <= eq(UInt<8>("h0"), _T_7) @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    auto_out_r_ready <= auto_in_r_ready @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
    Queue.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325259.4]
    Queue.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325260.4]
    Queue.io_enq_valid <= auto_in_ar_valid @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@325261.4]
    Queue.io_enq_bits_id <= auto_in_ar_bits_id @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325270.4]
    Queue.io_enq_bits_addr <= auto_in_ar_bits_addr @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325269.4]
    Queue.io_enq_bits_len <= auto_in_ar_bits_len @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325268.4]
    Queue.io_enq_bits_size <= auto_in_ar_bits_size @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325267.4]
    Queue.io_enq_bits_burst <= auto_in_ar_bits_burst @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325266.4]
    skip
    skip
    skip
    skip
    Queue.io_deq_ready <= and(auto_out_ar_ready, _T_73) @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325283.4]
    _T_4 <= mux(reset, UInt<1>("h0"), _GEN_2) @[Fragmenter.scala 123:16:example.TestHarness.GemminiRocketConfig.fir@325380.6]
    _T_5 <= mux(_T_82, _GEN_1, _T_5) @[Fragmenter.scala 124:18:example.TestHarness.GemminiRocketConfig.fir@325381.6]
    _T_6 <= bits(_GEN_4, 7, 0) @[Fragmenter.scala 125:18:example.TestHarness.GemminiRocketConfig.fir@325384.6]
    Queue_1.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325387.4]
    Queue_1.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325388.4]
    Queue_1.io_enq_valid <= auto_in_aw_valid @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@325389.4]
    Queue_1.io_enq_bits_id <= auto_in_aw_bits_id @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325398.4]
    Queue_1.io_enq_bits_addr <= auto_in_aw_bits_addr @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325397.4]
    Queue_1.io_enq_bits_len <= auto_in_aw_bits_len @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325396.4]
    Queue_1.io_enq_bits_size <= auto_in_aw_bits_size @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325395.4]
    Queue_1.io_enq_bits_burst <= auto_in_aw_bits_burst @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325394.4]
    skip
    skip
    skip
    skip
    Queue_1.io_deq_ready <= and(_T_179, _T_157) @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325411.4]
    _T_88 <= mux(reset, UInt<1>("h0"), _GEN_7) @[Fragmenter.scala 123:16:example.TestHarness.GemminiRocketConfig.fir@325508.6]
    _T_89 <= mux(_T_166, _GEN_6, _T_89) @[Fragmenter.scala 124:18:example.TestHarness.GemminiRocketConfig.fir@325509.6]
    _T_90 <= bits(_GEN_9, 7, 0) @[Fragmenter.scala 125:18:example.TestHarness.GemminiRocketConfig.fir@325512.6]
    Queue_2.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325515.4]
    Queue_2.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325516.4]
    Queue_2.io_enq_valid <= auto_in_w_valid @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@325517.4]
    Queue_2.io_enq_bits_data <= auto_in_w_bits_data @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325520.4]
    Queue_2.io_enq_bits_strb <= auto_in_w_bits_strb @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325519.4]
    Queue_2.io_enq_bits_last <= auto_in_w_bits_last @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325518.4]
    Queue_2.io_deq_ready <= and(auto_out_w_ready, _T_198) @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325527.4]
    _T_171 <= mux(reset, UInt<1>("h0"), _GEN_11) @[Fragmenter.scala 151:60:example.TestHarness.GemminiRocketConfig.fir@325537.6 Fragmenter.scala 152:45:example.TestHarness.GemminiRocketConfig.fir@325541.6]
    _T_182 <= mux(reset, UInt<9>("h0"), _T_189) @[Fragmenter.scala 166:17:example.TestHarness.GemminiRocketConfig.fir@325562.4]
    _T_217_0 <= mux(reset, UInt<2>("h0"), _GEN_28) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325652.6]
    _T_217_1 <= mux(reset, UInt<2>("h0"), _GEN_29) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325659.6]
    _T_217_2 <= mux(reset, UInt<2>("h0"), _GEN_30) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325666.6]
    _T_217_3 <= mux(reset, UInt<2>("h0"), _GEN_31) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325673.6]
    _T_217_4 <= mux(reset, UInt<2>("h0"), _GEN_32) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325680.6]
    _T_217_5 <= mux(reset, UInt<2>("h0"), _GEN_33) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325687.6]
    _T_217_6 <= mux(reset, UInt<2>("h0"), _GEN_34) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325694.6]
    _T_217_7 <= mux(reset, UInt<2>("h0"), _GEN_35) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325701.6]
    _T_217_8 <= mux(reset, UInt<2>("h0"), _GEN_36) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325708.6]
    _T_217_9 <= mux(reset, UInt<2>("h0"), _GEN_37) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325715.6]
    _T_217_10 <= mux(reset, UInt<2>("h0"), _GEN_38) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325722.6]
    _T_217_11 <= mux(reset, UInt<2>("h0"), _GEN_39) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325729.6]
    _T_217_12 <= mux(reset, UInt<2>("h0"), _GEN_40) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325736.6]
    _T_217_13 <= mux(reset, UInt<2>("h0"), _GEN_41) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325743.6]
    _T_217_14 <= mux(reset, UInt<2>("h0"), _GEN_42) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325750.6]
    _T_217_15 <= mux(reset, UInt<2>("h0"), _GEN_43) @[Fragmenter.scala 195:42:example.TestHarness.GemminiRocketConfig.fir@325757.6]
    printf(clock, _T_196, "Assertion failed\n    at Fragmenter.scala:167 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n") @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325571.6]
    stop(clock, _T_196, 1) @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325572.6]
    printf(clock, _T_209, "Assertion failed\n    at Fragmenter.scala:176 assert (!out.w.valid || !in_w.bits.last || w_last)\n") @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325593.6]
    stop(clock, _T_209, 1) @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325594.6]

  module SimAXIMem_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@325760.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@325761.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325762.4]
    output io_axi4_0_aw_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_aw_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_aw_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_aw_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_aw_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_aw_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_aw_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_w_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_w_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_w_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_w_bits_strb : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_w_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_b_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_b_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_b_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_b_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_ar_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_ar_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_ar_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_ar_bits_addr : UInt<28> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_ar_bits_len : UInt<8> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_ar_bits_size : UInt<3> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_ar_bits_burst : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    input io_axi4_0_r_ready : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_r_valid : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_r_bits_id : UInt<4> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_r_bits_data : UInt<64> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_r_bits_resp : UInt<2> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
    output io_axi4_0_r_bits_last : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  
    inst srams of AXI4RAM_inTestHarness @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
    inst axi4xbar of AXI4Xbar_inTestHarness @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
    inst axi4buf of AXI4Buffer_inTestHarness @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
    inst axi4frag of AXI4Fragmenter_inTestHarness @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_axi4_0_aw_ready <= axi4xbar.auto_in_aw_ready @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_w_ready <= axi4xbar.auto_in_w_ready @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_b_valid <= axi4xbar.auto_in_b_valid @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_b_bits_id <= axi4xbar.auto_in_b_bits_id @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_b_bits_resp <= axi4xbar.auto_in_b_bits_resp @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_ar_ready <= axi4xbar.auto_in_ar_ready @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_r_valid <= axi4xbar.auto_in_r_valid @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_r_bits_id <= axi4xbar.auto_in_r_bits_id @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_r_bits_data <= axi4xbar.auto_in_r_bits_data @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_r_bits_resp <= axi4xbar.auto_in_r_bits_resp @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    io_axi4_0_r_bits_last <= axi4xbar.auto_in_r_bits_last @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
    srams.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325774.4]
    srams.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325775.4]
    srams.auto_in_aw_valid <= axi4buf.auto_out_aw_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    srams.auto_in_aw_bits_id <= axi4buf.auto_out_aw_bits_id @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    srams.auto_in_aw_bits_addr <= axi4buf.auto_out_aw_bits_addr @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    srams.auto_in_aw_bits_user <= axi4buf.auto_out_aw_bits_user @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    srams.auto_in_w_valid <= axi4buf.auto_out_w_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    srams.auto_in_w_bits_data <= axi4buf.auto_out_w_bits_data @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    srams.auto_in_w_bits_strb <= axi4buf.auto_out_w_bits_strb @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    skip
    srams.auto_in_b_ready <= axi4buf.auto_out_b_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    srams.auto_in_ar_valid <= axi4buf.auto_out_ar_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    srams.auto_in_ar_bits_id <= axi4buf.auto_out_ar_bits_id @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    srams.auto_in_ar_bits_addr <= axi4buf.auto_out_ar_bits_addr @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    srams.auto_in_ar_bits_user <= axi4buf.auto_out_ar_bits_user @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    srams.auto_in_r_ready <= axi4buf.auto_out_r_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4xbar.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325780.4]
    axi4xbar.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325781.4]
    axi4xbar.auto_in_aw_valid <= io_axi4_0_aw_valid @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_aw_bits_id <= io_axi4_0_aw_bits_id @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_aw_bits_addr <= io_axi4_0_aw_bits_addr @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_aw_bits_len <= io_axi4_0_aw_bits_len @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_aw_bits_size <= io_axi4_0_aw_bits_size @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_aw_bits_burst <= io_axi4_0_aw_bits_burst @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    skip
    skip
    skip
    skip
    axi4xbar.auto_in_w_valid <= io_axi4_0_w_valid @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_w_bits_data <= io_axi4_0_w_bits_data @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_w_bits_strb <= io_axi4_0_w_bits_strb @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_w_bits_last <= io_axi4_0_w_bits_last @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_b_ready <= io_axi4_0_b_ready @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_ar_valid <= io_axi4_0_ar_valid @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_ar_bits_id <= io_axi4_0_ar_bits_id @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_ar_bits_addr <= io_axi4_0_ar_bits_addr @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_ar_bits_len <= io_axi4_0_ar_bits_len @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_ar_bits_size <= io_axi4_0_ar_bits_size @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_in_ar_bits_burst <= io_axi4_0_ar_bits_burst @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    skip
    skip
    skip
    skip
    axi4xbar.auto_in_r_ready <= io_axi4_0_r_ready @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
    axi4xbar.auto_out_aw_ready <= axi4frag.auto_in_aw_ready @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_w_ready <= axi4frag.auto_in_w_ready @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_b_valid <= axi4frag.auto_in_b_valid @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_b_bits_id <= axi4frag.auto_in_b_bits_id @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_b_bits_resp <= axi4frag.auto_in_b_bits_resp @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_ar_ready <= axi4frag.auto_in_ar_ready @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_r_valid <= axi4frag.auto_in_r_valid @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_r_bits_id <= axi4frag.auto_in_r_bits_id @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_r_bits_data <= axi4frag.auto_in_r_bits_data @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_r_bits_resp <= axi4frag.auto_in_r_bits_resp @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4xbar.auto_out_r_bits_last <= axi4frag.auto_in_r_bits_last @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4buf.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325786.4]
    axi4buf.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325787.4]
    axi4buf.auto_in_aw_valid <= axi4frag.auto_out_aw_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_in_aw_bits_id <= axi4frag.auto_out_aw_bits_id @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_in_aw_bits_addr <= axi4frag.auto_out_aw_bits_addr @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    axi4buf.auto_in_aw_bits_user <= axi4frag.auto_out_aw_bits_user @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_in_w_valid <= axi4frag.auto_out_w_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_in_w_bits_data <= axi4frag.auto_out_w_bits_data @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_in_w_bits_strb <= axi4frag.auto_out_w_bits_strb @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    skip
    axi4buf.auto_in_b_ready <= axi4frag.auto_out_b_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_in_ar_valid <= axi4frag.auto_out_ar_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_in_ar_bits_id <= axi4frag.auto_out_ar_bits_id @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_in_ar_bits_addr <= axi4frag.auto_out_ar_bits_addr @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    axi4buf.auto_in_ar_bits_user <= axi4frag.auto_out_ar_bits_user @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_in_r_ready <= axi4frag.auto_out_r_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4buf.auto_out_aw_ready <= srams.auto_in_aw_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_w_ready <= srams.auto_in_w_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_b_valid <= srams.auto_in_b_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_b_bits_id <= srams.auto_in_b_bits_id @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_b_bits_resp <= srams.auto_in_b_bits_resp @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_b_bits_user <= srams.auto_in_b_bits_user @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_ar_ready <= srams.auto_in_ar_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_r_valid <= srams.auto_in_r_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_r_bits_id <= srams.auto_in_r_bits_id @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_r_bits_data <= srams.auto_in_r_bits_data @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_r_bits_resp <= srams.auto_in_r_bits_resp @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    axi4buf.auto_out_r_bits_user <= srams.auto_in_r_bits_user @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
    skip
    axi4frag.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325792.4]
    axi4frag.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325793.4]
    axi4frag.auto_in_aw_valid <= axi4xbar.auto_out_aw_valid @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_aw_bits_id <= axi4xbar.auto_out_aw_bits_id @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_aw_bits_addr <= axi4xbar.auto_out_aw_bits_addr @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_aw_bits_len <= axi4xbar.auto_out_aw_bits_len @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_aw_bits_size <= axi4xbar.auto_out_aw_bits_size @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_aw_bits_burst <= axi4xbar.auto_out_aw_bits_burst @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    skip
    skip
    skip
    skip
    axi4frag.auto_in_w_valid <= axi4xbar.auto_out_w_valid @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_w_bits_data <= axi4xbar.auto_out_w_bits_data @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_w_bits_strb <= axi4xbar.auto_out_w_bits_strb @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_w_bits_last <= axi4xbar.auto_out_w_bits_last @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_b_ready <= axi4xbar.auto_out_b_ready @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_ar_valid <= axi4xbar.auto_out_ar_valid @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_ar_bits_id <= axi4xbar.auto_out_ar_bits_id @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_ar_bits_addr <= axi4xbar.auto_out_ar_bits_addr @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_ar_bits_len <= axi4xbar.auto_out_ar_bits_len @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_ar_bits_size <= axi4xbar.auto_out_ar_bits_size @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_in_ar_bits_burst <= axi4xbar.auto_out_ar_bits_burst @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    skip
    skip
    skip
    skip
    axi4frag.auto_in_r_ready <= axi4xbar.auto_out_r_ready @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
    axi4frag.auto_out_aw_ready <= axi4buf.auto_in_aw_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_w_ready <= axi4buf.auto_in_w_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_b_valid <= axi4buf.auto_in_b_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_b_bits_id <= axi4buf.auto_in_b_bits_id @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_b_bits_resp <= axi4buf.auto_in_b_bits_resp @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_b_bits_user <= axi4buf.auto_in_b_bits_user @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_ar_ready <= axi4buf.auto_in_ar_ready @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_r_valid <= axi4buf.auto_in_r_valid @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_r_bits_id <= axi4buf.auto_in_r_bits_id @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_r_bits_data <= axi4buf.auto_in_r_bits_data @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_r_bits_resp <= axi4buf.auto_in_r_bits_resp @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_r_bits_user <= axi4buf.auto_in_r_bits_user @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
    axi4frag.auto_out_r_bits_last <= axi4buf.auto_in_r_bits_last @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]

  module TestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@325802.2]
    input clock : Clock @[:example.TestHarness.GemminiRocketConfig.fir@325803.4]
    input reset : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325804.4]
    output io_success : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@325805.4]
  
    inst top of Top @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
    inst SimSerial of SimSerial @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
    inst UARTAdapter of UARTAdapter_inTestHarness @[UARTAdapter.scala 164:28:example.TestHarness.GemminiRocketConfig.fir@325838.4]
    inst mem of SimAXIMem_inTestHarness @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
    skip
    io_success <= SimSerial.exit @[ConfigMixins.scala 92:13:example.TestHarness.GemminiRocketConfig.fir@325837.4]
    top.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325809.4]
    top.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325810.4]
    top.debug_clockeddmi_dmi_req_valid <= UInt<1>("h0")
    top.debug_clockeddmi_dmi_req_bits_addr <= UInt<7>("h0")
    top.debug_clockeddmi_dmi_req_bits_data <= UInt<32>("h0")
    top.debug_clockeddmi_dmi_req_bits_op <= UInt<2>("h0")
    top.debug_clockeddmi_dmi_resp_ready <= UInt<1>("h0")
    top.debug_clockeddmi_dmiClock <= asClock(UInt<1>("h0"))
    top.debug_clockeddmi_dmiReset <= UInt<1>("h0")
    top.interrupts <= UInt<2>("h0") @[InterruptBus.scala 68:16:example.TestHarness.GemminiRocketConfig.fir@325851.4]
    top.mem_axi4_0_aw_ready <= mem.io_axi4_0_aw_ready @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_w_ready <= mem.io_axi4_0_w_ready @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_b_valid <= mem.io_axi4_0_b_valid @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_b_bits_id <= mem.io_axi4_0_b_bits_id @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_b_bits_resp <= mem.io_axi4_0_b_bits_resp @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_ar_ready <= mem.io_axi4_0_ar_ready @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_r_valid <= mem.io_axi4_0_r_valid @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_r_bits_id <= mem.io_axi4_0_r_bits_id @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_r_bits_data <= mem.io_axi4_0_r_bits_data @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_r_bits_resp <= mem.io_axi4_0_r_bits_resp @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.mem_axi4_0_r_bits_last <= mem.io_axi4_0_r_bits_last @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    top.uart_0_rxd <= UARTAdapter.io_uart_rxd @[UARTAdapter.scala 166:18:example.TestHarness.GemminiRocketConfig.fir@325842.4]
    top.serial_in_valid <= SimSerial.serial_in_valid @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325835.4]
    top.serial_in_bits <= SimSerial.serial_in_bits @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325834.4]
    top.serial_out_ready <= SimSerial.serial_out_ready @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325833.4]
    SimSerial.clock <= top.clock @[SerialAdapter.scala 225:18:example.TestHarness.GemminiRocketConfig.fir@325829.4]
    SimSerial.reset <= top.reset @[SerialAdapter.scala 226:18:example.TestHarness.GemminiRocketConfig.fir@325830.4]
    SimSerial.serial_in_ready <= top.serial_in_ready @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325836.4]
    SimSerial.serial_out_valid <= top.serial_out_valid @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325832.4]
    SimSerial.serial_out_bits <= top.serial_out_bits @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325831.4]
    UARTAdapter.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325839.4]
    UARTAdapter.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325840.4]
    UARTAdapter.io_uart_txd <= top.uart_0_txd @[UARTAdapter.scala 165:28:example.TestHarness.GemminiRocketConfig.fir@325841.4]
    mem.clock <= clock @[:example.TestHarness.GemminiRocketConfig.fir@325848.4]
    mem.reset <= reset @[:example.TestHarness.GemminiRocketConfig.fir@325849.4]
    mem.io_axi4_0_aw_valid <= top.mem_axi4_0_aw_valid @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_aw_bits_id <= top.mem_axi4_0_aw_bits_id @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_aw_bits_addr <= bits(top.mem_axi4_0_aw_bits_addr, 27, 0) @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_aw_bits_len <= top.mem_axi4_0_aw_bits_len @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_aw_bits_size <= top.mem_axi4_0_aw_bits_size @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_aw_bits_burst <= top.mem_axi4_0_aw_bits_burst @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    skip
    skip
    skip
    skip
    mem.io_axi4_0_w_valid <= top.mem_axi4_0_w_valid @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_w_bits_data <= top.mem_axi4_0_w_bits_data @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_w_bits_strb <= top.mem_axi4_0_w_bits_strb @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_w_bits_last <= top.mem_axi4_0_w_bits_last @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_b_ready <= top.mem_axi4_0_b_ready @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_ar_valid <= top.mem_axi4_0_ar_valid @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_ar_bits_id <= top.mem_axi4_0_ar_bits_id @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_ar_bits_addr <= bits(top.mem_axi4_0_ar_bits_addr, 27, 0) @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_ar_bits_len <= top.mem_axi4_0_ar_bits_len @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_ar_bits_size <= top.mem_axi4_0_ar_bits_size @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    mem.io_axi4_0_ar_bits_burst <= top.mem_axi4_0_ar_bits_burst @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
    skip
    skip
    skip
    skip
    mem.io_axi4_0_r_ready <= top.mem_axi4_0_r_ready @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]

  extmodule plusarg_reader_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@24.2]
    output out : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@25.4]
  
    defname = plusarg_reader
    parameter FORMAT = "tilelink_timeout=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 32

  extmodule EICG_wrapper_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@117661.2]
    input in : Clock @[:example.TestHarness.GemminiRocketConfig.fir@117662.4]
    input en : UInt<1> @[:example.TestHarness.GemminiRocketConfig.fir@117663.4]
    output out : Clock @[:example.TestHarness.GemminiRocketConfig.fir@117664.4]
  
    defname = EICG_wrapper
    

  extmodule plusarg_reader_54_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@270592.2]
    output out : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@270593.4]
  
    defname = plusarg_reader
    parameter FORMAT = "max_core_cycles=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 32

  extmodule plusarg_reader_64_inTestHarness : @[:example.TestHarness.GemminiRocketConfig.fir@321342.2]
    output out : UInt<32> @[:example.TestHarness.GemminiRocketConfig.fir@321343.4]
  
    defname = plusarg_reader
    parameter FORMAT = "uart_tx=%d"
    parameter DEFAULT = 1
    parameter WIDTH = 32

  extmodule data_arrays_0_ext_inTestHarness :
    input RW0_addr : UInt<8>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<256>
    output RW0_rdata : UInt<256>
    input RW0_wmask : UInt<32>
  
    defname = data_arrays_0_ext
    

  extmodule tag_array_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<88>
    output RW0_rdata : UInt<88>
    input RW0_wmask : UInt<4>
  
    defname = tag_array_ext
    

  extmodule mem_ext_inTestHarness :
    input R0_addr : UInt<12>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<128>
    input W0_addr : UInt<12>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<128>
    input W0_mask : UInt<16>
  
    defname = mem_ext
    

  extmodule mem_0_ext_inTestHarness :
    input R0_addr : UInt<10>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<512>
    input W0_addr : UInt<10>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<512>
  
    defname = mem_0_ext
    

  extmodule tag_array_0_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<84>
    output RW0_rdata : UInt<84>
    input RW0_wmask : UInt<4>
  
    defname = tag_array_0_ext
    

  extmodule data_arrays_0_0_ext_inTestHarness :
    input RW0_addr : UInt<8>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<128>
    output RW0_rdata : UInt<128>
    input RW0_wmask : UInt<4>
  
    defname = data_arrays_0_0_ext
    

  extmodule cc_dir_ext_inTestHarness :
    input RW0_addr : UInt<10>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<128>
    output RW0_rdata : UInt<128>
    input RW0_wmask : UInt<8>
  
    defname = cc_dir_ext
    

  extmodule cc_banks_0_ext_inTestHarness :
    input RW0_addr : UInt<13>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
  
    defname = cc_banks_0_ext
    

  extmodule mem_ext_0_inTestHarness :
    input R0_addr : UInt<25>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<64>
    input W0_addr : UInt<25>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<64>
    input W0_mask : UInt<8>
  
    defname = mem_ext_0
    

  module mem_inTestHarness :
    input R0_addr : UInt<25>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data_0 : UInt<8>
    output R0_data_1 : UInt<8>
    output R0_data_2 : UInt<8>
    output R0_data_3 : UInt<8>
    output R0_data_4 : UInt<8>
    output R0_data_5 : UInt<8>
    output R0_data_6 : UInt<8>
    output R0_data_7 : UInt<8>
    input W0_addr : UInt<25>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data_0 : UInt<8>
    input W0_data_1 : UInt<8>
    input W0_data_2 : UInt<8>
    input W0_data_3 : UInt<8>
    input W0_data_4 : UInt<8>
    input W0_data_5 : UInt<8>
    input W0_data_6 : UInt<8>
    input W0_data_7 : UInt<8>
    input W0_mask_0 : UInt<1>
    input W0_mask_1 : UInt<1>
    input W0_mask_2 : UInt<1>
    input W0_mask_3 : UInt<1>
    input W0_mask_4 : UInt<1>
    input W0_mask_5 : UInt<1>
    input W0_mask_6 : UInt<1>
    input W0_mask_7 : UInt<1>
  
    inst mem_ext_0 of mem_ext_0_inTestHarness
    mem_ext_0.R0_clk <= R0_clk
    mem_ext_0.R0_en <= R0_en
    mem_ext_0.R0_addr <= R0_addr
    node _GEN_0 = bits(mem_ext_0.R0_data, 7, 0)
    R0_data_0 <= asUInt(_GEN_0)
    node _GEN_1 = bits(mem_ext_0.R0_data, 15, 8)
    R0_data_1 <= asUInt(_GEN_1)
    node _GEN_2 = bits(mem_ext_0.R0_data, 23, 16)
    R0_data_2 <= asUInt(_GEN_2)
    node _GEN_3 = bits(mem_ext_0.R0_data, 31, 24)
    R0_data_3 <= asUInt(_GEN_3)
    node _GEN_4 = bits(mem_ext_0.R0_data, 39, 32)
    R0_data_4 <= asUInt(_GEN_4)
    node _GEN_5 = bits(mem_ext_0.R0_data, 47, 40)
    R0_data_5 <= asUInt(_GEN_5)
    node _GEN_6 = bits(mem_ext_0.R0_data, 55, 48)
    R0_data_6 <= asUInt(_GEN_6)
    node _GEN_7 = bits(mem_ext_0.R0_data, 63, 56)
    R0_data_7 <= asUInt(_GEN_7)
    mem_ext_0.W0_clk <= W0_clk
    mem_ext_0.W0_en <= W0_en
    mem_ext_0.W0_addr <= W0_addr
    node _GEN_8 = asUInt(W0_data_7)
    node _GEN_9 = asUInt(W0_data_6)
    node _GEN_10 = asUInt(W0_data_5)
    node _GEN_11 = asUInt(W0_data_4)
    skip
    skip
    node _GEN_14 = asUInt(W0_data_3)
    node _GEN_15 = asUInt(W0_data_2)
    node _GEN_16 = asUInt(W0_data_1)
    node _GEN_17 = asUInt(W0_data_0)
    skip
    skip
    node _GEN_20 = cat(cat(_GEN_8, _GEN_9), cat(_GEN_10, _GEN_11))
    node _GEN_21 = cat(cat(_GEN_14, _GEN_15), cat(_GEN_16, _GEN_17))
    mem_ext_0.W0_data <= cat(_GEN_20, _GEN_21)
    node _GEN_22 = asUInt(W0_mask_7)
    node _GEN_23 = asUInt(W0_mask_6)
    node _GEN_24 = asUInt(W0_mask_5)
    node _GEN_25 = asUInt(W0_mask_4)
    skip
    skip
    node _GEN_28 = asUInt(W0_mask_3)
    node _GEN_29 = asUInt(W0_mask_2)
    node _GEN_30 = asUInt(W0_mask_1)
    node _GEN_31 = asUInt(W0_mask_0)
    skip
    skip
    node _GEN_34 = cat(cat(_GEN_22, _GEN_23), cat(_GEN_24, _GEN_25))
    node _GEN_35 = cat(cat(_GEN_28, _GEN_29), cat(_GEN_30, _GEN_31))
    mem_ext_0.W0_mask <= cat(_GEN_34, _GEN_35)
