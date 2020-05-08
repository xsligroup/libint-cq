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
void CR_aB_s__0___Kinetic_i001__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp478;
fp478 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp477;
fp477 = fp478 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp481;
fp481 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp480;
fp480 = fp481 * src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp482;
fp482 = inteval->PA_z[vi] * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp479;
fp479 = fp482 + fp480;
LIBINT2_REALTYPE fp476;
fp476 = fp479 + fp477;
LIBINT2_REALTYPE fp71;
fp71 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp476;
LIBINT2_REALTYPE fp66;
fp66 = fp69 - fp67;
LIBINT2_REALTYPE fp386;
fp386 = src0[((hsi*18+5)*1+lsi)*1] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = fp386 * fp66;
LIBINT2_REALTYPE fp104;
fp104 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp106 * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp105 - fp103;
LIBINT2_REALTYPE fp389;
fp389 = src0[((hsi*18+5)*1+lsi)*1] * fp102;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp140 * src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp141 - fp139;
LIBINT2_REALTYPE fp391;
fp391 = fp138 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = fp391 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp387;
fp387 = fp390 + fp388;
LIBINT2_REALTYPE fp384;
fp384 = fp387 + fp385;
LIBINT2_REALTYPE fp392;
fp392 = inteval->two_alpha0_bra[vi] * fp384;
LIBINT2_REALTYPE fp428;
fp428 = -1.0000000000000000e+00 * fp392;
target[((hsi*28+1)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp56;
fp56 = 5.0000000000000000e-01 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp474;
fp474 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp473;
fp473 = fp474 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp475;
fp475 = inteval->PA_z[vi] * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp472;
fp472 = fp475 + fp473;
LIBINT2_REALTYPE fp59;
fp59 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp472;
LIBINT2_REALTYPE fp62;
fp62 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp467;
fp467 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp466;
fp466 = fp467 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp470;
fp470 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp469;
fp469 = fp470 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp471;
fp471 = inteval->PA_z[vi] * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp468;
fp468 = fp471 + fp469;
LIBINT2_REALTYPE fp465;
fp465 = fp468 + fp466;
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp465;
LIBINT2_REALTYPE fp60;
fp60 = fp63 - fp61;
LIBINT2_REALTYPE fp57;
fp57 = fp60 - fp58;
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
LIBINT2_REALTYPE fp377;
fp377 = src0[((hsi*18+5)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp55;
LIBINT2_REALTYPE fp110;
fp110 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = src0[((hsi*18+5)*1+lsi)*1] * fp108;
LIBINT2_REALTYPE fp379;
fp379 = fp380 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = fp138 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = fp382 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
fp378 = fp381 + fp379;
LIBINT2_REALTYPE fp375;
fp375 = fp378 + fp376;
LIBINT2_REALTYPE fp383;
fp383 = inteval->two_alpha0_bra[vi] * fp375;
LIBINT2_REALTYPE fp427;
fp427 = -1.0000000000000000e+00 * fp383;
target[((hsi*28+2)*1+lsi)*1] = fp427;
LIBINT2_REALTYPE fp368;
fp368 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp66;
LIBINT2_REALTYPE fp98;
fp98 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp98 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp99 - fp97;
LIBINT2_REALTYPE fp371;
fp371 = src0[((hsi*18+4)*1+lsi)*1] * fp96;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp136;
fp136 = fp137 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp135 - fp133;
LIBINT2_REALTYPE fp373;
fp373 = fp132 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = fp373 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp372 + fp370;
LIBINT2_REALTYPE fp366;
fp366 = fp369 + fp367;
LIBINT2_REALTYPE fp374;
fp374 = inteval->two_alpha0_bra[vi] * fp366;
LIBINT2_REALTYPE fp426;
fp426 = -1.0000000000000000e+00 * fp374;
target[((hsi*28+3)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp359;
fp359 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp55;
LIBINT2_REALTYPE fp362;
fp362 = src0[((hsi*18+4)*1+lsi)*1] * fp102;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = fp132 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = fp364 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = fp363 + fp361;
LIBINT2_REALTYPE fp357;
fp357 = fp360 + fp358;
LIBINT2_REALTYPE fp365;
fp365 = inteval->two_alpha0_bra[vi] * fp357;
LIBINT2_REALTYPE fp425;
fp425 = -1.0000000000000000e+00 * fp365;
target[((hsi*28+4)*1+lsi)*1] = fp425;
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp476;
LIBINT2_REALTYPE fp51;
fp51 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp460;
fp460 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp459;
fp459 = fp460 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp463;
fp463 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp462;
fp462 = fp463 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp464;
fp464 = inteval->PA_z[vi] * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp461;
fp461 = fp464 + fp462;
LIBINT2_REALTYPE fp458;
fp458 = fp461 + fp459;
LIBINT2_REALTYPE fp54;
fp54 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp458;
LIBINT2_REALTYPE fp49;
fp49 = fp52 - fp50;
LIBINT2_REALTYPE fp46;
fp46 = fp49 - fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp350;
fp350 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp44;
LIBINT2_REALTYPE fp353;
fp353 = src0[((hsi*18+4)*1+lsi)*1] * fp108;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = fp132 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp355 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = fp354 + fp352;
LIBINT2_REALTYPE fp348;
fp348 = fp351 + fp349;
LIBINT2_REALTYPE fp356;
fp356 = inteval->two_alpha0_bra[vi] * fp348;
LIBINT2_REALTYPE fp424;
fp424 = -1.0000000000000000e+00 * fp356;
target[((hsi*28+5)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp341;
fp341 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp66;
LIBINT2_REALTYPE fp92;
fp92 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp93 - fp91;
LIBINT2_REALTYPE fp344;
fp344 = src0[((hsi*18+3)*1+lsi)*1] * fp90;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp130;
fp130 = fp131 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp129 - fp127;
LIBINT2_REALTYPE fp346;
fp346 = fp126 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = fp346 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = fp345 + fp343;
LIBINT2_REALTYPE fp339;
fp339 = fp342 + fp340;
LIBINT2_REALTYPE fp347;
fp347 = inteval->two_alpha0_bra[vi] * fp339;
LIBINT2_REALTYPE fp423;
fp423 = -1.0000000000000000e+00 * fp347;
target[((hsi*28+6)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp332;
fp332 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp55;
LIBINT2_REALTYPE fp335;
fp335 = src0[((hsi*18+3)*1+lsi)*1] * fp96;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = fp126 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp337 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = fp336 + fp334;
LIBINT2_REALTYPE fp330;
fp330 = fp333 + fp331;
LIBINT2_REALTYPE fp338;
fp338 = inteval->two_alpha0_bra[vi] * fp330;
LIBINT2_REALTYPE fp422;
fp422 = -1.0000000000000000e+00 * fp338;
target[((hsi*28+7)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp323;
fp323 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp44;
LIBINT2_REALTYPE fp326;
fp326 = src0[((hsi*18+3)*1+lsi)*1] * fp102;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = fp126 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = fp328 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = fp327 + fp325;
LIBINT2_REALTYPE fp321;
fp321 = fp324 + fp322;
LIBINT2_REALTYPE fp329;
fp329 = inteval->two_alpha0_bra[vi] * fp321;
LIBINT2_REALTYPE fp421;
fp421 = -1.0000000000000000e+00 * fp329;
target[((hsi*28+8)*1+lsi)*1] = fp421;
LIBINT2_REALTYPE fp34;
fp34 = 1.5000000000000000e+00 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp465;
LIBINT2_REALTYPE fp40;
fp40 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp453;
fp453 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp452;
fp452 = fp453 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp456;
fp456 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp455;
fp455 = fp456 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp457;
fp457 = inteval->PA_z[vi] * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp454;
fp454 = fp457 + fp455;
LIBINT2_REALTYPE fp451;
fp451 = fp454 + fp452;
LIBINT2_REALTYPE fp43;
fp43 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp451;
LIBINT2_REALTYPE fp38;
fp38 = fp41 - fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 - fp36;
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp314;
fp314 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp33;
LIBINT2_REALTYPE fp317;
fp317 = src0[((hsi*18+3)*1+lsi)*1] * fp108;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp126 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = fp319 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = fp318 + fp316;
LIBINT2_REALTYPE fp312;
fp312 = fp315 + fp313;
LIBINT2_REALTYPE fp320;
fp320 = inteval->two_alpha0_bra[vi] * fp312;
LIBINT2_REALTYPE fp420;
fp420 = -1.0000000000000000e+00 * fp320;
target[((hsi*28+9)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp305;
fp305 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp66;
LIBINT2_REALTYPE fp86;
fp86 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp89 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp88 * src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp87 - fp85;
LIBINT2_REALTYPE fp308;
fp308 = src0[((hsi*18+2)*1+lsi)*1] * fp84;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp123;
fp123 = fp124 * src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp123 - fp121;
LIBINT2_REALTYPE fp310;
fp310 = fp120 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = fp310 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = fp309 + fp307;
LIBINT2_REALTYPE fp303;
fp303 = fp306 + fp304;
LIBINT2_REALTYPE fp311;
fp311 = inteval->two_alpha0_bra[vi] * fp303;
LIBINT2_REALTYPE fp419;
fp419 = -1.0000000000000000e+00 * fp311;
target[((hsi*28+10)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp296;
fp296 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp55;
LIBINT2_REALTYPE fp299;
fp299 = src0[((hsi*18+2)*1+lsi)*1] * fp90;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp120 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp301 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp300 + fp298;
LIBINT2_REALTYPE fp294;
fp294 = fp297 + fp295;
LIBINT2_REALTYPE fp302;
fp302 = inteval->two_alpha0_bra[vi] * fp294;
LIBINT2_REALTYPE fp418;
fp418 = -1.0000000000000000e+00 * fp302;
target[((hsi*28+11)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp287;
fp287 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp44;
LIBINT2_REALTYPE fp290;
fp290 = src0[((hsi*18+2)*1+lsi)*1] * fp96;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp120 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp292 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp291 + fp289;
LIBINT2_REALTYPE fp285;
fp285 = fp288 + fp286;
LIBINT2_REALTYPE fp293;
fp293 = inteval->two_alpha0_bra[vi] * fp285;
LIBINT2_REALTYPE fp417;
fp417 = -1.0000000000000000e+00 * fp293;
target[((hsi*28+12)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp278;
fp278 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp33;
LIBINT2_REALTYPE fp281;
fp281 = src0[((hsi*18+2)*1+lsi)*1] * fp102;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp120 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = fp283 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = fp282 + fp280;
LIBINT2_REALTYPE fp276;
fp276 = fp279 + fp277;
LIBINT2_REALTYPE fp284;
fp284 = inteval->two_alpha0_bra[vi] * fp276;
LIBINT2_REALTYPE fp416;
fp416 = -1.0000000000000000e+00 * fp284;
target[((hsi*28+13)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp395;
fp395 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp66;
LIBINT2_REALTYPE fp398;
fp398 = src0[((hsi*18+6)*1+lsi)*1] * fp108;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = 3.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp148;
fp148 = fp149 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp147;
fp147 = fp148 * src0[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp147 - fp145;
LIBINT2_REALTYPE fp400;
fp400 = fp144 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp399;
fp399 = fp400 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp396;
fp396 = fp399 + fp397;
LIBINT2_REALTYPE fp393;
fp393 = fp396 + fp394;
LIBINT2_REALTYPE fp401;
fp401 = inteval->two_alpha0_bra[vi] * fp393;
LIBINT2_REALTYPE fp429;
fp429 = -1.0000000000000000e+00 * fp401;
target[((hsi*28+0)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp260;
fp260 = src0[((hsi*18+1)*1+lsi)*1] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp66;
LIBINT2_REALTYPE fp80;
fp80 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp81 - fp79;
LIBINT2_REALTYPE fp263;
fp263 = src0[((hsi*18+1)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp115;
fp115 = fp116 * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp117 - fp115;
LIBINT2_REALTYPE fp265;
fp265 = fp114 * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = fp265 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp264 + fp262;
LIBINT2_REALTYPE fp258;
fp258 = fp261 + fp259;
LIBINT2_REALTYPE fp266;
fp266 = inteval->two_alpha0_bra[vi] * fp258;
LIBINT2_REALTYPE fp414;
fp414 = -1.0000000000000000e+00 * fp266;
target[((hsi*28+15)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp251;
fp251 = src0[((hsi*18+1)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp55;
LIBINT2_REALTYPE fp254;
fp254 = src0[((hsi*18+1)*1+lsi)*1] * fp84;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp114 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = fp256 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp255 + fp253;
LIBINT2_REALTYPE fp249;
fp249 = fp252 + fp250;
LIBINT2_REALTYPE fp257;
fp257 = inteval->two_alpha0_bra[vi] * fp249;
LIBINT2_REALTYPE fp413;
fp413 = -1.0000000000000000e+00 * fp257;
target[((hsi*28+16)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp242;
fp242 = src0[((hsi*18+1)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp44;
LIBINT2_REALTYPE fp245;
fp245 = src0[((hsi*18+1)*1+lsi)*1] * fp90;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp114 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp247 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp246 + fp244;
LIBINT2_REALTYPE fp240;
fp240 = fp243 + fp241;
LIBINT2_REALTYPE fp248;
fp248 = inteval->two_alpha0_bra[vi] * fp240;
LIBINT2_REALTYPE fp412;
fp412 = -1.0000000000000000e+00 * fp248;
target[((hsi*28+17)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp233;
fp233 = src0[((hsi*18+1)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp33;
LIBINT2_REALTYPE fp236;
fp236 = src0[((hsi*18+1)*1+lsi)*1] * fp96;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp114 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp238 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp237 + fp235;
LIBINT2_REALTYPE fp231;
fp231 = fp234 + fp232;
LIBINT2_REALTYPE fp239;
fp239 = inteval->two_alpha0_bra[vi] * fp231;
LIBINT2_REALTYPE fp411;
fp411 = -1.0000000000000000e+00 * fp239;
target[((hsi*28+18)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp23;
fp23 = 2.0000000000000000e+00 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp458;
LIBINT2_REALTYPE fp29;
fp29 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src2[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp446;
fp446 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp445;
fp445 = fp446 * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp449;
fp449 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp448;
fp448 = fp449 * src2[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp450;
fp450 = inteval->PA_z[vi] * src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp447;
fp447 = fp450 + fp448;
LIBINT2_REALTYPE fp444;
fp444 = fp447 + fp445;
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * fp444;
LIBINT2_REALTYPE fp27;
fp27 = fp30 - fp28;
LIBINT2_REALTYPE fp24;
fp24 = fp27 - fp25;
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*18+1)*1+lsi)*1] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp22;
LIBINT2_REALTYPE fp227;
fp227 = src0[((hsi*18+1)*1+lsi)*1] * fp102;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp114 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp229 * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp228 + fp226;
LIBINT2_REALTYPE fp222;
fp222 = fp225 + fp223;
LIBINT2_REALTYPE fp230;
fp230 = inteval->two_alpha0_bra[vi] * fp222;
LIBINT2_REALTYPE fp410;
fp410 = -1.0000000000000000e+00 * fp230;
target[((hsi*28+19)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp12;
fp12 = 2.5000000000000000e+00 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp14;
fp14 = fp15 * fp451;
LIBINT2_REALTYPE fp18;
fp18 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp18 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
fp439 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp438;
fp438 = fp439 * src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp442;
fp442 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp441;
fp441 = fp442 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp443;
fp443 = inteval->PA_z[vi] * src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp440;
fp440 = fp443 + fp441;
LIBINT2_REALTYPE fp437;
fp437 = fp440 + fp438;
LIBINT2_REALTYPE fp21;
fp21 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp21 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * fp437;
LIBINT2_REALTYPE fp16;
fp16 = fp19 - fp17;
LIBINT2_REALTYPE fp13;
fp13 = fp16 - fp14;
LIBINT2_REALTYPE fp11;
fp11 = fp13 + fp12;
LIBINT2_REALTYPE fp215;
fp215 = src0[((hsi*18+1)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp11;
LIBINT2_REALTYPE fp218;
fp218 = src0[((hsi*18+1)*1+lsi)*1] * fp108;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp114 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp220 * src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = fp219 + fp217;
LIBINT2_REALTYPE fp213;
fp213 = fp216 + fp214;
LIBINT2_REALTYPE fp221;
fp221 = inteval->two_alpha0_bra[vi] * fp213;
LIBINT2_REALTYPE fp409;
fp409 = -1.0000000000000000e+00 * fp221;
target[((hsi*28+20)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp206;
fp206 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp66;
LIBINT2_REALTYPE fp74;
fp74 = 3.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp75 - fp73;
LIBINT2_REALTYPE fp209;
fp209 = src0[((hsi*18+0)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp112 * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp111 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = fp211 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp210 + fp208;
LIBINT2_REALTYPE fp204;
fp204 = fp207 + fp205;
LIBINT2_REALTYPE fp212;
fp212 = inteval->two_alpha0_bra[vi] * fp204;
LIBINT2_REALTYPE fp408;
fp408 = -1.0000000000000000e+00 * fp212;
target[((hsi*28+21)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp197;
fp197 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp55;
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*18+0)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp111 * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp202 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp201 + fp199;
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
LIBINT2_REALTYPE fp203;
fp203 = inteval->two_alpha0_bra[vi] * fp195;
LIBINT2_REALTYPE fp407;
fp407 = -1.0000000000000000e+00 * fp203;
target[((hsi*28+22)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp44;
LIBINT2_REALTYPE fp191;
fp191 = src0[((hsi*18+0)*1+lsi)*1] * fp84;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp111 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp193 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp192 + fp190;
LIBINT2_REALTYPE fp186;
fp186 = fp189 + fp187;
LIBINT2_REALTYPE fp194;
fp194 = inteval->two_alpha0_bra[vi] * fp186;
LIBINT2_REALTYPE fp406;
fp406 = -1.0000000000000000e+00 * fp194;
target[((hsi*28+23)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp179;
fp179 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp33;
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*18+0)*1+lsi)*1] * fp90;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp111 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp184 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp183 + fp181;
LIBINT2_REALTYPE fp177;
fp177 = fp180 + fp178;
LIBINT2_REALTYPE fp185;
fp185 = inteval->two_alpha0_bra[vi] * fp177;
LIBINT2_REALTYPE fp405;
fp405 = -1.0000000000000000e+00 * fp185;
target[((hsi*28+24)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp170;
fp170 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp22;
LIBINT2_REALTYPE fp173;
fp173 = src0[((hsi*18+0)*1+lsi)*1] * fp96;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp111 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp174 + fp172;
LIBINT2_REALTYPE fp168;
fp168 = fp171 + fp169;
LIBINT2_REALTYPE fp176;
fp176 = inteval->two_alpha0_bra[vi] * fp168;
LIBINT2_REALTYPE fp404;
fp404 = -1.0000000000000000e+00 * fp176;
target[((hsi*28+25)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp161;
fp161 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp11;
LIBINT2_REALTYPE fp164;
fp164 = src0[((hsi*18+0)*1+lsi)*1] * fp102;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp111 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp166 * src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
LIBINT2_REALTYPE fp159;
fp159 = fp162 + fp160;
LIBINT2_REALTYPE fp167;
fp167 = inteval->two_alpha0_bra[vi] * fp159;
LIBINT2_REALTYPE fp403;
fp403 = -1.0000000000000000e+00 * fp167;
target[((hsi*28+26)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp1;
fp1 = 3.0000000000000000e+00 * src2[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 3.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp4 * fp444;
LIBINT2_REALTYPE fp7;
fp7 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp6;
fp6 = fp7 * src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp431;
fp431 = fp432 * src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp435;
fp435 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp434;
fp434 = fp435 * src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp436;
fp436 = inteval->PA_z[vi] * src2[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp433;
fp433 = fp436 + fp434;
LIBINT2_REALTYPE fp430;
fp430 = fp433 + fp431;
LIBINT2_REALTYPE fp10;
fp10 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * fp430;
LIBINT2_REALTYPE fp5;
fp5 = fp8 - fp6;
LIBINT2_REALTYPE fp2;
fp2 = fp5 - fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp0;
LIBINT2_REALTYPE fp155;
fp155 = src0[((hsi*18+0)*1+lsi)*1] * fp108;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp111 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp156 + fp154;
LIBINT2_REALTYPE fp150;
fp150 = fp153 + fp151;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_bra[vi] * fp150;
LIBINT2_REALTYPE fp402;
fp402 = -1.0000000000000000e+00 * fp158;
target[((hsi*28+27)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp269;
fp269 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp22;
LIBINT2_REALTYPE fp272;
fp272 = src0[((hsi*18+2)*1+lsi)*1] * fp108;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = fp120 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = fp274 * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp273 + fp271;
LIBINT2_REALTYPE fp267;
fp267 = fp270 + fp268;
LIBINT2_REALTYPE fp275;
fp275 = inteval->two_alpha0_bra[vi] * fp267;
LIBINT2_REALTYPE fp415;
fp415 = -1.0000000000000000e+00 * fp275;
target[((hsi*28+14)*1+lsi)*1] = fp415;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 483 */
}

#ifdef __cplusplus
};
#endif
