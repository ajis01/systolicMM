;buildInfoPackage: chisel3, version: 3.2-SNAPSHOT, scalaVersion: 2.12.10, sbtVersion: 1.3.2
circuit ValExec_CompareRecF16_le : 
  module CompareRecFN : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip a : UInt<17>, flip b : UInt<17>, flip signaling : UInt<1>, lt : UInt<1>, eq : UInt<1>, gt : UInt<1>, exceptionFlags : UInt<5>}
    
    clock is invalid
    reset is invalid
    io is invalid
    node _T = bits(io.a, 15, 10) @[rawFloatFromRecFN.scala 50:21]
    node _T_1 = bits(_T, 5, 3) @[rawFloatFromRecFN.scala 51:29]
    node _T_2 = eq(_T_1, UInt<1>("h00")) @[rawFloatFromRecFN.scala 51:54]
    node _T_3 = bits(_T, 5, 4) @[rawFloatFromRecFN.scala 52:29]
    node _T_4 = eq(_T_3, UInt<2>("h03")) @[rawFloatFromRecFN.scala 52:54]
    wire rawA : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<7>, sig : UInt<12>} @[rawFloatFromRecFN.scala 54:23]
    rawA is invalid @[rawFloatFromRecFN.scala 54:23]
    node _T_5 = bits(_T, 3, 3) @[rawFloatFromRecFN.scala 55:41]
    node _T_6 = and(_T_4, _T_5) @[rawFloatFromRecFN.scala 55:33]
    rawA.isNaN <= _T_6 @[rawFloatFromRecFN.scala 55:20]
    node _T_7 = bits(_T, 3, 3) @[rawFloatFromRecFN.scala 56:41]
    node _T_8 = eq(_T_7, UInt<1>("h00")) @[rawFloatFromRecFN.scala 56:36]
    node _T_9 = and(_T_4, _T_8) @[rawFloatFromRecFN.scala 56:33]
    rawA.isInf <= _T_9 @[rawFloatFromRecFN.scala 56:20]
    rawA.isZero <= _T_2 @[rawFloatFromRecFN.scala 57:20]
    node _T_10 = bits(io.a, 16, 16) @[rawFloatFromRecFN.scala 58:25]
    rawA.sign <= _T_10 @[rawFloatFromRecFN.scala 58:20]
    node _T_11 = cvt(_T) @[rawFloatFromRecFN.scala 59:27]
    rawA.sExp <= _T_11 @[rawFloatFromRecFN.scala 59:20]
    node _T_12 = eq(_T_2, UInt<1>("h00")) @[rawFloatFromRecFN.scala 60:39]
    node _T_13 = bits(io.a, 9, 0) @[rawFloatFromRecFN.scala 60:51]
    node _T_14 = cat(UInt<1>("h00"), _T_12) @[Cat.scala 29:58]
    node _T_15 = cat(_T_14, _T_13) @[Cat.scala 29:58]
    rawA.sig <= _T_15 @[rawFloatFromRecFN.scala 60:20]
    node _T_16 = bits(io.b, 15, 10) @[rawFloatFromRecFN.scala 50:21]
    node _T_17 = bits(_T_16, 5, 3) @[rawFloatFromRecFN.scala 51:29]
    node _T_18 = eq(_T_17, UInt<1>("h00")) @[rawFloatFromRecFN.scala 51:54]
    node _T_19 = bits(_T_16, 5, 4) @[rawFloatFromRecFN.scala 52:29]
    node _T_20 = eq(_T_19, UInt<2>("h03")) @[rawFloatFromRecFN.scala 52:54]
    wire rawB : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<7>, sig : UInt<12>} @[rawFloatFromRecFN.scala 54:23]
    rawB is invalid @[rawFloatFromRecFN.scala 54:23]
    node _T_21 = bits(_T_16, 3, 3) @[rawFloatFromRecFN.scala 55:41]
    node _T_22 = and(_T_20, _T_21) @[rawFloatFromRecFN.scala 55:33]
    rawB.isNaN <= _T_22 @[rawFloatFromRecFN.scala 55:20]
    node _T_23 = bits(_T_16, 3, 3) @[rawFloatFromRecFN.scala 56:41]
    node _T_24 = eq(_T_23, UInt<1>("h00")) @[rawFloatFromRecFN.scala 56:36]
    node _T_25 = and(_T_20, _T_24) @[rawFloatFromRecFN.scala 56:33]
    rawB.isInf <= _T_25 @[rawFloatFromRecFN.scala 56:20]
    rawB.isZero <= _T_18 @[rawFloatFromRecFN.scala 57:20]
    node _T_26 = bits(io.b, 16, 16) @[rawFloatFromRecFN.scala 58:25]
    rawB.sign <= _T_26 @[rawFloatFromRecFN.scala 58:20]
    node _T_27 = cvt(_T_16) @[rawFloatFromRecFN.scala 59:27]
    rawB.sExp <= _T_27 @[rawFloatFromRecFN.scala 59:20]
    node _T_28 = eq(_T_18, UInt<1>("h00")) @[rawFloatFromRecFN.scala 60:39]
    node _T_29 = bits(io.b, 9, 0) @[rawFloatFromRecFN.scala 60:51]
    node _T_30 = cat(UInt<1>("h00"), _T_28) @[Cat.scala 29:58]
    node _T_31 = cat(_T_30, _T_29) @[Cat.scala 29:58]
    rawB.sig <= _T_31 @[rawFloatFromRecFN.scala 60:20]
    node _T_32 = eq(rawA.isNaN, UInt<1>("h00")) @[CompareRecFN.scala 57:19]
    node _T_33 = eq(rawB.isNaN, UInt<1>("h00")) @[CompareRecFN.scala 57:35]
    node ordered = and(_T_32, _T_33) @[CompareRecFN.scala 57:32]
    node bothInfs = and(rawA.isInf, rawB.isInf) @[CompareRecFN.scala 58:33]
    node bothZeros = and(rawA.isZero, rawB.isZero) @[CompareRecFN.scala 59:33]
    node eqExps = eq(rawA.sExp, rawB.sExp) @[CompareRecFN.scala 60:29]
    node _T_34 = lt(rawA.sExp, rawB.sExp) @[CompareRecFN.scala 62:20]
    node _T_35 = lt(rawA.sig, rawB.sig) @[CompareRecFN.scala 62:57]
    node _T_36 = and(eqExps, _T_35) @[CompareRecFN.scala 62:44]
    node common_ltMags = or(_T_34, _T_36) @[CompareRecFN.scala 62:33]
    node _T_37 = eq(rawA.sig, rawB.sig) @[CompareRecFN.scala 63:45]
    node common_eqMags = and(eqExps, _T_37) @[CompareRecFN.scala 63:32]
    node _T_38 = eq(bothZeros, UInt<1>("h00")) @[CompareRecFN.scala 66:9]
    node _T_39 = eq(rawB.sign, UInt<1>("h00")) @[CompareRecFN.scala 67:28]
    node _T_40 = and(rawA.sign, _T_39) @[CompareRecFN.scala 67:25]
    node _T_41 = eq(bothInfs, UInt<1>("h00")) @[CompareRecFN.scala 68:19]
    node _T_42 = eq(common_ltMags, UInt<1>("h00")) @[CompareRecFN.scala 69:38]
    node _T_43 = and(rawA.sign, _T_42) @[CompareRecFN.scala 69:35]
    node _T_44 = eq(common_eqMags, UInt<1>("h00")) @[CompareRecFN.scala 69:57]
    node _T_45 = and(_T_43, _T_44) @[CompareRecFN.scala 69:54]
    node _T_46 = eq(rawB.sign, UInt<1>("h00")) @[CompareRecFN.scala 70:29]
    node _T_47 = and(_T_46, common_ltMags) @[CompareRecFN.scala 70:41]
    node _T_48 = or(_T_45, _T_47) @[CompareRecFN.scala 69:74]
    node _T_49 = and(_T_41, _T_48) @[CompareRecFN.scala 68:30]
    node _T_50 = or(_T_40, _T_49) @[CompareRecFN.scala 67:41]
    node ordered_lt = and(_T_38, _T_50) @[CompareRecFN.scala 66:21]
    node _T_51 = eq(rawA.sign, rawB.sign) @[CompareRecFN.scala 72:34]
    node _T_52 = or(bothInfs, common_eqMags) @[CompareRecFN.scala 72:62]
    node _T_53 = and(_T_51, _T_52) @[CompareRecFN.scala 72:49]
    node ordered_eq = or(bothZeros, _T_53) @[CompareRecFN.scala 72:19]
    node _T_54 = bits(rawA.sig, 9, 9) @[common.scala 81:56]
    node _T_55 = eq(_T_54, UInt<1>("h00")) @[common.scala 81:49]
    node _T_56 = and(rawA.isNaN, _T_55) @[common.scala 81:46]
    node _T_57 = bits(rawB.sig, 9, 9) @[common.scala 81:56]
    node _T_58 = eq(_T_57, UInt<1>("h00")) @[common.scala 81:49]
    node _T_59 = and(rawB.isNaN, _T_58) @[common.scala 81:46]
    node _T_60 = or(_T_56, _T_59) @[CompareRecFN.scala 75:32]
    node _T_61 = eq(ordered, UInt<1>("h00")) @[CompareRecFN.scala 76:30]
    node _T_62 = and(io.signaling, _T_61) @[CompareRecFN.scala 76:27]
    node invalid = or(_T_60, _T_62) @[CompareRecFN.scala 75:58]
    node _T_63 = and(ordered, ordered_lt) @[CompareRecFN.scala 78:22]
    io.lt <= _T_63 @[CompareRecFN.scala 78:11]
    node _T_64 = and(ordered, ordered_eq) @[CompareRecFN.scala 79:22]
    io.eq <= _T_64 @[CompareRecFN.scala 79:11]
    node _T_65 = eq(ordered_lt, UInt<1>("h00")) @[CompareRecFN.scala 80:25]
    node _T_66 = and(ordered, _T_65) @[CompareRecFN.scala 80:22]
    node _T_67 = eq(ordered_eq, UInt<1>("h00")) @[CompareRecFN.scala 80:41]
    node _T_68 = and(_T_66, _T_67) @[CompareRecFN.scala 80:38]
    io.gt <= _T_68 @[CompareRecFN.scala 80:11]
    node _T_69 = cat(invalid, UInt<4>("h00")) @[Cat.scala 29:58]
    io.exceptionFlags <= _T_69 @[CompareRecFN.scala 81:23]
    
  module ValExec_CompareRecF16_le : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip a : UInt<16>, flip b : UInt<16>, expected : {flip out : UInt<1>, flip exceptionFlags : UInt<5>}, actual : {out : UInt<1>, exceptionFlags : UInt<5>}, check : UInt<1>, pass : UInt<1>}
    
    clock is invalid
    reset is invalid
    io is invalid
    inst compareRecFN of CompareRecFN @[ValExec_CompareRecFN.scala 94:30]
    compareRecFN.io is invalid
    compareRecFN.clock <= clock
    compareRecFN.reset <= reset
    node _T = bits(io.a, 15, 15) @[rawFloatFromFN.scala 46:22]
    node _T_1 = bits(io.a, 14, 10) @[rawFloatFromFN.scala 47:23]
    node _T_2 = bits(io.a, 9, 0) @[rawFloatFromFN.scala 48:25]
    node _T_3 = eq(_T_1, UInt<1>("h00")) @[rawFloatFromFN.scala 50:34]
    node _T_4 = eq(_T_2, UInt<1>("h00")) @[rawFloatFromFN.scala 51:38]
    node _T_5 = bits(_T_2, 0, 0) @[primitives.scala 92:52]
    node _T_6 = bits(_T_2, 1, 1) @[primitives.scala 92:52]
    node _T_7 = bits(_T_2, 2, 2) @[primitives.scala 92:52]
    node _T_8 = bits(_T_2, 3, 3) @[primitives.scala 92:52]
    node _T_9 = bits(_T_2, 4, 4) @[primitives.scala 92:52]
    node _T_10 = bits(_T_2, 5, 5) @[primitives.scala 92:52]
    node _T_11 = bits(_T_2, 6, 6) @[primitives.scala 92:52]
    node _T_12 = bits(_T_2, 7, 7) @[primitives.scala 92:52]
    node _T_13 = bits(_T_2, 8, 8) @[primitives.scala 92:52]
    node _T_14 = bits(_T_2, 9, 9) @[primitives.scala 92:52]
    node _T_15 = mux(_T_6, UInt<4>("h08"), UInt<4>("h09")) @[Mux.scala 47:69]
    node _T_16 = mux(_T_7, UInt<3>("h07"), _T_15) @[Mux.scala 47:69]
    node _T_17 = mux(_T_8, UInt<3>("h06"), _T_16) @[Mux.scala 47:69]
    node _T_18 = mux(_T_9, UInt<3>("h05"), _T_17) @[Mux.scala 47:69]
    node _T_19 = mux(_T_10, UInt<3>("h04"), _T_18) @[Mux.scala 47:69]
    node _T_20 = mux(_T_11, UInt<2>("h03"), _T_19) @[Mux.scala 47:69]
    node _T_21 = mux(_T_12, UInt<2>("h02"), _T_20) @[Mux.scala 47:69]
    node _T_22 = mux(_T_13, UInt<1>("h01"), _T_21) @[Mux.scala 47:69]
    node _T_23 = mux(_T_14, UInt<1>("h00"), _T_22) @[Mux.scala 47:69]
    node _T_24 = dshl(_T_2, _T_23) @[rawFloatFromFN.scala 54:36]
    node _T_25 = bits(_T_24, 8, 0) @[rawFloatFromFN.scala 54:47]
    node _T_26 = shl(_T_25, 1) @[rawFloatFromFN.scala 54:64]
    node _T_27 = xor(_T_23, UInt<6>("h03f")) @[rawFloatFromFN.scala 57:26]
    node _T_28 = mux(_T_3, _T_27, _T_1) @[rawFloatFromFN.scala 56:16]
    node _T_29 = mux(_T_3, UInt<2>("h02"), UInt<1>("h01")) @[rawFloatFromFN.scala 60:27]
    node _T_30 = or(UInt<5>("h010"), _T_29) @[rawFloatFromFN.scala 60:22]
    node _T_31 = add(_T_28, _T_30) @[rawFloatFromFN.scala 59:15]
    node _T_32 = tail(_T_31, 1) @[rawFloatFromFN.scala 59:15]
    node _T_33 = and(_T_3, _T_4) @[rawFloatFromFN.scala 62:34]
    node _T_34 = bits(_T_32, 5, 4) @[rawFloatFromFN.scala 63:37]
    node _T_35 = eq(_T_34, UInt<2>("h03")) @[rawFloatFromFN.scala 63:62]
    wire _T_36 : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<7>, sig : UInt<12>} @[rawFloatFromFN.scala 65:23]
    _T_36 is invalid @[rawFloatFromFN.scala 65:23]
    node _T_37 = eq(_T_4, UInt<1>("h00")) @[rawFloatFromFN.scala 66:36]
    node _T_38 = and(_T_35, _T_37) @[rawFloatFromFN.scala 66:33]
    _T_36.isNaN <= _T_38 @[rawFloatFromFN.scala 66:20]
    node _T_39 = and(_T_35, _T_4) @[rawFloatFromFN.scala 67:33]
    _T_36.isInf <= _T_39 @[rawFloatFromFN.scala 67:20]
    _T_36.isZero <= _T_33 @[rawFloatFromFN.scala 68:20]
    _T_36.sign <= _T @[rawFloatFromFN.scala 69:20]
    node _T_40 = bits(_T_32, 5, 0) @[rawFloatFromFN.scala 70:34]
    node _T_41 = cvt(_T_40) @[rawFloatFromFN.scala 70:48]
    _T_36.sExp <= _T_41 @[rawFloatFromFN.scala 70:20]
    node _T_42 = eq(_T_33, UInt<1>("h00")) @[rawFloatFromFN.scala 72:29]
    node _T_43 = mux(_T_3, _T_26, _T_2) @[rawFloatFromFN.scala 72:42]
    node _T_44 = cat(UInt<1>("h00"), _T_42) @[Cat.scala 29:58]
    node _T_45 = cat(_T_44, _T_43) @[Cat.scala 29:58]
    _T_36.sig <= _T_45 @[rawFloatFromFN.scala 71:17]
    node _T_46 = bits(_T_36.sExp, 5, 3) @[recFNFromFN.scala 48:53]
    node _T_47 = mux(_T_36.isZero, UInt<3>("h00"), _T_46) @[recFNFromFN.scala 48:16]
    node _T_48 = mux(_T_36.isNaN, UInt<1>("h01"), UInt<1>("h00")) @[recFNFromFN.scala 49:20]
    node _T_49 = or(_T_47, _T_48) @[recFNFromFN.scala 48:79]
    node _T_50 = bits(_T_36.sExp, 2, 0) @[recFNFromFN.scala 50:23]
    node _T_51 = bits(_T_36.sig, 9, 0) @[recFNFromFN.scala 51:22]
    node _T_52 = cat(_T_50, _T_51) @[Cat.scala 29:58]
    node _T_53 = cat(_T_36.sign, _T_49) @[Cat.scala 29:58]
    node _T_54 = cat(_T_53, _T_52) @[Cat.scala 29:58]
    compareRecFN.io.a <= _T_54 @[ValExec_CompareRecFN.scala 95:23]
    node _T_55 = bits(io.b, 15, 15) @[rawFloatFromFN.scala 46:22]
    node _T_56 = bits(io.b, 14, 10) @[rawFloatFromFN.scala 47:23]
    node _T_57 = bits(io.b, 9, 0) @[rawFloatFromFN.scala 48:25]
    node _T_58 = eq(_T_56, UInt<1>("h00")) @[rawFloatFromFN.scala 50:34]
    node _T_59 = eq(_T_57, UInt<1>("h00")) @[rawFloatFromFN.scala 51:38]
    node _T_60 = bits(_T_57, 0, 0) @[primitives.scala 92:52]
    node _T_61 = bits(_T_57, 1, 1) @[primitives.scala 92:52]
    node _T_62 = bits(_T_57, 2, 2) @[primitives.scala 92:52]
    node _T_63 = bits(_T_57, 3, 3) @[primitives.scala 92:52]
    node _T_64 = bits(_T_57, 4, 4) @[primitives.scala 92:52]
    node _T_65 = bits(_T_57, 5, 5) @[primitives.scala 92:52]
    node _T_66 = bits(_T_57, 6, 6) @[primitives.scala 92:52]
    node _T_67 = bits(_T_57, 7, 7) @[primitives.scala 92:52]
    node _T_68 = bits(_T_57, 8, 8) @[primitives.scala 92:52]
    node _T_69 = bits(_T_57, 9, 9) @[primitives.scala 92:52]
    node _T_70 = mux(_T_61, UInt<4>("h08"), UInt<4>("h09")) @[Mux.scala 47:69]
    node _T_71 = mux(_T_62, UInt<3>("h07"), _T_70) @[Mux.scala 47:69]
    node _T_72 = mux(_T_63, UInt<3>("h06"), _T_71) @[Mux.scala 47:69]
    node _T_73 = mux(_T_64, UInt<3>("h05"), _T_72) @[Mux.scala 47:69]
    node _T_74 = mux(_T_65, UInt<3>("h04"), _T_73) @[Mux.scala 47:69]
    node _T_75 = mux(_T_66, UInt<2>("h03"), _T_74) @[Mux.scala 47:69]
    node _T_76 = mux(_T_67, UInt<2>("h02"), _T_75) @[Mux.scala 47:69]
    node _T_77 = mux(_T_68, UInt<1>("h01"), _T_76) @[Mux.scala 47:69]
    node _T_78 = mux(_T_69, UInt<1>("h00"), _T_77) @[Mux.scala 47:69]
    node _T_79 = dshl(_T_57, _T_78) @[rawFloatFromFN.scala 54:36]
    node _T_80 = bits(_T_79, 8, 0) @[rawFloatFromFN.scala 54:47]
    node _T_81 = shl(_T_80, 1) @[rawFloatFromFN.scala 54:64]
    node _T_82 = xor(_T_78, UInt<6>("h03f")) @[rawFloatFromFN.scala 57:26]
    node _T_83 = mux(_T_58, _T_82, _T_56) @[rawFloatFromFN.scala 56:16]
    node _T_84 = mux(_T_58, UInt<2>("h02"), UInt<1>("h01")) @[rawFloatFromFN.scala 60:27]
    node _T_85 = or(UInt<5>("h010"), _T_84) @[rawFloatFromFN.scala 60:22]
    node _T_86 = add(_T_83, _T_85) @[rawFloatFromFN.scala 59:15]
    node _T_87 = tail(_T_86, 1) @[rawFloatFromFN.scala 59:15]
    node _T_88 = and(_T_58, _T_59) @[rawFloatFromFN.scala 62:34]
    node _T_89 = bits(_T_87, 5, 4) @[rawFloatFromFN.scala 63:37]
    node _T_90 = eq(_T_89, UInt<2>("h03")) @[rawFloatFromFN.scala 63:62]
    wire _T_91 : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<7>, sig : UInt<12>} @[rawFloatFromFN.scala 65:23]
    _T_91 is invalid @[rawFloatFromFN.scala 65:23]
    node _T_92 = eq(_T_59, UInt<1>("h00")) @[rawFloatFromFN.scala 66:36]
    node _T_93 = and(_T_90, _T_92) @[rawFloatFromFN.scala 66:33]
    _T_91.isNaN <= _T_93 @[rawFloatFromFN.scala 66:20]
    node _T_94 = and(_T_90, _T_59) @[rawFloatFromFN.scala 67:33]
    _T_91.isInf <= _T_94 @[rawFloatFromFN.scala 67:20]
    _T_91.isZero <= _T_88 @[rawFloatFromFN.scala 68:20]
    _T_91.sign <= _T_55 @[rawFloatFromFN.scala 69:20]
    node _T_95 = bits(_T_87, 5, 0) @[rawFloatFromFN.scala 70:34]
    node _T_96 = cvt(_T_95) @[rawFloatFromFN.scala 70:48]
    _T_91.sExp <= _T_96 @[rawFloatFromFN.scala 70:20]
    node _T_97 = eq(_T_88, UInt<1>("h00")) @[rawFloatFromFN.scala 72:29]
    node _T_98 = mux(_T_58, _T_81, _T_57) @[rawFloatFromFN.scala 72:42]
    node _T_99 = cat(UInt<1>("h00"), _T_97) @[Cat.scala 29:58]
    node _T_100 = cat(_T_99, _T_98) @[Cat.scala 29:58]
    _T_91.sig <= _T_100 @[rawFloatFromFN.scala 71:17]
    node _T_101 = bits(_T_91.sExp, 5, 3) @[recFNFromFN.scala 48:53]
    node _T_102 = mux(_T_91.isZero, UInt<3>("h00"), _T_101) @[recFNFromFN.scala 48:16]
    node _T_103 = mux(_T_91.isNaN, UInt<1>("h01"), UInt<1>("h00")) @[recFNFromFN.scala 49:20]
    node _T_104 = or(_T_102, _T_103) @[recFNFromFN.scala 48:79]
    node _T_105 = bits(_T_91.sExp, 2, 0) @[recFNFromFN.scala 50:23]
    node _T_106 = bits(_T_91.sig, 9, 0) @[recFNFromFN.scala 51:22]
    node _T_107 = cat(_T_105, _T_106) @[Cat.scala 29:58]
    node _T_108 = cat(_T_91.sign, _T_104) @[Cat.scala 29:58]
    node _T_109 = cat(_T_108, _T_107) @[Cat.scala 29:58]
    compareRecFN.io.b <= _T_109 @[ValExec_CompareRecFN.scala 96:23]
    compareRecFN.io.signaling <= UInt<1>("h01") @[ValExec_CompareRecFN.scala 97:31]
    node _T_110 = or(compareRecFN.io.lt, compareRecFN.io.eq) @[ValExec_CompareRecFN.scala 99:41]
    io.actual.out <= _T_110 @[ValExec_CompareRecFN.scala 99:19]
    io.actual.exceptionFlags <= compareRecFN.io.exceptionFlags @[ValExec_CompareRecFN.scala 100:30]
    io.check <= UInt<1>("h01") @[ValExec_CompareRecFN.scala 102:14]
    node _T_111 = eq(io.actual.out, io.expected.out) @[ValExec_CompareRecFN.scala 104:24]
    node _T_112 = eq(io.actual.exceptionFlags, io.expected.exceptionFlags) @[ValExec_CompareRecFN.scala 105:35]
    node _T_113 = and(_T_111, _T_112) @[ValExec_CompareRecFN.scala 104:45]
    io.pass <= _T_113 @[ValExec_CompareRecFN.scala 103:13]
    
