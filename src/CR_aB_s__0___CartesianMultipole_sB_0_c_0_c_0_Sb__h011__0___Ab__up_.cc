/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp18 * fp11;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp6;
LIBINT2_REALTYPE fp208;
fp208 = 1.0000000000000000e+00 * fp203;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp18 * fp12;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp6;
LIBINT2_REALTYPE fp209;
fp209 = inteval->two_alpha0_ket[vi] * fp205;
LIBINT2_REALTYPE fp207;
fp207 = fp209 - fp208;
LIBINT2_REALTYPE fp252;
fp252 = inteval->two_alpha0_ket[vi] * fp207;
target[((hsi*21+1)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp18 * fp13;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp4;
LIBINT2_REALTYPE fp201;
fp201 = 1.0000000000000000e+00 * fp196;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp18 * fp13;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp5;
LIBINT2_REALTYPE fp202;
fp202 = inteval->two_alpha0_ket[vi] * fp198;
LIBINT2_REALTYPE fp200;
fp200 = fp202 - fp201;
LIBINT2_REALTYPE fp251;
fp251 = inteval->two_alpha0_ket[vi] * fp200;
target[((hsi*21+2)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp17 * fp13;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp6;
LIBINT2_REALTYPE fp194;
fp194 = 2.0000000000000000e+00 * fp189;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp17 * fp10;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp6;
LIBINT2_REALTYPE fp195;
fp195 = inteval->two_alpha0_ket[vi] * fp191;
LIBINT2_REALTYPE fp193;
fp193 = fp195 - fp194;
LIBINT2_REALTYPE fp250;
fp250 = inteval->two_alpha0_ket[vi] * fp193;
target[((hsi*21+3)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp176;
fp176 = fp17 * fp11;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp4;
LIBINT2_REALTYPE fp184;
fp184 = 1.0000000000000000e+00 * fp175;
LIBINT2_REALTYPE fp178;
fp178 = fp17 * fp12;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp4;
LIBINT2_REALTYPE fp185;
fp185 = inteval->two_alpha0_ket[vi] * fp177;
LIBINT2_REALTYPE fp183;
fp183 = fp185 - fp184;
LIBINT2_REALTYPE fp248;
fp248 = 1.0000000000000000e+00 * fp183;
LIBINT2_REALTYPE fp180;
fp180 = fp17 * fp11;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp5;
LIBINT2_REALTYPE fp187;
fp187 = 1.0000000000000000e+00 * fp179;
LIBINT2_REALTYPE fp182;
fp182 = fp17 * fp12;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp5;
LIBINT2_REALTYPE fp188;
fp188 = inteval->two_alpha0_ket[vi] * fp181;
LIBINT2_REALTYPE fp186;
fp186 = fp188 - fp187;
LIBINT2_REALTYPE fp249;
fp249 = inteval->two_alpha0_ket[vi] * fp186;
LIBINT2_REALTYPE fp247;
fp247 = fp249 - fp248;
target[((hsi*21+4)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp173;
fp173 = 2.0000000000000000e+00 * fp189;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp17 * fp13;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp3;
LIBINT2_REALTYPE fp174;
fp174 = inteval->two_alpha0_ket[vi] * fp170;
LIBINT2_REALTYPE fp172;
fp172 = fp174 - fp173;
LIBINT2_REALTYPE fp246;
fp246 = inteval->two_alpha0_ket[vi] * fp172;
target[((hsi*21+5)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp16 * fp12;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp6;
LIBINT2_REALTYPE fp168;
fp168 = 3.0000000000000000e+00 * fp163;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp16 * fp9;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp6;
LIBINT2_REALTYPE fp169;
fp169 = inteval->two_alpha0_ket[vi] * fp165;
LIBINT2_REALTYPE fp167;
fp167 = fp169 - fp168;
LIBINT2_REALTYPE fp245;
fp245 = inteval->two_alpha0_ket[vi] * fp167;
target[((hsi*21+6)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp150;
fp150 = fp16 * fp13;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp4;
LIBINT2_REALTYPE fp158;
fp158 = 2.0000000000000000e+00 * fp149;
LIBINT2_REALTYPE fp152;
fp152 = fp16 * fp10;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp4;
LIBINT2_REALTYPE fp159;
fp159 = inteval->two_alpha0_ket[vi] * fp151;
LIBINT2_REALTYPE fp157;
fp157 = fp159 - fp158;
LIBINT2_REALTYPE fp243;
fp243 = 1.0000000000000000e+00 * fp157;
LIBINT2_REALTYPE fp154;
fp154 = fp16 * fp13;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp5;
LIBINT2_REALTYPE fp161;
fp161 = 2.0000000000000000e+00 * fp153;
LIBINT2_REALTYPE fp156;
fp156 = fp16 * fp10;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp5;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_ket[vi] * fp155;
LIBINT2_REALTYPE fp160;
fp160 = fp162 - fp161;
LIBINT2_REALTYPE fp244;
fp244 = inteval->two_alpha0_ket[vi] * fp160;
LIBINT2_REALTYPE fp242;
fp242 = fp244 - fp243;
target[((hsi*21+7)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp138;
fp138 = fp16 * fp11;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp6;
LIBINT2_REALTYPE fp144;
fp144 = 1.0000000000000000e+00 * fp137;
LIBINT2_REALTYPE fp145;
fp145 = inteval->two_alpha0_ket[vi] * fp163;
LIBINT2_REALTYPE fp143;
fp143 = fp145 - fp144;
LIBINT2_REALTYPE fp240;
fp240 = 2.0000000000000000e+00 * fp143;
LIBINT2_REALTYPE fp140;
fp140 = fp16 * fp11;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp3;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp16 * fp12;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp3;
LIBINT2_REALTYPE fp148;
fp148 = inteval->two_alpha0_ket[vi] * fp141;
LIBINT2_REALTYPE fp146;
fp146 = fp148 - fp147;
LIBINT2_REALTYPE fp241;
fp241 = inteval->two_alpha0_ket[vi] * fp146;
LIBINT2_REALTYPE fp239;
fp239 = fp241 - fp240;
target[((hsi*21+8)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp135;
fp135 = 3.0000000000000000e+00 * fp153;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp16 * fp13;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp2;
LIBINT2_REALTYPE fp136;
fp136 = inteval->two_alpha0_ket[vi] * fp132;
LIBINT2_REALTYPE fp134;
fp134 = fp136 - fp135;
LIBINT2_REALTYPE fp238;
fp238 = inteval->two_alpha0_ket[vi] * fp134;
target[((hsi*21+9)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src0[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp19 * fp13;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp6;
LIBINT2_REALTYPE fp212;
fp212 = inteval->two_alpha0_ket[vi] * fp210;
LIBINT2_REALTYPE fp253;
fp253 = inteval->two_alpha0_ket[vi] * fp212;
target[((hsi*21+0)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp15 * fp12;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp4;
LIBINT2_REALTYPE fp120;
fp120 = 3.0000000000000000e+00 * fp111;
LIBINT2_REALTYPE fp114;
fp114 = fp15 * fp9;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp4;
LIBINT2_REALTYPE fp121;
fp121 = inteval->two_alpha0_ket[vi] * fp113;
LIBINT2_REALTYPE fp119;
fp119 = fp121 - fp120;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * fp119;
LIBINT2_REALTYPE fp116;
fp116 = fp15 * fp12;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp5;
LIBINT2_REALTYPE fp123;
fp123 = 3.0000000000000000e+00 * fp115;
LIBINT2_REALTYPE fp118;
fp118 = fp15 * fp9;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp5;
LIBINT2_REALTYPE fp124;
fp124 = inteval->two_alpha0_ket[vi] * fp117;
LIBINT2_REALTYPE fp122;
fp122 = fp124 - fp123;
LIBINT2_REALTYPE fp236;
fp236 = inteval->two_alpha0_ket[vi] * fp122;
LIBINT2_REALTYPE fp234;
fp234 = fp236 - fp235;
target[((hsi*21+11)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp100;
fp100 = fp15 * fp13;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp6;
LIBINT2_REALTYPE fp106;
fp106 = 2.0000000000000000e+00 * fp99;
LIBINT2_REALTYPE fp126;
fp126 = fp15 * fp10;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp6;
LIBINT2_REALTYPE fp107;
fp107 = inteval->two_alpha0_ket[vi] * fp125;
LIBINT2_REALTYPE fp105;
fp105 = fp107 - fp106;
LIBINT2_REALTYPE fp232;
fp232 = 2.0000000000000000e+00 * fp105;
LIBINT2_REALTYPE fp102;
fp102 = fp15 * fp13;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp3;
LIBINT2_REALTYPE fp109;
fp109 = 2.0000000000000000e+00 * fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp15 * fp10;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp3;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_ket[vi] * fp103;
LIBINT2_REALTYPE fp108;
fp108 = fp110 - fp109;
LIBINT2_REALTYPE fp233;
fp233 = inteval->two_alpha0_ket[vi] * fp108;
LIBINT2_REALTYPE fp231;
fp231 = fp233 - fp232;
target[((hsi*21+12)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp88;
fp88 = fp15 * fp11;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp5;
LIBINT2_REALTYPE fp94;
fp94 = 1.0000000000000000e+00 * fp87;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_ket[vi] * fp115;
LIBINT2_REALTYPE fp93;
fp93 = fp95 - fp94;
LIBINT2_REALTYPE fp229;
fp229 = 3.0000000000000000e+00 * fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp15 * fp11;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp2;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp15 * fp12;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp2;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_ket[vi] * fp91;
LIBINT2_REALTYPE fp96;
fp96 = fp98 - fp97;
LIBINT2_REALTYPE fp230;
fp230 = inteval->two_alpha0_ket[vi] * fp96;
LIBINT2_REALTYPE fp228;
fp228 = fp230 - fp229;
target[((hsi*21+13)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp85;
fp85 = 4.0000000000000000e+00 * fp101;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp15 * fp13;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp1;
LIBINT2_REALTYPE fp86;
fp86 = inteval->two_alpha0_ket[vi] * fp82;
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
LIBINT2_REALTYPE fp227;
fp227 = inteval->two_alpha0_ket[vi] * fp84;
target[((hsi*21+14)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp14 * fp9;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp6;
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e+00 * fp75;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp14 * fp7;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp6;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_ket[vi] * fp77;
LIBINT2_REALTYPE fp79;
fp79 = fp81 - fp80;
LIBINT2_REALTYPE fp226;
fp226 = inteval->two_alpha0_ket[vi] * fp79;
target[((hsi*21+15)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp62;
fp62 = fp14 * fp10;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp4;
LIBINT2_REALTYPE fp70;
fp70 = 4.0000000000000000e+00 * fp61;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp14 * fp8;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp4;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_ket[vi] * fp63;
LIBINT2_REALTYPE fp69;
fp69 = fp71 - fp70;
LIBINT2_REALTYPE fp224;
fp224 = 1.0000000000000000e+00 * fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp14 * fp10;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp5;
LIBINT2_REALTYPE fp73;
fp73 = 4.0000000000000000e+00 * fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp14 * fp8;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp5;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha0_ket[vi] * fp67;
LIBINT2_REALTYPE fp72;
fp72 = fp74 - fp73;
LIBINT2_REALTYPE fp225;
fp225 = inteval->two_alpha0_ket[vi] * fp72;
LIBINT2_REALTYPE fp223;
fp223 = fp225 - fp224;
target[((hsi*21+16)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp50;
fp50 = fp14 * fp12;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp6;
LIBINT2_REALTYPE fp56;
fp56 = 3.0000000000000000e+00 * fp49;
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_ket[vi] * fp75;
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
LIBINT2_REALTYPE fp221;
fp221 = 2.0000000000000000e+00 * fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp14 * fp12;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp3;
LIBINT2_REALTYPE fp59;
fp59 = 3.0000000000000000e+00 * fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp14 * fp9;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp3;
LIBINT2_REALTYPE fp60;
fp60 = inteval->two_alpha0_ket[vi] * fp53;
LIBINT2_REALTYPE fp58;
fp58 = fp60 - fp59;
LIBINT2_REALTYPE fp222;
fp222 = inteval->two_alpha0_ket[vi] * fp58;
LIBINT2_REALTYPE fp220;
fp220 = fp222 - fp221;
target[((hsi*21+17)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp38;
fp38 = fp14 * fp13;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp5;
LIBINT2_REALTYPE fp44;
fp44 = 2.0000000000000000e+00 * fp37;
LIBINT2_REALTYPE fp45;
fp45 = inteval->two_alpha0_ket[vi] * fp65;
LIBINT2_REALTYPE fp43;
fp43 = fp45 - fp44;
LIBINT2_REALTYPE fp218;
fp218 = 3.0000000000000000e+00 * fp43;
LIBINT2_REALTYPE fp40;
fp40 = fp14 * fp13;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp2;
LIBINT2_REALTYPE fp47;
fp47 = 2.0000000000000000e+00 * fp39;
LIBINT2_REALTYPE fp42;
fp42 = fp14 * fp10;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp2;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha0_ket[vi] * fp41;
LIBINT2_REALTYPE fp46;
fp46 = fp48 - fp47;
LIBINT2_REALTYPE fp219;
fp219 = inteval->two_alpha0_ket[vi] * fp46;
LIBINT2_REALTYPE fp217;
fp217 = fp219 - fp218;
target[((hsi*21+18)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp26;
fp26 = fp14 * fp11;
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp3;
LIBINT2_REALTYPE fp32;
fp32 = 1.0000000000000000e+00 * fp25;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha0_ket[vi] * fp51;
LIBINT2_REALTYPE fp31;
fp31 = fp33 - fp32;
LIBINT2_REALTYPE fp215;
fp215 = 4.0000000000000000e+00 * fp31;
LIBINT2_REALTYPE fp28;
fp28 = fp14 * fp11;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp1;
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * fp27;
LIBINT2_REALTYPE fp30;
fp30 = fp14 * fp12;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp1;
LIBINT2_REALTYPE fp36;
fp36 = inteval->two_alpha0_ket[vi] * fp29;
LIBINT2_REALTYPE fp34;
fp34 = fp36 - fp35;
LIBINT2_REALTYPE fp216;
fp216 = inteval->two_alpha0_ket[vi] * fp34;
LIBINT2_REALTYPE fp214;
fp214 = fp216 - fp215;
target[((hsi*21+19)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e+00 * fp39;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp14 * fp13;
LIBINT2_REALTYPE fp20;
fp20 = fp21 * fp0;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha0_ket[vi] * fp20;
LIBINT2_REALTYPE fp22;
fp22 = fp24 - fp23;
LIBINT2_REALTYPE fp213;
fp213 = inteval->two_alpha0_ket[vi] * fp22;
target[((hsi*21+20)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp130;
fp130 = 4.0000000000000000e+00 * fp125;
LIBINT2_REALTYPE fp128;
fp128 = fp15 * fp8;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp6;
LIBINT2_REALTYPE fp131;
fp131 = inteval->two_alpha0_ket[vi] * fp127;
LIBINT2_REALTYPE fp129;
fp129 = fp131 - fp130;
LIBINT2_REALTYPE fp237;
fp237 = inteval->two_alpha0_ket[vi] * fp129;
target[((hsi*21+10)*1+lsi)*1] = fp237;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 254 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif