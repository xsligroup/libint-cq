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
void CR_aB_k__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*40+16)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*40+15)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_z[vi] * fp32;
LIBINT2_REALTYPE fp33;
fp33 = fp31 + fp34;
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + src1[((hsi*40+2)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src1[((hsi*40+1)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->BO_y[vi] * fp160;
LIBINT2_REALTYPE fp162;
fp162 = fp159 + fp163;
LIBINT2_REALTYPE fp158;
fp158 = inteval->BO_y[vi] * fp162;
LIBINT2_REALTYPE fp156;
fp156 = inteval->BO_y[vi] * fp159;
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src1[((hsi*40+3)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp154 + fp156;
LIBINT2_REALTYPE fp157;
fp157 = fp155 + fp158;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src0[((hsi*40+20)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = fp176 * fp157;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp33;
target[((hsi*108+28)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*40+17)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src1[((hsi*40+0)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->BO_y[vi] * fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp160 + fp165;
LIBINT2_REALTYPE fp167;
fp167 = inteval->BO_y[vi] * fp164;
LIBINT2_REALTYPE fp166;
fp166 = fp162 + fp167;
LIBINT2_REALTYPE fp341;
fp341 = fp176 * fp166;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp29;
target[((hsi*108+29)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src2[((hsi*40+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*40+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp54;
fp54 = fp52 + fp55;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*40+22)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src1[((hsi*40+21)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_y[vi] * fp104;
LIBINT2_REALTYPE fp106;
fp106 = fp103 + fp107;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src1[((hsi*40+20)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_y[vi] * fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp104 + fp109;
LIBINT2_REALTYPE fp111;
fp111 = inteval->BO_y[vi] * fp108;
LIBINT2_REALTYPE fp110;
fp110 = fp106 + fp111;
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + src0[((hsi*40+16)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = fp175 * fp110;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp54;
target[((hsi*108+30)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src0[((hsi*40+15)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_y[vi] * fp106;
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_y[vi] * fp103;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*40+23)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp98 + fp100;
LIBINT2_REALTYPE fp101;
fp101 = fp99 + fp102;
LIBINT2_REALTYPE fp337;
fp337 = fp174 * fp101;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp54;
target[((hsi*108+31)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_z[vi] * fp52;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*40+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp49 + fp51;
LIBINT2_REALTYPE fp335;
fp335 = fp174 * fp110;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp50;
target[((hsi*108+32)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src2[((hsi*40+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*40+5)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_z[vi] * fp46;
LIBINT2_REALTYPE fp47;
fp47 = fp45 + fp48;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*40+17)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src1[((hsi*40+16)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->BO_y[vi] * fp118;
LIBINT2_REALTYPE fp120;
fp120 = fp117 + fp121;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src1[((hsi*40+15)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->BO_y[vi] * fp119;
LIBINT2_REALTYPE fp122;
fp122 = fp118 + fp123;
LIBINT2_REALTYPE fp125;
fp125 = inteval->BO_y[vi] * fp122;
LIBINT2_REALTYPE fp124;
fp124 = fp120 + fp125;
LIBINT2_REALTYPE fp333;
fp333 = fp175 * fp124;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp47;
target[((hsi*108+33)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp116;
fp116 = inteval->BO_y[vi] * fp120;
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_y[vi] * fp117;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src1[((hsi*40+18)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp112 + fp114;
LIBINT2_REALTYPE fp115;
fp115 = fp113 + fp116;
LIBINT2_REALTYPE fp331;
fp331 = fp174 * fp115;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp47;
target[((hsi*108+34)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp45;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*40+7)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp329;
fp329 = fp174 * fp124;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp43;
target[((hsi*108+35)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src2[((hsi*40+11)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*40+10)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp39;
LIBINT2_REALTYPE fp40;
fp40 = fp38 + fp41;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src1[((hsi*40+12)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src1[((hsi*40+11)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->BO_y[vi] * fp132;
LIBINT2_REALTYPE fp134;
fp134 = fp131 + fp135;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src1[((hsi*40+10)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->BO_y[vi] * fp133;
LIBINT2_REALTYPE fp136;
fp136 = fp132 + fp137;
LIBINT2_REALTYPE fp139;
fp139 = inteval->BO_y[vi] * fp136;
LIBINT2_REALTYPE fp138;
fp138 = fp134 + fp139;
LIBINT2_REALTYPE fp327;
fp327 = fp175 * fp138;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp40;
target[((hsi*108+36)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp130;
fp130 = inteval->BO_y[vi] * fp134;
LIBINT2_REALTYPE fp128;
fp128 = inteval->BO_y[vi] * fp131;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src1[((hsi*40+13)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp126 + fp128;
LIBINT2_REALTYPE fp129;
fp129 = fp127 + fp130;
LIBINT2_REALTYPE fp325;
fp325 = fp174 * fp129;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp40;
target[((hsi*108+37)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*40+12)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp323;
fp323 = fp174 * fp138;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp36;
target[((hsi*108+38)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src1[((hsi*40+7)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src1[((hsi*40+6)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_y[vi] * fp146;
LIBINT2_REALTYPE fp148;
fp148 = fp145 + fp149;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src1[((hsi*40+5)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->BO_y[vi] * fp147;
LIBINT2_REALTYPE fp150;
fp150 = fp146 + fp151;
LIBINT2_REALTYPE fp153;
fp153 = inteval->BO_y[vi] * fp150;
LIBINT2_REALTYPE fp152;
fp152 = fp148 + fp153;
LIBINT2_REALTYPE fp321;
fp321 = fp175 * fp152;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp33;
target[((hsi*108+39)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp183;
fp183 = 0.0000000000000000e+00 + src0[((hsi*40+36)*1+lsi)*1];
LIBINT2_REALTYPE fp399;
fp399 = fp183 * fp166;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp54;
target[((hsi*108+0)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp317;
fp317 = fp174 * fp152;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp29;
target[((hsi*108+41)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*40+21)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*40+20)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp315;
fp315 = fp175 * fp166;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp26;
target[((hsi*108+42)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp313;
fp313 = fp174 * fp157;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp26;
target[((hsi*108+43)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*40+22)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp311;
fp311 = fp174 * fp166;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp22;
target[((hsi*108+44)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src1[((hsi*40+27)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*40+26)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_y[vi] * fp90;
LIBINT2_REALTYPE fp92;
fp92 = fp89 + fp93;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*40+25)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_y[vi] * fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp90 + fp95;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_y[vi] * fp94;
LIBINT2_REALTYPE fp96;
fp96 = fp92 + fp97;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src0[((hsi*40+11)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = fp173 * fp96;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp54;
target[((hsi*108+45)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp172;
fp172 = 0.0000000000000000e+00 + src0[((hsi*40+10)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->BO_y[vi] * fp92;
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_y[vi] * fp89;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*40+28)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp84 + fp86;
LIBINT2_REALTYPE fp87;
fp87 = fp85 + fp88;
LIBINT2_REALTYPE fp307;
fp307 = fp172 * fp87;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp54;
target[((hsi*108+46)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp305;
fp305 = fp172 * fp96;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp50;
target[((hsi*108+47)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp303;
fp303 = fp173 * fp110;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp47;
target[((hsi*108+48)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp301;
fp301 = fp172 * fp101;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp47;
target[((hsi*108+49)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp299;
fp299 = fp172 * fp110;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp43;
target[((hsi*108+50)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp297;
fp297 = fp173 * fp124;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp40;
target[((hsi*108+51)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp295;
fp295 = fp172 * fp115;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp40;
target[((hsi*108+52)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp293;
fp293 = fp172 * fp124;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp36;
target[((hsi*108+53)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp144;
fp144 = inteval->BO_y[vi] * fp148;
LIBINT2_REALTYPE fp142;
fp142 = inteval->BO_y[vi] * fp145;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src1[((hsi*40+8)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp140 + fp142;
LIBINT2_REALTYPE fp143;
fp143 = fp141 + fp144;
LIBINT2_REALTYPE fp319;
fp319 = fp174 * fp143;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp33;
target[((hsi*108+40)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + src0[((hsi*40+35)*1+lsi)*1];
LIBINT2_REALTYPE fp397;
fp397 = fp182 * fp157;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp54;
target[((hsi*108+1)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp395;
fp395 = fp182 * fp166;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp50;
target[((hsi*108+2)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src0[((hsi*40+31)*1+lsi)*1];
LIBINT2_REALTYPE fp393;
fp393 = fp181 * fp152;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp54;
target[((hsi*108+3)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + src0[((hsi*40+30)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = fp180 * fp143;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp54;
target[((hsi*108+4)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp389;
fp389 = fp180 * fp152;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp50;
target[((hsi*108+5)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp387;
fp387 = fp181 * fp166;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp47;
target[((hsi*108+6)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp385;
fp385 = fp180 * fp157;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp47;
target[((hsi*108+7)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp383;
fp383 = fp180 * fp166;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp43;
target[((hsi*108+8)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + src0[((hsi*40+26)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = fp179 * fp138;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp54;
target[((hsi*108+9)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + src0[((hsi*40+25)*1+lsi)*1];
LIBINT2_REALTYPE fp379;
fp379 = fp178 * fp129;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp54;
target[((hsi*108+10)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp377;
fp377 = fp178 * fp138;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp50;
target[((hsi*108+11)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp375;
fp375 = fp179 * fp152;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp47;
target[((hsi*108+12)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src0[((hsi*40+21)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = fp177 * fp166;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp33;
target[((hsi*108+27)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp371;
fp371 = fp178 * fp152;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp43;
target[((hsi*108+14)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp369;
fp369 = fp179 * fp166;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp40;
target[((hsi*108+15)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp367;
fp367 = fp178 * fp157;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp40;
target[((hsi*108+16)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp365;
fp365 = fp178 * fp166;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp36;
target[((hsi*108+17)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp363;
fp363 = fp177 * fp124;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp54;
target[((hsi*108+18)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp361;
fp361 = fp176 * fp115;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp54;
target[((hsi*108+19)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp359;
fp359 = fp176 * fp124;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp50;
target[((hsi*108+20)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp357;
fp357 = fp177 * fp138;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp47;
target[((hsi*108+21)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp355;
fp355 = fp176 * fp129;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp47;
target[((hsi*108+22)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp353;
fp353 = fp176 * fp138;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp43;
target[((hsi*108+23)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp351;
fp351 = fp177 * fp152;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp40;
target[((hsi*108+24)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp349;
fp349 = fp176 * fp143;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp40;
target[((hsi*108+25)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp347;
fp347 = fp176 * fp152;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp36;
target[((hsi*108+26)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp373;
fp373 = fp178 * fp143;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp47;
target[((hsi*108+13)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*40+31)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*40+30)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp12;
fp12 = fp10 + fp13;
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + src0[((hsi*40+5)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp170 * fp157;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp12;
target[((hsi*108+82)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*40+32)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp233;
fp233 = fp170 * fp166;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp8;
target[((hsi*108+83)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + src0[((hsi*40+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*40+37)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*40+36)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_y[vi] * fp62;
LIBINT2_REALTYPE fp64;
fp64 = fp61 + fp65;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*40+35)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_y[vi] * fp63;
LIBINT2_REALTYPE fp66;
fp66 = fp62 + fp67;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp68;
fp68 = fp64 + fp69;
LIBINT2_REALTYPE fp231;
fp231 = fp169 * fp68;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp54;
target[((hsi*108+84)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + src0[((hsi*40+0)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_y[vi] * fp64;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_y[vi] * fp61;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*40+38)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp229;
fp229 = fp168 * fp59;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp54;
target[((hsi*108+85)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp227;
fp227 = fp168 * fp68;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp50;
target[((hsi*108+86)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*40+32)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*40+31)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_y[vi] * fp76;
LIBINT2_REALTYPE fp78;
fp78 = fp75 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*40+30)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp76 + fp81;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_y[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = fp78 + fp83;
LIBINT2_REALTYPE fp225;
fp225 = fp169 * fp82;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp47;
target[((hsi*108+87)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp78;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*40+33)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp223;
fp223 = fp168 * fp73;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp47;
target[((hsi*108+88)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp221;
fp221 = fp168 * fp82;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp43;
target[((hsi*108+89)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp219;
fp219 = fp169 * fp96;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp40;
target[((hsi*108+90)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp217;
fp217 = fp168 * fp87;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp40;
target[((hsi*108+91)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp215;
fp215 = fp168 * fp96;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp36;
target[((hsi*108+92)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp213;
fp213 = fp169 * fp110;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp33;
target[((hsi*108+93)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp291;
fp291 = fp173 * fp138;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp33;
target[((hsi*108+54)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp209;
fp209 = fp168 * fp110;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp29;
target[((hsi*108+95)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp207;
fp207 = fp169 * fp124;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp26;
target[((hsi*108+96)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp205;
fp205 = fp168 * fp115;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp26;
target[((hsi*108+97)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp203;
fp203 = fp168 * fp124;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp22;
target[((hsi*108+98)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*40+26)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*40+25)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp201;
fp201 = fp169 * fp138;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp19;
target[((hsi*108+99)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp199;
fp199 = fp168 * fp129;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp19;
target[((hsi*108+100)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*40+27)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp197;
fp197 = fp168 * fp138;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp15;
target[((hsi*108+101)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp195;
fp195 = fp169 * fp152;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp12;
target[((hsi*108+102)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp193;
fp193 = fp168 * fp143;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp12;
target[((hsi*108+103)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp191;
fp191 = fp168 * fp152;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp8;
target[((hsi*108+104)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*40+36)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*40+35)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp189;
fp189 = fp169 * fp166;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp5;
target[((hsi*108+105)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp187;
fp187 = fp168 * fp157;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp5;
target[((hsi*108+106)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*40+37)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp185;
fp185 = fp168 * fp166;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp1;
target[((hsi*108+107)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp211;
fp211 = fp168 * fp101;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp33;
target[((hsi*108+94)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp289;
fp289 = fp172 * fp129;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp33;
target[((hsi*108+55)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp287;
fp287 = fp172 * fp138;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp29;
target[((hsi*108+56)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp285;
fp285 = fp173 * fp152;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp26;
target[((hsi*108+57)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp283;
fp283 = fp172 * fp143;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp26;
target[((hsi*108+58)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp281;
fp281 = fp172 * fp152;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp22;
target[((hsi*108+59)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp279;
fp279 = fp173 * fp166;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp19;
target[((hsi*108+60)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp277;
fp277 = fp172 * fp157;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp19;
target[((hsi*108+61)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp275;
fp275 = fp172 * fp166;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp15;
target[((hsi*108+62)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + src0[((hsi*40+6)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = fp171 * fp82;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp54;
target[((hsi*108+63)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp271;
fp271 = fp170 * fp73;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp54;
target[((hsi*108+64)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp269;
fp269 = fp170 * fp82;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp50;
target[((hsi*108+65)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp267;
fp267 = fp171 * fp96;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp47;
target[((hsi*108+66)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp237;
fp237 = fp171 * fp166;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp12;
target[((hsi*108+81)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp263;
fp263 = fp170 * fp96;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp43;
target[((hsi*108+68)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp261;
fp261 = fp171 * fp110;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp40;
target[((hsi*108+69)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp259;
fp259 = fp170 * fp101;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp40;
target[((hsi*108+70)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp257;
fp257 = fp170 * fp110;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp36;
target[((hsi*108+71)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp255;
fp255 = fp171 * fp124;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp33;
target[((hsi*108+72)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp253;
fp253 = fp170 * fp115;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp33;
target[((hsi*108+73)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp251;
fp251 = fp170 * fp124;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp29;
target[((hsi*108+74)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp249;
fp249 = fp171 * fp138;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp26;
target[((hsi*108+75)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp247;
fp247 = fp170 * fp129;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp26;
target[((hsi*108+76)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp245;
fp245 = fp170 * fp138;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp22;
target[((hsi*108+77)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp243;
fp243 = fp171 * fp152;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp19;
target[((hsi*108+78)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp241;
fp241 = fp170 * fp143;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp19;
target[((hsi*108+79)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp239;
fp239 = fp170 * fp152;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp15;
target[((hsi*108+80)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp265;
fp265 = fp170 * fp87;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp47;
target[((hsi*108+67)*1+lsi)*1] = fp264;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 400 */
}

#ifdef __cplusplus
};
#endif
