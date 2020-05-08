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
void OSVRRSMultipole_aB_pf__0___SphericalMultipole_sB_3_c__minus_3_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp374;
fp374 = 5.0000000000000000e+00 * src1[((hsi*78+14)*1+lsi)*1];
LIBINT2_REALTYPE fp373;
fp373 = 0.0000000000000000e+00 + fp374;
LIBINT2_REALTYPE fp372;
fp372 = inteval->oo2z[vi] * fp373;
LIBINT2_REALTYPE fp375;
fp375 = inteval->PA_z[vi] * src0[((hsi*91+20)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = fp375 + fp372;
target[((hsi*105+27)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp367;
fp367 = -5.0000000000000000e-01 * src3[((hsi*91+21)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = 6.0000000000000000e+00 * src1[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = 0.0000000000000000e+00 + fp369;
LIBINT2_REALTYPE fp366;
fp366 = fp368 + fp367;
LIBINT2_REALTYPE fp365;
fp365 = inteval->oo2z[vi] * fp366;
LIBINT2_REALTYPE fp370;
fp370 = inteval->PA_y[vi] * src0[((hsi*91+21)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = fp370 + fp365;
target[((hsi*105+28)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp363;
fp363 = inteval->PA_z[vi] * src0[((hsi*91+21)*1+lsi)*1];
target[((hsi*105+29)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp361;
fp361 = 1.0000000000000000e+00 * src1[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = 0.0000000000000000e+00 + fp361;
LIBINT2_REALTYPE fp359;
fp359 = inteval->oo2z[vi] * fp360;
LIBINT2_REALTYPE fp362;
fp362 = inteval->PA_z[vi] * src0[((hsi*91+22)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = fp362 + fp359;
target[((hsi*105+30)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp356;
fp356 = 2.0000000000000000e+00 * src1[((hsi*78+16)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = 0.0000000000000000e+00 + fp356;
LIBINT2_REALTYPE fp354;
fp354 = inteval->oo2z[vi] * fp355;
LIBINT2_REALTYPE fp357;
fp357 = inteval->PA_z[vi] * src0[((hsi*91+23)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = fp357 + fp354;
target[((hsi*105+31)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp351;
fp351 = 3.0000000000000000e+00 * src1[((hsi*78+17)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = 0.0000000000000000e+00 + fp351;
LIBINT2_REALTYPE fp349;
fp349 = inteval->oo2z[vi] * fp350;
LIBINT2_REALTYPE fp352;
fp352 = inteval->PA_z[vi] * src0[((hsi*91+24)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp352 + fp349;
target[((hsi*105+32)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp346;
fp346 = 4.0000000000000000e+00 * src1[((hsi*78+18)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = 0.0000000000000000e+00 + fp346;
LIBINT2_REALTYPE fp344;
fp344 = inteval->oo2z[vi] * fp345;
LIBINT2_REALTYPE fp347;
fp347 = inteval->PA_z[vi] * src0[((hsi*91+25)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = fp347 + fp344;
target[((hsi*105+33)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp341;
fp341 = 5.0000000000000000e+00 * src1[((hsi*78+19)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = 0.0000000000000000e+00 + fp341;
LIBINT2_REALTYPE fp339;
fp339 = inteval->oo2z[vi] * fp340;
LIBINT2_REALTYPE fp342;
fp342 = inteval->PA_z[vi] * src0[((hsi*91+26)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = fp342 + fp339;
target[((hsi*105+34)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp336;
fp336 = 6.0000000000000000e+00 * src1[((hsi*78+20)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = 0.0000000000000000e+00 + fp336;
LIBINT2_REALTYPE fp334;
fp334 = inteval->oo2z[vi] * fp335;
LIBINT2_REALTYPE fp337;
fp337 = inteval->PA_z[vi] * src0[((hsi*91+27)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = fp337 + fp334;
target[((hsi*105+35)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp329;
fp329 = -5.0000000000000000e-01 * src3[((hsi*91+28)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = 7.0000000000000000e+00 * src1[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = 0.0000000000000000e+00 + fp331;
LIBINT2_REALTYPE fp328;
fp328 = fp330 + fp329;
LIBINT2_REALTYPE fp327;
fp327 = inteval->oo2z[vi] * fp328;
LIBINT2_REALTYPE fp332;
fp332 = inteval->PA_y[vi] * src0[((hsi*91+28)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp332 + fp327;
target[((hsi*105+36)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp325;
fp325 = inteval->PA_z[vi] * src0[((hsi*91+28)*1+lsi)*1];
target[((hsi*105+37)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp323;
fp323 = 1.0000000000000000e+00 * src1[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = 0.0000000000000000e+00 + fp323;
LIBINT2_REALTYPE fp321;
fp321 = inteval->oo2z[vi] * fp322;
LIBINT2_REALTYPE fp324;
fp324 = inteval->PA_z[vi] * src0[((hsi*91+29)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = fp324 + fp321;
target[((hsi*105+38)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp495;
fp495 = 5.0000000000000000e-01 * src2[((hsi*91+0)*1+lsi)*1];
LIBINT2_REALTYPE fp497;
fp497 = 1.2000000000000000e+01 * src1[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp496;
fp496 = 0.0000000000000000e+00 + fp497;
LIBINT2_REALTYPE fp494;
fp494 = fp496 - fp495;
LIBINT2_REALTYPE fp493;
fp493 = inteval->oo2z[vi] * fp494;
LIBINT2_REALTYPE fp498;
fp498 = inteval->PA_x[vi] * src0[((hsi*91+0)*1+lsi)*1];
LIBINT2_REALTYPE fp492;
fp492 = fp498 + fp493;
target[((hsi*105+0)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp313;
fp313 = 3.0000000000000000e+00 * src1[((hsi*78+23)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = 0.0000000000000000e+00 + fp313;
LIBINT2_REALTYPE fp311;
fp311 = inteval->oo2z[vi] * fp312;
LIBINT2_REALTYPE fp314;
fp314 = inteval->PA_z[vi] * src0[((hsi*91+31)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = fp314 + fp311;
target[((hsi*105+40)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp308;
fp308 = 4.0000000000000000e+00 * src1[((hsi*78+24)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = 0.0000000000000000e+00 + fp308;
LIBINT2_REALTYPE fp306;
fp306 = inteval->oo2z[vi] * fp307;
LIBINT2_REALTYPE fp309;
fp309 = inteval->PA_z[vi] * src0[((hsi*91+32)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp309 + fp306;
target[((hsi*105+41)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp303;
fp303 = 5.0000000000000000e+00 * src1[((hsi*78+25)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = 0.0000000000000000e+00 + fp303;
LIBINT2_REALTYPE fp301;
fp301 = inteval->oo2z[vi] * fp302;
LIBINT2_REALTYPE fp304;
fp304 = inteval->PA_z[vi] * src0[((hsi*91+33)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp304 + fp301;
target[((hsi*105+42)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp298;
fp298 = 6.0000000000000000e+00 * src1[((hsi*78+26)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = 0.0000000000000000e+00 + fp298;
LIBINT2_REALTYPE fp296;
fp296 = inteval->oo2z[vi] * fp297;
LIBINT2_REALTYPE fp299;
fp299 = inteval->PA_z[vi] * src0[((hsi*91+34)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp299 + fp296;
target[((hsi*105+43)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp293;
fp293 = 7.0000000000000000e+00 * src1[((hsi*78+27)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = 0.0000000000000000e+00 + fp293;
LIBINT2_REALTYPE fp291;
fp291 = inteval->oo2z[vi] * fp292;
LIBINT2_REALTYPE fp294;
fp294 = inteval->PA_z[vi] * src0[((hsi*91+35)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp294 + fp291;
target[((hsi*105+44)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp286;
fp286 = -5.0000000000000000e-01 * src3[((hsi*91+36)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = 8.0000000000000000e+00 * src1[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = 0.0000000000000000e+00 + fp288;
LIBINT2_REALTYPE fp285;
fp285 = fp287 + fp286;
LIBINT2_REALTYPE fp284;
fp284 = inteval->oo2z[vi] * fp285;
LIBINT2_REALTYPE fp289;
fp289 = inteval->PA_y[vi] * src0[((hsi*91+36)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp289 + fp284;
target[((hsi*105+45)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp282;
fp282 = inteval->PA_z[vi] * src0[((hsi*91+36)*1+lsi)*1];
target[((hsi*105+46)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp280;
fp280 = 1.0000000000000000e+00 * src1[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = 0.0000000000000000e+00 + fp280;
LIBINT2_REALTYPE fp278;
fp278 = inteval->oo2z[vi] * fp279;
LIBINT2_REALTYPE fp281;
fp281 = inteval->PA_z[vi] * src0[((hsi*91+37)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp281 + fp278;
target[((hsi*105+47)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp275;
fp275 = 2.0000000000000000e+00 * src1[((hsi*78+29)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = 0.0000000000000000e+00 + fp275;
LIBINT2_REALTYPE fp273;
fp273 = inteval->oo2z[vi] * fp274;
LIBINT2_REALTYPE fp276;
fp276 = inteval->PA_z[vi] * src0[((hsi*91+38)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp276 + fp273;
target[((hsi*105+48)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp270;
fp270 = 3.0000000000000000e+00 * src1[((hsi*78+30)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = 0.0000000000000000e+00 + fp270;
LIBINT2_REALTYPE fp268;
fp268 = inteval->oo2z[vi] * fp269;
LIBINT2_REALTYPE fp271;
fp271 = inteval->PA_z[vi] * src0[((hsi*91+39)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp271 + fp268;
target[((hsi*105+49)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp265;
fp265 = 4.0000000000000000e+00 * src1[((hsi*78+31)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = 0.0000000000000000e+00 + fp265;
LIBINT2_REALTYPE fp263;
fp263 = inteval->oo2z[vi] * fp264;
LIBINT2_REALTYPE fp266;
fp266 = inteval->PA_z[vi] * src0[((hsi*91+40)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = fp266 + fp263;
target[((hsi*105+50)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp260;
fp260 = 5.0000000000000000e+00 * src1[((hsi*78+32)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = 0.0000000000000000e+00 + fp260;
LIBINT2_REALTYPE fp258;
fp258 = inteval->oo2z[vi] * fp259;
LIBINT2_REALTYPE fp261;
fp261 = inteval->PA_z[vi] * src0[((hsi*91+41)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp261 + fp258;
target[((hsi*105+51)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp318;
fp318 = 2.0000000000000000e+00 * src1[((hsi*78+22)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = 0.0000000000000000e+00 + fp318;
LIBINT2_REALTYPE fp316;
fp316 = inteval->oo2z[vi] * fp317;
LIBINT2_REALTYPE fp319;
fp319 = inteval->PA_z[vi] * src0[((hsi*91+30)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = fp319 + fp316;
target[((hsi*105+39)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp490;
fp490 = -5.0000000000000000e-01 * src3[((hsi*91+0)*1+lsi)*1];
LIBINT2_REALTYPE fp489;
fp489 = 0.0000000000000000e+00 + fp490;
LIBINT2_REALTYPE fp488;
fp488 = inteval->oo2z[vi] * fp489;
LIBINT2_REALTYPE fp491;
fp491 = inteval->PA_y[vi] * src0[((hsi*91+0)*1+lsi)*1];
LIBINT2_REALTYPE fp487;
fp487 = fp491 + fp488;
target[((hsi*105+1)*1+lsi)*1] = fp487;
LIBINT2_REALTYPE fp486;
fp486 = inteval->PA_z[vi] * src0[((hsi*91+0)*1+lsi)*1];
target[((hsi*105+2)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp482;
fp482 = -5.0000000000000000e-01 * src3[((hsi*91+1)*1+lsi)*1];
LIBINT2_REALTYPE fp484;
fp484 = 1.0000000000000000e+00 * src1[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp483;
fp483 = 0.0000000000000000e+00 + fp484;
LIBINT2_REALTYPE fp481;
fp481 = fp483 + fp482;
LIBINT2_REALTYPE fp480;
fp480 = inteval->oo2z[vi] * fp481;
LIBINT2_REALTYPE fp485;
fp485 = inteval->PA_y[vi] * src0[((hsi*91+1)*1+lsi)*1];
LIBINT2_REALTYPE fp479;
fp479 = fp485 + fp480;
target[((hsi*105+3)*1+lsi)*1] = fp479;
LIBINT2_REALTYPE fp478;
fp478 = inteval->PA_z[vi] * src0[((hsi*91+1)*1+lsi)*1];
target[((hsi*105+4)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp476;
fp476 = 1.0000000000000000e+00 * src1[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp475;
fp475 = 0.0000000000000000e+00 + fp476;
LIBINT2_REALTYPE fp474;
fp474 = inteval->oo2z[vi] * fp475;
LIBINT2_REALTYPE fp477;
fp477 = inteval->PA_z[vi] * src0[((hsi*91+2)*1+lsi)*1];
LIBINT2_REALTYPE fp473;
fp473 = fp477 + fp474;
target[((hsi*105+5)*1+lsi)*1] = fp473;
LIBINT2_REALTYPE fp469;
fp469 = -5.0000000000000000e-01 * src3[((hsi*91+3)*1+lsi)*1];
LIBINT2_REALTYPE fp471;
fp471 = 2.0000000000000000e+00 * src1[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp470;
fp470 = 0.0000000000000000e+00 + fp471;
LIBINT2_REALTYPE fp468;
fp468 = fp470 + fp469;
LIBINT2_REALTYPE fp467;
fp467 = inteval->oo2z[vi] * fp468;
LIBINT2_REALTYPE fp472;
fp472 = inteval->PA_y[vi] * src0[((hsi*91+3)*1+lsi)*1];
LIBINT2_REALTYPE fp466;
fp466 = fp472 + fp467;
target[((hsi*105+6)*1+lsi)*1] = fp466;
LIBINT2_REALTYPE fp465;
fp465 = inteval->PA_z[vi] * src0[((hsi*91+3)*1+lsi)*1];
target[((hsi*105+7)*1+lsi)*1] = fp465;
LIBINT2_REALTYPE fp463;
fp463 = 1.0000000000000000e+00 * src1[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp462;
fp462 = 0.0000000000000000e+00 + fp463;
LIBINT2_REALTYPE fp461;
fp461 = inteval->oo2z[vi] * fp462;
LIBINT2_REALTYPE fp464;
fp464 = inteval->PA_z[vi] * src0[((hsi*91+4)*1+lsi)*1];
LIBINT2_REALTYPE fp460;
fp460 = fp464 + fp461;
target[((hsi*105+8)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp458;
fp458 = 2.0000000000000000e+00 * src1[((hsi*78+2)*1+lsi)*1];
LIBINT2_REALTYPE fp457;
fp457 = 0.0000000000000000e+00 + fp458;
LIBINT2_REALTYPE fp456;
fp456 = inteval->oo2z[vi] * fp457;
LIBINT2_REALTYPE fp459;
fp459 = inteval->PA_z[vi] * src0[((hsi*91+5)*1+lsi)*1];
LIBINT2_REALTYPE fp455;
fp455 = fp459 + fp456;
target[((hsi*105+9)*1+lsi)*1] = fp455;
LIBINT2_REALTYPE fp451;
fp451 = -5.0000000000000000e-01 * src3[((hsi*91+6)*1+lsi)*1];
LIBINT2_REALTYPE fp453;
fp453 = 3.0000000000000000e+00 * src1[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp452;
fp452 = 0.0000000000000000e+00 + fp453;
LIBINT2_REALTYPE fp450;
fp450 = fp452 + fp451;
LIBINT2_REALTYPE fp449;
fp449 = inteval->oo2z[vi] * fp450;
LIBINT2_REALTYPE fp454;
fp454 = inteval->PA_y[vi] * src0[((hsi*91+6)*1+lsi)*1];
LIBINT2_REALTYPE fp448;
fp448 = fp454 + fp449;
target[((hsi*105+10)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp447;
fp447 = inteval->PA_z[vi] * src0[((hsi*91+6)*1+lsi)*1];
target[((hsi*105+11)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp445;
fp445 = 1.0000000000000000e+00 * src1[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp444;
fp444 = 0.0000000000000000e+00 + fp445;
LIBINT2_REALTYPE fp443;
fp443 = inteval->oo2z[vi] * fp444;
LIBINT2_REALTYPE fp446;
fp446 = inteval->PA_z[vi] * src0[((hsi*91+7)*1+lsi)*1];
LIBINT2_REALTYPE fp442;
fp442 = fp446 + fp443;
target[((hsi*105+12)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp379;
fp379 = 4.0000000000000000e+00 * src1[((hsi*78+13)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
fp378 = 0.0000000000000000e+00 + fp379;
LIBINT2_REALTYPE fp377;
fp377 = inteval->oo2z[vi] * fp378;
LIBINT2_REALTYPE fp380;
fp380 = inteval->PA_z[vi] * src0[((hsi*91+19)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = fp380 + fp377;
target[((hsi*105+26)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp435;
fp435 = 3.0000000000000000e+00 * src1[((hsi*78+5)*1+lsi)*1];
LIBINT2_REALTYPE fp434;
fp434 = 0.0000000000000000e+00 + fp435;
LIBINT2_REALTYPE fp433;
fp433 = inteval->oo2z[vi] * fp434;
LIBINT2_REALTYPE fp436;
fp436 = inteval->PA_z[vi] * src0[((hsi*91+9)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = fp436 + fp433;
target[((hsi*105+14)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp428;
fp428 = -5.0000000000000000e-01 * src3[((hsi*91+10)*1+lsi)*1];
LIBINT2_REALTYPE fp430;
fp430 = 4.0000000000000000e+00 * src1[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp429;
fp429 = 0.0000000000000000e+00 + fp430;
LIBINT2_REALTYPE fp427;
fp427 = fp429 + fp428;
LIBINT2_REALTYPE fp426;
fp426 = inteval->oo2z[vi] * fp427;
LIBINT2_REALTYPE fp431;
fp431 = inteval->PA_y[vi] * src0[((hsi*91+10)*1+lsi)*1];
LIBINT2_REALTYPE fp425;
fp425 = fp431 + fp426;
target[((hsi*105+15)*1+lsi)*1] = fp425;
LIBINT2_REALTYPE fp424;
fp424 = inteval->PA_z[vi] * src0[((hsi*91+10)*1+lsi)*1];
target[((hsi*105+16)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp422;
fp422 = 1.0000000000000000e+00 * src1[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp421;
fp421 = 0.0000000000000000e+00 + fp422;
LIBINT2_REALTYPE fp420;
fp420 = inteval->oo2z[vi] * fp421;
LIBINT2_REALTYPE fp423;
fp423 = inteval->PA_z[vi] * src0[((hsi*91+11)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = fp423 + fp420;
target[((hsi*105+17)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp417;
fp417 = 2.0000000000000000e+00 * src1[((hsi*78+7)*1+lsi)*1];
LIBINT2_REALTYPE fp416;
fp416 = 0.0000000000000000e+00 + fp417;
LIBINT2_REALTYPE fp415;
fp415 = inteval->oo2z[vi] * fp416;
LIBINT2_REALTYPE fp418;
fp418 = inteval->PA_z[vi] * src0[((hsi*91+12)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = fp418 + fp415;
target[((hsi*105+18)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp412;
fp412 = 3.0000000000000000e+00 * src1[((hsi*78+8)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = 0.0000000000000000e+00 + fp412;
LIBINT2_REALTYPE fp410;
fp410 = inteval->oo2z[vi] * fp411;
LIBINT2_REALTYPE fp413;
fp413 = inteval->PA_z[vi] * src0[((hsi*91+13)*1+lsi)*1];
LIBINT2_REALTYPE fp409;
fp409 = fp413 + fp410;
target[((hsi*105+19)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp407;
fp407 = 4.0000000000000000e+00 * src1[((hsi*78+9)*1+lsi)*1];
LIBINT2_REALTYPE fp406;
fp406 = 0.0000000000000000e+00 + fp407;
LIBINT2_REALTYPE fp405;
fp405 = inteval->oo2z[vi] * fp406;
LIBINT2_REALTYPE fp408;
fp408 = inteval->PA_z[vi] * src0[((hsi*91+14)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = fp408 + fp405;
target[((hsi*105+20)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp400;
fp400 = -5.0000000000000000e-01 * src3[((hsi*91+15)*1+lsi)*1];
LIBINT2_REALTYPE fp402;
fp402 = 5.0000000000000000e+00 * src1[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp401;
fp401 = 0.0000000000000000e+00 + fp402;
LIBINT2_REALTYPE fp399;
fp399 = fp401 + fp400;
LIBINT2_REALTYPE fp398;
fp398 = inteval->oo2z[vi] * fp399;
LIBINT2_REALTYPE fp403;
fp403 = inteval->PA_y[vi] * src0[((hsi*91+15)*1+lsi)*1];
LIBINT2_REALTYPE fp397;
fp397 = fp403 + fp398;
target[((hsi*105+21)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp396;
fp396 = inteval->PA_z[vi] * src0[((hsi*91+15)*1+lsi)*1];
target[((hsi*105+22)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp394;
fp394 = 1.0000000000000000e+00 * src1[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp393;
fp393 = 0.0000000000000000e+00 + fp394;
LIBINT2_REALTYPE fp392;
fp392 = inteval->oo2z[vi] * fp393;
LIBINT2_REALTYPE fp395;
fp395 = inteval->PA_z[vi] * src0[((hsi*91+16)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = fp395 + fp392;
target[((hsi*105+23)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp389;
fp389 = 2.0000000000000000e+00 * src1[((hsi*78+11)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = 0.0000000000000000e+00 + fp389;
LIBINT2_REALTYPE fp387;
fp387 = inteval->oo2z[vi] * fp388;
LIBINT2_REALTYPE fp390;
fp390 = inteval->PA_z[vi] * src0[((hsi*91+17)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = fp390 + fp387;
target[((hsi*105+24)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp384;
fp384 = 3.0000000000000000e+00 * src1[((hsi*78+12)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = 0.0000000000000000e+00 + fp384;
LIBINT2_REALTYPE fp382;
fp382 = inteval->oo2z[vi] * fp383;
LIBINT2_REALTYPE fp385;
fp385 = inteval->PA_z[vi] * src0[((hsi*91+18)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = fp385 + fp382;
target[((hsi*105+25)*1+lsi)*1] = fp381;
LIBINT2_REALTYPE fp440;
fp440 = 2.0000000000000000e+00 * src1[((hsi*78+4)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
fp439 = 0.0000000000000000e+00 + fp440;
LIBINT2_REALTYPE fp438;
fp438 = inteval->oo2z[vi] * fp439;
LIBINT2_REALTYPE fp441;
fp441 = inteval->PA_z[vi] * src0[((hsi*91+8)*1+lsi)*1];
LIBINT2_REALTYPE fp437;
fp437 = fp441 + fp438;
target[((hsi*105+13)*1+lsi)*1] = fp437;
LIBINT2_REALTYPE fp121;
fp121 = 1.0000000000000000e+00 * src1[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + fp121;
LIBINT2_REALTYPE fp119;
fp119 = inteval->oo2z[vi] * fp120;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_z[vi] * src0[((hsi*91+67)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp122 + fp119;
target[((hsi*105+80)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp116;
fp116 = 2.0000000000000000e+00 * src1[((hsi*78+56)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + fp116;
LIBINT2_REALTYPE fp114;
fp114 = inteval->oo2z[vi] * fp115;
LIBINT2_REALTYPE fp117;
fp117 = inteval->PA_z[vi] * src0[((hsi*91+68)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp117 + fp114;
target[((hsi*105+81)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp111;
fp111 = 3.0000000000000000e+00 * src1[((hsi*78+57)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + fp111;
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PA_z[vi] * src0[((hsi*91+69)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp112 + fp109;
target[((hsi*105+82)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp106;
fp106 = 4.0000000000000000e+00 * src1[((hsi*78+58)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + fp106;
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_z[vi] * src0[((hsi*91+70)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp107 + fp104;
target[((hsi*105+83)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp101;
fp101 = 5.0000000000000000e+00 * src1[((hsi*78+59)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp101;
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PA_z[vi] * src0[((hsi*91+71)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp102 + fp99;
target[((hsi*105+84)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp96;
fp96 = 6.0000000000000000e+00 * src1[((hsi*78+60)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + fp96;
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PA_z[vi] * src0[((hsi*91+72)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp97 + fp94;
target[((hsi*105+85)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp91;
fp91 = 7.0000000000000000e+00 * src1[((hsi*78+61)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_z[vi] * src0[((hsi*91+73)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp92 + fp89;
target[((hsi*105+86)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = 8.0000000000000000e+00 * src1[((hsi*78+62)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + fp86;
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_z[vi] * src0[((hsi*91+74)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp87 + fp84;
target[((hsi*105+87)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp81;
fp81 = 9.0000000000000000e+00 * src1[((hsi*78+63)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp81;
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_z[vi] * src0[((hsi*91+75)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp82 + fp79;
target[((hsi*105+88)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+01 * src1[((hsi*78+64)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + fp76;
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp77;
fp77 = inteval->PA_z[vi] * src0[((hsi*91+76)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp77 + fp74;
target[((hsi*105+89)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp71;
fp71 = 1.1000000000000000e+01 * src1[((hsi*78+65)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PA_z[vi] * src0[((hsi*91+77)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp72 + fp69;
target[((hsi*105+90)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp64;
fp64 = -5.0000000000000000e-01 * src3[((hsi*91+78)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 1.2000000000000000e+01 * src1[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_y[vi] * src0[((hsi*91+78)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp67 + fp62;
target[((hsi*105+91)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp255;
fp255 = 6.0000000000000000e+00 * src1[((hsi*78+33)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = 0.0000000000000000e+00 + fp255;
LIBINT2_REALTYPE fp253;
fp253 = inteval->oo2z[vi] * fp254;
LIBINT2_REALTYPE fp256;
fp256 = inteval->PA_z[vi] * src0[((hsi*91+42)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp256 + fp253;
target[((hsi*105+52)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * src1[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + fp58;
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * src0[((hsi*91+79)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp59 + fp56;
target[((hsi*105+93)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp53;
fp53 = 2.0000000000000000e+00 * src1[((hsi*78+67)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + fp53;
LIBINT2_REALTYPE fp51;
fp51 = inteval->oo2z[vi] * fp52;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PA_z[vi] * src0[((hsi*91+80)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp54 + fp51;
target[((hsi*105+94)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp48;
fp48 = 3.0000000000000000e+00 * src1[((hsi*78+68)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + fp48;
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PA_z[vi] * src0[((hsi*91+81)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp49 + fp46;
target[((hsi*105+95)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = 4.0000000000000000e+00 * src1[((hsi*78+69)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + fp43;
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_z[vi] * src0[((hsi*91+82)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp44 + fp41;
target[((hsi*105+96)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp38;
fp38 = 5.0000000000000000e+00 * src1[((hsi*78+70)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_z[vi] * src0[((hsi*91+83)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp39 + fp36;
target[((hsi*105+97)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp33;
fp33 = 6.0000000000000000e+00 * src1[((hsi*78+71)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_z[vi] * src0[((hsi*91+84)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp34 + fp31;
target[((hsi*105+98)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
fp28 = 7.0000000000000000e+00 * src1[((hsi*78+72)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*91+85)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp29 + fp26;
target[((hsi*105+99)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp23;
fp23 = 8.0000000000000000e+00 * src1[((hsi*78+73)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + fp23;
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PA_z[vi] * src0[((hsi*91+86)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp24 + fp21;
target[((hsi*105+100)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
fp18 = 9.0000000000000000e+00 * src1[((hsi*78+74)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PA_z[vi] * src0[((hsi*91+87)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp19 + fp16;
target[((hsi*105+101)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+01 * src1[((hsi*78+75)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + fp13;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PA_z[vi] * src0[((hsi*91+88)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp14 + fp11;
target[((hsi*105+102)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp8;
fp8 = 1.1000000000000000e+01 * src1[((hsi*78+76)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + fp8;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PA_z[vi] * src0[((hsi*91+89)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp9 + fp6;
target[((hsi*105+103)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp3;
fp3 = 1.2000000000000000e+01 * src1[((hsi*78+77)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + fp3;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PA_z[vi] * src0[((hsi*91+90)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*105+104)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PA_z[vi] * src0[((hsi*91+78)*1+lsi)*1];
target[((hsi*105+92)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp250;
fp250 = 7.0000000000000000e+00 * src1[((hsi*78+34)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = 0.0000000000000000e+00 + fp250;
LIBINT2_REALTYPE fp248;
fp248 = inteval->oo2z[vi] * fp249;
LIBINT2_REALTYPE fp251;
fp251 = inteval->PA_z[vi] * src0[((hsi*91+43)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp251 + fp248;
target[((hsi*105+53)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp245;
fp245 = 8.0000000000000000e+00 * src1[((hsi*78+35)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = 0.0000000000000000e+00 + fp245;
LIBINT2_REALTYPE fp243;
fp243 = inteval->oo2z[vi] * fp244;
LIBINT2_REALTYPE fp246;
fp246 = inteval->PA_z[vi] * src0[((hsi*91+44)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp246 + fp243;
target[((hsi*105+54)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp238;
fp238 = -5.0000000000000000e-01 * src3[((hsi*91+45)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = 9.0000000000000000e+00 * src1[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = 0.0000000000000000e+00 + fp240;
LIBINT2_REALTYPE fp237;
fp237 = fp239 + fp238;
LIBINT2_REALTYPE fp236;
fp236 = inteval->oo2z[vi] * fp237;
LIBINT2_REALTYPE fp241;
fp241 = inteval->PA_y[vi] * src0[((hsi*91+45)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp241 + fp236;
target[((hsi*105+55)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp234;
fp234 = inteval->PA_z[vi] * src0[((hsi*91+45)*1+lsi)*1];
target[((hsi*105+56)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp232;
fp232 = 1.0000000000000000e+00 * src1[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = 0.0000000000000000e+00 + fp232;
LIBINT2_REALTYPE fp230;
fp230 = inteval->oo2z[vi] * fp231;
LIBINT2_REALTYPE fp233;
fp233 = inteval->PA_z[vi] * src0[((hsi*91+46)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp233 + fp230;
target[((hsi*105+57)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp227;
fp227 = 2.0000000000000000e+00 * src1[((hsi*78+37)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = 0.0000000000000000e+00 + fp227;
LIBINT2_REALTYPE fp225;
fp225 = inteval->oo2z[vi] * fp226;
LIBINT2_REALTYPE fp228;
fp228 = inteval->PA_z[vi] * src0[((hsi*91+47)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp228 + fp225;
target[((hsi*105+58)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp222;
fp222 = 3.0000000000000000e+00 * src1[((hsi*78+38)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = 0.0000000000000000e+00 + fp222;
LIBINT2_REALTYPE fp220;
fp220 = inteval->oo2z[vi] * fp221;
LIBINT2_REALTYPE fp223;
fp223 = inteval->PA_z[vi] * src0[((hsi*91+48)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp223 + fp220;
target[((hsi*105+59)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp217;
fp217 = 4.0000000000000000e+00 * src1[((hsi*78+39)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = 0.0000000000000000e+00 + fp217;
LIBINT2_REALTYPE fp215;
fp215 = inteval->oo2z[vi] * fp216;
LIBINT2_REALTYPE fp218;
fp218 = inteval->PA_z[vi] * src0[((hsi*91+49)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp218 + fp215;
target[((hsi*105+60)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp212;
fp212 = 5.0000000000000000e+00 * src1[((hsi*78+40)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = 0.0000000000000000e+00 + fp212;
LIBINT2_REALTYPE fp210;
fp210 = inteval->oo2z[vi] * fp211;
LIBINT2_REALTYPE fp213;
fp213 = inteval->PA_z[vi] * src0[((hsi*91+50)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp213 + fp210;
target[((hsi*105+61)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp207;
fp207 = 6.0000000000000000e+00 * src1[((hsi*78+41)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = 0.0000000000000000e+00 + fp207;
LIBINT2_REALTYPE fp205;
fp205 = inteval->oo2z[vi] * fp206;
LIBINT2_REALTYPE fp208;
fp208 = inteval->PA_z[vi] * src0[((hsi*91+51)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp208 + fp205;
target[((hsi*105+62)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp202;
fp202 = 7.0000000000000000e+00 * src1[((hsi*78+42)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = 0.0000000000000000e+00 + fp202;
LIBINT2_REALTYPE fp200;
fp200 = inteval->oo2z[vi] * fp201;
LIBINT2_REALTYPE fp203;
fp203 = inteval->PA_z[vi] * src0[((hsi*91+52)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp203 + fp200;
target[((hsi*105+63)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp197;
fp197 = 8.0000000000000000e+00 * src1[((hsi*78+43)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = 0.0000000000000000e+00 + fp197;
LIBINT2_REALTYPE fp195;
fp195 = inteval->oo2z[vi] * fp196;
LIBINT2_REALTYPE fp198;
fp198 = inteval->PA_z[vi] * src0[((hsi*91+53)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp198 + fp195;
target[((hsi*105+64)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp123;
fp123 = inteval->PA_z[vi] * src0[((hsi*91+66)*1+lsi)*1];
target[((hsi*105+79)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp185;
fp185 = -5.0000000000000000e-01 * src3[((hsi*91+55)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = 1.0000000000000000e+01 * src1[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + fp187;
LIBINT2_REALTYPE fp184;
fp184 = fp186 + fp185;
LIBINT2_REALTYPE fp183;
fp183 = inteval->oo2z[vi] * fp184;
LIBINT2_REALTYPE fp188;
fp188 = inteval->PA_y[vi] * src0[((hsi*91+55)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp188 + fp183;
target[((hsi*105+66)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp181;
fp181 = inteval->PA_z[vi] * src0[((hsi*91+55)*1+lsi)*1];
target[((hsi*105+67)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp179;
fp179 = 1.0000000000000000e+00 * src1[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + fp179;
LIBINT2_REALTYPE fp177;
fp177 = inteval->oo2z[vi] * fp178;
LIBINT2_REALTYPE fp180;
fp180 = inteval->PA_z[vi] * src0[((hsi*91+56)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp180 + fp177;
target[((hsi*105+68)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp174;
fp174 = 2.0000000000000000e+00 * src1[((hsi*78+46)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + fp174;
LIBINT2_REALTYPE fp172;
fp172 = inteval->oo2z[vi] * fp173;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PA_z[vi] * src0[((hsi*91+57)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp175 + fp172;
target[((hsi*105+69)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp169;
fp169 = 3.0000000000000000e+00 * src1[((hsi*78+47)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + fp169;
LIBINT2_REALTYPE fp167;
fp167 = inteval->oo2z[vi] * fp168;
LIBINT2_REALTYPE fp170;
fp170 = inteval->PA_z[vi] * src0[((hsi*91+58)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp170 + fp167;
target[((hsi*105+70)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp164;
fp164 = 4.0000000000000000e+00 * src1[((hsi*78+48)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + fp164;
LIBINT2_REALTYPE fp162;
fp162 = inteval->oo2z[vi] * fp163;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_z[vi] * src0[((hsi*91+59)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp165 + fp162;
target[((hsi*105+71)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp159;
fp159 = 5.0000000000000000e+00 * src1[((hsi*78+49)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + fp159;
LIBINT2_REALTYPE fp157;
fp157 = inteval->oo2z[vi] * fp158;
LIBINT2_REALTYPE fp160;
fp160 = inteval->PA_z[vi] * src0[((hsi*91+60)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp160 + fp157;
target[((hsi*105+72)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp154;
fp154 = 6.0000000000000000e+00 * src1[((hsi*78+50)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + fp154;
LIBINT2_REALTYPE fp152;
fp152 = inteval->oo2z[vi] * fp153;
LIBINT2_REALTYPE fp155;
fp155 = inteval->PA_z[vi] * src0[((hsi*91+61)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp155 + fp152;
target[((hsi*105+73)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp149;
fp149 = 7.0000000000000000e+00 * src1[((hsi*78+51)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + fp149;
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PA_z[vi] * src0[((hsi*91+62)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp150 + fp147;
target[((hsi*105+74)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp144;
fp144 = 8.0000000000000000e+00 * src1[((hsi*78+52)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + fp144;
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp143;
LIBINT2_REALTYPE fp145;
fp145 = inteval->PA_z[vi] * src0[((hsi*91+63)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp145 + fp142;
target[((hsi*105+75)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp139;
fp139 = 9.0000000000000000e+00 * src1[((hsi*78+53)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + fp139;
LIBINT2_REALTYPE fp137;
fp137 = inteval->oo2z[vi] * fp138;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_z[vi] * src0[((hsi*91+64)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp140 + fp137;
target[((hsi*105+76)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
fp134 = 1.0000000000000000e+01 * src1[((hsi*78+54)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + fp134;
LIBINT2_REALTYPE fp132;
fp132 = inteval->oo2z[vi] * fp133;
LIBINT2_REALTYPE fp135;
fp135 = inteval->PA_z[vi] * src0[((hsi*91+65)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp135 + fp132;
target[((hsi*105+77)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp127;
fp127 = -5.0000000000000000e-01 * src3[((hsi*91+66)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = 1.1000000000000000e+01 * src1[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + fp129;
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
LIBINT2_REALTYPE fp125;
fp125 = inteval->oo2z[vi] * fp126;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PA_y[vi] * src0[((hsi*91+66)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp130 + fp125;
target[((hsi*105+78)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp192;
fp192 = 9.0000000000000000e+00 * src1[((hsi*78+44)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + fp192;
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp193;
fp193 = inteval->PA_z[vi] * src0[((hsi*91+54)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp193 + fp190;
target[((hsi*105+65)*1+lsi)*1] = fp189;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 499 */
}

#ifdef __cplusplus
};
#endif
