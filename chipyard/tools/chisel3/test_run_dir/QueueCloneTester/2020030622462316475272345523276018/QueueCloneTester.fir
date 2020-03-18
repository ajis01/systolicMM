;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit QueueCloneTester : 
  module Queue : 
    input clock : Clock
    input reset : Reset
    output io : {flip enq : {flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : {flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<2>}
    
    cmem _T : UInt<32>[2] @[Decoupled.scala 209:24]
    reg value : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Counter.scala 29:33]
    reg value_1 : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Counter.scala 29:33]
    reg _T_1 : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Decoupled.scala 212:35]
    node _T_2 = eq(value, value_1) @[Decoupled.scala 214:41]
    node _T_3 = eq(_T_1, UInt<1>("h00")) @[Decoupled.scala 215:36]
    node _T_4 = and(_T_2, _T_3) @[Decoupled.scala 215:33]
    node _T_5 = and(_T_2, _T_1) @[Decoupled.scala 216:32]
    node _T_6 = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 40:37]
    wire _T_7 : UInt<1>
    _T_7 <= _T_6
    node _T_8 = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 40:37]
    wire _T_9 : UInt<1>
    _T_9 <= _T_8
    when _T_7 : @[Decoupled.scala 220:17]
      infer mport _T_10 = _T[value], clock @[Decoupled.scala 221:8]
      _T_10 <= io.enq.bits @[Decoupled.scala 221:24]
      node wrap = eq(value, UInt<1>("h01")) @[Counter.scala 37:24]
      node _T_11 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_12 = tail(_T_11, 1) @[Counter.scala 38:22]
      value <= _T_12 @[Counter.scala 38:13]
      skip @[Decoupled.scala 220:17]
    when _T_9 : @[Decoupled.scala 224:17]
      node wrap_1 = eq(value_1, UInt<1>("h01")) @[Counter.scala 37:24]
      node _T_13 = add(value_1, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_14 = tail(_T_13, 1) @[Counter.scala 38:22]
      value_1 <= _T_14 @[Counter.scala 38:13]
      skip @[Decoupled.scala 224:17]
    node _T_15 = neq(_T_7, _T_9) @[Decoupled.scala 227:16]
    when _T_15 : @[Decoupled.scala 227:28]
      _T_1 <= _T_7 @[Decoupled.scala 228:16]
      skip @[Decoupled.scala 227:28]
    node _T_16 = eq(_T_4, UInt<1>("h00")) @[Decoupled.scala 231:19]
    io.deq.valid <= _T_16 @[Decoupled.scala 231:16]
    node _T_17 = eq(_T_5, UInt<1>("h00")) @[Decoupled.scala 232:19]
    io.enq.ready <= _T_17 @[Decoupled.scala 232:16]
    infer mport _T_18 = _T[value_1], clock @[Decoupled.scala 233:21]
    io.deq.bits <= _T_18 @[Decoupled.scala 233:15]
    node _T_19 = sub(value, value_1) @[Decoupled.scala 248:40]
    node _T_20 = tail(_T_19, 1) @[Decoupled.scala 248:40]
    node _T_21 = and(_T_1, _T_2) @[Decoupled.scala 250:32]
    node _T_22 = mux(_T_21, UInt<2>("h02"), UInt<1>("h00")) @[Decoupled.scala 250:20]
    node _T_23 = or(_T_22, _T_20) @[Decoupled.scala 250:62]
    io.count <= _T_23 @[Decoupled.scala 250:14]
    
  module QueueClone : 
    input clock : Clock
    input reset : Reset
    output io : {flip enq : {flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : {flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<3>}
    
    inst Queue of Queue @[CloneModuleSpec.scala 36:20]
    Queue.clock <= clock
    Queue.reset <= reset
    inst _T of Queue @[CloneModuleSpec.scala 37:36]
    _T.clock <= clock @[CloneModuleSpec.scala 37:36]
    _T.reset <= reset @[CloneModuleSpec.scala 37:36]
    Queue.io.enq.bits <= io.enq.bits @[CloneModuleSpec.scala 38:15]
    Queue.io.enq.valid <= io.enq.valid @[CloneModuleSpec.scala 38:15]
    io.enq.ready <= Queue.io.enq.ready @[CloneModuleSpec.scala 38:15]
    _T.io.enq.bits <= Queue.io.deq.bits @[CloneModuleSpec.scala 40:22]
    _T.io.enq.valid <= Queue.io.deq.valid @[CloneModuleSpec.scala 40:22]
    Queue.io.deq.ready <= _T.io.enq.ready @[CloneModuleSpec.scala 40:22]
    io.deq.bits <= _T.io.deq.bits @[CloneModuleSpec.scala 41:12]
    io.deq.valid <= _T.io.deq.valid @[CloneModuleSpec.scala 41:12]
    _T.io.deq.ready <= io.deq.ready @[CloneModuleSpec.scala 41:12]
    node _T_1 = add(Queue.io.count, _T.io.count) @[CloneModuleSpec.scala 42:29]
    node _T_2 = tail(_T_1, 1) @[CloneModuleSpec.scala 42:29]
    io.count <= _T_2 @[CloneModuleSpec.scala 42:14]
    
  module QueueCloneTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst dut of QueueClone @[CloneModuleSpec.scala 47:19]
    dut.clock <= clock
    dut.reset <= reset
    node _T = and(dut.io.enq.ready, dut.io.enq.valid) @[Decoupled.scala 40:37]
    reg start : UInt<1>, clock with : (reset => (reset, UInt<1>("h01"))) @[CloneModuleSpec.scala 48:22]
    start <= _T @[CloneModuleSpec.scala 48:22]
    reg accept : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[CloneModuleSpec.scala 49:23]
    accept <= dut.io.deq.valid @[CloneModuleSpec.scala 49:23]
    dut.io.enq.bits <= UInt<7>("h063") @[CloneModuleSpec.scala 50:19]
    dut.io.enq.valid <= start @[CloneModuleSpec.scala 51:20]
    dut.io.deq.ready <= accept @[CloneModuleSpec.scala 52:20]
    node _T_1 = and(dut.io.deq.ready, dut.io.deq.valid) @[Decoupled.scala 40:37]
    when _T_1 : @[CloneModuleSpec.scala 53:26]
      node _T_2 = eq(dut.io.deq.bits, UInt<7>("h063")) @[CloneModuleSpec.scala 54:28]
      node _T_3 = bits(reset, 0, 0) @[CloneModuleSpec.scala 54:11]
      node _T_4 = or(_T_2, _T_3) @[CloneModuleSpec.scala 54:11]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[CloneModuleSpec.scala 54:11]
      when _T_5 : @[CloneModuleSpec.scala 54:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at CloneModuleSpec.scala:54 assert(dut.io.deq.bits === x.U)\n") @[CloneModuleSpec.scala 54:11]
        stop(clock, UInt<1>(1), 1) @[CloneModuleSpec.scala 54:11]
        skip @[CloneModuleSpec.scala 54:11]
      node _T_6 = bits(reset, 0, 0) @[CloneModuleSpec.scala 55:9]
      node _T_7 = eq(_T_6, UInt<1>("h00")) @[CloneModuleSpec.scala 55:9]
      when _T_7 : @[CloneModuleSpec.scala 55:9]
        stop(clock, UInt<1>(1), 0) @[CloneModuleSpec.scala 55:9]
        skip @[CloneModuleSpec.scala 55:9]
      skip @[CloneModuleSpec.scala 53:26]
    
