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
void CR_aB_d100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp32 * fp24;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp11;
LIBINT2_REALTYPE fp426;
fp426 = 1.0000000000000000e+00 * fp220;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp33 * fp24;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp11;
LIBINT2_REALTYPE fp427;
fp427 = inteval->two_alpha0_bra[vi] * fp222;
LIBINT2_REALTYPE fp425;
fp425 = fp427 - fp426;
target[((hsi*90+24)*1+lsi)*1] = fp425;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp30 * fp20;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp14;
LIBINT2_REALTYPE fp423;
fp423 = 1.0000000000000000e+00 * fp216;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp31 * fp20;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp14;
LIBINT2_REALTYPE fp424;
fp424 = inteval->two_alpha0_bra[vi] * fp218;
LIBINT2_REALTYPE fp422;
fp422 = fp424 - fp423;
target[((hsi*90+25)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp30 * fp21;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp13;
LIBINT2_REALTYPE fp420;
fp420 = 1.0000000000000000e+00 * fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp31 * fp21;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp13;
LIBINT2_REALTYPE fp421;
fp421 = inteval->two_alpha0_bra[vi] * fp214;
LIBINT2_REALTYPE fp419;
fp419 = fp421 - fp420;
target[((hsi*90+26)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp30 * fp22;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp12;
LIBINT2_REALTYPE fp417;
fp417 = 1.0000000000000000e+00 * fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp31 * fp22;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp12;
LIBINT2_REALTYPE fp418;
fp418 = inteval->two_alpha0_bra[vi] * fp210;
LIBINT2_REALTYPE fp416;
fp416 = fp418 - fp417;
target[((hsi*90+27)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp30 * fp23;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp11;
LIBINT2_REALTYPE fp414;
fp414 = 1.0000000000000000e+00 * fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp31 * fp23;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp11;
LIBINT2_REALTYPE fp415;
fp415 = inteval->two_alpha0_bra[vi] * fp206;
LIBINT2_REALTYPE fp413;
fp413 = fp415 - fp414;
target[((hsi*90+28)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp30 * fp24;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp10;
LIBINT2_REALTYPE fp411;
fp411 = 1.0000000000000000e+00 * fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp31 * fp24;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp10;
LIBINT2_REALTYPE fp412;
fp412 = inteval->two_alpha0_bra[vi] * fp202;
LIBINT2_REALTYPE fp410;
fp410 = fp412 - fp411;
target[((hsi*90+29)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp38 * fp29;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp9;
LIBINT2_REALTYPE fp408;
fp408 = 1.0000000000000000e+00 * fp196;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp39 * fp29;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp9;
LIBINT2_REALTYPE fp409;
fp409 = inteval->two_alpha0_bra[vi] * fp198;
LIBINT2_REALTYPE fp407;
fp407 = fp409 - fp408;
target[((hsi*90+30)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp36 * fp28;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp9;
LIBINT2_REALTYPE fp405;
fp405 = 1.0000000000000000e+00 * fp192;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp37 * fp28;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp9;
LIBINT2_REALTYPE fp406;
fp406 = inteval->two_alpha0_bra[vi] * fp194;
LIBINT2_REALTYPE fp404;
fp404 = fp406 - fp405;
target[((hsi*90+31)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp36 * fp29;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp8;
LIBINT2_REALTYPE fp402;
fp402 = 1.0000000000000000e+00 * fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp37 * fp29;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp8;
LIBINT2_REALTYPE fp403;
fp403 = inteval->two_alpha0_bra[vi] * fp190;
LIBINT2_REALTYPE fp401;
fp401 = fp403 - fp402;
target[((hsi*90+32)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp34 * fp27;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp9;
LIBINT2_REALTYPE fp399;
fp399 = 1.0000000000000000e+00 * fp184;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp35 * fp27;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp9;
LIBINT2_REALTYPE fp400;
fp400 = inteval->two_alpha0_bra[vi] * fp186;
LIBINT2_REALTYPE fp398;
fp398 = fp400 - fp399;
target[((hsi*90+33)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = fp48 * fp29;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp14;
LIBINT2_REALTYPE fp498;
fp498 = 2.0000000000000000e+00 * fp316;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*20+19)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp49 * fp29;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp14;
LIBINT2_REALTYPE fp499;
fp499 = inteval->two_alpha0_bra[vi] * fp318;
LIBINT2_REALTYPE fp497;
fp497 = fp499 - fp498;
target[((hsi*90+0)*1+lsi)*1] = fp497;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp34 * fp29;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp7;
LIBINT2_REALTYPE fp393;
fp393 = 1.0000000000000000e+00 * fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp35 * fp29;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp7;
LIBINT2_REALTYPE fp394;
fp394 = inteval->two_alpha0_bra[vi] * fp178;
LIBINT2_REALTYPE fp392;
fp392 = fp394 - fp393;
target[((hsi*90+35)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp32 * fp26;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp9;
LIBINT2_REALTYPE fp390;
fp390 = 1.0000000000000000e+00 * fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp33 * fp26;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp9;
LIBINT2_REALTYPE fp391;
fp391 = inteval->two_alpha0_bra[vi] * fp174;
LIBINT2_REALTYPE fp389;
fp389 = fp391 - fp390;
target[((hsi*90+36)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp169;
fp169 = fp32 * fp27;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp8;
LIBINT2_REALTYPE fp387;
fp387 = 1.0000000000000000e+00 * fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp33 * fp27;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp8;
LIBINT2_REALTYPE fp388;
fp388 = inteval->two_alpha0_bra[vi] * fp170;
LIBINT2_REALTYPE fp386;
fp386 = fp388 - fp387;
target[((hsi*90+37)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp165;
fp165 = fp32 * fp28;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp7;
LIBINT2_REALTYPE fp384;
fp384 = 1.0000000000000000e+00 * fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp33 * fp28;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp7;
LIBINT2_REALTYPE fp385;
fp385 = inteval->two_alpha0_bra[vi] * fp166;
LIBINT2_REALTYPE fp383;
fp383 = fp385 - fp384;
target[((hsi*90+38)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp32 * fp29;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp6;
LIBINT2_REALTYPE fp381;
fp381 = 1.0000000000000000e+00 * fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp33 * fp29;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp6;
LIBINT2_REALTYPE fp382;
fp382 = inteval->two_alpha0_bra[vi] * fp162;
LIBINT2_REALTYPE fp380;
fp380 = fp382 - fp381;
target[((hsi*90+39)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp30 * fp25;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp9;
LIBINT2_REALTYPE fp378;
fp378 = 1.0000000000000000e+00 * fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp31 * fp25;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp9;
LIBINT2_REALTYPE fp379;
fp379 = inteval->two_alpha0_bra[vi] * fp158;
LIBINT2_REALTYPE fp377;
fp377 = fp379 - fp378;
target[((hsi*90+40)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp153;
fp153 = fp30 * fp26;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp8;
LIBINT2_REALTYPE fp375;
fp375 = 1.0000000000000000e+00 * fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp31 * fp26;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp8;
LIBINT2_REALTYPE fp376;
fp376 = inteval->two_alpha0_bra[vi] * fp154;
LIBINT2_REALTYPE fp374;
fp374 = fp376 - fp375;
target[((hsi*90+41)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp149;
fp149 = fp30 * fp27;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp7;
LIBINT2_REALTYPE fp372;
fp372 = 1.0000000000000000e+00 * fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp31 * fp27;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp7;
LIBINT2_REALTYPE fp373;
fp373 = inteval->two_alpha0_bra[vi] * fp150;
LIBINT2_REALTYPE fp371;
fp371 = fp373 - fp372;
target[((hsi*90+42)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp145;
fp145 = fp30 * fp28;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp6;
LIBINT2_REALTYPE fp369;
fp369 = 1.0000000000000000e+00 * fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp31 * fp28;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp6;
LIBINT2_REALTYPE fp370;
fp370 = inteval->two_alpha0_bra[vi] * fp146;
LIBINT2_REALTYPE fp368;
fp368 = fp370 - fp369;
target[((hsi*90+43)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp30 * fp29;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp5;
LIBINT2_REALTYPE fp366;
fp366 = 1.0000000000000000e+00 * fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp31 * fp29;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp5;
LIBINT2_REALTYPE fp367;
fp367 = inteval->two_alpha0_bra[vi] * fp142;
LIBINT2_REALTYPE fp365;
fp365 = fp367 - fp366;
target[((hsi*90+44)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp181;
fp181 = fp34 * fp28;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp8;
LIBINT2_REALTYPE fp396;
fp396 = 1.0000000000000000e+00 * fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp35 * fp28;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp8;
LIBINT2_REALTYPE fp397;
fp397 = inteval->two_alpha0_bra[vi] * fp182;
LIBINT2_REALTYPE fp395;
fp395 = fp397 - fp396;
target[((hsi*90+34)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp46 * fp28;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp14;
LIBINT2_REALTYPE fp495;
fp495 = 2.0000000000000000e+00 * fp312;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = fp47 * fp28;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp14;
LIBINT2_REALTYPE fp496;
fp496 = inteval->two_alpha0_bra[vi] * fp314;
LIBINT2_REALTYPE fp494;
fp494 = fp496 - fp495;
target[((hsi*90+1)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp309;
fp309 = fp46 * fp29;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp13;
LIBINT2_REALTYPE fp492;
fp492 = 2.0000000000000000e+00 * fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp47 * fp29;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp13;
LIBINT2_REALTYPE fp493;
fp493 = inteval->two_alpha0_bra[vi] * fp310;
LIBINT2_REALTYPE fp491;
fp491 = fp493 - fp492;
target[((hsi*90+2)*1+lsi)*1] = fp491;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp44 * fp27;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp14;
LIBINT2_REALTYPE fp489;
fp489 = 2.0000000000000000e+00 * fp304;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = fp45 * fp27;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp14;
LIBINT2_REALTYPE fp490;
fp490 = inteval->two_alpha0_bra[vi] * fp306;
LIBINT2_REALTYPE fp488;
fp488 = fp490 - fp489;
target[((hsi*90+3)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp301;
fp301 = fp44 * fp28;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp13;
LIBINT2_REALTYPE fp486;
fp486 = 2.0000000000000000e+00 * fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp45 * fp28;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp13;
LIBINT2_REALTYPE fp487;
fp487 = inteval->two_alpha0_bra[vi] * fp302;
LIBINT2_REALTYPE fp485;
fp485 = fp487 - fp486;
target[((hsi*90+4)*1+lsi)*1] = fp485;
LIBINT2_REALTYPE fp297;
fp297 = fp44 * fp29;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp12;
LIBINT2_REALTYPE fp483;
fp483 = 2.0000000000000000e+00 * fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp45 * fp29;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp12;
LIBINT2_REALTYPE fp484;
fp484 = inteval->two_alpha0_bra[vi] * fp298;
LIBINT2_REALTYPE fp482;
fp482 = fp484 - fp483;
target[((hsi*90+5)*1+lsi)*1] = fp482;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = fp42 * fp26;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp14;
LIBINT2_REALTYPE fp480;
fp480 = 2.0000000000000000e+00 * fp292;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp43 * fp26;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp14;
LIBINT2_REALTYPE fp481;
fp481 = inteval->two_alpha0_bra[vi] * fp294;
LIBINT2_REALTYPE fp479;
fp479 = fp481 - fp480;
target[((hsi*90+6)*1+lsi)*1] = fp479;
LIBINT2_REALTYPE fp289;
fp289 = fp42 * fp27;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp13;
LIBINT2_REALTYPE fp477;
fp477 = 2.0000000000000000e+00 * fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp43 * fp27;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp13;
LIBINT2_REALTYPE fp478;
fp478 = inteval->two_alpha0_bra[vi] * fp290;
LIBINT2_REALTYPE fp476;
fp476 = fp478 - fp477;
target[((hsi*90+7)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp285;
fp285 = fp42 * fp28;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp12;
LIBINT2_REALTYPE fp474;
fp474 = 2.0000000000000000e+00 * fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp43 * fp28;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp12;
LIBINT2_REALTYPE fp475;
fp475 = inteval->two_alpha0_bra[vi] * fp286;
LIBINT2_REALTYPE fp473;
fp473 = fp475 - fp474;
target[((hsi*90+8)*1+lsi)*1] = fp473;
LIBINT2_REALTYPE fp281;
fp281 = fp42 * fp29;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp11;
LIBINT2_REALTYPE fp471;
fp471 = 2.0000000000000000e+00 * fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp43 * fp29;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp11;
LIBINT2_REALTYPE fp472;
fp472 = inteval->two_alpha0_bra[vi] * fp282;
LIBINT2_REALTYPE fp470;
fp470 = fp472 - fp471;
target[((hsi*90+9)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp40 * fp25;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp14;
LIBINT2_REALTYPE fp468;
fp468 = 2.0000000000000000e+00 * fp276;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = fp41 * fp25;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp14;
LIBINT2_REALTYPE fp469;
fp469 = inteval->two_alpha0_bra[vi] * fp278;
LIBINT2_REALTYPE fp467;
fp467 = fp469 - fp468;
target[((hsi*90+10)*1+lsi)*1] = fp467;
LIBINT2_REALTYPE fp225;
fp225 = fp32 * fp23;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp12;
LIBINT2_REALTYPE fp429;
fp429 = 1.0000000000000000e+00 * fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp33 * fp23;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp12;
LIBINT2_REALTYPE fp430;
fp430 = inteval->two_alpha0_bra[vi] * fp226;
LIBINT2_REALTYPE fp428;
fp428 = fp430 - fp429;
target[((hsi*90+23)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp269;
fp269 = fp40 * fp27;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp12;
LIBINT2_REALTYPE fp462;
fp462 = 2.0000000000000000e+00 * fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp41 * fp27;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp12;
LIBINT2_REALTYPE fp463;
fp463 = inteval->two_alpha0_bra[vi] * fp270;
LIBINT2_REALTYPE fp461;
fp461 = fp463 - fp462;
target[((hsi*90+12)*1+lsi)*1] = fp461;
LIBINT2_REALTYPE fp265;
fp265 = fp40 * fp28;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp11;
LIBINT2_REALTYPE fp459;
fp459 = 2.0000000000000000e+00 * fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp41 * fp28;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp11;
LIBINT2_REALTYPE fp460;
fp460 = inteval->two_alpha0_bra[vi] * fp266;
LIBINT2_REALTYPE fp458;
fp458 = fp460 - fp459;
target[((hsi*90+13)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp261;
fp261 = fp40 * fp29;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp10;
LIBINT2_REALTYPE fp456;
fp456 = 2.0000000000000000e+00 * fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp41 * fp29;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp10;
LIBINT2_REALTYPE fp457;
fp457 = inteval->two_alpha0_bra[vi] * fp262;
LIBINT2_REALTYPE fp455;
fp455 = fp457 - fp456;
target[((hsi*90+14)*1+lsi)*1] = fp455;
LIBINT2_REALTYPE fp257;
fp257 = fp38 * fp24;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp14;
LIBINT2_REALTYPE fp453;
fp453 = 1.0000000000000000e+00 * fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp39 * fp24;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp14;
LIBINT2_REALTYPE fp454;
fp454 = inteval->two_alpha0_bra[vi] * fp258;
LIBINT2_REALTYPE fp452;
fp452 = fp454 - fp453;
target[((hsi*90+15)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp253;
fp253 = fp36 * fp23;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp14;
LIBINT2_REALTYPE fp450;
fp450 = 1.0000000000000000e+00 * fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp37 * fp23;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp14;
LIBINT2_REALTYPE fp451;
fp451 = inteval->two_alpha0_bra[vi] * fp254;
LIBINT2_REALTYPE fp449;
fp449 = fp451 - fp450;
target[((hsi*90+16)*1+lsi)*1] = fp449;
LIBINT2_REALTYPE fp249;
fp249 = fp36 * fp24;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp13;
LIBINT2_REALTYPE fp447;
fp447 = 1.0000000000000000e+00 * fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp37 * fp24;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp13;
LIBINT2_REALTYPE fp448;
fp448 = inteval->two_alpha0_bra[vi] * fp250;
LIBINT2_REALTYPE fp446;
fp446 = fp448 - fp447;
target[((hsi*90+17)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp245;
fp245 = fp34 * fp22;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp14;
LIBINT2_REALTYPE fp444;
fp444 = 1.0000000000000000e+00 * fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp35 * fp22;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp14;
LIBINT2_REALTYPE fp445;
fp445 = inteval->two_alpha0_bra[vi] * fp246;
LIBINT2_REALTYPE fp443;
fp443 = fp445 - fp444;
target[((hsi*90+18)*1+lsi)*1] = fp443;
LIBINT2_REALTYPE fp241;
fp241 = fp34 * fp23;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp13;
LIBINT2_REALTYPE fp441;
fp441 = 1.0000000000000000e+00 * fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp35 * fp23;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp13;
LIBINT2_REALTYPE fp442;
fp442 = inteval->two_alpha0_bra[vi] * fp242;
LIBINT2_REALTYPE fp440;
fp440 = fp442 - fp441;
target[((hsi*90+19)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp237;
fp237 = fp34 * fp24;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp12;
LIBINT2_REALTYPE fp438;
fp438 = 1.0000000000000000e+00 * fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp35 * fp24;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp12;
LIBINT2_REALTYPE fp439;
fp439 = inteval->two_alpha0_bra[vi] * fp238;
LIBINT2_REALTYPE fp437;
fp437 = fp439 - fp438;
target[((hsi*90+20)*1+lsi)*1] = fp437;
LIBINT2_REALTYPE fp233;
fp233 = fp32 * fp21;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp14;
LIBINT2_REALTYPE fp435;
fp435 = 1.0000000000000000e+00 * fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp33 * fp21;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp14;
LIBINT2_REALTYPE fp436;
fp436 = inteval->two_alpha0_bra[vi] * fp234;
LIBINT2_REALTYPE fp434;
fp434 = fp436 - fp435;
target[((hsi*90+21)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp229;
fp229 = fp32 * fp22;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp13;
LIBINT2_REALTYPE fp432;
fp432 = 1.0000000000000000e+00 * fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp33 * fp22;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp13;
LIBINT2_REALTYPE fp433;
fp433 = inteval->two_alpha0_bra[vi] * fp230;
LIBINT2_REALTYPE fp431;
fp431 = fp433 - fp432;
target[((hsi*90+22)*1+lsi)*1] = fp431;
LIBINT2_REALTYPE fp273;
fp273 = fp40 * fp26;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp13;
LIBINT2_REALTYPE fp465;
fp465 = 2.0000000000000000e+00 * fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp41 * fp26;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp13;
LIBINT2_REALTYPE fp466;
fp466 = inteval->two_alpha0_bra[vi] * fp274;
LIBINT2_REALTYPE fp464;
fp464 = fp466 - fp465;
target[((hsi*90+11)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp91;
fp91 = fp42 * fp24;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp6;
LIBINT2_REALTYPE fp340;
fp340 = inteval->two_alpha0_bra[vi] * fp90;
target[((hsi*90+69)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp89;
fp89 = fp40 * fp20;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp9;
LIBINT2_REALTYPE fp339;
fp339 = inteval->two_alpha0_bra[vi] * fp88;
target[((hsi*90+70)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp87;
fp87 = fp40 * fp21;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp8;
LIBINT2_REALTYPE fp338;
fp338 = inteval->two_alpha0_bra[vi] * fp86;
target[((hsi*90+71)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp85;
fp85 = fp40 * fp22;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp7;
LIBINT2_REALTYPE fp337;
fp337 = inteval->two_alpha0_bra[vi] * fp84;
target[((hsi*90+72)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp83;
fp83 = fp40 * fp23;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp6;
LIBINT2_REALTYPE fp336;
fp336 = inteval->two_alpha0_bra[vi] * fp82;
target[((hsi*90+73)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp81;
fp81 = fp40 * fp24;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp5;
LIBINT2_REALTYPE fp335;
fp335 = inteval->two_alpha0_bra[vi] * fp80;
target[((hsi*90+74)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp48 * fp29;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp4;
LIBINT2_REALTYPE fp334;
fp334 = inteval->two_alpha0_bra[vi] * fp78;
target[((hsi*90+75)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp77;
fp77 = fp46 * fp28;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp4;
LIBINT2_REALTYPE fp333;
fp333 = inteval->two_alpha0_bra[vi] * fp76;
target[((hsi*90+76)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp46 * fp29;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp3;
LIBINT2_REALTYPE fp332;
fp332 = inteval->two_alpha0_bra[vi] * fp74;
target[((hsi*90+77)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp73;
fp73 = fp44 * fp27;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp4;
LIBINT2_REALTYPE fp331;
fp331 = inteval->two_alpha0_bra[vi] * fp72;
target[((hsi*90+78)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp48 * fp19;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp14;
LIBINT2_REALTYPE fp364;
fp364 = inteval->two_alpha0_bra[vi] * fp138;
target[((hsi*90+45)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp44 * fp29;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp2;
LIBINT2_REALTYPE fp329;
fp329 = inteval->two_alpha0_bra[vi] * fp68;
target[((hsi*90+80)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp67;
fp67 = fp42 * fp26;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp4;
LIBINT2_REALTYPE fp328;
fp328 = inteval->two_alpha0_bra[vi] * fp66;
target[((hsi*90+81)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp65;
fp65 = fp42 * fp27;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp3;
LIBINT2_REALTYPE fp327;
fp327 = inteval->two_alpha0_bra[vi] * fp64;
target[((hsi*90+82)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp63;
fp63 = fp42 * fp28;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp2;
LIBINT2_REALTYPE fp326;
fp326 = inteval->two_alpha0_bra[vi] * fp62;
target[((hsi*90+83)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp42 * fp29;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp1;
LIBINT2_REALTYPE fp325;
fp325 = inteval->two_alpha0_bra[vi] * fp60;
target[((hsi*90+84)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp59;
fp59 = fp40 * fp25;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp4;
LIBINT2_REALTYPE fp324;
fp324 = inteval->two_alpha0_bra[vi] * fp58;
target[((hsi*90+85)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp57;
fp57 = fp40 * fp26;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp3;
LIBINT2_REALTYPE fp323;
fp323 = inteval->two_alpha0_bra[vi] * fp56;
target[((hsi*90+86)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp55;
fp55 = fp40 * fp27;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp2;
LIBINT2_REALTYPE fp322;
fp322 = inteval->two_alpha0_bra[vi] * fp54;
target[((hsi*90+87)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp53;
fp53 = fp40 * fp28;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp1;
LIBINT2_REALTYPE fp321;
fp321 = inteval->two_alpha0_bra[vi] * fp52;
target[((hsi*90+88)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp40 * fp29;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp0;
LIBINT2_REALTYPE fp320;
fp320 = inteval->two_alpha0_bra[vi] * fp50;
target[((hsi*90+89)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp71;
fp71 = fp44 * fp28;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp3;
LIBINT2_REALTYPE fp330;
fp330 = inteval->two_alpha0_bra[vi] * fp70;
target[((hsi*90+79)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp46 * fp18;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp14;
LIBINT2_REALTYPE fp363;
fp363 = inteval->two_alpha0_bra[vi] * fp136;
target[((hsi*90+46)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp135;
fp135 = fp46 * fp19;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp13;
LIBINT2_REALTYPE fp362;
fp362 = inteval->two_alpha0_bra[vi] * fp134;
target[((hsi*90+47)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp44 * fp17;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp14;
LIBINT2_REALTYPE fp361;
fp361 = inteval->two_alpha0_bra[vi] * fp132;
target[((hsi*90+48)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp131;
fp131 = fp44 * fp18;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp13;
LIBINT2_REALTYPE fp360;
fp360 = inteval->two_alpha0_bra[vi] * fp130;
target[((hsi*90+49)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp129;
fp129 = fp44 * fp19;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp12;
LIBINT2_REALTYPE fp359;
fp359 = inteval->two_alpha0_bra[vi] * fp128;
target[((hsi*90+50)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp42 * fp16;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp14;
LIBINT2_REALTYPE fp358;
fp358 = inteval->two_alpha0_bra[vi] * fp126;
target[((hsi*90+51)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp125;
fp125 = fp42 * fp17;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp13;
LIBINT2_REALTYPE fp357;
fp357 = inteval->two_alpha0_bra[vi] * fp124;
target[((hsi*90+52)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp123;
fp123 = fp42 * fp18;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp12;
LIBINT2_REALTYPE fp356;
fp356 = inteval->two_alpha0_bra[vi] * fp122;
target[((hsi*90+53)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp121;
fp121 = fp42 * fp19;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp11;
LIBINT2_REALTYPE fp355;
fp355 = inteval->two_alpha0_bra[vi] * fp120;
target[((hsi*90+54)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp40 * fp15;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp14;
LIBINT2_REALTYPE fp354;
fp354 = inteval->two_alpha0_bra[vi] * fp118;
target[((hsi*90+55)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp93;
fp93 = fp42 * fp23;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp7;
LIBINT2_REALTYPE fp341;
fp341 = inteval->two_alpha0_bra[vi] * fp92;
target[((hsi*90+68)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp115;
fp115 = fp40 * fp17;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp12;
LIBINT2_REALTYPE fp352;
fp352 = inteval->two_alpha0_bra[vi] * fp114;
target[((hsi*90+57)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp113;
fp113 = fp40 * fp18;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp11;
LIBINT2_REALTYPE fp351;
fp351 = inteval->two_alpha0_bra[vi] * fp112;
target[((hsi*90+58)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp111;
fp111 = fp40 * fp19;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp10;
LIBINT2_REALTYPE fp350;
fp350 = inteval->two_alpha0_bra[vi] * fp110;
target[((hsi*90+59)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp109;
fp109 = fp48 * fp24;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp9;
LIBINT2_REALTYPE fp349;
fp349 = inteval->two_alpha0_bra[vi] * fp108;
target[((hsi*90+60)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp107;
fp107 = fp46 * fp23;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp9;
LIBINT2_REALTYPE fp348;
fp348 = inteval->two_alpha0_bra[vi] * fp106;
target[((hsi*90+61)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp105;
fp105 = fp46 * fp24;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp8;
LIBINT2_REALTYPE fp347;
fp347 = inteval->two_alpha0_bra[vi] * fp104;
target[((hsi*90+62)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp103;
fp103 = fp44 * fp22;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp9;
LIBINT2_REALTYPE fp346;
fp346 = inteval->two_alpha0_bra[vi] * fp102;
target[((hsi*90+63)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp101;
fp101 = fp44 * fp23;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp8;
LIBINT2_REALTYPE fp345;
fp345 = inteval->two_alpha0_bra[vi] * fp100;
target[((hsi*90+64)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp99;
fp99 = fp44 * fp24;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp7;
LIBINT2_REALTYPE fp344;
fp344 = inteval->two_alpha0_bra[vi] * fp98;
target[((hsi*90+65)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp97;
fp97 = fp42 * fp21;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp9;
LIBINT2_REALTYPE fp343;
fp343 = inteval->two_alpha0_bra[vi] * fp96;
target[((hsi*90+66)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp95;
fp95 = fp42 * fp22;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp8;
LIBINT2_REALTYPE fp342;
fp342 = inteval->two_alpha0_bra[vi] * fp94;
target[((hsi*90+67)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp117;
fp117 = fp40 * fp16;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp13;
LIBINT2_REALTYPE fp353;
fp353 = inteval->two_alpha0_bra[vi] * fp116;
target[((hsi*90+56)*1+lsi)*1] = fp353;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 500 */
}

#ifdef __cplusplus
};
#endif
