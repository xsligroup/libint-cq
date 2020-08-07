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
void CR_aB_s001__0___Kinetic_h010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp57;
fp57 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp57 * src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp60 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp58 - fp56;
LIBINT2_REALTYPE fp347;
fp347 = src0[((hsi*24+4)*1+lsi)*1] * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp55;
LIBINT2_REALTYPE fp106;
fp106 = 5.0000000000000000e-01 * src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp112 * src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp113 - fp111;
LIBINT2_REALTYPE fp107;
fp107 = fp110 - fp108;
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp350;
fp350 = src0[((hsi*24+4)*1+lsi)*1] * fp105;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp144;
fp144 = fp145 * src0[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp147;
fp147 = fp148 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp146 - fp144;
LIBINT2_REALTYPE fp352;
fp352 = fp143 * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = fp352 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp351 + fp349;
LIBINT2_REALTYPE fp345;
fp345 = fp348 + fp346;
LIBINT2_REALTYPE fp353;
fp353 = inteval->two_alpha0_bra[vi] * fp345;
LIBINT2_REALTYPE fp354;
fp354 = -1.0000000000000000e+00 * fp353;
LIBINT2_REALTYPE fp384;
fp384 = inteval->two_alpha0_bra[vi] * fp354;
target[((hsi*21+1)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp45;
fp45 = 5.0000000000000000e-01 * src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp52 - fp50;
LIBINT2_REALTYPE fp46;
fp46 = fp49 - fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp337;
fp337 = src0[((hsi*24+4)*1+lsi)*1] * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp44;
LIBINT2_REALTYPE fp118;
fp118 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp119;
fp119 = fp120 * src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp119 - fp117;
LIBINT2_REALTYPE fp340;
fp340 = src0[((hsi*24+4)*1+lsi)*1] * fp116;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = fp143 * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = fp342 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = fp341 + fp339;
LIBINT2_REALTYPE fp335;
fp335 = fp338 + fp336;
LIBINT2_REALTYPE fp343;
fp343 = inteval->two_alpha0_bra[vi] * fp335;
LIBINT2_REALTYPE fp344;
fp344 = -1.0000000000000000e+00 * fp343;
LIBINT2_REALTYPE fp383;
fp383 = inteval->two_alpha0_bra[vi] * fp344;
target[((hsi*21+2)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp327;
fp327 = src0[((hsi*24+3)*1+lsi)*1] * src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp55;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp98 * src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp103 * src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp102 - fp100;
LIBINT2_REALTYPE fp96;
fp96 = fp99 - fp97;
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp330;
fp330 = src0[((hsi*24+3)*1+lsi)*1] * fp94;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp139 * src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp140;
fp140 = fp141 * src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp140 - fp138;
LIBINT2_REALTYPE fp332;
fp332 = fp137 * src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp332 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = fp331 + fp329;
LIBINT2_REALTYPE fp325;
fp325 = fp328 + fp326;
LIBINT2_REALTYPE fp333;
fp333 = inteval->two_alpha0_bra[vi] * fp325;
LIBINT2_REALTYPE fp334;
fp334 = -1.0000000000000000e+00 * fp333;
LIBINT2_REALTYPE fp382;
fp382 = inteval->two_alpha0_bra[vi] * fp334;
target[((hsi*21+3)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp317;
fp317 = src0[((hsi*24+3)*1+lsi)*1] * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp44;
LIBINT2_REALTYPE fp320;
fp320 = src0[((hsi*24+3)*1+lsi)*1] * fp105;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = fp137 * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp322 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = fp321 + fp319;
LIBINT2_REALTYPE fp315;
fp315 = fp318 + fp316;
LIBINT2_REALTYPE fp323;
fp323 = inteval->two_alpha0_bra[vi] * fp315;
LIBINT2_REALTYPE fp324;
fp324 = -1.0000000000000000e+00 * fp323;
LIBINT2_REALTYPE fp381;
fp381 = inteval->two_alpha0_bra[vi] * fp324;
target[((hsi*21+4)*1+lsi)*1] = fp381;
LIBINT2_REALTYPE fp34;
fp34 = 1.0000000000000000e+00 * src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 - fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 - fp36;
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp307;
fp307 = src0[((hsi*24+3)*1+lsi)*1] * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp33;
LIBINT2_REALTYPE fp310;
fp310 = src0[((hsi*24+3)*1+lsi)*1] * fp116;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = fp137 * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = fp312 * src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp311 + fp309;
LIBINT2_REALTYPE fp305;
fp305 = fp308 + fp306;
LIBINT2_REALTYPE fp313;
fp313 = inteval->two_alpha0_bra[vi] * fp305;
LIBINT2_REALTYPE fp314;
fp314 = -1.0000000000000000e+00 * fp313;
LIBINT2_REALTYPE fp380;
fp380 = inteval->two_alpha0_bra[vi] * fp314;
target[((hsi*21+5)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp297;
fp297 = src0[((hsi*24+2)*1+lsi)*1] * src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp55;
LIBINT2_REALTYPE fp84;
fp84 = 1.5000000000000000e+00 * src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp91 - fp89;
LIBINT2_REALTYPE fp85;
fp85 = fp88 - fp86;
LIBINT2_REALTYPE fp83;
fp83 = fp85 + fp84;
LIBINT2_REALTYPE fp300;
fp300 = src0[((hsi*24+2)*1+lsi)*1] * fp83;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp134;
fp134 = fp135 * src0[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp134 - fp132;
LIBINT2_REALTYPE fp302;
fp302 = fp131 * src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp302 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = fp301 + fp299;
LIBINT2_REALTYPE fp295;
fp295 = fp298 + fp296;
LIBINT2_REALTYPE fp303;
fp303 = inteval->two_alpha0_bra[vi] * fp295;
LIBINT2_REALTYPE fp304;
fp304 = -1.0000000000000000e+00 * fp303;
LIBINT2_REALTYPE fp379;
fp379 = inteval->two_alpha0_bra[vi] * fp304;
target[((hsi*21+6)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp287;
fp287 = src0[((hsi*24+2)*1+lsi)*1] * src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp44;
LIBINT2_REALTYPE fp290;
fp290 = src0[((hsi*24+2)*1+lsi)*1] * fp94;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp131 * src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp292 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp291 + fp289;
LIBINT2_REALTYPE fp285;
fp285 = fp288 + fp286;
LIBINT2_REALTYPE fp293;
fp293 = inteval->two_alpha0_bra[vi] * fp285;
LIBINT2_REALTYPE fp294;
fp294 = -1.0000000000000000e+00 * fp293;
LIBINT2_REALTYPE fp378;
fp378 = inteval->two_alpha0_bra[vi] * fp294;
target[((hsi*21+7)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp277;
fp277 = src0[((hsi*24+2)*1+lsi)*1] * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp33;
LIBINT2_REALTYPE fp280;
fp280 = src0[((hsi*24+2)*1+lsi)*1] * fp105;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = fp131 * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = fp282 * src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = fp281 + fp279;
LIBINT2_REALTYPE fp275;
fp275 = fp278 + fp276;
LIBINT2_REALTYPE fp283;
fp283 = inteval->two_alpha0_bra[vi] * fp275;
LIBINT2_REALTYPE fp284;
fp284 = -1.0000000000000000e+00 * fp283;
LIBINT2_REALTYPE fp377;
fp377 = inteval->two_alpha0_bra[vi] * fp284;
target[((hsi*21+8)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp23;
fp23 = 1.5000000000000000e+00 * src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp30 - fp28;
LIBINT2_REALTYPE fp24;
fp24 = fp27 - fp25;
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
LIBINT2_REALTYPE fp267;
fp267 = src0[((hsi*24+2)*1+lsi)*1] * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp22;
LIBINT2_REALTYPE fp270;
fp270 = src0[((hsi*24+2)*1+lsi)*1] * fp116;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp131 * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = fp272 * src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp271 + fp269;
LIBINT2_REALTYPE fp265;
fp265 = fp268 + fp266;
LIBINT2_REALTYPE fp273;
fp273 = inteval->two_alpha0_bra[vi] * fp265;
LIBINT2_REALTYPE fp274;
fp274 = -1.0000000000000000e+00 * fp273;
LIBINT2_REALTYPE fp376;
fp376 = inteval->two_alpha0_bra[vi] * fp274;
target[((hsi*21+9)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp357;
fp357 = src0[((hsi*24+5)*1+lsi)*1] * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp55;
LIBINT2_REALTYPE fp360;
fp360 = src0[((hsi*24+5)*1+lsi)*1] * fp116;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp150;
fp150 = fp151 * src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp153;
fp153 = fp154 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * src0[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp152 - fp150;
LIBINT2_REALTYPE fp362;
fp362 = fp149 * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = fp362 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = fp361 + fp359;
LIBINT2_REALTYPE fp355;
fp355 = fp358 + fp356;
LIBINT2_REALTYPE fp363;
fp363 = inteval->two_alpha0_bra[vi] * fp355;
LIBINT2_REALTYPE fp364;
fp364 = -1.0000000000000000e+00 * fp363;
LIBINT2_REALTYPE fp385;
fp385 = inteval->two_alpha0_bra[vi] * fp364;
target[((hsi*21+0)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp247;
fp247 = src0[((hsi*24+1)*1+lsi)*1] * src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp44;
LIBINT2_REALTYPE fp250;
fp250 = src0[((hsi*24+1)*1+lsi)*1] * fp83;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp126;
fp126 = fp127 * src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp128 - fp126;
LIBINT2_REALTYPE fp252;
fp252 = fp125 * src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp252 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = fp251 + fp249;
LIBINT2_REALTYPE fp245;
fp245 = fp248 + fp246;
LIBINT2_REALTYPE fp253;
fp253 = inteval->two_alpha0_bra[vi] * fp245;
LIBINT2_REALTYPE fp254;
fp254 = -1.0000000000000000e+00 * fp253;
LIBINT2_REALTYPE fp374;
fp374 = inteval->two_alpha0_bra[vi] * fp254;
target[((hsi*21+11)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp237;
fp237 = src0[((hsi*24+1)*1+lsi)*1] * src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp33;
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*24+1)*1+lsi)*1] * fp94;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp125 * src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp242 * src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp241 + fp239;
LIBINT2_REALTYPE fp235;
fp235 = fp238 + fp236;
LIBINT2_REALTYPE fp243;
fp243 = inteval->two_alpha0_bra[vi] * fp235;
LIBINT2_REALTYPE fp244;
fp244 = -1.0000000000000000e+00 * fp243;
LIBINT2_REALTYPE fp373;
fp373 = inteval->two_alpha0_bra[vi] * fp244;
target[((hsi*21+12)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp227;
fp227 = src0[((hsi*24+1)*1+lsi)*1] * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp22;
LIBINT2_REALTYPE fp230;
fp230 = src0[((hsi*24+1)*1+lsi)*1] * fp105;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp125 * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp232 * src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp231 + fp229;
LIBINT2_REALTYPE fp225;
fp225 = fp228 + fp226;
LIBINT2_REALTYPE fp233;
fp233 = inteval->two_alpha0_bra[vi] * fp225;
LIBINT2_REALTYPE fp234;
fp234 = -1.0000000000000000e+00 * fp233;
LIBINT2_REALTYPE fp372;
fp372 = inteval->two_alpha0_bra[vi] * fp234;
target[((hsi*21+13)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp12;
fp12 = 2.0000000000000000e+00 * src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp14;
fp14 = fp15 * src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp18 * src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp21 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp19 - fp17;
LIBINT2_REALTYPE fp13;
fp13 = fp16 - fp14;
LIBINT2_REALTYPE fp11;
fp11 = fp13 + fp12;
LIBINT2_REALTYPE fp217;
fp217 = src0[((hsi*24+1)*1+lsi)*1] * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp11;
LIBINT2_REALTYPE fp220;
fp220 = src0[((hsi*24+1)*1+lsi)*1] * fp116;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp125 * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp222 * src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp221 + fp219;
LIBINT2_REALTYPE fp215;
fp215 = fp218 + fp216;
LIBINT2_REALTYPE fp223;
fp223 = inteval->two_alpha0_bra[vi] * fp215;
LIBINT2_REALTYPE fp224;
fp224 = -1.0000000000000000e+00 * fp223;
LIBINT2_REALTYPE fp371;
fp371 = inteval->two_alpha0_bra[vi] * fp224;
target[((hsi*21+14)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp207;
fp207 = src0[((hsi*24+0)*1+lsi)*1] * src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp55;
LIBINT2_REALTYPE fp62;
fp62 = 2.5000000000000000e+00 * src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * src1[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp69 - fp67;
LIBINT2_REALTYPE fp63;
fp63 = fp66 - fp64;
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp210;
fp210 = src0[((hsi*24+0)*1+lsi)*1] * fp61;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp123;
fp123 = fp124 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp122;
fp122 = fp123 * src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp122 * src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp212 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp211 + fp209;
LIBINT2_REALTYPE fp205;
fp205 = fp208 + fp206;
LIBINT2_REALTYPE fp213;
fp213 = inteval->two_alpha0_bra[vi] * fp205;
LIBINT2_REALTYPE fp214;
fp214 = -1.0000000000000000e+00 * fp213;
LIBINT2_REALTYPE fp370;
fp370 = inteval->two_alpha0_bra[vi] * fp214;
target[((hsi*21+15)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp197;
fp197 = src0[((hsi*24+0)*1+lsi)*1] * src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp44;
LIBINT2_REALTYPE fp73;
fp73 = 2.0000000000000000e+00 * src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * src1[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp80;
fp80 = fp81 * src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp80 - fp78;
LIBINT2_REALTYPE fp74;
fp74 = fp77 - fp75;
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*24+0)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp122 * src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp202 * src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp201 + fp199;
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
LIBINT2_REALTYPE fp203;
fp203 = inteval->two_alpha0_bra[vi] * fp195;
LIBINT2_REALTYPE fp204;
fp204 = -1.0000000000000000e+00 * fp203;
LIBINT2_REALTYPE fp369;
fp369 = inteval->two_alpha0_bra[vi] * fp204;
target[((hsi*21+16)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp187;
fp187 = src0[((hsi*24+0)*1+lsi)*1] * src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp33;
LIBINT2_REALTYPE fp190;
fp190 = src0[((hsi*24+0)*1+lsi)*1] * fp83;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp122 * src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp192 * src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp191 + fp189;
LIBINT2_REALTYPE fp185;
fp185 = fp188 + fp186;
LIBINT2_REALTYPE fp193;
fp193 = inteval->two_alpha0_bra[vi] * fp185;
LIBINT2_REALTYPE fp194;
fp194 = -1.0000000000000000e+00 * fp193;
LIBINT2_REALTYPE fp368;
fp368 = inteval->two_alpha0_bra[vi] * fp194;
target[((hsi*21+17)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp177;
fp177 = src0[((hsi*24+0)*1+lsi)*1] * src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp22;
LIBINT2_REALTYPE fp180;
fp180 = src0[((hsi*24+0)*1+lsi)*1] * fp94;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp122 * src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp182 * src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp181 + fp179;
LIBINT2_REALTYPE fp175;
fp175 = fp178 + fp176;
LIBINT2_REALTYPE fp183;
fp183 = inteval->two_alpha0_bra[vi] * fp175;
LIBINT2_REALTYPE fp184;
fp184 = -1.0000000000000000e+00 * fp183;
LIBINT2_REALTYPE fp367;
fp367 = inteval->two_alpha0_bra[vi] * fp184;
target[((hsi*21+18)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp167;
fp167 = src0[((hsi*24+0)*1+lsi)*1] * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp11;
LIBINT2_REALTYPE fp170;
fp170 = src0[((hsi*24+0)*1+lsi)*1] * fp105;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp122 * src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp172 * src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp171 + fp169;
LIBINT2_REALTYPE fp165;
fp165 = fp168 + fp166;
LIBINT2_REALTYPE fp173;
fp173 = inteval->two_alpha0_bra[vi] * fp165;
LIBINT2_REALTYPE fp174;
fp174 = -1.0000000000000000e+00 * fp173;
LIBINT2_REALTYPE fp366;
fp366 = inteval->two_alpha0_bra[vi] * fp174;
target[((hsi*21+19)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp1;
fp1 = 2.5000000000000000e+00 * src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp4 * src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp6;
fp6 = fp7 * src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp8 - fp6;
LIBINT2_REALTYPE fp2;
fp2 = fp5 - fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
LIBINT2_REALTYPE fp157;
fp157 = src0[((hsi*24+0)*1+lsi)*1] * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp0;
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*24+0)*1+lsi)*1] * fp116;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp122 * src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp162 * src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp161 + fp159;
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
LIBINT2_REALTYPE fp163;
fp163 = inteval->two_alpha0_bra[vi] * fp155;
LIBINT2_REALTYPE fp164;
fp164 = -1.0000000000000000e+00 * fp163;
LIBINT2_REALTYPE fp365;
fp365 = inteval->two_alpha0_bra[vi] * fp164;
target[((hsi*21+20)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp257;
fp257 = src0[((hsi*24+1)*1+lsi)*1] * src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp55;
LIBINT2_REALTYPE fp260;
fp260 = src0[((hsi*24+1)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = fp125 * src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp262 * src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp261 + fp259;
LIBINT2_REALTYPE fp255;
fp255 = fp258 + fp256;
LIBINT2_REALTYPE fp263;
fp263 = inteval->two_alpha0_bra[vi] * fp255;
LIBINT2_REALTYPE fp264;
fp264 = -1.0000000000000000e+00 * fp263;
LIBINT2_REALTYPE fp375;
fp375 = inteval->two_alpha0_bra[vi] * fp264;
target[((hsi*21+10)*1+lsi)*1] = fp375;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 386 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif