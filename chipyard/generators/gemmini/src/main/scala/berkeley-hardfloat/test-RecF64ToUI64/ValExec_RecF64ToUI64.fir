;buildInfoPackage: chisel3, version: 3.2-SNAPSHOT, scalaVersion: 2.12.10, sbtVersion: 1.3.2
circuit ValExec_RecF64ToUI64 : 
  module RecFNToIN : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<65>, flip roundingMode : UInt<3>, flip signedOut : UInt<1>, out : UInt<64>, intExceptionFlags : UInt<3>}
    
    clock is invalid
    reset is invalid
    io is invalid
    node _T = bits(io.in, 63, 52) @[rawFloatFromRecFN.scala 50:21]
    node _T_1 = bits(_T, 11, 9) @[rawFloatFromRecFN.scala 51:29]
    node _T_2 = eq(_T_1, UInt<1>("h00")) @[rawFloatFromRecFN.scala 51:54]
    node _T_3 = bits(_T, 11, 10) @[rawFloatFromRecFN.scala 52:29]
    node _T_4 = eq(_T_3, UInt<2>("h03")) @[rawFloatFromRecFN.scala 52:54]
    wire rawIn : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<13>, sig : UInt<54>} @[rawFloatFromRecFN.scala 54:23]
    rawIn is invalid @[rawFloatFromRecFN.scala 54:23]
    node _T_5 = bits(_T, 9, 9) @[rawFloatFromRecFN.scala 55:41]
    node _T_6 = and(_T_4, _T_5) @[rawFloatFromRecFN.scala 55:33]
    rawIn.isNaN <= _T_6 @[rawFloatFromRecFN.scala 55:20]
    node _T_7 = bits(_T, 9, 9) @[rawFloatFromRecFN.scala 56:41]
    node _T_8 = eq(_T_7, UInt<1>("h00")) @[rawFloatFromRecFN.scala 56:36]
    node _T_9 = and(_T_4, _T_8) @[rawFloatFromRecFN.scala 56:33]
    rawIn.isInf <= _T_9 @[rawFloatFromRecFN.scala 56:20]
    rawIn.isZero <= _T_2 @[rawFloatFromRecFN.scala 57:20]
    node _T_10 = bits(io.in, 64, 64) @[rawFloatFromRecFN.scala 58:25]
    rawIn.sign <= _T_10 @[rawFloatFromRecFN.scala 58:20]
    node _T_11 = cvt(_T) @[rawFloatFromRecFN.scala 59:27]
    rawIn.sExp <= _T_11 @[rawFloatFromRecFN.scala 59:20]
    node _T_12 = eq(_T_2, UInt<1>("h00")) @[rawFloatFromRecFN.scala 60:39]
    node _T_13 = bits(io.in, 51, 0) @[rawFloatFromRecFN.scala 60:51]
    node _T_14 = cat(UInt<1>("h00"), _T_12) @[Cat.scala 29:58]
    node _T_15 = cat(_T_14, _T_13) @[Cat.scala 29:58]
    rawIn.sig <= _T_15 @[rawFloatFromRecFN.scala 60:20]
    node magGeOne = bits(rawIn.sExp, 11, 11) @[RecFNToIN.scala 58:30]
    node posExp = bits(rawIn.sExp, 10, 0) @[RecFNToIN.scala 59:28]
    node _T_16 = eq(magGeOne, UInt<1>("h00")) @[RecFNToIN.scala 60:27]
    node _T_17 = eq(posExp, UInt<11>("h07ff")) @[RecFNToIN.scala 60:47]
    node magJustBelowOne = and(_T_16, _T_17) @[RecFNToIN.scala 60:37]
    node roundingMode_near_even = eq(io.roundingMode, UInt<3>("h00")) @[RecFNToIN.scala 64:53]
    node roundingMode_minMag = eq(io.roundingMode, UInt<3>("h01")) @[RecFNToIN.scala 65:53]
    node roundingMode_min = eq(io.roundingMode, UInt<3>("h02")) @[RecFNToIN.scala 66:53]
    node roundingMode_max = eq(io.roundingMode, UInt<3>("h03")) @[RecFNToIN.scala 67:53]
    node roundingMode_near_maxMag = eq(io.roundingMode, UInt<3>("h04")) @[RecFNToIN.scala 68:53]
    node roundingMode_odd = eq(io.roundingMode, UInt<3>("h06")) @[RecFNToIN.scala 69:53]
    node _T_18 = bits(rawIn.sig, 51, 0) @[RecFNToIN.scala 80:32]
    node _T_19 = cat(magGeOne, _T_18) @[Cat.scala 29:58]
    node _T_20 = bits(rawIn.sExp, 5, 0) @[RecFNToIN.scala 82:27]
    node _T_21 = mux(magGeOne, _T_20, UInt<1>("h00")) @[RecFNToIN.scala 81:16]
    node shiftedSig = dshl(_T_19, _T_21) @[RecFNToIN.scala 80:50]
    node _T_22 = shr(shiftedSig, 51) @[RecFNToIN.scala 86:23]
    node _T_23 = bits(shiftedSig, 50, 0) @[RecFNToIN.scala 86:51]
    node _T_24 = neq(_T_23, UInt<1>("h00")) @[RecFNToIN.scala 86:69]
    node alignedSig = cat(_T_22, _T_24) @[Cat.scala 29:58]
    node _T_25 = shr(alignedSig, 2) @[RecFNToIN.scala 87:54]
    node unroundedInt = or(UInt<64>("h00"), _T_25) @[RecFNToIN.scala 87:42]
    node _T_26 = bits(alignedSig, 1, 0) @[RecFNToIN.scala 89:50]
    node _T_27 = neq(_T_26, UInt<1>("h00")) @[RecFNToIN.scala 89:57]
    node _T_28 = eq(rawIn.isZero, UInt<1>("h00")) @[RecFNToIN.scala 89:62]
    node common_inexact = mux(magGeOne, _T_27, _T_28) @[RecFNToIN.scala 89:29]
    node _T_29 = bits(alignedSig, 2, 1) @[RecFNToIN.scala 91:39]
    node _T_30 = eq(_T_29, UInt<2>("h03")) @[RecFNToIN.scala 91:46]
    node _T_31 = bits(alignedSig, 1, 0) @[RecFNToIN.scala 91:64]
    node _T_32 = eq(_T_31, UInt<2>("h03")) @[RecFNToIN.scala 91:71]
    node _T_33 = or(_T_30, _T_32) @[RecFNToIN.scala 91:51]
    node _T_34 = and(magGeOne, _T_33) @[RecFNToIN.scala 91:25]
    node _T_35 = bits(alignedSig, 1, 0) @[RecFNToIN.scala 92:39]
    node _T_36 = neq(_T_35, UInt<1>("h00")) @[RecFNToIN.scala 92:46]
    node _T_37 = and(magJustBelowOne, _T_36) @[RecFNToIN.scala 92:26]
    node roundIncr_near_even = or(_T_34, _T_37) @[RecFNToIN.scala 91:78]
    node _T_38 = bits(alignedSig, 1, 1) @[RecFNToIN.scala 93:56]
    node _T_39 = and(magGeOne, _T_38) @[RecFNToIN.scala 93:43]
    node roundIncr_near_maxMag = or(_T_39, magJustBelowOne) @[RecFNToIN.scala 93:61]
    node _T_40 = and(roundingMode_near_even, roundIncr_near_even) @[RecFNToIN.scala 95:35]
    node _T_41 = and(roundingMode_near_maxMag, roundIncr_near_maxMag) @[RecFNToIN.scala 96:35]
    node _T_42 = or(_T_40, _T_41) @[RecFNToIN.scala 95:61]
    node _T_43 = or(roundingMode_min, roundingMode_odd) @[RecFNToIN.scala 97:28]
    node _T_44 = and(rawIn.sign, common_inexact) @[RecFNToIN.scala 98:26]
    node _T_45 = and(_T_43, _T_44) @[RecFNToIN.scala 97:49]
    node _T_46 = or(_T_42, _T_45) @[RecFNToIN.scala 96:61]
    node _T_47 = eq(rawIn.sign, UInt<1>("h00")) @[RecFNToIN.scala 99:31]
    node _T_48 = and(_T_47, common_inexact) @[RecFNToIN.scala 99:43]
    node _T_49 = and(roundingMode_max, _T_48) @[RecFNToIN.scala 99:27]
    node roundIncr = or(_T_46, _T_49) @[RecFNToIN.scala 98:46]
    node _T_50 = not(unroundedInt) @[RecFNToIN.scala 100:45]
    node complUnroundedInt = mux(rawIn.sign, _T_50, unroundedInt) @[RecFNToIN.scala 100:32]
    node _T_51 = xor(roundIncr, rawIn.sign) @[RecFNToIN.scala 102:23]
    node _T_52 = add(complUnroundedInt, UInt<1>("h01")) @[RecFNToIN.scala 103:31]
    node _T_53 = tail(_T_52, 1) @[RecFNToIN.scala 103:31]
    node _T_54 = mux(_T_51, _T_53, complUnroundedInt) @[RecFNToIN.scala 102:12]
    node _T_55 = and(roundingMode_odd, common_inexact) @[RecFNToIN.scala 105:31]
    node roundedInt = or(_T_54, _T_55) @[RecFNToIN.scala 105:11]
    node magGeOne_atOverflowEdge = eq(posExp, UInt<6>("h03f")) @[RecFNToIN.scala 107:43]
    node _T_56 = bits(unroundedInt, 61, 0) @[RecFNToIN.scala 110:38]
    node _T_57 = eq(_T_56, UInt<62>("h03fffffffffffffff")) @[RecFNToIN.scala 110:56]
    node roundCarryBut2 = and(_T_57, roundIncr) @[RecFNToIN.scala 110:61]
    node _T_58 = geq(posExp, UInt<7>("h040")) @[RecFNToIN.scala 113:21]
    node _T_59 = bits(unroundedInt, 62, 0) @[RecFNToIN.scala 117:42]
    node _T_60 = neq(_T_59, UInt<1>("h00")) @[RecFNToIN.scala 117:60]
    node _T_61 = or(_T_60, roundIncr) @[RecFNToIN.scala 117:64]
    node _T_62 = and(magGeOne_atOverflowEdge, _T_61) @[RecFNToIN.scala 116:49]
    node _T_63 = eq(posExp, UInt<6>("h03e")) @[RecFNToIN.scala 119:38]
    node _T_64 = and(_T_63, roundCarryBut2) @[RecFNToIN.scala 119:62]
    node _T_65 = or(magGeOne_atOverflowEdge, _T_64) @[RecFNToIN.scala 118:49]
    node _T_66 = mux(rawIn.sign, _T_62, _T_65) @[RecFNToIN.scala 115:24]
    node _T_67 = bits(unroundedInt, 62, 62) @[RecFNToIN.scala 123:42]
    node _T_68 = and(magGeOne_atOverflowEdge, _T_67) @[RecFNToIN.scala 122:50]
    node _T_69 = and(_T_68, roundCarryBut2) @[RecFNToIN.scala 123:57]
    node _T_70 = or(rawIn.sign, _T_69) @[RecFNToIN.scala 121:32]
    node _T_71 = mux(io.signedOut, _T_66, _T_70) @[RecFNToIN.scala 114:20]
    node _T_72 = or(_T_58, _T_71) @[RecFNToIN.scala 113:40]
    node _T_73 = eq(io.signedOut, UInt<1>("h00")) @[RecFNToIN.scala 125:13]
    node _T_74 = and(_T_73, rawIn.sign) @[RecFNToIN.scala 125:27]
    node _T_75 = and(_T_74, roundIncr) @[RecFNToIN.scala 125:41]
    node common_overflow = mux(magGeOne, _T_72, _T_75) @[RecFNToIN.scala 112:12]
    node invalidExc = or(rawIn.isNaN, rawIn.isInf) @[RecFNToIN.scala 130:34]
    node _T_76 = eq(invalidExc, UInt<1>("h00")) @[RecFNToIN.scala 131:20]
    node overflow = and(_T_76, common_overflow) @[RecFNToIN.scala 131:32]
    node _T_77 = eq(invalidExc, UInt<1>("h00")) @[RecFNToIN.scala 132:20]
    node _T_78 = eq(common_overflow, UInt<1>("h00")) @[RecFNToIN.scala 132:35]
    node _T_79 = and(_T_77, _T_78) @[RecFNToIN.scala 132:32]
    node inexact = and(_T_79, common_inexact) @[RecFNToIN.scala 132:52]
    node _T_80 = eq(rawIn.isNaN, UInt<1>("h00")) @[RecFNToIN.scala 134:19]
    node excSign = and(_T_80, rawIn.sign) @[RecFNToIN.scala 134:32]
    node _T_81 = eq(io.signedOut, excSign) @[RecFNToIN.scala 136:27]
    node _T_82 = mux(_T_81, UInt<64>("h08000000000000000"), UInt<1>("h00")) @[RecFNToIN.scala 136:12]
    node _T_83 = eq(excSign, UInt<1>("h00")) @[RecFNToIN.scala 140:13]
    node _T_84 = mux(_T_83, UInt<63>("h07fffffffffffffff"), UInt<1>("h00")) @[RecFNToIN.scala 140:12]
    node excOut = or(_T_82, _T_84) @[RecFNToIN.scala 139:11]
    node _T_85 = or(invalidExc, common_overflow) @[RecFNToIN.scala 142:30]
    node _T_86 = mux(_T_85, excOut, roundedInt) @[RecFNToIN.scala 142:18]
    io.out <= _T_86 @[RecFNToIN.scala 142:12]
    node _T_87 = cat(invalidExc, overflow) @[Cat.scala 29:58]
    node _T_88 = cat(_T_87, inexact) @[Cat.scala 29:58]
    io.intExceptionFlags <= _T_88 @[RecFNToIN.scala 143:26]
    
  module ValExec_RecF64ToUI64 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<64>, flip roundingMode : UInt<3>, expected : {flip out : UInt<64>, flip exceptionFlags : UInt<5>}, actual : {out : UInt<64>, exceptionFlags : UInt<5>}, check : UInt<1>, pass : UInt<1>}
    
    clock is invalid
    reset is invalid
    io is invalid
    inst recFNToIN of RecFNToIN @[ValExec_RecFNToIN.scala 64:27]
    recFNToIN.io is invalid
    recFNToIN.clock <= clock
    recFNToIN.reset <= reset
    node _T = bits(io.in, 63, 63) @[rawFloatFromFN.scala 46:22]
    node _T_1 = bits(io.in, 62, 52) @[rawFloatFromFN.scala 47:23]
    node _T_2 = bits(io.in, 51, 0) @[rawFloatFromFN.scala 48:25]
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
    node _T_15 = bits(_T_2, 10, 10) @[primitives.scala 92:52]
    node _T_16 = bits(_T_2, 11, 11) @[primitives.scala 92:52]
    node _T_17 = bits(_T_2, 12, 12) @[primitives.scala 92:52]
    node _T_18 = bits(_T_2, 13, 13) @[primitives.scala 92:52]
    node _T_19 = bits(_T_2, 14, 14) @[primitives.scala 92:52]
    node _T_20 = bits(_T_2, 15, 15) @[primitives.scala 92:52]
    node _T_21 = bits(_T_2, 16, 16) @[primitives.scala 92:52]
    node _T_22 = bits(_T_2, 17, 17) @[primitives.scala 92:52]
    node _T_23 = bits(_T_2, 18, 18) @[primitives.scala 92:52]
    node _T_24 = bits(_T_2, 19, 19) @[primitives.scala 92:52]
    node _T_25 = bits(_T_2, 20, 20) @[primitives.scala 92:52]
    node _T_26 = bits(_T_2, 21, 21) @[primitives.scala 92:52]
    node _T_27 = bits(_T_2, 22, 22) @[primitives.scala 92:52]
    node _T_28 = bits(_T_2, 23, 23) @[primitives.scala 92:52]
    node _T_29 = bits(_T_2, 24, 24) @[primitives.scala 92:52]
    node _T_30 = bits(_T_2, 25, 25) @[primitives.scala 92:52]
    node _T_31 = bits(_T_2, 26, 26) @[primitives.scala 92:52]
    node _T_32 = bits(_T_2, 27, 27) @[primitives.scala 92:52]
    node _T_33 = bits(_T_2, 28, 28) @[primitives.scala 92:52]
    node _T_34 = bits(_T_2, 29, 29) @[primitives.scala 92:52]
    node _T_35 = bits(_T_2, 30, 30) @[primitives.scala 92:52]
    node _T_36 = bits(_T_2, 31, 31) @[primitives.scala 92:52]
    node _T_37 = bits(_T_2, 32, 32) @[primitives.scala 92:52]
    node _T_38 = bits(_T_2, 33, 33) @[primitives.scala 92:52]
    node _T_39 = bits(_T_2, 34, 34) @[primitives.scala 92:52]
    node _T_40 = bits(_T_2, 35, 35) @[primitives.scala 92:52]
    node _T_41 = bits(_T_2, 36, 36) @[primitives.scala 92:52]
    node _T_42 = bits(_T_2, 37, 37) @[primitives.scala 92:52]
    node _T_43 = bits(_T_2, 38, 38) @[primitives.scala 92:52]
    node _T_44 = bits(_T_2, 39, 39) @[primitives.scala 92:52]
    node _T_45 = bits(_T_2, 40, 40) @[primitives.scala 92:52]
    node _T_46 = bits(_T_2, 41, 41) @[primitives.scala 92:52]
    node _T_47 = bits(_T_2, 42, 42) @[primitives.scala 92:52]
    node _T_48 = bits(_T_2, 43, 43) @[primitives.scala 92:52]
    node _T_49 = bits(_T_2, 44, 44) @[primitives.scala 92:52]
    node _T_50 = bits(_T_2, 45, 45) @[primitives.scala 92:52]
    node _T_51 = bits(_T_2, 46, 46) @[primitives.scala 92:52]
    node _T_52 = bits(_T_2, 47, 47) @[primitives.scala 92:52]
    node _T_53 = bits(_T_2, 48, 48) @[primitives.scala 92:52]
    node _T_54 = bits(_T_2, 49, 49) @[primitives.scala 92:52]
    node _T_55 = bits(_T_2, 50, 50) @[primitives.scala 92:52]
    node _T_56 = bits(_T_2, 51, 51) @[primitives.scala 92:52]
    node _T_57 = mux(_T_6, UInt<6>("h032"), UInt<6>("h033")) @[Mux.scala 47:69]
    node _T_58 = mux(_T_7, UInt<6>("h031"), _T_57) @[Mux.scala 47:69]
    node _T_59 = mux(_T_8, UInt<6>("h030"), _T_58) @[Mux.scala 47:69]
    node _T_60 = mux(_T_9, UInt<6>("h02f"), _T_59) @[Mux.scala 47:69]
    node _T_61 = mux(_T_10, UInt<6>("h02e"), _T_60) @[Mux.scala 47:69]
    node _T_62 = mux(_T_11, UInt<6>("h02d"), _T_61) @[Mux.scala 47:69]
    node _T_63 = mux(_T_12, UInt<6>("h02c"), _T_62) @[Mux.scala 47:69]
    node _T_64 = mux(_T_13, UInt<6>("h02b"), _T_63) @[Mux.scala 47:69]
    node _T_65 = mux(_T_14, UInt<6>("h02a"), _T_64) @[Mux.scala 47:69]
    node _T_66 = mux(_T_15, UInt<6>("h029"), _T_65) @[Mux.scala 47:69]
    node _T_67 = mux(_T_16, UInt<6>("h028"), _T_66) @[Mux.scala 47:69]
    node _T_68 = mux(_T_17, UInt<6>("h027"), _T_67) @[Mux.scala 47:69]
    node _T_69 = mux(_T_18, UInt<6>("h026"), _T_68) @[Mux.scala 47:69]
    node _T_70 = mux(_T_19, UInt<6>("h025"), _T_69) @[Mux.scala 47:69]
    node _T_71 = mux(_T_20, UInt<6>("h024"), _T_70) @[Mux.scala 47:69]
    node _T_72 = mux(_T_21, UInt<6>("h023"), _T_71) @[Mux.scala 47:69]
    node _T_73 = mux(_T_22, UInt<6>("h022"), _T_72) @[Mux.scala 47:69]
    node _T_74 = mux(_T_23, UInt<6>("h021"), _T_73) @[Mux.scala 47:69]
    node _T_75 = mux(_T_24, UInt<6>("h020"), _T_74) @[Mux.scala 47:69]
    node _T_76 = mux(_T_25, UInt<5>("h01f"), _T_75) @[Mux.scala 47:69]
    node _T_77 = mux(_T_26, UInt<5>("h01e"), _T_76) @[Mux.scala 47:69]
    node _T_78 = mux(_T_27, UInt<5>("h01d"), _T_77) @[Mux.scala 47:69]
    node _T_79 = mux(_T_28, UInt<5>("h01c"), _T_78) @[Mux.scala 47:69]
    node _T_80 = mux(_T_29, UInt<5>("h01b"), _T_79) @[Mux.scala 47:69]
    node _T_81 = mux(_T_30, UInt<5>("h01a"), _T_80) @[Mux.scala 47:69]
    node _T_82 = mux(_T_31, UInt<5>("h019"), _T_81) @[Mux.scala 47:69]
    node _T_83 = mux(_T_32, UInt<5>("h018"), _T_82) @[Mux.scala 47:69]
    node _T_84 = mux(_T_33, UInt<5>("h017"), _T_83) @[Mux.scala 47:69]
    node _T_85 = mux(_T_34, UInt<5>("h016"), _T_84) @[Mux.scala 47:69]
    node _T_86 = mux(_T_35, UInt<5>("h015"), _T_85) @[Mux.scala 47:69]
    node _T_87 = mux(_T_36, UInt<5>("h014"), _T_86) @[Mux.scala 47:69]
    node _T_88 = mux(_T_37, UInt<5>("h013"), _T_87) @[Mux.scala 47:69]
    node _T_89 = mux(_T_38, UInt<5>("h012"), _T_88) @[Mux.scala 47:69]
    node _T_90 = mux(_T_39, UInt<5>("h011"), _T_89) @[Mux.scala 47:69]
    node _T_91 = mux(_T_40, UInt<5>("h010"), _T_90) @[Mux.scala 47:69]
    node _T_92 = mux(_T_41, UInt<4>("h0f"), _T_91) @[Mux.scala 47:69]
    node _T_93 = mux(_T_42, UInt<4>("h0e"), _T_92) @[Mux.scala 47:69]
    node _T_94 = mux(_T_43, UInt<4>("h0d"), _T_93) @[Mux.scala 47:69]
    node _T_95 = mux(_T_44, UInt<4>("h0c"), _T_94) @[Mux.scala 47:69]
    node _T_96 = mux(_T_45, UInt<4>("h0b"), _T_95) @[Mux.scala 47:69]
    node _T_97 = mux(_T_46, UInt<4>("h0a"), _T_96) @[Mux.scala 47:69]
    node _T_98 = mux(_T_47, UInt<4>("h09"), _T_97) @[Mux.scala 47:69]
    node _T_99 = mux(_T_48, UInt<4>("h08"), _T_98) @[Mux.scala 47:69]
    node _T_100 = mux(_T_49, UInt<3>("h07"), _T_99) @[Mux.scala 47:69]
    node _T_101 = mux(_T_50, UInt<3>("h06"), _T_100) @[Mux.scala 47:69]
    node _T_102 = mux(_T_51, UInt<3>("h05"), _T_101) @[Mux.scala 47:69]
    node _T_103 = mux(_T_52, UInt<3>("h04"), _T_102) @[Mux.scala 47:69]
    node _T_104 = mux(_T_53, UInt<2>("h03"), _T_103) @[Mux.scala 47:69]
    node _T_105 = mux(_T_54, UInt<2>("h02"), _T_104) @[Mux.scala 47:69]
    node _T_106 = mux(_T_55, UInt<1>("h01"), _T_105) @[Mux.scala 47:69]
    node _T_107 = mux(_T_56, UInt<1>("h00"), _T_106) @[Mux.scala 47:69]
    node _T_108 = dshl(_T_2, _T_107) @[rawFloatFromFN.scala 54:36]
    node _T_109 = bits(_T_108, 50, 0) @[rawFloatFromFN.scala 54:47]
    node _T_110 = shl(_T_109, 1) @[rawFloatFromFN.scala 54:64]
    node _T_111 = xor(_T_107, UInt<12>("h0fff")) @[rawFloatFromFN.scala 57:26]
    node _T_112 = mux(_T_3, _T_111, _T_1) @[rawFloatFromFN.scala 56:16]
    node _T_113 = mux(_T_3, UInt<2>("h02"), UInt<1>("h01")) @[rawFloatFromFN.scala 60:27]
    node _T_114 = or(UInt<11>("h0400"), _T_113) @[rawFloatFromFN.scala 60:22]
    node _T_115 = add(_T_112, _T_114) @[rawFloatFromFN.scala 59:15]
    node _T_116 = tail(_T_115, 1) @[rawFloatFromFN.scala 59:15]
    node _T_117 = and(_T_3, _T_4) @[rawFloatFromFN.scala 62:34]
    node _T_118 = bits(_T_116, 11, 10) @[rawFloatFromFN.scala 63:37]
    node _T_119 = eq(_T_118, UInt<2>("h03")) @[rawFloatFromFN.scala 63:62]
    wire _T_120 : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<13>, sig : UInt<54>} @[rawFloatFromFN.scala 65:23]
    _T_120 is invalid @[rawFloatFromFN.scala 65:23]
    node _T_121 = eq(_T_4, UInt<1>("h00")) @[rawFloatFromFN.scala 66:36]
    node _T_122 = and(_T_119, _T_121) @[rawFloatFromFN.scala 66:33]
    _T_120.isNaN <= _T_122 @[rawFloatFromFN.scala 66:20]
    node _T_123 = and(_T_119, _T_4) @[rawFloatFromFN.scala 67:33]
    _T_120.isInf <= _T_123 @[rawFloatFromFN.scala 67:20]
    _T_120.isZero <= _T_117 @[rawFloatFromFN.scala 68:20]
    _T_120.sign <= _T @[rawFloatFromFN.scala 69:20]
    node _T_124 = bits(_T_116, 11, 0) @[rawFloatFromFN.scala 70:34]
    node _T_125 = cvt(_T_124) @[rawFloatFromFN.scala 70:48]
    _T_120.sExp <= _T_125 @[rawFloatFromFN.scala 70:20]
    node _T_126 = eq(_T_117, UInt<1>("h00")) @[rawFloatFromFN.scala 72:29]
    node _T_127 = mux(_T_3, _T_110, _T_2) @[rawFloatFromFN.scala 72:42]
    node _T_128 = cat(UInt<1>("h00"), _T_126) @[Cat.scala 29:58]
    node _T_129 = cat(_T_128, _T_127) @[Cat.scala 29:58]
    _T_120.sig <= _T_129 @[rawFloatFromFN.scala 71:17]
    node _T_130 = bits(_T_120.sExp, 11, 9) @[recFNFromFN.scala 48:53]
    node _T_131 = mux(_T_120.isZero, UInt<3>("h00"), _T_130) @[recFNFromFN.scala 48:16]
    node _T_132 = mux(_T_120.isNaN, UInt<1>("h01"), UInt<1>("h00")) @[recFNFromFN.scala 49:20]
    node _T_133 = or(_T_131, _T_132) @[recFNFromFN.scala 48:79]
    node _T_134 = bits(_T_120.sExp, 8, 0) @[recFNFromFN.scala 50:23]
    node _T_135 = bits(_T_120.sig, 51, 0) @[recFNFromFN.scala 51:22]
    node _T_136 = cat(_T_134, _T_135) @[Cat.scala 29:58]
    node _T_137 = cat(_T_120.sign, _T_133) @[Cat.scala 29:58]
    node _T_138 = cat(_T_137, _T_136) @[Cat.scala 29:58]
    recFNToIN.io.in <= _T_138 @[ValExec_RecFNToIN.scala 65:21]
    recFNToIN.io.roundingMode <= io.roundingMode @[ValExec_RecFNToIN.scala 66:31]
    recFNToIN.io.signedOut <= UInt<1>("h00") @[ValExec_RecFNToIN.scala 67:28]
    io.actual.out <= recFNToIN.io.out @[ValExec_RecFNToIN.scala 69:19]
    node _T_139 = bits(recFNToIN.io.intExceptionFlags, 2, 1) @[ValExec_RecFNToIN.scala 71:43]
    node _T_140 = neq(_T_139, UInt<1>("h00")) @[ValExec_RecFNToIN.scala 71:50]
    node _T_141 = bits(recFNToIN.io.intExceptionFlags, 0, 0) @[ValExec_RecFNToIN.scala 73:43]
    node _T_142 = cat(_T_140, UInt<3>("h00")) @[Cat.scala 29:58]
    node _T_143 = cat(_T_142, _T_141) @[Cat.scala 29:58]
    io.actual.exceptionFlags <= _T_143 @[ValExec_RecFNToIN.scala 70:30]
    io.check <= UInt<1>("h01") @[ValExec_RecFNToIN.scala 76:14]
    node _T_144 = eq(io.actual.out, io.expected.out) @[ValExec_RecFNToIN.scala 78:24]
    node _T_145 = eq(io.actual.exceptionFlags, io.expected.exceptionFlags) @[ValExec_RecFNToIN.scala 79:35]
    node _T_146 = and(_T_144, _T_145) @[ValExec_RecFNToIN.scala 78:45]
    io.pass <= _T_146 @[ValExec_RecFNToIN.scala 77:13]
    
