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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_0_c_0_Sb__pf__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp360;
fp360 = 5.0000000000000000e+00 * src1[((hsi*78+14)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = 0.0000000000000000e+00 + fp360;
LIBINT2_REALTYPE fp358;
fp358 = inteval->oo2z[vi] * fp359;
LIBINT2_REALTYPE fp361;
fp361 = inteval->PB_z[vi] * src0[((hsi*91+20)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = fp361 + fp358;
target[((hsi*105+27)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp355;
fp355 = 6.0000000000000000e+00 * src1[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = 0.0000000000000000e+00 + fp355;
LIBINT2_REALTYPE fp353;
fp353 = inteval->oo2z[vi] * fp354;
LIBINT2_REALTYPE fp356;
fp356 = inteval->PB_y[vi] * src0[((hsi*91+21)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = fp356 + fp353;
target[((hsi*105+28)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp351;
fp351 = inteval->PB_z[vi] * src0[((hsi*91+21)*1+lsi)*1];
target[((hsi*105+29)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp349;
fp349 = 1.0000000000000000e+00 * src1[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = 0.0000000000000000e+00 + fp349;
LIBINT2_REALTYPE fp347;
fp347 = inteval->oo2z[vi] * fp348;
LIBINT2_REALTYPE fp350;
fp350 = inteval->PB_z[vi] * src0[((hsi*91+22)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = fp350 + fp347;
target[((hsi*105+30)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp344;
fp344 = 2.0000000000000000e+00 * src1[((hsi*78+16)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = 0.0000000000000000e+00 + fp344;
LIBINT2_REALTYPE fp342;
fp342 = inteval->oo2z[vi] * fp343;
LIBINT2_REALTYPE fp345;
fp345 = inteval->PB_z[vi] * src0[((hsi*91+23)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = fp345 + fp342;
target[((hsi*105+31)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp339;
fp339 = 3.0000000000000000e+00 * src1[((hsi*78+17)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = 0.0000000000000000e+00 + fp339;
LIBINT2_REALTYPE fp337;
fp337 = inteval->oo2z[vi] * fp338;
LIBINT2_REALTYPE fp340;
fp340 = inteval->PB_z[vi] * src0[((hsi*91+24)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp340 + fp337;
target[((hsi*105+32)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp334;
fp334 = 4.0000000000000000e+00 * src1[((hsi*78+18)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = 0.0000000000000000e+00 + fp334;
LIBINT2_REALTYPE fp332;
fp332 = inteval->oo2z[vi] * fp333;
LIBINT2_REALTYPE fp335;
fp335 = inteval->PB_z[vi] * src0[((hsi*91+25)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp335 + fp332;
target[((hsi*105+33)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp329;
fp329 = 5.0000000000000000e+00 * src1[((hsi*78+19)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = 0.0000000000000000e+00 + fp329;
LIBINT2_REALTYPE fp327;
fp327 = inteval->oo2z[vi] * fp328;
LIBINT2_REALTYPE fp330;
fp330 = inteval->PB_z[vi] * src0[((hsi*91+26)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp330 + fp327;
target[((hsi*105+34)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp324;
fp324 = 6.0000000000000000e+00 * src1[((hsi*78+20)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = 0.0000000000000000e+00 + fp324;
LIBINT2_REALTYPE fp322;
fp322 = inteval->oo2z[vi] * fp323;
LIBINT2_REALTYPE fp325;
fp325 = inteval->PB_z[vi] * src0[((hsi*91+27)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp325 + fp322;
target[((hsi*105+35)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp319;
fp319 = 7.0000000000000000e+00 * src1[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = 0.0000000000000000e+00 + fp319;
LIBINT2_REALTYPE fp317;
fp317 = inteval->oo2z[vi] * fp318;
LIBINT2_REALTYPE fp320;
fp320 = inteval->PB_y[vi] * src0[((hsi*91+28)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = fp320 + fp317;
target[((hsi*105+36)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp315;
fp315 = inteval->PB_z[vi] * src0[((hsi*91+28)*1+lsi)*1];
target[((hsi*105+37)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp313;
fp313 = 1.0000000000000000e+00 * src1[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = 0.0000000000000000e+00 + fp313;
LIBINT2_REALTYPE fp311;
fp311 = inteval->oo2z[vi] * fp312;
LIBINT2_REALTYPE fp314;
fp314 = inteval->PB_z[vi] * src0[((hsi*91+29)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = fp314 + fp311;
target[((hsi*105+38)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp467;
fp467 = 1.2000000000000000e+01 * src1[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp466;
fp466 = 0.0000000000000000e+00 + fp467;
LIBINT2_REALTYPE fp465;
fp465 = inteval->oo2z[vi] * fp466;
LIBINT2_REALTYPE fp468;
fp468 = inteval->PB_x[vi] * src0[((hsi*91+0)*1+lsi)*1];
LIBINT2_REALTYPE fp464;
fp464 = fp468 + fp465;
target[((hsi*105+0)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp303;
fp303 = 3.0000000000000000e+00 * src1[((hsi*78+23)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = 0.0000000000000000e+00 + fp303;
LIBINT2_REALTYPE fp301;
fp301 = inteval->oo2z[vi] * fp302;
LIBINT2_REALTYPE fp304;
fp304 = inteval->PB_z[vi] * src0[((hsi*91+31)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp304 + fp301;
target[((hsi*105+40)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp298;
fp298 = 4.0000000000000000e+00 * src1[((hsi*78+24)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = 0.0000000000000000e+00 + fp298;
LIBINT2_REALTYPE fp296;
fp296 = inteval->oo2z[vi] * fp297;
LIBINT2_REALTYPE fp299;
fp299 = inteval->PB_z[vi] * src0[((hsi*91+32)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp299 + fp296;
target[((hsi*105+41)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp293;
fp293 = 5.0000000000000000e+00 * src1[((hsi*78+25)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = 0.0000000000000000e+00 + fp293;
LIBINT2_REALTYPE fp291;
fp291 = inteval->oo2z[vi] * fp292;
LIBINT2_REALTYPE fp294;
fp294 = inteval->PB_z[vi] * src0[((hsi*91+33)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp294 + fp291;
target[((hsi*105+42)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp288;
fp288 = 6.0000000000000000e+00 * src1[((hsi*78+26)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = 0.0000000000000000e+00 + fp288;
LIBINT2_REALTYPE fp286;
fp286 = inteval->oo2z[vi] * fp287;
LIBINT2_REALTYPE fp289;
fp289 = inteval->PB_z[vi] * src0[((hsi*91+34)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp289 + fp286;
target[((hsi*105+43)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp283;
fp283 = 7.0000000000000000e+00 * src1[((hsi*78+27)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = 0.0000000000000000e+00 + fp283;
LIBINT2_REALTYPE fp281;
fp281 = inteval->oo2z[vi] * fp282;
LIBINT2_REALTYPE fp284;
fp284 = inteval->PB_z[vi] * src0[((hsi*91+35)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp284 + fp281;
target[((hsi*105+44)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp278;
fp278 = 8.0000000000000000e+00 * src1[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = 0.0000000000000000e+00 + fp278;
LIBINT2_REALTYPE fp276;
fp276 = inteval->oo2z[vi] * fp277;
LIBINT2_REALTYPE fp279;
fp279 = inteval->PB_y[vi] * src0[((hsi*91+36)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp279 + fp276;
target[((hsi*105+45)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp274;
fp274 = inteval->PB_z[vi] * src0[((hsi*91+36)*1+lsi)*1];
target[((hsi*105+46)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp272;
fp272 = 1.0000000000000000e+00 * src1[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = 0.0000000000000000e+00 + fp272;
LIBINT2_REALTYPE fp270;
fp270 = inteval->oo2z[vi] * fp271;
LIBINT2_REALTYPE fp273;
fp273 = inteval->PB_z[vi] * src0[((hsi*91+37)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp273 + fp270;
target[((hsi*105+47)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp267;
fp267 = 2.0000000000000000e+00 * src1[((hsi*78+29)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = 0.0000000000000000e+00 + fp267;
LIBINT2_REALTYPE fp265;
fp265 = inteval->oo2z[vi] * fp266;
LIBINT2_REALTYPE fp268;
fp268 = inteval->PB_z[vi] * src0[((hsi*91+38)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = fp268 + fp265;
target[((hsi*105+48)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp262;
fp262 = 3.0000000000000000e+00 * src1[((hsi*78+30)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = 0.0000000000000000e+00 + fp262;
LIBINT2_REALTYPE fp260;
fp260 = inteval->oo2z[vi] * fp261;
LIBINT2_REALTYPE fp263;
fp263 = inteval->PB_z[vi] * src0[((hsi*91+39)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp263 + fp260;
target[((hsi*105+49)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp257;
fp257 = 4.0000000000000000e+00 * src1[((hsi*78+31)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = 0.0000000000000000e+00 + fp257;
LIBINT2_REALTYPE fp255;
fp255 = inteval->oo2z[vi] * fp256;
LIBINT2_REALTYPE fp258;
fp258 = inteval->PB_z[vi] * src0[((hsi*91+40)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp258 + fp255;
target[((hsi*105+50)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp252;
fp252 = 5.0000000000000000e+00 * src1[((hsi*78+32)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = 0.0000000000000000e+00 + fp252;
LIBINT2_REALTYPE fp250;
fp250 = inteval->oo2z[vi] * fp251;
LIBINT2_REALTYPE fp253;
fp253 = inteval->PB_z[vi] * src0[((hsi*91+41)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp253 + fp250;
target[((hsi*105+51)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp308;
fp308 = 2.0000000000000000e+00 * src1[((hsi*78+22)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = 0.0000000000000000e+00 + fp308;
LIBINT2_REALTYPE fp306;
fp306 = inteval->oo2z[vi] * fp307;
LIBINT2_REALTYPE fp309;
fp309 = inteval->PB_z[vi] * src0[((hsi*91+30)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp309 + fp306;
target[((hsi*105+39)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp463;
fp463 = inteval->PB_y[vi] * src0[((hsi*91+0)*1+lsi)*1];
target[((hsi*105+1)*1+lsi)*1] = fp463;
LIBINT2_REALTYPE fp462;
fp462 = inteval->PB_z[vi] * src0[((hsi*91+0)*1+lsi)*1];
target[((hsi*105+2)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp460;
fp460 = 1.0000000000000000e+00 * src1[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp459;
fp459 = 0.0000000000000000e+00 + fp460;
LIBINT2_REALTYPE fp458;
fp458 = inteval->oo2z[vi] * fp459;
LIBINT2_REALTYPE fp461;
fp461 = inteval->PB_y[vi] * src0[((hsi*91+1)*1+lsi)*1];
LIBINT2_REALTYPE fp457;
fp457 = fp461 + fp458;
target[((hsi*105+3)*1+lsi)*1] = fp457;
LIBINT2_REALTYPE fp456;
fp456 = inteval->PB_z[vi] * src0[((hsi*91+1)*1+lsi)*1];
target[((hsi*105+4)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp454;
fp454 = 1.0000000000000000e+00 * src1[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp453;
fp453 = 0.0000000000000000e+00 + fp454;
LIBINT2_REALTYPE fp452;
fp452 = inteval->oo2z[vi] * fp453;
LIBINT2_REALTYPE fp455;
fp455 = inteval->PB_z[vi] * src0[((hsi*91+2)*1+lsi)*1];
LIBINT2_REALTYPE fp451;
fp451 = fp455 + fp452;
target[((hsi*105+5)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp449;
fp449 = 2.0000000000000000e+00 * src1[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp448;
fp448 = 0.0000000000000000e+00 + fp449;
LIBINT2_REALTYPE fp447;
fp447 = inteval->oo2z[vi] * fp448;
LIBINT2_REALTYPE fp450;
fp450 = inteval->PB_y[vi] * src0[((hsi*91+3)*1+lsi)*1];
LIBINT2_REALTYPE fp446;
fp446 = fp450 + fp447;
target[((hsi*105+6)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp445;
fp445 = inteval->PB_z[vi] * src0[((hsi*91+3)*1+lsi)*1];
target[((hsi*105+7)*1+lsi)*1] = fp445;
LIBINT2_REALTYPE fp443;
fp443 = 1.0000000000000000e+00 * src1[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp442;
fp442 = 0.0000000000000000e+00 + fp443;
LIBINT2_REALTYPE fp441;
fp441 = inteval->oo2z[vi] * fp442;
LIBINT2_REALTYPE fp444;
fp444 = inteval->PB_z[vi] * src0[((hsi*91+4)*1+lsi)*1];
LIBINT2_REALTYPE fp440;
fp440 = fp444 + fp441;
target[((hsi*105+8)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp438;
fp438 = 2.0000000000000000e+00 * src1[((hsi*78+2)*1+lsi)*1];
LIBINT2_REALTYPE fp437;
fp437 = 0.0000000000000000e+00 + fp438;
LIBINT2_REALTYPE fp436;
fp436 = inteval->oo2z[vi] * fp437;
LIBINT2_REALTYPE fp439;
fp439 = inteval->PB_z[vi] * src0[((hsi*91+5)*1+lsi)*1];
LIBINT2_REALTYPE fp435;
fp435 = fp439 + fp436;
target[((hsi*105+9)*1+lsi)*1] = fp435;
LIBINT2_REALTYPE fp433;
fp433 = 3.0000000000000000e+00 * src1[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = 0.0000000000000000e+00 + fp433;
LIBINT2_REALTYPE fp431;
fp431 = inteval->oo2z[vi] * fp432;
LIBINT2_REALTYPE fp434;
fp434 = inteval->PB_y[vi] * src0[((hsi*91+6)*1+lsi)*1];
LIBINT2_REALTYPE fp430;
fp430 = fp434 + fp431;
target[((hsi*105+10)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp429;
fp429 = inteval->PB_z[vi] * src0[((hsi*91+6)*1+lsi)*1];
target[((hsi*105+11)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp427;
fp427 = 1.0000000000000000e+00 * src1[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp426;
fp426 = 0.0000000000000000e+00 + fp427;
LIBINT2_REALTYPE fp425;
fp425 = inteval->oo2z[vi] * fp426;
LIBINT2_REALTYPE fp428;
fp428 = inteval->PB_z[vi] * src0[((hsi*91+7)*1+lsi)*1];
LIBINT2_REALTYPE fp424;
fp424 = fp428 + fp425;
target[((hsi*105+12)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp365;
fp365 = 4.0000000000000000e+00 * src1[((hsi*78+13)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = 0.0000000000000000e+00 + fp365;
LIBINT2_REALTYPE fp363;
fp363 = inteval->oo2z[vi] * fp364;
LIBINT2_REALTYPE fp366;
fp366 = inteval->PB_z[vi] * src0[((hsi*91+19)*1+lsi)*1];
LIBINT2_REALTYPE fp362;
fp362 = fp366 + fp363;
target[((hsi*105+26)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp417;
fp417 = 3.0000000000000000e+00 * src1[((hsi*78+5)*1+lsi)*1];
LIBINT2_REALTYPE fp416;
fp416 = 0.0000000000000000e+00 + fp417;
LIBINT2_REALTYPE fp415;
fp415 = inteval->oo2z[vi] * fp416;
LIBINT2_REALTYPE fp418;
fp418 = inteval->PB_z[vi] * src0[((hsi*91+9)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = fp418 + fp415;
target[((hsi*105+14)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp412;
fp412 = 4.0000000000000000e+00 * src1[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = 0.0000000000000000e+00 + fp412;
LIBINT2_REALTYPE fp410;
fp410 = inteval->oo2z[vi] * fp411;
LIBINT2_REALTYPE fp413;
fp413 = inteval->PB_y[vi] * src0[((hsi*91+10)*1+lsi)*1];
LIBINT2_REALTYPE fp409;
fp409 = fp413 + fp410;
target[((hsi*105+15)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp408;
fp408 = inteval->PB_z[vi] * src0[((hsi*91+10)*1+lsi)*1];
target[((hsi*105+16)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp406;
fp406 = 1.0000000000000000e+00 * src1[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = 0.0000000000000000e+00 + fp406;
LIBINT2_REALTYPE fp404;
fp404 = inteval->oo2z[vi] * fp405;
LIBINT2_REALTYPE fp407;
fp407 = inteval->PB_z[vi] * src0[((hsi*91+11)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = fp407 + fp404;
target[((hsi*105+17)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp401;
fp401 = 2.0000000000000000e+00 * src1[((hsi*78+7)*1+lsi)*1];
LIBINT2_REALTYPE fp400;
fp400 = 0.0000000000000000e+00 + fp401;
LIBINT2_REALTYPE fp399;
fp399 = inteval->oo2z[vi] * fp400;
LIBINT2_REALTYPE fp402;
fp402 = inteval->PB_z[vi] * src0[((hsi*91+12)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = fp402 + fp399;
target[((hsi*105+18)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp396;
fp396 = 3.0000000000000000e+00 * src1[((hsi*78+8)*1+lsi)*1];
LIBINT2_REALTYPE fp395;
fp395 = 0.0000000000000000e+00 + fp396;
LIBINT2_REALTYPE fp394;
fp394 = inteval->oo2z[vi] * fp395;
LIBINT2_REALTYPE fp397;
fp397 = inteval->PB_z[vi] * src0[((hsi*91+13)*1+lsi)*1];
LIBINT2_REALTYPE fp393;
fp393 = fp397 + fp394;
target[((hsi*105+19)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp391;
fp391 = 4.0000000000000000e+00 * src1[((hsi*78+9)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = 0.0000000000000000e+00 + fp391;
LIBINT2_REALTYPE fp389;
fp389 = inteval->oo2z[vi] * fp390;
LIBINT2_REALTYPE fp392;
fp392 = inteval->PB_z[vi] * src0[((hsi*91+14)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = fp392 + fp389;
target[((hsi*105+20)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp386;
fp386 = 5.0000000000000000e+00 * src1[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = 0.0000000000000000e+00 + fp386;
LIBINT2_REALTYPE fp384;
fp384 = inteval->oo2z[vi] * fp385;
LIBINT2_REALTYPE fp387;
fp387 = inteval->PB_y[vi] * src0[((hsi*91+15)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = fp387 + fp384;
target[((hsi*105+21)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp382;
fp382 = inteval->PB_z[vi] * src0[((hsi*91+15)*1+lsi)*1];
target[((hsi*105+22)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp380;
fp380 = 1.0000000000000000e+00 * src1[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp379;
fp379 = 0.0000000000000000e+00 + fp380;
LIBINT2_REALTYPE fp378;
fp378 = inteval->oo2z[vi] * fp379;
LIBINT2_REALTYPE fp381;
fp381 = inteval->PB_z[vi] * src0[((hsi*91+16)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = fp381 + fp378;
target[((hsi*105+23)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp375;
fp375 = 2.0000000000000000e+00 * src1[((hsi*78+11)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = 0.0000000000000000e+00 + fp375;
LIBINT2_REALTYPE fp373;
fp373 = inteval->oo2z[vi] * fp374;
LIBINT2_REALTYPE fp376;
fp376 = inteval->PB_z[vi] * src0[((hsi*91+17)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = fp376 + fp373;
target[((hsi*105+24)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp370;
fp370 = 3.0000000000000000e+00 * src1[((hsi*78+12)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = 0.0000000000000000e+00 + fp370;
LIBINT2_REALTYPE fp368;
fp368 = inteval->oo2z[vi] * fp369;
LIBINT2_REALTYPE fp371;
fp371 = inteval->PB_z[vi] * src0[((hsi*91+18)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = fp371 + fp368;
target[((hsi*105+25)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp422;
fp422 = 2.0000000000000000e+00 * src1[((hsi*78+4)*1+lsi)*1];
LIBINT2_REALTYPE fp421;
fp421 = 0.0000000000000000e+00 + fp422;
LIBINT2_REALTYPE fp420;
fp420 = inteval->oo2z[vi] * fp421;
LIBINT2_REALTYPE fp423;
fp423 = inteval->PB_z[vi] * src0[((hsi*91+8)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = fp423 + fp420;
target[((hsi*105+13)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp119;
fp119 = 1.0000000000000000e+00 * src1[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + fp119;
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PB_z[vi] * src0[((hsi*91+67)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp120 + fp117;
target[((hsi*105+80)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp114;
fp114 = 2.0000000000000000e+00 * src1[((hsi*78+56)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp114;
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PB_z[vi] * src0[((hsi*91+68)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp115 + fp112;
target[((hsi*105+81)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp109;
fp109 = 3.0000000000000000e+00 * src1[((hsi*78+57)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PB_z[vi] * src0[((hsi*91+69)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp110 + fp107;
target[((hsi*105+82)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp104;
fp104 = 4.0000000000000000e+00 * src1[((hsi*78+58)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + fp104;
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp105;
fp105 = inteval->PB_z[vi] * src0[((hsi*91+70)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp105 + fp102;
target[((hsi*105+83)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp99;
fp99 = 5.0000000000000000e+00 * src1[((hsi*78+59)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + fp99;
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PB_z[vi] * src0[((hsi*91+71)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp100 + fp97;
target[((hsi*105+84)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp94;
fp94 = 6.0000000000000000e+00 * src1[((hsi*78+60)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + fp94;
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp95;
fp95 = inteval->PB_z[vi] * src0[((hsi*91+72)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp95 + fp92;
target[((hsi*105+85)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp89;
fp89 = 7.0000000000000000e+00 * src1[((hsi*78+61)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + fp89;
LIBINT2_REALTYPE fp87;
fp87 = inteval->oo2z[vi] * fp88;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PB_z[vi] * src0[((hsi*91+73)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp90 + fp87;
target[((hsi*105+86)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp84;
fp84 = 8.0000000000000000e+00 * src1[((hsi*78+62)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + fp84;
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PB_z[vi] * src0[((hsi*91+74)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp85 + fp82;
target[((hsi*105+87)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp79;
fp79 = 9.0000000000000000e+00 * src1[((hsi*78+63)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp80;
fp80 = inteval->PB_z[vi] * src0[((hsi*91+75)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp80 + fp77;
target[((hsi*105+88)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp74;
fp74 = 1.0000000000000000e+01 * src1[((hsi*78+64)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + fp74;
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PB_z[vi] * src0[((hsi*91+76)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp75 + fp72;
target[((hsi*105+89)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp69;
fp69 = 1.1000000000000000e+01 * src1[((hsi*78+65)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + fp69;
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PB_z[vi] * src0[((hsi*91+77)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp70 + fp67;
target[((hsi*105+90)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp64;
fp64 = 1.2000000000000000e+01 * src1[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp65;
fp65 = inteval->PB_y[vi] * src0[((hsi*91+78)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp65 + fp62;
target[((hsi*105+91)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp247;
fp247 = 6.0000000000000000e+00 * src1[((hsi*78+33)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = 0.0000000000000000e+00 + fp247;
LIBINT2_REALTYPE fp245;
fp245 = inteval->oo2z[vi] * fp246;
LIBINT2_REALTYPE fp248;
fp248 = inteval->PB_z[vi] * src0[((hsi*91+42)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp248 + fp245;
target[((hsi*105+52)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * src1[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + fp58;
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PB_z[vi] * src0[((hsi*91+79)*1+lsi)*1];
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
fp54 = inteval->PB_z[vi] * src0[((hsi*91+80)*1+lsi)*1];
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
fp49 = inteval->PB_z[vi] * src0[((hsi*91+81)*1+lsi)*1];
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
fp44 = inteval->PB_z[vi] * src0[((hsi*91+82)*1+lsi)*1];
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
fp39 = inteval->PB_z[vi] * src0[((hsi*91+83)*1+lsi)*1];
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
fp34 = inteval->PB_z[vi] * src0[((hsi*91+84)*1+lsi)*1];
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
fp29 = inteval->PB_z[vi] * src0[((hsi*91+85)*1+lsi)*1];
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
fp24 = inteval->PB_z[vi] * src0[((hsi*91+86)*1+lsi)*1];
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
fp19 = inteval->PB_z[vi] * src0[((hsi*91+87)*1+lsi)*1];
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
fp14 = inteval->PB_z[vi] * src0[((hsi*91+88)*1+lsi)*1];
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
fp9 = inteval->PB_z[vi] * src0[((hsi*91+89)*1+lsi)*1];
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
fp4 = inteval->PB_z[vi] * src0[((hsi*91+90)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*105+104)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_z[vi] * src0[((hsi*91+78)*1+lsi)*1];
target[((hsi*105+92)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp242;
fp242 = 7.0000000000000000e+00 * src1[((hsi*78+34)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = 0.0000000000000000e+00 + fp242;
LIBINT2_REALTYPE fp240;
fp240 = inteval->oo2z[vi] * fp241;
LIBINT2_REALTYPE fp243;
fp243 = inteval->PB_z[vi] * src0[((hsi*91+43)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp243 + fp240;
target[((hsi*105+53)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp237;
fp237 = 8.0000000000000000e+00 * src1[((hsi*78+35)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = 0.0000000000000000e+00 + fp237;
LIBINT2_REALTYPE fp235;
fp235 = inteval->oo2z[vi] * fp236;
LIBINT2_REALTYPE fp238;
fp238 = inteval->PB_z[vi] * src0[((hsi*91+44)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp238 + fp235;
target[((hsi*105+54)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp232;
fp232 = 9.0000000000000000e+00 * src1[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = 0.0000000000000000e+00 + fp232;
LIBINT2_REALTYPE fp230;
fp230 = inteval->oo2z[vi] * fp231;
LIBINT2_REALTYPE fp233;
fp233 = inteval->PB_y[vi] * src0[((hsi*91+45)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp233 + fp230;
target[((hsi*105+55)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp228;
fp228 = inteval->PB_z[vi] * src0[((hsi*91+45)*1+lsi)*1];
target[((hsi*105+56)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp226;
fp226 = 1.0000000000000000e+00 * src1[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = 0.0000000000000000e+00 + fp226;
LIBINT2_REALTYPE fp224;
fp224 = inteval->oo2z[vi] * fp225;
LIBINT2_REALTYPE fp227;
fp227 = inteval->PB_z[vi] * src0[((hsi*91+46)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp227 + fp224;
target[((hsi*105+57)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp221;
fp221 = 2.0000000000000000e+00 * src1[((hsi*78+37)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = 0.0000000000000000e+00 + fp221;
LIBINT2_REALTYPE fp219;
fp219 = inteval->oo2z[vi] * fp220;
LIBINT2_REALTYPE fp222;
fp222 = inteval->PB_z[vi] * src0[((hsi*91+47)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp222 + fp219;
target[((hsi*105+58)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp216;
fp216 = 3.0000000000000000e+00 * src1[((hsi*78+38)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = 0.0000000000000000e+00 + fp216;
LIBINT2_REALTYPE fp214;
fp214 = inteval->oo2z[vi] * fp215;
LIBINT2_REALTYPE fp217;
fp217 = inteval->PB_z[vi] * src0[((hsi*91+48)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp217 + fp214;
target[((hsi*105+59)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp211;
fp211 = 4.0000000000000000e+00 * src1[((hsi*78+39)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = 0.0000000000000000e+00 + fp211;
LIBINT2_REALTYPE fp209;
fp209 = inteval->oo2z[vi] * fp210;
LIBINT2_REALTYPE fp212;
fp212 = inteval->PB_z[vi] * src0[((hsi*91+49)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp212 + fp209;
target[((hsi*105+60)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp206;
fp206 = 5.0000000000000000e+00 * src1[((hsi*78+40)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = 0.0000000000000000e+00 + fp206;
LIBINT2_REALTYPE fp204;
fp204 = inteval->oo2z[vi] * fp205;
LIBINT2_REALTYPE fp207;
fp207 = inteval->PB_z[vi] * src0[((hsi*91+50)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp207 + fp204;
target[((hsi*105+61)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp201;
fp201 = 6.0000000000000000e+00 * src1[((hsi*78+41)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = 0.0000000000000000e+00 + fp201;
LIBINT2_REALTYPE fp199;
fp199 = inteval->oo2z[vi] * fp200;
LIBINT2_REALTYPE fp202;
fp202 = inteval->PB_z[vi] * src0[((hsi*91+51)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp202 + fp199;
target[((hsi*105+62)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp196;
fp196 = 7.0000000000000000e+00 * src1[((hsi*78+42)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = 0.0000000000000000e+00 + fp196;
LIBINT2_REALTYPE fp194;
fp194 = inteval->oo2z[vi] * fp195;
LIBINT2_REALTYPE fp197;
fp197 = inteval->PB_z[vi] * src0[((hsi*91+52)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp197 + fp194;
target[((hsi*105+63)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp191;
fp191 = 8.0000000000000000e+00 * src1[((hsi*78+43)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + fp191;
LIBINT2_REALTYPE fp189;
fp189 = inteval->oo2z[vi] * fp190;
LIBINT2_REALTYPE fp192;
fp192 = inteval->PB_z[vi] * src0[((hsi*91+53)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp192 + fp189;
target[((hsi*105+64)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp121;
fp121 = inteval->PB_z[vi] * src0[((hsi*91+66)*1+lsi)*1];
target[((hsi*105+79)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp181;
fp181 = 1.0000000000000000e+01 * src1[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + fp181;
LIBINT2_REALTYPE fp179;
fp179 = inteval->oo2z[vi] * fp180;
LIBINT2_REALTYPE fp182;
fp182 = inteval->PB_y[vi] * src0[((hsi*91+55)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp182 + fp179;
target[((hsi*105+66)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp177;
fp177 = inteval->PB_z[vi] * src0[((hsi*91+55)*1+lsi)*1];
target[((hsi*105+67)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp175;
fp175 = 1.0000000000000000e+00 * src1[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + fp175;
LIBINT2_REALTYPE fp173;
fp173 = inteval->oo2z[vi] * fp174;
LIBINT2_REALTYPE fp176;
fp176 = inteval->PB_z[vi] * src0[((hsi*91+56)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp176 + fp173;
target[((hsi*105+68)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp170;
fp170 = 2.0000000000000000e+00 * src1[((hsi*78+46)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + fp170;
LIBINT2_REALTYPE fp168;
fp168 = inteval->oo2z[vi] * fp169;
LIBINT2_REALTYPE fp171;
fp171 = inteval->PB_z[vi] * src0[((hsi*91+57)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp171 + fp168;
target[((hsi*105+69)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp165;
fp165 = 3.0000000000000000e+00 * src1[((hsi*78+47)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + fp165;
LIBINT2_REALTYPE fp163;
fp163 = inteval->oo2z[vi] * fp164;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PB_z[vi] * src0[((hsi*91+58)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp166 + fp163;
target[((hsi*105+70)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp160;
fp160 = 4.0000000000000000e+00 * src1[((hsi*78+48)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + fp160;
LIBINT2_REALTYPE fp158;
fp158 = inteval->oo2z[vi] * fp159;
LIBINT2_REALTYPE fp161;
fp161 = inteval->PB_z[vi] * src0[((hsi*91+59)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp161 + fp158;
target[((hsi*105+71)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp155;
fp155 = 5.0000000000000000e+00 * src1[((hsi*78+49)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + fp155;
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp156;
fp156 = inteval->PB_z[vi] * src0[((hsi*91+60)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp156 + fp153;
target[((hsi*105+72)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp150;
fp150 = 6.0000000000000000e+00 * src1[((hsi*78+50)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + fp150;
LIBINT2_REALTYPE fp148;
fp148 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PB_z[vi] * src0[((hsi*91+61)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp151 + fp148;
target[((hsi*105+73)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp145;
fp145 = 7.0000000000000000e+00 * src1[((hsi*78+51)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + fp145;
LIBINT2_REALTYPE fp143;
fp143 = inteval->oo2z[vi] * fp144;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PB_z[vi] * src0[((hsi*91+62)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp146 + fp143;
target[((hsi*105+74)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp140;
fp140 = 8.0000000000000000e+00 * src1[((hsi*78+52)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + fp140;
LIBINT2_REALTYPE fp138;
fp138 = inteval->oo2z[vi] * fp139;
LIBINT2_REALTYPE fp141;
fp141 = inteval->PB_z[vi] * src0[((hsi*91+63)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp141 + fp138;
target[((hsi*105+75)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp135;
fp135 = 9.0000000000000000e+00 * src1[((hsi*78+53)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + fp135;
LIBINT2_REALTYPE fp133;
fp133 = inteval->oo2z[vi] * fp134;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PB_z[vi] * src0[((hsi*91+64)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp136 + fp133;
target[((hsi*105+76)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp130;
fp130 = 1.0000000000000000e+01 * src1[((hsi*78+54)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + fp130;
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp129;
LIBINT2_REALTYPE fp131;
fp131 = inteval->PB_z[vi] * src0[((hsi*91+65)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp131 + fp128;
target[((hsi*105+77)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp125;
fp125 = 1.1000000000000000e+01 * src1[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + fp125;
LIBINT2_REALTYPE fp123;
fp123 = inteval->oo2z[vi] * fp124;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PB_y[vi] * src0[((hsi*91+66)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp126 + fp123;
target[((hsi*105+78)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp186;
fp186 = 9.0000000000000000e+00 * src1[((hsi*78+44)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + fp186;
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp187;
fp187 = inteval->PB_z[vi] * src0[((hsi*91+54)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp187 + fp184;
target[((hsi*105+65)*1+lsi)*1] = fp183;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 469 */
}

#ifdef __cplusplus
};
#endif
