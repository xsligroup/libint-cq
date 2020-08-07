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
void CR_aB_p110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp26 * fp12;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp9;
LIBINT2_REALTYPE fp146;
fp146 = 1.0000000000000000e+00 * fp141;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp26 * fp13;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp9;
LIBINT2_REALTYPE fp147;
fp147 = inteval->two_alpha0_bra[vi] * fp143;
LIBINT2_REALTYPE fp145;
fp145 = fp147 - fp146;
LIBINT2_REALTYPE fp318;
fp318 = inteval->two_alpha0_bra[vi] * fp145;
target[((hsi*45+21)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp27 * fp18;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp7;
LIBINT2_REALTYPE fp153;
fp153 = 1.0000000000000000e+00 * fp148;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp27 * fp19;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp7;
LIBINT2_REALTYPE fp154;
fp154 = inteval->two_alpha0_bra[vi] * fp150;
LIBINT2_REALTYPE fp152;
fp152 = fp154 - fp153;
LIBINT2_REALTYPE fp319;
fp319 = inteval->two_alpha0_bra[vi] * fp152;
target[((hsi*45+20)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp27 * fp16;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp8;
LIBINT2_REALTYPE fp160;
fp160 = 1.0000000000000000e+00 * fp155;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp27 * fp17;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp8;
LIBINT2_REALTYPE fp161;
fp161 = inteval->two_alpha0_bra[vi] * fp157;
LIBINT2_REALTYPE fp159;
fp159 = fp161 - fp160;
LIBINT2_REALTYPE fp320;
fp320 = inteval->two_alpha0_bra[vi] * fp159;
target[((hsi*45+19)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp27 * fp14;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp9;
LIBINT2_REALTYPE fp167;
fp167 = 1.0000000000000000e+00 * fp162;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp27 * fp15;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp9;
LIBINT2_REALTYPE fp168;
fp168 = inteval->two_alpha0_bra[vi] * fp164;
LIBINT2_REALTYPE fp166;
fp166 = fp168 - fp167;
LIBINT2_REALTYPE fp321;
fp321 = inteval->two_alpha0_bra[vi] * fp166;
target[((hsi*45+18)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp28 * fp18;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp8;
LIBINT2_REALTYPE fp174;
fp174 = 1.0000000000000000e+00 * fp169;
LIBINT2_REALTYPE fp172;
fp172 = fp28 * fp19;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp8;
LIBINT2_REALTYPE fp175;
fp175 = inteval->two_alpha0_bra[vi] * fp171;
LIBINT2_REALTYPE fp173;
fp173 = fp175 - fp174;
LIBINT2_REALTYPE fp322;
fp322 = inteval->two_alpha0_bra[vi] * fp173;
target[((hsi*45+17)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp177;
fp177 = fp28 * fp16;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp9;
LIBINT2_REALTYPE fp181;
fp181 = 1.0000000000000000e+00 * fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp28 * fp17;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp9;
LIBINT2_REALTYPE fp182;
fp182 = inteval->two_alpha0_bra[vi] * fp178;
LIBINT2_REALTYPE fp180;
fp180 = fp182 - fp181;
LIBINT2_REALTYPE fp323;
fp323 = inteval->two_alpha0_bra[vi] * fp180;
target[((hsi*45+16)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp29 * fp18;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp9;
LIBINT2_REALTYPE fp188;
fp188 = 1.0000000000000000e+00 * fp183;
LIBINT2_REALTYPE fp186;
fp186 = fp29 * fp19;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp9;
LIBINT2_REALTYPE fp189;
fp189 = inteval->two_alpha0_bra[vi] * fp185;
LIBINT2_REALTYPE fp187;
fp187 = fp189 - fp188;
LIBINT2_REALTYPE fp324;
fp324 = inteval->two_alpha0_bra[vi] * fp187;
target[((hsi*45+15)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp30 * fp24;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp5;
LIBINT2_REALTYPE fp195;
fp195 = 1.0000000000000000e+00 * fp190;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp31 * fp24;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp5;
LIBINT2_REALTYPE fp196;
fp196 = inteval->two_alpha0_bra[vi] * fp192;
LIBINT2_REALTYPE fp194;
fp194 = fp196 - fp195;
LIBINT2_REALTYPE fp325;
fp325 = inteval->two_alpha0_bra[vi] * fp194;
target[((hsi*45+14)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp30 * fp23;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp6;
LIBINT2_REALTYPE fp202;
fp202 = 1.0000000000000000e+00 * fp197;
LIBINT2_REALTYPE fp200;
fp200 = fp31 * fp23;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp6;
LIBINT2_REALTYPE fp203;
fp203 = inteval->two_alpha0_bra[vi] * fp199;
LIBINT2_REALTYPE fp201;
fp201 = fp203 - fp202;
LIBINT2_REALTYPE fp326;
fp326 = inteval->two_alpha0_bra[vi] * fp201;
target[((hsi*45+13)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp30 * fp22;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp7;
LIBINT2_REALTYPE fp209;
fp209 = 1.0000000000000000e+00 * fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp31 * fp22;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp7;
LIBINT2_REALTYPE fp210;
fp210 = inteval->two_alpha0_bra[vi] * fp206;
LIBINT2_REALTYPE fp208;
fp208 = fp210 - fp209;
LIBINT2_REALTYPE fp327;
fp327 = inteval->two_alpha0_bra[vi] * fp208;
target[((hsi*45+12)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = fp38 * fp24;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp9;
LIBINT2_REALTYPE fp293;
fp293 = 1.0000000000000000e+00 * fp288;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp39 * fp24;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp9;
LIBINT2_REALTYPE fp294;
fp294 = inteval->two_alpha0_bra[vi] * fp290;
LIBINT2_REALTYPE fp292;
fp292 = fp294 - fp293;
LIBINT2_REALTYPE fp339;
fp339 = inteval->two_alpha0_bra[vi] * fp292;
target[((hsi*45+0)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp30 * fp20;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp9;
LIBINT2_REALTYPE fp223;
fp223 = 1.0000000000000000e+00 * fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp31 * fp20;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp9;
LIBINT2_REALTYPE fp224;
fp224 = inteval->two_alpha0_bra[vi] * fp220;
LIBINT2_REALTYPE fp222;
fp222 = fp224 - fp223;
LIBINT2_REALTYPE fp329;
fp329 = inteval->two_alpha0_bra[vi] * fp222;
target[((hsi*45+10)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp32 * fp24;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp6;
LIBINT2_REALTYPE fp230;
fp230 = 1.0000000000000000e+00 * fp225;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp33 * fp24;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp6;
LIBINT2_REALTYPE fp231;
fp231 = inteval->two_alpha0_bra[vi] * fp227;
LIBINT2_REALTYPE fp229;
fp229 = fp231 - fp230;
LIBINT2_REALTYPE fp330;
fp330 = inteval->two_alpha0_bra[vi] * fp229;
target[((hsi*45+9)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp233;
fp233 = fp32 * fp23;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp7;
LIBINT2_REALTYPE fp237;
fp237 = 1.0000000000000000e+00 * fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp33 * fp23;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp7;
LIBINT2_REALTYPE fp238;
fp238 = inteval->two_alpha0_bra[vi] * fp234;
LIBINT2_REALTYPE fp236;
fp236 = fp238 - fp237;
LIBINT2_REALTYPE fp331;
fp331 = inteval->two_alpha0_bra[vi] * fp236;
target[((hsi*45+8)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp240;
fp240 = fp32 * fp22;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp8;
LIBINT2_REALTYPE fp244;
fp244 = 1.0000000000000000e+00 * fp239;
LIBINT2_REALTYPE fp242;
fp242 = fp33 * fp22;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp8;
LIBINT2_REALTYPE fp245;
fp245 = inteval->two_alpha0_bra[vi] * fp241;
LIBINT2_REALTYPE fp243;
fp243 = fp245 - fp244;
LIBINT2_REALTYPE fp332;
fp332 = inteval->two_alpha0_bra[vi] * fp243;
target[((hsi*45+7)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp32 * fp21;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp9;
LIBINT2_REALTYPE fp251;
fp251 = 1.0000000000000000e+00 * fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp33 * fp21;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp9;
LIBINT2_REALTYPE fp252;
fp252 = inteval->two_alpha0_bra[vi] * fp248;
LIBINT2_REALTYPE fp250;
fp250 = fp252 - fp251;
LIBINT2_REALTYPE fp333;
fp333 = inteval->two_alpha0_bra[vi] * fp250;
target[((hsi*45+6)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp34 * fp24;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp7;
LIBINT2_REALTYPE fp258;
fp258 = 1.0000000000000000e+00 * fp253;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp35 * fp24;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp7;
LIBINT2_REALTYPE fp259;
fp259 = inteval->two_alpha0_bra[vi] * fp255;
LIBINT2_REALTYPE fp257;
fp257 = fp259 - fp258;
LIBINT2_REALTYPE fp334;
fp334 = inteval->two_alpha0_bra[vi] * fp257;
target[((hsi*45+5)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp261;
fp261 = fp34 * fp23;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp8;
LIBINT2_REALTYPE fp265;
fp265 = 1.0000000000000000e+00 * fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp35 * fp23;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp8;
LIBINT2_REALTYPE fp266;
fp266 = inteval->two_alpha0_bra[vi] * fp262;
LIBINT2_REALTYPE fp264;
fp264 = fp266 - fp265;
LIBINT2_REALTYPE fp335;
fp335 = inteval->two_alpha0_bra[vi] * fp264;
target[((hsi*45+4)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp268;
fp268 = fp34 * fp22;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp9;
LIBINT2_REALTYPE fp272;
fp272 = 1.0000000000000000e+00 * fp267;
LIBINT2_REALTYPE fp270;
fp270 = fp35 * fp22;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp9;
LIBINT2_REALTYPE fp273;
fp273 = inteval->two_alpha0_bra[vi] * fp269;
LIBINT2_REALTYPE fp271;
fp271 = fp273 - fp272;
LIBINT2_REALTYPE fp336;
fp336 = inteval->two_alpha0_bra[vi] * fp271;
target[((hsi*45+3)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp36 * fp24;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp8;
LIBINT2_REALTYPE fp279;
fp279 = 1.0000000000000000e+00 * fp274;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp37 * fp24;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp8;
LIBINT2_REALTYPE fp280;
fp280 = inteval->two_alpha0_bra[vi] * fp276;
LIBINT2_REALTYPE fp278;
fp278 = fp280 - fp279;
LIBINT2_REALTYPE fp337;
fp337 = inteval->two_alpha0_bra[vi] * fp278;
target[((hsi*45+2)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp282;
fp282 = fp36 * fp23;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp9;
LIBINT2_REALTYPE fp286;
fp286 = 1.0000000000000000e+00 * fp281;
LIBINT2_REALTYPE fp284;
fp284 = fp37 * fp23;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp9;
LIBINT2_REALTYPE fp287;
fp287 = inteval->two_alpha0_bra[vi] * fp283;
LIBINT2_REALTYPE fp285;
fp285 = fp287 - fp286;
LIBINT2_REALTYPE fp338;
fp338 = inteval->two_alpha0_bra[vi] * fp285;
target[((hsi*45+1)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp212;
fp212 = fp30 * fp21;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp8;
LIBINT2_REALTYPE fp216;
fp216 = 1.0000000000000000e+00 * fp211;
LIBINT2_REALTYPE fp214;
fp214 = fp31 * fp21;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp8;
LIBINT2_REALTYPE fp217;
fp217 = inteval->two_alpha0_bra[vi] * fp213;
LIBINT2_REALTYPE fp215;
fp215 = fp217 - fp216;
LIBINT2_REALTYPE fp328;
fp328 = inteval->two_alpha0_bra[vi] * fp215;
target[((hsi*45+11)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp25 * fp24;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp0;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha0_bra[vi] * fp40;
LIBINT2_REALTYPE fp295;
fp295 = inteval->two_alpha0_bra[vi] * fp42;
target[((hsi*45+44)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp25 * fp23;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp1;
LIBINT2_REALTYPE fp45;
fp45 = inteval->two_alpha0_bra[vi] * fp43;
LIBINT2_REALTYPE fp296;
fp296 = inteval->two_alpha0_bra[vi] * fp45;
target[((hsi*45+43)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp25 * fp22;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp2;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha0_bra[vi] * fp46;
LIBINT2_REALTYPE fp297;
fp297 = inteval->two_alpha0_bra[vi] * fp48;
target[((hsi*45+42)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp25 * fp21;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp3;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_bra[vi] * fp49;
LIBINT2_REALTYPE fp298;
fp298 = inteval->two_alpha0_bra[vi] * fp51;
target[((hsi*45+41)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp25 * fp20;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp4;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_bra[vi] * fp52;
LIBINT2_REALTYPE fp299;
fp299 = inteval->two_alpha0_bra[vi] * fp54;
target[((hsi*45+40)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp56;
fp56 = fp26 * fp24;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp1;
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_bra[vi] * fp55;
LIBINT2_REALTYPE fp300;
fp300 = inteval->two_alpha0_bra[vi] * fp57;
target[((hsi*45+39)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp59;
fp59 = fp26 * fp23;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp2;
LIBINT2_REALTYPE fp60;
fp60 = inteval->two_alpha0_bra[vi] * fp58;
LIBINT2_REALTYPE fp301;
fp301 = inteval->two_alpha0_bra[vi] * fp60;
target[((hsi*45+38)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp62;
fp62 = fp26 * fp22;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp3;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha0_bra[vi] * fp61;
LIBINT2_REALTYPE fp302;
fp302 = inteval->two_alpha0_bra[vi] * fp63;
target[((hsi*45+37)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp65;
fp65 = fp26 * fp21;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp4;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_bra[vi] * fp64;
LIBINT2_REALTYPE fp303;
fp303 = inteval->two_alpha0_bra[vi] * fp66;
target[((hsi*45+36)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp68;
fp68 = fp27 * fp24;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp2;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_bra[vi] * fp67;
LIBINT2_REALTYPE fp304;
fp304 = inteval->two_alpha0_bra[vi] * fp69;
target[((hsi*45+35)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp135;
fp135 = fp26 * fp14;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp8;
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp26 * fp15;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp8;
LIBINT2_REALTYPE fp140;
fp140 = inteval->two_alpha0_bra[vi] * fp136;
LIBINT2_REALTYPE fp138;
fp138 = fp140 - fp139;
LIBINT2_REALTYPE fp317;
fp317 = inteval->two_alpha0_bra[vi] * fp138;
target[((hsi*45+22)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp74;
fp74 = fp27 * fp22;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp4;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_bra[vi] * fp73;
LIBINT2_REALTYPE fp306;
fp306 = inteval->two_alpha0_bra[vi] * fp75;
target[((hsi*45+33)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp77;
fp77 = fp28 * fp24;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp3;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_bra[vi] * fp76;
LIBINT2_REALTYPE fp307;
fp307 = inteval->two_alpha0_bra[vi] * fp78;
target[((hsi*45+32)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp80;
fp80 = fp28 * fp23;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp4;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_bra[vi] * fp79;
LIBINT2_REALTYPE fp308;
fp308 = inteval->two_alpha0_bra[vi] * fp81;
target[((hsi*45+31)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp83;
fp83 = fp29 * fp24;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp4;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_bra[vi] * fp82;
LIBINT2_REALTYPE fp309;
fp309 = inteval->two_alpha0_bra[vi] * fp84;
target[((hsi*45+30)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp86;
fp86 = fp25 * fp18;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp5;
LIBINT2_REALTYPE fp90;
fp90 = 1.0000000000000000e+00 * fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp25 * fp19;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp5;
LIBINT2_REALTYPE fp91;
fp91 = inteval->two_alpha0_bra[vi] * fp87;
LIBINT2_REALTYPE fp89;
fp89 = fp91 - fp90;
LIBINT2_REALTYPE fp310;
fp310 = inteval->two_alpha0_bra[vi] * fp89;
target[((hsi*45+29)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp93;
fp93 = fp25 * fp16;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp6;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp25 * fp17;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp6;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_bra[vi] * fp94;
LIBINT2_REALTYPE fp96;
fp96 = fp98 - fp97;
LIBINT2_REALTYPE fp311;
fp311 = inteval->two_alpha0_bra[vi] * fp96;
target[((hsi*45+28)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp100;
fp100 = fp25 * fp14;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp7;
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp25 * fp15;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp7;
LIBINT2_REALTYPE fp105;
fp105 = inteval->two_alpha0_bra[vi] * fp101;
LIBINT2_REALTYPE fp103;
fp103 = fp105 - fp104;
LIBINT2_REALTYPE fp312;
fp312 = inteval->two_alpha0_bra[vi] * fp103;
target[((hsi*45+27)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp107;
fp107 = fp25 * fp12;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp8;
LIBINT2_REALTYPE fp111;
fp111 = 1.0000000000000000e+00 * fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp25 * fp13;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp8;
LIBINT2_REALTYPE fp112;
fp112 = inteval->two_alpha0_bra[vi] * fp108;
LIBINT2_REALTYPE fp110;
fp110 = fp112 - fp111;
LIBINT2_REALTYPE fp313;
fp313 = inteval->two_alpha0_bra[vi] * fp110;
target[((hsi*45+26)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp25 * fp10;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp9;
LIBINT2_REALTYPE fp118;
fp118 = 1.0000000000000000e+00 * fp113;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp25 * fp11;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp9;
LIBINT2_REALTYPE fp119;
fp119 = inteval->two_alpha0_bra[vi] * fp115;
LIBINT2_REALTYPE fp117;
fp117 = fp119 - fp118;
LIBINT2_REALTYPE fp314;
fp314 = inteval->two_alpha0_bra[vi] * fp117;
target[((hsi*45+25)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp121;
fp121 = fp26 * fp18;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp6;
LIBINT2_REALTYPE fp125;
fp125 = 1.0000000000000000e+00 * fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp26 * fp19;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp6;
LIBINT2_REALTYPE fp126;
fp126 = inteval->two_alpha0_bra[vi] * fp122;
LIBINT2_REALTYPE fp124;
fp124 = fp126 - fp125;
LIBINT2_REALTYPE fp315;
fp315 = inteval->two_alpha0_bra[vi] * fp124;
target[((hsi*45+24)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp128;
fp128 = fp26 * fp16;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp7;
LIBINT2_REALTYPE fp132;
fp132 = 1.0000000000000000e+00 * fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp26 * fp17;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp7;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha0_bra[vi] * fp129;
LIBINT2_REALTYPE fp131;
fp131 = fp133 - fp132;
LIBINT2_REALTYPE fp316;
fp316 = inteval->two_alpha0_bra[vi] * fp131;
target[((hsi*45+23)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp71;
fp71 = fp27 * fp23;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp3;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_bra[vi] * fp70;
LIBINT2_REALTYPE fp305;
fp305 = inteval->two_alpha0_bra[vi] * fp72;
target[((hsi*45+34)*1+lsi)*1] = fp305;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 340 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif