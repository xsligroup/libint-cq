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
extern "C" {
#endif
void CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp25 * fp21;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp7;
LIBINT2_REALTYPE fp240;
fp240 = 2.0000000000000000e+00 * fp112;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp25 * fp15;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp7;
LIBINT2_REALTYPE fp241;
fp241 = inteval->two_alpha0_bra[vi] * fp114;
LIBINT2_REALTYPE fp239;
fp239 = fp241 - fp240;
target[((hsi*45+21)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp24 * fp19;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp8;
LIBINT2_REALTYPE fp243;
fp243 = 3.0000000000000000e+00 * fp116;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp24 * fp13;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp8;
LIBINT2_REALTYPE fp244;
fp244 = inteval->two_alpha0_bra[vi] * fp118;
LIBINT2_REALTYPE fp242;
fp242 = fp244 - fp243;
target[((hsi*45+20)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp24 * fp17;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp9;
LIBINT2_REALTYPE fp246;
fp246 = 3.0000000000000000e+00 * fp120;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp24 * fp12;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp9;
LIBINT2_REALTYPE fp247;
fp247 = inteval->two_alpha0_bra[vi] * fp122;
LIBINT2_REALTYPE fp245;
fp245 = fp247 - fp246;
target[((hsi*45+19)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp125;
fp125 = fp25 * fp19;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp9;
LIBINT2_REALTYPE fp249;
fp249 = 3.0000000000000000e+00 * fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp25 * fp13;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp9;
LIBINT2_REALTYPE fp250;
fp250 = inteval->two_alpha0_bra[vi] * fp126;
LIBINT2_REALTYPE fp248;
fp248 = fp250 - fp249;
target[((hsi*45+18)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp26 * fp21;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp4;
LIBINT2_REALTYPE fp251;
fp251 = inteval->two_alpha0_bra[vi] * fp128;
target[((hsi*45+17)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp26 * fp20;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp5;
LIBINT2_REALTYPE fp252;
fp252 = inteval->two_alpha0_bra[vi] * fp130;
target[((hsi*45+16)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp27 * fp21;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp5;
LIBINT2_REALTYPE fp253;
fp253 = inteval->two_alpha0_bra[vi] * fp132;
target[((hsi*45+15)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp26 * fp18;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp6;
LIBINT2_REALTYPE fp255;
fp255 = 1.0000000000000000e+00 * fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp26 * fp19;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp6;
LIBINT2_REALTYPE fp256;
fp256 = inteval->two_alpha0_bra[vi] * fp136;
LIBINT2_REALTYPE fp254;
fp254 = fp256 - fp255;
target[((hsi*45+14)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp26 * fp16;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp7;
LIBINT2_REALTYPE fp258;
fp258 = 1.0000000000000000e+00 * fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp26 * fp17;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp7;
LIBINT2_REALTYPE fp259;
fp259 = inteval->two_alpha0_bra[vi] * fp140;
LIBINT2_REALTYPE fp257;
fp257 = fp259 - fp258;
target[((hsi*45+13)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp143;
fp143 = fp27 * fp18;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp7;
LIBINT2_REALTYPE fp261;
fp261 = 1.0000000000000000e+00 * fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp27 * fp19;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp7;
LIBINT2_REALTYPE fp262;
fp262 = inteval->two_alpha0_bra[vi] * fp144;
LIBINT2_REALTYPE fp260;
fp260 = fp262 - fp261;
target[((hsi*45+12)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp31 * fp21;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp9;
LIBINT2_REALTYPE fp286;
fp286 = inteval->two_alpha0_bra[vi] * fp180;
target[((hsi*45+0)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp151;
fp151 = fp26 * fp20;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp9;
LIBINT2_REALTYPE fp267;
fp267 = 2.0000000000000000e+00 * fp150;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp26 * fp14;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp9;
LIBINT2_REALTYPE fp268;
fp268 = inteval->two_alpha0_bra[vi] * fp152;
LIBINT2_REALTYPE fp266;
fp266 = fp268 - fp267;
target[((hsi*45+10)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp155;
fp155 = fp27 * fp21;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp9;
LIBINT2_REALTYPE fp270;
fp270 = 2.0000000000000000e+00 * fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp27 * fp15;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp9;
LIBINT2_REALTYPE fp271;
fp271 = inteval->two_alpha0_bra[vi] * fp156;
LIBINT2_REALTYPE fp269;
fp269 = fp271 - fp270;
target[((hsi*45+9)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp28 * fp21;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp6;
LIBINT2_REALTYPE fp272;
fp272 = inteval->two_alpha0_bra[vi] * fp158;
target[((hsi*45+8)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp161;
fp161 = fp28 * fp20;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp7;
LIBINT2_REALTYPE fp273;
fp273 = inteval->two_alpha0_bra[vi] * fp160;
target[((hsi*45+7)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp29 * fp21;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp7;
LIBINT2_REALTYPE fp274;
fp274 = inteval->two_alpha0_bra[vi] * fp162;
target[((hsi*45+6)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp165;
fp165 = fp28 * fp18;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp8;
LIBINT2_REALTYPE fp276;
fp276 = 1.0000000000000000e+00 * fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp28 * fp19;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp8;
LIBINT2_REALTYPE fp277;
fp277 = inteval->two_alpha0_bra[vi] * fp166;
LIBINT2_REALTYPE fp275;
fp275 = fp277 - fp276;
target[((hsi*45+5)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp169;
fp169 = fp28 * fp16;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp9;
LIBINT2_REALTYPE fp279;
fp279 = 1.0000000000000000e+00 * fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp28 * fp17;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp9;
LIBINT2_REALTYPE fp280;
fp280 = inteval->two_alpha0_bra[vi] * fp170;
LIBINT2_REALTYPE fp278;
fp278 = fp280 - fp279;
target[((hsi*45+4)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp173;
fp173 = fp29 * fp18;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp9;
LIBINT2_REALTYPE fp282;
fp282 = 1.0000000000000000e+00 * fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp29 * fp19;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp9;
LIBINT2_REALTYPE fp283;
fp283 = inteval->two_alpha0_bra[vi] * fp174;
LIBINT2_REALTYPE fp281;
fp281 = fp283 - fp282;
target[((hsi*45+3)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp30 * fp21;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp8;
LIBINT2_REALTYPE fp284;
fp284 = inteval->two_alpha0_bra[vi] * fp176;
target[((hsi*45+2)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp179;
fp179 = fp30 * fp20;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp9;
LIBINT2_REALTYPE fp285;
fp285 = inteval->two_alpha0_bra[vi] * fp178;
target[((hsi*45+1)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp147;
fp147 = fp26 * fp21;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp8;
LIBINT2_REALTYPE fp264;
fp264 = 2.0000000000000000e+00 * fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp26 * fp15;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp8;
LIBINT2_REALTYPE fp265;
fp265 = inteval->two_alpha0_bra[vi] * fp148;
LIBINT2_REALTYPE fp263;
fp263 = fp265 - fp264;
target[((hsi*45+11)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp22 * fp21;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp0;
LIBINT2_REALTYPE fp182;
fp182 = inteval->two_alpha0_bra[vi] * fp32;
target[((hsi*45+44)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp22 * fp20;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp1;
LIBINT2_REALTYPE fp183;
fp183 = inteval->two_alpha0_bra[vi] * fp34;
target[((hsi*45+43)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp23 * fp21;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp1;
LIBINT2_REALTYPE fp184;
fp184 = inteval->two_alpha0_bra[vi] * fp36;
target[((hsi*45+42)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp22 * fp18;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp2;
LIBINT2_REALTYPE fp186;
fp186 = 1.0000000000000000e+00 * fp38;
LIBINT2_REALTYPE fp41;
fp41 = fp22 * fp19;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp2;
LIBINT2_REALTYPE fp187;
fp187 = inteval->two_alpha0_bra[vi] * fp40;
LIBINT2_REALTYPE fp185;
fp185 = fp187 - fp186;
target[((hsi*45+41)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp22 * fp16;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp3;
LIBINT2_REALTYPE fp189;
fp189 = 1.0000000000000000e+00 * fp42;
LIBINT2_REALTYPE fp45;
fp45 = fp22 * fp17;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp3;
LIBINT2_REALTYPE fp190;
fp190 = inteval->two_alpha0_bra[vi] * fp44;
LIBINT2_REALTYPE fp188;
fp188 = fp190 - fp189;
target[((hsi*45+40)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp47;
fp47 = fp23 * fp18;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp3;
LIBINT2_REALTYPE fp192;
fp192 = 1.0000000000000000e+00 * fp46;
LIBINT2_REALTYPE fp49;
fp49 = fp23 * fp19;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp3;
LIBINT2_REALTYPE fp193;
fp193 = inteval->two_alpha0_bra[vi] * fp48;
LIBINT2_REALTYPE fp191;
fp191 = fp193 - fp192;
target[((hsi*45+39)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp51;
fp51 = fp22 * fp21;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp4;
LIBINT2_REALTYPE fp195;
fp195 = 2.0000000000000000e+00 * fp50;
LIBINT2_REALTYPE fp53;
fp53 = fp22 * fp15;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp4;
LIBINT2_REALTYPE fp196;
fp196 = inteval->two_alpha0_bra[vi] * fp52;
LIBINT2_REALTYPE fp194;
fp194 = fp196 - fp195;
target[((hsi*45+38)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp55;
fp55 = fp22 * fp20;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp5;
LIBINT2_REALTYPE fp198;
fp198 = 2.0000000000000000e+00 * fp54;
LIBINT2_REALTYPE fp57;
fp57 = fp22 * fp14;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp5;
LIBINT2_REALTYPE fp199;
fp199 = inteval->two_alpha0_bra[vi] * fp56;
LIBINT2_REALTYPE fp197;
fp197 = fp199 - fp198;
target[((hsi*45+37)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp59;
fp59 = fp23 * fp21;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp5;
LIBINT2_REALTYPE fp201;
fp201 = 2.0000000000000000e+00 * fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp23 * fp15;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp5;
LIBINT2_REALTYPE fp202;
fp202 = inteval->two_alpha0_bra[vi] * fp60;
LIBINT2_REALTYPE fp200;
fp200 = fp202 - fp201;
target[((hsi*45+36)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp63;
fp63 = fp22 * fp19;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp6;
LIBINT2_REALTYPE fp204;
fp204 = 3.0000000000000000e+00 * fp62;
LIBINT2_REALTYPE fp65;
fp65 = fp22 * fp13;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp6;
LIBINT2_REALTYPE fp205;
fp205 = inteval->two_alpha0_bra[vi] * fp64;
LIBINT2_REALTYPE fp203;
fp203 = fp205 - fp204;
target[((hsi*45+35)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp109;
fp109 = fp24 * fp20;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp7;
LIBINT2_REALTYPE fp237;
fp237 = 2.0000000000000000e+00 * fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp24 * fp14;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp7;
LIBINT2_REALTYPE fp238;
fp238 = inteval->two_alpha0_bra[vi] * fp110;
LIBINT2_REALTYPE fp236;
fp236 = fp238 - fp237;
target[((hsi*45+22)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp71;
fp71 = fp23 * fp19;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp7;
LIBINT2_REALTYPE fp210;
fp210 = 3.0000000000000000e+00 * fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp23 * fp13;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp7;
LIBINT2_REALTYPE fp211;
fp211 = inteval->two_alpha0_bra[vi] * fp72;
LIBINT2_REALTYPE fp209;
fp209 = fp211 - fp210;
target[((hsi*45+33)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp75;
fp75 = fp22 * fp15;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp8;
LIBINT2_REALTYPE fp213;
fp213 = 4.0000000000000000e+00 * fp74;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp22 * fp11;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp8;
LIBINT2_REALTYPE fp214;
fp214 = inteval->two_alpha0_bra[vi] * fp76;
LIBINT2_REALTYPE fp212;
fp212 = fp214 - fp213;
target[((hsi*45+32)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp79;
fp79 = fp22 * fp14;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp9;
LIBINT2_REALTYPE fp216;
fp216 = 4.0000000000000000e+00 * fp78;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp22 * fp10;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp9;
LIBINT2_REALTYPE fp217;
fp217 = inteval->two_alpha0_bra[vi] * fp80;
LIBINT2_REALTYPE fp215;
fp215 = fp217 - fp216;
target[((hsi*45+31)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp83;
fp83 = fp23 * fp15;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp9;
LIBINT2_REALTYPE fp219;
fp219 = 4.0000000000000000e+00 * fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp23 * fp11;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp9;
LIBINT2_REALTYPE fp220;
fp220 = inteval->two_alpha0_bra[vi] * fp84;
LIBINT2_REALTYPE fp218;
fp218 = fp220 - fp219;
target[((hsi*45+30)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp87;
fp87 = fp24 * fp21;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp2;
LIBINT2_REALTYPE fp221;
fp221 = inteval->two_alpha0_bra[vi] * fp86;
target[((hsi*45+29)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp89;
fp89 = fp24 * fp20;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp3;
LIBINT2_REALTYPE fp222;
fp222 = inteval->two_alpha0_bra[vi] * fp88;
target[((hsi*45+28)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp91;
fp91 = fp25 * fp21;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp3;
LIBINT2_REALTYPE fp223;
fp223 = inteval->two_alpha0_bra[vi] * fp90;
target[((hsi*45+27)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp93;
fp93 = fp24 * fp18;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp4;
LIBINT2_REALTYPE fp225;
fp225 = 1.0000000000000000e+00 * fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp24 * fp19;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp4;
LIBINT2_REALTYPE fp226;
fp226 = inteval->two_alpha0_bra[vi] * fp94;
LIBINT2_REALTYPE fp224;
fp224 = fp226 - fp225;
target[((hsi*45+26)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp97;
fp97 = fp24 * fp16;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp5;
LIBINT2_REALTYPE fp228;
fp228 = 1.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp24 * fp17;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp5;
LIBINT2_REALTYPE fp229;
fp229 = inteval->two_alpha0_bra[vi] * fp98;
LIBINT2_REALTYPE fp227;
fp227 = fp229 - fp228;
target[((hsi*45+25)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp101;
fp101 = fp25 * fp18;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp5;
LIBINT2_REALTYPE fp231;
fp231 = 1.0000000000000000e+00 * fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp25 * fp19;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp5;
LIBINT2_REALTYPE fp232;
fp232 = inteval->two_alpha0_bra[vi] * fp102;
LIBINT2_REALTYPE fp230;
fp230 = fp232 - fp231;
target[((hsi*45+24)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp105;
fp105 = fp24 * fp21;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp6;
LIBINT2_REALTYPE fp234;
fp234 = 2.0000000000000000e+00 * fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp24 * fp15;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp6;
LIBINT2_REALTYPE fp235;
fp235 = inteval->two_alpha0_bra[vi] * fp106;
LIBINT2_REALTYPE fp233;
fp233 = fp235 - fp234;
target[((hsi*45+23)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp67;
fp67 = fp22 * fp17;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp7;
LIBINT2_REALTYPE fp207;
fp207 = 3.0000000000000000e+00 * fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp22 * fp12;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp7;
LIBINT2_REALTYPE fp208;
fp208 = inteval->two_alpha0_bra[vi] * fp68;
LIBINT2_REALTYPE fp206;
fp206 = fp208 - fp207;
target[((hsi*45+34)*1+lsi)*1] = fp206;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 287 */
}

#ifdef __cplusplus
};
#endif
