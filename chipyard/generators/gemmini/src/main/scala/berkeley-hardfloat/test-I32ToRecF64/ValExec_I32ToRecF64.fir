;buildInfoPackage: chisel3, version: 3.2-SNAPSHOT, scalaVersion: 2.12.10, sbtVersion: 1.3.2
circuit ValExec_I32ToRecF64 : 
  module RoundAnyRawFNToRecFN : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip invalidExc : UInt<1>, flip infiniteExc : UInt<1>, flip in : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<8>, sig : UInt<33>}, flip roundingMode : UInt<3>, flip detectTininess : UInt<1>, out : UInt<65>, exceptionFlags : UInt<5>}
    
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
    node _T_3 = add(io.in.sExp, asSInt(UInt<12>("h07c0"))) @[RoundAnyRawFNToRecFN.scala 102:25]
    node _T_4 = bits(_T_3, 11, 0) @[RoundAnyRawFNToRecFN.scala 104:14]
    node sAdjustedExp = cvt(_T_4) @[RoundAnyRawFNToRecFN.scala 104:31]
    node adjustedSig = shl(io.in.sig, 23) @[RoundAnyRawFNToRecFN.scala 112:22]
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
    
  module INToRecFN : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip signedIn : UInt<1>, flip in : UInt<32>, flip roundingMode : UInt<3>, flip detectTininess : UInt<1>, out : UInt<65>, exceptionFlags : UInt<5>}
    
    clock is invalid
    reset is invalid
    io is invalid
    node _T = bits(io.in, 31, 31) @[rawFloatFromIN.scala 50:34]
    node _T_1 = and(io.signedIn, _T) @[rawFloatFromIN.scala 50:29]
    node _T_2 = sub(UInt<1>("h00"), io.in) @[rawFloatFromIN.scala 51:31]
    node _T_3 = tail(_T_2, 1) @[rawFloatFromIN.scala 51:31]
    node _T_4 = mux(_T_1, _T_3, io.in) @[rawFloatFromIN.scala 51:24]
    node _T_5 = cat(UInt<32>("h00"), _T_4) @[Cat.scala 29:58]
    node _T_6 = bits(_T_5, 31, 0) @[rawFloatFromIN.scala 52:56]
    node _T_7 = bits(_T_6, 0, 0) @[primitives.scala 92:52]
    node _T_8 = bits(_T_6, 1, 1) @[primitives.scala 92:52]
    node _T_9 = bits(_T_6, 2, 2) @[primitives.scala 92:52]
    node _T_10 = bits(_T_6, 3, 3) @[primitives.scala 92:52]
    node _T_11 = bits(_T_6, 4, 4) @[primitives.scala 92:52]
    node _T_12 = bits(_T_6, 5, 5) @[primitives.scala 92:52]
    node _T_13 = bits(_T_6, 6, 6) @[primitives.scala 92:52]
    node _T_14 = bits(_T_6, 7, 7) @[primitives.scala 92:52]
    node _T_15 = bits(_T_6, 8, 8) @[primitives.scala 92:52]
    node _T_16 = bits(_T_6, 9, 9) @[primitives.scala 92:52]
    node _T_17 = bits(_T_6, 10, 10) @[primitives.scala 92:52]
    node _T_18 = bits(_T_6, 11, 11) @[primitives.scala 92:52]
    node _T_19 = bits(_T_6, 12, 12) @[primitives.scala 92:52]
    node _T_20 = bits(_T_6, 13, 13) @[primitives.scala 92:52]
    node _T_21 = bits(_T_6, 14, 14) @[primitives.scala 92:52]
    node _T_22 = bits(_T_6, 15, 15) @[primitives.scala 92:52]
    node _T_23 = bits(_T_6, 16, 16) @[primitives.scala 92:52]
    node _T_24 = bits(_T_6, 17, 17) @[primitives.scala 92:52]
    node _T_25 = bits(_T_6, 18, 18) @[primitives.scala 92:52]
    node _T_26 = bits(_T_6, 19, 19) @[primitives.scala 92:52]
    node _T_27 = bits(_T_6, 20, 20) @[primitives.scala 92:52]
    node _T_28 = bits(_T_6, 21, 21) @[primitives.scala 92:52]
    node _T_29 = bits(_T_6, 22, 22) @[primitives.scala 92:52]
    node _T_30 = bits(_T_6, 23, 23) @[primitives.scala 92:52]
    node _T_31 = bits(_T_6, 24, 24) @[primitives.scala 92:52]
    node _T_32 = bits(_T_6, 25, 25) @[primitives.scala 92:52]
    node _T_33 = bits(_T_6, 26, 26) @[primitives.scala 92:52]
    node _T_34 = bits(_T_6, 27, 27) @[primitives.scala 92:52]
    node _T_35 = bits(_T_6, 28, 28) @[primitives.scala 92:52]
    node _T_36 = bits(_T_6, 29, 29) @[primitives.scala 92:52]
    node _T_37 = bits(_T_6, 30, 30) @[primitives.scala 92:52]
    node _T_38 = bits(_T_6, 31, 31) @[primitives.scala 92:52]
    node _T_39 = mux(_T_8, UInt<5>("h01e"), UInt<5>("h01f")) @[Mux.scala 47:69]
    node _T_40 = mux(_T_9, UInt<5>("h01d"), _T_39) @[Mux.scala 47:69]
    node _T_41 = mux(_T_10, UInt<5>("h01c"), _T_40) @[Mux.scala 47:69]
    node _T_42 = mux(_T_11, UInt<5>("h01b"), _T_41) @[Mux.scala 47:69]
    node _T_43 = mux(_T_12, UInt<5>("h01a"), _T_42) @[Mux.scala 47:69]
    node _T_44 = mux(_T_13, UInt<5>("h019"), _T_43) @[Mux.scala 47:69]
    node _T_45 = mux(_T_14, UInt<5>("h018"), _T_44) @[Mux.scala 47:69]
    node _T_46 = mux(_T_15, UInt<5>("h017"), _T_45) @[Mux.scala 47:69]
    node _T_47 = mux(_T_16, UInt<5>("h016"), _T_46) @[Mux.scala 47:69]
    node _T_48 = mux(_T_17, UInt<5>("h015"), _T_47) @[Mux.scala 47:69]
    node _T_49 = mux(_T_18, UInt<5>("h014"), _T_48) @[Mux.scala 47:69]
    node _T_50 = mux(_T_19, UInt<5>("h013"), _T_49) @[Mux.scala 47:69]
    node _T_51 = mux(_T_20, UInt<5>("h012"), _T_50) @[Mux.scala 47:69]
    node _T_52 = mux(_T_21, UInt<5>("h011"), _T_51) @[Mux.scala 47:69]
    node _T_53 = mux(_T_22, UInt<5>("h010"), _T_52) @[Mux.scala 47:69]
    node _T_54 = mux(_T_23, UInt<4>("h0f"), _T_53) @[Mux.scala 47:69]
    node _T_55 = mux(_T_24, UInt<4>("h0e"), _T_54) @[Mux.scala 47:69]
    node _T_56 = mux(_T_25, UInt<4>("h0d"), _T_55) @[Mux.scala 47:69]
    node _T_57 = mux(_T_26, UInt<4>("h0c"), _T_56) @[Mux.scala 47:69]
    node _T_58 = mux(_T_27, UInt<4>("h0b"), _T_57) @[Mux.scala 47:69]
    node _T_59 = mux(_T_28, UInt<4>("h0a"), _T_58) @[Mux.scala 47:69]
    node _T_60 = mux(_T_29, UInt<4>("h09"), _T_59) @[Mux.scala 47:69]
    node _T_61 = mux(_T_30, UInt<4>("h08"), _T_60) @[Mux.scala 47:69]
    node _T_62 = mux(_T_31, UInt<3>("h07"), _T_61) @[Mux.scala 47:69]
    node _T_63 = mux(_T_32, UInt<3>("h06"), _T_62) @[Mux.scala 47:69]
    node _T_64 = mux(_T_33, UInt<3>("h05"), _T_63) @[Mux.scala 47:69]
    node _T_65 = mux(_T_34, UInt<3>("h04"), _T_64) @[Mux.scala 47:69]
    node _T_66 = mux(_T_35, UInt<2>("h03"), _T_65) @[Mux.scala 47:69]
    node _T_67 = mux(_T_36, UInt<2>("h02"), _T_66) @[Mux.scala 47:69]
    node _T_68 = mux(_T_37, UInt<1>("h01"), _T_67) @[Mux.scala 47:69]
    node _T_69 = mux(_T_38, UInt<1>("h00"), _T_68) @[Mux.scala 47:69]
    node _T_70 = dshl(_T_6, _T_69) @[rawFloatFromIN.scala 55:22]
    node _T_71 = bits(_T_70, 31, 0) @[rawFloatFromIN.scala 55:41]
    wire intAsRawFloat : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<8>, sig : UInt<33>} @[rawFloatFromIN.scala 58:23]
    intAsRawFloat is invalid @[rawFloatFromIN.scala 58:23]
    intAsRawFloat.isNaN <= UInt<1>("h00") @[rawFloatFromIN.scala 59:20]
    intAsRawFloat.isInf <= UInt<1>("h00") @[rawFloatFromIN.scala 60:20]
    node _T_72 = bits(_T_71, 31, 31) @[rawFloatFromIN.scala 61:28]
    node _T_73 = eq(_T_72, UInt<1>("h00")) @[rawFloatFromIN.scala 61:23]
    intAsRawFloat.isZero <= _T_73 @[rawFloatFromIN.scala 61:20]
    intAsRawFloat.sign <= _T_1 @[rawFloatFromIN.scala 62:20]
    node _T_74 = bits(_T_69, 4, 0) @[rawFloatFromIN.scala 63:56]
    node _T_75 = not(_T_74) @[rawFloatFromIN.scala 63:39]
    node _T_76 = cat(UInt<2>("h02"), _T_75) @[Cat.scala 29:58]
    node _T_77 = cvt(_T_76) @[rawFloatFromIN.scala 63:75]
    intAsRawFloat.sExp <= _T_77 @[rawFloatFromIN.scala 63:20]
    intAsRawFloat.sig <= _T_71 @[rawFloatFromIN.scala 64:20]
    inst roundAnyRawFNToRecFN of RoundAnyRawFNToRecFN @[INToRecFN.scala 59:15]
    roundAnyRawFNToRecFN.io is invalid
    roundAnyRawFNToRecFN.clock <= clock
    roundAnyRawFNToRecFN.reset <= reset
    roundAnyRawFNToRecFN.io.invalidExc <= UInt<1>("h00") @[INToRecFN.scala 67:44]
    roundAnyRawFNToRecFN.io.infiniteExc <= UInt<1>("h00") @[INToRecFN.scala 68:44]
    roundAnyRawFNToRecFN.io.in <- intAsRawFloat @[INToRecFN.scala 69:44]
    roundAnyRawFNToRecFN.io.roundingMode <= io.roundingMode @[INToRecFN.scala 70:44]
    roundAnyRawFNToRecFN.io.detectTininess <= io.detectTininess @[INToRecFN.scala 71:44]
    io.out <= roundAnyRawFNToRecFN.io.out @[INToRecFN.scala 72:23]
    io.exceptionFlags <= roundAnyRawFNToRecFN.io.exceptionFlags @[INToRecFN.scala 73:23]
    
  module ValExec_I32ToRecF64 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<32>, flip roundingMode : UInt<3>, flip detectTininess : UInt<1>, expected : {flip out : UInt<64>, flip exceptionFlags : UInt<5>, recOut : UInt<65>}, actual : {out : UInt<65>, exceptionFlags : UInt<5>}, check : UInt<1>, pass : UInt<1>}
    
    clock is invalid
    reset is invalid
    io is invalid
    inst iNToRecFN of INToRecFN @[ValExec_INToRecFN.scala 114:27]
    iNToRecFN.io is invalid
    iNToRecFN.clock <= clock
    iNToRecFN.reset <= reset
    iNToRecFN.io.signedIn <= UInt<1>("h01") @[ValExec_INToRecFN.scala 115:27]
    iNToRecFN.io.in <= io.in @[ValExec_INToRecFN.scala 116:21]
    iNToRecFN.io.roundingMode <= io.roundingMode @[ValExec_INToRecFN.scala 117:33]
    iNToRecFN.io.detectTininess <= io.detectTininess @[ValExec_INToRecFN.scala 118:33]
    node _T = bits(io.expected.out, 63, 63) @[rawFloatFromFN.scala 46:22]
    node _T_1 = bits(io.expected.out, 62, 52) @[rawFloatFromFN.scala 47:23]
    node _T_2 = bits(io.expected.out, 51, 0) @[rawFloatFromFN.scala 48:25]
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
    io.expected.recOut <= _T_138 @[ValExec_INToRecFN.scala 120:24]
    io.actual.out <= iNToRecFN.io.out @[ValExec_INToRecFN.scala 122:19]
    io.actual.exceptionFlags <= iNToRecFN.io.exceptionFlags @[ValExec_INToRecFN.scala 123:30]
    io.check <= UInt<1>("h01") @[ValExec_INToRecFN.scala 125:14]
    node _T_139 = bits(io.actual.out, 64, 61) @[tests.scala 46:22]
    node _T_140 = bits(io.expected.recOut, 64, 61) @[tests.scala 47:22]
    node _T_141 = bits(_T_139, 2, 0) @[tests.scala 48:19]
    node _T_142 = eq(_T_141, UInt<1>("h00")) @[tests.scala 48:26]
    node _T_143 = bits(_T_139, 2, 0) @[tests.scala 48:48]
    node _T_144 = eq(_T_143, UInt<3>("h07")) @[tests.scala 48:55]
    node _T_145 = or(_T_142, _T_144) @[tests.scala 48:39]
    node _T_146 = eq(_T_139, _T_140) @[tests.scala 49:20]
    node _T_147 = bits(io.actual.out, 51, 0) @[tests.scala 49:36]
    node _T_148 = bits(io.expected.recOut, 51, 0) @[tests.scala 49:59]
    node _T_149 = eq(_T_147, _T_148) @[tests.scala 49:54]
    node _T_150 = and(_T_146, _T_149) @[tests.scala 49:31]
    node _T_151 = bits(_T_139, 2, 0) @[tests.scala 50:23]
    node _T_152 = eq(_T_151, UInt<3>("h06")) @[tests.scala 50:30]
    node _T_153 = eq(_T_139, _T_140) @[tests.scala 50:51]
    node _T_154 = eq(io.actual.out, io.expected.recOut) @[tests.scala 50:66]
    node _T_155 = mux(_T_152, _T_153, _T_154) @[tests.scala 50:16]
    node _T_156 = mux(_T_145, _T_150, _T_155) @[tests.scala 48:12]
    node _T_157 = eq(io.actual.exceptionFlags, io.expected.exceptionFlags) @[ValExec_INToRecFN.scala 128:35]
    node _T_158 = and(_T_156, _T_157) @[ValExec_INToRecFN.scala 127:75]
    io.pass <= _T_158 @[ValExec_INToRecFN.scala 126:13]
    
