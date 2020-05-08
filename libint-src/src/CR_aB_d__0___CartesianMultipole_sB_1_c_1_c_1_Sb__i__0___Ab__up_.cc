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
void CR_aB_d__0___CartesianMultipole_sB_1_c_1_c_1_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src2[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src2[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp41;
LIBINT2_REALTYPE fp42;
fp42 = fp40 + fp43;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->BO_y[vi] * fp122;
LIBINT2_REALTYPE fp120;
fp120 = fp119 + fp121;
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->BO_x[vi] * fp163;
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
LIBINT2_REALTYPE fp409;
fp409 = fp164 * fp120;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp42;
target[((hsi*168+62)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_z[vi] * fp37;
LIBINT2_REALTYPE fp35;
fp35 = fp34 + fp36;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->BO_y[vi] * fp129;
LIBINT2_REALTYPE fp130;
fp130 = fp128 + fp131;
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = inteval->BO_x[vi] * fp166;
LIBINT2_REALTYPE fp167;
fp167 = fp169 + fp168;
LIBINT2_REALTYPE fp411;
fp411 = fp167 * fp130;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp35;
target[((hsi*168+61)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp37 + fp39;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->BO_y[vi] * fp128;
LIBINT2_REALTYPE fp126;
fp126 = fp125 + fp127;
LIBINT2_REALTYPE fp413;
fp413 = fp167 * fp126;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp38;
target[((hsi*168+60)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp124;
fp124 = inteval->BO_y[vi] * fp125;
LIBINT2_REALTYPE fp123;
fp123 = fp122 + fp124;
LIBINT2_REALTYPE fp415;
fp415 = fp167 * fp123;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp42;
target[((hsi*168+59)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = inteval->BO_x[vi] * fp169;
LIBINT2_REALTYPE fp170;
fp170 = fp173 + fp171;
LIBINT2_REALTYPE fp417;
fp417 = fp170 * fp130;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp38;
target[((hsi*168+58)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp419;
fp419 = fp170 * fp126;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp42;
target[((hsi*168+57)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp175;
fp175 = inteval->BO_x[vi] * fp173;
LIBINT2_REALTYPE fp172;
fp172 = 0.0000000000000000e+00 + src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp172 + fp175;
LIBINT2_REALTYPE fp421;
fp421 = fp174 * fp130;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp42;
target[((hsi*168+56)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp44 + fp46;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_y[vi] * fp107;
LIBINT2_REALTYPE fp108;
fp108 = fp106 + fp109;
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = inteval->BO_x[vi] * fp154;
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
LIBINT2_REALTYPE fp423;
fp423 = fp155 * fp108;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp45;
target[((hsi*168+55)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp48;
fp48 = fp47 + fp49;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->BO_y[vi] * fp106;
LIBINT2_REALTYPE fp104;
fp104 = fp103 + fp105;
LIBINT2_REALTYPE fp425;
fp425 = fp155 * fp104;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp48;
target[((hsi*168+54)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp64;
fp64 = fp62 + fp65;
LIBINT2_REALTYPE fp195;
fp195 = 0.0000000000000000e+00 + src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = inteval->BO_x[vi] * fp195;
LIBINT2_REALTYPE fp194;
fp194 = 0.0000000000000000e+00 + src0[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp194 + fp197;
LIBINT2_REALTYPE fp533;
fp533 = fp196 * fp130;
LIBINT2_REALTYPE fp532;
fp532 = fp533 * fp64;
target[((hsi*168+0)*1+lsi)*1] = fp532;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp56;
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_y[vi] * fp100;
LIBINT2_REALTYPE fp98;
fp98 = fp97 + fp99;
LIBINT2_REALTYPE fp429;
fp429 = fp155 * fp98;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp54;
target[((hsi*168+52)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src2[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_z[vi] * fp59;
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->BO_y[vi] * fp97;
LIBINT2_REALTYPE fp95;
fp95 = fp94 + fp96;
LIBINT2_REALTYPE fp431;
fp431 = fp155 * fp95;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp57;
target[((hsi*168+51)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_z[vi] * fp62;
LIBINT2_REALTYPE fp60;
fp60 = fp59 + fp61;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_y[vi] * fp94;
LIBINT2_REALTYPE fp92;
fp92 = fp91 + fp93;
LIBINT2_REALTYPE fp433;
fp433 = fp155 * fp92;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp60;
target[((hsi*168+50)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_y[vi] * fp91;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src1[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp88 + fp90;
LIBINT2_REALTYPE fp435;
fp435 = fp155 * fp89;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp64;
target[((hsi*168+49)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = inteval->BO_x[vi] * fp157;
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
LIBINT2_REALTYPE fp437;
fp437 = fp158 * fp108;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp48;
target[((hsi*168+48)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp51;
fp51 = fp50 + fp52;
LIBINT2_REALTYPE fp439;
fp439 = fp158 * fp104;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp51;
target[((hsi*168+47)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_y[vi] * fp103;
LIBINT2_REALTYPE fp101;
fp101 = fp100 + fp102;
LIBINT2_REALTYPE fp441;
fp441 = fp158 * fp101;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp54;
target[((hsi*168+46)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp443;
fp443 = fp158 * fp98;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp57;
target[((hsi*168+45)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp445;
fp445 = fp158 * fp95;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp60;
target[((hsi*168+44)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp447;
fp447 = fp158 * fp92;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp64;
target[((hsi*168+43)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp427;
fp427 = fp155 * fp101;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp51;
target[((hsi*168+53)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp367;
fp367 = fp155 * fp130;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp23;
target[((hsi*168+83)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp369;
fp369 = fp155 * fp126;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp26;
target[((hsi*168+82)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp371;
fp371 = fp155 * fp123;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp29;
target[((hsi*168+81)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp31 + fp33;
LIBINT2_REALTYPE fp373;
fp373 = fp155 * fp120;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp32;
target[((hsi*168+80)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->BO_y[vi] * fp119;
LIBINT2_REALTYPE fp117;
fp117 = fp116 + fp118;
LIBINT2_REALTYPE fp375;
fp375 = fp155 * fp117;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp35;
target[((hsi*168+79)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->BO_y[vi] * fp116;
LIBINT2_REALTYPE fp114;
fp114 = fp113 + fp115;
LIBINT2_REALTYPE fp377;
fp377 = fp155 * fp114;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp38;
target[((hsi*168+78)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp112;
fp112 = inteval->BO_y[vi] * fp113;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp110 + fp112;
LIBINT2_REALTYPE fp379;
fp379 = fp155 * fp111;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp42;
target[((hsi*168+77)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp158 * fp130;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp26;
target[((hsi*168+76)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp158 * fp126;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp29;
target[((hsi*168+75)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp407;
fp407 = fp164 * fp123;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp38;
target[((hsi*168+63)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp387;
fp387 = fp158 * fp120;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp35;
target[((hsi*168+73)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp158 * fp117;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp38;
target[((hsi*168+72)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp158 * fp114;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp42;
target[((hsi*168+71)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp162;
fp162 = inteval->BO_x[vi] * fp160;
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp393;
fp393 = fp161 * fp130;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp29;
target[((hsi*168+70)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp161 * fp126;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp32;
target[((hsi*168+69)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp397;
fp397 = fp161 * fp123;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp35;
target[((hsi*168+68)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp399;
fp399 = fp161 * fp120;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp38;
target[((hsi*168+67)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp161 * fp117;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp42;
target[((hsi*168+66)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp403;
fp403 = fp164 * fp130;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp32;
target[((hsi*168+65)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp164 * fp126;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp35;
target[((hsi*168+64)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp385;
fp385 = fp158 * fp123;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp32;
target[((hsi*168+74)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + src0[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = inteval->BO_x[vi] * fp179;
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
LIBINT2_REALTYPE fp493;
fp493 = fp180 * fp130;
LIBINT2_REALTYPE fp492;
fp492 = fp493 * fp48;
target[((hsi*168+20)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp495;
fp495 = fp180 * fp126;
LIBINT2_REALTYPE fp494;
fp494 = fp495 * fp51;
target[((hsi*168+19)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp497;
fp497 = fp180 * fp123;
LIBINT2_REALTYPE fp496;
fp496 = fp497 * fp54;
target[((hsi*168+18)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp499;
fp499 = fp180 * fp120;
LIBINT2_REALTYPE fp498;
fp498 = fp499 * fp57;
target[((hsi*168+17)*1+lsi)*1] = fp498;
LIBINT2_REALTYPE fp501;
fp501 = fp180 * fp117;
LIBINT2_REALTYPE fp500;
fp500 = fp501 * fp60;
target[((hsi*168+16)*1+lsi)*1] = fp500;
LIBINT2_REALTYPE fp503;
fp503 = fp180 * fp114;
LIBINT2_REALTYPE fp502;
fp502 = fp503 * fp64;
target[((hsi*168+15)*1+lsi)*1] = fp502;
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + src0[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->BO_x[vi] * fp182;
LIBINT2_REALTYPE fp183;
fp183 = fp185 + fp184;
LIBINT2_REALTYPE fp505;
fp505 = fp183 * fp130;
LIBINT2_REALTYPE fp504;
fp504 = fp505 * fp51;
target[((hsi*168+14)*1+lsi)*1] = fp504;
LIBINT2_REALTYPE fp507;
fp507 = fp183 * fp126;
LIBINT2_REALTYPE fp506;
fp506 = fp507 * fp54;
target[((hsi*168+13)*1+lsi)*1] = fp506;
LIBINT2_REALTYPE fp509;
fp509 = fp183 * fp123;
LIBINT2_REALTYPE fp508;
fp508 = fp509 * fp57;
target[((hsi*168+12)*1+lsi)*1] = fp508;
LIBINT2_REALTYPE fp449;
fp449 = fp161 * fp108;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp51;
target[((hsi*168+42)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp513;
fp513 = fp183 * fp117;
LIBINT2_REALTYPE fp512;
fp512 = fp513 * fp64;
target[((hsi*168+10)*1+lsi)*1] = fp512;
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + src0[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = inteval->BO_x[vi] * fp185;
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
LIBINT2_REALTYPE fp515;
fp515 = fp186 * fp130;
LIBINT2_REALTYPE fp514;
fp514 = fp515 * fp54;
target[((hsi*168+9)*1+lsi)*1] = fp514;
LIBINT2_REALTYPE fp517;
fp517 = fp186 * fp126;
LIBINT2_REALTYPE fp516;
fp516 = fp517 * fp57;
target[((hsi*168+8)*1+lsi)*1] = fp516;
LIBINT2_REALTYPE fp519;
fp519 = fp186 * fp123;
LIBINT2_REALTYPE fp518;
fp518 = fp519 * fp60;
target[((hsi*168+7)*1+lsi)*1] = fp518;
LIBINT2_REALTYPE fp521;
fp521 = fp186 * fp120;
LIBINT2_REALTYPE fp520;
fp520 = fp521 * fp64;
target[((hsi*168+6)*1+lsi)*1] = fp520;
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->BO_x[vi] * fp188;
LIBINT2_REALTYPE fp189;
fp189 = fp191 + fp190;
LIBINT2_REALTYPE fp523;
fp523 = fp189 * fp130;
LIBINT2_REALTYPE fp522;
fp522 = fp523 * fp57;
target[((hsi*168+5)*1+lsi)*1] = fp522;
LIBINT2_REALTYPE fp525;
fp525 = fp189 * fp126;
LIBINT2_REALTYPE fp524;
fp524 = fp525 * fp60;
target[((hsi*168+4)*1+lsi)*1] = fp524;
LIBINT2_REALTYPE fp527;
fp527 = fp189 * fp123;
LIBINT2_REALTYPE fp526;
fp526 = fp527 * fp64;
target[((hsi*168+3)*1+lsi)*1] = fp526;
LIBINT2_REALTYPE fp193;
fp193 = inteval->BO_x[vi] * fp191;
LIBINT2_REALTYPE fp192;
fp192 = fp195 + fp193;
LIBINT2_REALTYPE fp529;
fp529 = fp192 * fp130;
LIBINT2_REALTYPE fp528;
fp528 = fp529 * fp60;
target[((hsi*168+2)*1+lsi)*1] = fp528;
LIBINT2_REALTYPE fp531;
fp531 = fp192 * fp126;
LIBINT2_REALTYPE fp530;
fp530 = fp531 * fp64;
target[((hsi*168+1)*1+lsi)*1] = fp530;
LIBINT2_REALTYPE fp511;
fp511 = fp183 * fp120;
LIBINT2_REALTYPE fp510;
fp510 = fp511 * fp60;
target[((hsi*168+11)*1+lsi)*1] = fp510;
LIBINT2_REALTYPE fp451;
fp451 = fp161 * fp104;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp54;
target[((hsi*168+41)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp453;
fp453 = fp161 * fp101;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp57;
target[((hsi*168+40)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp455;
fp455 = fp161 * fp98;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp60;
target[((hsi*168+39)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp457;
fp457 = fp161 * fp95;
LIBINT2_REALTYPE fp456;
fp456 = fp457 * fp64;
target[((hsi*168+38)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp459;
fp459 = fp164 * fp108;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp54;
target[((hsi*168+37)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp461;
fp461 = fp164 * fp104;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp57;
target[((hsi*168+36)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp463;
fp463 = fp164 * fp101;
LIBINT2_REALTYPE fp462;
fp462 = fp463 * fp60;
target[((hsi*168+35)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp465;
fp465 = fp164 * fp98;
LIBINT2_REALTYPE fp464;
fp464 = fp465 * fp64;
target[((hsi*168+34)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp467;
fp467 = fp167 * fp108;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp57;
target[((hsi*168+33)*1+lsi)*1] = fp466;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->BO_x[vi] * fp176;
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp491;
fp491 = fp177 * fp111;
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp64;
target[((hsi*168+21)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp471;
fp471 = fp167 * fp101;
LIBINT2_REALTYPE fp470;
fp470 = fp471 * fp64;
target[((hsi*168+31)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp473;
fp473 = fp170 * fp108;
LIBINT2_REALTYPE fp472;
fp472 = fp473 * fp60;
target[((hsi*168+30)*1+lsi)*1] = fp472;
LIBINT2_REALTYPE fp475;
fp475 = fp170 * fp104;
LIBINT2_REALTYPE fp474;
fp474 = fp475 * fp64;
target[((hsi*168+29)*1+lsi)*1] = fp474;
LIBINT2_REALTYPE fp477;
fp477 = fp174 * fp108;
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp64;
target[((hsi*168+28)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp479;
fp479 = fp177 * fp130;
LIBINT2_REALTYPE fp478;
fp478 = fp479 * fp45;
target[((hsi*168+27)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp481;
fp481 = fp177 * fp126;
LIBINT2_REALTYPE fp480;
fp480 = fp481 * fp48;
target[((hsi*168+26)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp483;
fp483 = fp177 * fp123;
LIBINT2_REALTYPE fp482;
fp482 = fp483 * fp51;
target[((hsi*168+25)*1+lsi)*1] = fp482;
LIBINT2_REALTYPE fp485;
fp485 = fp177 * fp120;
LIBINT2_REALTYPE fp484;
fp484 = fp485 * fp54;
target[((hsi*168+24)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp487;
fp487 = fp177 * fp117;
LIBINT2_REALTYPE fp486;
fp486 = fp487 * fp57;
target[((hsi*168+23)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp489;
fp489 = fp177 * fp114;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp60;
target[((hsi*168+22)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp469;
fp469 = fp167 * fp104;
LIBINT2_REALTYPE fp468;
fp468 = fp469 * fp60;
target[((hsi*168+32)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp20;
fp20 = fp18 + fp21;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->BO_x[vi] * fp141;
LIBINT2_REALTYPE fp142;
fp142 = fp144 + fp143;
LIBINT2_REALTYPE fp241;
fp241 = fp142 * fp120;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp20;
target[((hsi*168+146)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = inteval->BO_x[vi] * fp144;
LIBINT2_REALTYPE fp145;
fp145 = fp147 + fp146;
LIBINT2_REALTYPE fp243;
fp243 = fp145 * fp130;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp13;
target[((hsi*168+145)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp16;
fp16 = fp15 + fp17;
LIBINT2_REALTYPE fp245;
fp245 = fp145 * fp126;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp16;
target[((hsi*168+144)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp145 * fp123;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp20;
target[((hsi*168+143)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_x[vi] * fp147;
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
LIBINT2_REALTYPE fp249;
fp249 = fp148 * fp130;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp16;
target[((hsi*168+142)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp148 * fp126;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp20;
target[((hsi*168+141)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp153;
fp153 = inteval->BO_x[vi] * fp151;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp150 + fp153;
LIBINT2_REALTYPE fp253;
fp253 = fp152 * fp130;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp20;
target[((hsi*168+140)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->BO_x[vi] * fp132;
LIBINT2_REALTYPE fp133;
fp133 = fp135 + fp134;
LIBINT2_REALTYPE fp255;
fp255 = fp133 * fp108;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp23;
target[((hsi*168+139)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp133 * fp104;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp26;
target[((hsi*168+138)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src1[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_y[vi] * fp85;
LIBINT2_REALTYPE fp86;
fp86 = fp84 + fp87;
LIBINT2_REALTYPE fp365;
fp365 = fp152 * fp86;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp64;
target[((hsi*168+84)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp261;
fp261 = fp133 * fp98;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp32;
target[((hsi*168+136)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp133 * fp95;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp35;
target[((hsi*168+135)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp133 * fp92;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp38;
target[((hsi*168+134)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp133 * fp89;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp42;
target[((hsi*168+133)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->BO_x[vi] * fp135;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
LIBINT2_REALTYPE fp269;
fp269 = fp136 * fp108;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp26;
target[((hsi*168+132)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp136 * fp104;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp29;
target[((hsi*168+131)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp136 * fp101;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp32;
target[((hsi*168+130)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp136 * fp98;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp35;
target[((hsi*168+129)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp136 * fp95;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp38;
target[((hsi*168+128)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp136 * fp92;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp42;
target[((hsi*168+127)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp259;
fp259 = fp133 * fp101;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp29;
target[((hsi*168+137)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp199;
fp199 = fp133 * fp130;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp1;
target[((hsi*168+167)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp201;
fp201 = fp133 * fp126;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp4;
target[((hsi*168+166)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp203;
fp203 = fp133 * fp123;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp7;
target[((hsi*168+165)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp205;
fp205 = fp133 * fp120;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp10;
target[((hsi*168+164)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp133 * fp117;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp13;
target[((hsi*168+163)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp133 * fp114;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp16;
target[((hsi*168+162)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp133 * fp111;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp20;
target[((hsi*168+161)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp136 * fp130;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp4;
target[((hsi*168+160)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp136 * fp126;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp7;
target[((hsi*168+159)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp239;
fp239 = fp142 * fp123;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp16;
target[((hsi*168+147)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp219;
fp219 = fp136 * fp120;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp13;
target[((hsi*168+157)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp136 * fp117;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp16;
target[((hsi*168+156)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp136 * fp114;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp20;
target[((hsi*168+155)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp140;
fp140 = inteval->BO_x[vi] * fp138;
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
LIBINT2_REALTYPE fp225;
fp225 = fp139 * fp130;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp7;
target[((hsi*168+154)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp139 * fp126;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp10;
target[((hsi*168+153)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp139 * fp123;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp13;
target[((hsi*168+152)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp139 * fp120;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp16;
target[((hsi*168+151)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp139 * fp117;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp20;
target[((hsi*168+150)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp142 * fp130;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp10;
target[((hsi*168+149)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp142 * fp126;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp13;
target[((hsi*168+148)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp217;
fp217 = fp136 * fp123;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp10;
target[((hsi*168+158)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp325;
fp325 = fp136 * fp86;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp48;
target[((hsi*168+104)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src1[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_y[vi] * fp84;
LIBINT2_REALTYPE fp82;
fp82 = fp81 + fp83;
LIBINT2_REALTYPE fp327;
fp327 = fp136 * fp82;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp51;
target[((hsi*168+103)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src1[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_y[vi] * fp81;
LIBINT2_REALTYPE fp79;
fp79 = fp78 + fp80;
LIBINT2_REALTYPE fp329;
fp329 = fp136 * fp79;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp54;
target[((hsi*168+102)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_y[vi] * fp78;
LIBINT2_REALTYPE fp76;
fp76 = fp75 + fp77;
LIBINT2_REALTYPE fp331;
fp331 = fp136 * fp76;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp57;
target[((hsi*168+101)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp73;
fp73 = fp72 + fp74;
LIBINT2_REALTYPE fp333;
fp333 = fp136 * fp73;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp60;
target[((hsi*168+100)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_y[vi] * fp72;
LIBINT2_REALTYPE fp70;
fp70 = fp69 + fp71;
LIBINT2_REALTYPE fp335;
fp335 = fp136 * fp70;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp64;
target[((hsi*168+99)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp139 * fp86;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp51;
target[((hsi*168+98)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp139 * fp82;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp54;
target[((hsi*168+97)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp139 * fp79;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp57;
target[((hsi*168+96)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp281;
fp281 = fp139 * fp108;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp29;
target[((hsi*168+126)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp345;
fp345 = fp139 * fp73;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp64;
target[((hsi*168+94)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp142 * fp86;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp54;
target[((hsi*168+93)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp142 * fp82;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp57;
target[((hsi*168+92)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp142 * fp79;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp60;
target[((hsi*168+91)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp142 * fp76;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp64;
target[((hsi*168+90)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = fp145 * fp86;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp57;
target[((hsi*168+89)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp145 * fp82;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp60;
target[((hsi*168+88)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp145 * fp79;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp64;
target[((hsi*168+87)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = fp148 * fp86;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp60;
target[((hsi*168+86)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp148 * fp82;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp64;
target[((hsi*168+85)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp343;
fp343 = fp139 * fp76;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp60;
target[((hsi*168+95)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp283;
fp283 = fp139 * fp104;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp32;
target[((hsi*168+125)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp139 * fp101;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp35;
target[((hsi*168+124)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp139 * fp98;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp38;
target[((hsi*168+123)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp139 * fp95;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp42;
target[((hsi*168+122)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp142 * fp108;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp32;
target[((hsi*168+121)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp142 * fp104;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp35;
target[((hsi*168+120)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp142 * fp101;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp38;
target[((hsi*168+119)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp142 * fp98;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp42;
target[((hsi*168+118)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp145 * fp108;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp35;
target[((hsi*168+117)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_y[vi] * fp69;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp66 + fp68;
LIBINT2_REALTYPE fp323;
fp323 = fp133 * fp67;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp64;
target[((hsi*168+105)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp303;
fp303 = fp145 * fp101;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp42;
target[((hsi*168+115)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp148 * fp108;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp38;
target[((hsi*168+114)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp148 * fp104;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp42;
target[((hsi*168+113)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp152 * fp108;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp42;
target[((hsi*168+112)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp133 * fp86;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp45;
target[((hsi*168+111)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = fp133 * fp82;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp48;
target[((hsi*168+110)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp133 * fp79;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp51;
target[((hsi*168+109)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp133 * fp76;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp54;
target[((hsi*168+108)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp133 * fp73;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp57;
target[((hsi*168+107)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp133 * fp70;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp60;
target[((hsi*168+106)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp301;
fp301 = fp145 * fp104;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp38;
target[((hsi*168+116)*1+lsi)*1] = fp300;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 534 */
}

#ifdef __cplusplus
};
#endif
