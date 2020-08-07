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
void CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp31 * fp17;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp11;
LIBINT2_REALTYPE fp260;
fp260 = 1.0000000000000000e+00 * fp255;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp35 * fp17;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp11;
LIBINT2_REALTYPE fp261;
fp261 = inteval->two_alpha0_bra[vi] * fp257;
LIBINT2_REALTYPE fp259;
fp259 = fp261 - fp260;
LIBINT2_REALTYPE fp584;
fp584 = inteval->two_alpha0_ket[vi] * fp259;
target[((hsi*63+30)*1+lsi)*1] = fp584;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp32 * fp29;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp4;
LIBINT2_REALTYPE fp267;
fp267 = 2.0000000000000000e+00 * fp262;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp36 * fp29;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp4;
LIBINT2_REALTYPE fp268;
fp268 = inteval->two_alpha0_bra[vi] * fp264;
LIBINT2_REALTYPE fp266;
fp266 = fp268 - fp267;
LIBINT2_REALTYPE fp585;
fp585 = inteval->two_alpha0_ket[vi] * fp266;
target[((hsi*63+29)*1+lsi)*1] = fp585;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp32 * fp27;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp5;
LIBINT2_REALTYPE fp278;
fp278 = 1.0000000000000000e+00 * fp269;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp32 * fp28;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp5;
LIBINT2_REALTYPE fp279;
fp279 = inteval->two_alpha0_ket[vi] * fp271;
LIBINT2_REALTYPE fp277;
fp277 = fp279 - fp278;
LIBINT2_REALTYPE fp587;
fp587 = 2.0000000000000000e+00 * fp277;
LIBINT2_REALTYPE fp274;
fp274 = fp36 * fp27;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp5;
LIBINT2_REALTYPE fp281;
fp281 = 1.0000000000000000e+00 * fp273;
LIBINT2_REALTYPE fp276;
fp276 = fp36 * fp28;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp5;
LIBINT2_REALTYPE fp282;
fp282 = inteval->two_alpha0_ket[vi] * fp275;
LIBINT2_REALTYPE fp280;
fp280 = fp282 - fp281;
LIBINT2_REALTYPE fp588;
fp588 = inteval->two_alpha0_bra[vi] * fp280;
LIBINT2_REALTYPE fp586;
fp586 = fp588 - fp587;
target[((hsi*63+28)*1+lsi)*1] = fp586;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = fp33 * fp29;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp5;
LIBINT2_REALTYPE fp288;
fp288 = 2.0000000000000000e+00 * fp283;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp38 * fp29;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp5;
LIBINT2_REALTYPE fp289;
fp289 = inteval->two_alpha0_bra[vi] * fp285;
LIBINT2_REALTYPE fp287;
fp287 = fp289 - fp288;
LIBINT2_REALTYPE fp589;
fp589 = inteval->two_alpha0_ket[vi] * fp287;
target[((hsi*63+27)*1+lsi)*1] = fp589;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp32 * fp26;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp6;
LIBINT2_REALTYPE fp295;
fp295 = 2.0000000000000000e+00 * fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp36 * fp26;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp6;
LIBINT2_REALTYPE fp296;
fp296 = inteval->two_alpha0_bra[vi] * fp292;
LIBINT2_REALTYPE fp294;
fp294 = fp296 - fp295;
LIBINT2_REALTYPE fp590;
fp590 = inteval->two_alpha0_ket[vi] * fp294;
target[((hsi*63+26)*1+lsi)*1] = fp590;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = fp32 * fp24;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp7;
LIBINT2_REALTYPE fp306;
fp306 = 1.0000000000000000e+00 * fp297;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp32 * fp25;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp7;
LIBINT2_REALTYPE fp307;
fp307 = inteval->two_alpha0_ket[vi] * fp299;
LIBINT2_REALTYPE fp305;
fp305 = fp307 - fp306;
LIBINT2_REALTYPE fp592;
fp592 = 2.0000000000000000e+00 * fp305;
LIBINT2_REALTYPE fp302;
fp302 = fp36 * fp24;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp7;
LIBINT2_REALTYPE fp309;
fp309 = 1.0000000000000000e+00 * fp301;
LIBINT2_REALTYPE fp304;
fp304 = fp36 * fp25;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp7;
LIBINT2_REALTYPE fp310;
fp310 = inteval->two_alpha0_ket[vi] * fp303;
LIBINT2_REALTYPE fp308;
fp308 = fp310 - fp309;
LIBINT2_REALTYPE fp593;
fp593 = inteval->two_alpha0_bra[vi] * fp308;
LIBINT2_REALTYPE fp591;
fp591 = fp593 - fp592;
target[((hsi*63+25)*1+lsi)*1] = fp591;
LIBINT2_REALTYPE fp312;
fp312 = fp33 * fp26;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp7;
LIBINT2_REALTYPE fp316;
fp316 = 2.0000000000000000e+00 * fp311;
LIBINT2_REALTYPE fp314;
fp314 = fp38 * fp26;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp7;
LIBINT2_REALTYPE fp317;
fp317 = inteval->two_alpha0_bra[vi] * fp313;
LIBINT2_REALTYPE fp315;
fp315 = fp317 - fp316;
LIBINT2_REALTYPE fp594;
fp594 = inteval->two_alpha0_ket[vi] * fp315;
target[((hsi*63+24)*1+lsi)*1] = fp594;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp32 * fp23;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp8;
LIBINT2_REALTYPE fp323;
fp323 = 2.0000000000000000e+00 * fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp36 * fp23;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp8;
LIBINT2_REALTYPE fp324;
fp324 = inteval->two_alpha0_bra[vi] * fp320;
LIBINT2_REALTYPE fp322;
fp322 = fp324 - fp323;
LIBINT2_REALTYPE fp595;
fp595 = inteval->two_alpha0_ket[vi] * fp322;
target[((hsi*63+23)*1+lsi)*1] = fp595;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp32 * fp21;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp9;
LIBINT2_REALTYPE fp334;
fp334 = 1.0000000000000000e+00 * fp325;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = fp32 * fp22;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp9;
LIBINT2_REALTYPE fp335;
fp335 = inteval->two_alpha0_ket[vi] * fp327;
LIBINT2_REALTYPE fp333;
fp333 = fp335 - fp334;
LIBINT2_REALTYPE fp597;
fp597 = 2.0000000000000000e+00 * fp333;
LIBINT2_REALTYPE fp330;
fp330 = fp36 * fp21;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp9;
LIBINT2_REALTYPE fp337;
fp337 = 1.0000000000000000e+00 * fp329;
LIBINT2_REALTYPE fp332;
fp332 = fp36 * fp22;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp9;
LIBINT2_REALTYPE fp338;
fp338 = inteval->two_alpha0_ket[vi] * fp331;
LIBINT2_REALTYPE fp336;
fp336 = fp338 - fp337;
LIBINT2_REALTYPE fp598;
fp598 = inteval->two_alpha0_bra[vi] * fp336;
LIBINT2_REALTYPE fp596;
fp596 = fp598 - fp597;
target[((hsi*63+22)*1+lsi)*1] = fp596;
LIBINT2_REALTYPE fp340;
fp340 = fp33 * fp23;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp9;
LIBINT2_REALTYPE fp344;
fp344 = 2.0000000000000000e+00 * fp339;
LIBINT2_REALTYPE fp342;
fp342 = fp38 * fp23;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp9;
LIBINT2_REALTYPE fp345;
fp345 = inteval->two_alpha0_bra[vi] * fp341;
LIBINT2_REALTYPE fp343;
fp343 = fp345 - fp344;
LIBINT2_REALTYPE fp599;
fp599 = inteval->two_alpha0_ket[vi] * fp343;
target[((hsi*63+21)*1+lsi)*1] = fp599;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp347;
fp347 = fp32 * fp20;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp10;
LIBINT2_REALTYPE fp351;
fp351 = 2.0000000000000000e+00 * fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp36 * fp20;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp10;
LIBINT2_REALTYPE fp352;
fp352 = inteval->two_alpha0_bra[vi] * fp348;
LIBINT2_REALTYPE fp350;
fp350 = fp352 - fp351;
LIBINT2_REALTYPE fp600;
fp600 = inteval->two_alpha0_ket[vi] * fp350;
target[((hsi*63+20)*1+lsi)*1] = fp600;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp32 * fp18;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp11;
LIBINT2_REALTYPE fp362;
fp362 = 1.0000000000000000e+00 * fp353;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp32 * fp19;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp11;
LIBINT2_REALTYPE fp363;
fp363 = inteval->two_alpha0_ket[vi] * fp355;
LIBINT2_REALTYPE fp361;
fp361 = fp363 - fp362;
LIBINT2_REALTYPE fp602;
fp602 = 2.0000000000000000e+00 * fp361;
LIBINT2_REALTYPE fp358;
fp358 = fp36 * fp18;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp11;
LIBINT2_REALTYPE fp365;
fp365 = 1.0000000000000000e+00 * fp357;
LIBINT2_REALTYPE fp360;
fp360 = fp36 * fp19;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp11;
LIBINT2_REALTYPE fp366;
fp366 = inteval->two_alpha0_ket[vi] * fp359;
LIBINT2_REALTYPE fp364;
fp364 = fp366 - fp365;
LIBINT2_REALTYPE fp603;
fp603 = inteval->two_alpha0_bra[vi] * fp364;
LIBINT2_REALTYPE fp601;
fp601 = fp603 - fp602;
target[((hsi*63+19)*1+lsi)*1] = fp601;
LIBINT2_REALTYPE fp368;
fp368 = fp33 * fp20;
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp11;
LIBINT2_REALTYPE fp372;
fp372 = 2.0000000000000000e+00 * fp367;
LIBINT2_REALTYPE fp370;
fp370 = fp38 * fp20;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp11;
LIBINT2_REALTYPE fp373;
fp373 = inteval->two_alpha0_bra[vi] * fp369;
LIBINT2_REALTYPE fp371;
fp371 = fp373 - fp372;
LIBINT2_REALTYPE fp604;
fp604 = inteval->two_alpha0_ket[vi] * fp371;
target[((hsi*63+18)*1+lsi)*1] = fp604;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = fp34 * fp29;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp6;
LIBINT2_REALTYPE fp379;
fp379 = 3.0000000000000000e+00 * fp374;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = fp40 * fp29;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp6;
LIBINT2_REALTYPE fp380;
fp380 = inteval->two_alpha0_bra[vi] * fp376;
LIBINT2_REALTYPE fp378;
fp378 = fp380 - fp379;
LIBINT2_REALTYPE fp605;
fp605 = inteval->two_alpha0_ket[vi] * fp378;
target[((hsi*63+17)*1+lsi)*1] = fp605;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp536;
fp536 = fp42 * fp29;
LIBINT2_REALTYPE fp535;
fp535 = fp536 * fp11;
LIBINT2_REALTYPE fp540;
fp540 = 5.0000000000000000e+00 * fp535;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp538;
fp538 = fp43 * fp29;
LIBINT2_REALTYPE fp537;
fp537 = fp538 * fp11;
LIBINT2_REALTYPE fp541;
fp541 = inteval->two_alpha0_bra[vi] * fp537;
LIBINT2_REALTYPE fp539;
fp539 = fp541 - fp540;
LIBINT2_REALTYPE fp634;
fp634 = inteval->two_alpha0_ket[vi] * fp539;
target[((hsi*63+0)*1+lsi)*1] = fp634;
LIBINT2_REALTYPE fp396;
fp396 = fp35 * fp29;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * fp7;
LIBINT2_REALTYPE fp400;
fp400 = 3.0000000000000000e+00 * fp395;
LIBINT2_REALTYPE fp398;
fp398 = fp42 * fp29;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * fp7;
LIBINT2_REALTYPE fp401;
fp401 = inteval->two_alpha0_bra[vi] * fp397;
LIBINT2_REALTYPE fp399;
fp399 = fp401 - fp400;
LIBINT2_REALTYPE fp609;
fp609 = inteval->two_alpha0_ket[vi] * fp399;
target[((hsi*63+15)*1+lsi)*1] = fp609;
LIBINT2_REALTYPE fp403;
fp403 = fp34 * fp26;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp8;
LIBINT2_REALTYPE fp407;
fp407 = 3.0000000000000000e+00 * fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp40 * fp26;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp8;
LIBINT2_REALTYPE fp408;
fp408 = inteval->two_alpha0_bra[vi] * fp404;
LIBINT2_REALTYPE fp406;
fp406 = fp408 - fp407;
LIBINT2_REALTYPE fp610;
fp610 = inteval->two_alpha0_ket[vi] * fp406;
target[((hsi*63+14)*1+lsi)*1] = fp610;
LIBINT2_REALTYPE fp410;
fp410 = fp34 * fp24;
LIBINT2_REALTYPE fp409;
fp409 = fp410 * fp9;
LIBINT2_REALTYPE fp418;
fp418 = 1.0000000000000000e+00 * fp409;
LIBINT2_REALTYPE fp412;
fp412 = fp34 * fp25;
LIBINT2_REALTYPE fp411;
fp411 = fp412 * fp9;
LIBINT2_REALTYPE fp419;
fp419 = inteval->two_alpha0_ket[vi] * fp411;
LIBINT2_REALTYPE fp417;
fp417 = fp419 - fp418;
LIBINT2_REALTYPE fp612;
fp612 = 3.0000000000000000e+00 * fp417;
LIBINT2_REALTYPE fp414;
fp414 = fp40 * fp24;
LIBINT2_REALTYPE fp413;
fp413 = fp414 * fp9;
LIBINT2_REALTYPE fp421;
fp421 = 1.0000000000000000e+00 * fp413;
LIBINT2_REALTYPE fp416;
fp416 = fp40 * fp25;
LIBINT2_REALTYPE fp415;
fp415 = fp416 * fp9;
LIBINT2_REALTYPE fp422;
fp422 = inteval->two_alpha0_ket[vi] * fp415;
LIBINT2_REALTYPE fp420;
fp420 = fp422 - fp421;
LIBINT2_REALTYPE fp613;
fp613 = inteval->two_alpha0_bra[vi] * fp420;
LIBINT2_REALTYPE fp611;
fp611 = fp613 - fp612;
target[((hsi*63+13)*1+lsi)*1] = fp611;
LIBINT2_REALTYPE fp424;
fp424 = fp35 * fp26;
LIBINT2_REALTYPE fp423;
fp423 = fp424 * fp9;
LIBINT2_REALTYPE fp428;
fp428 = 3.0000000000000000e+00 * fp423;
LIBINT2_REALTYPE fp426;
fp426 = fp42 * fp26;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * fp9;
LIBINT2_REALTYPE fp429;
fp429 = inteval->two_alpha0_bra[vi] * fp425;
LIBINT2_REALTYPE fp427;
fp427 = fp429 - fp428;
LIBINT2_REALTYPE fp614;
fp614 = inteval->two_alpha0_ket[vi] * fp427;
target[((hsi*63+12)*1+lsi)*1] = fp614;
LIBINT2_REALTYPE fp431;
fp431 = fp34 * fp23;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp10;
LIBINT2_REALTYPE fp435;
fp435 = 3.0000000000000000e+00 * fp430;
LIBINT2_REALTYPE fp433;
fp433 = fp40 * fp23;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp10;
LIBINT2_REALTYPE fp436;
fp436 = inteval->two_alpha0_bra[vi] * fp432;
LIBINT2_REALTYPE fp434;
fp434 = fp436 - fp435;
LIBINT2_REALTYPE fp615;
fp615 = inteval->two_alpha0_ket[vi] * fp434;
target[((hsi*63+11)*1+lsi)*1] = fp615;
LIBINT2_REALTYPE fp438;
fp438 = fp34 * fp21;
LIBINT2_REALTYPE fp437;
fp437 = fp438 * fp11;
LIBINT2_REALTYPE fp446;
fp446 = 1.0000000000000000e+00 * fp437;
LIBINT2_REALTYPE fp440;
fp440 = fp34 * fp22;
LIBINT2_REALTYPE fp439;
fp439 = fp440 * fp11;
LIBINT2_REALTYPE fp447;
fp447 = inteval->two_alpha0_ket[vi] * fp439;
LIBINT2_REALTYPE fp445;
fp445 = fp447 - fp446;
LIBINT2_REALTYPE fp617;
fp617 = 3.0000000000000000e+00 * fp445;
LIBINT2_REALTYPE fp442;
fp442 = fp40 * fp21;
LIBINT2_REALTYPE fp441;
fp441 = fp442 * fp11;
LIBINT2_REALTYPE fp449;
fp449 = 1.0000000000000000e+00 * fp441;
LIBINT2_REALTYPE fp444;
fp444 = fp40 * fp22;
LIBINT2_REALTYPE fp443;
fp443 = fp444 * fp11;
LIBINT2_REALTYPE fp450;
fp450 = inteval->two_alpha0_ket[vi] * fp443;
LIBINT2_REALTYPE fp448;
fp448 = fp450 - fp449;
LIBINT2_REALTYPE fp618;
fp618 = inteval->two_alpha0_bra[vi] * fp448;
LIBINT2_REALTYPE fp616;
fp616 = fp618 - fp617;
target[((hsi*63+10)*1+lsi)*1] = fp616;
LIBINT2_REALTYPE fp452;
fp452 = fp35 * fp23;
LIBINT2_REALTYPE fp451;
fp451 = fp452 * fp11;
LIBINT2_REALTYPE fp456;
fp456 = 3.0000000000000000e+00 * fp451;
LIBINT2_REALTYPE fp454;
fp454 = fp42 * fp23;
LIBINT2_REALTYPE fp453;
fp453 = fp454 * fp11;
LIBINT2_REALTYPE fp457;
fp457 = inteval->two_alpha0_bra[vi] * fp453;
LIBINT2_REALTYPE fp455;
fp455 = fp457 - fp456;
LIBINT2_REALTYPE fp619;
fp619 = inteval->two_alpha0_ket[vi] * fp455;
target[((hsi*63+9)*1+lsi)*1] = fp619;
LIBINT2_REALTYPE fp459;
fp459 = fp36 * fp29;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp8;
LIBINT2_REALTYPE fp463;
fp463 = 4.0000000000000000e+00 * fp458;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp461;
fp461 = fp37 * fp29;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp8;
LIBINT2_REALTYPE fp464;
fp464 = inteval->two_alpha0_bra[vi] * fp460;
LIBINT2_REALTYPE fp462;
fp462 = fp464 - fp463;
LIBINT2_REALTYPE fp620;
fp620 = inteval->two_alpha0_ket[vi] * fp462;
target[((hsi*63+8)*1+lsi)*1] = fp620;
LIBINT2_REALTYPE fp466;
fp466 = fp36 * fp27;
LIBINT2_REALTYPE fp465;
fp465 = fp466 * fp9;
LIBINT2_REALTYPE fp474;
fp474 = 1.0000000000000000e+00 * fp465;
LIBINT2_REALTYPE fp468;
fp468 = fp36 * fp28;
LIBINT2_REALTYPE fp467;
fp467 = fp468 * fp9;
LIBINT2_REALTYPE fp475;
fp475 = inteval->two_alpha0_ket[vi] * fp467;
LIBINT2_REALTYPE fp473;
fp473 = fp475 - fp474;
LIBINT2_REALTYPE fp622;
fp622 = 4.0000000000000000e+00 * fp473;
LIBINT2_REALTYPE fp470;
fp470 = fp37 * fp27;
LIBINT2_REALTYPE fp469;
fp469 = fp470 * fp9;
LIBINT2_REALTYPE fp477;
fp477 = 1.0000000000000000e+00 * fp469;
LIBINT2_REALTYPE fp472;
fp472 = fp37 * fp28;
LIBINT2_REALTYPE fp471;
fp471 = fp472 * fp9;
LIBINT2_REALTYPE fp478;
fp478 = inteval->two_alpha0_ket[vi] * fp471;
LIBINT2_REALTYPE fp476;
fp476 = fp478 - fp477;
LIBINT2_REALTYPE fp623;
fp623 = inteval->two_alpha0_bra[vi] * fp476;
LIBINT2_REALTYPE fp621;
fp621 = fp623 - fp622;
target[((hsi*63+7)*1+lsi)*1] = fp621;
LIBINT2_REALTYPE fp480;
fp480 = fp38 * fp29;
LIBINT2_REALTYPE fp479;
fp479 = fp480 * fp9;
LIBINT2_REALTYPE fp484;
fp484 = 4.0000000000000000e+00 * fp479;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp482;
fp482 = fp39 * fp29;
LIBINT2_REALTYPE fp481;
fp481 = fp482 * fp9;
LIBINT2_REALTYPE fp485;
fp485 = inteval->two_alpha0_bra[vi] * fp481;
LIBINT2_REALTYPE fp483;
fp483 = fp485 - fp484;
LIBINT2_REALTYPE fp624;
fp624 = inteval->two_alpha0_ket[vi] * fp483;
target[((hsi*63+6)*1+lsi)*1] = fp624;
LIBINT2_REALTYPE fp487;
fp487 = fp36 * fp26;
LIBINT2_REALTYPE fp486;
fp486 = fp487 * fp10;
LIBINT2_REALTYPE fp491;
fp491 = 4.0000000000000000e+00 * fp486;
LIBINT2_REALTYPE fp489;
fp489 = fp37 * fp26;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp10;
LIBINT2_REALTYPE fp492;
fp492 = inteval->two_alpha0_bra[vi] * fp488;
LIBINT2_REALTYPE fp490;
fp490 = fp492 - fp491;
LIBINT2_REALTYPE fp625;
fp625 = inteval->two_alpha0_ket[vi] * fp490;
target[((hsi*63+5)*1+lsi)*1] = fp625;
LIBINT2_REALTYPE fp494;
fp494 = fp36 * fp24;
LIBINT2_REALTYPE fp493;
fp493 = fp494 * fp11;
LIBINT2_REALTYPE fp502;
fp502 = 1.0000000000000000e+00 * fp493;
LIBINT2_REALTYPE fp496;
fp496 = fp36 * fp25;
LIBINT2_REALTYPE fp495;
fp495 = fp496 * fp11;
LIBINT2_REALTYPE fp503;
fp503 = inteval->two_alpha0_ket[vi] * fp495;
LIBINT2_REALTYPE fp501;
fp501 = fp503 - fp502;
LIBINT2_REALTYPE fp627;
fp627 = 4.0000000000000000e+00 * fp501;
LIBINT2_REALTYPE fp498;
fp498 = fp37 * fp24;
LIBINT2_REALTYPE fp497;
fp497 = fp498 * fp11;
LIBINT2_REALTYPE fp505;
fp505 = 1.0000000000000000e+00 * fp497;
LIBINT2_REALTYPE fp500;
fp500 = fp37 * fp25;
LIBINT2_REALTYPE fp499;
fp499 = fp500 * fp11;
LIBINT2_REALTYPE fp506;
fp506 = inteval->two_alpha0_ket[vi] * fp499;
LIBINT2_REALTYPE fp504;
fp504 = fp506 - fp505;
LIBINT2_REALTYPE fp628;
fp628 = inteval->two_alpha0_bra[vi] * fp504;
LIBINT2_REALTYPE fp626;
fp626 = fp628 - fp627;
target[((hsi*63+4)*1+lsi)*1] = fp626;
LIBINT2_REALTYPE fp508;
fp508 = fp38 * fp26;
LIBINT2_REALTYPE fp507;
fp507 = fp508 * fp11;
LIBINT2_REALTYPE fp512;
fp512 = 4.0000000000000000e+00 * fp507;
LIBINT2_REALTYPE fp510;
fp510 = fp39 * fp26;
LIBINT2_REALTYPE fp509;
fp509 = fp510 * fp11;
LIBINT2_REALTYPE fp513;
fp513 = inteval->two_alpha0_bra[vi] * fp509;
LIBINT2_REALTYPE fp511;
fp511 = fp513 - fp512;
LIBINT2_REALTYPE fp629;
fp629 = inteval->two_alpha0_ket[vi] * fp511;
target[((hsi*63+3)*1+lsi)*1] = fp629;
LIBINT2_REALTYPE fp515;
fp515 = fp40 * fp29;
LIBINT2_REALTYPE fp514;
fp514 = fp515 * fp10;
LIBINT2_REALTYPE fp519;
fp519 = 5.0000000000000000e+00 * fp514;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp517;
fp517 = fp41 * fp29;
LIBINT2_REALTYPE fp516;
fp516 = fp517 * fp10;
LIBINT2_REALTYPE fp520;
fp520 = inteval->two_alpha0_bra[vi] * fp516;
LIBINT2_REALTYPE fp518;
fp518 = fp520 - fp519;
LIBINT2_REALTYPE fp630;
fp630 = inteval->two_alpha0_ket[vi] * fp518;
target[((hsi*63+2)*1+lsi)*1] = fp630;
LIBINT2_REALTYPE fp522;
fp522 = fp40 * fp27;
LIBINT2_REALTYPE fp521;
fp521 = fp522 * fp11;
LIBINT2_REALTYPE fp530;
fp530 = 1.0000000000000000e+00 * fp521;
LIBINT2_REALTYPE fp524;
fp524 = fp40 * fp28;
LIBINT2_REALTYPE fp523;
fp523 = fp524 * fp11;
LIBINT2_REALTYPE fp531;
fp531 = inteval->two_alpha0_ket[vi] * fp523;
LIBINT2_REALTYPE fp529;
fp529 = fp531 - fp530;
LIBINT2_REALTYPE fp632;
fp632 = 5.0000000000000000e+00 * fp529;
LIBINT2_REALTYPE fp526;
fp526 = fp41 * fp27;
LIBINT2_REALTYPE fp525;
fp525 = fp526 * fp11;
LIBINT2_REALTYPE fp533;
fp533 = 1.0000000000000000e+00 * fp525;
LIBINT2_REALTYPE fp528;
fp528 = fp41 * fp28;
LIBINT2_REALTYPE fp527;
fp527 = fp528 * fp11;
LIBINT2_REALTYPE fp534;
fp534 = inteval->two_alpha0_ket[vi] * fp527;
LIBINT2_REALTYPE fp532;
fp532 = fp534 - fp533;
LIBINT2_REALTYPE fp633;
fp633 = inteval->two_alpha0_bra[vi] * fp532;
LIBINT2_REALTYPE fp631;
fp631 = fp633 - fp632;
target[((hsi*63+1)*1+lsi)*1] = fp631;
LIBINT2_REALTYPE fp382;
fp382 = fp34 * fp27;
LIBINT2_REALTYPE fp381;
fp381 = fp382 * fp7;
LIBINT2_REALTYPE fp390;
fp390 = 1.0000000000000000e+00 * fp381;
LIBINT2_REALTYPE fp384;
fp384 = fp34 * fp28;
LIBINT2_REALTYPE fp383;
fp383 = fp384 * fp7;
LIBINT2_REALTYPE fp391;
fp391 = inteval->two_alpha0_ket[vi] * fp383;
LIBINT2_REALTYPE fp389;
fp389 = fp391 - fp390;
LIBINT2_REALTYPE fp607;
fp607 = 3.0000000000000000e+00 * fp389;
LIBINT2_REALTYPE fp386;
fp386 = fp40 * fp27;
LIBINT2_REALTYPE fp385;
fp385 = fp386 * fp7;
LIBINT2_REALTYPE fp393;
fp393 = 1.0000000000000000e+00 * fp385;
LIBINT2_REALTYPE fp388;
fp388 = fp40 * fp28;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * fp7;
LIBINT2_REALTYPE fp394;
fp394 = inteval->two_alpha0_ket[vi] * fp387;
LIBINT2_REALTYPE fp392;
fp392 = fp394 - fp393;
LIBINT2_REALTYPE fp608;
fp608 = inteval->two_alpha0_bra[vi] * fp392;
LIBINT2_REALTYPE fp606;
fp606 = fp608 - fp607;
target[((hsi*63+16)*1+lsi)*1] = fp606;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp32 * fp29;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp0;
LIBINT2_REALTYPE fp46;
fp46 = inteval->two_alpha0_ket[vi] * fp44;
LIBINT2_REALTYPE fp542;
fp542 = inteval->two_alpha0_bra[vi] * fp46;
target[((hsi*63+62)*1+lsi)*1] = fp542;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp32 * fp27;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp1;
LIBINT2_REALTYPE fp52;
fp52 = 1.0000000000000000e+00 * fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp32 * fp28;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp1;
LIBINT2_REALTYPE fp53;
fp53 = inteval->two_alpha0_ket[vi] * fp49;
LIBINT2_REALTYPE fp51;
fp51 = fp53 - fp52;
LIBINT2_REALTYPE fp543;
fp543 = inteval->two_alpha0_bra[vi] * fp51;
target[((hsi*63+61)*1+lsi)*1] = fp543;
LIBINT2_REALTYPE fp55;
fp55 = fp33 * fp29;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp1;
LIBINT2_REALTYPE fp56;
fp56 = inteval->two_alpha0_ket[vi] * fp54;
LIBINT2_REALTYPE fp544;
fp544 = inteval->two_alpha0_bra[vi] * fp56;
target[((hsi*63+60)*1+lsi)*1] = fp544;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp32 * fp26;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp2;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_ket[vi] * fp57;
LIBINT2_REALTYPE fp545;
fp545 = inteval->two_alpha0_bra[vi] * fp59;
target[((hsi*63+59)*1+lsi)*1] = fp545;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp32 * fp24;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp3;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp32 * fp25;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp3;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_ket[vi] * fp62;
LIBINT2_REALTYPE fp64;
fp64 = fp66 - fp65;
LIBINT2_REALTYPE fp546;
fp546 = inteval->two_alpha0_bra[vi] * fp64;
target[((hsi*63+58)*1+lsi)*1] = fp546;
LIBINT2_REALTYPE fp68;
fp68 = fp33 * fp26;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp3;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_ket[vi] * fp67;
LIBINT2_REALTYPE fp547;
fp547 = inteval->two_alpha0_bra[vi] * fp69;
target[((hsi*63+57)*1+lsi)*1] = fp547;
LIBINT2_REALTYPE fp71;
fp71 = fp32 * fp23;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp4;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_ket[vi] * fp70;
LIBINT2_REALTYPE fp548;
fp548 = inteval->two_alpha0_bra[vi] * fp72;
target[((hsi*63+56)*1+lsi)*1] = fp548;
LIBINT2_REALTYPE fp74;
fp74 = fp32 * fp21;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp5;
LIBINT2_REALTYPE fp78;
fp78 = 1.0000000000000000e+00 * fp73;
LIBINT2_REALTYPE fp76;
fp76 = fp32 * fp22;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp5;
LIBINT2_REALTYPE fp79;
fp79 = inteval->two_alpha0_ket[vi] * fp75;
LIBINT2_REALTYPE fp77;
fp77 = fp79 - fp78;
LIBINT2_REALTYPE fp549;
fp549 = inteval->two_alpha0_bra[vi] * fp77;
target[((hsi*63+55)*1+lsi)*1] = fp549;
LIBINT2_REALTYPE fp81;
fp81 = fp33 * fp23;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp5;
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_ket[vi] * fp80;
LIBINT2_REALTYPE fp550;
fp550 = inteval->two_alpha0_bra[vi] * fp82;
target[((hsi*63+54)*1+lsi)*1] = fp550;
LIBINT2_REALTYPE fp84;
fp84 = fp32 * fp20;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp6;
LIBINT2_REALTYPE fp85;
fp85 = inteval->two_alpha0_ket[vi] * fp83;
LIBINT2_REALTYPE fp551;
fp551 = inteval->two_alpha0_bra[vi] * fp85;
target[((hsi*63+53)*1+lsi)*1] = fp551;
LIBINT2_REALTYPE fp87;
fp87 = fp32 * fp18;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp7;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp32 * fp19;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp7;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_ket[vi] * fp88;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp552;
fp552 = inteval->two_alpha0_bra[vi] * fp90;
target[((hsi*63+52)*1+lsi)*1] = fp552;
LIBINT2_REALTYPE fp94;
fp94 = fp33 * fp20;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp7;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_ket[vi] * fp93;
LIBINT2_REALTYPE fp553;
fp553 = inteval->two_alpha0_bra[vi] * fp95;
target[((hsi*63+51)*1+lsi)*1] = fp553;
LIBINT2_REALTYPE fp97;
fp97 = fp32 * fp17;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp8;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_ket[vi] * fp96;
LIBINT2_REALTYPE fp554;
fp554 = inteval->two_alpha0_bra[vi] * fp98;
target[((hsi*63+50)*1+lsi)*1] = fp554;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp32 * fp15;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp9;
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * fp99;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp32 * fp16;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp9;
LIBINT2_REALTYPE fp105;
fp105 = inteval->two_alpha0_ket[vi] * fp101;
LIBINT2_REALTYPE fp103;
fp103 = fp105 - fp104;
LIBINT2_REALTYPE fp555;
fp555 = inteval->two_alpha0_bra[vi] * fp103;
target[((hsi*63+49)*1+lsi)*1] = fp555;
LIBINT2_REALTYPE fp107;
fp107 = fp33 * fp17;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp9;
LIBINT2_REALTYPE fp108;
fp108 = inteval->two_alpha0_ket[vi] * fp106;
LIBINT2_REALTYPE fp556;
fp556 = inteval->two_alpha0_bra[vi] * fp108;
target[((hsi*63+48)*1+lsi)*1] = fp556;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp30 * fp15;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp11;
LIBINT2_REALTYPE fp250;
fp250 = 1.0000000000000000e+00 * fp241;
LIBINT2_REALTYPE fp244;
fp244 = fp30 * fp16;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp11;
LIBINT2_REALTYPE fp251;
fp251 = inteval->two_alpha0_ket[vi] * fp243;
LIBINT2_REALTYPE fp249;
fp249 = fp251 - fp250;
LIBINT2_REALTYPE fp582;
fp582 = 1.0000000000000000e+00 * fp249;
LIBINT2_REALTYPE fp246;
fp246 = fp34 * fp15;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp11;
LIBINT2_REALTYPE fp253;
fp253 = 1.0000000000000000e+00 * fp245;
LIBINT2_REALTYPE fp248;
fp248 = fp34 * fp16;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp11;
LIBINT2_REALTYPE fp254;
fp254 = inteval->two_alpha0_ket[vi] * fp247;
LIBINT2_REALTYPE fp252;
fp252 = fp254 - fp253;
LIBINT2_REALTYPE fp583;
fp583 = inteval->two_alpha0_bra[vi] * fp252;
LIBINT2_REALTYPE fp581;
fp581 = fp583 - fp582;
target[((hsi*63+31)*1+lsi)*1] = fp581;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp32 * fp12;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp11;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * fp112;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp32 * fp13;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp11;
LIBINT2_REALTYPE fp118;
fp118 = inteval->two_alpha0_ket[vi] * fp114;
LIBINT2_REALTYPE fp116;
fp116 = fp118 - fp117;
LIBINT2_REALTYPE fp558;
fp558 = inteval->two_alpha0_bra[vi] * fp116;
target[((hsi*63+46)*1+lsi)*1] = fp558;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp33 * fp14;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp11;
LIBINT2_REALTYPE fp121;
fp121 = inteval->two_alpha0_ket[vi] * fp119;
LIBINT2_REALTYPE fp559;
fp559 = inteval->two_alpha0_bra[vi] * fp121;
target[((hsi*63+45)*1+lsi)*1] = fp559;
LIBINT2_REALTYPE fp123;
fp123 = fp30 * fp29;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp2;
LIBINT2_REALTYPE fp127;
fp127 = 1.0000000000000000e+00 * fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp34 * fp29;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp2;
LIBINT2_REALTYPE fp128;
fp128 = inteval->two_alpha0_bra[vi] * fp124;
LIBINT2_REALTYPE fp126;
fp126 = fp128 - fp127;
LIBINT2_REALTYPE fp560;
fp560 = inteval->two_alpha0_ket[vi] * fp126;
target[((hsi*63+44)*1+lsi)*1] = fp560;
LIBINT2_REALTYPE fp130;
fp130 = fp30 * fp27;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp3;
LIBINT2_REALTYPE fp138;
fp138 = 1.0000000000000000e+00 * fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp30 * fp28;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp3;
LIBINT2_REALTYPE fp139;
fp139 = inteval->two_alpha0_ket[vi] * fp131;
LIBINT2_REALTYPE fp137;
fp137 = fp139 - fp138;
LIBINT2_REALTYPE fp562;
fp562 = 1.0000000000000000e+00 * fp137;
LIBINT2_REALTYPE fp134;
fp134 = fp34 * fp27;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp3;
LIBINT2_REALTYPE fp141;
fp141 = 1.0000000000000000e+00 * fp133;
LIBINT2_REALTYPE fp136;
fp136 = fp34 * fp28;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp3;
LIBINT2_REALTYPE fp142;
fp142 = inteval->two_alpha0_ket[vi] * fp135;
LIBINT2_REALTYPE fp140;
fp140 = fp142 - fp141;
LIBINT2_REALTYPE fp563;
fp563 = inteval->two_alpha0_bra[vi] * fp140;
LIBINT2_REALTYPE fp561;
fp561 = fp563 - fp562;
target[((hsi*63+43)*1+lsi)*1] = fp561;
LIBINT2_REALTYPE fp144;
fp144 = fp31 * fp29;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp3;
LIBINT2_REALTYPE fp148;
fp148 = 1.0000000000000000e+00 * fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp35 * fp29;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp3;
LIBINT2_REALTYPE fp149;
fp149 = inteval->two_alpha0_bra[vi] * fp145;
LIBINT2_REALTYPE fp147;
fp147 = fp149 - fp148;
LIBINT2_REALTYPE fp564;
fp564 = inteval->two_alpha0_ket[vi] * fp147;
target[((hsi*63+42)*1+lsi)*1] = fp564;
LIBINT2_REALTYPE fp151;
fp151 = fp30 * fp26;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp4;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp34 * fp26;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp4;
LIBINT2_REALTYPE fp156;
fp156 = inteval->two_alpha0_bra[vi] * fp152;
LIBINT2_REALTYPE fp154;
fp154 = fp156 - fp155;
LIBINT2_REALTYPE fp565;
fp565 = inteval->two_alpha0_ket[vi] * fp154;
target[((hsi*63+41)*1+lsi)*1] = fp565;
LIBINT2_REALTYPE fp158;
fp158 = fp30 * fp24;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp5;
LIBINT2_REALTYPE fp166;
fp166 = 1.0000000000000000e+00 * fp157;
LIBINT2_REALTYPE fp160;
fp160 = fp30 * fp25;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp5;
LIBINT2_REALTYPE fp167;
fp167 = inteval->two_alpha0_ket[vi] * fp159;
LIBINT2_REALTYPE fp165;
fp165 = fp167 - fp166;
LIBINT2_REALTYPE fp567;
fp567 = 1.0000000000000000e+00 * fp165;
LIBINT2_REALTYPE fp162;
fp162 = fp34 * fp24;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp5;
LIBINT2_REALTYPE fp169;
fp169 = 1.0000000000000000e+00 * fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp34 * fp25;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp5;
LIBINT2_REALTYPE fp170;
fp170 = inteval->two_alpha0_ket[vi] * fp163;
LIBINT2_REALTYPE fp168;
fp168 = fp170 - fp169;
LIBINT2_REALTYPE fp568;
fp568 = inteval->two_alpha0_bra[vi] * fp168;
LIBINT2_REALTYPE fp566;
fp566 = fp568 - fp567;
target[((hsi*63+40)*1+lsi)*1] = fp566;
LIBINT2_REALTYPE fp172;
fp172 = fp31 * fp26;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp5;
LIBINT2_REALTYPE fp176;
fp176 = 1.0000000000000000e+00 * fp171;
LIBINT2_REALTYPE fp174;
fp174 = fp35 * fp26;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp5;
LIBINT2_REALTYPE fp177;
fp177 = inteval->two_alpha0_bra[vi] * fp173;
LIBINT2_REALTYPE fp175;
fp175 = fp177 - fp176;
LIBINT2_REALTYPE fp569;
fp569 = inteval->two_alpha0_ket[vi] * fp175;
target[((hsi*63+39)*1+lsi)*1] = fp569;
LIBINT2_REALTYPE fp179;
fp179 = fp30 * fp23;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp6;
LIBINT2_REALTYPE fp183;
fp183 = 1.0000000000000000e+00 * fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp34 * fp23;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp6;
LIBINT2_REALTYPE fp184;
fp184 = inteval->two_alpha0_bra[vi] * fp180;
LIBINT2_REALTYPE fp182;
fp182 = fp184 - fp183;
LIBINT2_REALTYPE fp570;
fp570 = inteval->two_alpha0_ket[vi] * fp182;
target[((hsi*63+38)*1+lsi)*1] = fp570;
LIBINT2_REALTYPE fp186;
fp186 = fp30 * fp21;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp7;
LIBINT2_REALTYPE fp194;
fp194 = 1.0000000000000000e+00 * fp185;
LIBINT2_REALTYPE fp188;
fp188 = fp30 * fp22;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp7;
LIBINT2_REALTYPE fp195;
fp195 = inteval->two_alpha0_ket[vi] * fp187;
LIBINT2_REALTYPE fp193;
fp193 = fp195 - fp194;
LIBINT2_REALTYPE fp572;
fp572 = 1.0000000000000000e+00 * fp193;
LIBINT2_REALTYPE fp190;
fp190 = fp34 * fp21;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp7;
LIBINT2_REALTYPE fp197;
fp197 = 1.0000000000000000e+00 * fp189;
LIBINT2_REALTYPE fp192;
fp192 = fp34 * fp22;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp7;
LIBINT2_REALTYPE fp198;
fp198 = inteval->two_alpha0_ket[vi] * fp191;
LIBINT2_REALTYPE fp196;
fp196 = fp198 - fp197;
LIBINT2_REALTYPE fp573;
fp573 = inteval->two_alpha0_bra[vi] * fp196;
LIBINT2_REALTYPE fp571;
fp571 = fp573 - fp572;
target[((hsi*63+37)*1+lsi)*1] = fp571;
LIBINT2_REALTYPE fp200;
fp200 = fp31 * fp23;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp7;
LIBINT2_REALTYPE fp204;
fp204 = 1.0000000000000000e+00 * fp199;
LIBINT2_REALTYPE fp202;
fp202 = fp35 * fp23;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp7;
LIBINT2_REALTYPE fp205;
fp205 = inteval->two_alpha0_bra[vi] * fp201;
LIBINT2_REALTYPE fp203;
fp203 = fp205 - fp204;
LIBINT2_REALTYPE fp574;
fp574 = inteval->two_alpha0_ket[vi] * fp203;
target[((hsi*63+36)*1+lsi)*1] = fp574;
LIBINT2_REALTYPE fp207;
fp207 = fp30 * fp20;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp8;
LIBINT2_REALTYPE fp211;
fp211 = 1.0000000000000000e+00 * fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp34 * fp20;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp8;
LIBINT2_REALTYPE fp212;
fp212 = inteval->two_alpha0_bra[vi] * fp208;
LIBINT2_REALTYPE fp210;
fp210 = fp212 - fp211;
LIBINT2_REALTYPE fp575;
fp575 = inteval->two_alpha0_ket[vi] * fp210;
target[((hsi*63+35)*1+lsi)*1] = fp575;
LIBINT2_REALTYPE fp214;
fp214 = fp30 * fp18;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp9;
LIBINT2_REALTYPE fp222;
fp222 = 1.0000000000000000e+00 * fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp30 * fp19;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp9;
LIBINT2_REALTYPE fp223;
fp223 = inteval->two_alpha0_ket[vi] * fp215;
LIBINT2_REALTYPE fp221;
fp221 = fp223 - fp222;
LIBINT2_REALTYPE fp577;
fp577 = 1.0000000000000000e+00 * fp221;
LIBINT2_REALTYPE fp218;
fp218 = fp34 * fp18;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp9;
LIBINT2_REALTYPE fp225;
fp225 = 1.0000000000000000e+00 * fp217;
LIBINT2_REALTYPE fp220;
fp220 = fp34 * fp19;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp9;
LIBINT2_REALTYPE fp226;
fp226 = inteval->two_alpha0_ket[vi] * fp219;
LIBINT2_REALTYPE fp224;
fp224 = fp226 - fp225;
LIBINT2_REALTYPE fp578;
fp578 = inteval->two_alpha0_bra[vi] * fp224;
LIBINT2_REALTYPE fp576;
fp576 = fp578 - fp577;
target[((hsi*63+34)*1+lsi)*1] = fp576;
LIBINT2_REALTYPE fp228;
fp228 = fp31 * fp20;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp9;
LIBINT2_REALTYPE fp232;
fp232 = 1.0000000000000000e+00 * fp227;
LIBINT2_REALTYPE fp230;
fp230 = fp35 * fp20;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp9;
LIBINT2_REALTYPE fp233;
fp233 = inteval->two_alpha0_bra[vi] * fp229;
LIBINT2_REALTYPE fp231;
fp231 = fp233 - fp232;
LIBINT2_REALTYPE fp579;
fp579 = inteval->two_alpha0_ket[vi] * fp231;
target[((hsi*63+33)*1+lsi)*1] = fp579;
LIBINT2_REALTYPE fp235;
fp235 = fp30 * fp17;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp10;
LIBINT2_REALTYPE fp239;
fp239 = 1.0000000000000000e+00 * fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp34 * fp17;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp10;
LIBINT2_REALTYPE fp240;
fp240 = inteval->two_alpha0_bra[vi] * fp236;
LIBINT2_REALTYPE fp238;
fp238 = fp240 - fp239;
LIBINT2_REALTYPE fp580;
fp580 = inteval->two_alpha0_ket[vi] * fp238;
target[((hsi*63+32)*1+lsi)*1] = fp580;
LIBINT2_REALTYPE fp110;
fp110 = fp32 * fp14;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp10;
LIBINT2_REALTYPE fp111;
fp111 = inteval->two_alpha0_ket[vi] * fp109;
LIBINT2_REALTYPE fp557;
fp557 = inteval->two_alpha0_bra[vi] * fp111;
target[((hsi*63+47)*1+lsi)*1] = fp557;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 635 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif