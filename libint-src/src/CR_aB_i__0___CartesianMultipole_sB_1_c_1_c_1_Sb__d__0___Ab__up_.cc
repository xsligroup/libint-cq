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
void CR_aB_i__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src2[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_z[vi] * fp66;
LIBINT2_REALTYPE fp64;
fp64 = fp63 + fp65;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src0[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + src0[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->BO_x[vi] * fp163;
LIBINT2_REALTYPE fp164;
fp164 = fp167 + fp165;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src1[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src1[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_y[vi] * fp97;
LIBINT2_REALTYPE fp98;
fp98 = fp96 + fp99;
LIBINT2_REALTYPE fp421;
fp421 = fp164 * fp98;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp64;
target[((hsi*168+62)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src2[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_z[vi] * fp67;
LIBINT2_REALTYPE fp68;
fp68 = fp66 + fp69;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src1[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_y[vi] * fp96;
LIBINT2_REALTYPE fp94;
fp94 = fp93 + fp95;
LIBINT2_REALTYPE fp423;
fp423 = fp164 * fp94;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp68;
target[((hsi*168+61)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp169;
fp169 = inteval->BO_x[vi] * fp167;
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + src0[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp166 + fp169;
LIBINT2_REALTYPE fp425;
fp425 = fp168 * fp98;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp68;
target[((hsi*168+60)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp30 + fp32;
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src1[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src1[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->BO_y[vi] * fp137;
LIBINT2_REALTYPE fp138;
fp138 = fp136 + fp139;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src0[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + src0[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->BO_x[vi] * fp170;
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp427;
fp427 = fp171 * fp138;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp31;
target[((hsi*168+59)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp34;
fp34 = fp33 + fp35;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src1[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->BO_y[vi] * fp136;
LIBINT2_REALTYPE fp134;
fp134 = fp133 + fp135;
LIBINT2_REALTYPE fp429;
fp429 = fp171 * fp134;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp34;
target[((hsi*168+58)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp37;
LIBINT2_REALTYPE fp38;
fp38 = fp36 + fp39;
LIBINT2_REALTYPE fp132;
fp132 = inteval->BO_y[vi] * fp133;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src1[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp130 + fp132;
LIBINT2_REALTYPE fp431;
fp431 = fp171 * fp131;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp38;
target[((hsi*168+57)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src0[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = inteval->BO_x[vi] * fp173;
LIBINT2_REALTYPE fp174;
fp174 = fp177 + fp175;
LIBINT2_REALTYPE fp433;
fp433 = fp174 * fp138;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp34;
target[((hsi*168+56)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp435;
fp435 = fp174 * fp134;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp38;
target[((hsi*168+55)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp179;
fp179 = inteval->BO_x[vi] * fp177;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src0[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp176 + fp179;
LIBINT2_REALTYPE fp437;
fp437 = fp178 * fp138;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp38;
target[((hsi*168+54)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp207;
fp207 = 0.0000000000000000e+00 + src0[((hsi*42+38)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = inteval->BO_x[vi] * fp207;
LIBINT2_REALTYPE fp206;
fp206 = 0.0000000000000000e+00 + src0[((hsi*42+39)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp206 + fp209;
LIBINT2_REALTYPE fp545;
fp545 = fp208 * fp138;
LIBINT2_REALTYPE fp544;
fp544 = fp545 * fp68;
target[((hsi*168+0)*1+lsi)*1] = fp544;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src2[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_z[vi] * fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp43 + fp45;
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src1[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src1[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->BO_y[vi] * fp126;
LIBINT2_REALTYPE fp124;
fp124 = fp123 + fp125;
LIBINT2_REALTYPE fp441;
fp441 = fp171 * fp124;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp44;
target[((hsi*168+52)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp48;
fp48 = fp46 + fp49;
LIBINT2_REALTYPE fp122;
fp122 = inteval->BO_y[vi] * fp123;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src1[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp120 + fp122;
LIBINT2_REALTYPE fp443;
fp443 = fp171 * fp121;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp48;
target[((hsi*168+51)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src1[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->BO_y[vi] * fp127;
LIBINT2_REALTYPE fp128;
fp128 = fp126 + fp129;
LIBINT2_REALTYPE fp445;
fp445 = fp174 * fp128;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp44;
target[((hsi*168+50)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp447;
fp447 = fp174 * fp124;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp48;
target[((hsi*168+49)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp449;
fp449 = fp178 * fp128;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp48;
target[((hsi*168+48)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp50 + fp52;
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->BO_y[vi] * fp117;
LIBINT2_REALTYPE fp118;
fp118 = fp116 + fp119;
LIBINT2_REALTYPE fp451;
fp451 = fp171 * fp118;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp51;
target[((hsi*168+47)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp56;
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src1[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->BO_y[vi] * fp116;
LIBINT2_REALTYPE fp114;
fp114 = fp113 + fp115;
LIBINT2_REALTYPE fp453;
fp453 = fp171 * fp114;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp54;
target[((hsi*168+46)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src2[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_z[vi] * fp57;
LIBINT2_REALTYPE fp58;
fp58 = fp56 + fp59;
LIBINT2_REALTYPE fp112;
fp112 = inteval->BO_y[vi] * fp113;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src1[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp110 + fp112;
LIBINT2_REALTYPE fp455;
fp455 = fp171 * fp111;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp58;
target[((hsi*168+45)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp457;
fp457 = fp174 * fp118;
LIBINT2_REALTYPE fp456;
fp456 = fp457 * fp54;
target[((hsi*168+44)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp459;
fp459 = fp174 * fp114;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp58;
target[((hsi*168+43)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_z[vi] * fp43;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src2[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp40 + fp42;
LIBINT2_REALTYPE fp439;
fp439 = fp171 * fp128;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp41;
target[((hsi*168+53)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = inteval->BO_x[vi] * fp160;
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp379;
fp379 = fp161 * fp128;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp31;
target[((hsi*168+83)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp161 * fp124;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp34;
target[((hsi*168+82)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp161 * fp121;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp38;
target[((hsi*168+81)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = fp164 * fp128;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp34;
target[((hsi*168+80)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp164 * fp124;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp38;
target[((hsi*168+79)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp168 * fp128;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp38;
target[((hsi*168+78)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp161 * fp118;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp41;
target[((hsi*168+77)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp161 * fp114;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp44;
target[((hsi*168+76)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp161 * fp111;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp48;
target[((hsi*168+75)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_y[vi] * fp93;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp90 + fp92;
LIBINT2_REALTYPE fp419;
fp419 = fp161 * fp91;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp68;
target[((hsi*168+63)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp399;
fp399 = fp164 * fp114;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp48;
target[((hsi*168+73)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp168 * fp118;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp48;
target[((hsi*168+72)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src1[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src1[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_y[vi] * fp107;
LIBINT2_REALTYPE fp108;
fp108 = fp106 + fp109;
LIBINT2_REALTYPE fp403;
fp403 = fp161 * fp108;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp51;
target[((hsi*168+71)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->BO_y[vi] * fp106;
LIBINT2_REALTYPE fp104;
fp104 = fp103 + fp105;
LIBINT2_REALTYPE fp405;
fp405 = fp161 * fp104;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp54;
target[((hsi*168+70)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_y[vi] * fp103;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src1[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp100 + fp102;
LIBINT2_REALTYPE fp407;
fp407 = fp161 * fp101;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp58;
target[((hsi*168+69)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp164 * fp108;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp54;
target[((hsi*168+68)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp164 * fp104;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp58;
target[((hsi*168+67)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp168 * fp108;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp58;
target[((hsi*168+66)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src2[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp60 + fp62;
LIBINT2_REALTYPE fp415;
fp415 = fp161 * fp98;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp61;
target[((hsi*168+65)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp417;
fp417 = fp161 * fp94;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp64;
target[((hsi*168+64)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp397;
fp397 = fp164 * fp118;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp44;
target[((hsi*168+74)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp187;
fp187 = 0.0000000000000000e+00 + src0[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = 0.0000000000000000e+00 + src0[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->BO_x[vi] * fp183;
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
LIBINT2_REALTYPE fp505;
fp505 = fp184 * fp118;
LIBINT2_REALTYPE fp504;
fp504 = fp505 * fp64;
target[((hsi*168+20)*1+lsi)*1] = fp504;
LIBINT2_REALTYPE fp507;
fp507 = fp184 * fp114;
LIBINT2_REALTYPE fp506;
fp506 = fp507 * fp68;
target[((hsi*168+19)*1+lsi)*1] = fp506;
LIBINT2_REALTYPE fp189;
fp189 = inteval->BO_x[vi] * fp187;
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + src0[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp186 + fp189;
LIBINT2_REALTYPE fp509;
fp509 = fp188 * fp118;
LIBINT2_REALTYPE fp508;
fp508 = fp509 * fp68;
target[((hsi*168+18)*1+lsi)*1] = fp508;
LIBINT2_REALTYPE fp193;
fp193 = 0.0000000000000000e+00 + src0[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + src0[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = inteval->BO_x[vi] * fp190;
LIBINT2_REALTYPE fp191;
fp191 = fp193 + fp192;
LIBINT2_REALTYPE fp511;
fp511 = fp191 * fp138;
LIBINT2_REALTYPE fp510;
fp510 = fp511 * fp51;
target[((hsi*168+17)*1+lsi)*1] = fp510;
LIBINT2_REALTYPE fp513;
fp513 = fp191 * fp134;
LIBINT2_REALTYPE fp512;
fp512 = fp513 * fp54;
target[((hsi*168+16)*1+lsi)*1] = fp512;
LIBINT2_REALTYPE fp515;
fp515 = fp191 * fp131;
LIBINT2_REALTYPE fp514;
fp514 = fp515 * fp58;
target[((hsi*168+15)*1+lsi)*1] = fp514;
LIBINT2_REALTYPE fp197;
fp197 = 0.0000000000000000e+00 + src0[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->BO_x[vi] * fp193;
LIBINT2_REALTYPE fp194;
fp194 = fp197 + fp195;
LIBINT2_REALTYPE fp517;
fp517 = fp194 * fp138;
LIBINT2_REALTYPE fp516;
fp516 = fp517 * fp54;
target[((hsi*168+14)*1+lsi)*1] = fp516;
LIBINT2_REALTYPE fp519;
fp519 = fp194 * fp134;
LIBINT2_REALTYPE fp518;
fp518 = fp519 * fp58;
target[((hsi*168+13)*1+lsi)*1] = fp518;
LIBINT2_REALTYPE fp199;
fp199 = inteval->BO_x[vi] * fp197;
LIBINT2_REALTYPE fp196;
fp196 = 0.0000000000000000e+00 + src0[((hsi*42+33)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp196 + fp199;
LIBINT2_REALTYPE fp521;
fp521 = fp198 * fp138;
LIBINT2_REALTYPE fp520;
fp520 = fp521 * fp58;
target[((hsi*168+12)*1+lsi)*1] = fp520;
LIBINT2_REALTYPE fp461;
fp461 = fp178 * fp118;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp58;
target[((hsi*168+42)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp525;
fp525 = fp191 * fp124;
LIBINT2_REALTYPE fp524;
fp524 = fp525 * fp64;
target[((hsi*168+10)*1+lsi)*1] = fp524;
LIBINT2_REALTYPE fp527;
fp527 = fp191 * fp121;
LIBINT2_REALTYPE fp526;
fp526 = fp527 * fp68;
target[((hsi*168+9)*1+lsi)*1] = fp526;
LIBINT2_REALTYPE fp529;
fp529 = fp194 * fp128;
LIBINT2_REALTYPE fp528;
fp528 = fp529 * fp64;
target[((hsi*168+8)*1+lsi)*1] = fp528;
LIBINT2_REALTYPE fp531;
fp531 = fp194 * fp124;
LIBINT2_REALTYPE fp530;
fp530 = fp531 * fp68;
target[((hsi*168+7)*1+lsi)*1] = fp530;
LIBINT2_REALTYPE fp533;
fp533 = fp198 * fp128;
LIBINT2_REALTYPE fp532;
fp532 = fp533 * fp68;
target[((hsi*168+6)*1+lsi)*1] = fp532;
LIBINT2_REALTYPE fp203;
fp203 = 0.0000000000000000e+00 + src0[((hsi*42+37)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = 0.0000000000000000e+00 + src0[((hsi*42+36)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->BO_x[vi] * fp200;
LIBINT2_REALTYPE fp201;
fp201 = fp203 + fp202;
LIBINT2_REALTYPE fp535;
fp535 = fp201 * fp138;
LIBINT2_REALTYPE fp534;
fp534 = fp535 * fp61;
target[((hsi*168+5)*1+lsi)*1] = fp534;
LIBINT2_REALTYPE fp537;
fp537 = fp201 * fp134;
LIBINT2_REALTYPE fp536;
fp536 = fp537 * fp64;
target[((hsi*168+4)*1+lsi)*1] = fp536;
LIBINT2_REALTYPE fp539;
fp539 = fp201 * fp131;
LIBINT2_REALTYPE fp538;
fp538 = fp539 * fp68;
target[((hsi*168+3)*1+lsi)*1] = fp538;
LIBINT2_REALTYPE fp205;
fp205 = inteval->BO_x[vi] * fp203;
LIBINT2_REALTYPE fp204;
fp204 = fp207 + fp205;
LIBINT2_REALTYPE fp541;
fp541 = fp204 * fp138;
LIBINT2_REALTYPE fp540;
fp540 = fp541 * fp64;
target[((hsi*168+2)*1+lsi)*1] = fp540;
LIBINT2_REALTYPE fp543;
fp543 = fp204 * fp134;
LIBINT2_REALTYPE fp542;
fp542 = fp543 * fp68;
target[((hsi*168+1)*1+lsi)*1] = fp542;
LIBINT2_REALTYPE fp523;
fp523 = fp191 * fp128;
LIBINT2_REALTYPE fp522;
fp522 = fp523 * fp61;
target[((hsi*168+11)*1+lsi)*1] = fp522;
LIBINT2_REALTYPE fp463;
fp463 = fp171 * fp108;
LIBINT2_REALTYPE fp462;
fp462 = fp463 * fp61;
target[((hsi*168+41)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp465;
fp465 = fp171 * fp104;
LIBINT2_REALTYPE fp464;
fp464 = fp465 * fp64;
target[((hsi*168+40)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp467;
fp467 = fp171 * fp101;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp68;
target[((hsi*168+39)*1+lsi)*1] = fp466;
LIBINT2_REALTYPE fp469;
fp469 = fp174 * fp108;
LIBINT2_REALTYPE fp468;
fp468 = fp469 * fp64;
target[((hsi*168+38)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp471;
fp471 = fp174 * fp104;
LIBINT2_REALTYPE fp470;
fp470 = fp471 * fp68;
target[((hsi*168+37)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp473;
fp473 = fp178 * fp108;
LIBINT2_REALTYPE fp472;
fp472 = fp473 * fp68;
target[((hsi*168+36)*1+lsi)*1] = fp472;
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + src0[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = inteval->BO_x[vi] * fp180;
LIBINT2_REALTYPE fp181;
fp181 = fp183 + fp182;
LIBINT2_REALTYPE fp475;
fp475 = fp181 * fp138;
LIBINT2_REALTYPE fp474;
fp474 = fp475 * fp41;
target[((hsi*168+35)*1+lsi)*1] = fp474;
LIBINT2_REALTYPE fp477;
fp477 = fp181 * fp134;
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp44;
target[((hsi*168+34)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp479;
fp479 = fp181 * fp131;
LIBINT2_REALTYPE fp478;
fp478 = fp479 * fp48;
target[((hsi*168+33)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp503;
fp503 = fp181 * fp111;
LIBINT2_REALTYPE fp502;
fp502 = fp503 * fp68;
target[((hsi*168+21)*1+lsi)*1] = fp502;
LIBINT2_REALTYPE fp483;
fp483 = fp184 * fp134;
LIBINT2_REALTYPE fp482;
fp482 = fp483 * fp48;
target[((hsi*168+31)*1+lsi)*1] = fp482;
LIBINT2_REALTYPE fp485;
fp485 = fp188 * fp138;
LIBINT2_REALTYPE fp484;
fp484 = fp485 * fp48;
target[((hsi*168+30)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp487;
fp487 = fp181 * fp128;
LIBINT2_REALTYPE fp486;
fp486 = fp487 * fp51;
target[((hsi*168+29)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp489;
fp489 = fp181 * fp124;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp54;
target[((hsi*168+28)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp491;
fp491 = fp181 * fp121;
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp58;
target[((hsi*168+27)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp493;
fp493 = fp184 * fp128;
LIBINT2_REALTYPE fp492;
fp492 = fp493 * fp54;
target[((hsi*168+26)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp495;
fp495 = fp184 * fp124;
LIBINT2_REALTYPE fp494;
fp494 = fp495 * fp58;
target[((hsi*168+25)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp497;
fp497 = fp188 * fp128;
LIBINT2_REALTYPE fp496;
fp496 = fp497 * fp58;
target[((hsi*168+24)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp499;
fp499 = fp181 * fp118;
LIBINT2_REALTYPE fp498;
fp498 = fp499 * fp61;
target[((hsi*168+23)*1+lsi)*1] = fp498;
LIBINT2_REALTYPE fp501;
fp501 = fp181 * fp114;
LIBINT2_REALTYPE fp500;
fp500 = fp501 * fp64;
target[((hsi*168+22)*1+lsi)*1] = fp500;
LIBINT2_REALTYPE fp481;
fp481 = fp184 * fp138;
LIBINT2_REALTYPE fp480;
fp480 = fp481 * fp44;
target[((hsi*168+32)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src0[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src0[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->BO_x[vi] * fp143;
LIBINT2_REALTYPE fp144;
fp144 = fp147 + fp145;
LIBINT2_REALTYPE fp253;
fp253 = fp144 * fp108;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp34;
target[((hsi*168+146)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp144 * fp104;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp38;
target[((hsi*168+145)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_x[vi] * fp147;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src0[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp146 + fp149;
LIBINT2_REALTYPE fp257;
fp257 = fp148 * fp108;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp38;
target[((hsi*168+144)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src0[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->BO_x[vi] * fp140;
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp259;
fp259 = fp141 * fp98;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp41;
target[((hsi*168+143)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp141 * fp94;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp44;
target[((hsi*168+142)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp141 * fp91;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp48;
target[((hsi*168+141)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp144 * fp98;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp44;
target[((hsi*168+140)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp144 * fp94;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp48;
target[((hsi*168+139)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp148 * fp98;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp48;
target[((hsi*168+138)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp27;
LIBINT2_REALTYPE fp28;
fp28 = fp26 + fp29;
LIBINT2_REALTYPE fp377;
fp377 = fp168 * fp138;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp28;
target[((hsi*168+84)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src1[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_y[vi] * fp86;
LIBINT2_REALTYPE fp84;
fp84 = fp83 + fp85;
LIBINT2_REALTYPE fp273;
fp273 = fp141 * fp84;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp54;
target[((hsi*168+136)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_y[vi] * fp83;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*42+33)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp80 + fp82;
LIBINT2_REALTYPE fp275;
fp275 = fp141 * fp81;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp58;
target[((hsi*168+135)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_y[vi] * fp87;
LIBINT2_REALTYPE fp88;
fp88 = fp86 + fp89;
LIBINT2_REALTYPE fp277;
fp277 = fp144 * fp88;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp54;
target[((hsi*168+134)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp144 * fp84;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp58;
target[((hsi*168+133)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp148 * fp88;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp58;
target[((hsi*168+132)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*42+37)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*42+36)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp78;
fp78 = fp76 + fp79;
LIBINT2_REALTYPE fp283;
fp283 = fp141 * fp78;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp61;
target[((hsi*168+131)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*42+38)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_y[vi] * fp76;
LIBINT2_REALTYPE fp74;
fp74 = fp73 + fp75;
LIBINT2_REALTYPE fp285;
fp285 = fp141 * fp74;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp64;
target[((hsi*168+130)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp73;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*42+39)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp287;
fp287 = fp141 * fp71;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp68;
target[((hsi*168+129)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp144 * fp78;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp64;
target[((hsi*168+128)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp144 * fp74;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp68;
target[((hsi*168+127)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp271;
fp271 = fp141 * fp88;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp51;
target[((hsi*168+137)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*42+38)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*42+39)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp211;
fp211 = fp141 * fp138;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp1;
target[((hsi*168+167)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*42+37)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp213;
fp213 = fp141 * fp134;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp4;
target[((hsi*168+166)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*42+36)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp8;
fp8 = fp6 + fp9;
LIBINT2_REALTYPE fp215;
fp215 = fp141 * fp131;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp8;
target[((hsi*168+165)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp144 * fp138;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp4;
target[((hsi*168+164)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp144 * fp134;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp8;
target[((hsi*168+163)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp148 * fp138;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp8;
target[((hsi*168+162)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*42+33)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp223;
fp223 = fp141 * fp128;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp11;
target[((hsi*168+161)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp225;
fp225 = fp141 * fp124;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp14;
target[((hsi*168+160)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp18;
fp18 = fp16 + fp19;
LIBINT2_REALTYPE fp227;
fp227 = fp141 * fp121;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp18;
target[((hsi*168+159)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp251;
fp251 = fp141 * fp101;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp38;
target[((hsi*168+147)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp231;
fp231 = fp144 * fp124;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp18;
target[((hsi*168+157)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp148 * fp128;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp18;
target[((hsi*168+156)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp235;
fp235 = fp141 * fp118;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp21;
target[((hsi*168+155)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp26;
LIBINT2_REALTYPE fp24;
fp24 = fp23 + fp25;
LIBINT2_REALTYPE fp237;
fp237 = fp141 * fp114;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp24;
target[((hsi*168+154)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp141 * fp111;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp28;
target[((hsi*168+153)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp144 * fp118;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp24;
target[((hsi*168+152)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp144 * fp114;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp28;
target[((hsi*168+151)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp148 * fp118;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp28;
target[((hsi*168+150)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp141 * fp108;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp31;
target[((hsi*168+149)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp141 * fp104;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp34;
target[((hsi*168+148)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp229;
fp229 = fp144 * fp128;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp14;
target[((hsi*168+158)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src0[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = inteval->BO_x[vi] * fp153;
LIBINT2_REALTYPE fp154;
fp154 = fp157 + fp155;
LIBINT2_REALTYPE fp337;
fp337 = fp154 * fp108;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp44;
target[((hsi*168+104)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp154 * fp104;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp48;
target[((hsi*168+103)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp159;
fp159 = inteval->BO_x[vi] * fp157;
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + src0[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp156 + fp159;
LIBINT2_REALTYPE fp341;
fp341 = fp158 * fp108;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp48;
target[((hsi*168+102)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = inteval->BO_x[vi] * fp150;
LIBINT2_REALTYPE fp151;
fp151 = fp153 + fp152;
LIBINT2_REALTYPE fp343;
fp343 = fp151 * fp98;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp51;
target[((hsi*168+101)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp151 * fp94;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp54;
target[((hsi*168+100)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp151 * fp91;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp58;
target[((hsi*168+99)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp154 * fp98;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp54;
target[((hsi*168+98)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp154 * fp94;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp58;
target[((hsi*168+97)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp158 * fp98;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp58;
target[((hsi*168+96)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp293;
fp293 = fp148 * fp78;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp68;
target[((hsi*168+126)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp357;
fp357 = fp151 * fp84;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp64;
target[((hsi*168+94)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp151 * fp81;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp68;
target[((hsi*168+93)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = fp154 * fp88;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp64;
target[((hsi*168+92)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp154 * fp84;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp68;
target[((hsi*168+91)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp158 * fp88;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp68;
target[((hsi*168+90)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp161 * fp138;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp21;
target[((hsi*168+89)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp161 * fp134;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp24;
target[((hsi*168+88)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp161 * fp131;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp28;
target[((hsi*168+87)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp164 * fp138;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp24;
target[((hsi*168+86)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp164 * fp134;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp28;
target[((hsi*168+85)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp355;
fp355 = fp151 * fp88;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp61;
target[((hsi*168+95)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp295;
fp295 = fp151 * fp138;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp11;
target[((hsi*168+125)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp151 * fp134;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp14;
target[((hsi*168+124)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp151 * fp131;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp18;
target[((hsi*168+123)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp154 * fp138;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp14;
target[((hsi*168+122)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp154 * fp134;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp18;
target[((hsi*168+121)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp158 * fp138;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp18;
target[((hsi*168+120)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp151 * fp128;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp21;
target[((hsi*168+119)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp151 * fp124;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp24;
target[((hsi*168+118)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp151 * fp121;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp28;
target[((hsi*168+117)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp335;
fp335 = fp151 * fp101;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp48;
target[((hsi*168+105)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp315;
fp315 = fp154 * fp124;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp28;
target[((hsi*168+115)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp158 * fp128;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp28;
target[((hsi*168+114)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp151 * fp118;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp31;
target[((hsi*168+113)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp151 * fp114;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp34;
target[((hsi*168+112)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp151 * fp111;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp38;
target[((hsi*168+111)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp154 * fp118;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp34;
target[((hsi*168+110)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp154 * fp114;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp38;
target[((hsi*168+109)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp158 * fp118;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp38;
target[((hsi*168+108)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp151 * fp108;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp41;
target[((hsi*168+107)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp151 * fp104;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp44;
target[((hsi*168+106)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp313;
fp313 = fp154 * fp128;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp24;
target[((hsi*168+116)*1+lsi)*1] = fp312;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 546 */
}

#ifdef __cplusplus
};
#endif
