;buildInfoPackage: chisel3, version: 3.2-SNAPSHOT, scalaVersion: 2.12.10, sbtVersion: 1.3.2
circuit ValExec_RecF16ToRecF64 : 
  module RoundAnyRawFNToRecFN : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip invalidExc : UInt<1>, flip infiniteExc : UInt<1>, flip in : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<7>, sig : UInt<12>}, flip roundingMode : UInt<3>, flip detectTininess : UInt<1>, out : UInt<65>, exceptionFlags : UInt<5>}
    
    clock is invalid
    reset is invalid
    io is invalid
    node roundingMode_near_even = eq(io.roundingMode, UInt<3>("h00")) @[RoundAnyRawFNToRecFN.scala 88:53]
    node roundingMode_minMag = eq(io.roundingMode, UInt<3>("h01")) @[RoundAnyRawFNToRecFN.scala 89:53]
    node roundingMode_min = eq(io.roundingMode, UInt<3>("h02")) @[RoundAnyRawFNToRecFN.scala 90:53]
    node roundingMode_max = eq(io.roundingMode, UInt<3>("h03")) @[RoundAnyRawFNToRecFN.scala 91:53]
    node roundingMode_near_maxMag = eq(io.roundingMode, UInt<3>("h04")) @[RoundAnyRawFNToRecFN.scala 92:53]
    node roundingMode_odd = eq(io.roundingMode, UInt<3>("h06")) @[RoundAnyRawFNToRecFN.scala 93:53]
    node _T = and(roundingMode_min, io.in.sign) @[RoundAnyRawFNToRecFN.scala 96:27]
    node _T_1 = eq(io.in.sign, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 96:66]
    node _T_2 = and(roundingMode_max, _T_1) @[RoundAnyRawFNToRecFN.scala 96:63]
    node roundMagUp = or(_T, _T_2) @[RoundAnyRawFNToRecFN.scala 96:42]
    node _T_3 = add(io.in.sExp, asSInt(UInt<12>("h07e0"))) @[RoundAnyRawFNToRecFN.scala 102:25]
    node _T_4 = bits(_T_3, 11, 0) @[RoundAnyRawFNToRecFN.scala 104:14]
    node sAdjustedExp = cvt(_T_4) @[RoundAnyRawFNToRecFN.scala 104:31]
    node adjustedSig = shl(io.in.sig, 44) @[RoundAnyRawFNToRecFN.scala 112:22]
    wire common_expOut : UInt<12> @[RoundAnyRawFNToRecFN.scala 120:31]
    common_expOut is invalid @[RoundAnyRawFNToRecFN.scala 120:31]
    wire common_fractOut : UInt<52> @[RoundAnyRawFNToRecFN.scala 121:31]
    common_fractOut is invalid @[RoundAnyRawFNToRecFN.scala 121:31]
    wire common_overflow : UInt<1> @[RoundAnyRawFNToRecFN.scala 122:37]
    common_overflow is invalid @[RoundAnyRawFNToRecFN.scala 122:37]
    wire common_totalUnderflow : UInt<1> @[RoundAnyRawFNToRecFN.scala 123:37]
    common_totalUnderflow is invalid @[RoundAnyRawFNToRecFN.scala 123:37]
    wire common_underflow : UInt<1> @[RoundAnyRawFNToRecFN.scala 124:37]
    common_underflow is invalid @[RoundAnyRawFNToRecFN.scala 124:37]
    wire common_inexact : UInt<1> @[RoundAnyRawFNToRecFN.scala 125:37]
    common_inexact is invalid @[RoundAnyRawFNToRecFN.scala 125:37]
    node _T_5 = bits(sAdjustedExp, 11, 0) @[RoundAnyRawFNToRecFN.scala 134:38]
    node _T_6 = add(_T_5, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 134:55]
    node _T_7 = tail(_T_6, 1) @[RoundAnyRawFNToRecFN.scala 134:55]
    common_expOut <= _T_7 @[RoundAnyRawFNToRecFN.scala 134:23]
    node _T_8 = bits(adjustedSig, 54, 3) @[RoundAnyRawFNToRecFN.scala 137:28]
    node _T_9 = bits(adjustedSig, 53, 2) @[RoundAnyRawFNToRecFN.scala 138:28]
    node _T_10 = mux(UInt<1>("h00"), _T_8, _T_9) @[RoundAnyRawFNToRecFN.scala 136:16]
    common_fractOut <= _T_10 @[RoundAnyRawFNToRecFN.scala 135:25]
    common_overflow <= UInt<1>("h00") @[RoundAnyRawFNToRecFN.scala 140:31]
    common_totalUnderflow <= UInt<1>("h00") @[RoundAnyRawFNToRecFN.scala 141:31]
    common_underflow <= UInt<1>("h00") @[RoundAnyRawFNToRecFN.scala 142:31]
    common_inexact <= UInt<1>("h00") @[RoundAnyRawFNToRecFN.scala 143:31]
    node isNaNOut = or(io.invalidExc, io.in.isNaN) @[RoundAnyRawFNToRecFN.scala 233:34]
    node notNaN_isSpecialInfOut = or(io.infiniteExc, io.in.isInf) @[RoundAnyRawFNToRecFN.scala 234:49]
    node _T_11 = eq(isNaNOut, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 235:22]
    node _T_12 = eq(notNaN_isSpecialInfOut, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 235:36]
    node _T_13 = and(_T_11, _T_12) @[RoundAnyRawFNToRecFN.scala 235:33]
    node _T_14 = eq(io.in.isZero, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 235:64]
    node commonCase = and(_T_13, _T_14) @[RoundAnyRawFNToRecFN.scala 235:61]
    node overflow = and(commonCase, common_overflow) @[RoundAnyRawFNToRecFN.scala 236:32]
    node underflow = and(commonCase, common_underflow) @[RoundAnyRawFNToRecFN.scala 237:32]
    node _T_15 = and(commonCase, common_inexact) @[RoundAnyRawFNToRecFN.scala 238:43]
    node inexact = or(overflow, _T_15) @[RoundAnyRawFNToRecFN.scala 238:28]
    node _T_16 = or(roundingMode_near_even, roundingMode_near_maxMag) @[RoundAnyRawFNToRecFN.scala 241:32]
    node overflow_roundMagUp = or(_T_16, roundMagUp) @[RoundAnyRawFNToRecFN.scala 241:60]
    node _T_17 = and(commonCase, common_totalUnderflow) @[RoundAnyRawFNToRecFN.scala 243:20]
    node _T_18 = or(roundMagUp, roundingMode_odd) @[RoundAnyRawFNToRecFN.scala 243:60]
    node pegMinNonzeroMagOut = and(_T_17, _T_18) @[RoundAnyRawFNToRecFN.scala 243:45]
    node _T_19 = eq(overflow_roundMagUp, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 244:42]
    node pegMaxFiniteMagOut = and(overflow, _T_19) @[RoundAnyRawFNToRecFN.scala 244:39]
    node _T_20 = and(overflow, overflow_roundMagUp) @[RoundAnyRawFNToRecFN.scala 246:45]
    node notNaN_isInfOut = or(notNaN_isSpecialInfOut, _T_20) @[RoundAnyRawFNToRecFN.scala 246:32]
    node signOut = mux(isNaNOut, UInt<1>("h00"), io.in.sign) @[RoundAnyRawFNToRecFN.scala 248:22]
    node _T_21 = or(io.in.isZero, common_totalUnderflow) @[RoundAnyRawFNToRecFN.scala 251:32]
    node _T_22 = mux(_T_21, UInt<12>("h0e00"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 251:18]
    node _T_23 = not(_T_22) @[RoundAnyRawFNToRecFN.scala 251:14]
    node _T_24 = and(common_expOut, _T_23) @[RoundAnyRawFNToRecFN.scala 250:24]
    node _T_25 = not(UInt<12>("h03ce")) @[RoundAnyRawFNToRecFN.scala 256:19]
    node _T_26 = mux(pegMinNonzeroMagOut, _T_25, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 255:18]
    node _T_27 = not(_T_26) @[RoundAnyRawFNToRecFN.scala 255:14]
    node _T_28 = and(_T_24, _T_27) @[RoundAnyRawFNToRecFN.scala 254:17]
    node _T_29 = mux(pegMaxFiniteMagOut, UInt<12>("h0400"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 259:18]
    node _T_30 = not(_T_29) @[RoundAnyRawFNToRecFN.scala 259:14]
    node _T_31 = and(_T_28, _T_30) @[RoundAnyRawFNToRecFN.scala 258:17]
    node _T_32 = mux(notNaN_isInfOut, UInt<12>("h0200"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 263:18]
    node _T_33 = not(_T_32) @[RoundAnyRawFNToRecFN.scala 263:14]
    node _T_34 = and(_T_31, _T_33) @[RoundAnyRawFNToRecFN.scala 262:17]
    node _T_35 = mux(pegMinNonzeroMagOut, UInt<12>("h03ce"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 267:16]
    node _T_36 = or(_T_34, _T_35) @[RoundAnyRawFNToRecFN.scala 266:18]
    node _T_37 = mux(pegMaxFiniteMagOut, UInt<12>("h0bff"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 271:16]
    node _T_38 = or(_T_36, _T_37) @[RoundAnyRawFNToRecFN.scala 270:15]
    node _T_39 = mux(notNaN_isInfOut, UInt<12>("h0c00"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 275:16]
    node _T_40 = or(_T_38, _T_39) @[RoundAnyRawFNToRecFN.scala 274:15]
    node _T_41 = mux(isNaNOut, UInt<12>("h0e00"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 276:16]
    node expOut = or(_T_40, _T_41) @[RoundAnyRawFNToRecFN.scala 275:77]
    node _T_42 = or(isNaNOut, io.in.isZero) @[RoundAnyRawFNToRecFN.scala 278:22]
    node _T_43 = or(_T_42, common_totalUnderflow) @[RoundAnyRawFNToRecFN.scala 278:38]
    node _T_44 = mux(isNaNOut, UInt<52>("h08000000000000"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 279:16]
    node _T_45 = mux(_T_43, _T_44, common_fractOut) @[RoundAnyRawFNToRecFN.scala 278:12]
    node _T_46 = bits(pegMaxFiniteMagOut, 0, 0) @[Bitwise.scala 71:15]
    node _T_47 = mux(_T_46, UInt<52>("h0fffffffffffff"), UInt<52>("h00")) @[Bitwise.scala 71:12]
    node fractOut = or(_T_45, _T_47) @[RoundAnyRawFNToRecFN.scala 281:11]
    node _T_48 = cat(signOut, expOut) @[Cat.scala 29:58]
    node _T_49 = cat(_T_48, fractOut) @[Cat.scala 29:58]
    io.out <= _T_49 @[RoundAnyRawFNToRecFN.scala 284:12]
    node _T_50 = cat(underflow, inexact) @[Cat.scala 29:58]
    node _T_51 = cat(io.invalidExc, io.infiniteExc) @[Cat.scala 29:58]
    node _T_52 = cat(_T_51, overflow) @[Cat.scala 29:58]
    node _T_53 = cat(_T_52, _T_50) @[Cat.scala 29:58]
    io.exceptionFlags <= _T_53 @[RoundAnyRawFNToRecFN.scala 285:23]
    
  module RecFNToRecFN : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<17>, flip roundingMode : UInt<3>, flip detectTininess : UInt<1>, out : UInt<65>, exceptionFlags : UInt<5>}
    
    clock is invalid
    reset is invalid
    io is invalid
    node _T = bits(io.in, 15, 10) @[rawFloatFromRecFN.scala 50:21]
    node _T_1 = bits(_T, 5, 3) @[rawFloatFromRecFN.scala 51:29]
    node _T_2 = eq(_T_1, UInt<1>("h00")) @[rawFloatFromRecFN.scala 51:54]
    node _T_3 = bits(_T, 5, 4) @[rawFloatFromRecFN.scala 52:29]
    node _T_4 = eq(_T_3, UInt<2>("h03")) @[rawFloatFromRecFN.scala 52:54]
    wire rawIn : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<7>, sig : UInt<12>} @[rawFloatFromRecFN.scala 54:23]
    rawIn is invalid @[rawFloatFromRecFN.scala 54:23]
    node _T_5 = bits(_T, 3, 3) @[rawFloatFromRecFN.scala 55:41]
    node _T_6 = and(_T_4, _T_5) @[rawFloatFromRecFN.scala 55:33]
    rawIn.isNaN <= _T_6 @[rawFloatFromRecFN.scala 55:20]
    node _T_7 = bits(_T, 3, 3) @[rawFloatFromRecFN.scala 56:41]
    node _T_8 = eq(_T_7, UInt<1>("h00")) @[rawFloatFromRecFN.scala 56:36]
    node _T_9 = and(_T_4, _T_8) @[rawFloatFromRecFN.scala 56:33]
    rawIn.isInf <= _T_9 @[rawFloatFromRecFN.scala 56:20]
    rawIn.isZero <= _T_2 @[rawFloatFromRecFN.scala 57:20]
    node _T_10 = bits(io.in, 16, 16) @[rawFloatFromRecFN.scala 58:25]
    rawIn.sign <= _T_10 @[rawFloatFromRecFN.scala 58:20]
    node _T_11 = cvt(_T) @[rawFloatFromRecFN.scala 59:27]
    rawIn.sExp <= _T_11 @[rawFloatFromRecFN.scala 59:20]
    node _T_12 = eq(_T_2, UInt<1>("h00")) @[rawFloatFromRecFN.scala 60:39]
    node _T_13 = bits(io.in, 9, 0) @[rawFloatFromRecFN.scala 60:51]
    node _T_14 = cat(UInt<1>("h00"), _T_12) @[Cat.scala 29:58]
    node _T_15 = cat(_T_14, _T_13) @[Cat.scala 29:58]
    rawIn.sig <= _T_15 @[rawFloatFromRecFN.scala 60:20]
    inst RoundAnyRawFNToRecFN of RoundAnyRawFNToRecFN @[RecFNToRecFN.scala 72:19]
    RoundAnyRawFNToRecFN.io is invalid
    RoundAnyRawFNToRecFN.clock <= clock
    RoundAnyRawFNToRecFN.reset <= reset
    node _T_16 = bits(rawIn.sig, 9, 9) @[common.scala 81:56]
    node _T_17 = eq(_T_16, UInt<1>("h00")) @[common.scala 81:49]
    node _T_18 = and(rawIn.isNaN, _T_17) @[common.scala 81:46]
    RoundAnyRawFNToRecFN.io.invalidExc <= _T_18 @[RecFNToRecFN.scala 80:48]
    RoundAnyRawFNToRecFN.io.infiniteExc <= UInt<1>("h00") @[RecFNToRecFN.scala 81:48]
    RoundAnyRawFNToRecFN.io.in <- rawIn @[RecFNToRecFN.scala 82:48]
    RoundAnyRawFNToRecFN.io.roundingMode <= io.roundingMode @[RecFNToRecFN.scala 83:48]
    RoundAnyRawFNToRecFN.io.detectTininess <= io.detectTininess @[RecFNToRecFN.scala 84:48]
    io.out <= RoundAnyRawFNToRecFN.io.out @[RecFNToRecFN.scala 85:27]
    io.exceptionFlags <= RoundAnyRawFNToRecFN.io.exceptionFlags @[RecFNToRecFN.scala 86:27]
    
  module ValExec_RecF16ToRecF64 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<16>, flip roundingMode : UInt<3>, flip detectTininess : UInt<1>, expected : {flip out : UInt<64>, flip exceptionFlags : UInt<5>, recOut : UInt<65>}, actual : {out : UInt<65>, exceptionFlags : UInt<5>}, check : UInt<1>, pass : UInt<1>}
    
    clock is invalid
    reset is invalid
    io is invalid
    inst recFNToRecFN of RecFNToRecFN @[ValExec_RecFNToRecFN.scala 68:15]
    recFNToRecFN.io is invalid
    recFNToRecFN.clock <= clock
    recFNToRecFN.reset <= reset
    node _T = bits(io.in, 15, 15) @[rawFloatFromFN.scala 46:22]
    node _T_1 = bits(io.in, 14, 10) @[rawFloatFromFN.scala 47:23]
    node _T_2 = bits(io.in, 9, 0) @[rawFloatFromFN.scala 48:25]
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
    recFNToRecFN.io.in <= _T_54 @[ValExec_RecFNToRecFN.scala 70:24]
    recFNToRecFN.io.roundingMode <= io.roundingMode @[ValExec_RecFNToRecFN.scala 71:36]
    recFNToRecFN.io.detectTininess <= io.detectTininess @[ValExec_RecFNToRecFN.scala 72:36]
    node _T_55 = bits(io.expected.out, 63, 63) @[rawFloatFromFN.scala 46:22]
    node _T_56 = bits(io.expected.out, 62, 52) @[rawFloatFromFN.scala 47:23]
    node _T_57 = bits(io.expected.out, 51, 0) @[rawFloatFromFN.scala 48:25]
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
    node _T_70 = bits(_T_57, 10, 10) @[primitives.scala 92:52]
    node _T_71 = bits(_T_57, 11, 11) @[primitives.scala 92:52]
    node _T_72 = bits(_T_57, 12, 12) @[primitives.scala 92:52]
    node _T_73 = bits(_T_57, 13, 13) @[primitives.scala 92:52]
    node _T_74 = bits(_T_57, 14, 14) @[primitives.scala 92:52]
    node _T_75 = bits(_T_57, 15, 15) @[primitives.scala 92:52]
    node _T_76 = bits(_T_57, 16, 16) @[primitives.scala 92:52]
    node _T_77 = bits(_T_57, 17, 17) @[primitives.scala 92:52]
    node _T_78 = bits(_T_57, 18, 18) @[primitives.scala 92:52]
    node _T_79 = bits(_T_57, 19, 19) @[primitives.scala 92:52]
    node _T_80 = bits(_T_57, 20, 20) @[primitives.scala 92:52]
    node _T_81 = bits(_T_57, 21, 21) @[primitives.scala 92:52]
    node _T_82 = bits(_T_57, 22, 22) @[primitives.scala 92:52]
    node _T_83 = bits(_T_57, 23, 23) @[primitives.scala 92:52]
    node _T_84 = bits(_T_57, 24, 24) @[primitives.scala 92:52]
    node _T_85 = bits(_T_57, 25, 25) @[primitives.scala 92:52]
    node _T_86 = bits(_T_57, 26, 26) @[primitives.scala 92:52]
    node _T_87 = bits(_T_57, 27, 27) @[primitives.scala 92:52]
    node _T_88 = bits(_T_57, 28, 28) @[primitives.scala 92:52]
    node _T_89 = bits(_T_57, 29, 29) @[primitives.scala 92:52]
    node _T_90 = bits(_T_57, 30, 30) @[primitives.scala 92:52]
    node _T_91 = bits(_T_57, 31, 31) @[primitives.scala 92:52]
    node _T_92 = bits(_T_57, 32, 32) @[primitives.scala 92:52]
    node _T_93 = bits(_T_57, 33, 33) @[primitives.scala 92:52]
    node _T_94 = bits(_T_57, 34, 34) @[primitives.scala 92:52]
    node _T_95 = bits(_T_57, 35, 35) @[primitives.scala 92:52]
    node _T_96 = bits(_T_57, 36, 36) @[primitives.scala 92:52]
    node _T_97 = bits(_T_57, 37, 37) @[primitives.scala 92:52]
    node _T_98 = bits(_T_57, 38, 38) @[primitives.scala 92:52]
    node _T_99 = bits(_T_57, 39, 39) @[primitives.scala 92:52]
    node _T_100 = bits(_T_57, 40, 40) @[primitives.scala 92:52]
    node _T_101 = bits(_T_57, 41, 41) @[primitives.scala 92:52]
    node _T_102 = bits(_T_57, 42, 42) @[primitives.scala 92:52]
    node _T_103 = bits(_T_57, 43, 43) @[primitives.scala 92:52]
    node _T_104 = bits(_T_57, 44, 44) @[primitives.scala 92:52]
    node _T_105 = bits(_T_57, 45, 45) @[primitives.scala 92:52]
    node _T_106 = bits(_T_57, 46, 46) @[primitives.scala 92:52]
    node _T_107 = bits(_T_57, 47, 47) @[primitives.scala 92:52]
    node _T_108 = bits(_T_57, 48, 48) @[primitives.scala 92:52]
    node _T_109 = bits(_T_57, 49, 49) @[primitives.scala 92:52]
    node _T_110 = bits(_T_57, 50, 50) @[primitives.scala 92:52]
    node _T_111 = bits(_T_57, 51, 51) @[primitives.scala 92:52]
    node _T_112 = mux(_T_61, UInt<6>("h032"), UInt<6>("h033")) @[Mux.scala 47:69]
    node _T_113 = mux(_T_62, UInt<6>("h031"), _T_112) @[Mux.scala 47:69]
    node _T_114 = mux(_T_63, UInt<6>("h030"), _T_113) @[Mux.scala 47:69]
    node _T_115 = mux(_T_64, UInt<6>("h02f"), _T_114) @[Mux.scala 47:69]
    node _T_116 = mux(_T_65, UInt<6>("h02e"), _T_115) @[Mux.scala 47:69]
    node _T_117 = mux(_T_66, UInt<6>("h02d"), _T_116) @[Mux.scala 47:69]
    node _T_118 = mux(_T_67, UInt<6>("h02c"), _T_117) @[Mux.scala 47:69]
    node _T_119 = mux(_T_68, UInt<6>("h02b"), _T_118) @[Mux.scala 47:69]
    node _T_120 = mux(_T_69, UInt<6>("h02a"), _T_119) @[Mux.scala 47:69]
    node _T_121 = mux(_T_70, UInt<6>("h029"), _T_120) @[Mux.scala 47:69]
    node _T_122 = mux(_T_71, UInt<6>("h028"), _T_121) @[Mux.scala 47:69]
    node _T_123 = mux(_T_72, UInt<6>("h027"), _T_122) @[Mux.scala 47:69]
    node _T_124 = mux(_T_73, UInt<6>("h026"), _T_123) @[Mux.scala 47:69]
    node _T_125 = mux(_T_74, UInt<6>("h025"), _T_124) @[Mux.scala 47:69]
    node _T_126 = mux(_T_75, UInt<6>("h024"), _T_125) @[Mux.scala 47:69]
    node _T_127 = mux(_T_76, UInt<6>("h023"), _T_126) @[Mux.scala 47:69]
    node _T_128 = mux(_T_77, UInt<6>("h022"), _T_127) @[Mux.scala 47:69]
    node _T_129 = mux(_T_78, UInt<6>("h021"), _T_128) @[Mux.scala 47:69]
    node _T_130 = mux(_T_79, UInt<6>("h020"), _T_129) @[Mux.scala 47:69]
    node _T_131 = mux(_T_80, UInt<5>("h01f"), _T_130) @[Mux.scala 47:69]
    node _T_132 = mux(_T_81, UInt<5>("h01e"), _T_131) @[Mux.scala 47:69]
    node _T_133 = mux(_T_82, UInt<5>("h01d"), _T_132) @[Mux.scala 47:69]
    node _T_134 = mux(_T_83, UInt<5>("h01c"), _T_133) @[Mux.scala 47:69]
    node _T_135 = mux(_T_84, UInt<5>("h01b"), _T_134) @[Mux.scala 47:69]
    node _T_136 = mux(_T_85, UInt<5>("h01a"), _T_135) @[Mux.scala 47:69]
    node _T_137 = mux(_T_86, UInt<5>("h019"), _T_136) @[Mux.scala 47:69]
    node _T_138 = mux(_T_87, UInt<5>("h018"), _T_137) @[Mux.scala 47:69]
    node _T_139 = mux(_T_88, UInt<5>("h017"), _T_138) @[Mux.scala 47:69]
    node _T_140 = mux(_T_89, UInt<5>("h016"), _T_139) @[Mux.scala 47:69]
    node _T_141 = mux(_T_90, UInt<5>("h015"), _T_140) @[Mux.scala 47:69]
    node _T_142 = mux(_T_91, UInt<5>("h014"), _T_141) @[Mux.scala 47:69]
    node _T_143 = mux(_T_92, UInt<5>("h013"), _T_142) @[Mux.scala 47:69]
    node _T_144 = mux(_T_93, UInt<5>("h012"), _T_143) @[Mux.scala 47:69]
    node _T_145 = mux(_T_94, UInt<5>("h011"), _T_144) @[Mux.scala 47:69]
    node _T_146 = mux(_T_95, UInt<5>("h010"), _T_145) @[Mux.scala 47:69]
    node _T_147 = mux(_T_96, UInt<4>("h0f"), _T_146) @[Mux.scala 47:69]
    node _T_148 = mux(_T_97, UInt<4>("h0e"), _T_147) @[Mux.scala 47:69]
    node _T_149 = mux(_T_98, UInt<4>("h0d"), _T_148) @[Mux.scala 47:69]
    node _T_150 = mux(_T_99, UInt<4>("h0c"), _T_149) @[Mux.scala 47:69]
    node _T_151 = mux(_T_100, UInt<4>("h0b"), _T_150) @[Mux.scala 47:69]
    node _T_152 = mux(_T_101, UInt<4>("h0a"), _T_151) @[Mux.scala 47:69]
    node _T_153 = mux(_T_102, UInt<4>("h09"), _T_152) @[Mux.scala 47:69]
    node _T_154 = mux(_T_103, UInt<4>("h08"), _T_153) @[Mux.scala 47:69]
    node _T_155 = mux(_T_104, UInt<3>("h07"), _T_154) @[Mux.scala 47:69]
    node _T_156 = mux(_T_105, UInt<3>("h06"), _T_155) @[Mux.scala 47:69]
    node _T_157 = mux(_T_106, UInt<3>("h05"), _T_156) @[Mux.scala 47:69]
    node _T_158 = mux(_T_107, UInt<3>("h04"), _T_157) @[Mux.scala 47:69]
    node _T_159 = mux(_T_108, UInt<2>("h03"), _T_158) @[Mux.scala 47:69]
    node _T_160 = mux(_T_109, UInt<2>("h02"), _T_159) @[Mux.scala 47:69]
    node _T_161 = mux(_T_110, UInt<1>("h01"), _T_160) @[Mux.scala 47:69]
    node _T_162 = mux(_T_111, UInt<1>("h00"), _T_161) @[Mux.scala 47:69]
    node _T_163 = dshl(_T_57, _T_162) @[rawFloatFromFN.scala 54:36]
    node _T_164 = bits(_T_163, 50, 0) @[rawFloatFromFN.scala 54:47]
    node _T_165 = shl(_T_164, 1) @[rawFloatFromFN.scala 54:64]
    node _T_166 = xor(_T_162, UInt<12>("h0fff")) @[rawFloatFromFN.scala 57:26]
    node _T_167 = mux(_T_58, _T_166, _T_56) @[rawFloatFromFN.scala 56:16]
    node _T_168 = mux(_T_58, UInt<2>("h02"), UInt<1>("h01")) @[rawFloatFromFN.scala 60:27]
    node _T_169 = or(UInt<11>("h0400"), _T_168) @[rawFloatFromFN.scala 60:22]
    node _T_170 = add(_T_167, _T_169) @[rawFloatFromFN.scala 59:15]
    node _T_171 = tail(_T_170, 1) @[rawFloatFromFN.scala 59:15]
    node _T_172 = and(_T_58, _T_59) @[rawFloatFromFN.scala 62:34]
    node _T_173 = bits(_T_171, 11, 10) @[rawFloatFromFN.scala 63:37]
    node _T_174 = eq(_T_173, UInt<2>("h03")) @[rawFloatFromFN.scala 63:62]
    wire _T_175 : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<13>, sig : UInt<54>} @[rawFloatFromFN.scala 65:23]
    _T_175 is invalid @[rawFloatFromFN.scala 65:23]
    node _T_176 = eq(_T_59, UInt<1>("h00")) @[rawFloatFromFN.scala 66:36]
    node _T_177 = and(_T_174, _T_176) @[rawFloatFromFN.scala 66:33]
    _T_175.isNaN <= _T_177 @[rawFloatFromFN.scala 66:20]
    node _T_178 = and(_T_174, _T_59) @[rawFloatFromFN.scala 67:33]
    _T_175.isInf <= _T_178 @[rawFloatFromFN.scala 67:20]
    _T_175.isZero <= _T_172 @[rawFloatFromFN.scala 68:20]
    _T_175.sign <= _T_55 @[rawFloatFromFN.scala 69:20]
    node _T_179 = bits(_T_171, 11, 0) @[rawFloatFromFN.scala 70:34]
    node _T_180 = cvt(_T_179) @[rawFloatFromFN.scala 70:48]
    _T_175.sExp <= _T_180 @[rawFloatFromFN.scala 70:20]
    node _T_181 = eq(_T_172, UInt<1>("h00")) @[rawFloatFromFN.scala 72:29]
    node _T_182 = mux(_T_58, _T_165, _T_57) @[rawFloatFromFN.scala 72:42]
    node _T_183 = cat(UInt<1>("h00"), _T_181) @[Cat.scala 29:58]
    node _T_184 = cat(_T_183, _T_182) @[Cat.scala 29:58]
    _T_175.sig <= _T_184 @[rawFloatFromFN.scala 71:17]
    node _T_185 = bits(_T_175.sExp, 11, 9) @[recFNFromFN.scala 48:53]
    node _T_186 = mux(_T_175.isZero, UInt<3>("h00"), _T_185) @[recFNFromFN.scala 48:16]
    node _T_187 = mux(_T_175.isNaN, UInt<1>("h01"), UInt<1>("h00")) @[recFNFromFN.scala 49:20]
    node _T_188 = or(_T_186, _T_187) @[recFNFromFN.scala 48:79]
    node _T_189 = bits(_T_175.sExp, 8, 0) @[recFNFromFN.scala 50:23]
    node _T_190 = bits(_T_175.sig, 51, 0) @[recFNFromFN.scala 51:22]
    node _T_191 = cat(_T_189, _T_190) @[Cat.scala 29:58]
    node _T_192 = cat(_T_175.sign, _T_188) @[Cat.scala 29:58]
    node _T_193 = cat(_T_192, _T_191) @[Cat.scala 29:58]
    io.expected.recOut <= _T_193 @[ValExec_RecFNToRecFN.scala 74:24]
    io.actual.out <= recFNToRecFN.io.out @[ValExec_RecFNToRecFN.scala 77:19]
    io.actual.exceptionFlags <= recFNToRecFN.io.exceptionFlags @[ValExec_RecFNToRecFN.scala 78:30]
    io.check <= UInt<1>("h01") @[ValExec_RecFNToRecFN.scala 80:14]
    node _T_194 = bits(io.actual.out, 64, 61) @[tests.scala 46:22]
    node _T_195 = bits(io.expected.recOut, 64, 61) @[tests.scala 47:22]
    node _T_196 = bits(_T_194, 2, 0) @[tests.scala 48:19]
    node _T_197 = eq(_T_196, UInt<1>("h00")) @[tests.scala 48:26]
    node _T_198 = bits(_T_194, 2, 0) @[tests.scala 48:48]
    node _T_199 = eq(_T_198, UInt<3>("h07")) @[tests.scala 48:55]
    node _T_200 = or(_T_197, _T_199) @[tests.scala 48:39]
    node _T_201 = eq(_T_194, _T_195) @[tests.scala 49:20]
    node _T_202 = bits(io.actual.out, 51, 0) @[tests.scala 49:36]
    node _T_203 = bits(io.expected.recOut, 51, 0) @[tests.scala 49:59]
    node _T_204 = eq(_T_202, _T_203) @[tests.scala 49:54]
    node _T_205 = and(_T_201, _T_204) @[tests.scala 49:31]
    node _T_206 = bits(_T_194, 2, 0) @[tests.scala 50:23]
    node _T_207 = eq(_T_206, UInt<3>("h06")) @[tests.scala 50:30]
    node _T_208 = eq(_T_194, _T_195) @[tests.scala 50:51]
    node _T_209 = eq(io.actual.out, io.expected.recOut) @[tests.scala 50:66]
    node _T_210 = mux(_T_207, _T_208, _T_209) @[tests.scala 50:16]
    node _T_211 = mux(_T_200, _T_205, _T_210) @[tests.scala 48:12]
    node _T_212 = eq(io.actual.exceptionFlags, io.expected.exceptionFlags) @[ValExec_RecFNToRecFN.scala 84:35]
    node _T_213 = and(_T_211, _T_212) @[ValExec_RecFNToRecFN.scala 83:74]
    io.pass <= _T_213 @[ValExec_RecFNToRecFN.scala 81:13]
    
