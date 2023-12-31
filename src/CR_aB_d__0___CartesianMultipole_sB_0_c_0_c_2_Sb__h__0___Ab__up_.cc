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
void CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_2_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_z[vi] * fp88;
LIBINT2_REALTYPE fp84;
fp84 = fp83 + fp85;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_z[vi] * fp93;
LIBINT2_REALTYPE fp89;
fp89 = fp88 + fp90;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_z[vi] * fp89;
LIBINT2_REALTYPE fp86;
fp86 = fp84 + fp87;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = fp127 * fp111;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp86;
target[((hsi*126+33)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_z[vi] * fp83;
LIBINT2_REALTYPE fp79;
fp79 = fp78 + fp80;
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_z[vi] * fp84;
LIBINT2_REALTYPE fp81;
fp81 = fp79 + fp82;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp127 * fp112;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp81;
target[((hsi*126+34)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_z[vi] * fp78;
LIBINT2_REALTYPE fp74;
fp74 = fp73 + fp75;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_z[vi] * fp79;
LIBINT2_REALTYPE fp76;
fp76 = fp74 + fp77;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp127 * fp113;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp76;
target[((hsi*126+35)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_z[vi] * fp94;
LIBINT2_REALTYPE fp96;
fp96 = fp93 + fp97;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_z[vi] * fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp94 + fp99;
LIBINT2_REALTYPE fp101;
fp101 = inteval->BO_z[vi] * fp98;
LIBINT2_REALTYPE fp100;
fp100 = fp96 + fp101;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = fp126 * fp108;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp100;
target[((hsi*126+36)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_z[vi] * fp96;
LIBINT2_REALTYPE fp91;
fp91 = fp89 + fp92;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = fp126 * fp109;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp91;
target[((hsi*126+37)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp126 * fp110;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp86;
target[((hsi*126+38)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp311;
fp311 = fp126 * fp111;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp81;
target[((hsi*126+39)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp309;
fp309 = fp126 * fp112;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp76;
target[((hsi*126+40)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_z[vi] * fp74;
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_z[vi] * fp73;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src2[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp68 + fp70;
LIBINT2_REALTYPE fp71;
fp71 = fp69 + fp72;
LIBINT2_REALTYPE fp307;
fp307 = fp126 * fp113;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp71;
target[((hsi*126+41)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_z[vi] * fp60;
LIBINT2_REALTYPE fp62;
fp62 = fp59 + fp63;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_z[vi] * fp61;
LIBINT2_REALTYPE fp64;
fp64 = fp60 + fp65;
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_z[vi] * fp64;
LIBINT2_REALTYPE fp66;
fp66 = fp62 + fp67;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp131 * fp119;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp66;
target[((hsi*126+42)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp130 * fp118;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp66;
target[((hsi*126+43)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_z[vi] * fp59;
LIBINT2_REALTYPE fp55;
fp55 = fp54 + fp56;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_z[vi] * fp62;
LIBINT2_REALTYPE fp57;
fp57 = fp55 + fp58;
LIBINT2_REALTYPE fp301;
fp301 = fp130 * fp119;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp57;
target[((hsi*126+44)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src0[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = fp129 * fp117;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp66;
target[((hsi*126+45)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp297;
fp297 = fp129 * fp118;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp57;
target[((hsi*126+46)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp389;
fp389 = fp137 * fp119;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp100;
target[((hsi*126+0)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = fp128 * fp116;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp66;
target[((hsi*126+48)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp291;
fp291 = fp128 * fp117;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp57;
target[((hsi*126+49)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp50;
fp50 = fp49 + fp51;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_z[vi] * fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp50 + fp53;
LIBINT2_REALTYPE fp289;
fp289 = fp128 * fp118;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp52;
target[((hsi*126+50)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp49;
LIBINT2_REALTYPE fp45;
fp45 = fp44 + fp46;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp47;
fp47 = fp45 + fp48;
LIBINT2_REALTYPE fp287;
fp287 = fp128 * fp119;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp47;
target[((hsi*126+51)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp127 * fp115;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp66;
target[((hsi*126+52)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp283;
fp283 = fp127 * fp116;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp57;
target[((hsi*126+53)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp281;
fp281 = fp127 * fp117;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp52;
target[((hsi*126+54)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp279;
fp279 = fp127 * fp118;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp47;
target[((hsi*126+55)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp44;
LIBINT2_REALTYPE fp40;
fp40 = fp39 + fp41;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp45;
LIBINT2_REALTYPE fp42;
fp42 = fp40 + fp43;
LIBINT2_REALTYPE fp277;
fp277 = fp127 * fp119;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp42;
target[((hsi*126+56)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src1[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp126 * fp114;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp66;
target[((hsi*126+57)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp273;
fp273 = fp126 * fp115;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp57;
target[((hsi*126+58)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp271;
fp271 = fp126 * fp116;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp52;
target[((hsi*126+59)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp269;
fp269 = fp126 * fp117;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp47;
target[((hsi*126+60)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp267;
fp267 = fp126 * fp118;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp42;
target[((hsi*126+61)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_z[vi] * fp39;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp34 + fp36;
LIBINT2_REALTYPE fp37;
fp37 = fp35 + fp38;
LIBINT2_REALTYPE fp265;
fp265 = fp126 * fp119;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp37;
target[((hsi*126+62)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp295;
fp295 = fp129 * fp119;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp52;
target[((hsi*126+47)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp387;
fp387 = fp136 * fp118;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp100;
target[((hsi*126+1)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp385;
fp385 = fp136 * fp119;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp91;
target[((hsi*126+2)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + src0[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = fp135 * fp117;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp100;
target[((hsi*126+3)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp381;
fp381 = fp135 * fp118;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp91;
target[((hsi*126+4)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp379;
fp379 = fp135 * fp119;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp86;
target[((hsi*126+5)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = fp134 * fp116;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp100;
target[((hsi*126+6)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp375;
fp375 = fp134 * fp117;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp91;
target[((hsi*126+7)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp373;
fp373 = fp134 * fp118;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp86;
target[((hsi*126+8)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp371;
fp371 = fp134 * fp119;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp81;
target[((hsi*126+9)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src0[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp133 * fp115;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp100;
target[((hsi*126+10)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp367;
fp367 = fp133 * fp116;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp91;
target[((hsi*126+11)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp365;
fp365 = fp133 * fp117;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp86;
target[((hsi*126+12)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp363;
fp363 = fp133 * fp118;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp81;
target[((hsi*126+13)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp361;
fp361 = fp133 * fp119;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp76;
target[((hsi*126+14)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = fp132 * fp114;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp100;
target[((hsi*126+15)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp325;
fp325 = fp127 * fp110;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp91;
target[((hsi*126+32)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp355;
fp355 = fp132 * fp116;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp86;
target[((hsi*126+17)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp353;
fp353 = fp132 * fp117;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp81;
target[((hsi*126+18)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp351;
fp351 = fp132 * fp118;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp76;
target[((hsi*126+19)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp349;
fp349 = fp132 * fp119;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp71;
target[((hsi*126+20)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp347;
fp347 = fp131 * fp113;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp100;
target[((hsi*126+21)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp345;
fp345 = fp130 * fp112;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp100;
target[((hsi*126+22)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp343;
fp343 = fp130 * fp113;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp91;
target[((hsi*126+23)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp341;
fp341 = fp129 * fp111;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp100;
target[((hsi*126+24)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp339;
fp339 = fp129 * fp112;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp91;
target[((hsi*126+25)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp337;
fp337 = fp129 * fp113;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp86;
target[((hsi*126+26)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp335;
fp335 = fp128 * fp110;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp100;
target[((hsi*126+27)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp333;
fp333 = fp128 * fp111;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp91;
target[((hsi*126+28)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp331;
fp331 = fp128 * fp112;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp86;
target[((hsi*126+29)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp329;
fp329 = fp128 * fp113;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp81;
target[((hsi*126+30)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp327;
fp327 = fp127 * fp109;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp100;
target[((hsi*126+31)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp357;
fp357 = fp132 * fp115;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp91;
target[((hsi*126+16)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp121 * fp111;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp52;
target[((hsi*126+96)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp195;
fp195 = fp121 * fp112;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp47;
target[((hsi*126+97)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp193;
fp193 = fp121 * fp113;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp42;
target[((hsi*126+98)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp120 * fp108;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp66;
target[((hsi*126+99)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp189;
fp189 = fp120 * fp109;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp57;
target[((hsi*126+100)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp187;
fp187 = fp120 * fp110;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp52;
target[((hsi*126+101)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp185;
fp185 = fp120 * fp111;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp47;
target[((hsi*126+102)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp183;
fp183 = fp120 * fp112;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp42;
target[((hsi*126+103)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp181;
fp181 = fp120 * fp113;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp37;
target[((hsi*126+104)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp26;
LIBINT2_REALTYPE fp28;
fp28 = fp25 + fp29;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp27;
LIBINT2_REALTYPE fp30;
fp30 = fp26 + fp31;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp30;
LIBINT2_REALTYPE fp32;
fp32 = fp28 + fp33;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src0[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp125 * fp119;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp32;
target[((hsi*126+105)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp124 * fp118;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp32;
target[((hsi*126+106)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp175;
fp175 = fp124 * fp119;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp23;
target[((hsi*126+107)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp123 * fp117;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp32;
target[((hsi*126+108)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp171;
fp171 = fp123 * fp118;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp23;
target[((hsi*126+109)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp125 * fp107;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp100;
target[((hsi*126+63)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src0[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp122 * fp116;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp32;
target[((hsi*126+111)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp165;
fp165 = fp122 * fp117;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp23;
target[((hsi*126+112)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp16;
fp16 = fp15 + fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp18;
fp18 = fp16 + fp19;
LIBINT2_REALTYPE fp163;
fp163 = fp122 * fp118;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp18;
target[((hsi*126+113)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp13;
fp13 = fp11 + fp14;
LIBINT2_REALTYPE fp161;
fp161 = fp122 * fp119;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp13;
target[((hsi*126+114)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp159;
fp159 = fp121 * fp115;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp32;
target[((hsi*126+115)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp157;
fp157 = fp121 * fp116;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp23;
target[((hsi*126+116)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp155;
fp155 = fp121 * fp117;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp18;
target[((hsi*126+117)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp153;
fp153 = fp121 * fp118;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp13;
target[((hsi*126+118)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp6;
fp6 = fp5 + fp7;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp8;
fp8 = fp6 + fp9;
LIBINT2_REALTYPE fp151;
fp151 = fp121 * fp119;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp8;
target[((hsi*126+119)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp149;
fp149 = fp120 * fp114;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp32;
target[((hsi*126+120)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp147;
fp147 = fp120 * fp115;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp23;
target[((hsi*126+121)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp145;
fp145 = fp120 * fp116;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp18;
target[((hsi*126+122)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp143;
fp143 = fp120 * fp117;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp13;
target[((hsi*126+123)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = fp120 * fp118;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp8;
target[((hsi*126+124)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+23)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp139;
fp139 = fp120 * fp119;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp3;
target[((hsi*126+125)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp169;
fp169 = fp123 * fp119;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp18;
target[((hsi*126+110)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp124 * fp106;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp100;
target[((hsi*126+64)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp259;
fp259 = fp124 * fp107;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp91;
target[((hsi*126+65)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp123 * fp105;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp100;
target[((hsi*126+66)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp255;
fp255 = fp123 * fp106;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp91;
target[((hsi*126+67)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp253;
fp253 = fp123 * fp107;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp86;
target[((hsi*126+68)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp122 * fp104;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp100;
target[((hsi*126+69)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp249;
fp249 = fp122 * fp105;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp91;
target[((hsi*126+70)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp247;
fp247 = fp122 * fp106;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp86;
target[((hsi*126+71)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp245;
fp245 = fp122 * fp107;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp81;
target[((hsi*126+72)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp121 * fp103;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp100;
target[((hsi*126+73)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp241;
fp241 = fp121 * fp104;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp91;
target[((hsi*126+74)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp239;
fp239 = fp121 * fp105;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp86;
target[((hsi*126+75)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp237;
fp237 = fp121 * fp106;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp81;
target[((hsi*126+76)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp235;
fp235 = fp121 * fp107;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp76;
target[((hsi*126+77)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp120 * fp102;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp100;
target[((hsi*126+78)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp199;
fp199 = fp121 * fp110;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp57;
target[((hsi*126+95)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp229;
fp229 = fp120 * fp104;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp86;
target[((hsi*126+80)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp227;
fp227 = fp120 * fp105;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp81;
target[((hsi*126+81)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp225;
fp225 = fp120 * fp106;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp76;
target[((hsi*126+82)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp223;
fp223 = fp120 * fp107;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp71;
target[((hsi*126+83)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp221;
fp221 = fp125 * fp113;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp66;
target[((hsi*126+84)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp219;
fp219 = fp124 * fp112;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp66;
target[((hsi*126+85)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp217;
fp217 = fp124 * fp113;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp57;
target[((hsi*126+86)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp215;
fp215 = fp123 * fp111;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp66;
target[((hsi*126+87)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp213;
fp213 = fp123 * fp112;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp57;
target[((hsi*126+88)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp211;
fp211 = fp123 * fp113;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp52;
target[((hsi*126+89)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp209;
fp209 = fp122 * fp110;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp66;
target[((hsi*126+90)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp207;
fp207 = fp122 * fp111;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp57;
target[((hsi*126+91)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp205;
fp205 = fp122 * fp112;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp52;
target[((hsi*126+92)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp203;
fp203 = fp122 * fp113;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp47;
target[((hsi*126+93)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp201;
fp201 = fp121 * fp109;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp66;
target[((hsi*126+94)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp231;
fp231 = fp120 * fp103;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp91;
target[((hsi*126+79)*1+lsi)*1] = fp230;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 390 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
