;buildInfoPackage: chisel3, version: 3.2-SNAPSHOT, scalaVersion: 2.12.10, sbtVersion: 1.3.2
circuit ValExec_RecF64ToRecF16 : 
  module RoundAnyRawFNToRecFN : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip invalidExc : UInt<1>, flip infiniteExc : UInt<1>, flip in : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<13>, sig : UInt<54>}, flip roundingMode : UInt<3>, flip detectTininess : UInt<1>, out : UInt<17>, exceptionFlags : UInt<5>}
    
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
    node sAdjustedExp = add(io.in.sExp, asSInt(UInt<12>("h0820"))) @[RoundAnyRawFNToRecFN.scala 108:24]
    node _T_3 = bits(io.in.sig, 53, 41) @[RoundAnyRawFNToRecFN.scala 114:26]
    node _T_4 = bits(io.in.sig, 40, 0) @[RoundAnyRawFNToRecFN.scala 115:26]
    node _T_5 = neq(_T_4, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 115:60]
    node adjustedSig = cat(_T_3, _T_5) @[Cat.scala 29:58]
    wire common_expOut : UInt<6> @[RoundAnyRawFNToRecFN.scala 120:31]
    common_expOut is invalid @[RoundAnyRawFNToRecFN.scala 120:31]
    wire common_fractOut : UInt<10> @[RoundAnyRawFNToRecFN.scala 121:31]
    common_fractOut is invalid @[RoundAnyRawFNToRecFN.scala 121:31]
    wire common_overflow : UInt<1> @[RoundAnyRawFNToRecFN.scala 122:37]
    common_overflow is invalid @[RoundAnyRawFNToRecFN.scala 122:37]
    wire common_totalUnderflow : UInt<1> @[RoundAnyRawFNToRecFN.scala 123:37]
    common_totalUnderflow is invalid @[RoundAnyRawFNToRecFN.scala 123:37]
    wire common_underflow : UInt<1> @[RoundAnyRawFNToRecFN.scala 124:37]
    common_underflow is invalid @[RoundAnyRawFNToRecFN.scala 124:37]
    wire common_inexact : UInt<1> @[RoundAnyRawFNToRecFN.scala 125:37]
    common_inexact is invalid @[RoundAnyRawFNToRecFN.scala 125:37]
    node _T_6 = bits(sAdjustedExp, 5, 0) @[RoundAnyRawFNToRecFN.scala 154:37]
    node _T_7 = not(_T_6) @[primitives.scala 51:21]
    node _T_8 = dshr(asSInt(UInt<65>("h010000000000000000")), _T_7) @[primitives.scala 77:58]
    node _T_9 = bits(_T_8, 18, 7) @[primitives.scala 79:22]
    node _T_10 = bits(_T_9, 7, 0) @[Bitwise.scala 108:18]
    node _T_11 = shl(UInt<4>("h0f"), 4) @[Bitwise.scala 101:47]
    node _T_12 = xor(UInt<8>("h0ff"), _T_11) @[Bitwise.scala 101:21]
    node _T_13 = shr(_T_10, 4) @[Bitwise.scala 102:21]
    node _T_14 = and(_T_13, _T_12) @[Bitwise.scala 102:31]
    node _T_15 = bits(_T_10, 3, 0) @[Bitwise.scala 102:46]
    node _T_16 = shl(_T_15, 4) @[Bitwise.scala 102:65]
    node _T_17 = not(_T_12) @[Bitwise.scala 102:77]
    node _T_18 = and(_T_16, _T_17) @[Bitwise.scala 102:75]
    node _T_19 = or(_T_14, _T_18) @[Bitwise.scala 102:39]
    node _T_20 = bits(_T_12, 5, 0) @[Bitwise.scala 101:28]
    node _T_21 = shl(_T_20, 2) @[Bitwise.scala 101:47]
    node _T_22 = xor(_T_12, _T_21) @[Bitwise.scala 101:21]
    node _T_23 = shr(_T_19, 2) @[Bitwise.scala 102:21]
    node _T_24 = and(_T_23, _T_22) @[Bitwise.scala 102:31]
    node _T_25 = bits(_T_19, 5, 0) @[Bitwise.scala 102:46]
    node _T_26 = shl(_T_25, 2) @[Bitwise.scala 102:65]
    node _T_27 = not(_T_22) @[Bitwise.scala 102:77]
    node _T_28 = and(_T_26, _T_27) @[Bitwise.scala 102:75]
    node _T_29 = or(_T_24, _T_28) @[Bitwise.scala 102:39]
    node _T_30 = bits(_T_22, 6, 0) @[Bitwise.scala 101:28]
    node _T_31 = shl(_T_30, 1) @[Bitwise.scala 101:47]
    node _T_32 = xor(_T_22, _T_31) @[Bitwise.scala 101:21]
    node _T_33 = shr(_T_29, 1) @[Bitwise.scala 102:21]
    node _T_34 = and(_T_33, _T_32) @[Bitwise.scala 102:31]
    node _T_35 = bits(_T_29, 6, 0) @[Bitwise.scala 102:46]
    node _T_36 = shl(_T_35, 1) @[Bitwise.scala 102:65]
    node _T_37 = not(_T_32) @[Bitwise.scala 102:77]
    node _T_38 = and(_T_36, _T_37) @[Bitwise.scala 102:75]
    node _T_39 = or(_T_34, _T_38) @[Bitwise.scala 102:39]
    node _T_40 = bits(_T_9, 11, 8) @[Bitwise.scala 108:44]
    node _T_41 = bits(_T_40, 1, 0) @[Bitwise.scala 108:18]
    node _T_42 = bits(_T_41, 0, 0) @[Bitwise.scala 108:18]
    node _T_43 = bits(_T_41, 1, 1) @[Bitwise.scala 108:44]
    node _T_44 = cat(_T_42, _T_43) @[Cat.scala 29:58]
    node _T_45 = bits(_T_40, 3, 2) @[Bitwise.scala 108:44]
    node _T_46 = bits(_T_45, 0, 0) @[Bitwise.scala 108:18]
    node _T_47 = bits(_T_45, 1, 1) @[Bitwise.scala 108:44]
    node _T_48 = cat(_T_46, _T_47) @[Cat.scala 29:58]
    node _T_49 = cat(_T_44, _T_48) @[Cat.scala 29:58]
    node _T_50 = cat(_T_39, _T_49) @[Cat.scala 29:58]
    node _T_51 = or(_T_50, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 157:23]
    node _T_52 = cat(_T_51, UInt<2>("h03")) @[Cat.scala 29:58]
    node _T_53 = shr(_T_52, 1) @[RoundAnyRawFNToRecFN.scala 160:57]
    node _T_54 = cat(UInt<1>("h00"), _T_53) @[Cat.scala 29:58]
    node _T_55 = not(_T_54) @[RoundAnyRawFNToRecFN.scala 161:28]
    node _T_56 = and(_T_55, _T_52) @[RoundAnyRawFNToRecFN.scala 161:46]
    node _T_57 = and(adjustedSig, _T_56) @[RoundAnyRawFNToRecFN.scala 162:40]
    node _T_58 = neq(_T_57, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 162:56]
    node _T_59 = and(adjustedSig, _T_54) @[RoundAnyRawFNToRecFN.scala 163:42]
    node _T_60 = neq(_T_59, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 163:62]
    node _T_61 = or(_T_58, _T_60) @[RoundAnyRawFNToRecFN.scala 164:36]
    node _T_62 = or(roundingMode_near_even, roundingMode_near_maxMag) @[RoundAnyRawFNToRecFN.scala 167:38]
    node _T_63 = and(_T_62, _T_58) @[RoundAnyRawFNToRecFN.scala 167:67]
    node _T_64 = and(roundMagUp, _T_61) @[RoundAnyRawFNToRecFN.scala 169:29]
    node _T_65 = or(_T_63, _T_64) @[RoundAnyRawFNToRecFN.scala 168:31]
    node _T_66 = or(adjustedSig, _T_52) @[RoundAnyRawFNToRecFN.scala 172:32]
    node _T_67 = shr(_T_66, 2) @[RoundAnyRawFNToRecFN.scala 172:44]
    node _T_68 = add(_T_67, UInt<1>("h01")) @[RoundAnyRawFNToRecFN.scala 172:49]
    node _T_69 = and(roundingMode_near_even, _T_58) @[RoundAnyRawFNToRecFN.scala 173:49]
    node _T_70 = eq(_T_60, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 174:30]
    node _T_71 = and(_T_69, _T_70) @[RoundAnyRawFNToRecFN.scala 173:64]
    node _T_72 = shr(_T_52, 1) @[RoundAnyRawFNToRecFN.scala 175:35]
    node _T_73 = mux(_T_71, _T_72, UInt<13>("h00")) @[RoundAnyRawFNToRecFN.scala 173:25]
    node _T_74 = not(_T_73) @[RoundAnyRawFNToRecFN.scala 173:21]
    node _T_75 = and(_T_68, _T_74) @[RoundAnyRawFNToRecFN.scala 172:61]
    node _T_76 = not(_T_52) @[RoundAnyRawFNToRecFN.scala 178:32]
    node _T_77 = and(adjustedSig, _T_76) @[RoundAnyRawFNToRecFN.scala 178:30]
    node _T_78 = shr(_T_77, 2) @[RoundAnyRawFNToRecFN.scala 178:43]
    node _T_79 = and(roundingMode_odd, _T_61) @[RoundAnyRawFNToRecFN.scala 179:42]
    node _T_80 = shr(_T_56, 1) @[RoundAnyRawFNToRecFN.scala 179:67]
    node _T_81 = mux(_T_79, _T_80, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 179:24]
    node _T_82 = or(_T_78, _T_81) @[RoundAnyRawFNToRecFN.scala 178:47]
    node _T_83 = mux(_T_65, _T_75, _T_82) @[RoundAnyRawFNToRecFN.scala 171:16]
    node _T_84 = shr(_T_83, 11) @[RoundAnyRawFNToRecFN.scala 183:54]
    node _T_85 = cvt(_T_84) @[RoundAnyRawFNToRecFN.scala 183:69]
    node _T_86 = add(sAdjustedExp, _T_85) @[RoundAnyRawFNToRecFN.scala 183:40]
    node _T_87 = bits(_T_86, 5, 0) @[RoundAnyRawFNToRecFN.scala 185:37]
    common_expOut <= _T_87 @[RoundAnyRawFNToRecFN.scala 185:23]
    node _T_88 = bits(_T_83, 10, 1) @[RoundAnyRawFNToRecFN.scala 188:27]
    node _T_89 = bits(_T_83, 9, 0) @[RoundAnyRawFNToRecFN.scala 189:27]
    node _T_90 = mux(UInt<1>("h00"), _T_88, _T_89) @[RoundAnyRawFNToRecFN.scala 187:16]
    common_fractOut <= _T_90 @[RoundAnyRawFNToRecFN.scala 186:25]
    node _T_91 = shr(_T_86, 4) @[RoundAnyRawFNToRecFN.scala 194:30]
    node _T_92 = geq(_T_91, asSInt(UInt<3>("h03"))) @[RoundAnyRawFNToRecFN.scala 194:50]
    common_overflow <= _T_92 @[RoundAnyRawFNToRecFN.scala 191:25]
    node _T_93 = lt(_T_86, asSInt(UInt<5>("h08"))) @[RoundAnyRawFNToRecFN.scala 198:31]
    common_totalUnderflow <= _T_93 @[RoundAnyRawFNToRecFN.scala 195:31]
    node _T_94 = bits(adjustedSig, 2, 2) @[RoundAnyRawFNToRecFN.scala 201:45]
    node _T_95 = bits(adjustedSig, 1, 1) @[RoundAnyRawFNToRecFN.scala 201:61]
    node _T_96 = mux(UInt<1>("h00"), _T_94, _T_95) @[RoundAnyRawFNToRecFN.scala 201:16]
    node _T_97 = bits(adjustedSig, 2, 2) @[RoundAnyRawFNToRecFN.scala 203:44]
    node _T_98 = and(UInt<1>("h00"), _T_97) @[RoundAnyRawFNToRecFN.scala 203:30]
    node _T_99 = bits(adjustedSig, 1, 0) @[RoundAnyRawFNToRecFN.scala 203:63]
    node _T_100 = neq(_T_99, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 203:70]
    node _T_101 = or(_T_98, _T_100) @[RoundAnyRawFNToRecFN.scala 203:49]
    node _T_102 = or(roundingMode_near_even, roundingMode_near_maxMag) @[RoundAnyRawFNToRecFN.scala 205:38]
    node _T_103 = and(_T_102, _T_96) @[RoundAnyRawFNToRecFN.scala 205:67]
    node _T_104 = and(roundMagUp, _T_101) @[RoundAnyRawFNToRecFN.scala 207:29]
    node _T_105 = or(_T_103, _T_104) @[RoundAnyRawFNToRecFN.scala 206:46]
    node _T_106 = bits(_T_83, 12, 12) @[RoundAnyRawFNToRecFN.scala 210:27]
    node _T_107 = bits(_T_83, 11, 11) @[RoundAnyRawFNToRecFN.scala 211:27]
    node _T_108 = mux(UInt<1>("h00"), _T_106, _T_107) @[RoundAnyRawFNToRecFN.scala 209:16]
    node _T_109 = shr(sAdjustedExp, 5) @[RoundAnyRawFNToRecFN.scala 218:48]
    node _T_110 = leq(_T_109, asSInt(UInt<1>("h00"))) @[RoundAnyRawFNToRecFN.scala 218:62]
    node _T_111 = and(_T_61, _T_110) @[RoundAnyRawFNToRecFN.scala 218:32]
    node _T_112 = bits(_T_52, 3, 3) @[RoundAnyRawFNToRecFN.scala 219:57]
    node _T_113 = bits(_T_52, 2, 2) @[RoundAnyRawFNToRecFN.scala 219:71]
    node _T_114 = mux(UInt<1>("h00"), _T_112, _T_113) @[RoundAnyRawFNToRecFN.scala 219:30]
    node _T_115 = and(_T_111, _T_114) @[RoundAnyRawFNToRecFN.scala 218:74]
    node _T_116 = eq(io.detectTininess, UInt<1>("h01")) @[RoundAnyRawFNToRecFN.scala 220:49]
    node _T_117 = bits(_T_52, 4, 4) @[RoundAnyRawFNToRecFN.scala 222:49]
    node _T_118 = bits(_T_52, 3, 3) @[RoundAnyRawFNToRecFN.scala 223:49]
    node _T_119 = mux(UInt<1>("h00"), _T_117, _T_118) @[RoundAnyRawFNToRecFN.scala 221:39]
    node _T_120 = eq(_T_119, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 221:34]
    node _T_121 = and(_T_116, _T_120) @[RoundAnyRawFNToRecFN.scala 220:77]
    node _T_122 = and(_T_121, _T_108) @[RoundAnyRawFNToRecFN.scala 224:38]
    node _T_123 = and(_T_122, _T_58) @[RoundAnyRawFNToRecFN.scala 225:45]
    node _T_124 = and(_T_123, _T_105) @[RoundAnyRawFNToRecFN.scala 225:60]
    node _T_125 = eq(_T_124, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 220:27]
    node _T_126 = and(_T_115, _T_125) @[RoundAnyRawFNToRecFN.scala 219:76]
    node _T_127 = or(common_totalUnderflow, _T_126) @[RoundAnyRawFNToRecFN.scala 215:40]
    common_underflow <= _T_127 @[RoundAnyRawFNToRecFN.scala 213:26]
    node _T_128 = or(common_totalUnderflow, _T_61) @[RoundAnyRawFNToRecFN.scala 228:49]
    common_inexact <= _T_128 @[RoundAnyRawFNToRecFN.scala 228:24]
    node isNaNOut = or(io.invalidExc, io.in.isNaN) @[RoundAnyRawFNToRecFN.scala 233:34]
    node notNaN_isSpecialInfOut = or(io.infiniteExc, io.in.isInf) @[RoundAnyRawFNToRecFN.scala 234:49]
    node _T_129 = eq(isNaNOut, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 235:22]
    node _T_130 = eq(notNaN_isSpecialInfOut, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 235:36]
    node _T_131 = and(_T_129, _T_130) @[RoundAnyRawFNToRecFN.scala 235:33]
    node _T_132 = eq(io.in.isZero, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 235:64]
    node commonCase = and(_T_131, _T_132) @[RoundAnyRawFNToRecFN.scala 235:61]
    node overflow = and(commonCase, common_overflow) @[RoundAnyRawFNToRecFN.scala 236:32]
    node underflow = and(commonCase, common_underflow) @[RoundAnyRawFNToRecFN.scala 237:32]
    node _T_133 = and(commonCase, common_inexact) @[RoundAnyRawFNToRecFN.scala 238:43]
    node inexact = or(overflow, _T_133) @[RoundAnyRawFNToRecFN.scala 238:28]
    node _T_134 = or(roundingMode_near_even, roundingMode_near_maxMag) @[RoundAnyRawFNToRecFN.scala 241:32]
    node overflow_roundMagUp = or(_T_134, roundMagUp) @[RoundAnyRawFNToRecFN.scala 241:60]
    node _T_135 = and(commonCase, common_totalUnderflow) @[RoundAnyRawFNToRecFN.scala 243:20]
    node _T_136 = or(roundMagUp, roundingMode_odd) @[RoundAnyRawFNToRecFN.scala 243:60]
    node pegMinNonzeroMagOut = and(_T_135, _T_136) @[RoundAnyRawFNToRecFN.scala 243:45]
    node _T_137 = eq(overflow_roundMagUp, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 244:42]
    node pegMaxFiniteMagOut = and(overflow, _T_137) @[RoundAnyRawFNToRecFN.scala 244:39]
    node _T_138 = and(overflow, overflow_roundMagUp) @[RoundAnyRawFNToRecFN.scala 246:45]
    node notNaN_isInfOut = or(notNaN_isSpecialInfOut, _T_138) @[RoundAnyRawFNToRecFN.scala 246:32]
    node signOut = mux(isNaNOut, UInt<1>("h00"), io.in.sign) @[RoundAnyRawFNToRecFN.scala 248:22]
    node _T_139 = or(io.in.isZero, common_totalUnderflow) @[RoundAnyRawFNToRecFN.scala 251:32]
    node _T_140 = mux(_T_139, UInt<6>("h038"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 251:18]
    node _T_141 = not(_T_140) @[RoundAnyRawFNToRecFN.scala 251:14]
    node _T_142 = and(common_expOut, _T_141) @[RoundAnyRawFNToRecFN.scala 250:24]
    node _T_143 = not(UInt<6>("h08")) @[RoundAnyRawFNToRecFN.scala 256:19]
    node _T_144 = mux(pegMinNonzeroMagOut, _T_143, UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 255:18]
    node _T_145 = not(_T_144) @[RoundAnyRawFNToRecFN.scala 255:14]
    node _T_146 = and(_T_142, _T_145) @[RoundAnyRawFNToRecFN.scala 254:17]
    node _T_147 = mux(pegMaxFiniteMagOut, UInt<6>("h010"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 259:18]
    node _T_148 = not(_T_147) @[RoundAnyRawFNToRecFN.scala 259:14]
    node _T_149 = and(_T_146, _T_148) @[RoundAnyRawFNToRecFN.scala 258:17]
    node _T_150 = mux(notNaN_isInfOut, UInt<6>("h08"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 263:18]
    node _T_151 = not(_T_150) @[RoundAnyRawFNToRecFN.scala 263:14]
    node _T_152 = and(_T_149, _T_151) @[RoundAnyRawFNToRecFN.scala 262:17]
    node _T_153 = mux(pegMinNonzeroMagOut, UInt<6>("h08"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 267:16]
    node _T_154 = or(_T_152, _T_153) @[RoundAnyRawFNToRecFN.scala 266:18]
    node _T_155 = mux(pegMaxFiniteMagOut, UInt<6>("h02f"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 271:16]
    node _T_156 = or(_T_154, _T_155) @[RoundAnyRawFNToRecFN.scala 270:15]
    node _T_157 = mux(notNaN_isInfOut, UInt<6>("h030"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 275:16]
    node _T_158 = or(_T_156, _T_157) @[RoundAnyRawFNToRecFN.scala 274:15]
    node _T_159 = mux(isNaNOut, UInt<6>("h038"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 276:16]
    node expOut = or(_T_158, _T_159) @[RoundAnyRawFNToRecFN.scala 275:77]
    node _T_160 = or(isNaNOut, io.in.isZero) @[RoundAnyRawFNToRecFN.scala 278:22]
    node _T_161 = or(_T_160, common_totalUnderflow) @[RoundAnyRawFNToRecFN.scala 278:38]
    node _T_162 = mux(isNaNOut, UInt<10>("h0200"), UInt<1>("h00")) @[RoundAnyRawFNToRecFN.scala 279:16]
    node _T_163 = mux(_T_161, _T_162, common_fractOut) @[RoundAnyRawFNToRecFN.scala 278:12]
    node _T_164 = bits(pegMaxFiniteMagOut, 0, 0) @[Bitwise.scala 71:15]
    node _T_165 = mux(_T_164, UInt<10>("h03ff"), UInt<10>("h00")) @[Bitwise.scala 71:12]
    node fractOut = or(_T_163, _T_165) @[RoundAnyRawFNToRecFN.scala 281:11]
    node _T_166 = cat(signOut, expOut) @[Cat.scala 29:58]
    node _T_167 = cat(_T_166, fractOut) @[Cat.scala 29:58]
    io.out <= _T_167 @[RoundAnyRawFNToRecFN.scala 284:12]
    node _T_168 = cat(underflow, inexact) @[Cat.scala 29:58]
    node _T_169 = cat(io.invalidExc, io.infiniteExc) @[Cat.scala 29:58]
    node _T_170 = cat(_T_169, overflow) @[Cat.scala 29:58]
    node _T_171 = cat(_T_170, _T_168) @[Cat.scala 29:58]
    io.exceptionFlags <= _T_171 @[RoundAnyRawFNToRecFN.scala 285:23]
    
  module RecFNToRecFN : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<65>, flip roundingMode : UInt<3>, flip detectTininess : UInt<1>, out : UInt<17>, exceptionFlags : UInt<5>}
    
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
    inst RoundAnyRawFNToRecFN of RoundAnyRawFNToRecFN @[RecFNToRecFN.scala 72:19]
    RoundAnyRawFNToRecFN.io is invalid
    RoundAnyRawFNToRecFN.clock <= clock
    RoundAnyRawFNToRecFN.reset <= reset
    node _T_16 = bits(rawIn.sig, 51, 51) @[common.scala 81:56]
    node _T_17 = eq(_T_16, UInt<1>("h00")) @[common.scala 81:49]
    node _T_18 = and(rawIn.isNaN, _T_17) @[common.scala 81:46]
    RoundAnyRawFNToRecFN.io.invalidExc <= _T_18 @[RecFNToRecFN.scala 80:48]
    RoundAnyRawFNToRecFN.io.infiniteExc <= UInt<1>("h00") @[RecFNToRecFN.scala 81:48]
    RoundAnyRawFNToRecFN.io.in <- rawIn @[RecFNToRecFN.scala 82:48]
    RoundAnyRawFNToRecFN.io.roundingMode <= io.roundingMode @[RecFNToRecFN.scala 83:48]
    RoundAnyRawFNToRecFN.io.detectTininess <= io.detectTininess @[RecFNToRecFN.scala 84:48]
    io.out <= RoundAnyRawFNToRecFN.io.out @[RecFNToRecFN.scala 85:27]
    io.exceptionFlags <= RoundAnyRawFNToRecFN.io.exceptionFlags @[RecFNToRecFN.scala 86:27]
    
  module ValExec_RecF64ToRecF16 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<64>, flip roundingMode : UInt<3>, flip detectTininess : UInt<1>, expected : {flip out : UInt<16>, flip exceptionFlags : UInt<5>, recOut : UInt<17>}, actual : {out : UInt<17>, exceptionFlags : UInt<5>}, check : UInt<1>, pass : UInt<1>}
    
    clock is invalid
    reset is invalid
    io is invalid
    inst recFNToRecFN of RecFNToRecFN @[ValExec_RecFNToRecFN.scala 68:15]
    recFNToRecFN.io is invalid
    recFNToRecFN.clock <= clock
    recFNToRecFN.reset <= reset
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
    recFNToRecFN.io.in <= _T_138 @[ValExec_RecFNToRecFN.scala 70:24]
    recFNToRecFN.io.roundingMode <= io.roundingMode @[ValExec_RecFNToRecFN.scala 71:36]
    recFNToRecFN.io.detectTininess <= io.detectTininess @[ValExec_RecFNToRecFN.scala 72:36]
    node _T_139 = bits(io.expected.out, 15, 15) @[rawFloatFromFN.scala 46:22]
    node _T_140 = bits(io.expected.out, 14, 10) @[rawFloatFromFN.scala 47:23]
    node _T_141 = bits(io.expected.out, 9, 0) @[rawFloatFromFN.scala 48:25]
    node _T_142 = eq(_T_140, UInt<1>("h00")) @[rawFloatFromFN.scala 50:34]
    node _T_143 = eq(_T_141, UInt<1>("h00")) @[rawFloatFromFN.scala 51:38]
    node _T_144 = bits(_T_141, 0, 0) @[primitives.scala 92:52]
    node _T_145 = bits(_T_141, 1, 1) @[primitives.scala 92:52]
    node _T_146 = bits(_T_141, 2, 2) @[primitives.scala 92:52]
    node _T_147 = bits(_T_141, 3, 3) @[primitives.scala 92:52]
    node _T_148 = bits(_T_141, 4, 4) @[primitives.scala 92:52]
    node _T_149 = bits(_T_141, 5, 5) @[primitives.scala 92:52]
    node _T_150 = bits(_T_141, 6, 6) @[primitives.scala 92:52]
    node _T_151 = bits(_T_141, 7, 7) @[primitives.scala 92:52]
    node _T_152 = bits(_T_141, 8, 8) @[primitives.scala 92:52]
    node _T_153 = bits(_T_141, 9, 9) @[primitives.scala 92:52]
    node _T_154 = mux(_T_145, UInt<4>("h08"), UInt<4>("h09")) @[Mux.scala 47:69]
    node _T_155 = mux(_T_146, UInt<3>("h07"), _T_154) @[Mux.scala 47:69]
    node _T_156 = mux(_T_147, UInt<3>("h06"), _T_155) @[Mux.scala 47:69]
    node _T_157 = mux(_T_148, UInt<3>("h05"), _T_156) @[Mux.scala 47:69]
    node _T_158 = mux(_T_149, UInt<3>("h04"), _T_157) @[Mux.scala 47:69]
    node _T_159 = mux(_T_150, UInt<2>("h03"), _T_158) @[Mux.scala 47:69]
    node _T_160 = mux(_T_151, UInt<2>("h02"), _T_159) @[Mux.scala 47:69]
    node _T_161 = mux(_T_152, UInt<1>("h01"), _T_160) @[Mux.scala 47:69]
    node _T_162 = mux(_T_153, UInt<1>("h00"), _T_161) @[Mux.scala 47:69]
    node _T_163 = dshl(_T_141, _T_162) @[rawFloatFromFN.scala 54:36]
    node _T_164 = bits(_T_163, 8, 0) @[rawFloatFromFN.scala 54:47]
    node _T_165 = shl(_T_164, 1) @[rawFloatFromFN.scala 54:64]
    node _T_166 = xor(_T_162, UInt<6>("h03f")) @[rawFloatFromFN.scala 57:26]
    node _T_167 = mux(_T_142, _T_166, _T_140) @[rawFloatFromFN.scala 56:16]
    node _T_168 = mux(_T_142, UInt<2>("h02"), UInt<1>("h01")) @[rawFloatFromFN.scala 60:27]
    node _T_169 = or(UInt<5>("h010"), _T_168) @[rawFloatFromFN.scala 60:22]
    node _T_170 = add(_T_167, _T_169) @[rawFloatFromFN.scala 59:15]
    node _T_171 = tail(_T_170, 1) @[rawFloatFromFN.scala 59:15]
    node _T_172 = and(_T_142, _T_143) @[rawFloatFromFN.scala 62:34]
    node _T_173 = bits(_T_171, 5, 4) @[rawFloatFromFN.scala 63:37]
    node _T_174 = eq(_T_173, UInt<2>("h03")) @[rawFloatFromFN.scala 63:62]
    wire _T_175 : {isNaN : UInt<1>, isInf : UInt<1>, isZero : UInt<1>, sign : UInt<1>, sExp : SInt<7>, sig : UInt<12>} @[rawFloatFromFN.scala 65:23]
    _T_175 is invalid @[rawFloatFromFN.scala 65:23]
    node _T_176 = eq(_T_143, UInt<1>("h00")) @[rawFloatFromFN.scala 66:36]
    node _T_177 = and(_T_174, _T_176) @[rawFloatFromFN.scala 66:33]
    _T_175.isNaN <= _T_177 @[rawFloatFromFN.scala 66:20]
    node _T_178 = and(_T_174, _T_143) @[rawFloatFromFN.scala 67:33]
    _T_175.isInf <= _T_178 @[rawFloatFromFN.scala 67:20]
    _T_175.isZero <= _T_172 @[rawFloatFromFN.scala 68:20]
    _T_175.sign <= _T_139 @[rawFloatFromFN.scala 69:20]
    node _T_179 = bits(_T_171, 5, 0) @[rawFloatFromFN.scala 70:34]
    node _T_180 = cvt(_T_179) @[rawFloatFromFN.scala 70:48]
    _T_175.sExp <= _T_180 @[rawFloatFromFN.scala 70:20]
    node _T_181 = eq(_T_172, UInt<1>("h00")) @[rawFloatFromFN.scala 72:29]
    node _T_182 = mux(_T_142, _T_165, _T_141) @[rawFloatFromFN.scala 72:42]
    node _T_183 = cat(UInt<1>("h00"), _T_181) @[Cat.scala 29:58]
    node _T_184 = cat(_T_183, _T_182) @[Cat.scala 29:58]
    _T_175.sig <= _T_184 @[rawFloatFromFN.scala 71:17]
    node _T_185 = bits(_T_175.sExp, 5, 3) @[recFNFromFN.scala 48:53]
    node _T_186 = mux(_T_175.isZero, UInt<3>("h00"), _T_185) @[recFNFromFN.scala 48:16]
    node _T_187 = mux(_T_175.isNaN, UInt<1>("h01"), UInt<1>("h00")) @[recFNFromFN.scala 49:20]
    node _T_188 = or(_T_186, _T_187) @[recFNFromFN.scala 48:79]
    node _T_189 = bits(_T_175.sExp, 2, 0) @[recFNFromFN.scala 50:23]
    node _T_190 = bits(_T_175.sig, 9, 0) @[recFNFromFN.scala 51:22]
    node _T_191 = cat(_T_189, _T_190) @[Cat.scala 29:58]
    node _T_192 = cat(_T_175.sign, _T_188) @[Cat.scala 29:58]
    node _T_193 = cat(_T_192, _T_191) @[Cat.scala 29:58]
    io.expected.recOut <= _T_193 @[ValExec_RecFNToRecFN.scala 74:24]
    io.actual.out <= recFNToRecFN.io.out @[ValExec_RecFNToRecFN.scala 77:19]
    io.actual.exceptionFlags <= recFNToRecFN.io.exceptionFlags @[ValExec_RecFNToRecFN.scala 78:30]
    io.check <= UInt<1>("h01") @[ValExec_RecFNToRecFN.scala 80:14]
    node _T_194 = bits(io.actual.out, 16, 13) @[tests.scala 46:22]
    node _T_195 = bits(io.expected.recOut, 16, 13) @[tests.scala 47:22]
    node _T_196 = bits(_T_194, 2, 0) @[tests.scala 48:19]
    node _T_197 = eq(_T_196, UInt<1>("h00")) @[tests.scala 48:26]
    node _T_198 = bits(_T_194, 2, 0) @[tests.scala 48:48]
    node _T_199 = eq(_T_198, UInt<3>("h07")) @[tests.scala 48:55]
    node _T_200 = or(_T_197, _T_199) @[tests.scala 48:39]
    node _T_201 = eq(_T_194, _T_195) @[tests.scala 49:20]
    node _T_202 = bits(io.actual.out, 9, 0) @[tests.scala 49:36]
    node _T_203 = bits(io.expected.recOut, 9, 0) @[tests.scala 49:59]
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
    
