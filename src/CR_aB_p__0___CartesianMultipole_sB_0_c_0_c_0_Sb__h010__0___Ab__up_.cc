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
void CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp28 * fp18;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp8;
LIBINT2_REALTYPE fp334;
fp334 = inteval->two_alpha0_ket[vi] * fp150;
target[((hsi*63+30)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp28 * fp16;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp9;
LIBINT2_REALTYPE fp336;
fp336 = 1.0000000000000000e+00 * fp152;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp28 * fp17;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp9;
LIBINT2_REALTYPE fp337;
fp337 = inteval->two_alpha0_ket[vi] * fp154;
LIBINT2_REALTYPE fp335;
fp335 = fp337 - fp336;
target[((hsi*63+29)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp28 * fp18;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp10;
LIBINT2_REALTYPE fp339;
fp339 = 2.0000000000000000e+00 * fp156;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp28 * fp15;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp10;
LIBINT2_REALTYPE fp340;
fp340 = inteval->two_alpha0_ket[vi] * fp158;
LIBINT2_REALTYPE fp338;
fp338 = fp340 - fp339;
target[((hsi*63+28)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp28 * fp17;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp11;
LIBINT2_REALTYPE fp342;
fp342 = 3.0000000000000000e+00 * fp160;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp28 * fp14;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp11;
LIBINT2_REALTYPE fp343;
fp343 = inteval->two_alpha0_ket[vi] * fp162;
LIBINT2_REALTYPE fp341;
fp341 = fp343 - fp342;
target[((hsi*63+27)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp29 * fp18;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp9;
LIBINT2_REALTYPE fp344;
fp344 = inteval->two_alpha0_ket[vi] * fp164;
target[((hsi*63+26)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp167;
fp167 = fp29 * fp16;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp10;
LIBINT2_REALTYPE fp346;
fp346 = 1.0000000000000000e+00 * fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp29 * fp17;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp10;
LIBINT2_REALTYPE fp347;
fp347 = inteval->two_alpha0_ket[vi] * fp168;
LIBINT2_REALTYPE fp345;
fp345 = fp347 - fp346;
target[((hsi*63+25)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp171;
fp171 = fp29 * fp18;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp11;
LIBINT2_REALTYPE fp349;
fp349 = 2.0000000000000000e+00 * fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp29 * fp15;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp11;
LIBINT2_REALTYPE fp350;
fp350 = inteval->two_alpha0_ket[vi] * fp172;
LIBINT2_REALTYPE fp348;
fp348 = fp350 - fp349;
target[((hsi*63+24)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp30 * fp18;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp10;
LIBINT2_REALTYPE fp351;
fp351 = inteval->two_alpha0_ket[vi] * fp174;
target[((hsi*63+23)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp177;
fp177 = fp30 * fp16;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp11;
LIBINT2_REALTYPE fp353;
fp353 = 1.0000000000000000e+00 * fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp30 * fp17;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp11;
LIBINT2_REALTYPE fp354;
fp354 = inteval->two_alpha0_ket[vi] * fp178;
LIBINT2_REALTYPE fp352;
fp352 = fp354 - fp353;
target[((hsi*63+22)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp31 * fp18;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp11;
LIBINT2_REALTYPE fp355;
fp355 = inteval->two_alpha0_ket[vi] * fp180;
target[((hsi*63+21)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp32 * fp25;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp6;
LIBINT2_REALTYPE fp356;
fp356 = inteval->two_alpha0_ket[vi] * fp182;
target[((hsi*63+20)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp32 * fp23;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp7;
LIBINT2_REALTYPE fp358;
fp358 = 1.0000000000000000e+00 * fp184;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp32 * fp24;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp7;
LIBINT2_REALTYPE fp359;
fp359 = inteval->two_alpha0_ket[vi] * fp186;
LIBINT2_REALTYPE fp357;
fp357 = fp359 - fp358;
target[((hsi*63+19)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp189;
fp189 = fp32 * fp25;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp8;
LIBINT2_REALTYPE fp361;
fp361 = 2.0000000000000000e+00 * fp188;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp32 * fp22;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp8;
LIBINT2_REALTYPE fp362;
fp362 = inteval->two_alpha0_ket[vi] * fp190;
LIBINT2_REALTYPE fp360;
fp360 = fp362 - fp361;
target[((hsi*63+18)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp193;
fp193 = fp32 * fp24;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp9;
LIBINT2_REALTYPE fp364;
fp364 = 3.0000000000000000e+00 * fp192;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp32 * fp21;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp9;
LIBINT2_REALTYPE fp365;
fp365 = inteval->two_alpha0_ket[vi] * fp194;
LIBINT2_REALTYPE fp363;
fp363 = fp365 - fp364;
target[((hsi*63+17)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp37 * fp25;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp11;
LIBINT2_REALTYPE fp406;
fp406 = inteval->two_alpha0_ket[vi] * fp252;
target[((hsi*63+0)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp201;
fp201 = fp32 * fp21;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp11;
LIBINT2_REALTYPE fp370;
fp370 = 5.0000000000000000e+00 * fp200;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp32 * fp19;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp11;
LIBINT2_REALTYPE fp371;
fp371 = inteval->two_alpha0_ket[vi] * fp202;
LIBINT2_REALTYPE fp369;
fp369 = fp371 - fp370;
target[((hsi*63+15)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp33 * fp25;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp7;
LIBINT2_REALTYPE fp372;
fp372 = inteval->two_alpha0_ket[vi] * fp204;
target[((hsi*63+14)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp207;
fp207 = fp33 * fp23;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp8;
LIBINT2_REALTYPE fp374;
fp374 = 1.0000000000000000e+00 * fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp33 * fp24;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp8;
LIBINT2_REALTYPE fp375;
fp375 = inteval->two_alpha0_ket[vi] * fp208;
LIBINT2_REALTYPE fp373;
fp373 = fp375 - fp374;
target[((hsi*63+13)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp211;
fp211 = fp33 * fp25;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp9;
LIBINT2_REALTYPE fp377;
fp377 = 2.0000000000000000e+00 * fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp33 * fp22;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp9;
LIBINT2_REALTYPE fp378;
fp378 = inteval->two_alpha0_ket[vi] * fp212;
LIBINT2_REALTYPE fp376;
fp376 = fp378 - fp377;
target[((hsi*63+12)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp215;
fp215 = fp33 * fp24;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp10;
LIBINT2_REALTYPE fp380;
fp380 = 3.0000000000000000e+00 * fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp33 * fp21;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp10;
LIBINT2_REALTYPE fp381;
fp381 = inteval->two_alpha0_ket[vi] * fp216;
LIBINT2_REALTYPE fp379;
fp379 = fp381 - fp380;
target[((hsi*63+11)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp219;
fp219 = fp33 * fp22;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp11;
LIBINT2_REALTYPE fp383;
fp383 = 4.0000000000000000e+00 * fp218;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp33 * fp20;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp11;
LIBINT2_REALTYPE fp384;
fp384 = inteval->two_alpha0_ket[vi] * fp220;
LIBINT2_REALTYPE fp382;
fp382 = fp384 - fp383;
target[((hsi*63+10)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp34 * fp25;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp8;
LIBINT2_REALTYPE fp385;
fp385 = inteval->two_alpha0_ket[vi] * fp222;
target[((hsi*63+9)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp225;
fp225 = fp34 * fp23;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp9;
LIBINT2_REALTYPE fp387;
fp387 = 1.0000000000000000e+00 * fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp34 * fp24;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp9;
LIBINT2_REALTYPE fp388;
fp388 = inteval->two_alpha0_ket[vi] * fp226;
LIBINT2_REALTYPE fp386;
fp386 = fp388 - fp387;
target[((hsi*63+8)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp229;
fp229 = fp34 * fp25;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp10;
LIBINT2_REALTYPE fp390;
fp390 = 2.0000000000000000e+00 * fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp34 * fp22;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp10;
LIBINT2_REALTYPE fp391;
fp391 = inteval->two_alpha0_ket[vi] * fp230;
LIBINT2_REALTYPE fp389;
fp389 = fp391 - fp390;
target[((hsi*63+7)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp233;
fp233 = fp34 * fp24;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp11;
LIBINT2_REALTYPE fp393;
fp393 = 3.0000000000000000e+00 * fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp34 * fp21;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp11;
LIBINT2_REALTYPE fp394;
fp394 = inteval->two_alpha0_ket[vi] * fp234;
LIBINT2_REALTYPE fp392;
fp392 = fp394 - fp393;
target[((hsi*63+6)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp35 * fp25;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp9;
LIBINT2_REALTYPE fp395;
fp395 = inteval->two_alpha0_ket[vi] * fp236;
target[((hsi*63+5)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp239;
fp239 = fp35 * fp23;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp10;
LIBINT2_REALTYPE fp397;
fp397 = 1.0000000000000000e+00 * fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp35 * fp24;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp10;
LIBINT2_REALTYPE fp398;
fp398 = inteval->two_alpha0_ket[vi] * fp240;
LIBINT2_REALTYPE fp396;
fp396 = fp398 - fp397;
target[((hsi*63+4)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp243;
fp243 = fp35 * fp25;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp11;
LIBINT2_REALTYPE fp400;
fp400 = 2.0000000000000000e+00 * fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp35 * fp22;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp11;
LIBINT2_REALTYPE fp401;
fp401 = inteval->two_alpha0_ket[vi] * fp244;
LIBINT2_REALTYPE fp399;
fp399 = fp401 - fp400;
target[((hsi*63+3)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp36 * fp25;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp10;
LIBINT2_REALTYPE fp402;
fp402 = inteval->two_alpha0_ket[vi] * fp246;
target[((hsi*63+2)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp249;
fp249 = fp36 * fp23;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp11;
LIBINT2_REALTYPE fp404;
fp404 = 1.0000000000000000e+00 * fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp36 * fp24;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp11;
LIBINT2_REALTYPE fp405;
fp405 = inteval->two_alpha0_ket[vi] * fp250;
LIBINT2_REALTYPE fp403;
fp403 = fp405 - fp404;
target[((hsi*63+1)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp197;
fp197 = fp32 * fp22;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp10;
LIBINT2_REALTYPE fp367;
fp367 = 4.0000000000000000e+00 * fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp32 * fp20;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp10;
LIBINT2_REALTYPE fp368;
fp368 = inteval->two_alpha0_ket[vi] * fp198;
LIBINT2_REALTYPE fp366;
fp366 = fp368 - fp367;
target[((hsi*63+16)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp26 * fp25;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp0;
LIBINT2_REALTYPE fp254;
fp254 = inteval->two_alpha0_ket[vi] * fp38;
target[((hsi*63+62)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp26 * fp23;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp1;
LIBINT2_REALTYPE fp256;
fp256 = 1.0000000000000000e+00 * fp40;
LIBINT2_REALTYPE fp43;
fp43 = fp26 * fp24;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp1;
LIBINT2_REALTYPE fp257;
fp257 = inteval->two_alpha0_ket[vi] * fp42;
LIBINT2_REALTYPE fp255;
fp255 = fp257 - fp256;
target[((hsi*63+61)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp26 * fp25;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp2;
LIBINT2_REALTYPE fp259;
fp259 = 2.0000000000000000e+00 * fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp26 * fp22;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp2;
LIBINT2_REALTYPE fp260;
fp260 = inteval->two_alpha0_ket[vi] * fp46;
LIBINT2_REALTYPE fp258;
fp258 = fp260 - fp259;
target[((hsi*63+60)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp26 * fp24;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp3;
LIBINT2_REALTYPE fp262;
fp262 = 3.0000000000000000e+00 * fp48;
LIBINT2_REALTYPE fp51;
fp51 = fp26 * fp21;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp3;
LIBINT2_REALTYPE fp263;
fp263 = inteval->two_alpha0_ket[vi] * fp50;
LIBINT2_REALTYPE fp261;
fp261 = fp263 - fp262;
target[((hsi*63+59)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp26 * fp22;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp4;
LIBINT2_REALTYPE fp265;
fp265 = 4.0000000000000000e+00 * fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp26 * fp20;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp4;
LIBINT2_REALTYPE fp266;
fp266 = inteval->two_alpha0_ket[vi] * fp54;
LIBINT2_REALTYPE fp264;
fp264 = fp266 - fp265;
target[((hsi*63+58)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp26 * fp21;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp5;
LIBINT2_REALTYPE fp268;
fp268 = 5.0000000000000000e+00 * fp56;
LIBINT2_REALTYPE fp59;
fp59 = fp26 * fp19;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp5;
LIBINT2_REALTYPE fp269;
fp269 = inteval->two_alpha0_ket[vi] * fp58;
LIBINT2_REALTYPE fp267;
fp267 = fp269 - fp268;
target[((hsi*63+57)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp27 * fp25;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp1;
LIBINT2_REALTYPE fp270;
fp270 = inteval->two_alpha0_ket[vi] * fp60;
target[((hsi*63+56)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp63;
fp63 = fp27 * fp23;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp2;
LIBINT2_REALTYPE fp272;
fp272 = 1.0000000000000000e+00 * fp62;
LIBINT2_REALTYPE fp65;
fp65 = fp27 * fp24;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp2;
LIBINT2_REALTYPE fp273;
fp273 = inteval->two_alpha0_ket[vi] * fp64;
LIBINT2_REALTYPE fp271;
fp271 = fp273 - fp272;
target[((hsi*63+55)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp67;
fp67 = fp27 * fp25;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp3;
LIBINT2_REALTYPE fp275;
fp275 = 2.0000000000000000e+00 * fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp27 * fp22;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp3;
LIBINT2_REALTYPE fp276;
fp276 = inteval->two_alpha0_ket[vi] * fp68;
LIBINT2_REALTYPE fp274;
fp274 = fp276 - fp275;
target[((hsi*63+54)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp71;
fp71 = fp27 * fp24;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp4;
LIBINT2_REALTYPE fp278;
fp278 = 3.0000000000000000e+00 * fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp27 * fp21;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp4;
LIBINT2_REALTYPE fp279;
fp279 = inteval->two_alpha0_ket[vi] * fp72;
LIBINT2_REALTYPE fp277;
fp277 = fp279 - fp278;
target[((hsi*63+53)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp75;
fp75 = fp27 * fp22;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp5;
LIBINT2_REALTYPE fp281;
fp281 = 4.0000000000000000e+00 * fp74;
LIBINT2_REALTYPE fp77;
fp77 = fp27 * fp20;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp5;
LIBINT2_REALTYPE fp282;
fp282 = inteval->two_alpha0_ket[vi] * fp76;
LIBINT2_REALTYPE fp280;
fp280 = fp282 - fp281;
target[((hsi*63+52)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp79;
fp79 = fp28 * fp25;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp2;
LIBINT2_REALTYPE fp283;
fp283 = inteval->two_alpha0_ket[vi] * fp78;
target[((hsi*63+51)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp81;
fp81 = fp28 * fp23;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp3;
LIBINT2_REALTYPE fp285;
fp285 = 1.0000000000000000e+00 * fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp28 * fp24;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp3;
LIBINT2_REALTYPE fp286;
fp286 = inteval->two_alpha0_ket[vi] * fp82;
LIBINT2_REALTYPE fp284;
fp284 = fp286 - fp285;
target[((hsi*63+50)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp85;
fp85 = fp28 * fp25;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp4;
LIBINT2_REALTYPE fp288;
fp288 = 2.0000000000000000e+00 * fp84;
LIBINT2_REALTYPE fp87;
fp87 = fp28 * fp22;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp4;
LIBINT2_REALTYPE fp289;
fp289 = inteval->two_alpha0_ket[vi] * fp86;
LIBINT2_REALTYPE fp287;
fp287 = fp289 - fp288;
target[((hsi*63+49)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp89;
fp89 = fp28 * fp24;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp5;
LIBINT2_REALTYPE fp291;
fp291 = 3.0000000000000000e+00 * fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp28 * fp21;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp5;
LIBINT2_REALTYPE fp292;
fp292 = inteval->two_alpha0_ket[vi] * fp90;
LIBINT2_REALTYPE fp290;
fp290 = fp292 - fp291;
target[((hsi*63+48)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp147;
fp147 = fp27 * fp15;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp11;
LIBINT2_REALTYPE fp332;
fp332 = 4.0000000000000000e+00 * fp146;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp27 * fp13;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp11;
LIBINT2_REALTYPE fp333;
fp333 = inteval->two_alpha0_ket[vi] * fp148;
LIBINT2_REALTYPE fp331;
fp331 = fp333 - fp332;
target[((hsi*63+31)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp95;
fp95 = fp29 * fp23;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp4;
LIBINT2_REALTYPE fp295;
fp295 = 1.0000000000000000e+00 * fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp29 * fp24;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp4;
LIBINT2_REALTYPE fp296;
fp296 = inteval->two_alpha0_ket[vi] * fp96;
LIBINT2_REALTYPE fp294;
fp294 = fp296 - fp295;
target[((hsi*63+46)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp99;
fp99 = fp29 * fp25;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp5;
LIBINT2_REALTYPE fp298;
fp298 = 2.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp29 * fp22;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp5;
LIBINT2_REALTYPE fp299;
fp299 = inteval->two_alpha0_ket[vi] * fp100;
LIBINT2_REALTYPE fp297;
fp297 = fp299 - fp298;
target[((hsi*63+45)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp103;
fp103 = fp30 * fp25;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp4;
LIBINT2_REALTYPE fp300;
fp300 = inteval->two_alpha0_ket[vi] * fp102;
target[((hsi*63+44)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp105;
fp105 = fp30 * fp23;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp5;
LIBINT2_REALTYPE fp302;
fp302 = 1.0000000000000000e+00 * fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp30 * fp24;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp5;
LIBINT2_REALTYPE fp303;
fp303 = inteval->two_alpha0_ket[vi] * fp106;
LIBINT2_REALTYPE fp301;
fp301 = fp303 - fp302;
target[((hsi*63+43)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp109;
fp109 = fp31 * fp25;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp5;
LIBINT2_REALTYPE fp304;
fp304 = inteval->two_alpha0_ket[vi] * fp108;
target[((hsi*63+42)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp111;
fp111 = fp26 * fp18;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp6;
LIBINT2_REALTYPE fp305;
fp305 = inteval->two_alpha0_ket[vi] * fp110;
target[((hsi*63+41)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp113;
fp113 = fp26 * fp16;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp7;
LIBINT2_REALTYPE fp307;
fp307 = 1.0000000000000000e+00 * fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp26 * fp17;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp7;
LIBINT2_REALTYPE fp308;
fp308 = inteval->two_alpha0_ket[vi] * fp114;
LIBINT2_REALTYPE fp306;
fp306 = fp308 - fp307;
target[((hsi*63+40)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp117;
fp117 = fp26 * fp18;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp8;
LIBINT2_REALTYPE fp310;
fp310 = 2.0000000000000000e+00 * fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp26 * fp15;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp8;
LIBINT2_REALTYPE fp311;
fp311 = inteval->two_alpha0_ket[vi] * fp118;
LIBINT2_REALTYPE fp309;
fp309 = fp311 - fp310;
target[((hsi*63+39)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp121;
fp121 = fp26 * fp17;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp9;
LIBINT2_REALTYPE fp313;
fp313 = 3.0000000000000000e+00 * fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp26 * fp14;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp9;
LIBINT2_REALTYPE fp314;
fp314 = inteval->two_alpha0_ket[vi] * fp122;
LIBINT2_REALTYPE fp312;
fp312 = fp314 - fp313;
target[((hsi*63+38)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp125;
fp125 = fp26 * fp15;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp10;
LIBINT2_REALTYPE fp316;
fp316 = 4.0000000000000000e+00 * fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp26 * fp13;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp10;
LIBINT2_REALTYPE fp317;
fp317 = inteval->two_alpha0_ket[vi] * fp126;
LIBINT2_REALTYPE fp315;
fp315 = fp317 - fp316;
target[((hsi*63+37)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp129;
fp129 = fp26 * fp14;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp11;
LIBINT2_REALTYPE fp319;
fp319 = 5.0000000000000000e+00 * fp128;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*14+13)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp26 * fp12;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp11;
LIBINT2_REALTYPE fp320;
fp320 = inteval->two_alpha0_ket[vi] * fp130;
LIBINT2_REALTYPE fp318;
fp318 = fp320 - fp319;
target[((hsi*63+36)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp133;
fp133 = fp27 * fp18;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp7;
LIBINT2_REALTYPE fp321;
fp321 = inteval->two_alpha0_ket[vi] * fp132;
target[((hsi*63+35)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp135;
fp135 = fp27 * fp16;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp8;
LIBINT2_REALTYPE fp323;
fp323 = 1.0000000000000000e+00 * fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp27 * fp17;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp8;
LIBINT2_REALTYPE fp324;
fp324 = inteval->two_alpha0_ket[vi] * fp136;
LIBINT2_REALTYPE fp322;
fp322 = fp324 - fp323;
target[((hsi*63+34)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp139;
fp139 = fp27 * fp18;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp9;
LIBINT2_REALTYPE fp326;
fp326 = 2.0000000000000000e+00 * fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp27 * fp15;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp9;
LIBINT2_REALTYPE fp327;
fp327 = inteval->two_alpha0_ket[vi] * fp140;
LIBINT2_REALTYPE fp325;
fp325 = fp327 - fp326;
target[((hsi*63+33)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp143;
fp143 = fp27 * fp17;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp10;
LIBINT2_REALTYPE fp329;
fp329 = 3.0000000000000000e+00 * fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp27 * fp14;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp10;
LIBINT2_REALTYPE fp330;
fp330 = inteval->two_alpha0_ket[vi] * fp144;
LIBINT2_REALTYPE fp328;
fp328 = fp330 - fp329;
target[((hsi*63+32)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp93;
fp93 = fp29 * fp25;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp3;
LIBINT2_REALTYPE fp293;
fp293 = inteval->two_alpha0_ket[vi] * fp92;
target[((hsi*63+47)*1+lsi)*1] = fp293;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 407 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
