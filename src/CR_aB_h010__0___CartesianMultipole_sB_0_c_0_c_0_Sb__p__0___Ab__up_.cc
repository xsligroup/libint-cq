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
void CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp29 * fp19;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp11;
LIBINT2_REALTYPE fp339;
fp339 = 4.0000000000000000e+00 * fp154;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp29 * fp15;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp11;
LIBINT2_REALTYPE fp340;
fp340 = inteval->two_alpha0_bra[vi] * fp156;
LIBINT2_REALTYPE fp338;
fp338 = fp340 - fp339;
target[((hsi*63+30)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp30 * fp25;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp4;
LIBINT2_REALTYPE fp341;
fp341 = inteval->two_alpha0_bra[vi] * fp158;
target[((hsi*63+29)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp30 * fp24;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp5;
LIBINT2_REALTYPE fp342;
fp342 = inteval->two_alpha0_bra[vi] * fp160;
target[((hsi*63+28)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp31 * fp25;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp5;
LIBINT2_REALTYPE fp343;
fp343 = inteval->two_alpha0_bra[vi] * fp162;
target[((hsi*63+27)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp30 * fp22;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp6;
LIBINT2_REALTYPE fp345;
fp345 = 1.0000000000000000e+00 * fp164;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp30 * fp23;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp6;
LIBINT2_REALTYPE fp346;
fp346 = inteval->two_alpha0_bra[vi] * fp166;
LIBINT2_REALTYPE fp344;
fp344 = fp346 - fp345;
target[((hsi*63+26)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp30 * fp20;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp7;
LIBINT2_REALTYPE fp348;
fp348 = 1.0000000000000000e+00 * fp168;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp30 * fp21;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp7;
LIBINT2_REALTYPE fp349;
fp349 = inteval->two_alpha0_bra[vi] * fp170;
LIBINT2_REALTYPE fp347;
fp347 = fp349 - fp348;
target[((hsi*63+25)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp173;
fp173 = fp31 * fp22;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp7;
LIBINT2_REALTYPE fp351;
fp351 = 1.0000000000000000e+00 * fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp31 * fp23;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp7;
LIBINT2_REALTYPE fp352;
fp352 = inteval->two_alpha0_bra[vi] * fp174;
LIBINT2_REALTYPE fp350;
fp350 = fp352 - fp351;
target[((hsi*63+24)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp30 * fp25;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp8;
LIBINT2_REALTYPE fp354;
fp354 = 2.0000000000000000e+00 * fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp30 * fp19;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp8;
LIBINT2_REALTYPE fp355;
fp355 = inteval->two_alpha0_bra[vi] * fp178;
LIBINT2_REALTYPE fp353;
fp353 = fp355 - fp354;
target[((hsi*63+23)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp30 * fp24;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp9;
LIBINT2_REALTYPE fp357;
fp357 = 2.0000000000000000e+00 * fp180;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp30 * fp18;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp9;
LIBINT2_REALTYPE fp358;
fp358 = inteval->two_alpha0_bra[vi] * fp182;
LIBINT2_REALTYPE fp356;
fp356 = fp358 - fp357;
target[((hsi*63+22)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp185;
fp185 = fp31 * fp25;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp9;
LIBINT2_REALTYPE fp360;
fp360 = 2.0000000000000000e+00 * fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp31 * fp19;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp9;
LIBINT2_REALTYPE fp361;
fp361 = inteval->two_alpha0_bra[vi] * fp186;
LIBINT2_REALTYPE fp359;
fp359 = fp361 - fp360;
target[((hsi*63+21)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp30 * fp23;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp10;
LIBINT2_REALTYPE fp363;
fp363 = 3.0000000000000000e+00 * fp188;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp30 * fp17;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp10;
LIBINT2_REALTYPE fp364;
fp364 = inteval->two_alpha0_bra[vi] * fp190;
LIBINT2_REALTYPE fp362;
fp362 = fp364 - fp363;
target[((hsi*63+20)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp193;
fp193 = fp30 * fp21;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp11;
LIBINT2_REALTYPE fp366;
fp366 = 3.0000000000000000e+00 * fp192;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp30 * fp16;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp11;
LIBINT2_REALTYPE fp367;
fp367 = inteval->two_alpha0_bra[vi] * fp194;
LIBINT2_REALTYPE fp365;
fp365 = fp367 - fp366;
target[((hsi*63+19)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp197;
fp197 = fp31 * fp23;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp11;
LIBINT2_REALTYPE fp369;
fp369 = 3.0000000000000000e+00 * fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp31 * fp17;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp11;
LIBINT2_REALTYPE fp370;
fp370 = inteval->two_alpha0_bra[vi] * fp198;
LIBINT2_REALTYPE fp368;
fp368 = fp370 - fp369;
target[((hsi*63+18)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp32 * fp25;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp6;
LIBINT2_REALTYPE fp371;
fp371 = inteval->two_alpha0_bra[vi] * fp200;
target[((hsi*63+17)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp37 * fp25;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp11;
LIBINT2_REALTYPE fp406;
fp406 = inteval->two_alpha0_bra[vi] * fp252;
target[((hsi*63+0)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp33 * fp25;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp7;
LIBINT2_REALTYPE fp373;
fp373 = inteval->two_alpha0_bra[vi] * fp204;
target[((hsi*63+15)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp207;
fp207 = fp32 * fp22;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp8;
LIBINT2_REALTYPE fp375;
fp375 = 1.0000000000000000e+00 * fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp32 * fp23;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp8;
LIBINT2_REALTYPE fp376;
fp376 = inteval->two_alpha0_bra[vi] * fp208;
LIBINT2_REALTYPE fp374;
fp374 = fp376 - fp375;
target[((hsi*63+14)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp211;
fp211 = fp32 * fp20;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp9;
LIBINT2_REALTYPE fp378;
fp378 = 1.0000000000000000e+00 * fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp32 * fp21;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp9;
LIBINT2_REALTYPE fp379;
fp379 = inteval->two_alpha0_bra[vi] * fp212;
LIBINT2_REALTYPE fp377;
fp377 = fp379 - fp378;
target[((hsi*63+13)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp215;
fp215 = fp33 * fp22;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp9;
LIBINT2_REALTYPE fp381;
fp381 = 1.0000000000000000e+00 * fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp33 * fp23;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp9;
LIBINT2_REALTYPE fp382;
fp382 = inteval->two_alpha0_bra[vi] * fp216;
LIBINT2_REALTYPE fp380;
fp380 = fp382 - fp381;
target[((hsi*63+12)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp219;
fp219 = fp32 * fp25;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp10;
LIBINT2_REALTYPE fp384;
fp384 = 2.0000000000000000e+00 * fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp32 * fp19;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp10;
LIBINT2_REALTYPE fp385;
fp385 = inteval->two_alpha0_bra[vi] * fp220;
LIBINT2_REALTYPE fp383;
fp383 = fp385 - fp384;
target[((hsi*63+11)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp223;
fp223 = fp32 * fp24;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp11;
LIBINT2_REALTYPE fp387;
fp387 = 2.0000000000000000e+00 * fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp32 * fp18;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp11;
LIBINT2_REALTYPE fp388;
fp388 = inteval->two_alpha0_bra[vi] * fp224;
LIBINT2_REALTYPE fp386;
fp386 = fp388 - fp387;
target[((hsi*63+10)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp227;
fp227 = fp33 * fp25;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp11;
LIBINT2_REALTYPE fp390;
fp390 = 2.0000000000000000e+00 * fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp33 * fp19;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp11;
LIBINT2_REALTYPE fp391;
fp391 = inteval->two_alpha0_bra[vi] * fp228;
LIBINT2_REALTYPE fp389;
fp389 = fp391 - fp390;
target[((hsi*63+9)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp34 * fp25;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp8;
LIBINT2_REALTYPE fp392;
fp392 = inteval->two_alpha0_bra[vi] * fp230;
target[((hsi*63+8)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp233;
fp233 = fp34 * fp24;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp9;
LIBINT2_REALTYPE fp393;
fp393 = inteval->two_alpha0_bra[vi] * fp232;
target[((hsi*63+7)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp35 * fp25;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp9;
LIBINT2_REALTYPE fp394;
fp394 = inteval->two_alpha0_bra[vi] * fp234;
target[((hsi*63+6)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp237;
fp237 = fp34 * fp22;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp10;
LIBINT2_REALTYPE fp396;
fp396 = 1.0000000000000000e+00 * fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp34 * fp23;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp10;
LIBINT2_REALTYPE fp397;
fp397 = inteval->two_alpha0_bra[vi] * fp238;
LIBINT2_REALTYPE fp395;
fp395 = fp397 - fp396;
target[((hsi*63+5)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp241;
fp241 = fp34 * fp20;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp11;
LIBINT2_REALTYPE fp399;
fp399 = 1.0000000000000000e+00 * fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp34 * fp21;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp11;
LIBINT2_REALTYPE fp400;
fp400 = inteval->two_alpha0_bra[vi] * fp242;
LIBINT2_REALTYPE fp398;
fp398 = fp400 - fp399;
target[((hsi*63+4)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp245;
fp245 = fp35 * fp22;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp11;
LIBINT2_REALTYPE fp402;
fp402 = 1.0000000000000000e+00 * fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp35 * fp23;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp11;
LIBINT2_REALTYPE fp403;
fp403 = inteval->two_alpha0_bra[vi] * fp246;
LIBINT2_REALTYPE fp401;
fp401 = fp403 - fp402;
target[((hsi*63+3)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp36 * fp25;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp10;
LIBINT2_REALTYPE fp404;
fp404 = inteval->two_alpha0_bra[vi] * fp248;
target[((hsi*63+2)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp251;
fp251 = fp36 * fp24;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp11;
LIBINT2_REALTYPE fp405;
fp405 = inteval->two_alpha0_bra[vi] * fp250;
target[((hsi*63+1)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp203;
fp203 = fp32 * fp24;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp7;
LIBINT2_REALTYPE fp372;
fp372 = inteval->two_alpha0_bra[vi] * fp202;
target[((hsi*63+16)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp26 * fp25;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp0;
LIBINT2_REALTYPE fp254;
fp254 = inteval->two_alpha0_bra[vi] * fp38;
target[((hsi*63+62)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp26 * fp24;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp1;
LIBINT2_REALTYPE fp255;
fp255 = inteval->two_alpha0_bra[vi] * fp40;
target[((hsi*63+61)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp27 * fp25;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp1;
LIBINT2_REALTYPE fp256;
fp256 = inteval->two_alpha0_bra[vi] * fp42;
target[((hsi*63+60)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp26 * fp22;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp2;
LIBINT2_REALTYPE fp258;
fp258 = 1.0000000000000000e+00 * fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp26 * fp23;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp2;
LIBINT2_REALTYPE fp259;
fp259 = inteval->two_alpha0_bra[vi] * fp46;
LIBINT2_REALTYPE fp257;
fp257 = fp259 - fp258;
target[((hsi*63+59)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp26 * fp20;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp3;
LIBINT2_REALTYPE fp261;
fp261 = 1.0000000000000000e+00 * fp48;
LIBINT2_REALTYPE fp51;
fp51 = fp26 * fp21;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp3;
LIBINT2_REALTYPE fp262;
fp262 = inteval->two_alpha0_bra[vi] * fp50;
LIBINT2_REALTYPE fp260;
fp260 = fp262 - fp261;
target[((hsi*63+58)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp53;
fp53 = fp27 * fp22;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp3;
LIBINT2_REALTYPE fp264;
fp264 = 1.0000000000000000e+00 * fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp27 * fp23;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp3;
LIBINT2_REALTYPE fp265;
fp265 = inteval->two_alpha0_bra[vi] * fp54;
LIBINT2_REALTYPE fp263;
fp263 = fp265 - fp264;
target[((hsi*63+57)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp57;
fp57 = fp26 * fp25;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp4;
LIBINT2_REALTYPE fp267;
fp267 = 2.0000000000000000e+00 * fp56;
LIBINT2_REALTYPE fp59;
fp59 = fp26 * fp19;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp4;
LIBINT2_REALTYPE fp268;
fp268 = inteval->two_alpha0_bra[vi] * fp58;
LIBINT2_REALTYPE fp266;
fp266 = fp268 - fp267;
target[((hsi*63+56)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp61;
fp61 = fp26 * fp24;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp5;
LIBINT2_REALTYPE fp270;
fp270 = 2.0000000000000000e+00 * fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp26 * fp18;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp5;
LIBINT2_REALTYPE fp271;
fp271 = inteval->two_alpha0_bra[vi] * fp62;
LIBINT2_REALTYPE fp269;
fp269 = fp271 - fp270;
target[((hsi*63+55)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp65;
fp65 = fp27 * fp25;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp5;
LIBINT2_REALTYPE fp273;
fp273 = 2.0000000000000000e+00 * fp64;
LIBINT2_REALTYPE fp67;
fp67 = fp27 * fp19;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp5;
LIBINT2_REALTYPE fp274;
fp274 = inteval->two_alpha0_bra[vi] * fp66;
LIBINT2_REALTYPE fp272;
fp272 = fp274 - fp273;
target[((hsi*63+54)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp69;
fp69 = fp26 * fp23;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp6;
LIBINT2_REALTYPE fp276;
fp276 = 3.0000000000000000e+00 * fp68;
LIBINT2_REALTYPE fp71;
fp71 = fp26 * fp17;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp6;
LIBINT2_REALTYPE fp277;
fp277 = inteval->two_alpha0_bra[vi] * fp70;
LIBINT2_REALTYPE fp275;
fp275 = fp277 - fp276;
target[((hsi*63+53)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp73;
fp73 = fp26 * fp21;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp7;
LIBINT2_REALTYPE fp279;
fp279 = 3.0000000000000000e+00 * fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp26 * fp16;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp7;
LIBINT2_REALTYPE fp280;
fp280 = inteval->two_alpha0_bra[vi] * fp74;
LIBINT2_REALTYPE fp278;
fp278 = fp280 - fp279;
target[((hsi*63+52)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp77;
fp77 = fp27 * fp23;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp7;
LIBINT2_REALTYPE fp282;
fp282 = 3.0000000000000000e+00 * fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp27 * fp17;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp7;
LIBINT2_REALTYPE fp283;
fp283 = inteval->two_alpha0_bra[vi] * fp78;
LIBINT2_REALTYPE fp281;
fp281 = fp283 - fp282;
target[((hsi*63+51)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp81;
fp81 = fp26 * fp19;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp8;
LIBINT2_REALTYPE fp285;
fp285 = 4.0000000000000000e+00 * fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp26 * fp15;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp8;
LIBINT2_REALTYPE fp286;
fp286 = inteval->two_alpha0_bra[vi] * fp82;
LIBINT2_REALTYPE fp284;
fp284 = fp286 - fp285;
target[((hsi*63+50)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp85;
fp85 = fp26 * fp18;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp9;
LIBINT2_REALTYPE fp288;
fp288 = 4.0000000000000000e+00 * fp84;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp26 * fp14;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp9;
LIBINT2_REALTYPE fp289;
fp289 = inteval->two_alpha0_bra[vi] * fp86;
LIBINT2_REALTYPE fp287;
fp287 = fp289 - fp288;
target[((hsi*63+49)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp89;
fp89 = fp27 * fp19;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp9;
LIBINT2_REALTYPE fp291;
fp291 = 4.0000000000000000e+00 * fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp27 * fp15;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp9;
LIBINT2_REALTYPE fp292;
fp292 = inteval->two_alpha0_bra[vi] * fp90;
LIBINT2_REALTYPE fp290;
fp290 = fp292 - fp291;
target[((hsi*63+48)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp28 * fp18;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp11;
LIBINT2_REALTYPE fp336;
fp336 = 4.0000000000000000e+00 * fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp28 * fp14;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp11;
LIBINT2_REALTYPE fp337;
fp337 = inteval->two_alpha0_bra[vi] * fp152;
LIBINT2_REALTYPE fp335;
fp335 = fp337 - fp336;
target[((hsi*63+31)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp97;
fp97 = fp26 * fp16;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp11;
LIBINT2_REALTYPE fp297;
fp297 = 5.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*14+13)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp26 * fp12;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp11;
LIBINT2_REALTYPE fp298;
fp298 = inteval->two_alpha0_bra[vi] * fp98;
LIBINT2_REALTYPE fp296;
fp296 = fp298 - fp297;
target[((hsi*63+46)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp101;
fp101 = fp27 * fp17;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp11;
LIBINT2_REALTYPE fp300;
fp300 = 5.0000000000000000e+00 * fp100;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp27 * fp13;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp11;
LIBINT2_REALTYPE fp301;
fp301 = inteval->two_alpha0_bra[vi] * fp102;
LIBINT2_REALTYPE fp299;
fp299 = fp301 - fp300;
target[((hsi*63+45)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp105;
fp105 = fp28 * fp25;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp2;
LIBINT2_REALTYPE fp302;
fp302 = inteval->two_alpha0_bra[vi] * fp104;
target[((hsi*63+44)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp107;
fp107 = fp28 * fp24;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp3;
LIBINT2_REALTYPE fp303;
fp303 = inteval->two_alpha0_bra[vi] * fp106;
target[((hsi*63+43)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp109;
fp109 = fp29 * fp25;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp3;
LIBINT2_REALTYPE fp304;
fp304 = inteval->two_alpha0_bra[vi] * fp108;
target[((hsi*63+42)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp111;
fp111 = fp28 * fp22;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp4;
LIBINT2_REALTYPE fp306;
fp306 = 1.0000000000000000e+00 * fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp28 * fp23;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp4;
LIBINT2_REALTYPE fp307;
fp307 = inteval->two_alpha0_bra[vi] * fp112;
LIBINT2_REALTYPE fp305;
fp305 = fp307 - fp306;
target[((hsi*63+41)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp115;
fp115 = fp28 * fp20;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp5;
LIBINT2_REALTYPE fp309;
fp309 = 1.0000000000000000e+00 * fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp28 * fp21;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp5;
LIBINT2_REALTYPE fp310;
fp310 = inteval->two_alpha0_bra[vi] * fp116;
LIBINT2_REALTYPE fp308;
fp308 = fp310 - fp309;
target[((hsi*63+40)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp119;
fp119 = fp29 * fp22;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp5;
LIBINT2_REALTYPE fp312;
fp312 = 1.0000000000000000e+00 * fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp29 * fp23;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp5;
LIBINT2_REALTYPE fp313;
fp313 = inteval->two_alpha0_bra[vi] * fp120;
LIBINT2_REALTYPE fp311;
fp311 = fp313 - fp312;
target[((hsi*63+39)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp123;
fp123 = fp28 * fp25;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp6;
LIBINT2_REALTYPE fp315;
fp315 = 2.0000000000000000e+00 * fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp28 * fp19;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp6;
LIBINT2_REALTYPE fp316;
fp316 = inteval->two_alpha0_bra[vi] * fp124;
LIBINT2_REALTYPE fp314;
fp314 = fp316 - fp315;
target[((hsi*63+38)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp127;
fp127 = fp28 * fp24;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp7;
LIBINT2_REALTYPE fp318;
fp318 = 2.0000000000000000e+00 * fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp28 * fp18;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp7;
LIBINT2_REALTYPE fp319;
fp319 = inteval->two_alpha0_bra[vi] * fp128;
LIBINT2_REALTYPE fp317;
fp317 = fp319 - fp318;
target[((hsi*63+37)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp131;
fp131 = fp29 * fp25;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp7;
LIBINT2_REALTYPE fp321;
fp321 = 2.0000000000000000e+00 * fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp29 * fp19;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp7;
LIBINT2_REALTYPE fp322;
fp322 = inteval->two_alpha0_bra[vi] * fp132;
LIBINT2_REALTYPE fp320;
fp320 = fp322 - fp321;
target[((hsi*63+36)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp135;
fp135 = fp28 * fp23;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp8;
LIBINT2_REALTYPE fp324;
fp324 = 3.0000000000000000e+00 * fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp28 * fp17;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp8;
LIBINT2_REALTYPE fp325;
fp325 = inteval->two_alpha0_bra[vi] * fp136;
LIBINT2_REALTYPE fp323;
fp323 = fp325 - fp324;
target[((hsi*63+35)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp139;
fp139 = fp28 * fp21;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp9;
LIBINT2_REALTYPE fp327;
fp327 = 3.0000000000000000e+00 * fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp28 * fp16;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp9;
LIBINT2_REALTYPE fp328;
fp328 = inteval->two_alpha0_bra[vi] * fp140;
LIBINT2_REALTYPE fp326;
fp326 = fp328 - fp327;
target[((hsi*63+34)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp143;
fp143 = fp29 * fp23;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp9;
LIBINT2_REALTYPE fp330;
fp330 = 3.0000000000000000e+00 * fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp29 * fp17;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp9;
LIBINT2_REALTYPE fp331;
fp331 = inteval->two_alpha0_bra[vi] * fp144;
LIBINT2_REALTYPE fp329;
fp329 = fp331 - fp330;
target[((hsi*63+33)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp147;
fp147 = fp28 * fp19;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp10;
LIBINT2_REALTYPE fp333;
fp333 = 4.0000000000000000e+00 * fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp28 * fp15;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp10;
LIBINT2_REALTYPE fp334;
fp334 = inteval->two_alpha0_bra[vi] * fp148;
LIBINT2_REALTYPE fp332;
fp332 = fp334 - fp333;
target[((hsi*63+32)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp93;
fp93 = fp26 * fp17;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp10;
LIBINT2_REALTYPE fp294;
fp294 = 5.0000000000000000e+00 * fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp26 * fp13;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp10;
LIBINT2_REALTYPE fp295;
fp295 = inteval->two_alpha0_bra[vi] * fp94;
LIBINT2_REALTYPE fp293;
fp293 = fp295 - fp294;
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
