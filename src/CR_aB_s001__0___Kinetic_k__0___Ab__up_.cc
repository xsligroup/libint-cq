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
void CR_aB_s001__0___Kinetic_k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp56;
fp56 = 1.0000000000000000e+00 * src2[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * src2[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * src2[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * src2[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp63 - fp61;
LIBINT2_REALTYPE fp57;
fp57 = fp60 - fp58;
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
LIBINT2_REALTYPE fp319;
fp319 = src0[((hsi*27+2)*1+lsi)*1] * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp55;
LIBINT2_REALTYPE fp109;
fp109 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * src1[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp112 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * src1[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp110 - fp108;
LIBINT2_REALTYPE fp322;
fp322 = src0[((hsi*27+2)*1+lsi)*1] * fp107;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp139 * src0[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp140;
fp140 = fp141 * src0[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp140 - fp138;
LIBINT2_REALTYPE fp324;
fp324 = fp137 * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = fp324 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = fp323 + fp321;
LIBINT2_REALTYPE fp317;
fp317 = fp320 + fp318;
LIBINT2_REALTYPE fp479;
fp479 = inteval->two_alpha0_bra[vi] * fp317;
target[((hsi*36+17)*1+lsi)*1] = fp479;
LIBINT2_REALTYPE fp67;
fp67 = 5.0000000000000000e-01 * src2[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * src2[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * src2[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp75 * src2[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp74 - fp72;
LIBINT2_REALTYPE fp68;
fp68 = fp71 - fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp327;
fp327 = src0[((hsi*27+2)*1+lsi)*1] * src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp66;
LIBINT2_REALTYPE fp103;
fp103 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp103 * src1[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp106 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * src1[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp104 - fp102;
LIBINT2_REALTYPE fp330;
fp330 = src0[((hsi*27+2)*1+lsi)*1] * fp101;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = fp137 * src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp332 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = fp331 + fp329;
LIBINT2_REALTYPE fp325;
fp325 = fp328 + fp326;
LIBINT2_REALTYPE fp480;
fp480 = inteval->two_alpha0_bra[vi] * fp325;
target[((hsi*36+16)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp79;
fp79 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * src2[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp80;
fp80 = fp81 * src2[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp80 - fp78;
LIBINT2_REALTYPE fp335;
fp335 = src0[((hsi*27+2)*1+lsi)*1] * src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp77;
LIBINT2_REALTYPE fp97;
fp97 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * src1[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * src1[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp98 - fp96;
LIBINT2_REALTYPE fp338;
fp338 = src0[((hsi*27+2)*1+lsi)*1] * fp95;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp137 * src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = fp340 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp339 + fp337;
LIBINT2_REALTYPE fp333;
fp333 = fp336 + fp334;
LIBINT2_REALTYPE fp481;
fp481 = inteval->two_alpha0_bra[vi] * fp333;
target[((hsi*36+15)*1+lsi)*1] = fp481;
LIBINT2_REALTYPE fp34;
fp34 = 2.0000000000000000e+00 * src2[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * src2[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * src2[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * src2[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 - fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 - fp36;
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp343;
fp343 = src0[((hsi*27+3)*1+lsi)*1] * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp33;
LIBINT2_REALTYPE fp127;
fp127 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp126;
fp126 = fp127 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * src1[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = src0[((hsi*27+3)*1+lsi)*1] * fp125;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp144;
fp144 = fp145 * src0[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp147;
fp147 = fp148 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * src0[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp146 - fp144;
LIBINT2_REALTYPE fp348;
fp348 = fp143 * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp347;
fp347 = fp348 * src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = fp347 + fp345;
LIBINT2_REALTYPE fp341;
fp341 = fp344 + fp342;
LIBINT2_REALTYPE fp482;
fp482 = inteval->two_alpha0_bra[vi] * fp341;
target[((hsi*36+14)*1+lsi)*1] = fp482;
LIBINT2_REALTYPE fp45;
fp45 = 1.5000000000000000e+00 * src2[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * src2[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * src2[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * src2[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp52 - fp50;
LIBINT2_REALTYPE fp46;
fp46 = fp49 - fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp351;
fp351 = src0[((hsi*27+3)*1+lsi)*1] * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp44;
LIBINT2_REALTYPE fp121;
fp121 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src1[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp123;
fp123 = fp124 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp122;
fp122 = fp123 * src1[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp122 - fp120;
LIBINT2_REALTYPE fp354;
fp354 = src0[((hsi*27+3)*1+lsi)*1] * fp119;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp143 * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = fp356 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = fp355 + fp353;
LIBINT2_REALTYPE fp349;
fp349 = fp352 + fp350;
LIBINT2_REALTYPE fp483;
fp483 = inteval->two_alpha0_bra[vi] * fp349;
target[((hsi*36+13)*1+lsi)*1] = fp483;
LIBINT2_REALTYPE fp359;
fp359 = src0[((hsi*27+3)*1+lsi)*1] * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp55;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * src1[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * src1[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp116 - fp114;
LIBINT2_REALTYPE fp362;
fp362 = src0[((hsi*27+3)*1+lsi)*1] * fp113;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = fp143 * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = fp364 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = fp363 + fp361;
LIBINT2_REALTYPE fp357;
fp357 = fp360 + fp358;
LIBINT2_REALTYPE fp484;
fp484 = inteval->two_alpha0_bra[vi] * fp357;
target[((hsi*36+12)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp367;
fp367 = src0[((hsi*27+3)*1+lsi)*1] * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp66;
LIBINT2_REALTYPE fp370;
fp370 = src0[((hsi*27+3)*1+lsi)*1] * fp107;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = fp143 * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = fp372 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = fp371 + fp369;
LIBINT2_REALTYPE fp365;
fp365 = fp368 + fp366;
LIBINT2_REALTYPE fp485;
fp485 = inteval->two_alpha0_bra[vi] * fp365;
target[((hsi*36+11)*1+lsi)*1] = fp485;
LIBINT2_REALTYPE fp375;
fp375 = src0[((hsi*27+3)*1+lsi)*1] * src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp77;
LIBINT2_REALTYPE fp378;
fp378 = src0[((hsi*27+3)*1+lsi)*1] * fp101;
LIBINT2_REALTYPE fp377;
fp377 = fp378 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = fp143 * src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp379;
fp379 = fp380 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = fp379 + fp377;
LIBINT2_REALTYPE fp373;
fp373 = fp376 + fp374;
LIBINT2_REALTYPE fp486;
fp486 = inteval->two_alpha0_bra[vi] * fp373;
target[((hsi*36+10)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp455;
fp455 = src0[((hsi*27+7)*1+lsi)*1] * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp77;
LIBINT2_REALTYPE fp458;
fp458 = src0[((hsi*27+7)*1+lsi)*1] * fp125;
LIBINT2_REALTYPE fp457;
fp457 = fp458 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = 3.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp168;
fp168 = fp169 * src0[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp171;
fp171 = fp172 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * src0[((hsi*27+17)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp170 - fp168;
LIBINT2_REALTYPE fp460;
fp460 = fp167 * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp459;
fp459 = fp460 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp456;
fp456 = fp459 + fp457;
LIBINT2_REALTYPE fp453;
fp453 = fp456 + fp454;
LIBINT2_REALTYPE fp496;
fp496 = inteval->two_alpha0_bra[vi] * fp453;
target[((hsi*36+0)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp391;
fp391 = src0[((hsi*27+4)*1+lsi)*1] * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp55;
LIBINT2_REALTYPE fp394;
fp394 = src0[((hsi*27+4)*1+lsi)*1] * fp119;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp150;
fp150 = fp151 * src0[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp153;
fp153 = fp154 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * src0[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp152 - fp150;
LIBINT2_REALTYPE fp396;
fp396 = fp149 * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp395;
fp395 = fp396 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp392;
fp392 = fp395 + fp393;
LIBINT2_REALTYPE fp389;
fp389 = fp392 + fp390;
LIBINT2_REALTYPE fp488;
fp488 = inteval->two_alpha0_bra[vi] * fp389;
target[((hsi*36+8)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp399;
fp399 = src0[((hsi*27+4)*1+lsi)*1] * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp66;
LIBINT2_REALTYPE fp402;
fp402 = src0[((hsi*27+4)*1+lsi)*1] * fp113;
LIBINT2_REALTYPE fp401;
fp401 = fp402 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = fp149 * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = fp404 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp400;
fp400 = fp403 + fp401;
LIBINT2_REALTYPE fp397;
fp397 = fp400 + fp398;
LIBINT2_REALTYPE fp489;
fp489 = inteval->two_alpha0_bra[vi] * fp397;
target[((hsi*36+7)*1+lsi)*1] = fp489;
LIBINT2_REALTYPE fp407;
fp407 = src0[((hsi*27+4)*1+lsi)*1] * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp77;
LIBINT2_REALTYPE fp410;
fp410 = src0[((hsi*27+4)*1+lsi)*1] * fp107;
LIBINT2_REALTYPE fp409;
fp409 = fp410 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp412;
fp412 = fp149 * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = fp412 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp408;
fp408 = fp411 + fp409;
LIBINT2_REALTYPE fp405;
fp405 = fp408 + fp406;
LIBINT2_REALTYPE fp490;
fp490 = inteval->two_alpha0_bra[vi] * fp405;
target[((hsi*36+6)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp415;
fp415 = src0[((hsi*27+5)*1+lsi)*1] * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp55;
LIBINT2_REALTYPE fp418;
fp418 = src0[((hsi*27+5)*1+lsi)*1] * fp125;
LIBINT2_REALTYPE fp417;
fp417 = fp418 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * src0[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp158;
fp158 = fp159 * src0[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp158 - fp156;
LIBINT2_REALTYPE fp420;
fp420 = fp155 * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = fp420 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp416;
fp416 = fp419 + fp417;
LIBINT2_REALTYPE fp413;
fp413 = fp416 + fp414;
LIBINT2_REALTYPE fp491;
fp491 = inteval->two_alpha0_bra[vi] * fp413;
target[((hsi*36+5)*1+lsi)*1] = fp491;
LIBINT2_REALTYPE fp423;
fp423 = src0[((hsi*27+5)*1+lsi)*1] * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp66;
LIBINT2_REALTYPE fp426;
fp426 = src0[((hsi*27+5)*1+lsi)*1] * fp119;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
fp428 = fp155 * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = fp428 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp424;
fp424 = fp427 + fp425;
LIBINT2_REALTYPE fp421;
fp421 = fp424 + fp422;
LIBINT2_REALTYPE fp492;
fp492 = inteval->two_alpha0_bra[vi] * fp421;
target[((hsi*36+4)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp431;
fp431 = src0[((hsi*27+5)*1+lsi)*1] * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp77;
LIBINT2_REALTYPE fp434;
fp434 = src0[((hsi*27+5)*1+lsi)*1] * fp113;
LIBINT2_REALTYPE fp433;
fp433 = fp434 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp436;
fp436 = fp155 * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp435;
fp435 = fp436 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = fp435 + fp433;
LIBINT2_REALTYPE fp429;
fp429 = fp432 + fp430;
LIBINT2_REALTYPE fp493;
fp493 = inteval->two_alpha0_bra[vi] * fp429;
target[((hsi*36+3)*1+lsi)*1] = fp493;
LIBINT2_REALTYPE fp439;
fp439 = src0[((hsi*27+6)*1+lsi)*1] * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp66;
LIBINT2_REALTYPE fp442;
fp442 = src0[((hsi*27+6)*1+lsi)*1] * fp125;
LIBINT2_REALTYPE fp441;
fp441 = fp442 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 3.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp162;
fp162 = fp163 * src0[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp165;
fp165 = fp166 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp164;
fp164 = fp165 * src0[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp164 - fp162;
LIBINT2_REALTYPE fp444;
fp444 = fp161 * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp443;
fp443 = fp444 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp440;
fp440 = fp443 + fp441;
LIBINT2_REALTYPE fp437;
fp437 = fp440 + fp438;
LIBINT2_REALTYPE fp494;
fp494 = inteval->two_alpha0_bra[vi] * fp437;
target[((hsi*36+2)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp447;
fp447 = src0[((hsi*27+6)*1+lsi)*1] * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp77;
LIBINT2_REALTYPE fp450;
fp450 = src0[((hsi*27+6)*1+lsi)*1] * fp119;
LIBINT2_REALTYPE fp449;
fp449 = fp450 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp452;
fp452 = fp161 * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp451;
fp451 = fp452 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp448;
fp448 = fp451 + fp449;
LIBINT2_REALTYPE fp445;
fp445 = fp448 + fp446;
LIBINT2_REALTYPE fp495;
fp495 = inteval->two_alpha0_bra[vi] * fp445;
target[((hsi*36+1)*1+lsi)*1] = fp495;
LIBINT2_REALTYPE fp383;
fp383 = src0[((hsi*27+4)*1+lsi)*1] * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp44;
LIBINT2_REALTYPE fp386;
fp386 = src0[((hsi*27+4)*1+lsi)*1] * fp125;
LIBINT2_REALTYPE fp385;
fp385 = fp386 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = fp149 * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp387;
fp387 = fp388 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = fp387 + fp385;
LIBINT2_REALTYPE fp381;
fp381 = fp384 + fp382;
LIBINT2_REALTYPE fp487;
fp487 = inteval->two_alpha0_bra[vi] * fp381;
target[((hsi*36+9)*1+lsi)*1] = fp487;
LIBINT2_REALTYPE fp1;
fp1 = 3.5000000000000000e+00 * src2[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 3.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp4 * src2[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp6;
fp6 = fp7 * src2[((hsi*27+8)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * src2[((hsi*27+26)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp8 - fp6;
LIBINT2_REALTYPE fp2;
fp2 = fp5 - fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
LIBINT2_REALTYPE fp175;
fp175 = src0[((hsi*27+0)*1+lsi)*1] * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp0;
LIBINT2_REALTYPE fp178;
fp178 = src0[((hsi*27+0)*1+lsi)*1] * fp125;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * src2[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * src0[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp128 * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp180 * src2[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp179 + fp177;
LIBINT2_REALTYPE fp173;
fp173 = fp176 + fp174;
LIBINT2_REALTYPE fp461;
fp461 = inteval->two_alpha0_bra[vi] * fp173;
target[((hsi*36+35)*1+lsi)*1] = fp461;
LIBINT2_REALTYPE fp12;
fp12 = 3.0000000000000000e+00 * src2[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 3.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp14;
fp14 = fp15 * src2[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp18 * src2[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp21 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*27+25)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp19 - fp17;
LIBINT2_REALTYPE fp13;
fp13 = fp16 - fp14;
LIBINT2_REALTYPE fp11;
fp11 = fp13 + fp12;
LIBINT2_REALTYPE fp183;
fp183 = src0[((hsi*27+0)*1+lsi)*1] * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp11;
LIBINT2_REALTYPE fp186;
fp186 = src0[((hsi*27+0)*1+lsi)*1] * fp119;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * src2[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp128 * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp188 * src2[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
LIBINT2_REALTYPE fp181;
fp181 = fp184 + fp182;
LIBINT2_REALTYPE fp462;
fp462 = inteval->two_alpha0_bra[vi] * fp181;
target[((hsi*36+34)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp23;
fp23 = 2.5000000000000000e+00 * src2[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * src2[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src2[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * src2[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp30 - fp28;
LIBINT2_REALTYPE fp24;
fp24 = fp27 - fp25;
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
LIBINT2_REALTYPE fp191;
fp191 = src0[((hsi*27+0)*1+lsi)*1] * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp22;
LIBINT2_REALTYPE fp194;
fp194 = src0[((hsi*27+0)*1+lsi)*1] * fp113;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp128 * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp196 * src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp195 + fp193;
LIBINT2_REALTYPE fp189;
fp189 = fp192 + fp190;
LIBINT2_REALTYPE fp463;
fp463 = inteval->two_alpha0_bra[vi] * fp189;
target[((hsi*36+33)*1+lsi)*1] = fp463;
LIBINT2_REALTYPE fp199;
fp199 = src0[((hsi*27+0)*1+lsi)*1] * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp33;
LIBINT2_REALTYPE fp202;
fp202 = src0[((hsi*27+0)*1+lsi)*1] * fp107;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp128 * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp204 * src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp203 + fp201;
LIBINT2_REALTYPE fp197;
fp197 = fp200 + fp198;
LIBINT2_REALTYPE fp464;
fp464 = inteval->two_alpha0_bra[vi] * fp197;
target[((hsi*36+32)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp207;
fp207 = src0[((hsi*27+0)*1+lsi)*1] * src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp44;
LIBINT2_REALTYPE fp210;
fp210 = src0[((hsi*27+0)*1+lsi)*1] * fp101;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp128 * src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp212 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp211 + fp209;
LIBINT2_REALTYPE fp205;
fp205 = fp208 + fp206;
LIBINT2_REALTYPE fp465;
fp465 = inteval->two_alpha0_bra[vi] * fp205;
target[((hsi*36+31)*1+lsi)*1] = fp465;
LIBINT2_REALTYPE fp215;
fp215 = src0[((hsi*27+0)*1+lsi)*1] * src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp55;
LIBINT2_REALTYPE fp218;
fp218 = src0[((hsi*27+0)*1+lsi)*1] * fp95;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp128 * src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp220 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = fp219 + fp217;
LIBINT2_REALTYPE fp213;
fp213 = fp216 + fp214;
LIBINT2_REALTYPE fp466;
fp466 = inteval->two_alpha0_bra[vi] * fp213;
target[((hsi*36+30)*1+lsi)*1] = fp466;
LIBINT2_REALTYPE fp223;
fp223 = src0[((hsi*27+0)*1+lsi)*1] * src1[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp66;
LIBINT2_REALTYPE fp91;
fp91 = 3.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp91 * src1[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * src1[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp92 - fp90;
LIBINT2_REALTYPE fp226;
fp226 = src0[((hsi*27+0)*1+lsi)*1] * fp89;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp128 * src1[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp228 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp227 + fp225;
LIBINT2_REALTYPE fp221;
fp221 = fp224 + fp222;
LIBINT2_REALTYPE fp467;
fp467 = inteval->two_alpha0_bra[vi] * fp221;
target[((hsi*36+29)*1+lsi)*1] = fp467;
LIBINT2_REALTYPE fp231;
fp231 = src0[((hsi*27+0)*1+lsi)*1] * src1[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp77;
LIBINT2_REALTYPE fp85;
fp85 = 3.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp85 * src1[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp88 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * src1[((hsi*27+17)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp86 - fp84;
LIBINT2_REALTYPE fp234;
fp234 = src0[((hsi*27+0)*1+lsi)*1] * fp83;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp128 * src1[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp236 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp235 + fp233;
LIBINT2_REALTYPE fp229;
fp229 = fp232 + fp230;
LIBINT2_REALTYPE fp468;
fp468 = inteval->two_alpha0_bra[vi] * fp229;
target[((hsi*36+28)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp311;
fp311 = src0[((hsi*27+2)*1+lsi)*1] * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp44;
LIBINT2_REALTYPE fp314;
fp314 = src0[((hsi*27+2)*1+lsi)*1] * fp113;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = fp137 * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = fp316 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = fp315 + fp313;
LIBINT2_REALTYPE fp309;
fp309 = fp312 + fp310;
LIBINT2_REALTYPE fp478;
fp478 = inteval->two_alpha0_bra[vi] * fp309;
target[((hsi*36+18)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp247;
fp247 = src0[((hsi*27+1)*1+lsi)*1] * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp22;
LIBINT2_REALTYPE fp250;
fp250 = src0[((hsi*27+1)*1+lsi)*1] * fp119;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * src0[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp134;
fp134 = fp135 * src0[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp134 - fp132;
LIBINT2_REALTYPE fp252;
fp252 = fp131 * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp252 * src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = fp251 + fp249;
LIBINT2_REALTYPE fp245;
fp245 = fp248 + fp246;
LIBINT2_REALTYPE fp470;
fp470 = inteval->two_alpha0_bra[vi] * fp245;
target[((hsi*36+26)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp255;
fp255 = src0[((hsi*27+1)*1+lsi)*1] * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp33;
LIBINT2_REALTYPE fp258;
fp258 = src0[((hsi*27+1)*1+lsi)*1] * fp113;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp131 * src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp260 * src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp259 + fp257;
LIBINT2_REALTYPE fp253;
fp253 = fp256 + fp254;
LIBINT2_REALTYPE fp471;
fp471 = inteval->two_alpha0_bra[vi] * fp253;
target[((hsi*36+25)*1+lsi)*1] = fp471;
LIBINT2_REALTYPE fp263;
fp263 = src0[((hsi*27+1)*1+lsi)*1] * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp44;
LIBINT2_REALTYPE fp266;
fp266 = src0[((hsi*27+1)*1+lsi)*1] * fp107;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp131 * src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp268 * src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = fp267 + fp265;
LIBINT2_REALTYPE fp261;
fp261 = fp264 + fp262;
LIBINT2_REALTYPE fp472;
fp472 = inteval->two_alpha0_bra[vi] * fp261;
target[((hsi*36+24)*1+lsi)*1] = fp472;
LIBINT2_REALTYPE fp271;
fp271 = src0[((hsi*27+1)*1+lsi)*1] * src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp55;
LIBINT2_REALTYPE fp274;
fp274 = src0[((hsi*27+1)*1+lsi)*1] * fp101;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = fp131 * src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp276 * src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp275 + fp273;
LIBINT2_REALTYPE fp269;
fp269 = fp272 + fp270;
LIBINT2_REALTYPE fp473;
fp473 = inteval->two_alpha0_bra[vi] * fp269;
target[((hsi*36+23)*1+lsi)*1] = fp473;
LIBINT2_REALTYPE fp279;
fp279 = src0[((hsi*27+1)*1+lsi)*1] * src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp66;
LIBINT2_REALTYPE fp282;
fp282 = src0[((hsi*27+1)*1+lsi)*1] * fp95;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = fp131 * src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp284 * src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp283 + fp281;
LIBINT2_REALTYPE fp277;
fp277 = fp280 + fp278;
LIBINT2_REALTYPE fp474;
fp474 = inteval->two_alpha0_bra[vi] * fp277;
target[((hsi*36+22)*1+lsi)*1] = fp474;
LIBINT2_REALTYPE fp287;
fp287 = src0[((hsi*27+1)*1+lsi)*1] * src1[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp77;
LIBINT2_REALTYPE fp290;
fp290 = src0[((hsi*27+1)*1+lsi)*1] * fp89;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp131 * src1[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp292 * src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp291 + fp289;
LIBINT2_REALTYPE fp285;
fp285 = fp288 + fp286;
LIBINT2_REALTYPE fp475;
fp475 = inteval->two_alpha0_bra[vi] * fp285;
target[((hsi*36+21)*1+lsi)*1] = fp475;
LIBINT2_REALTYPE fp295;
fp295 = src0[((hsi*27+2)*1+lsi)*1] * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp22;
LIBINT2_REALTYPE fp298;
fp298 = src0[((hsi*27+2)*1+lsi)*1] * fp125;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp137 * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = fp300 * src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp299 + fp297;
LIBINT2_REALTYPE fp293;
fp293 = fp296 + fp294;
LIBINT2_REALTYPE fp476;
fp476 = inteval->two_alpha0_bra[vi] * fp293;
target[((hsi*36+20)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp303;
fp303 = src0[((hsi*27+2)*1+lsi)*1] * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp33;
LIBINT2_REALTYPE fp306;
fp306 = src0[((hsi*27+2)*1+lsi)*1] * fp119;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp137 * src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = fp308 * src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = fp307 + fp305;
LIBINT2_REALTYPE fp301;
fp301 = fp304 + fp302;
LIBINT2_REALTYPE fp477;
fp477 = inteval->two_alpha0_bra[vi] * fp301;
target[((hsi*36+19)*1+lsi)*1] = fp477;
LIBINT2_REALTYPE fp239;
fp239 = src0[((hsi*27+1)*1+lsi)*1] * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp11;
LIBINT2_REALTYPE fp242;
fp242 = src0[((hsi*27+1)*1+lsi)*1] * fp125;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * src2[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp131 * src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp244 * src2[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp243 + fp241;
LIBINT2_REALTYPE fp237;
fp237 = fp240 + fp238;
LIBINT2_REALTYPE fp469;
fp469 = inteval->two_alpha0_bra[vi] * fp237;
target[((hsi*36+27)*1+lsi)*1] = fp469;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 497 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
