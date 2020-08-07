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
void CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp21 * fp11;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp9;
LIBINT2_REALTYPE fp178;
fp178 = inteval->two_alpha0_bra[vi] * fp81;
target[((hsi*45+21)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp22 * fp14;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp7;
LIBINT2_REALTYPE fp179;
fp179 = inteval->two_alpha0_bra[vi] * fp83;
target[((hsi*45+20)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp22 * fp13;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp8;
LIBINT2_REALTYPE fp180;
fp180 = inteval->two_alpha0_bra[vi] * fp85;
target[((hsi*45+19)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp22 * fp12;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp9;
LIBINT2_REALTYPE fp181;
fp181 = inteval->two_alpha0_bra[vi] * fp87;
target[((hsi*45+18)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp23 * fp14;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp8;
LIBINT2_REALTYPE fp182;
fp182 = inteval->two_alpha0_bra[vi] * fp89;
target[((hsi*45+17)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp92;
fp92 = fp23 * fp13;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp9;
LIBINT2_REALTYPE fp183;
fp183 = inteval->two_alpha0_bra[vi] * fp91;
target[((hsi*45+16)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp24 * fp14;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp9;
LIBINT2_REALTYPE fp184;
fp184 = inteval->two_alpha0_bra[vi] * fp93;
target[((hsi*45+15)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp25 * fp19;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp5;
LIBINT2_REALTYPE fp186;
fp186 = 1.0000000000000000e+00 * fp95;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp26 * fp19;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp5;
LIBINT2_REALTYPE fp187;
fp187 = inteval->two_alpha0_bra[vi] * fp97;
LIBINT2_REALTYPE fp185;
fp185 = fp187 - fp186;
target[((hsi*45+14)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp25 * fp18;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp6;
LIBINT2_REALTYPE fp189;
fp189 = 1.0000000000000000e+00 * fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp26 * fp18;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp6;
LIBINT2_REALTYPE fp190;
fp190 = inteval->two_alpha0_bra[vi] * fp101;
LIBINT2_REALTYPE fp188;
fp188 = fp190 - fp189;
target[((hsi*45+13)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp25 * fp17;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp7;
LIBINT2_REALTYPE fp192;
fp192 = 1.0000000000000000e+00 * fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp26 * fp17;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp7;
LIBINT2_REALTYPE fp193;
fp193 = inteval->two_alpha0_bra[vi] * fp105;
LIBINT2_REALTYPE fp191;
fp191 = fp193 - fp192;
target[((hsi*45+12)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp33 * fp19;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp9;
LIBINT2_REALTYPE fp228;
fp228 = 1.0000000000000000e+00 * fp151;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp34 * fp19;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp9;
LIBINT2_REALTYPE fp229;
fp229 = inteval->two_alpha0_bra[vi] * fp153;
LIBINT2_REALTYPE fp227;
fp227 = fp229 - fp228;
target[((hsi*45+0)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp25 * fp15;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp9;
LIBINT2_REALTYPE fp198;
fp198 = 1.0000000000000000e+00 * fp111;
LIBINT2_REALTYPE fp114;
fp114 = fp26 * fp15;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp9;
LIBINT2_REALTYPE fp199;
fp199 = inteval->two_alpha0_bra[vi] * fp113;
LIBINT2_REALTYPE fp197;
fp197 = fp199 - fp198;
target[((hsi*45+10)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp27 * fp19;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp6;
LIBINT2_REALTYPE fp201;
fp201 = 1.0000000000000000e+00 * fp115;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp28 * fp19;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp6;
LIBINT2_REALTYPE fp202;
fp202 = inteval->two_alpha0_bra[vi] * fp117;
LIBINT2_REALTYPE fp200;
fp200 = fp202 - fp201;
target[((hsi*45+9)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp120;
fp120 = fp27 * fp18;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp7;
LIBINT2_REALTYPE fp204;
fp204 = 1.0000000000000000e+00 * fp119;
LIBINT2_REALTYPE fp122;
fp122 = fp28 * fp18;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp7;
LIBINT2_REALTYPE fp205;
fp205 = inteval->two_alpha0_bra[vi] * fp121;
LIBINT2_REALTYPE fp203;
fp203 = fp205 - fp204;
target[((hsi*45+8)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp124;
fp124 = fp27 * fp17;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp8;
LIBINT2_REALTYPE fp207;
fp207 = 1.0000000000000000e+00 * fp123;
LIBINT2_REALTYPE fp126;
fp126 = fp28 * fp17;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp8;
LIBINT2_REALTYPE fp208;
fp208 = inteval->two_alpha0_bra[vi] * fp125;
LIBINT2_REALTYPE fp206;
fp206 = fp208 - fp207;
target[((hsi*45+7)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp27 * fp16;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp9;
LIBINT2_REALTYPE fp210;
fp210 = 1.0000000000000000e+00 * fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp28 * fp16;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp9;
LIBINT2_REALTYPE fp211;
fp211 = inteval->two_alpha0_bra[vi] * fp129;
LIBINT2_REALTYPE fp209;
fp209 = fp211 - fp210;
target[((hsi*45+6)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp29 * fp19;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp7;
LIBINT2_REALTYPE fp213;
fp213 = 1.0000000000000000e+00 * fp131;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp30 * fp19;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp7;
LIBINT2_REALTYPE fp214;
fp214 = inteval->two_alpha0_bra[vi] * fp133;
LIBINT2_REALTYPE fp212;
fp212 = fp214 - fp213;
target[((hsi*45+5)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp136;
fp136 = fp29 * fp18;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp8;
LIBINT2_REALTYPE fp216;
fp216 = 1.0000000000000000e+00 * fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp30 * fp18;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp8;
LIBINT2_REALTYPE fp217;
fp217 = inteval->two_alpha0_bra[vi] * fp137;
LIBINT2_REALTYPE fp215;
fp215 = fp217 - fp216;
target[((hsi*45+4)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp140;
fp140 = fp29 * fp17;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp9;
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp30 * fp17;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp9;
LIBINT2_REALTYPE fp220;
fp220 = inteval->two_alpha0_bra[vi] * fp141;
LIBINT2_REALTYPE fp218;
fp218 = fp220 - fp219;
target[((hsi*45+3)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp31 * fp19;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp8;
LIBINT2_REALTYPE fp222;
fp222 = 1.0000000000000000e+00 * fp143;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp32 * fp19;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp8;
LIBINT2_REALTYPE fp223;
fp223 = inteval->two_alpha0_bra[vi] * fp145;
LIBINT2_REALTYPE fp221;
fp221 = fp223 - fp222;
target[((hsi*45+2)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp148;
fp148 = fp31 * fp18;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp9;
LIBINT2_REALTYPE fp225;
fp225 = 1.0000000000000000e+00 * fp147;
LIBINT2_REALTYPE fp150;
fp150 = fp32 * fp18;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp9;
LIBINT2_REALTYPE fp226;
fp226 = inteval->two_alpha0_bra[vi] * fp149;
LIBINT2_REALTYPE fp224;
fp224 = fp226 - fp225;
target[((hsi*45+1)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp108;
fp108 = fp25 * fp16;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp8;
LIBINT2_REALTYPE fp195;
fp195 = 1.0000000000000000e+00 * fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp26 * fp16;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp8;
LIBINT2_REALTYPE fp196;
fp196 = inteval->two_alpha0_bra[vi] * fp109;
LIBINT2_REALTYPE fp194;
fp194 = fp196 - fp195;
target[((hsi*45+11)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp20 * fp19;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp0;
LIBINT2_REALTYPE fp155;
fp155 = inteval->two_alpha0_bra[vi] * fp35;
target[((hsi*45+44)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp20 * fp18;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp1;
LIBINT2_REALTYPE fp156;
fp156 = inteval->two_alpha0_bra[vi] * fp37;
target[((hsi*45+43)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp20 * fp17;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp2;
LIBINT2_REALTYPE fp157;
fp157 = inteval->two_alpha0_bra[vi] * fp39;
target[((hsi*45+42)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp20 * fp16;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp3;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_bra[vi] * fp41;
target[((hsi*45+41)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp20 * fp15;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp4;
LIBINT2_REALTYPE fp159;
fp159 = inteval->two_alpha0_bra[vi] * fp43;
target[((hsi*45+40)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp46;
fp46 = fp21 * fp19;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp1;
LIBINT2_REALTYPE fp160;
fp160 = inteval->two_alpha0_bra[vi] * fp45;
target[((hsi*45+39)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp48;
fp48 = fp21 * fp18;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp2;
LIBINT2_REALTYPE fp161;
fp161 = inteval->two_alpha0_bra[vi] * fp47;
target[((hsi*45+38)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp50;
fp50 = fp21 * fp17;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp3;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_bra[vi] * fp49;
target[((hsi*45+37)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp52;
fp52 = fp21 * fp16;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp4;
LIBINT2_REALTYPE fp163;
fp163 = inteval->two_alpha0_bra[vi] * fp51;
target[((hsi*45+36)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp54;
fp54 = fp22 * fp19;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp2;
LIBINT2_REALTYPE fp164;
fp164 = inteval->two_alpha0_bra[vi] * fp53;
target[((hsi*45+35)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp80;
fp80 = fp21 * fp12;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp8;
LIBINT2_REALTYPE fp177;
fp177 = inteval->two_alpha0_bra[vi] * fp79;
target[((hsi*45+22)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp58;
fp58 = fp22 * fp17;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp4;
LIBINT2_REALTYPE fp166;
fp166 = inteval->two_alpha0_bra[vi] * fp57;
target[((hsi*45+33)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp60;
fp60 = fp23 * fp19;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp3;
LIBINT2_REALTYPE fp167;
fp167 = inteval->two_alpha0_bra[vi] * fp59;
target[((hsi*45+32)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp62;
fp62 = fp23 * fp18;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp4;
LIBINT2_REALTYPE fp168;
fp168 = inteval->two_alpha0_bra[vi] * fp61;
target[((hsi*45+31)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp64;
fp64 = fp24 * fp19;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp4;
LIBINT2_REALTYPE fp169;
fp169 = inteval->two_alpha0_bra[vi] * fp63;
target[((hsi*45+30)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp66;
fp66 = fp20 * fp14;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp5;
LIBINT2_REALTYPE fp170;
fp170 = inteval->two_alpha0_bra[vi] * fp65;
target[((hsi*45+29)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp68;
fp68 = fp20 * fp13;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp6;
LIBINT2_REALTYPE fp171;
fp171 = inteval->two_alpha0_bra[vi] * fp67;
target[((hsi*45+28)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp70;
fp70 = fp20 * fp12;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp7;
LIBINT2_REALTYPE fp172;
fp172 = inteval->two_alpha0_bra[vi] * fp69;
target[((hsi*45+27)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp72;
fp72 = fp20 * fp11;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp8;
LIBINT2_REALTYPE fp173;
fp173 = inteval->two_alpha0_bra[vi] * fp71;
target[((hsi*45+26)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp20 * fp10;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp9;
LIBINT2_REALTYPE fp174;
fp174 = inteval->two_alpha0_bra[vi] * fp73;
target[((hsi*45+25)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp76;
fp76 = fp21 * fp14;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp6;
LIBINT2_REALTYPE fp175;
fp175 = inteval->two_alpha0_bra[vi] * fp75;
target[((hsi*45+24)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp78;
fp78 = fp21 * fp13;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp7;
LIBINT2_REALTYPE fp176;
fp176 = inteval->two_alpha0_bra[vi] * fp77;
target[((hsi*45+23)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp56;
fp56 = fp22 * fp18;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp3;
LIBINT2_REALTYPE fp165;
fp165 = inteval->two_alpha0_bra[vi] * fp55;
target[((hsi*45+34)*1+lsi)*1] = fp165;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 230 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif