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
void CR_aB_d__0___CartesianMultipole_sB_1_c_1_c_1_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp48;
fp48 = fp47 + fp49;
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + src0[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src0[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->BO_x[vi] * fp136;
LIBINT2_REALTYPE fp137;
fp137 = fp139 + fp138;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src1[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src1[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_y[vi] * fp88;
LIBINT2_REALTYPE fp86;
fp86 = fp85 + fp87;
LIBINT2_REALTYPE fp356;
fp356 = fp137 * fp86;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp48;
target[((hsi*126+33)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp45;
fp45 = fp44 + fp46;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_y[vi] * fp91;
LIBINT2_REALTYPE fp89;
fp89 = fp88 + fp90;
LIBINT2_REALTYPE fp354;
fp354 = fp137 * fp89;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp45;
target[((hsi*126+34)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src2[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp44;
LIBINT2_REALTYPE fp42;
fp42 = fp41 + fp43;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src1[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->BO_y[vi] * fp92;
LIBINT2_REALTYPE fp93;
fp93 = fp91 + fp94;
LIBINT2_REALTYPE fp352;
fp352 = fp137 * fp93;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp42;
target[((hsi*126+35)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src2[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp55;
fp55 = fp53 + fp56;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src0[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->BO_x[vi] * fp133;
LIBINT2_REALTYPE fp134;
fp134 = fp136 + fp135;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src1[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->BO_y[vi] * fp79;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp76 + fp78;
LIBINT2_REALTYPE fp350;
fp350 = fp134 * fp77;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp55;
target[((hsi*126+36)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp51;
fp51 = fp50 + fp52;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src1[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_y[vi] * fp82;
LIBINT2_REALTYPE fp80;
fp80 = fp79 + fp81;
LIBINT2_REALTYPE fp348;
fp348 = fp134 * fp80;
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp51;
target[((hsi*126+37)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp84;
fp84 = inteval->BO_y[vi] * fp85;
LIBINT2_REALTYPE fp83;
fp83 = fp82 + fp84;
LIBINT2_REALTYPE fp346;
fp346 = fp134 * fp83;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp48;
target[((hsi*126+38)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp344;
fp344 = fp134 * fp86;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp45;
target[((hsi*126+39)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp342;
fp342 = fp134 * fp89;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp42;
target[((hsi*126+40)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_z[vi] * fp41;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src2[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp38 + fp40;
LIBINT2_REALTYPE fp340;
fp340 = fp134 * fp93;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp39;
target[((hsi*126+41)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp36;
fp36 = fp34 + fp37;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->BO_y[vi] * fp111;
LIBINT2_REALTYPE fp112;
fp112 = fp110 + fp113;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src0[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->BO_x[vi] * fp149;
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src0[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp148 + fp151;
LIBINT2_REALTYPE fp338;
fp338 = fp150 * fp112;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp36;
target[((hsi*126+42)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_y[vi] * fp110;
LIBINT2_REALTYPE fp108;
fp108 = fp107 + fp109;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src0[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->BO_x[vi] * fp145;
LIBINT2_REALTYPE fp146;
fp146 = fp149 + fp147;
LIBINT2_REALTYPE fp336;
fp336 = fp146 * fp108;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp36;
target[((hsi*126+43)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp31 + fp33;
LIBINT2_REALTYPE fp334;
fp334 = fp146 * fp112;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp32;
target[((hsi*126+44)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->BO_y[vi] * fp107;
LIBINT2_REALTYPE fp105;
fp105 = fp104 + fp106;
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src0[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = inteval->BO_x[vi] * fp142;
LIBINT2_REALTYPE fp143;
fp143 = fp145 + fp144;
LIBINT2_REALTYPE fp332;
fp332 = fp143 * fp105;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp36;
target[((hsi*126+45)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp330;
fp330 = fp143 * fp108;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp32;
target[((hsi*126+46)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + src0[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = inteval->BO_x[vi] * fp168;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src0[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp167 + fp170;
LIBINT2_REALTYPE fp422;
fp422 = fp169 * fp112;
LIBINT2_REALTYPE fp421;
fp421 = fp422 * fp55;
target[((hsi*126+0)*1+lsi)*1] = fp421;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->BO_y[vi] * fp104;
LIBINT2_REALTYPE fp102;
fp102 = fp101 + fp103;
LIBINT2_REALTYPE fp141;
fp141 = inteval->BO_x[vi] * fp139;
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
LIBINT2_REALTYPE fp326;
fp326 = fp140 * fp102;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp36;
target[((hsi*126+48)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp324;
fp324 = fp140 * fp105;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp32;
target[((hsi*126+49)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp322;
fp322 = fp140 * fp108;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp29;
target[((hsi*126+50)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp320;
fp320 = fp140 * fp112;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp26;
target[((hsi*126+51)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_y[vi] * fp101;
LIBINT2_REALTYPE fp99;
fp99 = fp98 + fp100;
LIBINT2_REALTYPE fp318;
fp318 = fp137 * fp99;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp36;
target[((hsi*126+52)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp316;
fp316 = fp137 * fp102;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp32;
target[((hsi*126+53)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp314;
fp314 = fp137 * fp105;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp29;
target[((hsi*126+54)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp312;
fp312 = fp137 * fp108;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp26;
target[((hsi*126+55)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp310;
fp310 = fp137 * fp112;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp23;
target[((hsi*126+56)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_y[vi] * fp98;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src1[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp95 + fp97;
LIBINT2_REALTYPE fp308;
fp308 = fp134 * fp96;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp36;
target[((hsi*126+57)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp306;
fp306 = fp134 * fp99;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp32;
target[((hsi*126+58)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp304;
fp304 = fp134 * fp102;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp29;
target[((hsi*126+59)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp302;
fp302 = fp134 * fp105;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp26;
target[((hsi*126+60)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp300;
fp300 = fp134 * fp108;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp23;
target[((hsi*126+61)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp19 + fp21;
LIBINT2_REALTYPE fp298;
fp298 = fp134 * fp112;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp20;
target[((hsi*126+62)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp328;
fp328 = fp143 * fp112;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp29;
target[((hsi*126+47)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src0[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->BO_x[vi] * fp164;
LIBINT2_REALTYPE fp165;
fp165 = fp168 + fp166;
LIBINT2_REALTYPE fp420;
fp420 = fp165 * fp108;
LIBINT2_REALTYPE fp419;
fp419 = fp420 * fp55;
target[((hsi*126+1)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp418;
fp418 = fp165 * fp112;
LIBINT2_REALTYPE fp417;
fp417 = fp418 * fp51;
target[((hsi*126+2)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src0[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->BO_x[vi] * fp161;
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
LIBINT2_REALTYPE fp416;
fp416 = fp162 * fp105;
LIBINT2_REALTYPE fp415;
fp415 = fp416 * fp55;
target[((hsi*126+3)*1+lsi)*1] = fp415;
LIBINT2_REALTYPE fp414;
fp414 = fp162 * fp108;
LIBINT2_REALTYPE fp413;
fp413 = fp414 * fp51;
target[((hsi*126+4)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp412;
fp412 = fp162 * fp112;
LIBINT2_REALTYPE fp411;
fp411 = fp412 * fp48;
target[((hsi*126+5)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src0[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->BO_x[vi] * fp158;
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
LIBINT2_REALTYPE fp410;
fp410 = fp159 * fp102;
LIBINT2_REALTYPE fp409;
fp409 = fp410 * fp55;
target[((hsi*126+6)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp408;
fp408 = fp159 * fp105;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * fp51;
target[((hsi*126+7)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp406;
fp406 = fp159 * fp108;
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp48;
target[((hsi*126+8)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp404;
fp404 = fp159 * fp112;
LIBINT2_REALTYPE fp403;
fp403 = fp404 * fp45;
target[((hsi*126+9)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src0[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->BO_x[vi] * fp155;
LIBINT2_REALTYPE fp156;
fp156 = fp158 + fp157;
LIBINT2_REALTYPE fp402;
fp402 = fp156 * fp99;
LIBINT2_REALTYPE fp401;
fp401 = fp402 * fp55;
target[((hsi*126+10)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp400;
fp400 = fp156 * fp102;
LIBINT2_REALTYPE fp399;
fp399 = fp400 * fp51;
target[((hsi*126+11)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp398;
fp398 = fp156 * fp105;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * fp48;
target[((hsi*126+12)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp396;
fp396 = fp156 * fp108;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * fp45;
target[((hsi*126+13)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp394;
fp394 = fp156 * fp112;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * fp42;
target[((hsi*126+14)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src0[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->BO_x[vi] * fp152;
LIBINT2_REALTYPE fp153;
fp153 = fp155 + fp154;
LIBINT2_REALTYPE fp392;
fp392 = fp153 * fp96;
LIBINT2_REALTYPE fp391;
fp391 = fp392 * fp55;
target[((hsi*126+15)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp358;
fp358 = fp137 * fp83;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp51;
target[((hsi*126+32)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp388;
fp388 = fp153 * fp102;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * fp48;
target[((hsi*126+17)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp386;
fp386 = fp153 * fp105;
LIBINT2_REALTYPE fp385;
fp385 = fp386 * fp45;
target[((hsi*126+18)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp384;
fp384 = fp153 * fp108;
LIBINT2_REALTYPE fp383;
fp383 = fp384 * fp42;
target[((hsi*126+19)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp382;
fp382 = fp153 * fp112;
LIBINT2_REALTYPE fp381;
fp381 = fp382 * fp39;
target[((hsi*126+20)*1+lsi)*1] = fp381;
LIBINT2_REALTYPE fp380;
fp380 = fp150 * fp93;
LIBINT2_REALTYPE fp379;
fp379 = fp380 * fp55;
target[((hsi*126+21)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp378;
fp378 = fp146 * fp89;
LIBINT2_REALTYPE fp377;
fp377 = fp378 * fp55;
target[((hsi*126+22)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp376;
fp376 = fp146 * fp93;
LIBINT2_REALTYPE fp375;
fp375 = fp376 * fp51;
target[((hsi*126+23)*1+lsi)*1] = fp375;
LIBINT2_REALTYPE fp374;
fp374 = fp143 * fp86;
LIBINT2_REALTYPE fp373;
fp373 = fp374 * fp55;
target[((hsi*126+24)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp372;
fp372 = fp143 * fp89;
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp51;
target[((hsi*126+25)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp370;
fp370 = fp143 * fp93;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp48;
target[((hsi*126+26)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp368;
fp368 = fp140 * fp83;
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp55;
target[((hsi*126+27)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp366;
fp366 = fp140 * fp86;
LIBINT2_REALTYPE fp365;
fp365 = fp366 * fp51;
target[((hsi*126+28)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp364;
fp364 = fp140 * fp89;
LIBINT2_REALTYPE fp363;
fp363 = fp364 * fp48;
target[((hsi*126+29)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp362;
fp362 = fp140 * fp93;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * fp45;
target[((hsi*126+30)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp360;
fp360 = fp137 * fp80;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp55;
target[((hsi*126+31)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp390;
fp390 = fp153 * fp99;
LIBINT2_REALTYPE fp389;
fp389 = fp390 * fp51;
target[((hsi*126+16)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src0[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->BO_x[vi] * fp117;
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
LIBINT2_REALTYPE fp230;
fp230 = fp118 * fp86;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp29;
target[((hsi*126+96)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp228;
fp228 = fp118 * fp89;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp26;
target[((hsi*126+97)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp226;
fp226 = fp118 * fp93;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp23;
target[((hsi*126+98)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->BO_x[vi] * fp114;
LIBINT2_REALTYPE fp115;
fp115 = fp117 + fp116;
LIBINT2_REALTYPE fp224;
fp224 = fp115 * fp77;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp36;
target[((hsi*126+99)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp222;
fp222 = fp115 * fp80;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp32;
target[((hsi*126+100)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp220;
fp220 = fp115 * fp83;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp29;
target[((hsi*126+101)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp218;
fp218 = fp115 * fp86;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp26;
target[((hsi*126+102)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp216;
fp216 = fp115 * fp89;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp23;
target[((hsi*126+103)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp214;
fp214 = fp115 * fp93;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp20;
target[((hsi*126+104)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src0[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = inteval->BO_x[vi] * fp130;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src0[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp129 + fp132;
LIBINT2_REALTYPE fp212;
fp212 = fp131 * fp112;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp17;
target[((hsi*126+105)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src0[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = inteval->BO_x[vi] * fp126;
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
LIBINT2_REALTYPE fp210;
fp210 = fp127 * fp108;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp17;
target[((hsi*126+106)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp208;
fp208 = fp127 * fp112;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp13;
target[((hsi*126+107)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src0[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->BO_x[vi] * fp123;
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp206;
fp206 = fp124 * fp105;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp17;
target[((hsi*126+108)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp204;
fp204 = fp124 * fp108;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp13;
target[((hsi*126+109)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_y[vi] * fp73;
LIBINT2_REALTYPE fp74;
fp74 = fp72 + fp75;
LIBINT2_REALTYPE fp296;
fp296 = fp131 * fp74;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp55;
target[((hsi*126+63)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp122;
fp122 = inteval->BO_x[vi] * fp120;
LIBINT2_REALTYPE fp121;
fp121 = fp123 + fp122;
LIBINT2_REALTYPE fp200;
fp200 = fp121 * fp102;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp17;
target[((hsi*126+111)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp198;
fp198 = fp121 * fp105;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp13;
target[((hsi*126+112)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp196;
fp196 = fp121 * fp108;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp10;
target[((hsi*126+113)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp194;
fp194 = fp121 * fp112;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp7;
target[((hsi*126+114)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp192;
fp192 = fp118 * fp99;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp17;
target[((hsi*126+115)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp190;
fp190 = fp118 * fp102;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp13;
target[((hsi*126+116)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp188;
fp188 = fp118 * fp105;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp10;
target[((hsi*126+117)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp186;
fp186 = fp118 * fp108;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp7;
target[((hsi*126+118)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp184;
fp184 = fp118 * fp112;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp4;
target[((hsi*126+119)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp182;
fp182 = fp115 * fp96;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp17;
target[((hsi*126+120)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp180;
fp180 = fp115 * fp99;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp13;
target[((hsi*126+121)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp178;
fp178 = fp115 * fp102;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp10;
target[((hsi*126+122)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp176;
fp176 = fp115 * fp105;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp7;
target[((hsi*126+123)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp174;
fp174 = fp115 * fp108;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp4;
target[((hsi*126+124)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp172;
fp172 = fp115 * fp112;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp1;
target[((hsi*126+125)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp202;
fp202 = fp124 * fp112;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp10;
target[((hsi*126+110)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_y[vi] * fp72;
LIBINT2_REALTYPE fp70;
fp70 = fp69 + fp71;
LIBINT2_REALTYPE fp294;
fp294 = fp127 * fp70;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp55;
target[((hsi*126+64)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp292;
fp292 = fp127 * fp74;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp51;
target[((hsi*126+65)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_y[vi] * fp69;
LIBINT2_REALTYPE fp67;
fp67 = fp66 + fp68;
LIBINT2_REALTYPE fp290;
fp290 = fp124 * fp67;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp55;
target[((hsi*126+66)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp288;
fp288 = fp124 * fp70;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp51;
target[((hsi*126+67)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp286;
fp286 = fp124 * fp74;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp48;
target[((hsi*126+68)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp64;
fp64 = fp63 + fp65;
LIBINT2_REALTYPE fp284;
fp284 = fp121 * fp64;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp55;
target[((hsi*126+69)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp282;
fp282 = fp121 * fp67;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp51;
target[((hsi*126+70)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp280;
fp280 = fp121 * fp70;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp48;
target[((hsi*126+71)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp278;
fp278 = fp121 * fp74;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp45;
target[((hsi*126+72)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_y[vi] * fp63;
LIBINT2_REALTYPE fp61;
fp61 = fp60 + fp62;
LIBINT2_REALTYPE fp276;
fp276 = fp118 * fp61;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp55;
target[((hsi*126+73)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp274;
fp274 = fp118 * fp64;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp51;
target[((hsi*126+74)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp272;
fp272 = fp118 * fp67;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp48;
target[((hsi*126+75)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp270;
fp270 = fp118 * fp70;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp45;
target[((hsi*126+76)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp268;
fp268 = fp118 * fp74;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp42;
target[((hsi*126+77)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp57 + fp59;
LIBINT2_REALTYPE fp266;
fp266 = fp115 * fp58;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp55;
target[((hsi*126+78)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp232;
fp232 = fp118 * fp83;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp32;
target[((hsi*126+95)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp262;
fp262 = fp115 * fp64;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp48;
target[((hsi*126+80)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp260;
fp260 = fp115 * fp67;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp45;
target[((hsi*126+81)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp258;
fp258 = fp115 * fp70;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp42;
target[((hsi*126+82)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp256;
fp256 = fp115 * fp74;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp39;
target[((hsi*126+83)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp254;
fp254 = fp131 * fp93;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp36;
target[((hsi*126+84)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp252;
fp252 = fp127 * fp89;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp36;
target[((hsi*126+85)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp250;
fp250 = fp127 * fp93;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp32;
target[((hsi*126+86)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp248;
fp248 = fp124 * fp86;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp36;
target[((hsi*126+87)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp246;
fp246 = fp124 * fp89;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp32;
target[((hsi*126+88)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp244;
fp244 = fp124 * fp93;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp29;
target[((hsi*126+89)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp242;
fp242 = fp121 * fp83;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp36;
target[((hsi*126+90)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp240;
fp240 = fp121 * fp86;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp32;
target[((hsi*126+91)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp238;
fp238 = fp121 * fp89;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp29;
target[((hsi*126+92)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp236;
fp236 = fp121 * fp93;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp26;
target[((hsi*126+93)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp234;
fp234 = fp118 * fp80;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp36;
target[((hsi*126+94)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp264;
fp264 = fp115 * fp61;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp51;
target[((hsi*126+79)*1+lsi)*1] = fp263;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 423 */
}

#ifdef __cplusplus
};
#endif
