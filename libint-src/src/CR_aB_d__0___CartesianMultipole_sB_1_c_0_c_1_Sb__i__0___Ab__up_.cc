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
void CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_1_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp41;
LIBINT2_REALTYPE fp42;
fp42 = fp40 + fp43;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src0[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->BO_x[vi] * fp118;
LIBINT2_REALTYPE fp119;
fp119 = fp121 + fp120;
LIBINT2_REALTYPE fp364;
fp364 = fp119 * fp83;
LIBINT2_REALTYPE fp363;
fp363 = fp364 * fp42;
target[((hsi*168+62)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_z[vi] * fp37;
LIBINT2_REALTYPE fp35;
fp35 = fp34 + fp36;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->BO_x[vi] * fp121;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
LIBINT2_REALTYPE fp366;
fp366 = fp122 * fp86;
LIBINT2_REALTYPE fp365;
fp365 = fp366 * fp35;
target[((hsi*168+61)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp37 + fp39;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = fp122 * fp85;
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp38;
target[((hsi*168+60)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp370;
fp370 = fp122 * fp84;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp42;
target[((hsi*168+59)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src0[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->BO_x[vi] * fp124;
LIBINT2_REALTYPE fp125;
fp125 = fp128 + fp126;
LIBINT2_REALTYPE fp372;
fp372 = fp125 * fp86;
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp38;
target[((hsi*168+58)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp374;
fp374 = fp125 * fp85;
LIBINT2_REALTYPE fp373;
fp373 = fp374 * fp42;
target[((hsi*168+57)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp130;
fp130 = inteval->BO_x[vi] * fp128;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src0[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp127 + fp130;
LIBINT2_REALTYPE fp376;
fp376 = fp129 * fp86;
LIBINT2_REALTYPE fp375;
fp375 = fp376 * fp42;
target[((hsi*168+56)*1+lsi)*1] = fp375;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp44 + fp46;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src1[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src0[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->BO_x[vi] * fp109;
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
LIBINT2_REALTYPE fp378;
fp378 = fp110 * fp79;
LIBINT2_REALTYPE fp377;
fp377 = fp378 * fp45;
target[((hsi*168+55)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp48;
fp48 = fp47 + fp49;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src1[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = fp110 * fp78;
LIBINT2_REALTYPE fp379;
fp379 = fp380 * fp48;
target[((hsi*168+54)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp64;
fp64 = fp62 + fp65;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = inteval->BO_x[vi] * fp150;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src0[((hsi*27+25)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp149 + fp152;
LIBINT2_REALTYPE fp488;
fp488 = fp151 * fp86;
LIBINT2_REALTYPE fp487;
fp487 = fp488 * fp64;
target[((hsi*168+0)*1+lsi)*1] = fp487;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp56;
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = fp110 * fp76;
LIBINT2_REALTYPE fp383;
fp383 = fp384 * fp54;
target[((hsi*168+52)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src2[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_z[vi] * fp59;
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = fp110 * fp75;
LIBINT2_REALTYPE fp385;
fp385 = fp386 * fp57;
target[((hsi*168+51)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_z[vi] * fp62;
LIBINT2_REALTYPE fp60;
fp60 = fp59 + fp61;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = fp110 * fp74;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * fp60;
target[((hsi*168+50)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = fp110 * fp73;
LIBINT2_REALTYPE fp389;
fp389 = fp390 * fp64;
target[((hsi*168+49)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src0[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_x[vi] * fp112;
LIBINT2_REALTYPE fp113;
fp113 = fp115 + fp114;
LIBINT2_REALTYPE fp392;
fp392 = fp113 * fp79;
LIBINT2_REALTYPE fp391;
fp391 = fp392 * fp48;
target[((hsi*168+48)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp51;
fp51 = fp50 + fp52;
LIBINT2_REALTYPE fp394;
fp394 = fp113 * fp78;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * fp51;
target[((hsi*168+47)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp396;
fp396 = fp113 * fp77;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * fp54;
target[((hsi*168+46)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp398;
fp398 = fp113 * fp76;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * fp57;
target[((hsi*168+45)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp400;
fp400 = fp113 * fp75;
LIBINT2_REALTYPE fp399;
fp399 = fp400 * fp60;
target[((hsi*168+44)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp402;
fp402 = fp113 * fp74;
LIBINT2_REALTYPE fp401;
fp401 = fp402 * fp64;
target[((hsi*168+43)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp382;
fp382 = fp110 * fp77;
LIBINT2_REALTYPE fp381;
fp381 = fp382 * fp51;
target[((hsi*168+53)*1+lsi)*1] = fp381;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp322;
fp322 = fp110 * fp86;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp23;
target[((hsi*168+83)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp324;
fp324 = fp110 * fp85;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp26;
target[((hsi*168+82)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp326;
fp326 = fp110 * fp84;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp29;
target[((hsi*168+81)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp31 + fp33;
LIBINT2_REALTYPE fp328;
fp328 = fp110 * fp83;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp32;
target[((hsi*168+80)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = fp110 * fp82;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp35;
target[((hsi*168+79)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = fp110 * fp81;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp38;
target[((hsi*168+78)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = fp110 * fp80;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp42;
target[((hsi*168+77)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp336;
fp336 = fp113 * fp86;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp26;
target[((hsi*168+76)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp338;
fp338 = fp113 * fp85;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp29;
target[((hsi*168+75)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp362;
fp362 = fp119 * fp84;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * fp38;
target[((hsi*168+63)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp342;
fp342 = fp113 * fp83;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp35;
target[((hsi*168+73)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp344;
fp344 = fp113 * fp82;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp38;
target[((hsi*168+72)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp346;
fp346 = fp113 * fp81;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp42;
target[((hsi*168+71)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp117;
fp117 = inteval->BO_x[vi] * fp115;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
LIBINT2_REALTYPE fp348;
fp348 = fp116 * fp86;
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp29;
target[((hsi*168+70)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp350;
fp350 = fp116 * fp85;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp32;
target[((hsi*168+69)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp352;
fp352 = fp116 * fp84;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp35;
target[((hsi*168+68)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp354;
fp354 = fp116 * fp83;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp38;
target[((hsi*168+67)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp356;
fp356 = fp116 * fp82;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp42;
target[((hsi*168+66)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp358;
fp358 = fp119 * fp86;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp32;
target[((hsi*168+65)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp360;
fp360 = fp119 * fp85;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp35;
target[((hsi*168+64)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp340;
fp340 = fp113 * fp84;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp32;
target[((hsi*168+74)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src0[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src0[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->BO_x[vi] * fp134;
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp448;
fp448 = fp135 * fp86;
LIBINT2_REALTYPE fp447;
fp447 = fp448 * fp48;
target[((hsi*168+20)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp450;
fp450 = fp135 * fp85;
LIBINT2_REALTYPE fp449;
fp449 = fp450 * fp51;
target[((hsi*168+19)*1+lsi)*1] = fp449;
LIBINT2_REALTYPE fp452;
fp452 = fp135 * fp84;
LIBINT2_REALTYPE fp451;
fp451 = fp452 * fp54;
target[((hsi*168+18)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp454;
fp454 = fp135 * fp83;
LIBINT2_REALTYPE fp453;
fp453 = fp454 * fp57;
target[((hsi*168+17)*1+lsi)*1] = fp453;
LIBINT2_REALTYPE fp456;
fp456 = fp135 * fp82;
LIBINT2_REALTYPE fp455;
fp455 = fp456 * fp60;
target[((hsi*168+16)*1+lsi)*1] = fp455;
LIBINT2_REALTYPE fp458;
fp458 = fp135 * fp81;
LIBINT2_REALTYPE fp457;
fp457 = fp458 * fp64;
target[((hsi*168+15)*1+lsi)*1] = fp457;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src0[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->BO_x[vi] * fp137;
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
LIBINT2_REALTYPE fp460;
fp460 = fp138 * fp86;
LIBINT2_REALTYPE fp459;
fp459 = fp460 * fp51;
target[((hsi*168+14)*1+lsi)*1] = fp459;
LIBINT2_REALTYPE fp462;
fp462 = fp138 * fp85;
LIBINT2_REALTYPE fp461;
fp461 = fp462 * fp54;
target[((hsi*168+13)*1+lsi)*1] = fp461;
LIBINT2_REALTYPE fp464;
fp464 = fp138 * fp84;
LIBINT2_REALTYPE fp463;
fp463 = fp464 * fp57;
target[((hsi*168+12)*1+lsi)*1] = fp463;
LIBINT2_REALTYPE fp404;
fp404 = fp116 * fp79;
LIBINT2_REALTYPE fp403;
fp403 = fp404 * fp51;
target[((hsi*168+42)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp468;
fp468 = fp138 * fp82;
LIBINT2_REALTYPE fp467;
fp467 = fp468 * fp64;
target[((hsi*168+10)*1+lsi)*1] = fp467;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src0[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->BO_x[vi] * fp140;
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp470;
fp470 = fp141 * fp86;
LIBINT2_REALTYPE fp469;
fp469 = fp470 * fp54;
target[((hsi*168+9)*1+lsi)*1] = fp469;
LIBINT2_REALTYPE fp472;
fp472 = fp141 * fp85;
LIBINT2_REALTYPE fp471;
fp471 = fp472 * fp57;
target[((hsi*168+8)*1+lsi)*1] = fp471;
LIBINT2_REALTYPE fp474;
fp474 = fp141 * fp84;
LIBINT2_REALTYPE fp473;
fp473 = fp474 * fp60;
target[((hsi*168+7)*1+lsi)*1] = fp473;
LIBINT2_REALTYPE fp476;
fp476 = fp141 * fp83;
LIBINT2_REALTYPE fp475;
fp475 = fp476 * fp64;
target[((hsi*168+6)*1+lsi)*1] = fp475;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src0[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->BO_x[vi] * fp143;
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp478;
fp478 = fp144 * fp86;
LIBINT2_REALTYPE fp477;
fp477 = fp478 * fp57;
target[((hsi*168+5)*1+lsi)*1] = fp477;
LIBINT2_REALTYPE fp480;
fp480 = fp144 * fp85;
LIBINT2_REALTYPE fp479;
fp479 = fp480 * fp60;
target[((hsi*168+4)*1+lsi)*1] = fp479;
LIBINT2_REALTYPE fp482;
fp482 = fp144 * fp84;
LIBINT2_REALTYPE fp481;
fp481 = fp482 * fp64;
target[((hsi*168+3)*1+lsi)*1] = fp481;
LIBINT2_REALTYPE fp148;
fp148 = inteval->BO_x[vi] * fp146;
LIBINT2_REALTYPE fp147;
fp147 = fp150 + fp148;
LIBINT2_REALTYPE fp484;
fp484 = fp147 * fp86;
LIBINT2_REALTYPE fp483;
fp483 = fp484 * fp60;
target[((hsi*168+2)*1+lsi)*1] = fp483;
LIBINT2_REALTYPE fp486;
fp486 = fp147 * fp85;
LIBINT2_REALTYPE fp485;
fp485 = fp486 * fp64;
target[((hsi*168+1)*1+lsi)*1] = fp485;
LIBINT2_REALTYPE fp466;
fp466 = fp138 * fp83;
LIBINT2_REALTYPE fp465;
fp465 = fp466 * fp60;
target[((hsi*168+11)*1+lsi)*1] = fp465;
LIBINT2_REALTYPE fp406;
fp406 = fp116 * fp78;
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp54;
target[((hsi*168+41)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp408;
fp408 = fp116 * fp77;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * fp57;
target[((hsi*168+40)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp410;
fp410 = fp116 * fp76;
LIBINT2_REALTYPE fp409;
fp409 = fp410 * fp60;
target[((hsi*168+39)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp412;
fp412 = fp116 * fp75;
LIBINT2_REALTYPE fp411;
fp411 = fp412 * fp64;
target[((hsi*168+38)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp414;
fp414 = fp119 * fp79;
LIBINT2_REALTYPE fp413;
fp413 = fp414 * fp54;
target[((hsi*168+37)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp416;
fp416 = fp119 * fp78;
LIBINT2_REALTYPE fp415;
fp415 = fp416 * fp57;
target[((hsi*168+36)*1+lsi)*1] = fp415;
LIBINT2_REALTYPE fp418;
fp418 = fp119 * fp77;
LIBINT2_REALTYPE fp417;
fp417 = fp418 * fp60;
target[((hsi*168+35)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp420;
fp420 = fp119 * fp76;
LIBINT2_REALTYPE fp419;
fp419 = fp420 * fp64;
target[((hsi*168+34)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp422;
fp422 = fp122 * fp79;
LIBINT2_REALTYPE fp421;
fp421 = fp422 * fp57;
target[((hsi*168+33)*1+lsi)*1] = fp421;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src0[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->BO_x[vi] * fp131;
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
LIBINT2_REALTYPE fp446;
fp446 = fp132 * fp80;
LIBINT2_REALTYPE fp445;
fp445 = fp446 * fp64;
target[((hsi*168+21)*1+lsi)*1] = fp445;
LIBINT2_REALTYPE fp426;
fp426 = fp122 * fp77;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * fp64;
target[((hsi*168+31)*1+lsi)*1] = fp425;
LIBINT2_REALTYPE fp428;
fp428 = fp125 * fp79;
LIBINT2_REALTYPE fp427;
fp427 = fp428 * fp60;
target[((hsi*168+30)*1+lsi)*1] = fp427;
LIBINT2_REALTYPE fp430;
fp430 = fp125 * fp78;
LIBINT2_REALTYPE fp429;
fp429 = fp430 * fp64;
target[((hsi*168+29)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp432;
fp432 = fp129 * fp79;
LIBINT2_REALTYPE fp431;
fp431 = fp432 * fp64;
target[((hsi*168+28)*1+lsi)*1] = fp431;
LIBINT2_REALTYPE fp434;
fp434 = fp132 * fp86;
LIBINT2_REALTYPE fp433;
fp433 = fp434 * fp45;
target[((hsi*168+27)*1+lsi)*1] = fp433;
LIBINT2_REALTYPE fp436;
fp436 = fp132 * fp85;
LIBINT2_REALTYPE fp435;
fp435 = fp436 * fp48;
target[((hsi*168+26)*1+lsi)*1] = fp435;
LIBINT2_REALTYPE fp438;
fp438 = fp132 * fp84;
LIBINT2_REALTYPE fp437;
fp437 = fp438 * fp51;
target[((hsi*168+25)*1+lsi)*1] = fp437;
LIBINT2_REALTYPE fp440;
fp440 = fp132 * fp83;
LIBINT2_REALTYPE fp439;
fp439 = fp440 * fp54;
target[((hsi*168+24)*1+lsi)*1] = fp439;
LIBINT2_REALTYPE fp442;
fp442 = fp132 * fp82;
LIBINT2_REALTYPE fp441;
fp441 = fp442 * fp57;
target[((hsi*168+23)*1+lsi)*1] = fp441;
LIBINT2_REALTYPE fp444;
fp444 = fp132 * fp81;
LIBINT2_REALTYPE fp443;
fp443 = fp444 * fp60;
target[((hsi*168+22)*1+lsi)*1] = fp443;
LIBINT2_REALTYPE fp424;
fp424 = fp122 * fp78;
LIBINT2_REALTYPE fp423;
fp423 = fp424 * fp60;
target[((hsi*168+32)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp20;
fp20 = fp18 + fp21;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src0[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src0[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->BO_x[vi] * fp96;
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp196;
fp196 = fp97 * fp83;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp20;
target[((hsi*168+146)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->BO_x[vi] * fp99;
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
LIBINT2_REALTYPE fp198;
fp198 = fp100 * fp86;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp13;
target[((hsi*168+145)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp16;
fp16 = fp15 + fp17;
LIBINT2_REALTYPE fp200;
fp200 = fp100 * fp85;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp16;
target[((hsi*168+144)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp202;
fp202 = fp100 * fp84;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp20;
target[((hsi*168+143)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src0[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_x[vi] * fp102;
LIBINT2_REALTYPE fp103;
fp103 = fp106 + fp104;
LIBINT2_REALTYPE fp204;
fp204 = fp103 * fp86;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp16;
target[((hsi*168+142)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp206;
fp206 = fp103 * fp85;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp20;
target[((hsi*168+141)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp108;
fp108 = inteval->BO_x[vi] * fp106;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp105 + fp108;
LIBINT2_REALTYPE fp208;
fp208 = fp107 * fp86;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp20;
target[((hsi*168+140)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp87;
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
LIBINT2_REALTYPE fp210;
fp210 = fp88 * fp79;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp23;
target[((hsi*168+139)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp212;
fp212 = fp88 * fp78;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp26;
target[((hsi*168+138)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = fp107 * fp72;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp64;
target[((hsi*168+84)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp216;
fp216 = fp88 * fp76;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp32;
target[((hsi*168+136)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp218;
fp218 = fp88 * fp75;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp35;
target[((hsi*168+135)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp220;
fp220 = fp88 * fp74;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp38;
target[((hsi*168+134)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp222;
fp222 = fp88 * fp73;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp42;
target[((hsi*168+133)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src0[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_x[vi] * fp90;
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp224;
fp224 = fp91 * fp79;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp26;
target[((hsi*168+132)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp226;
fp226 = fp91 * fp78;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp29;
target[((hsi*168+131)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp228;
fp228 = fp91 * fp77;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp32;
target[((hsi*168+130)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp230;
fp230 = fp91 * fp76;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp35;
target[((hsi*168+129)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp232;
fp232 = fp91 * fp75;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp38;
target[((hsi*168+128)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp234;
fp234 = fp91 * fp74;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp42;
target[((hsi*168+127)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp214;
fp214 = fp88 * fp77;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp29;
target[((hsi*168+137)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*27+25)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp154;
fp154 = fp88 * fp86;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp1;
target[((hsi*168+167)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp156;
fp156 = fp88 * fp85;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp4;
target[((hsi*168+166)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp158;
fp158 = fp88 * fp84;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp7;
target[((hsi*168+165)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp160;
fp160 = fp88 * fp83;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp10;
target[((hsi*168+164)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp162;
fp162 = fp88 * fp82;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp13;
target[((hsi*168+163)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp88 * fp81;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp16;
target[((hsi*168+162)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp166;
fp166 = fp88 * fp80;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp20;
target[((hsi*168+161)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp168;
fp168 = fp91 * fp86;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp4;
target[((hsi*168+160)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp170;
fp170 = fp91 * fp85;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp7;
target[((hsi*168+159)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp194;
fp194 = fp97 * fp84;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp16;
target[((hsi*168+147)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp174;
fp174 = fp91 * fp83;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp13;
target[((hsi*168+157)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp91 * fp82;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp16;
target[((hsi*168+156)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp178;
fp178 = fp91 * fp81;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp20;
target[((hsi*168+155)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_x[vi] * fp93;
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp180;
fp180 = fp94 * fp86;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp7;
target[((hsi*168+154)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp182;
fp182 = fp94 * fp85;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp10;
target[((hsi*168+153)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp184;
fp184 = fp94 * fp84;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp13;
target[((hsi*168+152)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp186;
fp186 = fp94 * fp83;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp16;
target[((hsi*168+151)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp188;
fp188 = fp94 * fp82;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp20;
target[((hsi*168+150)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp190;
fp190 = fp97 * fp86;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp10;
target[((hsi*168+149)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp192;
fp192 = fp97 * fp85;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp13;
target[((hsi*168+148)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp172;
fp172 = fp91 * fp84;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp10;
target[((hsi*168+158)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp280;
fp280 = fp91 * fp72;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp48;
target[((hsi*168+104)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = fp91 * fp71;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp51;
target[((hsi*168+103)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = fp91 * fp70;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp54;
target[((hsi*168+102)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp91 * fp69;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp57;
target[((hsi*168+101)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src1[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp91 * fp68;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp60;
target[((hsi*168+100)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp91 * fp67;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp64;
target[((hsi*168+99)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp292;
fp292 = fp94 * fp72;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp51;
target[((hsi*168+98)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp294;
fp294 = fp94 * fp71;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp54;
target[((hsi*168+97)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp296;
fp296 = fp94 * fp70;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp57;
target[((hsi*168+96)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp236;
fp236 = fp94 * fp79;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp29;
target[((hsi*168+126)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp300;
fp300 = fp94 * fp68;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp64;
target[((hsi*168+94)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp302;
fp302 = fp97 * fp72;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp54;
target[((hsi*168+93)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp304;
fp304 = fp97 * fp71;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp57;
target[((hsi*168+92)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp306;
fp306 = fp97 * fp70;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp60;
target[((hsi*168+91)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp308;
fp308 = fp97 * fp69;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp64;
target[((hsi*168+90)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp310;
fp310 = fp100 * fp72;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp57;
target[((hsi*168+89)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp312;
fp312 = fp100 * fp71;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp60;
target[((hsi*168+88)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp314;
fp314 = fp100 * fp70;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp64;
target[((hsi*168+87)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp316;
fp316 = fp103 * fp72;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp60;
target[((hsi*168+86)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp318;
fp318 = fp103 * fp71;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp64;
target[((hsi*168+85)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp298;
fp298 = fp94 * fp69;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp60;
target[((hsi*168+95)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp238;
fp238 = fp94 * fp78;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp32;
target[((hsi*168+125)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp240;
fp240 = fp94 * fp77;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp35;
target[((hsi*168+124)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp242;
fp242 = fp94 * fp76;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp38;
target[((hsi*168+123)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp244;
fp244 = fp94 * fp75;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp42;
target[((hsi*168+122)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp246;
fp246 = fp97 * fp79;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp32;
target[((hsi*168+121)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp248;
fp248 = fp97 * fp78;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp35;
target[((hsi*168+120)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp250;
fp250 = fp97 * fp77;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp38;
target[((hsi*168+119)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp252;
fp252 = fp97 * fp76;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp42;
target[((hsi*168+118)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp254;
fp254 = fp100 * fp79;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp35;
target[((hsi*168+117)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = fp88 * fp66;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp64;
target[((hsi*168+105)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp258;
fp258 = fp100 * fp77;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp42;
target[((hsi*168+115)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp260;
fp260 = fp103 * fp79;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp38;
target[((hsi*168+114)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp262;
fp262 = fp103 * fp78;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp42;
target[((hsi*168+113)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp264;
fp264 = fp107 * fp79;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp42;
target[((hsi*168+112)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp266;
fp266 = fp88 * fp72;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp45;
target[((hsi*168+111)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp268;
fp268 = fp88 * fp71;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp48;
target[((hsi*168+110)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp270;
fp270 = fp88 * fp70;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp51;
target[((hsi*168+109)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp272;
fp272 = fp88 * fp69;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp54;
target[((hsi*168+108)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp274;
fp274 = fp88 * fp68;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp57;
target[((hsi*168+107)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp276;
fp276 = fp88 * fp67;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp60;
target[((hsi*168+106)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp256;
fp256 = fp100 * fp78;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp38;
target[((hsi*168+116)*1+lsi)*1] = fp255;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 489 */
}

#ifdef __cplusplus
};
#endif
