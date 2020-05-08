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
void OSVRRSMultipole_aB_pd__0___SphericalMultipole_sB_1_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp382;
fp382 = 2.0000000000000000e+00 * src1[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = 0.0000000000000000e+00 + fp382;
LIBINT2_REALTYPE fp380;
fp380 = fp381 + src2[((hsi*78+17)*1+lsi)*1];
LIBINT2_REALTYPE fp379;
fp379 = inteval->oo2z[vi] * fp380;
LIBINT2_REALTYPE fp383;
fp383 = inteval->PA_z[vi] * src0[((hsi*78+17)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
fp378 = fp383 + fp379;
target[((hsi*91+24)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp376;
fp376 = 3.0000000000000000e+00 * src1[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = 0.0000000000000000e+00 + fp376;
LIBINT2_REALTYPE fp374;
fp374 = fp375 + src2[((hsi*78+18)*1+lsi)*1];
LIBINT2_REALTYPE fp373;
fp373 = inteval->oo2z[vi] * fp374;
LIBINT2_REALTYPE fp377;
fp377 = inteval->PA_z[vi] * src0[((hsi*78+18)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = fp377 + fp373;
target[((hsi*91+25)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp370;
fp370 = 4.0000000000000000e+00 * src1[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = 0.0000000000000000e+00 + fp370;
LIBINT2_REALTYPE fp368;
fp368 = fp369 + src2[((hsi*78+19)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = inteval->oo2z[vi] * fp368;
LIBINT2_REALTYPE fp371;
fp371 = inteval->PA_z[vi] * src0[((hsi*78+19)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = fp371 + fp367;
target[((hsi*91+26)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp364;
fp364 = 5.0000000000000000e+00 * src1[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = 0.0000000000000000e+00 + fp364;
LIBINT2_REALTYPE fp362;
fp362 = fp363 + src2[((hsi*78+20)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = inteval->oo2z[vi] * fp362;
LIBINT2_REALTYPE fp365;
fp365 = inteval->PA_z[vi] * src0[((hsi*78+20)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = fp365 + fp361;
target[((hsi*91+27)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp358;
fp358 = 6.0000000000000000e+00 * src1[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = 0.0000000000000000e+00 + fp358;
LIBINT2_REALTYPE fp356;
fp356 = inteval->oo2z[vi] * fp357;
LIBINT2_REALTYPE fp359;
fp359 = inteval->PA_y[vi] * src0[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = fp359 + fp356;
target[((hsi*91+28)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp353;
fp353 = 0.0000000000000000e+00 + src2[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = inteval->oo2z[vi] * fp353;
LIBINT2_REALTYPE fp354;
fp354 = inteval->PA_z[vi] * src0[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = fp354 + fp352;
target[((hsi*91+29)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp349;
fp349 = 1.0000000000000000e+00 * src1[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = 0.0000000000000000e+00 + fp349;
LIBINT2_REALTYPE fp347;
fp347 = fp348 + src2[((hsi*78+22)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = inteval->oo2z[vi] * fp347;
LIBINT2_REALTYPE fp350;
fp350 = inteval->PA_z[vi] * src0[((hsi*78+22)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = fp350 + fp346;
target[((hsi*91+30)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp343;
fp343 = 2.0000000000000000e+00 * src1[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = 0.0000000000000000e+00 + fp343;
LIBINT2_REALTYPE fp341;
fp341 = fp342 + src2[((hsi*78+23)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = inteval->oo2z[vi] * fp341;
LIBINT2_REALTYPE fp344;
fp344 = inteval->PA_z[vi] * src0[((hsi*78+23)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = fp344 + fp340;
target[((hsi*91+31)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp337;
fp337 = 3.0000000000000000e+00 * src1[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = 0.0000000000000000e+00 + fp337;
LIBINT2_REALTYPE fp335;
fp335 = fp336 + src2[((hsi*78+24)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = inteval->oo2z[vi] * fp335;
LIBINT2_REALTYPE fp338;
fp338 = inteval->PA_z[vi] * src0[((hsi*78+24)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = fp338 + fp334;
target[((hsi*91+32)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp331;
fp331 = 4.0000000000000000e+00 * src1[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = 0.0000000000000000e+00 + fp331;
LIBINT2_REALTYPE fp329;
fp329 = fp330 + src2[((hsi*78+25)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = inteval->oo2z[vi] * fp329;
LIBINT2_REALTYPE fp332;
fp332 = inteval->PA_z[vi] * src0[((hsi*78+25)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = fp332 + fp328;
target[((hsi*91+33)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp503;
fp503 = 1.1000000000000000e+01 * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp502;
fp502 = 0.0000000000000000e+00 + fp503;
LIBINT2_REALTYPE fp501;
fp501 = inteval->oo2z[vi] * fp502;
LIBINT2_REALTYPE fp504;
fp504 = inteval->PA_x[vi] * src0[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp500;
fp500 = fp504 + fp501;
target[((hsi*91+0)*1+lsi)*1] = fp500;
LIBINT2_REALTYPE fp319;
fp319 = 6.0000000000000000e+00 * src1[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = 0.0000000000000000e+00 + fp319;
LIBINT2_REALTYPE fp317;
fp317 = fp318 + src2[((hsi*78+27)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = inteval->oo2z[vi] * fp317;
LIBINT2_REALTYPE fp320;
fp320 = inteval->PA_z[vi] * src0[((hsi*78+27)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = fp320 + fp316;
target[((hsi*91+35)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp313;
fp313 = 7.0000000000000000e+00 * src1[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = 0.0000000000000000e+00 + fp313;
LIBINT2_REALTYPE fp311;
fp311 = inteval->oo2z[vi] * fp312;
LIBINT2_REALTYPE fp314;
fp314 = inteval->PA_y[vi] * src0[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = fp314 + fp311;
target[((hsi*91+36)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp308;
fp308 = 0.0000000000000000e+00 + src2[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = inteval->oo2z[vi] * fp308;
LIBINT2_REALTYPE fp309;
fp309 = inteval->PA_z[vi] * src0[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = fp309 + fp307;
target[((hsi*91+37)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp304;
fp304 = 1.0000000000000000e+00 * src1[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = 0.0000000000000000e+00 + fp304;
LIBINT2_REALTYPE fp302;
fp302 = fp303 + src2[((hsi*78+29)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = inteval->oo2z[vi] * fp302;
LIBINT2_REALTYPE fp305;
fp305 = inteval->PA_z[vi] * src0[((hsi*78+29)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp305 + fp301;
target[((hsi*91+38)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp298;
fp298 = 2.0000000000000000e+00 * src1[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = 0.0000000000000000e+00 + fp298;
LIBINT2_REALTYPE fp296;
fp296 = fp297 + src2[((hsi*78+30)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = inteval->oo2z[vi] * fp296;
LIBINT2_REALTYPE fp299;
fp299 = inteval->PA_z[vi] * src0[((hsi*78+30)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = fp299 + fp295;
target[((hsi*91+39)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp292;
fp292 = 3.0000000000000000e+00 * src1[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = 0.0000000000000000e+00 + fp292;
LIBINT2_REALTYPE fp290;
fp290 = fp291 + src2[((hsi*78+31)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = inteval->oo2z[vi] * fp290;
LIBINT2_REALTYPE fp293;
fp293 = inteval->PA_z[vi] * src0[((hsi*78+31)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp293 + fp289;
target[((hsi*91+40)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp286;
fp286 = 4.0000000000000000e+00 * src1[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = 0.0000000000000000e+00 + fp286;
LIBINT2_REALTYPE fp284;
fp284 = fp285 + src2[((hsi*78+32)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = inteval->oo2z[vi] * fp284;
LIBINT2_REALTYPE fp287;
fp287 = inteval->PA_z[vi] * src0[((hsi*78+32)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = fp287 + fp283;
target[((hsi*91+41)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp280;
fp280 = 5.0000000000000000e+00 * src1[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = 0.0000000000000000e+00 + fp280;
LIBINT2_REALTYPE fp278;
fp278 = fp279 + src2[((hsi*78+33)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->oo2z[vi] * fp278;
LIBINT2_REALTYPE fp281;
fp281 = inteval->PA_z[vi] * src0[((hsi*78+33)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = fp281 + fp277;
target[((hsi*91+42)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp274;
fp274 = 6.0000000000000000e+00 * src1[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = 0.0000000000000000e+00 + fp274;
LIBINT2_REALTYPE fp272;
fp272 = fp273 + src2[((hsi*78+34)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = inteval->oo2z[vi] * fp272;
LIBINT2_REALTYPE fp275;
fp275 = inteval->PA_z[vi] * src0[((hsi*78+34)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp275 + fp271;
target[((hsi*91+43)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp268;
fp268 = 7.0000000000000000e+00 * src1[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = 0.0000000000000000e+00 + fp268;
LIBINT2_REALTYPE fp266;
fp266 = fp267 + src2[((hsi*78+35)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = inteval->oo2z[vi] * fp266;
LIBINT2_REALTYPE fp269;
fp269 = inteval->PA_z[vi] * src0[((hsi*78+35)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = fp269 + fp265;
target[((hsi*91+44)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp325;
fp325 = 5.0000000000000000e+00 * src1[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = 0.0000000000000000e+00 + fp325;
LIBINT2_REALTYPE fp323;
fp323 = fp324 + src2[((hsi*78+26)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = inteval->oo2z[vi] * fp323;
LIBINT2_REALTYPE fp326;
fp326 = inteval->PA_z[vi] * src0[((hsi*78+26)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp326 + fp322;
target[((hsi*91+34)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp499;
fp499 = inteval->PA_y[vi] * src0[((hsi*78+0)*1+lsi)*1];
target[((hsi*91+1)*1+lsi)*1] = fp499;
LIBINT2_REALTYPE fp497;
fp497 = 0.0000000000000000e+00 + src2[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp496;
fp496 = inteval->oo2z[vi] * fp497;
LIBINT2_REALTYPE fp498;
fp498 = inteval->PA_z[vi] * src0[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp495;
fp495 = fp498 + fp496;
target[((hsi*91+2)*1+lsi)*1] = fp495;
LIBINT2_REALTYPE fp493;
fp493 = 1.0000000000000000e+00 * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp492;
fp492 = 0.0000000000000000e+00 + fp493;
LIBINT2_REALTYPE fp491;
fp491 = inteval->oo2z[vi] * fp492;
LIBINT2_REALTYPE fp494;
fp494 = inteval->PA_y[vi] * src0[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp490;
fp490 = fp494 + fp491;
target[((hsi*91+3)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp488;
fp488 = 0.0000000000000000e+00 + src2[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp487;
fp487 = inteval->oo2z[vi] * fp488;
LIBINT2_REALTYPE fp489;
fp489 = inteval->PA_z[vi] * src0[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp486;
fp486 = fp489 + fp487;
target[((hsi*91+4)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp484;
fp484 = 1.0000000000000000e+00 * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp483;
fp483 = 0.0000000000000000e+00 + fp484;
LIBINT2_REALTYPE fp482;
fp482 = fp483 + src2[((hsi*78+2)*1+lsi)*1];
LIBINT2_REALTYPE fp481;
fp481 = inteval->oo2z[vi] * fp482;
LIBINT2_REALTYPE fp485;
fp485 = inteval->PA_z[vi] * src0[((hsi*78+2)*1+lsi)*1];
LIBINT2_REALTYPE fp480;
fp480 = fp485 + fp481;
target[((hsi*91+5)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp478;
fp478 = 2.0000000000000000e+00 * src1[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp477;
fp477 = 0.0000000000000000e+00 + fp478;
LIBINT2_REALTYPE fp476;
fp476 = inteval->oo2z[vi] * fp477;
LIBINT2_REALTYPE fp479;
fp479 = inteval->PA_y[vi] * src0[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp475;
fp475 = fp479 + fp476;
target[((hsi*91+6)*1+lsi)*1] = fp475;
LIBINT2_REALTYPE fp473;
fp473 = 0.0000000000000000e+00 + src2[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp472;
fp472 = inteval->oo2z[vi] * fp473;
LIBINT2_REALTYPE fp474;
fp474 = inteval->PA_z[vi] * src0[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp471;
fp471 = fp474 + fp472;
target[((hsi*91+7)*1+lsi)*1] = fp471;
LIBINT2_REALTYPE fp469;
fp469 = 1.0000000000000000e+00 * src1[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp468;
fp468 = 0.0000000000000000e+00 + fp469;
LIBINT2_REALTYPE fp467;
fp467 = fp468 + src2[((hsi*78+4)*1+lsi)*1];
LIBINT2_REALTYPE fp466;
fp466 = inteval->oo2z[vi] * fp467;
LIBINT2_REALTYPE fp470;
fp470 = inteval->PA_z[vi] * src0[((hsi*78+4)*1+lsi)*1];
LIBINT2_REALTYPE fp465;
fp465 = fp470 + fp466;
target[((hsi*91+8)*1+lsi)*1] = fp465;
LIBINT2_REALTYPE fp463;
fp463 = 2.0000000000000000e+00 * src1[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp462;
fp462 = 0.0000000000000000e+00 + fp463;
LIBINT2_REALTYPE fp461;
fp461 = fp462 + src2[((hsi*78+5)*1+lsi)*1];
LIBINT2_REALTYPE fp460;
fp460 = inteval->oo2z[vi] * fp461;
LIBINT2_REALTYPE fp464;
fp464 = inteval->PA_z[vi] * src0[((hsi*78+5)*1+lsi)*1];
LIBINT2_REALTYPE fp459;
fp459 = fp464 + fp460;
target[((hsi*91+9)*1+lsi)*1] = fp459;
LIBINT2_REALTYPE fp457;
fp457 = 3.0000000000000000e+00 * src1[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp456;
fp456 = 0.0000000000000000e+00 + fp457;
LIBINT2_REALTYPE fp455;
fp455 = inteval->oo2z[vi] * fp456;
LIBINT2_REALTYPE fp458;
fp458 = inteval->PA_y[vi] * src0[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp454;
fp454 = fp458 + fp455;
target[((hsi*91+10)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp388;
fp388 = 1.0000000000000000e+00 * src1[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp387;
fp387 = 0.0000000000000000e+00 + fp388;
LIBINT2_REALTYPE fp386;
fp386 = fp387 + src2[((hsi*78+16)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = inteval->oo2z[vi] * fp386;
LIBINT2_REALTYPE fp389;
fp389 = inteval->PA_z[vi] * src0[((hsi*78+16)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = fp389 + fp385;
target[((hsi*91+23)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp448;
fp448 = 1.0000000000000000e+00 * src1[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp447;
fp447 = 0.0000000000000000e+00 + fp448;
LIBINT2_REALTYPE fp446;
fp446 = fp447 + src2[((hsi*78+7)*1+lsi)*1];
LIBINT2_REALTYPE fp445;
fp445 = inteval->oo2z[vi] * fp446;
LIBINT2_REALTYPE fp449;
fp449 = inteval->PA_z[vi] * src0[((hsi*78+7)*1+lsi)*1];
LIBINT2_REALTYPE fp444;
fp444 = fp449 + fp445;
target[((hsi*91+12)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp442;
fp442 = 2.0000000000000000e+00 * src1[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp441;
fp441 = 0.0000000000000000e+00 + fp442;
LIBINT2_REALTYPE fp440;
fp440 = fp441 + src2[((hsi*78+8)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
fp439 = inteval->oo2z[vi] * fp440;
LIBINT2_REALTYPE fp443;
fp443 = inteval->PA_z[vi] * src0[((hsi*78+8)*1+lsi)*1];
LIBINT2_REALTYPE fp438;
fp438 = fp443 + fp439;
target[((hsi*91+13)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp436;
fp436 = 3.0000000000000000e+00 * src1[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp435;
fp435 = 0.0000000000000000e+00 + fp436;
LIBINT2_REALTYPE fp434;
fp434 = fp435 + src2[((hsi*78+9)*1+lsi)*1];
LIBINT2_REALTYPE fp433;
fp433 = inteval->oo2z[vi] * fp434;
LIBINT2_REALTYPE fp437;
fp437 = inteval->PA_z[vi] * src0[((hsi*78+9)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = fp437 + fp433;
target[((hsi*91+14)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp430;
fp430 = 4.0000000000000000e+00 * src1[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp429;
fp429 = 0.0000000000000000e+00 + fp430;
LIBINT2_REALTYPE fp428;
fp428 = inteval->oo2z[vi] * fp429;
LIBINT2_REALTYPE fp431;
fp431 = inteval->PA_y[vi] * src0[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = fp431 + fp428;
target[((hsi*91+15)*1+lsi)*1] = fp427;
LIBINT2_REALTYPE fp425;
fp425 = 0.0000000000000000e+00 + src2[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp424;
fp424 = inteval->oo2z[vi] * fp425;
LIBINT2_REALTYPE fp426;
fp426 = inteval->PA_z[vi] * src0[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp423;
fp423 = fp426 + fp424;
target[((hsi*91+16)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp421;
fp421 = 1.0000000000000000e+00 * src1[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp420;
fp420 = 0.0000000000000000e+00 + fp421;
LIBINT2_REALTYPE fp419;
fp419 = fp420 + src2[((hsi*78+11)*1+lsi)*1];
LIBINT2_REALTYPE fp418;
fp418 = inteval->oo2z[vi] * fp419;
LIBINT2_REALTYPE fp422;
fp422 = inteval->PA_z[vi] * src0[((hsi*78+11)*1+lsi)*1];
LIBINT2_REALTYPE fp417;
fp417 = fp422 + fp418;
target[((hsi*91+17)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp415;
fp415 = 2.0000000000000000e+00 * src1[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = 0.0000000000000000e+00 + fp415;
LIBINT2_REALTYPE fp413;
fp413 = fp414 + src2[((hsi*78+12)*1+lsi)*1];
LIBINT2_REALTYPE fp412;
fp412 = inteval->oo2z[vi] * fp413;
LIBINT2_REALTYPE fp416;
fp416 = inteval->PA_z[vi] * src0[((hsi*78+12)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = fp416 + fp412;
target[((hsi*91+18)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp409;
fp409 = 3.0000000000000000e+00 * src1[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp408;
fp408 = 0.0000000000000000e+00 + fp409;
LIBINT2_REALTYPE fp407;
fp407 = fp408 + src2[((hsi*78+13)*1+lsi)*1];
LIBINT2_REALTYPE fp406;
fp406 = inteval->oo2z[vi] * fp407;
LIBINT2_REALTYPE fp410;
fp410 = inteval->PA_z[vi] * src0[((hsi*78+13)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = fp410 + fp406;
target[((hsi*91+19)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp403;
fp403 = 4.0000000000000000e+00 * src1[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp402;
fp402 = 0.0000000000000000e+00 + fp403;
LIBINT2_REALTYPE fp401;
fp401 = fp402 + src2[((hsi*78+14)*1+lsi)*1];
LIBINT2_REALTYPE fp400;
fp400 = inteval->oo2z[vi] * fp401;
LIBINT2_REALTYPE fp404;
fp404 = inteval->PA_z[vi] * src0[((hsi*78+14)*1+lsi)*1];
LIBINT2_REALTYPE fp399;
fp399 = fp404 + fp400;
target[((hsi*91+20)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp397;
fp397 = 5.0000000000000000e+00 * src1[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp396;
fp396 = 0.0000000000000000e+00 + fp397;
LIBINT2_REALTYPE fp395;
fp395 = inteval->oo2z[vi] * fp396;
LIBINT2_REALTYPE fp398;
fp398 = inteval->PA_y[vi] * src0[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp394;
fp394 = fp398 + fp395;
target[((hsi*91+21)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp392;
fp392 = 0.0000000000000000e+00 + src2[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = inteval->oo2z[vi] * fp392;
LIBINT2_REALTYPE fp393;
fp393 = inteval->PA_z[vi] * src0[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = fp393 + fp391;
target[((hsi*91+22)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp452;
fp452 = 0.0000000000000000e+00 + src2[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp451;
fp451 = inteval->oo2z[vi] * fp452;
LIBINT2_REALTYPE fp453;
fp453 = inteval->PA_z[vi] * src0[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp450;
fp450 = fp453 + fp451;
target[((hsi*91+11)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp127;
fp127 = 2.0000000000000000e+00 * src1[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + fp127;
LIBINT2_REALTYPE fp125;
fp125 = fp126 + src2[((hsi*78+57)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2z[vi] * fp125;
LIBINT2_REALTYPE fp128;
fp128 = inteval->PA_z[vi] * src0[((hsi*78+57)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp128 + fp124;
target[((hsi*91+69)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp121;
fp121 = 3.0000000000000000e+00 * src1[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + fp121;
LIBINT2_REALTYPE fp119;
fp119 = fp120 + src2[((hsi*78+58)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->oo2z[vi] * fp119;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_z[vi] * src0[((hsi*78+58)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp122 + fp118;
target[((hsi*91+70)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp115;
fp115 = 4.0000000000000000e+00 * src1[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + fp115;
LIBINT2_REALTYPE fp113;
fp113 = fp114 + src2[((hsi*78+59)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp116;
fp116 = inteval->PA_z[vi] * src0[((hsi*78+59)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp116 + fp112;
target[((hsi*91+71)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp109;
fp109 = 5.0000000000000000e+00 * src1[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = fp108 + src2[((hsi*78+60)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->oo2z[vi] * fp107;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PA_z[vi] * src0[((hsi*78+60)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp110 + fp106;
target[((hsi*91+72)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp103;
fp103 = 6.0000000000000000e+00 * src1[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + fp103;
LIBINT2_REALTYPE fp101;
fp101 = fp102 + src2[((hsi*78+61)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2z[vi] * fp101;
LIBINT2_REALTYPE fp104;
fp104 = inteval->PA_z[vi] * src0[((hsi*78+61)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp104 + fp100;
target[((hsi*91+73)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp97;
fp97 = 7.0000000000000000e+00 * src1[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + fp97;
LIBINT2_REALTYPE fp95;
fp95 = fp96 + src2[((hsi*78+62)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PA_z[vi] * src0[((hsi*78+62)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp98 + fp94;
target[((hsi*91+74)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp91;
fp91 = 8.0000000000000000e+00 * src1[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp89;
fp89 = fp90 + src2[((hsi*78+63)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_z[vi] * src0[((hsi*78+63)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp92 + fp88;
target[((hsi*91+75)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp85;
fp85 = 9.0000000000000000e+00 * src1[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + fp85;
LIBINT2_REALTYPE fp83;
fp83 = fp84 + src2[((hsi*78+64)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PA_z[vi] * src0[((hsi*78+64)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp86 + fp82;
target[((hsi*91+76)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+01 * src1[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = fp78 + src2[((hsi*78+65)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->oo2z[vi] * fp77;
LIBINT2_REALTYPE fp80;
fp80 = inteval->PA_z[vi] * src0[((hsi*78+65)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp80 + fp76;
target[((hsi*91+77)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp73;
fp73 = 1.1000000000000000e+01 * src1[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + fp73;
LIBINT2_REALTYPE fp71;
fp71 = inteval->oo2z[vi] * fp72;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PA_y[vi] * src0[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp74 + fp71;
target[((hsi*91+78)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp262;
fp262 = 8.0000000000000000e+00 * src1[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = 0.0000000000000000e+00 + fp262;
LIBINT2_REALTYPE fp260;
fp260 = inteval->oo2z[vi] * fp261;
LIBINT2_REALTYPE fp263;
fp263 = inteval->PA_y[vi] * src0[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp263 + fp260;
target[((hsi*91+45)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp64;
fp64 = 1.0000000000000000e+00 * src1[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = fp63 + src2[((hsi*78+67)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->PA_z[vi] * src0[((hsi*78+67)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp65 + fp61;
target[((hsi*91+80)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp58;
fp58 = 2.0000000000000000e+00 * src1[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + fp58;
LIBINT2_REALTYPE fp56;
fp56 = fp57 + src2[((hsi*78+68)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * src0[((hsi*78+68)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp59 + fp55;
target[((hsi*91+81)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp52;
fp52 = 3.0000000000000000e+00 * src1[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + fp52;
LIBINT2_REALTYPE fp50;
fp50 = fp51 + src2[((hsi*78+69)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * src0[((hsi*78+69)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp53 + fp49;
target[((hsi*91+82)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp46;
fp46 = 4.0000000000000000e+00 * src1[((hsi*66+58)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src2[((hsi*78+70)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_z[vi] * src0[((hsi*78+70)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp47 + fp43;
target[((hsi*91+83)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp40;
fp40 = 5.0000000000000000e+00 * src1[((hsi*66+59)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src2[((hsi*78+71)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * src0[((hsi*78+71)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp41 + fp37;
target[((hsi*91+84)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp34;
fp34 = 6.0000000000000000e+00 * src1[((hsi*66+60)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src2[((hsi*78+72)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * src0[((hsi*78+72)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp35 + fp31;
target[((hsi*91+85)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
fp28 = 7.0000000000000000e+00 * src1[((hsi*66+61)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src2[((hsi*78+73)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*78+73)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*91+86)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = 8.0000000000000000e+00 * src1[((hsi*66+62)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src2[((hsi*78+74)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*78+74)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*91+87)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = 9.0000000000000000e+00 * src1[((hsi*66+63)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src2[((hsi*78+75)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*78+75)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*91+88)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+01 * src1[((hsi*66+64)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src2[((hsi*78+76)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*78+76)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*91+89)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
fp4 = 1.1000000000000000e+01 * src1[((hsi*66+65)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src2[((hsi*78+77)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*78+77)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*91+90)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src2[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PA_z[vi] * src0[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp69 + fp67;
target[((hsi*91+79)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp257;
fp257 = 0.0000000000000000e+00 + src2[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = inteval->oo2z[vi] * fp257;
LIBINT2_REALTYPE fp258;
fp258 = inteval->PA_z[vi] * src0[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = fp258 + fp256;
target[((hsi*91+46)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp253;
fp253 = 1.0000000000000000e+00 * src1[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = 0.0000000000000000e+00 + fp253;
LIBINT2_REALTYPE fp251;
fp251 = fp252 + src2[((hsi*78+37)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = inteval->oo2z[vi] * fp251;
LIBINT2_REALTYPE fp254;
fp254 = inteval->PA_z[vi] * src0[((hsi*78+37)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp254 + fp250;
target[((hsi*91+47)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp247;
fp247 = 2.0000000000000000e+00 * src1[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = 0.0000000000000000e+00 + fp247;
LIBINT2_REALTYPE fp245;
fp245 = fp246 + src2[((hsi*78+38)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = inteval->oo2z[vi] * fp245;
LIBINT2_REALTYPE fp248;
fp248 = inteval->PA_z[vi] * src0[((hsi*78+38)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp248 + fp244;
target[((hsi*91+48)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp241;
fp241 = 3.0000000000000000e+00 * src1[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = 0.0000000000000000e+00 + fp241;
LIBINT2_REALTYPE fp239;
fp239 = fp240 + src2[((hsi*78+39)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = inteval->oo2z[vi] * fp239;
LIBINT2_REALTYPE fp242;
fp242 = inteval->PA_z[vi] * src0[((hsi*78+39)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp242 + fp238;
target[((hsi*91+49)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp235;
fp235 = 4.0000000000000000e+00 * src1[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = 0.0000000000000000e+00 + fp235;
LIBINT2_REALTYPE fp233;
fp233 = fp234 + src2[((hsi*78+40)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->oo2z[vi] * fp233;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PA_z[vi] * src0[((hsi*78+40)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp236 + fp232;
target[((hsi*91+50)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp229;
fp229 = 5.0000000000000000e+00 * src1[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = 0.0000000000000000e+00 + fp229;
LIBINT2_REALTYPE fp227;
fp227 = fp228 + src2[((hsi*78+41)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = inteval->oo2z[vi] * fp227;
LIBINT2_REALTYPE fp230;
fp230 = inteval->PA_z[vi] * src0[((hsi*78+41)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp230 + fp226;
target[((hsi*91+51)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp223;
fp223 = 6.0000000000000000e+00 * src1[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = 0.0000000000000000e+00 + fp223;
LIBINT2_REALTYPE fp221;
fp221 = fp222 + src2[((hsi*78+42)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = inteval->oo2z[vi] * fp221;
LIBINT2_REALTYPE fp224;
fp224 = inteval->PA_z[vi] * src0[((hsi*78+42)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp224 + fp220;
target[((hsi*91+52)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp217;
fp217 = 7.0000000000000000e+00 * src1[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = 0.0000000000000000e+00 + fp217;
LIBINT2_REALTYPE fp215;
fp215 = fp216 + src2[((hsi*78+43)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = inteval->oo2z[vi] * fp215;
LIBINT2_REALTYPE fp218;
fp218 = inteval->PA_z[vi] * src0[((hsi*78+43)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp218 + fp214;
target[((hsi*91+53)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp211;
fp211 = 8.0000000000000000e+00 * src1[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = 0.0000000000000000e+00 + fp211;
LIBINT2_REALTYPE fp209;
fp209 = fp210 + src2[((hsi*78+44)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp212;
fp212 = inteval->PA_z[vi] * src0[((hsi*78+44)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp212 + fp208;
target[((hsi*91+54)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp205;
fp205 = 9.0000000000000000e+00 * src1[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + fp205;
LIBINT2_REALTYPE fp203;
fp203 = inteval->oo2z[vi] * fp204;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PA_y[vi] * src0[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp206 + fp203;
target[((hsi*91+55)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp133;
fp133 = 1.0000000000000000e+00 * src1[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + fp133;
LIBINT2_REALTYPE fp131;
fp131 = fp132 + src2[((hsi*78+56)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PA_z[vi] * src0[((hsi*78+56)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp134 + fp130;
target[((hsi*91+68)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp196;
fp196 = 1.0000000000000000e+00 * src1[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = 0.0000000000000000e+00 + fp196;
LIBINT2_REALTYPE fp194;
fp194 = fp195 + src2[((hsi*78+46)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = inteval->oo2z[vi] * fp194;
LIBINT2_REALTYPE fp197;
fp197 = inteval->PA_z[vi] * src0[((hsi*78+46)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp197 + fp193;
target[((hsi*91+57)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp190;
fp190 = 2.0000000000000000e+00 * src1[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = 0.0000000000000000e+00 + fp190;
LIBINT2_REALTYPE fp188;
fp188 = fp189 + src2[((hsi*78+47)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = inteval->oo2z[vi] * fp188;
LIBINT2_REALTYPE fp191;
fp191 = inteval->PA_z[vi] * src0[((hsi*78+47)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp191 + fp187;
target[((hsi*91+58)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp184;
fp184 = 3.0000000000000000e+00 * src1[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = 0.0000000000000000e+00 + fp184;
LIBINT2_REALTYPE fp182;
fp182 = fp183 + src2[((hsi*78+48)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = inteval->oo2z[vi] * fp182;
LIBINT2_REALTYPE fp185;
fp185 = inteval->PA_z[vi] * src0[((hsi*78+48)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp185 + fp181;
target[((hsi*91+59)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp178;
fp178 = 4.0000000000000000e+00 * src1[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + fp178;
LIBINT2_REALTYPE fp176;
fp176 = fp177 + src2[((hsi*78+49)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = inteval->oo2z[vi] * fp176;
LIBINT2_REALTYPE fp179;
fp179 = inteval->PA_z[vi] * src0[((hsi*78+49)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp179 + fp175;
target[((hsi*91+60)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp172;
fp172 = 5.0000000000000000e+00 * src1[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + fp172;
LIBINT2_REALTYPE fp170;
fp170 = fp171 + src2[((hsi*78+50)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->oo2z[vi] * fp170;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_z[vi] * src0[((hsi*78+50)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp173 + fp169;
target[((hsi*91+61)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp166;
fp166 = 6.0000000000000000e+00 * src1[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + fp166;
LIBINT2_REALTYPE fp164;
fp164 = fp165 + src2[((hsi*78+51)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->oo2z[vi] * fp164;
LIBINT2_REALTYPE fp167;
fp167 = inteval->PA_z[vi] * src0[((hsi*78+51)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp167 + fp163;
target[((hsi*91+62)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp160;
fp160 = 7.0000000000000000e+00 * src1[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + fp160;
LIBINT2_REALTYPE fp158;
fp158 = fp159 + src2[((hsi*78+52)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->oo2z[vi] * fp158;
LIBINT2_REALTYPE fp161;
fp161 = inteval->PA_z[vi] * src0[((hsi*78+52)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp161 + fp157;
target[((hsi*91+63)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp154;
fp154 = 8.0000000000000000e+00 * src1[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + fp154;
LIBINT2_REALTYPE fp152;
fp152 = fp153 + src2[((hsi*78+53)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->oo2z[vi] * fp152;
LIBINT2_REALTYPE fp155;
fp155 = inteval->PA_z[vi] * src0[((hsi*78+53)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp155 + fp151;
target[((hsi*91+64)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp148;
fp148 = 9.0000000000000000e+00 * src1[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + fp148;
LIBINT2_REALTYPE fp146;
fp146 = fp147 + src2[((hsi*78+54)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp149;
fp149 = inteval->PA_z[vi] * src0[((hsi*78+54)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp149 + fp145;
target[((hsi*91+65)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp142;
fp142 = 1.0000000000000000e+01 * src1[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + fp142;
LIBINT2_REALTYPE fp140;
fp140 = inteval->oo2z[vi] * fp141;
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_y[vi] * src0[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp143 + fp140;
target[((hsi*91+66)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src2[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->oo2z[vi] * fp137;
LIBINT2_REALTYPE fp138;
fp138 = inteval->PA_z[vi] * src0[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp138 + fp136;
target[((hsi*91+67)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp200;
fp200 = 0.0000000000000000e+00 + src2[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = inteval->oo2z[vi] * fp200;
LIBINT2_REALTYPE fp201;
fp201 = inteval->PA_z[vi] * src0[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp201 + fp199;
target[((hsi*91+56)*1+lsi)*1] = fp198;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 505 */
}

#ifdef __cplusplus
};
#endif
