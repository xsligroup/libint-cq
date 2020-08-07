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
void CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp34 * fp24;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp12;
LIBINT2_REALTYPE fp316;
fp316 = 3.0000000000000000e+00 * fp307;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = fp34 * fp24;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp9;
LIBINT2_REALTYPE fp317;
fp317 = inteval->two_alpha0_ket[vi] * fp309;
LIBINT2_REALTYPE fp315;
fp315 = fp317 - fp316;
LIBINT2_REALTYPE fp593;
fp593 = 1.0000000000000000e+00 * fp315;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = fp34 * fp25;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp12;
LIBINT2_REALTYPE fp319;
fp319 = 3.0000000000000000e+00 * fp311;
LIBINT2_REALTYPE fp314;
fp314 = fp34 * fp25;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp9;
LIBINT2_REALTYPE fp320;
fp320 = inteval->two_alpha0_ket[vi] * fp313;
LIBINT2_REALTYPE fp318;
fp318 = fp320 - fp319;
LIBINT2_REALTYPE fp594;
fp594 = inteval->two_alpha0_bra[vi] * fp318;
LIBINT2_REALTYPE fp592;
fp592 = fp594 - fp593;
target[((hsi*63+30)*1+lsi)*1] = fp592;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = fp34 * fp22;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp13;
LIBINT2_REALTYPE fp330;
fp330 = 2.0000000000000000e+00 * fp321;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = fp34 * fp22;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp10;
LIBINT2_REALTYPE fp331;
fp331 = inteval->two_alpha0_ket[vi] * fp323;
LIBINT2_REALTYPE fp329;
fp329 = fp331 - fp330;
LIBINT2_REALTYPE fp596;
fp596 = 1.0000000000000000e+00 * fp329;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp34 * fp23;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp13;
LIBINT2_REALTYPE fp333;
fp333 = 2.0000000000000000e+00 * fp325;
LIBINT2_REALTYPE fp328;
fp328 = fp34 * fp23;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp10;
LIBINT2_REALTYPE fp334;
fp334 = inteval->two_alpha0_ket[vi] * fp327;
LIBINT2_REALTYPE fp332;
fp332 = fp334 - fp333;
LIBINT2_REALTYPE fp597;
fp597 = inteval->two_alpha0_bra[vi] * fp332;
LIBINT2_REALTYPE fp595;
fp595 = fp597 - fp596;
target[((hsi*63+29)*1+lsi)*1] = fp595;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp34 * fp20;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp11;
LIBINT2_REALTYPE fp344;
fp344 = 1.0000000000000000e+00 * fp335;
LIBINT2_REALTYPE fp338;
fp338 = fp34 * fp20;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp12;
LIBINT2_REALTYPE fp345;
fp345 = inteval->two_alpha0_ket[vi] * fp337;
LIBINT2_REALTYPE fp343;
fp343 = fp345 - fp344;
LIBINT2_REALTYPE fp599;
fp599 = 1.0000000000000000e+00 * fp343;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp34 * fp21;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp11;
LIBINT2_REALTYPE fp347;
fp347 = 1.0000000000000000e+00 * fp339;
LIBINT2_REALTYPE fp342;
fp342 = fp34 * fp21;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp12;
LIBINT2_REALTYPE fp348;
fp348 = inteval->two_alpha0_ket[vi] * fp341;
LIBINT2_REALTYPE fp346;
fp346 = fp348 - fp347;
LIBINT2_REALTYPE fp600;
fp600 = inteval->two_alpha0_bra[vi] * fp346;
LIBINT2_REALTYPE fp598;
fp598 = fp600 - fp599;
target[((hsi*63+28)*1+lsi)*1] = fp598;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = fp34 * fp18;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp13;
LIBINT2_REALTYPE fp354;
fp354 = 1.0000000000000000e+00 * fp349;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = fp34 * fp19;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp13;
LIBINT2_REALTYPE fp355;
fp355 = inteval->two_alpha0_bra[vi] * fp351;
LIBINT2_REALTYPE fp353;
fp353 = fp355 - fp354;
LIBINT2_REALTYPE fp601;
fp601 = inteval->two_alpha0_ket[vi] * fp353;
target[((hsi*63+27)*1+lsi)*1] = fp601;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = fp35 * fp24;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp13;
LIBINT2_REALTYPE fp365;
fp365 = 2.0000000000000000e+00 * fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp35 * fp24;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp10;
LIBINT2_REALTYPE fp366;
fp366 = inteval->two_alpha0_ket[vi] * fp358;
LIBINT2_REALTYPE fp364;
fp364 = fp366 - fp365;
LIBINT2_REALTYPE fp603;
fp603 = 1.0000000000000000e+00 * fp364;
LIBINT2_REALTYPE fp361;
fp361 = fp35 * fp25;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp13;
LIBINT2_REALTYPE fp368;
fp368 = 2.0000000000000000e+00 * fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp35 * fp25;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp10;
LIBINT2_REALTYPE fp369;
fp369 = inteval->two_alpha0_ket[vi] * fp362;
LIBINT2_REALTYPE fp367;
fp367 = fp369 - fp368;
LIBINT2_REALTYPE fp604;
fp604 = inteval->two_alpha0_bra[vi] * fp367;
LIBINT2_REALTYPE fp602;
fp602 = fp604 - fp603;
target[((hsi*63+26)*1+lsi)*1] = fp602;
LIBINT2_REALTYPE fp371;
fp371 = fp35 * fp22;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp11;
LIBINT2_REALTYPE fp379;
fp379 = 1.0000000000000000e+00 * fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp35 * fp22;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp12;
LIBINT2_REALTYPE fp380;
fp380 = inteval->two_alpha0_ket[vi] * fp372;
LIBINT2_REALTYPE fp378;
fp378 = fp380 - fp379;
LIBINT2_REALTYPE fp606;
fp606 = 1.0000000000000000e+00 * fp378;
LIBINT2_REALTYPE fp375;
fp375 = fp35 * fp23;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp11;
LIBINT2_REALTYPE fp382;
fp382 = 1.0000000000000000e+00 * fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp35 * fp23;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp12;
LIBINT2_REALTYPE fp383;
fp383 = inteval->two_alpha0_ket[vi] * fp376;
LIBINT2_REALTYPE fp381;
fp381 = fp383 - fp382;
LIBINT2_REALTYPE fp607;
fp607 = inteval->two_alpha0_bra[vi] * fp381;
LIBINT2_REALTYPE fp605;
fp605 = fp607 - fp606;
target[((hsi*63+25)*1+lsi)*1] = fp605;
LIBINT2_REALTYPE fp385;
fp385 = fp35 * fp20;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp13;
LIBINT2_REALTYPE fp389;
fp389 = 1.0000000000000000e+00 * fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp35 * fp21;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp13;
LIBINT2_REALTYPE fp390;
fp390 = inteval->two_alpha0_bra[vi] * fp386;
LIBINT2_REALTYPE fp388;
fp388 = fp390 - fp389;
LIBINT2_REALTYPE fp608;
fp608 = inteval->two_alpha0_ket[vi] * fp388;
target[((hsi*63+24)*1+lsi)*1] = fp608;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp392;
fp392 = fp36 * fp24;
LIBINT2_REALTYPE fp391;
fp391 = fp392 * fp11;
LIBINT2_REALTYPE fp400;
fp400 = 1.0000000000000000e+00 * fp391;
LIBINT2_REALTYPE fp394;
fp394 = fp36 * fp24;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * fp12;
LIBINT2_REALTYPE fp401;
fp401 = inteval->two_alpha0_ket[vi] * fp393;
LIBINT2_REALTYPE fp399;
fp399 = fp401 - fp400;
LIBINT2_REALTYPE fp610;
fp610 = 1.0000000000000000e+00 * fp399;
LIBINT2_REALTYPE fp396;
fp396 = fp36 * fp25;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * fp11;
LIBINT2_REALTYPE fp403;
fp403 = 1.0000000000000000e+00 * fp395;
LIBINT2_REALTYPE fp398;
fp398 = fp36 * fp25;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * fp12;
LIBINT2_REALTYPE fp404;
fp404 = inteval->two_alpha0_ket[vi] * fp397;
LIBINT2_REALTYPE fp402;
fp402 = fp404 - fp403;
LIBINT2_REALTYPE fp611;
fp611 = inteval->two_alpha0_bra[vi] * fp402;
LIBINT2_REALTYPE fp609;
fp609 = fp611 - fp610;
target[((hsi*63+23)*1+lsi)*1] = fp609;
LIBINT2_REALTYPE fp406;
fp406 = fp36 * fp22;
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp13;
LIBINT2_REALTYPE fp410;
fp410 = 1.0000000000000000e+00 * fp405;
LIBINT2_REALTYPE fp408;
fp408 = fp36 * fp23;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * fp13;
LIBINT2_REALTYPE fp411;
fp411 = inteval->two_alpha0_bra[vi] * fp407;
LIBINT2_REALTYPE fp409;
fp409 = fp411 - fp410;
LIBINT2_REALTYPE fp612;
fp612 = inteval->two_alpha0_ket[vi] * fp409;
target[((hsi*63+22)*1+lsi)*1] = fp612;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp413;
fp413 = fp37 * fp24;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp13;
LIBINT2_REALTYPE fp417;
fp417 = 1.0000000000000000e+00 * fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp37 * fp25;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp13;
LIBINT2_REALTYPE fp418;
fp418 = inteval->two_alpha0_bra[vi] * fp414;
LIBINT2_REALTYPE fp416;
fp416 = fp418 - fp417;
LIBINT2_REALTYPE fp613;
fp613 = inteval->two_alpha0_ket[vi] * fp416;
target[((hsi*63+21)*1+lsi)*1] = fp613;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp420;
fp420 = fp38 * fp31;
LIBINT2_REALTYPE fp419;
fp419 = fp420 * fp9;
LIBINT2_REALTYPE fp424;
fp424 = 5.0000000000000000e+00 * fp419;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp422;
fp422 = fp38 * fp31;
LIBINT2_REALTYPE fp421;
fp421 = fp422 * fp7;
LIBINT2_REALTYPE fp425;
fp425 = inteval->two_alpha0_ket[vi] * fp421;
LIBINT2_REALTYPE fp423;
fp423 = fp425 - fp424;
LIBINT2_REALTYPE fp614;
fp614 = inteval->two_alpha0_bra[vi] * fp423;
target[((hsi*63+20)*1+lsi)*1] = fp614;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = fp38 * fp30;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp10;
LIBINT2_REALTYPE fp431;
fp431 = 4.0000000000000000e+00 * fp426;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp429;
fp429 = fp38 * fp30;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp8;
LIBINT2_REALTYPE fp432;
fp432 = inteval->two_alpha0_ket[vi] * fp428;
LIBINT2_REALTYPE fp430;
fp430 = fp432 - fp431;
LIBINT2_REALTYPE fp615;
fp615 = inteval->two_alpha0_bra[vi] * fp430;
target[((hsi*63+19)*1+lsi)*1] = fp615;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp434;
fp434 = fp38 * fp29;
LIBINT2_REALTYPE fp433;
fp433 = fp434 * fp12;
LIBINT2_REALTYPE fp438;
fp438 = 3.0000000000000000e+00 * fp433;
LIBINT2_REALTYPE fp436;
fp436 = fp38 * fp29;
LIBINT2_REALTYPE fp435;
fp435 = fp436 * fp9;
LIBINT2_REALTYPE fp439;
fp439 = inteval->two_alpha0_ket[vi] * fp435;
LIBINT2_REALTYPE fp437;
fp437 = fp439 - fp438;
LIBINT2_REALTYPE fp616;
fp616 = inteval->two_alpha0_bra[vi] * fp437;
target[((hsi*63+18)*1+lsi)*1] = fp616;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp441;
fp441 = fp38 * fp28;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp13;
LIBINT2_REALTYPE fp445;
fp445 = 2.0000000000000000e+00 * fp440;
LIBINT2_REALTYPE fp443;
fp443 = fp38 * fp28;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp10;
LIBINT2_REALTYPE fp446;
fp446 = inteval->two_alpha0_ket[vi] * fp442;
LIBINT2_REALTYPE fp444;
fp444 = fp446 - fp445;
LIBINT2_REALTYPE fp617;
fp617 = inteval->two_alpha0_bra[vi] * fp444;
target[((hsi*63+17)*1+lsi)*1] = fp617;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp540;
fp540 = fp43 * fp31;
LIBINT2_REALTYPE fp539;
fp539 = fp540 * fp13;
LIBINT2_REALTYPE fp541;
fp541 = inteval->two_alpha0_ket[vi] * fp539;
LIBINT2_REALTYPE fp634;
fp634 = inteval->two_alpha0_bra[vi] * fp541;
target[((hsi*63+0)*1+lsi)*1] = fp634;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp455;
fp455 = fp38 * fp26;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp13;
LIBINT2_REALTYPE fp456;
fp456 = inteval->two_alpha0_ket[vi] * fp454;
LIBINT2_REALTYPE fp619;
fp619 = inteval->two_alpha0_bra[vi] * fp456;
target[((hsi*63+15)*1+lsi)*1] = fp619;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp458;
fp458 = fp39 * fp31;
LIBINT2_REALTYPE fp457;
fp457 = fp458 * fp10;
LIBINT2_REALTYPE fp462;
fp462 = 4.0000000000000000e+00 * fp457;
LIBINT2_REALTYPE fp460;
fp460 = fp39 * fp31;
LIBINT2_REALTYPE fp459;
fp459 = fp460 * fp8;
LIBINT2_REALTYPE fp463;
fp463 = inteval->two_alpha0_ket[vi] * fp459;
LIBINT2_REALTYPE fp461;
fp461 = fp463 - fp462;
LIBINT2_REALTYPE fp620;
fp620 = inteval->two_alpha0_bra[vi] * fp461;
target[((hsi*63+14)*1+lsi)*1] = fp620;
LIBINT2_REALTYPE fp465;
fp465 = fp39 * fp30;
LIBINT2_REALTYPE fp464;
fp464 = fp465 * fp12;
LIBINT2_REALTYPE fp469;
fp469 = 3.0000000000000000e+00 * fp464;
LIBINT2_REALTYPE fp467;
fp467 = fp39 * fp30;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp9;
LIBINT2_REALTYPE fp470;
fp470 = inteval->two_alpha0_ket[vi] * fp466;
LIBINT2_REALTYPE fp468;
fp468 = fp470 - fp469;
LIBINT2_REALTYPE fp621;
fp621 = inteval->two_alpha0_bra[vi] * fp468;
target[((hsi*63+13)*1+lsi)*1] = fp621;
LIBINT2_REALTYPE fp472;
fp472 = fp39 * fp29;
LIBINT2_REALTYPE fp471;
fp471 = fp472 * fp13;
LIBINT2_REALTYPE fp476;
fp476 = 2.0000000000000000e+00 * fp471;
LIBINT2_REALTYPE fp474;
fp474 = fp39 * fp29;
LIBINT2_REALTYPE fp473;
fp473 = fp474 * fp10;
LIBINT2_REALTYPE fp477;
fp477 = inteval->two_alpha0_ket[vi] * fp473;
LIBINT2_REALTYPE fp475;
fp475 = fp477 - fp476;
LIBINT2_REALTYPE fp622;
fp622 = inteval->two_alpha0_bra[vi] * fp475;
target[((hsi*63+12)*1+lsi)*1] = fp622;
LIBINT2_REALTYPE fp479;
fp479 = fp39 * fp28;
LIBINT2_REALTYPE fp478;
fp478 = fp479 * fp11;
LIBINT2_REALTYPE fp483;
fp483 = 1.0000000000000000e+00 * fp478;
LIBINT2_REALTYPE fp481;
fp481 = fp39 * fp28;
LIBINT2_REALTYPE fp480;
fp480 = fp481 * fp12;
LIBINT2_REALTYPE fp484;
fp484 = inteval->two_alpha0_ket[vi] * fp480;
LIBINT2_REALTYPE fp482;
fp482 = fp484 - fp483;
LIBINT2_REALTYPE fp623;
fp623 = inteval->two_alpha0_bra[vi] * fp482;
target[((hsi*63+11)*1+lsi)*1] = fp623;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp486;
fp486 = fp39 * fp27;
LIBINT2_REALTYPE fp485;
fp485 = fp486 * fp13;
LIBINT2_REALTYPE fp487;
fp487 = inteval->two_alpha0_ket[vi] * fp485;
LIBINT2_REALTYPE fp624;
fp624 = inteval->two_alpha0_bra[vi] * fp487;
target[((hsi*63+10)*1+lsi)*1] = fp624;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp489;
fp489 = fp40 * fp31;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp12;
LIBINT2_REALTYPE fp493;
fp493 = 3.0000000000000000e+00 * fp488;
LIBINT2_REALTYPE fp491;
fp491 = fp40 * fp31;
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp9;
LIBINT2_REALTYPE fp494;
fp494 = inteval->two_alpha0_ket[vi] * fp490;
LIBINT2_REALTYPE fp492;
fp492 = fp494 - fp493;
LIBINT2_REALTYPE fp625;
fp625 = inteval->two_alpha0_bra[vi] * fp492;
target[((hsi*63+9)*1+lsi)*1] = fp625;
LIBINT2_REALTYPE fp496;
fp496 = fp40 * fp30;
LIBINT2_REALTYPE fp495;
fp495 = fp496 * fp13;
LIBINT2_REALTYPE fp500;
fp500 = 2.0000000000000000e+00 * fp495;
LIBINT2_REALTYPE fp498;
fp498 = fp40 * fp30;
LIBINT2_REALTYPE fp497;
fp497 = fp498 * fp10;
LIBINT2_REALTYPE fp501;
fp501 = inteval->two_alpha0_ket[vi] * fp497;
LIBINT2_REALTYPE fp499;
fp499 = fp501 - fp500;
LIBINT2_REALTYPE fp626;
fp626 = inteval->two_alpha0_bra[vi] * fp499;
target[((hsi*63+8)*1+lsi)*1] = fp626;
LIBINT2_REALTYPE fp503;
fp503 = fp40 * fp29;
LIBINT2_REALTYPE fp502;
fp502 = fp503 * fp11;
LIBINT2_REALTYPE fp507;
fp507 = 1.0000000000000000e+00 * fp502;
LIBINT2_REALTYPE fp505;
fp505 = fp40 * fp29;
LIBINT2_REALTYPE fp504;
fp504 = fp505 * fp12;
LIBINT2_REALTYPE fp508;
fp508 = inteval->two_alpha0_ket[vi] * fp504;
LIBINT2_REALTYPE fp506;
fp506 = fp508 - fp507;
LIBINT2_REALTYPE fp627;
fp627 = inteval->two_alpha0_bra[vi] * fp506;
target[((hsi*63+7)*1+lsi)*1] = fp627;
LIBINT2_REALTYPE fp510;
fp510 = fp40 * fp28;
LIBINT2_REALTYPE fp509;
fp509 = fp510 * fp13;
LIBINT2_REALTYPE fp511;
fp511 = inteval->two_alpha0_ket[vi] * fp509;
LIBINT2_REALTYPE fp628;
fp628 = inteval->two_alpha0_bra[vi] * fp511;
target[((hsi*63+6)*1+lsi)*1] = fp628;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp513;
fp513 = fp41 * fp31;
LIBINT2_REALTYPE fp512;
fp512 = fp513 * fp13;
LIBINT2_REALTYPE fp517;
fp517 = 2.0000000000000000e+00 * fp512;
LIBINT2_REALTYPE fp515;
fp515 = fp41 * fp31;
LIBINT2_REALTYPE fp514;
fp514 = fp515 * fp10;
LIBINT2_REALTYPE fp518;
fp518 = inteval->two_alpha0_ket[vi] * fp514;
LIBINT2_REALTYPE fp516;
fp516 = fp518 - fp517;
LIBINT2_REALTYPE fp629;
fp629 = inteval->two_alpha0_bra[vi] * fp516;
target[((hsi*63+5)*1+lsi)*1] = fp629;
LIBINT2_REALTYPE fp520;
fp520 = fp41 * fp30;
LIBINT2_REALTYPE fp519;
fp519 = fp520 * fp11;
LIBINT2_REALTYPE fp524;
fp524 = 1.0000000000000000e+00 * fp519;
LIBINT2_REALTYPE fp522;
fp522 = fp41 * fp30;
LIBINT2_REALTYPE fp521;
fp521 = fp522 * fp12;
LIBINT2_REALTYPE fp525;
fp525 = inteval->two_alpha0_ket[vi] * fp521;
LIBINT2_REALTYPE fp523;
fp523 = fp525 - fp524;
LIBINT2_REALTYPE fp630;
fp630 = inteval->two_alpha0_bra[vi] * fp523;
target[((hsi*63+4)*1+lsi)*1] = fp630;
LIBINT2_REALTYPE fp527;
fp527 = fp41 * fp29;
LIBINT2_REALTYPE fp526;
fp526 = fp527 * fp13;
LIBINT2_REALTYPE fp528;
fp528 = inteval->two_alpha0_ket[vi] * fp526;
LIBINT2_REALTYPE fp631;
fp631 = inteval->two_alpha0_bra[vi] * fp528;
target[((hsi*63+3)*1+lsi)*1] = fp631;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp530;
fp530 = fp42 * fp31;
LIBINT2_REALTYPE fp529;
fp529 = fp530 * fp11;
LIBINT2_REALTYPE fp534;
fp534 = 1.0000000000000000e+00 * fp529;
LIBINT2_REALTYPE fp532;
fp532 = fp42 * fp31;
LIBINT2_REALTYPE fp531;
fp531 = fp532 * fp12;
LIBINT2_REALTYPE fp535;
fp535 = inteval->two_alpha0_ket[vi] * fp531;
LIBINT2_REALTYPE fp533;
fp533 = fp535 - fp534;
LIBINT2_REALTYPE fp632;
fp632 = inteval->two_alpha0_bra[vi] * fp533;
target[((hsi*63+2)*1+lsi)*1] = fp632;
LIBINT2_REALTYPE fp537;
fp537 = fp42 * fp30;
LIBINT2_REALTYPE fp536;
fp536 = fp537 * fp13;
LIBINT2_REALTYPE fp538;
fp538 = inteval->two_alpha0_ket[vi] * fp536;
LIBINT2_REALTYPE fp633;
fp633 = inteval->two_alpha0_bra[vi] * fp538;
target[((hsi*63+1)*1+lsi)*1] = fp633;
LIBINT2_REALTYPE fp448;
fp448 = fp38 * fp27;
LIBINT2_REALTYPE fp447;
fp447 = fp448 * fp11;
LIBINT2_REALTYPE fp452;
fp452 = 1.0000000000000000e+00 * fp447;
LIBINT2_REALTYPE fp450;
fp450 = fp38 * fp27;
LIBINT2_REALTYPE fp449;
fp449 = fp450 * fp12;
LIBINT2_REALTYPE fp453;
fp453 = inteval->two_alpha0_ket[vi] * fp449;
LIBINT2_REALTYPE fp451;
fp451 = fp453 - fp452;
LIBINT2_REALTYPE fp618;
fp618 = inteval->two_alpha0_bra[vi] * fp451;
target[((hsi*63+16)*1+lsi)*1] = fp618;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp32 * fp31;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp2;
LIBINT2_REALTYPE fp49;
fp49 = 5.0000000000000000e+00 * fp44;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp32 * fp31;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp0;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_ket[vi] * fp46;
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
LIBINT2_REALTYPE fp542;
fp542 = inteval->two_alpha0_bra[vi] * fp48;
target[((hsi*63+62)*1+lsi)*1] = fp542;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp32 * fp30;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp3;
LIBINT2_REALTYPE fp56;
fp56 = 4.0000000000000000e+00 * fp51;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp32 * fp30;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp1;
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_ket[vi] * fp53;
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
LIBINT2_REALTYPE fp543;
fp543 = inteval->two_alpha0_bra[vi] * fp55;
target[((hsi*63+61)*1+lsi)*1] = fp543;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp32 * fp29;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp5;
LIBINT2_REALTYPE fp63;
fp63 = 3.0000000000000000e+00 * fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp32 * fp29;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp2;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_ket[vi] * fp60;
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
LIBINT2_REALTYPE fp544;
fp544 = inteval->two_alpha0_bra[vi] * fp62;
target[((hsi*63+60)*1+lsi)*1] = fp544;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp32 * fp28;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp6;
LIBINT2_REALTYPE fp70;
fp70 = 2.0000000000000000e+00 * fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp32 * fp28;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp3;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_ket[vi] * fp67;
LIBINT2_REALTYPE fp69;
fp69 = fp71 - fp70;
LIBINT2_REALTYPE fp545;
fp545 = inteval->two_alpha0_bra[vi] * fp69;
target[((hsi*63+59)*1+lsi)*1] = fp545;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp32 * fp27;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp4;
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp32 * fp27;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp5;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_ket[vi] * fp74;
LIBINT2_REALTYPE fp76;
fp76 = fp78 - fp77;
LIBINT2_REALTYPE fp546;
fp546 = inteval->two_alpha0_bra[vi] * fp76;
target[((hsi*63+58)*1+lsi)*1] = fp546;
LIBINT2_REALTYPE fp80;
fp80 = fp32 * fp26;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp6;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_ket[vi] * fp79;
LIBINT2_REALTYPE fp547;
fp547 = inteval->two_alpha0_bra[vi] * fp81;
target[((hsi*63+57)*1+lsi)*1] = fp547;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp33 * fp31;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp3;
LIBINT2_REALTYPE fp87;
fp87 = 4.0000000000000000e+00 * fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp33 * fp31;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp1;
LIBINT2_REALTYPE fp88;
fp88 = inteval->two_alpha0_ket[vi] * fp84;
LIBINT2_REALTYPE fp86;
fp86 = fp88 - fp87;
LIBINT2_REALTYPE fp548;
fp548 = inteval->two_alpha0_bra[vi] * fp86;
target[((hsi*63+56)*1+lsi)*1] = fp548;
LIBINT2_REALTYPE fp90;
fp90 = fp33 * fp30;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp5;
LIBINT2_REALTYPE fp94;
fp94 = 3.0000000000000000e+00 * fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp33 * fp30;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp2;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_ket[vi] * fp91;
LIBINT2_REALTYPE fp93;
fp93 = fp95 - fp94;
LIBINT2_REALTYPE fp549;
fp549 = inteval->two_alpha0_bra[vi] * fp93;
target[((hsi*63+55)*1+lsi)*1] = fp549;
LIBINT2_REALTYPE fp97;
fp97 = fp33 * fp29;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp6;
LIBINT2_REALTYPE fp101;
fp101 = 2.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp33 * fp29;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp3;
LIBINT2_REALTYPE fp102;
fp102 = inteval->two_alpha0_ket[vi] * fp98;
LIBINT2_REALTYPE fp100;
fp100 = fp102 - fp101;
LIBINT2_REALTYPE fp550;
fp550 = inteval->two_alpha0_bra[vi] * fp100;
target[((hsi*63+54)*1+lsi)*1] = fp550;
LIBINT2_REALTYPE fp104;
fp104 = fp33 * fp28;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp4;
LIBINT2_REALTYPE fp108;
fp108 = 1.0000000000000000e+00 * fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp33 * fp28;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp5;
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha0_ket[vi] * fp105;
LIBINT2_REALTYPE fp107;
fp107 = fp109 - fp108;
LIBINT2_REALTYPE fp551;
fp551 = inteval->two_alpha0_bra[vi] * fp107;
target[((hsi*63+53)*1+lsi)*1] = fp551;
LIBINT2_REALTYPE fp111;
fp111 = fp33 * fp27;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp6;
LIBINT2_REALTYPE fp112;
fp112 = inteval->two_alpha0_ket[vi] * fp110;
LIBINT2_REALTYPE fp552;
fp552 = inteval->two_alpha0_bra[vi] * fp112;
target[((hsi*63+52)*1+lsi)*1] = fp552;
LIBINT2_REALTYPE fp114;
fp114 = fp34 * fp31;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp5;
LIBINT2_REALTYPE fp118;
fp118 = 3.0000000000000000e+00 * fp113;
LIBINT2_REALTYPE fp116;
fp116 = fp34 * fp31;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp2;
LIBINT2_REALTYPE fp119;
fp119 = inteval->two_alpha0_ket[vi] * fp115;
LIBINT2_REALTYPE fp117;
fp117 = fp119 - fp118;
LIBINT2_REALTYPE fp553;
fp553 = inteval->two_alpha0_bra[vi] * fp117;
target[((hsi*63+51)*1+lsi)*1] = fp553;
LIBINT2_REALTYPE fp121;
fp121 = fp34 * fp30;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp6;
LIBINT2_REALTYPE fp125;
fp125 = 2.0000000000000000e+00 * fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp34 * fp30;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp3;
LIBINT2_REALTYPE fp126;
fp126 = inteval->two_alpha0_ket[vi] * fp122;
LIBINT2_REALTYPE fp124;
fp124 = fp126 - fp125;
LIBINT2_REALTYPE fp554;
fp554 = inteval->two_alpha0_bra[vi] * fp124;
target[((hsi*63+50)*1+lsi)*1] = fp554;
LIBINT2_REALTYPE fp128;
fp128 = fp34 * fp29;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp4;
LIBINT2_REALTYPE fp132;
fp132 = 1.0000000000000000e+00 * fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp34 * fp29;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp5;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha0_ket[vi] * fp129;
LIBINT2_REALTYPE fp131;
fp131 = fp133 - fp132;
LIBINT2_REALTYPE fp555;
fp555 = inteval->two_alpha0_bra[vi] * fp131;
target[((hsi*63+49)*1+lsi)*1] = fp555;
LIBINT2_REALTYPE fp135;
fp135 = fp34 * fp28;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp6;
LIBINT2_REALTYPE fp136;
fp136 = inteval->two_alpha0_ket[vi] * fp134;
LIBINT2_REALTYPE fp556;
fp556 = inteval->two_alpha0_bra[vi] * fp136;
target[((hsi*63+48)*1+lsi)*1] = fp556;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp33 * fp16;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp13;
LIBINT2_REALTYPE fp305;
fp305 = 1.0000000000000000e+00 * fp300;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp33 * fp17;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp13;
LIBINT2_REALTYPE fp306;
fp306 = inteval->two_alpha0_bra[vi] * fp302;
LIBINT2_REALTYPE fp304;
fp304 = fp306 - fp305;
LIBINT2_REALTYPE fp591;
fp591 = inteval->two_alpha0_ket[vi] * fp304;
target[((hsi*63+31)*1+lsi)*1] = fp591;
LIBINT2_REALTYPE fp145;
fp145 = fp35 * fp30;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp4;
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp35 * fp30;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp5;
LIBINT2_REALTYPE fp150;
fp150 = inteval->two_alpha0_ket[vi] * fp146;
LIBINT2_REALTYPE fp148;
fp148 = fp150 - fp149;
LIBINT2_REALTYPE fp558;
fp558 = inteval->two_alpha0_bra[vi] * fp148;
target[((hsi*63+46)*1+lsi)*1] = fp558;
LIBINT2_REALTYPE fp152;
fp152 = fp35 * fp29;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp6;
LIBINT2_REALTYPE fp153;
fp153 = inteval->two_alpha0_ket[vi] * fp151;
LIBINT2_REALTYPE fp559;
fp559 = inteval->two_alpha0_bra[vi] * fp153;
target[((hsi*63+45)*1+lsi)*1] = fp559;
LIBINT2_REALTYPE fp155;
fp155 = fp36 * fp31;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp4;
LIBINT2_REALTYPE fp159;
fp159 = 1.0000000000000000e+00 * fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp36 * fp31;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp5;
LIBINT2_REALTYPE fp160;
fp160 = inteval->two_alpha0_ket[vi] * fp156;
LIBINT2_REALTYPE fp158;
fp158 = fp160 - fp159;
LIBINT2_REALTYPE fp560;
fp560 = inteval->two_alpha0_bra[vi] * fp158;
target[((hsi*63+44)*1+lsi)*1] = fp560;
LIBINT2_REALTYPE fp162;
fp162 = fp36 * fp30;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp6;
LIBINT2_REALTYPE fp163;
fp163 = inteval->two_alpha0_ket[vi] * fp161;
LIBINT2_REALTYPE fp561;
fp561 = inteval->two_alpha0_bra[vi] * fp163;
target[((hsi*63+43)*1+lsi)*1] = fp561;
LIBINT2_REALTYPE fp165;
fp165 = fp37 * fp31;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp6;
LIBINT2_REALTYPE fp166;
fp166 = inteval->two_alpha0_ket[vi] * fp164;
LIBINT2_REALTYPE fp562;
fp562 = inteval->two_alpha0_bra[vi] * fp166;
target[((hsi*63+42)*1+lsi)*1] = fp562;
LIBINT2_REALTYPE fp168;
fp168 = fp32 * fp24;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp9;
LIBINT2_REALTYPE fp176;
fp176 = 5.0000000000000000e+00 * fp167;
LIBINT2_REALTYPE fp170;
fp170 = fp32 * fp24;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp7;
LIBINT2_REALTYPE fp177;
fp177 = inteval->two_alpha0_ket[vi] * fp169;
LIBINT2_REALTYPE fp175;
fp175 = fp177 - fp176;
LIBINT2_REALTYPE fp564;
fp564 = 1.0000000000000000e+00 * fp175;
LIBINT2_REALTYPE fp172;
fp172 = fp32 * fp25;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp9;
LIBINT2_REALTYPE fp179;
fp179 = 5.0000000000000000e+00 * fp171;
LIBINT2_REALTYPE fp174;
fp174 = fp32 * fp25;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp7;
LIBINT2_REALTYPE fp180;
fp180 = inteval->two_alpha0_ket[vi] * fp173;
LIBINT2_REALTYPE fp178;
fp178 = fp180 - fp179;
LIBINT2_REALTYPE fp565;
fp565 = inteval->two_alpha0_bra[vi] * fp178;
LIBINT2_REALTYPE fp563;
fp563 = fp565 - fp564;
target[((hsi*63+41)*1+lsi)*1] = fp563;
LIBINT2_REALTYPE fp182;
fp182 = fp32 * fp22;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp10;
LIBINT2_REALTYPE fp190;
fp190 = 4.0000000000000000e+00 * fp181;
LIBINT2_REALTYPE fp184;
fp184 = fp32 * fp22;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp8;
LIBINT2_REALTYPE fp191;
fp191 = inteval->two_alpha0_ket[vi] * fp183;
LIBINT2_REALTYPE fp189;
fp189 = fp191 - fp190;
LIBINT2_REALTYPE fp567;
fp567 = 1.0000000000000000e+00 * fp189;
LIBINT2_REALTYPE fp186;
fp186 = fp32 * fp23;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp10;
LIBINT2_REALTYPE fp193;
fp193 = 4.0000000000000000e+00 * fp185;
LIBINT2_REALTYPE fp188;
fp188 = fp32 * fp23;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp8;
LIBINT2_REALTYPE fp194;
fp194 = inteval->two_alpha0_ket[vi] * fp187;
LIBINT2_REALTYPE fp192;
fp192 = fp194 - fp193;
LIBINT2_REALTYPE fp568;
fp568 = inteval->two_alpha0_bra[vi] * fp192;
LIBINT2_REALTYPE fp566;
fp566 = fp568 - fp567;
target[((hsi*63+40)*1+lsi)*1] = fp566;
LIBINT2_REALTYPE fp196;
fp196 = fp32 * fp20;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp12;
LIBINT2_REALTYPE fp204;
fp204 = 3.0000000000000000e+00 * fp195;
LIBINT2_REALTYPE fp198;
fp198 = fp32 * fp20;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp9;
LIBINT2_REALTYPE fp205;
fp205 = inteval->two_alpha0_ket[vi] * fp197;
LIBINT2_REALTYPE fp203;
fp203 = fp205 - fp204;
LIBINT2_REALTYPE fp570;
fp570 = 1.0000000000000000e+00 * fp203;
LIBINT2_REALTYPE fp200;
fp200 = fp32 * fp21;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp12;
LIBINT2_REALTYPE fp207;
fp207 = 3.0000000000000000e+00 * fp199;
LIBINT2_REALTYPE fp202;
fp202 = fp32 * fp21;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp9;
LIBINT2_REALTYPE fp208;
fp208 = inteval->two_alpha0_ket[vi] * fp201;
LIBINT2_REALTYPE fp206;
fp206 = fp208 - fp207;
LIBINT2_REALTYPE fp571;
fp571 = inteval->two_alpha0_bra[vi] * fp206;
LIBINT2_REALTYPE fp569;
fp569 = fp571 - fp570;
target[((hsi*63+39)*1+lsi)*1] = fp569;
LIBINT2_REALTYPE fp210;
fp210 = fp32 * fp18;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp13;
LIBINT2_REALTYPE fp218;
fp218 = 2.0000000000000000e+00 * fp209;
LIBINT2_REALTYPE fp212;
fp212 = fp32 * fp18;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp10;
LIBINT2_REALTYPE fp219;
fp219 = inteval->two_alpha0_ket[vi] * fp211;
LIBINT2_REALTYPE fp217;
fp217 = fp219 - fp218;
LIBINT2_REALTYPE fp573;
fp573 = 1.0000000000000000e+00 * fp217;
LIBINT2_REALTYPE fp214;
fp214 = fp32 * fp19;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp13;
LIBINT2_REALTYPE fp221;
fp221 = 2.0000000000000000e+00 * fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp32 * fp19;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp10;
LIBINT2_REALTYPE fp222;
fp222 = inteval->two_alpha0_ket[vi] * fp215;
LIBINT2_REALTYPE fp220;
fp220 = fp222 - fp221;
LIBINT2_REALTYPE fp574;
fp574 = inteval->two_alpha0_bra[vi] * fp220;
LIBINT2_REALTYPE fp572;
fp572 = fp574 - fp573;
target[((hsi*63+38)*1+lsi)*1] = fp572;
LIBINT2_REALTYPE fp224;
fp224 = fp32 * fp16;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp11;
LIBINT2_REALTYPE fp232;
fp232 = 1.0000000000000000e+00 * fp223;
LIBINT2_REALTYPE fp226;
fp226 = fp32 * fp16;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp12;
LIBINT2_REALTYPE fp233;
fp233 = inteval->two_alpha0_ket[vi] * fp225;
LIBINT2_REALTYPE fp231;
fp231 = fp233 - fp232;
LIBINT2_REALTYPE fp576;
fp576 = 1.0000000000000000e+00 * fp231;
LIBINT2_REALTYPE fp228;
fp228 = fp32 * fp17;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp11;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * fp227;
LIBINT2_REALTYPE fp230;
fp230 = fp32 * fp17;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp12;
LIBINT2_REALTYPE fp236;
fp236 = inteval->two_alpha0_ket[vi] * fp229;
LIBINT2_REALTYPE fp234;
fp234 = fp236 - fp235;
LIBINT2_REALTYPE fp577;
fp577 = inteval->two_alpha0_bra[vi] * fp234;
LIBINT2_REALTYPE fp575;
fp575 = fp577 - fp576;
target[((hsi*63+37)*1+lsi)*1] = fp575;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp32 * fp14;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp13;
LIBINT2_REALTYPE fp242;
fp242 = 1.0000000000000000e+00 * fp237;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp32 * fp15;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp13;
LIBINT2_REALTYPE fp243;
fp243 = inteval->two_alpha0_bra[vi] * fp239;
LIBINT2_REALTYPE fp241;
fp241 = fp243 - fp242;
LIBINT2_REALTYPE fp578;
fp578 = inteval->two_alpha0_ket[vi] * fp241;
target[((hsi*63+36)*1+lsi)*1] = fp578;
LIBINT2_REALTYPE fp245;
fp245 = fp33 * fp24;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp10;
LIBINT2_REALTYPE fp253;
fp253 = 4.0000000000000000e+00 * fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp33 * fp24;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp8;
LIBINT2_REALTYPE fp254;
fp254 = inteval->two_alpha0_ket[vi] * fp246;
LIBINT2_REALTYPE fp252;
fp252 = fp254 - fp253;
LIBINT2_REALTYPE fp580;
fp580 = 1.0000000000000000e+00 * fp252;
LIBINT2_REALTYPE fp249;
fp249 = fp33 * fp25;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp10;
LIBINT2_REALTYPE fp256;
fp256 = 4.0000000000000000e+00 * fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp33 * fp25;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp8;
LIBINT2_REALTYPE fp257;
fp257 = inteval->two_alpha0_ket[vi] * fp250;
LIBINT2_REALTYPE fp255;
fp255 = fp257 - fp256;
LIBINT2_REALTYPE fp581;
fp581 = inteval->two_alpha0_bra[vi] * fp255;
LIBINT2_REALTYPE fp579;
fp579 = fp581 - fp580;
target[((hsi*63+35)*1+lsi)*1] = fp579;
LIBINT2_REALTYPE fp259;
fp259 = fp33 * fp22;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp12;
LIBINT2_REALTYPE fp267;
fp267 = 3.0000000000000000e+00 * fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp33 * fp22;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp9;
LIBINT2_REALTYPE fp268;
fp268 = inteval->two_alpha0_ket[vi] * fp260;
LIBINT2_REALTYPE fp266;
fp266 = fp268 - fp267;
LIBINT2_REALTYPE fp583;
fp583 = 1.0000000000000000e+00 * fp266;
LIBINT2_REALTYPE fp263;
fp263 = fp33 * fp23;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp12;
LIBINT2_REALTYPE fp270;
fp270 = 3.0000000000000000e+00 * fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp33 * fp23;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp9;
LIBINT2_REALTYPE fp271;
fp271 = inteval->two_alpha0_ket[vi] * fp264;
LIBINT2_REALTYPE fp269;
fp269 = fp271 - fp270;
LIBINT2_REALTYPE fp584;
fp584 = inteval->two_alpha0_bra[vi] * fp269;
LIBINT2_REALTYPE fp582;
fp582 = fp584 - fp583;
target[((hsi*63+34)*1+lsi)*1] = fp582;
LIBINT2_REALTYPE fp273;
fp273 = fp33 * fp20;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp13;
LIBINT2_REALTYPE fp281;
fp281 = 2.0000000000000000e+00 * fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp33 * fp20;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp10;
LIBINT2_REALTYPE fp282;
fp282 = inteval->two_alpha0_ket[vi] * fp274;
LIBINT2_REALTYPE fp280;
fp280 = fp282 - fp281;
LIBINT2_REALTYPE fp586;
fp586 = 1.0000000000000000e+00 * fp280;
LIBINT2_REALTYPE fp277;
fp277 = fp33 * fp21;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp13;
LIBINT2_REALTYPE fp284;
fp284 = 2.0000000000000000e+00 * fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp33 * fp21;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp10;
LIBINT2_REALTYPE fp285;
fp285 = inteval->two_alpha0_ket[vi] * fp278;
LIBINT2_REALTYPE fp283;
fp283 = fp285 - fp284;
LIBINT2_REALTYPE fp587;
fp587 = inteval->two_alpha0_bra[vi] * fp283;
LIBINT2_REALTYPE fp585;
fp585 = fp587 - fp586;
target[((hsi*63+33)*1+lsi)*1] = fp585;
LIBINT2_REALTYPE fp287;
fp287 = fp33 * fp18;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp11;
LIBINT2_REALTYPE fp295;
fp295 = 1.0000000000000000e+00 * fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp33 * fp18;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp12;
LIBINT2_REALTYPE fp296;
fp296 = inteval->two_alpha0_ket[vi] * fp288;
LIBINT2_REALTYPE fp294;
fp294 = fp296 - fp295;
LIBINT2_REALTYPE fp589;
fp589 = 1.0000000000000000e+00 * fp294;
LIBINT2_REALTYPE fp291;
fp291 = fp33 * fp19;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp11;
LIBINT2_REALTYPE fp298;
fp298 = 1.0000000000000000e+00 * fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp33 * fp19;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp12;
LIBINT2_REALTYPE fp299;
fp299 = inteval->two_alpha0_ket[vi] * fp292;
LIBINT2_REALTYPE fp297;
fp297 = fp299 - fp298;
LIBINT2_REALTYPE fp590;
fp590 = inteval->two_alpha0_bra[vi] * fp297;
LIBINT2_REALTYPE fp588;
fp588 = fp590 - fp589;
target[((hsi*63+32)*1+lsi)*1] = fp588;
LIBINT2_REALTYPE fp138;
fp138 = fp35 * fp31;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp6;
LIBINT2_REALTYPE fp142;
fp142 = 2.0000000000000000e+00 * fp137;
LIBINT2_REALTYPE fp140;
fp140 = fp35 * fp31;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp3;
LIBINT2_REALTYPE fp143;
fp143 = inteval->two_alpha0_ket[vi] * fp139;
LIBINT2_REALTYPE fp141;
fp141 = fp143 - fp142;
LIBINT2_REALTYPE fp557;
fp557 = inteval->two_alpha0_bra[vi] * fp141;
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