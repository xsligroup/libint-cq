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
void CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src2[((hsi*35+8)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src2[((hsi*35+7)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->BO_z[vi] * fp125;
LIBINT2_REALTYPE fp123;
fp123 = fp122 + fp124;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src2[((hsi*35+6)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->BO_z[vi] * fp126;
LIBINT2_REALTYPE fp128;
fp128 = fp125 + fp129;
LIBINT2_REALTYPE fp133;
fp133 = inteval->BO_z[vi] * fp128;
LIBINT2_REALTYPE fp132;
fp132 = fp123 + fp133;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src2[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->BO_z[vi] * fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp126 + fp131;
LIBINT2_REALTYPE fp135;
fp135 = inteval->BO_z[vi] * fp130;
LIBINT2_REALTYPE fp134;
fp134 = fp128 + fp135;
LIBINT2_REALTYPE fp137;
fp137 = inteval->BO_z[vi] * fp134;
LIBINT2_REALTYPE fp136;
fp136 = fp132 + fp137;
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src0[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + src1[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = fp181 * fp169;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp136;
target[((hsi*84+22)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp121;
fp121 = inteval->BO_z[vi] * fp132;
LIBINT2_REALTYPE fp119;
fp119 = inteval->BO_z[vi] * fp123;
LIBINT2_REALTYPE fp117;
fp117 = inteval->BO_z[vi] * fp122;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src2[((hsi*35+9)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp115 + fp117;
LIBINT2_REALTYPE fp118;
fp118 = fp116 + fp119;
LIBINT2_REALTYPE fp120;
fp120 = fp118 + fp121;
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + src1[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = fp181 * fp170;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp120;
target[((hsi*84+23)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src2[((hsi*35+13)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src2[((hsi*35+12)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->BO_z[vi] * fp102;
LIBINT2_REALTYPE fp100;
fp100 = fp99 + fp101;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src2[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->BO_z[vi] * fp103;
LIBINT2_REALTYPE fp105;
fp105 = fp102 + fp106;
LIBINT2_REALTYPE fp110;
fp110 = inteval->BO_z[vi] * fp105;
LIBINT2_REALTYPE fp109;
fp109 = fp100 + fp110;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src2[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->BO_z[vi] * fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp103 + fp108;
LIBINT2_REALTYPE fp112;
fp112 = inteval->BO_z[vi] * fp107;
LIBINT2_REALTYPE fp111;
fp111 = fp105 + fp112;
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_z[vi] * fp111;
LIBINT2_REALTYPE fp113;
fp113 = fp109 + fp114;
LIBINT2_REALTYPE fp172;
fp172 = 0.0000000000000000e+00 + src1[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + src0[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp182 * fp172;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp113;
target[((hsi*84+24)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + src1[((hsi*35+6)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = fp181 * fp171;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp113;
target[((hsi*84+25)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp98;
fp98 = inteval->BO_z[vi] * fp109;
LIBINT2_REALTYPE fp96;
fp96 = inteval->BO_z[vi] * fp100;
LIBINT2_REALTYPE fp94;
fp94 = inteval->BO_z[vi] * fp99;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src2[((hsi*35+14)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp92 + fp94;
LIBINT2_REALTYPE fp95;
fp95 = fp93 + fp96;
LIBINT2_REALTYPE fp97;
fp97 = fp95 + fp98;
LIBINT2_REALTYPE fp304;
fp304 = fp181 * fp172;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp97;
target[((hsi*84+26)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src2[((hsi*35+18)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src2[((hsi*35+17)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->BO_z[vi] * fp79;
LIBINT2_REALTYPE fp77;
fp77 = fp76 + fp78;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src2[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_z[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = fp79 + fp83;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_z[vi] * fp82;
LIBINT2_REALTYPE fp86;
fp86 = fp77 + fp87;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src2[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_z[vi] * fp81;
LIBINT2_REALTYPE fp84;
fp84 = fp80 + fp85;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_z[vi] * fp84;
LIBINT2_REALTYPE fp88;
fp88 = fp82 + fp89;
LIBINT2_REALTYPE fp91;
fp91 = inteval->BO_z[vi] * fp88;
LIBINT2_REALTYPE fp90;
fp90 = fp86 + fp91;
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src1[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = fp182 * fp174;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp90;
target[((hsi*84+27)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src1[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp181 * fp173;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp90;
target[((hsi*84+28)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_z[vi] * fp86;
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_z[vi] * fp77;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_z[vi] * fp76;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src2[((hsi*35+19)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp69 + fp71;
LIBINT2_REALTYPE fp72;
fp72 = fp70 + fp73;
LIBINT2_REALTYPE fp74;
fp74 = fp72 + fp75;
LIBINT2_REALTYPE fp298;
fp298 = fp181 * fp174;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp74;
target[((hsi*84+29)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src2[((hsi*35+3)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src2[((hsi*35+2)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->BO_z[vi] * fp148;
LIBINT2_REALTYPE fp146;
fp146 = fp145 + fp147;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src2[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = inteval->BO_z[vi] * fp149;
LIBINT2_REALTYPE fp151;
fp151 = fp148 + fp152;
LIBINT2_REALTYPE fp156;
fp156 = inteval->BO_z[vi] * fp151;
LIBINT2_REALTYPE fp155;
fp155 = fp146 + fp156;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src2[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->BO_z[vi] * fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp149 + fp154;
LIBINT2_REALTYPE fp158;
fp158 = inteval->BO_z[vi] * fp153;
LIBINT2_REALTYPE fp157;
fp157 = fp151 + fp158;
LIBINT2_REALTYPE fp160;
fp160 = inteval->BO_z[vi] * fp157;
LIBINT2_REALTYPE fp159;
fp159 = fp155 + fp160;
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + src1[((hsi*35+20)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + src0[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp180 * fp166;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp159;
target[((hsi*84+30)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + src0[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp188 * fp174;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp159;
target[((hsi*84+0)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp144;
fp144 = inteval->BO_z[vi] * fp155;
LIBINT2_REALTYPE fp142;
fp142 = inteval->BO_z[vi] * fp146;
LIBINT2_REALTYPE fp140;
fp140 = inteval->BO_z[vi] * fp145;
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + src2[((hsi*35+4)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp138 + fp140;
LIBINT2_REALTYPE fp141;
fp141 = fp139 + fp142;
LIBINT2_REALTYPE fp143;
fp143 = fp141 + fp144;
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + src0[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp179 * fp166;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp143;
target[((hsi*84+32)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + src1[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp180 * fp168;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp136;
target[((hsi*84+33)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src1[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp179 * fp167;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp136;
target[((hsi*84+34)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp286;
fp286 = fp179 * fp168;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp120;
target[((hsi*84+35)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp284;
fp284 = fp180 * fp170;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp113;
target[((hsi*84+36)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp282;
fp282 = fp179 * fp169;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp113;
target[((hsi*84+37)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp280;
fp280 = fp179 * fp170;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp97;
target[((hsi*84+38)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp278;
fp278 = fp180 * fp172;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp90;
target[((hsi*84+39)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp276;
fp276 = fp179 * fp171;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp90;
target[((hsi*84+40)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp274;
fp274 = fp179 * fp172;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp74;
target[((hsi*84+41)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + src1[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = fp179 * fp165;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp159;
target[((hsi*84+31)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp187;
fp187 = 0.0000000000000000e+00 + src0[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp187 * fp173;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp159;
target[((hsi*84+1)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp352;
fp352 = fp187 * fp174;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp143;
target[((hsi*84+2)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + src0[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = fp186 * fp172;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp159;
target[((hsi*84+3)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + src0[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp185 * fp171;
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp159;
target[((hsi*84+4)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp346;
fp346 = fp185 * fp172;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp143;
target[((hsi*84+5)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp344;
fp344 = fp186 * fp174;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp136;
target[((hsi*84+6)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp342;
fp342 = fp185 * fp173;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp136;
target[((hsi*84+7)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp340;
fp340 = fp185 * fp174;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp120;
target[((hsi*84+8)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp184;
fp184 = 0.0000000000000000e+00 + src0[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = fp184 * fp170;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp159;
target[((hsi*84+9)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp314;
fp314 = fp182 * fp170;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp136;
target[((hsi*84+21)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp183;
fp183 = 0.0000000000000000e+00 + src0[((hsi*35+20)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = fp183 * fp170;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp143;
target[((hsi*84+11)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp332;
fp332 = fp184 * fp172;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp136;
target[((hsi*84+12)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp330;
fp330 = fp183 * fp171;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp136;
target[((hsi*84+13)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp328;
fp328 = fp183 * fp172;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp120;
target[((hsi*84+14)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp326;
fp326 = fp184 * fp174;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp113;
target[((hsi*84+15)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp324;
fp324 = fp183 * fp173;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp113;
target[((hsi*84+16)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp322;
fp322 = fp183 * fp174;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp97;
target[((hsi*84+17)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp320;
fp320 = fp182 * fp168;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp159;
target[((hsi*84+18)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp318;
fp318 = fp181 * fp167;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp159;
target[((hsi*84+19)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp316;
fp316 = fp181 * fp168;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp143;
target[((hsi*84+20)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp336;
fp336 = fp183 * fp169;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp159;
target[((hsi*84+10)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + src0[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src1[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp175 * fp161;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp159;
target[((hsi*84+64)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp162;
fp162 = 0.0000000000000000e+00 + src1[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp175 * fp162;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp143;
target[((hsi*84+65)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src0[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src1[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp176 * fp164;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp136;
target[((hsi*84+66)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + src1[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp175 * fp163;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp136;
target[((hsi*84+67)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp220;
fp220 = fp175 * fp164;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp120;
target[((hsi*84+68)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp218;
fp218 = fp176 * fp166;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp113;
target[((hsi*84+69)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp216;
fp216 = fp175 * fp165;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp113;
target[((hsi*84+70)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp214;
fp214 = fp175 * fp166;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp97;
target[((hsi*84+71)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp212;
fp212 = fp176 * fp168;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp90;
target[((hsi*84+72)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*35+23)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*35+22)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp56;
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src2[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp57;
LIBINT2_REALTYPE fp59;
fp59 = fp56 + fp60;
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_z[vi] * fp59;
LIBINT2_REALTYPE fp63;
fp63 = fp54 + fp64;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src2[((hsi*35+20)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_z[vi] * fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp57 + fp62;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_z[vi] * fp61;
LIBINT2_REALTYPE fp65;
fp65 = fp59 + fp66;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_z[vi] * fp65;
LIBINT2_REALTYPE fp67;
fp67 = fp63 + fp68;
LIBINT2_REALTYPE fp272;
fp272 = fp180 * fp174;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp67;
target[((hsi*84+42)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp208;
fp208 = fp175 * fp168;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp74;
target[((hsi*84+74)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp206;
fp206 = fp176 * fp170;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp67;
target[((hsi*84+75)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp204;
fp204 = fp175 * fp169;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp67;
target[((hsi*84+76)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*35+24)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp46 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp51;
fp51 = fp49 + fp52;
LIBINT2_REALTYPE fp202;
fp202 = fp175 * fp170;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp51;
target[((hsi*84+77)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*35+28)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*35+27)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp31;
fp31 = fp30 + fp32;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp36;
fp36 = fp33 + fp37;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp40;
fp40 = fp31 + fp41;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp38;
fp38 = fp34 + fp39;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp42;
fp42 = fp36 + fp43;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_z[vi] * fp42;
LIBINT2_REALTYPE fp44;
fp44 = fp40 + fp45;
LIBINT2_REALTYPE fp200;
fp200 = fp176 * fp172;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp44;
target[((hsi*84+78)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp198;
fp198 = fp175 * fp171;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp44;
target[((hsi*84+79)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp30;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*35+29)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp23 + fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp28;
fp28 = fp26 + fp29;
LIBINT2_REALTYPE fp196;
fp196 = fp175 * fp172;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp28;
target[((hsi*84+80)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*35+33)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*35+32)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp13;
fp13 = fp10 + fp14;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp17;
fp17 = fp8 + fp18;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp15;
fp15 = fp11 + fp16;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp19;
fp19 = fp13 + fp20;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp21;
fp21 = fp17 + fp22;
LIBINT2_REALTYPE fp194;
fp194 = fp176 * fp174;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp21;
target[((hsi*84+81)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp192;
fp192 = fp175 * fp173;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp21;
target[((hsi*84+82)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*35+34)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp190;
fp190 = fp175 * fp174;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp5;
target[((hsi*84+83)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp210;
fp210 = fp175 * fp167;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp90;
target[((hsi*84+73)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp270;
fp270 = fp179 * fp173;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp67;
target[((hsi*84+43)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp268;
fp268 = fp179 * fp174;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp51;
target[((hsi*84+44)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + src0[((hsi*35+6)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp178 * fp164;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp159;
target[((hsi*84+45)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src0[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = fp177 * fp163;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp159;
target[((hsi*84+46)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp262;
fp262 = fp177 * fp164;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp143;
target[((hsi*84+47)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp260;
fp260 = fp178 * fp166;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp136;
target[((hsi*84+48)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp258;
fp258 = fp177 * fp165;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp136;
target[((hsi*84+49)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp256;
fp256 = fp177 * fp166;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp120;
target[((hsi*84+50)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp254;
fp254 = fp178 * fp168;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp113;
target[((hsi*84+51)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp230;
fp230 = fp176 * fp162;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp159;
target[((hsi*84+63)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp250;
fp250 = fp177 * fp168;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp97;
target[((hsi*84+53)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp248;
fp248 = fp178 * fp170;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp90;
target[((hsi*84+54)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp246;
fp246 = fp177 * fp169;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp90;
target[((hsi*84+55)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp244;
fp244 = fp177 * fp170;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp74;
target[((hsi*84+56)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp242;
fp242 = fp178 * fp172;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp67;
target[((hsi*84+57)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp240;
fp240 = fp177 * fp171;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp67;
target[((hsi*84+58)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp238;
fp238 = fp177 * fp172;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp51;
target[((hsi*84+59)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp236;
fp236 = fp178 * fp174;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp44;
target[((hsi*84+60)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp234;
fp234 = fp177 * fp173;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp44;
target[((hsi*84+61)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp232;
fp232 = fp177 * fp174;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp28;
target[((hsi*84+62)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp252;
fp252 = fp177 * fp167;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp113;
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
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
