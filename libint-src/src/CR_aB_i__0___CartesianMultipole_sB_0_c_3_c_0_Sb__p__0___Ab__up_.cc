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
void CR_aB_i__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src0[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src1[((hsi*35+13)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*35+12)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->BO_y[vi] * fp116;
LIBINT2_REALTYPE fp114;
fp114 = fp113 + fp115;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->BO_y[vi] * fp117;
LIBINT2_REALTYPE fp119;
fp119 = fp116 + fp120;
LIBINT2_REALTYPE fp124;
fp124 = inteval->BO_y[vi] * fp119;
LIBINT2_REALTYPE fp123;
fp123 = fp114 + fp124;
LIBINT2_REALTYPE fp112;
fp112 = inteval->BO_y[vi] * fp123;
LIBINT2_REALTYPE fp110;
fp110 = inteval->BO_y[vi] * fp114;
LIBINT2_REALTYPE fp108;
fp108 = inteval->BO_y[vi] * fp113;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src1[((hsi*35+14)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp106 + fp108;
LIBINT2_REALTYPE fp109;
fp109 = fp107 + fp110;
LIBINT2_REALTYPE fp111;
fp111 = fp109 + fp112;
LIBINT2_REALTYPE fp312;
fp312 = fp181 * fp111;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp11;
target[((hsi*84+22)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*35+6)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src1[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->BO_y[vi] * fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp117 + fp122;
LIBINT2_REALTYPE fp126;
fp126 = inteval->BO_y[vi] * fp121;
LIBINT2_REALTYPE fp125;
fp125 = fp119 + fp126;
LIBINT2_REALTYPE fp128;
fp128 = inteval->BO_y[vi] * fp125;
LIBINT2_REALTYPE fp127;
fp127 = fp123 + fp128;
LIBINT2_REALTYPE fp310;
fp310 = fp181 * fp127;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp10;
target[((hsi*84+23)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src1[((hsi*35+8)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + src1[((hsi*35+7)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->BO_y[vi] * fp139;
LIBINT2_REALTYPE fp137;
fp137 = fp136 + fp138;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src1[((hsi*35+6)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->BO_y[vi] * fp140;
LIBINT2_REALTYPE fp142;
fp142 = fp139 + fp143;
LIBINT2_REALTYPE fp147;
fp147 = inteval->BO_y[vi] * fp142;
LIBINT2_REALTYPE fp146;
fp146 = fp137 + fp147;
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src1[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->BO_y[vi] * fp141;
LIBINT2_REALTYPE fp144;
fp144 = fp140 + fp145;
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_y[vi] * fp144;
LIBINT2_REALTYPE fp148;
fp148 = fp142 + fp149;
LIBINT2_REALTYPE fp151;
fp151 = inteval->BO_y[vi] * fp148;
LIBINT2_REALTYPE fp150;
fp150 = fp146 + fp151;
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + src0[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp182 * fp150;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp9;
target[((hsi*84+24)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp135;
fp135 = inteval->BO_y[vi] * fp146;
LIBINT2_REALTYPE fp133;
fp133 = inteval->BO_y[vi] * fp137;
LIBINT2_REALTYPE fp131;
fp131 = inteval->BO_y[vi] * fp136;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src1[((hsi*35+9)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp129 + fp131;
LIBINT2_REALTYPE fp132;
fp132 = fp130 + fp133;
LIBINT2_REALTYPE fp134;
fp134 = fp132 + fp135;
LIBINT2_REALTYPE fp306;
fp306 = fp181 * fp134;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp9;
target[((hsi*84+25)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = fp181 * fp150;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp8;
target[((hsi*84+26)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + src1[((hsi*35+3)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = 0.0000000000000000e+00 + src1[((hsi*35+2)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->BO_y[vi] * fp162;
LIBINT2_REALTYPE fp160;
fp160 = fp159 + fp161;
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + src1[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->BO_y[vi] * fp163;
LIBINT2_REALTYPE fp165;
fp165 = fp162 + fp166;
LIBINT2_REALTYPE fp170;
fp170 = inteval->BO_y[vi] * fp165;
LIBINT2_REALTYPE fp169;
fp169 = fp160 + fp170;
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src1[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = inteval->BO_y[vi] * fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp163 + fp168;
LIBINT2_REALTYPE fp172;
fp172 = inteval->BO_y[vi] * fp167;
LIBINT2_REALTYPE fp171;
fp171 = fp165 + fp172;
LIBINT2_REALTYPE fp174;
fp174 = inteval->BO_y[vi] * fp171;
LIBINT2_REALTYPE fp173;
fp173 = fp169 + fp174;
LIBINT2_REALTYPE fp302;
fp302 = fp182 * fp173;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp7;
target[((hsi*84+27)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp158;
fp158 = inteval->BO_y[vi] * fp169;
LIBINT2_REALTYPE fp156;
fp156 = inteval->BO_y[vi] * fp160;
LIBINT2_REALTYPE fp154;
fp154 = inteval->BO_y[vi] * fp159;
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src1[((hsi*35+4)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp152 + fp154;
LIBINT2_REALTYPE fp155;
fp155 = fp153 + fp156;
LIBINT2_REALTYPE fp157;
fp157 = fp155 + fp158;
LIBINT2_REALTYPE fp300;
fp300 = fp181 * fp157;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp7;
target[((hsi*84+28)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = fp181 * fp173;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp6;
target[((hsi*84+29)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*35+23)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*35+22)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_y[vi] * fp70;
LIBINT2_REALTYPE fp68;
fp68 = fp67 + fp69;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp71;
LIBINT2_REALTYPE fp73;
fp73 = fp70 + fp74;
LIBINT2_REALTYPE fp78;
fp78 = inteval->BO_y[vi] * fp73;
LIBINT2_REALTYPE fp77;
fp77 = fp68 + fp78;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*35+20)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_y[vi] * fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp71 + fp76;
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp79;
fp79 = fp73 + fp80;
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_y[vi] * fp79;
LIBINT2_REALTYPE fp81;
fp81 = fp77 + fp82;
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + src0[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp180 * fp81;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp13;
target[((hsi*84+30)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + src0[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp188 * fp173;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp13;
target[((hsi*84+0)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + src0[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp179 * fp81;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp12;
target[((hsi*84+32)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*35+18)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src1[((hsi*35+17)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_y[vi] * fp93;
LIBINT2_REALTYPE fp91;
fp91 = fp90 + fp92;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src1[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_y[vi] * fp94;
LIBINT2_REALTYPE fp96;
fp96 = fp93 + fp97;
LIBINT2_REALTYPE fp101;
fp101 = inteval->BO_y[vi] * fp96;
LIBINT2_REALTYPE fp100;
fp100 = fp91 + fp101;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src1[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_y[vi] * fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp94 + fp99;
LIBINT2_REALTYPE fp103;
fp103 = inteval->BO_y[vi] * fp98;
LIBINT2_REALTYPE fp102;
fp102 = fp96 + fp103;
LIBINT2_REALTYPE fp105;
fp105 = inteval->BO_y[vi] * fp102;
LIBINT2_REALTYPE fp104;
fp104 = fp100 + fp105;
LIBINT2_REALTYPE fp290;
fp290 = fp180 * fp104;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp11;
target[((hsi*84+33)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_y[vi] * fp100;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_y[vi] * fp91;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_y[vi] * fp90;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*35+19)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp83 + fp85;
LIBINT2_REALTYPE fp86;
fp86 = fp84 + fp87;
LIBINT2_REALTYPE fp88;
fp88 = fp86 + fp89;
LIBINT2_REALTYPE fp288;
fp288 = fp179 * fp88;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp11;
target[((hsi*84+34)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp286;
fp286 = fp179 * fp104;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp10;
target[((hsi*84+35)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp284;
fp284 = fp180 * fp127;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp9;
target[((hsi*84+36)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp282;
fp282 = fp179 * fp111;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp9;
target[((hsi*84+37)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp280;
fp280 = fp179 * fp127;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp8;
target[((hsi*84+38)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp278;
fp278 = fp180 * fp150;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp7;
target[((hsi*84+39)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp276;
fp276 = fp179 * fp134;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp7;
target[((hsi*84+40)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp274;
fp274 = fp179 * fp150;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp6;
target[((hsi*84+41)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_y[vi] * fp68;
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_y[vi] * fp67;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*35+24)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp60 + fp62;
LIBINT2_REALTYPE fp63;
fp63 = fp61 + fp64;
LIBINT2_REALTYPE fp65;
fp65 = fp63 + fp66;
LIBINT2_REALTYPE fp294;
fp294 = fp179 * fp65;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp13;
target[((hsi*84+31)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp187;
fp187 = 0.0000000000000000e+00 + src0[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp187 * fp157;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp13;
target[((hsi*84+1)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp352;
fp352 = fp187 * fp173;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp12;
target[((hsi*84+2)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + src0[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = fp186 * fp150;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp13;
target[((hsi*84+3)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + src0[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp185 * fp134;
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp13;
target[((hsi*84+4)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp346;
fp346 = fp185 * fp150;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp12;
target[((hsi*84+5)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp344;
fp344 = fp186 * fp173;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp11;
target[((hsi*84+6)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp342;
fp342 = fp185 * fp157;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp11;
target[((hsi*84+7)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp340;
fp340 = fp185 * fp173;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp10;
target[((hsi*84+8)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp184;
fp184 = 0.0000000000000000e+00 + src0[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = fp184 * fp127;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp13;
target[((hsi*84+9)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp314;
fp314 = fp182 * fp127;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp11;
target[((hsi*84+21)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp183;
fp183 = 0.0000000000000000e+00 + src0[((hsi*35+20)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = fp183 * fp127;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp12;
target[((hsi*84+11)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp332;
fp332 = fp184 * fp150;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp11;
target[((hsi*84+12)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp330;
fp330 = fp183 * fp134;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp11;
target[((hsi*84+13)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp328;
fp328 = fp183 * fp150;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp10;
target[((hsi*84+14)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp326;
fp326 = fp184 * fp173;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp9;
target[((hsi*84+15)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp324;
fp324 = fp183 * fp157;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp9;
target[((hsi*84+16)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp322;
fp322 = fp183 * fp173;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp8;
target[((hsi*84+17)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp320;
fp320 = fp182 * fp104;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp13;
target[((hsi*84+18)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp318;
fp318 = fp181 * fp88;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp13;
target[((hsi*84+19)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp316;
fp316 = fp181 * fp104;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp12;
target[((hsi*84+20)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp336;
fp336 = fp183 * fp111;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp13;
target[((hsi*84+10)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + src0[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*35+33)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*35+32)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_y[vi] * fp24;
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp27;
fp27 = fp24 + fp28;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp27;
LIBINT2_REALTYPE fp31;
fp31 = fp22 + fp32;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_y[vi] * fp31;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_y[vi] * fp22;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_y[vi] * fp21;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*35+34)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp228;
fp228 = fp175 * fp19;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp13;
target[((hsi*84+64)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = fp25 + fp30;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp33;
fp33 = fp27 + fp34;
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_y[vi] * fp33;
LIBINT2_REALTYPE fp35;
fp35 = fp31 + fp36;
LIBINT2_REALTYPE fp226;
fp226 = fp175 * fp35;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp12;
target[((hsi*84+65)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src0[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*35+28)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*35+27)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp45;
fp45 = fp44 + fp46;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp48;
LIBINT2_REALTYPE fp50;
fp50 = fp47 + fp51;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp50;
LIBINT2_REALTYPE fp54;
fp54 = fp45 + fp55;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_y[vi] * fp49;
LIBINT2_REALTYPE fp52;
fp52 = fp48 + fp53;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp56;
fp56 = fp50 + fp57;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp56;
LIBINT2_REALTYPE fp58;
fp58 = fp54 + fp59;
LIBINT2_REALTYPE fp224;
fp224 = fp176 * fp58;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp11;
target[((hsi*84+66)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_y[vi] * fp54;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*35+29)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp37 + fp39;
LIBINT2_REALTYPE fp40;
fp40 = fp38 + fp41;
LIBINT2_REALTYPE fp42;
fp42 = fp40 + fp43;
LIBINT2_REALTYPE fp222;
fp222 = fp175 * fp42;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp11;
target[((hsi*84+67)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp220;
fp220 = fp175 * fp58;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp10;
target[((hsi*84+68)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp218;
fp218 = fp176 * fp81;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp9;
target[((hsi*84+69)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp216;
fp216 = fp175 * fp65;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp9;
target[((hsi*84+70)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp214;
fp214 = fp175 * fp81;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp8;
target[((hsi*84+71)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp212;
fp212 = fp176 * fp104;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp7;
target[((hsi*84+72)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*35+20)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp180 * fp173;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp5;
target[((hsi*84+42)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp208;
fp208 = fp175 * fp104;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp6;
target[((hsi*84+74)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp206;
fp206 = fp176 * fp127;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp5;
target[((hsi*84+75)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp204;
fp204 = fp175 * fp111;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp5;
target[((hsi*84+76)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp175 * fp127;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp4;
target[((hsi*84+77)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp176 * fp150;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp3;
target[((hsi*84+78)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp198;
fp198 = fp175 * fp134;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp3;
target[((hsi*84+79)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp175 * fp150;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp2;
target[((hsi*84+80)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp176 * fp173;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp1;
target[((hsi*84+81)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp192;
fp192 = fp175 * fp157;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp1;
target[((hsi*84+82)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp175 * fp173;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp0;
target[((hsi*84+83)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp210;
fp210 = fp175 * fp88;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp7;
target[((hsi*84+73)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp270;
fp270 = fp179 * fp157;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp5;
target[((hsi*84+43)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp268;
fp268 = fp179 * fp173;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp4;
target[((hsi*84+44)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + src0[((hsi*35+6)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp178 * fp58;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp13;
target[((hsi*84+45)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src0[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = fp177 * fp42;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp13;
target[((hsi*84+46)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp262;
fp262 = fp177 * fp58;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp12;
target[((hsi*84+47)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp260;
fp260 = fp178 * fp81;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp11;
target[((hsi*84+48)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp258;
fp258 = fp177 * fp65;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp11;
target[((hsi*84+49)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp256;
fp256 = fp177 * fp81;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp10;
target[((hsi*84+50)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp254;
fp254 = fp178 * fp104;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp9;
target[((hsi*84+51)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp230;
fp230 = fp176 * fp35;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp13;
target[((hsi*84+63)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp250;
fp250 = fp177 * fp104;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp8;
target[((hsi*84+53)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp248;
fp248 = fp178 * fp127;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp7;
target[((hsi*84+54)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp246;
fp246 = fp177 * fp111;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp7;
target[((hsi*84+55)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp244;
fp244 = fp177 * fp127;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp6;
target[((hsi*84+56)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp242;
fp242 = fp178 * fp150;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp5;
target[((hsi*84+57)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp240;
fp240 = fp177 * fp134;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp5;
target[((hsi*84+58)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp238;
fp238 = fp177 * fp150;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp4;
target[((hsi*84+59)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp236;
fp236 = fp178 * fp173;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp3;
target[((hsi*84+60)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp234;
fp234 = fp177 * fp157;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp3;
target[((hsi*84+61)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp232;
fp232 = fp177 * fp173;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp2;
target[((hsi*84+62)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp252;
fp252 = fp177 * fp88;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp9;
target[((hsi*84+52)*1+lsi)*1] = fp251;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 357 */
}

#ifdef __cplusplus
};
#endif
