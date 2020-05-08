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
void CR_aB_f__0___CartesianMultipole_sB_0_c_2_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_y[vi] * fp59;
LIBINT2_REALTYPE fp55;
fp55 = fp54 + fp56;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_y[vi] * fp55;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp54;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp49 + fp51;
LIBINT2_REALTYPE fp52;
fp52 = fp50 + fp53;
LIBINT2_REALTYPE fp345;
fp345 = fp141 * fp52;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp19;
target[((hsi*150+55)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_y[vi] * fp70;
LIBINT2_REALTYPE fp72;
fp72 = fp69 + fp73;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_y[vi] * fp71;
LIBINT2_REALTYPE fp74;
fp74 = fp70 + fp75;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_y[vi] * fp74;
LIBINT2_REALTYPE fp76;
fp76 = fp72 + fp77;
LIBINT2_REALTYPE fp347;
fp347 = fp142 * fp76;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp16;
target[((hsi*150+54)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_y[vi] * fp69;
LIBINT2_REALTYPE fp65;
fp65 = fp64 + fp66;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_y[vi] * fp72;
LIBINT2_REALTYPE fp67;
fp67 = fp65 + fp68;
LIBINT2_REALTYPE fp349;
fp349 = fp142 * fp67;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp17;
target[((hsi*150+53)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_y[vi] * fp64;
LIBINT2_REALTYPE fp60;
fp60 = fp59 + fp61;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_y[vi] * fp65;
LIBINT2_REALTYPE fp62;
fp62 = fp60 + fp63;
LIBINT2_REALTYPE fp351;
fp351 = fp142 * fp62;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp18;
target[((hsi*150+52)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp57;
fp57 = fp55 + fp58;
LIBINT2_REALTYPE fp353;
fp353 = fp142 * fp57;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp19;
target[((hsi*150+51)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = fp143 * fp76;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp17;
target[((hsi*150+50)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp143 * fp67;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp18;
target[((hsi*150+49)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp143 * fp62;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp19;
target[((hsi*150+48)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->BO_y[vi] * fp128;
LIBINT2_REALTYPE fp130;
fp130 = fp127 + fp131;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->BO_y[vi] * fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp128 + fp133;
LIBINT2_REALTYPE fp135;
fp135 = inteval->BO_y[vi] * fp132;
LIBINT2_REALTYPE fp134;
fp134 = fp130 + fp135;
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp455;
fp455 = fp155 * fp134;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp19;
target[((hsi*150+0)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = fp144 * fp67;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp19;
target[((hsi*150+46)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = fp145 * fp76;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp19;
target[((hsi*150+45)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = fp146 * fp134;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp10;
target[((hsi*150+44)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->BO_y[vi] * fp127;
LIBINT2_REALTYPE fp123;
fp123 = fp122 + fp124;
LIBINT2_REALTYPE fp126;
fp126 = inteval->BO_y[vi] * fp130;
LIBINT2_REALTYPE fp125;
fp125 = fp123 + fp126;
LIBINT2_REALTYPE fp369;
fp369 = fp146 * fp125;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp11;
target[((hsi*150+43)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->BO_y[vi] * fp122;
LIBINT2_REALTYPE fp118;
fp118 = fp117 + fp119;
LIBINT2_REALTYPE fp121;
fp121 = inteval->BO_y[vi] * fp123;
LIBINT2_REALTYPE fp120;
fp120 = fp118 + fp121;
LIBINT2_REALTYPE fp371;
fp371 = fp146 * fp120;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp12;
target[((hsi*150+42)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_y[vi] * fp117;
LIBINT2_REALTYPE fp113;
fp113 = fp112 + fp114;
LIBINT2_REALTYPE fp116;
fp116 = inteval->BO_y[vi] * fp118;
LIBINT2_REALTYPE fp115;
fp115 = fp113 + fp116;
LIBINT2_REALTYPE fp373;
fp373 = fp146 * fp115;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp13;
target[((hsi*150+41)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->BO_y[vi] * fp113;
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_y[vi] * fp112;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp107 + fp109;
LIBINT2_REALTYPE fp110;
fp110 = fp108 + fp111;
LIBINT2_REALTYPE fp375;
fp375 = fp146 * fp110;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp14;
target[((hsi*150+40)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = fp147 * fp134;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp11;
target[((hsi*150+39)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp361;
fp361 = fp144 * fp76;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp18;
target[((hsi*150+47)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_y[vi] * fp99;
LIBINT2_REALTYPE fp101;
fp101 = fp98 + fp102;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_y[vi] * fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp99 + fp104;
LIBINT2_REALTYPE fp106;
fp106 = inteval->BO_y[vi] * fp103;
LIBINT2_REALTYPE fp105;
fp105 = fp101 + fp106;
LIBINT2_REALTYPE fp307;
fp307 = fp141 * fp105;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp10;
target[((hsi*150+74)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_y[vi] * fp98;
LIBINT2_REALTYPE fp94;
fp94 = fp93 + fp95;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_y[vi] * fp101;
LIBINT2_REALTYPE fp96;
fp96 = fp94 + fp97;
LIBINT2_REALTYPE fp309;
fp309 = fp141 * fp96;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp11;
target[((hsi*150+73)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_y[vi] * fp93;
LIBINT2_REALTYPE fp89;
fp89 = fp88 + fp90;
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_y[vi] * fp94;
LIBINT2_REALTYPE fp91;
fp91 = fp89 + fp92;
LIBINT2_REALTYPE fp311;
fp311 = fp141 * fp91;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp12;
target[((hsi*150+72)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_y[vi] * fp88;
LIBINT2_REALTYPE fp84;
fp84 = fp83 + fp85;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_y[vi] * fp89;
LIBINT2_REALTYPE fp86;
fp86 = fp84 + fp87;
LIBINT2_REALTYPE fp313;
fp313 = fp141 * fp86;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp13;
target[((hsi*150+71)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_y[vi] * fp84;
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_y[vi] * fp83;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp78 + fp80;
LIBINT2_REALTYPE fp81;
fp81 = fp79 + fp82;
LIBINT2_REALTYPE fp315;
fp315 = fp141 * fp81;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp14;
target[((hsi*150+70)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp142 * fp105;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp11;
target[((hsi*150+69)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp142 * fp96;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp12;
target[((hsi*150+68)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp142 * fp91;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp13;
target[((hsi*150+67)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp343;
fp343 = fp141 * fp57;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp18;
target[((hsi*150+56)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp325;
fp325 = fp143 * fp105;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp12;
target[((hsi*150+65)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp143 * fp96;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp13;
target[((hsi*150+64)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp143 * fp91;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp14;
target[((hsi*150+63)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp144 * fp105;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp13;
target[((hsi*150+62)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp144 * fp96;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp14;
target[((hsi*150+61)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp145 * fp105;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp14;
target[((hsi*150+60)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = fp141 * fp76;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp15;
target[((hsi*150+59)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp141 * fp67;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp16;
target[((hsi*150+58)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp141 * fp62;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp17;
target[((hsi*150+57)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp323;
fp323 = fp142 * fp86;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp14;
target[((hsi*150+66)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = fp148 * fp91;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp19;
target[((hsi*150+18)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp421;
fp421 = fp149 * fp105;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp18;
target[((hsi*150+17)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp149 * fp96;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp19;
target[((hsi*150+16)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp425;
fp425 = fp150 * fp105;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp19;
target[((hsi*150+15)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = fp151 * fp134;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp15;
target[((hsi*150+14)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp429;
fp429 = fp151 * fp125;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp16;
target[((hsi*150+13)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp431;
fp431 = fp151 * fp120;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp17;
target[((hsi*150+12)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp433;
fp433 = fp151 * fp115;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp18;
target[((hsi*150+11)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp379;
fp379 = fp147 * fp125;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp12;
target[((hsi*150+38)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp437;
fp437 = fp152 * fp134;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp16;
target[((hsi*150+9)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp439;
fp439 = fp152 * fp125;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp17;
target[((hsi*150+8)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp441;
fp441 = fp152 * fp120;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp18;
target[((hsi*150+7)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp443;
fp443 = fp152 * fp115;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp19;
target[((hsi*150+6)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp445;
fp445 = fp153 * fp134;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp17;
target[((hsi*150+5)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp447;
fp447 = fp153 * fp125;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp18;
target[((hsi*150+4)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp449;
fp449 = fp153 * fp120;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp19;
target[((hsi*150+3)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp451;
fp451 = fp154 * fp134;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp18;
target[((hsi*150+2)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp453;
fp453 = fp154 * fp125;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp19;
target[((hsi*150+1)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp435;
fp435 = fp151 * fp110;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp19;
target[((hsi*150+10)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp381;
fp381 = fp147 * fp120;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp13;
target[((hsi*150+37)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp147 * fp115;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp14;
target[((hsi*150+36)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = fp148 * fp134;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp12;
target[((hsi*150+35)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp148 * fp125;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp13;
target[((hsi*150+34)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp148 * fp120;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp14;
target[((hsi*150+33)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp149 * fp134;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp13;
target[((hsi*150+32)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp149 * fp125;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp14;
target[((hsi*150+31)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp150 * fp134;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp14;
target[((hsi*150+30)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp417;
fp417 = fp148 * fp96;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp18;
target[((hsi*150+19)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp399;
fp399 = fp146 * fp96;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp16;
target[((hsi*150+28)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp146 * fp91;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp17;
target[((hsi*150+27)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp403;
fp403 = fp146 * fp86;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp18;
target[((hsi*150+26)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp146 * fp81;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp19;
target[((hsi*150+25)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp407;
fp407 = fp147 * fp105;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp16;
target[((hsi*150+24)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp147 * fp96;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp17;
target[((hsi*150+23)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp147 * fp91;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp18;
target[((hsi*150+22)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp147 * fp86;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp19;
target[((hsi*150+21)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp148 * fp105;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp17;
target[((hsi*150+20)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp397;
fp397 = fp146 * fp105;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp15;
target[((hsi*150+29)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp136 * fp81;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp9;
target[((hsi*150+130)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp137 * fp105;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp6;
target[((hsi*150+129)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp137 * fp96;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp7;
target[((hsi*150+128)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp137 * fp91;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp8;
target[((hsi*150+127)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp137 * fp86;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp9;
target[((hsi*150+126)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp138 * fp105;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp7;
target[((hsi*150+125)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp138 * fp96;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp8;
target[((hsi*150+124)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp138 * fp91;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp9;
target[((hsi*150+123)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp305;
fp305 = fp145 * fp134;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp9;
target[((hsi*150+75)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp139 * fp96;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp9;
target[((hsi*150+121)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp140 * fp105;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp9;
target[((hsi*150+120)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp136 * fp76;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp10;
target[((hsi*150+119)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp136 * fp67;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp11;
target[((hsi*150+118)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp136 * fp62;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp12;
target[((hsi*150+117)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp136 * fp57;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp13;
target[((hsi*150+116)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp136 * fp52;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp14;
target[((hsi*150+115)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp137 * fp76;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp11;
target[((hsi*150+114)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp211;
fp211 = fp139 * fp105;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp8;
target[((hsi*150+122)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp136 * fp134;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp0;
target[((hsi*150+149)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp136 * fp125;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp1;
target[((hsi*150+148)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp136 * fp120;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp2;
target[((hsi*150+147)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp136 * fp115;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp3;
target[((hsi*150+146)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp136 * fp110;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp4;
target[((hsi*150+145)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp137 * fp134;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp1;
target[((hsi*150+144)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp137 * fp125;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp2;
target[((hsi*150+143)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp137 * fp120;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp3;
target[((hsi*150+142)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp193;
fp193 = fp136 * fp86;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp8;
target[((hsi*150+131)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp175;
fp175 = fp138 * fp134;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp2;
target[((hsi*150+140)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp138 * fp125;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp3;
target[((hsi*150+139)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp138 * fp120;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp4;
target[((hsi*150+138)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp139 * fp134;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp3;
target[((hsi*150+137)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp139 * fp125;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp4;
target[((hsi*150+136)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp140 * fp134;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp4;
target[((hsi*150+135)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp136 * fp105;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp5;
target[((hsi*150+134)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp136 * fp96;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp6;
target[((hsi*150+133)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp136 * fp91;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp7;
target[((hsi*150+132)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp173;
fp173 = fp137 * fp115;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp4;
target[((hsi*150+141)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp31;
fp31 = fp30 + fp32;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp40;
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_y[vi] * fp36;
LIBINT2_REALTYPE fp33;
fp33 = fp31 + fp34;
LIBINT2_REALTYPE fp269;
fp269 = fp138 * fp33;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp19;
target[((hsi*150+93)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_y[vi] * fp41;
LIBINT2_REALTYPE fp43;
fp43 = fp40 + fp44;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_y[vi] * fp42;
LIBINT2_REALTYPE fp45;
fp45 = fp41 + fp46;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp47;
fp47 = fp43 + fp48;
LIBINT2_REALTYPE fp271;
fp271 = fp139 * fp47;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp18;
target[((hsi*150+92)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp38;
fp38 = fp36 + fp39;
LIBINT2_REALTYPE fp273;
fp273 = fp139 * fp38;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp19;
target[((hsi*150+91)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp140 * fp47;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp19;
target[((hsi*150+90)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp141 * fp134;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp5;
target[((hsi*150+89)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp141 * fp125;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp6;
target[((hsi*150+88)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp141 * fp120;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp7;
target[((hsi*150+87)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp141 * fp115;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp8;
target[((hsi*150+86)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp229;
fp229 = fp137 * fp67;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp12;
target[((hsi*150+113)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp287;
fp287 = fp142 * fp134;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp6;
target[((hsi*150+84)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp142 * fp125;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp7;
target[((hsi*150+83)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp142 * fp120;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp8;
target[((hsi*150+82)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp142 * fp115;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp9;
target[((hsi*150+81)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp143 * fp134;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp7;
target[((hsi*150+80)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp143 * fp125;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp8;
target[((hsi*150+79)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp143 * fp120;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp9;
target[((hsi*150+78)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp144 * fp134;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp8;
target[((hsi*150+77)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp144 * fp125;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp9;
target[((hsi*150+76)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp285;
fp285 = fp141 * fp110;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp9;
target[((hsi*150+85)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp231;
fp231 = fp137 * fp62;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp13;
target[((hsi*150+112)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp137 * fp57;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp14;
target[((hsi*150+111)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp138 * fp76;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp12;
target[((hsi*150+110)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp138 * fp67;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp13;
target[((hsi*150+109)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp138 * fp62;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp14;
target[((hsi*150+108)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp139 * fp76;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp13;
target[((hsi*150+107)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp139 * fp67;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp14;
target[((hsi*150+106)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp140 * fp76;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp14;
target[((hsi*150+105)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp267;
fp267 = fp138 * fp38;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp18;
target[((hsi*150+94)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp249;
fp249 = fp136 * fp38;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp16;
target[((hsi*150+103)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp136 * fp33;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp17;
target[((hsi*150+102)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_y[vi] * fp30;
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_y[vi] * fp31;
LIBINT2_REALTYPE fp28;
fp28 = fp26 + fp29;
LIBINT2_REALTYPE fp253;
fp253 = fp136 * fp28;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp18;
target[((hsi*150+101)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp255;
fp255 = fp136 * fp23;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp19;
target[((hsi*150+100)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp137 * fp47;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp16;
target[((hsi*150+99)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp137 * fp38;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp17;
target[((hsi*150+98)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp137 * fp33;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp18;
target[((hsi*150+97)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp137 * fp28;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp19;
target[((hsi*150+96)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp138 * fp47;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp17;
target[((hsi*150+95)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp247;
fp247 = fp136 * fp47;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp15;
target[((hsi*150+104)*1+lsi)*1] = fp246;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 456 */
}

#ifdef __cplusplus
};
#endif
