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
void CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp30 * fp20;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp8;
LIBINT2_REALTYPE fp244;
fp244 = 1.0000000000000000e+00 * fp239;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp30 * fp20;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp9;
LIBINT2_REALTYPE fp245;
fp245 = inteval->two_alpha0_bra[vi] * fp241;
LIBINT2_REALTYPE fp243;
fp243 = fp245 - fp244;
LIBINT2_REALTYPE fp419;
fp419 = inteval->two_alpha0_ket[vi] * fp243;
target[((hsi*45+21)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp29 * fp17;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp10;
LIBINT2_REALTYPE fp248;
fp248 = inteval->two_alpha0_ket[vi] * fp246;
LIBINT2_REALTYPE fp420;
fp420 = inteval->two_alpha0_bra[vi] * fp248;
target[((hsi*45+20)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp29 * fp15;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp11;
LIBINT2_REALTYPE fp254;
fp254 = 1.0000000000000000e+00 * fp249;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp29 * fp16;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp11;
LIBINT2_REALTYPE fp255;
fp255 = inteval->two_alpha0_ket[vi] * fp251;
LIBINT2_REALTYPE fp253;
fp253 = fp255 - fp254;
LIBINT2_REALTYPE fp421;
fp421 = inteval->two_alpha0_bra[vi] * fp253;
target[((hsi*45+19)*1+lsi)*1] = fp421;
LIBINT2_REALTYPE fp257;
fp257 = fp30 * fp17;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp11;
LIBINT2_REALTYPE fp258;
fp258 = inteval->two_alpha0_ket[vi] * fp256;
LIBINT2_REALTYPE fp422;
fp422 = inteval->two_alpha0_bra[vi] * fp258;
target[((hsi*45+18)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp31 * fp26;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp10;
LIBINT2_REALTYPE fp264;
fp264 = 2.0000000000000000e+00 * fp259;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = fp31 * fp26;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp4;
LIBINT2_REALTYPE fp265;
fp265 = inteval->two_alpha0_bra[vi] * fp261;
LIBINT2_REALTYPE fp263;
fp263 = fp265 - fp264;
LIBINT2_REALTYPE fp423;
fp423 = inteval->two_alpha0_ket[vi] * fp263;
target[((hsi*45+17)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp31 * fp24;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp11;
LIBINT2_REALTYPE fp275;
fp275 = 1.0000000000000000e+00 * fp266;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp31 * fp25;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp11;
LIBINT2_REALTYPE fp276;
fp276 = inteval->two_alpha0_ket[vi] * fp268;
LIBINT2_REALTYPE fp274;
fp274 = fp276 - fp275;
LIBINT2_REALTYPE fp425;
fp425 = 2.0000000000000000e+00 * fp274;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = fp31 * fp24;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp5;
LIBINT2_REALTYPE fp278;
fp278 = 1.0000000000000000e+00 * fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp31 * fp25;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp5;
LIBINT2_REALTYPE fp279;
fp279 = inteval->two_alpha0_ket[vi] * fp272;
LIBINT2_REALTYPE fp277;
fp277 = fp279 - fp278;
LIBINT2_REALTYPE fp426;
fp426 = inteval->two_alpha0_bra[vi] * fp277;
LIBINT2_REALTYPE fp424;
fp424 = fp426 - fp425;
target[((hsi*45+16)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = fp32 * fp26;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp11;
LIBINT2_REALTYPE fp285;
fp285 = 2.0000000000000000e+00 * fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp32 * fp26;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp5;
LIBINT2_REALTYPE fp286;
fp286 = inteval->two_alpha0_bra[vi] * fp282;
LIBINT2_REALTYPE fp284;
fp284 = fp286 - fp285;
LIBINT2_REALTYPE fp427;
fp427 = inteval->two_alpha0_ket[vi] * fp284;
target[((hsi*45+15)*1+lsi)*1] = fp427;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp31 * fp23;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp6;
LIBINT2_REALTYPE fp292;
fp292 = 1.0000000000000000e+00 * fp287;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp31 * fp23;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp7;
LIBINT2_REALTYPE fp293;
fp293 = inteval->two_alpha0_bra[vi] * fp289;
LIBINT2_REALTYPE fp291;
fp291 = fp293 - fp292;
LIBINT2_REALTYPE fp428;
fp428 = inteval->two_alpha0_ket[vi] * fp291;
target[((hsi*45+14)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp31 * fp21;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp8;
LIBINT2_REALTYPE fp303;
fp303 = 1.0000000000000000e+00 * fp294;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp31 * fp22;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp8;
LIBINT2_REALTYPE fp304;
fp304 = inteval->two_alpha0_ket[vi] * fp296;
LIBINT2_REALTYPE fp302;
fp302 = fp304 - fp303;
LIBINT2_REALTYPE fp430;
fp430 = 1.0000000000000000e+00 * fp302;
LIBINT2_REALTYPE fp299;
fp299 = fp31 * fp21;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp9;
LIBINT2_REALTYPE fp306;
fp306 = 1.0000000000000000e+00 * fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp31 * fp22;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp9;
LIBINT2_REALTYPE fp307;
fp307 = inteval->two_alpha0_ket[vi] * fp300;
LIBINT2_REALTYPE fp305;
fp305 = fp307 - fp306;
LIBINT2_REALTYPE fp431;
fp431 = inteval->two_alpha0_bra[vi] * fp305;
LIBINT2_REALTYPE fp429;
fp429 = fp431 - fp430;
target[((hsi*45+13)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp309;
fp309 = fp32 * fp23;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp8;
LIBINT2_REALTYPE fp313;
fp313 = 1.0000000000000000e+00 * fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp32 * fp23;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp9;
LIBINT2_REALTYPE fp314;
fp314 = inteval->two_alpha0_bra[vi] * fp310;
LIBINT2_REALTYPE fp312;
fp312 = fp314 - fp313;
LIBINT2_REALTYPE fp432;
fp432 = inteval->two_alpha0_ket[vi] * fp312;
target[((hsi*45+12)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = fp36 * fp26;
LIBINT2_REALTYPE fp379;
fp379 = fp380 * fp11;
LIBINT2_REALTYPE fp381;
fp381 = inteval->two_alpha0_ket[vi] * fp379;
LIBINT2_REALTYPE fp446;
fp446 = inteval->two_alpha0_bra[vi] * fp381;
target[((hsi*45+0)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp31 * fp18;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp11;
LIBINT2_REALTYPE fp323;
fp323 = 1.0000000000000000e+00 * fp318;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp31 * fp19;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp11;
LIBINT2_REALTYPE fp324;
fp324 = inteval->two_alpha0_ket[vi] * fp320;
LIBINT2_REALTYPE fp322;
fp322 = fp324 - fp323;
LIBINT2_REALTYPE fp434;
fp434 = inteval->two_alpha0_bra[vi] * fp322;
target[((hsi*45+10)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp326;
fp326 = fp32 * fp20;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp11;
LIBINT2_REALTYPE fp327;
fp327 = inteval->two_alpha0_ket[vi] * fp325;
LIBINT2_REALTYPE fp435;
fp435 = inteval->two_alpha0_bra[vi] * fp327;
target[((hsi*45+9)*1+lsi)*1] = fp435;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = fp33 * fp26;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp6;
LIBINT2_REALTYPE fp333;
fp333 = 1.0000000000000000e+00 * fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp33 * fp26;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp7;
LIBINT2_REALTYPE fp334;
fp334 = inteval->two_alpha0_bra[vi] * fp330;
LIBINT2_REALTYPE fp332;
fp332 = fp334 - fp333;
LIBINT2_REALTYPE fp436;
fp436 = inteval->two_alpha0_ket[vi] * fp332;
target[((hsi*45+8)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp336;
fp336 = fp33 * fp24;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp8;
LIBINT2_REALTYPE fp344;
fp344 = 1.0000000000000000e+00 * fp335;
LIBINT2_REALTYPE fp338;
fp338 = fp33 * fp25;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp8;
LIBINT2_REALTYPE fp345;
fp345 = inteval->two_alpha0_ket[vi] * fp337;
LIBINT2_REALTYPE fp343;
fp343 = fp345 - fp344;
LIBINT2_REALTYPE fp438;
fp438 = 1.0000000000000000e+00 * fp343;
LIBINT2_REALTYPE fp340;
fp340 = fp33 * fp24;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp9;
LIBINT2_REALTYPE fp347;
fp347 = 1.0000000000000000e+00 * fp339;
LIBINT2_REALTYPE fp342;
fp342 = fp33 * fp25;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp9;
LIBINT2_REALTYPE fp348;
fp348 = inteval->two_alpha0_ket[vi] * fp341;
LIBINT2_REALTYPE fp346;
fp346 = fp348 - fp347;
LIBINT2_REALTYPE fp439;
fp439 = inteval->two_alpha0_bra[vi] * fp346;
LIBINT2_REALTYPE fp437;
fp437 = fp439 - fp438;
target[((hsi*45+7)*1+lsi)*1] = fp437;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = fp34 * fp26;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp8;
LIBINT2_REALTYPE fp354;
fp354 = 1.0000000000000000e+00 * fp349;
LIBINT2_REALTYPE fp352;
fp352 = fp34 * fp26;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp9;
LIBINT2_REALTYPE fp355;
fp355 = inteval->two_alpha0_bra[vi] * fp351;
LIBINT2_REALTYPE fp353;
fp353 = fp355 - fp354;
LIBINT2_REALTYPE fp440;
fp440 = inteval->two_alpha0_ket[vi] * fp353;
target[((hsi*45+6)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp357;
fp357 = fp33 * fp23;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp10;
LIBINT2_REALTYPE fp358;
fp358 = inteval->two_alpha0_ket[vi] * fp356;
LIBINT2_REALTYPE fp441;
fp441 = inteval->two_alpha0_bra[vi] * fp358;
target[((hsi*45+5)*1+lsi)*1] = fp441;
LIBINT2_REALTYPE fp360;
fp360 = fp33 * fp21;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp11;
LIBINT2_REALTYPE fp364;
fp364 = 1.0000000000000000e+00 * fp359;
LIBINT2_REALTYPE fp362;
fp362 = fp33 * fp22;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * fp11;
LIBINT2_REALTYPE fp365;
fp365 = inteval->two_alpha0_ket[vi] * fp361;
LIBINT2_REALTYPE fp363;
fp363 = fp365 - fp364;
LIBINT2_REALTYPE fp442;
fp442 = inteval->two_alpha0_bra[vi] * fp363;
target[((hsi*45+4)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp367;
fp367 = fp34 * fp23;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp11;
LIBINT2_REALTYPE fp368;
fp368 = inteval->two_alpha0_ket[vi] * fp366;
LIBINT2_REALTYPE fp443;
fp443 = inteval->two_alpha0_bra[vi] * fp368;
target[((hsi*45+3)*1+lsi)*1] = fp443;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp370;
fp370 = fp35 * fp26;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp10;
LIBINT2_REALTYPE fp371;
fp371 = inteval->two_alpha0_ket[vi] * fp369;
LIBINT2_REALTYPE fp444;
fp444 = inteval->two_alpha0_bra[vi] * fp371;
target[((hsi*45+2)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp373;
fp373 = fp35 * fp24;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp11;
LIBINT2_REALTYPE fp377;
fp377 = 1.0000000000000000e+00 * fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp35 * fp25;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp11;
LIBINT2_REALTYPE fp378;
fp378 = inteval->two_alpha0_ket[vi] * fp374;
LIBINT2_REALTYPE fp376;
fp376 = fp378 - fp377;
LIBINT2_REALTYPE fp445;
fp445 = inteval->two_alpha0_bra[vi] * fp376;
target[((hsi*45+1)*1+lsi)*1] = fp445;
LIBINT2_REALTYPE fp316;
fp316 = fp31 * fp20;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp10;
LIBINT2_REALTYPE fp317;
fp317 = inteval->two_alpha0_ket[vi] * fp315;
LIBINT2_REALTYPE fp433;
fp433 = inteval->two_alpha0_bra[vi] * fp317;
target[((hsi*45+11)*1+lsi)*1] = fp433;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp27 * fp26;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp4;
LIBINT2_REALTYPE fp42;
fp42 = 4.0000000000000000e+00 * fp37;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp27 * fp26;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp0;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha0_bra[vi] * fp39;
LIBINT2_REALTYPE fp41;
fp41 = fp43 - fp42;
LIBINT2_REALTYPE fp382;
fp382 = inteval->two_alpha0_ket[vi] * fp41;
target[((hsi*45+44)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp45;
fp45 = fp27 * fp24;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp5;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp27 * fp25;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp5;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_ket[vi] * fp46;
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
LIBINT2_REALTYPE fp384;
fp384 = 4.0000000000000000e+00 * fp52;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp27 * fp24;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp1;
LIBINT2_REALTYPE fp56;
fp56 = 1.0000000000000000e+00 * fp48;
LIBINT2_REALTYPE fp51;
fp51 = fp27 * fp25;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp1;
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_ket[vi] * fp50;
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
LIBINT2_REALTYPE fp385;
fp385 = inteval->two_alpha0_bra[vi] * fp55;
LIBINT2_REALTYPE fp383;
fp383 = fp385 - fp384;
target[((hsi*45+43)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp28 * fp26;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp5;
LIBINT2_REALTYPE fp63;
fp63 = 4.0000000000000000e+00 * fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp28 * fp26;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp1;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_bra[vi] * fp60;
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
LIBINT2_REALTYPE fp386;
fp386 = inteval->two_alpha0_ket[vi] * fp62;
target[((hsi*45+42)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp66;
fp66 = fp27 * fp23;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp7;
LIBINT2_REALTYPE fp70;
fp70 = 3.0000000000000000e+00 * fp65;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp27 * fp23;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp2;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_bra[vi] * fp67;
LIBINT2_REALTYPE fp69;
fp69 = fp71 - fp70;
LIBINT2_REALTYPE fp387;
fp387 = inteval->two_alpha0_ket[vi] * fp69;
target[((hsi*45+41)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp73;
fp73 = fp27 * fp21;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp9;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp27 * fp22;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp9;
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_ket[vi] * fp74;
LIBINT2_REALTYPE fp80;
fp80 = fp82 - fp81;
LIBINT2_REALTYPE fp389;
fp389 = 3.0000000000000000e+00 * fp80;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp27 * fp21;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp3;
LIBINT2_REALTYPE fp84;
fp84 = 1.0000000000000000e+00 * fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp27 * fp22;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp3;
LIBINT2_REALTYPE fp85;
fp85 = inteval->two_alpha0_ket[vi] * fp78;
LIBINT2_REALTYPE fp83;
fp83 = fp85 - fp84;
LIBINT2_REALTYPE fp390;
fp390 = inteval->two_alpha0_bra[vi] * fp83;
LIBINT2_REALTYPE fp388;
fp388 = fp390 - fp389;
target[((hsi*45+40)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp87;
fp87 = fp28 * fp23;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp9;
LIBINT2_REALTYPE fp91;
fp91 = 3.0000000000000000e+00 * fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp28 * fp23;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp3;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_bra[vi] * fp88;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp391;
fp391 = inteval->two_alpha0_ket[vi] * fp90;
target[((hsi*45+39)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp94;
fp94 = fp27 * fp20;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp10;
LIBINT2_REALTYPE fp98;
fp98 = 2.0000000000000000e+00 * fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp27 * fp20;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp4;
LIBINT2_REALTYPE fp99;
fp99 = inteval->two_alpha0_bra[vi] * fp95;
LIBINT2_REALTYPE fp97;
fp97 = fp99 - fp98;
LIBINT2_REALTYPE fp392;
fp392 = inteval->two_alpha0_ket[vi] * fp97;
target[((hsi*45+38)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp101;
fp101 = fp27 * fp18;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp11;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp27 * fp19;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp11;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_ket[vi] * fp102;
LIBINT2_REALTYPE fp108;
fp108 = fp110 - fp109;
LIBINT2_REALTYPE fp394;
fp394 = 2.0000000000000000e+00 * fp108;
LIBINT2_REALTYPE fp105;
fp105 = fp27 * fp18;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp5;
LIBINT2_REALTYPE fp112;
fp112 = 1.0000000000000000e+00 * fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp27 * fp19;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp5;
LIBINT2_REALTYPE fp113;
fp113 = inteval->two_alpha0_ket[vi] * fp106;
LIBINT2_REALTYPE fp111;
fp111 = fp113 - fp112;
LIBINT2_REALTYPE fp395;
fp395 = inteval->two_alpha0_bra[vi] * fp111;
LIBINT2_REALTYPE fp393;
fp393 = fp395 - fp394;
target[((hsi*45+37)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp115;
fp115 = fp28 * fp20;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp11;
LIBINT2_REALTYPE fp119;
fp119 = 2.0000000000000000e+00 * fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp28 * fp20;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp5;
LIBINT2_REALTYPE fp120;
fp120 = inteval->two_alpha0_bra[vi] * fp116;
LIBINT2_REALTYPE fp118;
fp118 = fp120 - fp119;
LIBINT2_REALTYPE fp396;
fp396 = inteval->two_alpha0_ket[vi] * fp118;
target[((hsi*45+36)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp122;
fp122 = fp27 * fp17;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp6;
LIBINT2_REALTYPE fp126;
fp126 = 1.0000000000000000e+00 * fp121;
LIBINT2_REALTYPE fp124;
fp124 = fp27 * fp17;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp7;
LIBINT2_REALTYPE fp127;
fp127 = inteval->two_alpha0_bra[vi] * fp123;
LIBINT2_REALTYPE fp125;
fp125 = fp127 - fp126;
LIBINT2_REALTYPE fp397;
fp397 = inteval->two_alpha0_ket[vi] * fp125;
target[((hsi*45+35)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp226;
fp226 = fp29 * fp18;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp8;
LIBINT2_REALTYPE fp234;
fp234 = 1.0000000000000000e+00 * fp225;
LIBINT2_REALTYPE fp228;
fp228 = fp29 * fp19;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp8;
LIBINT2_REALTYPE fp235;
fp235 = inteval->two_alpha0_ket[vi] * fp227;
LIBINT2_REALTYPE fp233;
fp233 = fp235 - fp234;
LIBINT2_REALTYPE fp417;
fp417 = 1.0000000000000000e+00 * fp233;
LIBINT2_REALTYPE fp230;
fp230 = fp29 * fp18;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp9;
LIBINT2_REALTYPE fp237;
fp237 = 1.0000000000000000e+00 * fp229;
LIBINT2_REALTYPE fp232;
fp232 = fp29 * fp19;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp9;
LIBINT2_REALTYPE fp238;
fp238 = inteval->two_alpha0_ket[vi] * fp231;
LIBINT2_REALTYPE fp236;
fp236 = fp238 - fp237;
LIBINT2_REALTYPE fp418;
fp418 = inteval->two_alpha0_bra[vi] * fp236;
LIBINT2_REALTYPE fp416;
fp416 = fp418 - fp417;
target[((hsi*45+22)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp143;
fp143 = fp28 * fp17;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp8;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp28 * fp17;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp9;
LIBINT2_REALTYPE fp148;
fp148 = inteval->two_alpha0_bra[vi] * fp144;
LIBINT2_REALTYPE fp146;
fp146 = fp148 - fp147;
LIBINT2_REALTYPE fp401;
fp401 = inteval->two_alpha0_ket[vi] * fp146;
target[((hsi*45+33)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp27 * fp14;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp10;
LIBINT2_REALTYPE fp151;
fp151 = inteval->two_alpha0_ket[vi] * fp149;
LIBINT2_REALTYPE fp402;
fp402 = inteval->two_alpha0_bra[vi] * fp151;
target[((hsi*45+32)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp27 * fp12;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp11;
LIBINT2_REALTYPE fp157;
fp157 = 1.0000000000000000e+00 * fp152;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp27 * fp13;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp11;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_ket[vi] * fp154;
LIBINT2_REALTYPE fp156;
fp156 = fp158 - fp157;
LIBINT2_REALTYPE fp403;
fp403 = inteval->two_alpha0_bra[vi] * fp156;
target[((hsi*45+31)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp160;
fp160 = fp28 * fp14;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp11;
LIBINT2_REALTYPE fp161;
fp161 = inteval->two_alpha0_ket[vi] * fp159;
LIBINT2_REALTYPE fp404;
fp404 = inteval->two_alpha0_bra[vi] * fp161;
target[((hsi*45+30)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp163;
fp163 = fp29 * fp26;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp7;
LIBINT2_REALTYPE fp167;
fp167 = 3.0000000000000000e+00 * fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp29 * fp26;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp2;
LIBINT2_REALTYPE fp168;
fp168 = inteval->two_alpha0_bra[vi] * fp164;
LIBINT2_REALTYPE fp166;
fp166 = fp168 - fp167;
LIBINT2_REALTYPE fp405;
fp405 = inteval->two_alpha0_ket[vi] * fp166;
target[((hsi*45+29)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp170;
fp170 = fp29 * fp24;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp9;
LIBINT2_REALTYPE fp178;
fp178 = 1.0000000000000000e+00 * fp169;
LIBINT2_REALTYPE fp172;
fp172 = fp29 * fp25;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp9;
LIBINT2_REALTYPE fp179;
fp179 = inteval->two_alpha0_ket[vi] * fp171;
LIBINT2_REALTYPE fp177;
fp177 = fp179 - fp178;
LIBINT2_REALTYPE fp407;
fp407 = 3.0000000000000000e+00 * fp177;
LIBINT2_REALTYPE fp174;
fp174 = fp29 * fp24;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp3;
LIBINT2_REALTYPE fp181;
fp181 = 1.0000000000000000e+00 * fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp29 * fp25;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp3;
LIBINT2_REALTYPE fp182;
fp182 = inteval->two_alpha0_ket[vi] * fp175;
LIBINT2_REALTYPE fp180;
fp180 = fp182 - fp181;
LIBINT2_REALTYPE fp408;
fp408 = inteval->two_alpha0_bra[vi] * fp180;
LIBINT2_REALTYPE fp406;
fp406 = fp408 - fp407;
target[((hsi*45+28)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp184;
fp184 = fp30 * fp26;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp9;
LIBINT2_REALTYPE fp188;
fp188 = 3.0000000000000000e+00 * fp183;
LIBINT2_REALTYPE fp186;
fp186 = fp30 * fp26;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp3;
LIBINT2_REALTYPE fp189;
fp189 = inteval->two_alpha0_bra[vi] * fp185;
LIBINT2_REALTYPE fp187;
fp187 = fp189 - fp188;
LIBINT2_REALTYPE fp409;
fp409 = inteval->two_alpha0_ket[vi] * fp187;
target[((hsi*45+27)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp191;
fp191 = fp29 * fp23;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp10;
LIBINT2_REALTYPE fp195;
fp195 = 2.0000000000000000e+00 * fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp29 * fp23;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp4;
LIBINT2_REALTYPE fp196;
fp196 = inteval->two_alpha0_bra[vi] * fp192;
LIBINT2_REALTYPE fp194;
fp194 = fp196 - fp195;
LIBINT2_REALTYPE fp410;
fp410 = inteval->two_alpha0_ket[vi] * fp194;
target[((hsi*45+26)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp198;
fp198 = fp29 * fp21;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp11;
LIBINT2_REALTYPE fp206;
fp206 = 1.0000000000000000e+00 * fp197;
LIBINT2_REALTYPE fp200;
fp200 = fp29 * fp22;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp11;
LIBINT2_REALTYPE fp207;
fp207 = inteval->two_alpha0_ket[vi] * fp199;
LIBINT2_REALTYPE fp205;
fp205 = fp207 - fp206;
LIBINT2_REALTYPE fp412;
fp412 = 2.0000000000000000e+00 * fp205;
LIBINT2_REALTYPE fp202;
fp202 = fp29 * fp21;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp5;
LIBINT2_REALTYPE fp209;
fp209 = 1.0000000000000000e+00 * fp201;
LIBINT2_REALTYPE fp204;
fp204 = fp29 * fp22;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp5;
LIBINT2_REALTYPE fp210;
fp210 = inteval->two_alpha0_ket[vi] * fp203;
LIBINT2_REALTYPE fp208;
fp208 = fp210 - fp209;
LIBINT2_REALTYPE fp413;
fp413 = inteval->two_alpha0_bra[vi] * fp208;
LIBINT2_REALTYPE fp411;
fp411 = fp413 - fp412;
target[((hsi*45+25)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp212;
fp212 = fp30 * fp23;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp11;
LIBINT2_REALTYPE fp216;
fp216 = 2.0000000000000000e+00 * fp211;
LIBINT2_REALTYPE fp214;
fp214 = fp30 * fp23;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp5;
LIBINT2_REALTYPE fp217;
fp217 = inteval->two_alpha0_bra[vi] * fp213;
LIBINT2_REALTYPE fp215;
fp215 = fp217 - fp216;
LIBINT2_REALTYPE fp414;
fp414 = inteval->two_alpha0_ket[vi] * fp215;
target[((hsi*45+24)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp219;
fp219 = fp29 * fp20;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp6;
LIBINT2_REALTYPE fp223;
fp223 = 1.0000000000000000e+00 * fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp29 * fp20;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp7;
LIBINT2_REALTYPE fp224;
fp224 = inteval->two_alpha0_bra[vi] * fp220;
LIBINT2_REALTYPE fp222;
fp222 = fp224 - fp223;
LIBINT2_REALTYPE fp415;
fp415 = inteval->two_alpha0_ket[vi] * fp222;
target[((hsi*45+23)*1+lsi)*1] = fp415;
LIBINT2_REALTYPE fp129;
fp129 = fp27 * fp15;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp8;
LIBINT2_REALTYPE fp137;
fp137 = 1.0000000000000000e+00 * fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp27 * fp16;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp8;
LIBINT2_REALTYPE fp138;
fp138 = inteval->two_alpha0_ket[vi] * fp130;
LIBINT2_REALTYPE fp136;
fp136 = fp138 - fp137;
LIBINT2_REALTYPE fp399;
fp399 = 1.0000000000000000e+00 * fp136;
LIBINT2_REALTYPE fp133;
fp133 = fp27 * fp15;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp9;
LIBINT2_REALTYPE fp140;
fp140 = 1.0000000000000000e+00 * fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp27 * fp16;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp9;
LIBINT2_REALTYPE fp141;
fp141 = inteval->two_alpha0_ket[vi] * fp134;
LIBINT2_REALTYPE fp139;
fp139 = fp141 - fp140;
LIBINT2_REALTYPE fp400;
fp400 = inteval->two_alpha0_bra[vi] * fp139;
LIBINT2_REALTYPE fp398;
fp398 = fp400 - fp399;
target[((hsi*45+34)*1+lsi)*1] = fp398;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 447 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif