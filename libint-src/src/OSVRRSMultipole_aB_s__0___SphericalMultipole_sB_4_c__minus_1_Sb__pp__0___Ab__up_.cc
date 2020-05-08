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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_1_Sb__pp__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp342;
fp342 = -5.0000000000000000e-01 * src4[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = -5.0000000000000000e-01 * src3[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = 5.0000000000000000e+00 * src1[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = 0.0000000000000000e+00 + fp346;
LIBINT2_REALTYPE fp343;
fp343 = fp345 + fp344;
LIBINT2_REALTYPE fp341;
fp341 = fp343 + fp342;
LIBINT2_REALTYPE fp340;
fp340 = inteval->oo2z[vi] * fp341;
LIBINT2_REALTYPE fp347;
fp347 = inteval->PB_y[vi] * src0[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = fp347 + fp340;
target[((hsi*78+21)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp337;
fp337 = 0.0000000000000000e+00 + src5[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = inteval->oo2z[vi] * fp337;
LIBINT2_REALTYPE fp338;
fp338 = inteval->PB_z[vi] * src0[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = fp338 + fp336;
target[((hsi*78+22)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp333;
fp333 = 1.0000000000000000e+00 * src1[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = 0.0000000000000000e+00 + fp333;
LIBINT2_REALTYPE fp331;
fp331 = fp332 + src5[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = inteval->oo2z[vi] * fp331;
LIBINT2_REALTYPE fp334;
fp334 = inteval->PB_z[vi] * src0[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = fp334 + fp330;
target[((hsi*78+23)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp327;
fp327 = 2.0000000000000000e+00 * src1[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = 0.0000000000000000e+00 + fp327;
LIBINT2_REALTYPE fp325;
fp325 = fp326 + src5[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = inteval->oo2z[vi] * fp325;
LIBINT2_REALTYPE fp328;
fp328 = inteval->PB_z[vi] * src0[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = fp328 + fp324;
target[((hsi*78+24)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp321;
fp321 = 3.0000000000000000e+00 * src1[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = 0.0000000000000000e+00 + fp321;
LIBINT2_REALTYPE fp319;
fp319 = fp320 + src5[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = inteval->oo2z[vi] * fp319;
LIBINT2_REALTYPE fp322;
fp322 = inteval->PB_z[vi] * src0[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = fp322 + fp318;
target[((hsi*78+25)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp315;
fp315 = 4.0000000000000000e+00 * src1[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = 0.0000000000000000e+00 + fp315;
LIBINT2_REALTYPE fp313;
fp313 = fp314 + src5[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = inteval->oo2z[vi] * fp313;
LIBINT2_REALTYPE fp316;
fp316 = inteval->PB_z[vi] * src0[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = fp316 + fp312;
target[((hsi*78+26)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp309;
fp309 = 5.0000000000000000e+00 * src1[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = 0.0000000000000000e+00 + fp309;
LIBINT2_REALTYPE fp307;
fp307 = fp308 + src5[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = inteval->oo2z[vi] * fp307;
LIBINT2_REALTYPE fp310;
fp310 = inteval->PB_z[vi] * src0[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp310 + fp306;
target[((hsi*78+27)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp299;
fp299 = -5.0000000000000000e-01 * src4[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = -5.0000000000000000e-01 * src3[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = 6.0000000000000000e+00 * src1[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = 0.0000000000000000e+00 + fp303;
LIBINT2_REALTYPE fp300;
fp300 = fp302 + fp301;
LIBINT2_REALTYPE fp298;
fp298 = fp300 + fp299;
LIBINT2_REALTYPE fp297;
fp297 = inteval->oo2z[vi] * fp298;
LIBINT2_REALTYPE fp304;
fp304 = inteval->PB_y[vi] * src0[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp304 + fp297;
target[((hsi*78+28)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp474;
fp474 = 5.0000000000000000e-01 * src2[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp476;
fp476 = 1.0000000000000000e+01 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp475;
fp475 = 0.0000000000000000e+00 + fp476;
LIBINT2_REALTYPE fp473;
fp473 = fp475 + fp474;
LIBINT2_REALTYPE fp472;
fp472 = inteval->oo2z[vi] * fp473;
LIBINT2_REALTYPE fp477;
fp477 = inteval->PB_x[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp471;
fp471 = fp477 + fp472;
target[((hsi*78+0)*1+lsi)*1] = fp471;
LIBINT2_REALTYPE fp290;
fp290 = 1.0000000000000000e+00 * src1[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = 0.0000000000000000e+00 + fp290;
LIBINT2_REALTYPE fp288;
fp288 = fp289 + src5[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = inteval->oo2z[vi] * fp288;
LIBINT2_REALTYPE fp291;
fp291 = inteval->PB_z[vi] * src0[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp291 + fp287;
target[((hsi*78+30)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp284;
fp284 = 2.0000000000000000e+00 * src1[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = 0.0000000000000000e+00 + fp284;
LIBINT2_REALTYPE fp282;
fp282 = fp283 + src5[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = inteval->oo2z[vi] * fp282;
LIBINT2_REALTYPE fp285;
fp285 = inteval->PB_z[vi] * src0[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp285 + fp281;
target[((hsi*78+31)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp278;
fp278 = 3.0000000000000000e+00 * src1[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = 0.0000000000000000e+00 + fp278;
LIBINT2_REALTYPE fp276;
fp276 = fp277 + src5[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = inteval->oo2z[vi] * fp276;
LIBINT2_REALTYPE fp279;
fp279 = inteval->PB_z[vi] * src0[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = fp279 + fp275;
target[((hsi*78+32)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp272;
fp272 = 4.0000000000000000e+00 * src1[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = 0.0000000000000000e+00 + fp272;
LIBINT2_REALTYPE fp270;
fp270 = fp271 + src5[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = inteval->oo2z[vi] * fp270;
LIBINT2_REALTYPE fp273;
fp273 = inteval->PB_z[vi] * src0[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp273 + fp269;
target[((hsi*78+33)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp266;
fp266 = 5.0000000000000000e+00 * src1[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = 0.0000000000000000e+00 + fp266;
LIBINT2_REALTYPE fp264;
fp264 = fp265 + src5[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = inteval->oo2z[vi] * fp264;
LIBINT2_REALTYPE fp267;
fp267 = inteval->PB_z[vi] * src0[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = fp267 + fp263;
target[((hsi*78+34)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp260;
fp260 = 6.0000000000000000e+00 * src1[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = 0.0000000000000000e+00 + fp260;
LIBINT2_REALTYPE fp258;
fp258 = fp259 + src5[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->oo2z[vi] * fp258;
LIBINT2_REALTYPE fp261;
fp261 = inteval->PB_z[vi] * src0[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp261 + fp257;
target[((hsi*78+35)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp250;
fp250 = -5.0000000000000000e-01 * src4[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = -5.0000000000000000e-01 * src3[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = 7.0000000000000000e+00 * src1[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = 0.0000000000000000e+00 + fp254;
LIBINT2_REALTYPE fp251;
fp251 = fp253 + fp252;
LIBINT2_REALTYPE fp249;
fp249 = fp251 + fp250;
LIBINT2_REALTYPE fp248;
fp248 = inteval->oo2z[vi] * fp249;
LIBINT2_REALTYPE fp255;
fp255 = inteval->PB_y[vi] * src0[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp255 + fp248;
target[((hsi*78+36)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp245;
fp245 = 0.0000000000000000e+00 + src5[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = inteval->oo2z[vi] * fp245;
LIBINT2_REALTYPE fp246;
fp246 = inteval->PB_z[vi] * src0[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp246 + fp244;
target[((hsi*78+37)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp241;
fp241 = 1.0000000000000000e+00 * src1[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = 0.0000000000000000e+00 + fp241;
LIBINT2_REALTYPE fp239;
fp239 = fp240 + src5[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = inteval->oo2z[vi] * fp239;
LIBINT2_REALTYPE fp242;
fp242 = inteval->PB_z[vi] * src0[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp242 + fp238;
target[((hsi*78+38)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp294;
fp294 = 0.0000000000000000e+00 + src5[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->oo2z[vi] * fp294;
LIBINT2_REALTYPE fp295;
fp295 = inteval->PB_z[vi] * src0[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp295 + fp293;
target[((hsi*78+29)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp467;
fp467 = -5.0000000000000000e-01 * src4[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp469;
fp469 = -5.0000000000000000e-01 * src3[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp468;
fp468 = 0.0000000000000000e+00 + fp469;
LIBINT2_REALTYPE fp466;
fp466 = fp468 + fp467;
LIBINT2_REALTYPE fp465;
fp465 = inteval->oo2z[vi] * fp466;
LIBINT2_REALTYPE fp470;
fp470 = inteval->PB_y[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp464;
fp464 = fp470 + fp465;
target[((hsi*78+1)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp462;
fp462 = 0.0000000000000000e+00 + src5[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp461;
fp461 = inteval->oo2z[vi] * fp462;
LIBINT2_REALTYPE fp463;
fp463 = inteval->PB_z[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp460;
fp460 = fp463 + fp461;
target[((hsi*78+2)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp454;
fp454 = -5.0000000000000000e-01 * src4[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp456;
fp456 = -5.0000000000000000e-01 * src3[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp458;
fp458 = 1.0000000000000000e+00 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp457;
fp457 = 0.0000000000000000e+00 + fp458;
LIBINT2_REALTYPE fp455;
fp455 = fp457 + fp456;
LIBINT2_REALTYPE fp453;
fp453 = fp455 + fp454;
LIBINT2_REALTYPE fp452;
fp452 = inteval->oo2z[vi] * fp453;
LIBINT2_REALTYPE fp459;
fp459 = inteval->PB_y[vi] * src0[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp451;
fp451 = fp459 + fp452;
target[((hsi*78+3)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp449;
fp449 = 0.0000000000000000e+00 + src5[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp448;
fp448 = inteval->oo2z[vi] * fp449;
LIBINT2_REALTYPE fp450;
fp450 = inteval->PB_z[vi] * src0[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp447;
fp447 = fp450 + fp448;
target[((hsi*78+4)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp445;
fp445 = 1.0000000000000000e+00 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp444;
fp444 = 0.0000000000000000e+00 + fp445;
LIBINT2_REALTYPE fp443;
fp443 = fp444 + src5[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp442;
fp442 = inteval->oo2z[vi] * fp443;
LIBINT2_REALTYPE fp446;
fp446 = inteval->PB_z[vi] * src0[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp441;
fp441 = fp446 + fp442;
target[((hsi*78+5)*1+lsi)*1] = fp441;
LIBINT2_REALTYPE fp435;
fp435 = -5.0000000000000000e-01 * src4[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp437;
fp437 = -5.0000000000000000e-01 * src3[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
fp439 = 2.0000000000000000e+00 * src1[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp438;
fp438 = 0.0000000000000000e+00 + fp439;
LIBINT2_REALTYPE fp436;
fp436 = fp438 + fp437;
LIBINT2_REALTYPE fp434;
fp434 = fp436 + fp435;
LIBINT2_REALTYPE fp433;
fp433 = inteval->oo2z[vi] * fp434;
LIBINT2_REALTYPE fp440;
fp440 = inteval->PB_y[vi] * src0[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = fp440 + fp433;
target[((hsi*78+6)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp430;
fp430 = 0.0000000000000000e+00 + src5[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp429;
fp429 = inteval->oo2z[vi] * fp430;
LIBINT2_REALTYPE fp431;
fp431 = inteval->PB_z[vi] * src0[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
fp428 = fp431 + fp429;
target[((hsi*78+7)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp426;
fp426 = 1.0000000000000000e+00 * src1[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp425;
fp425 = 0.0000000000000000e+00 + fp426;
LIBINT2_REALTYPE fp424;
fp424 = fp425 + src5[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp423;
fp423 = inteval->oo2z[vi] * fp424;
LIBINT2_REALTYPE fp427;
fp427 = inteval->PB_z[vi] * src0[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp422;
fp422 = fp427 + fp423;
target[((hsi*78+8)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp420;
fp420 = 2.0000000000000000e+00 * src1[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = 0.0000000000000000e+00 + fp420;
LIBINT2_REALTYPE fp418;
fp418 = fp419 + src5[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp417;
fp417 = inteval->oo2z[vi] * fp418;
LIBINT2_REALTYPE fp421;
fp421 = inteval->PB_z[vi] * src0[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp416;
fp416 = fp421 + fp417;
target[((hsi*78+9)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp352;
fp352 = 4.0000000000000000e+00 * src1[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = 0.0000000000000000e+00 + fp352;
LIBINT2_REALTYPE fp350;
fp350 = fp351 + src5[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = inteval->oo2z[vi] * fp350;
LIBINT2_REALTYPE fp353;
fp353 = inteval->PB_z[vi] * src0[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp353 + fp349;
target[((hsi*78+20)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp405;
fp405 = 0.0000000000000000e+00 + src5[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = inteval->oo2z[vi] * fp405;
LIBINT2_REALTYPE fp406;
fp406 = inteval->PB_z[vi] * src0[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = fp406 + fp404;
target[((hsi*78+11)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp401;
fp401 = 1.0000000000000000e+00 * src1[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp400;
fp400 = 0.0000000000000000e+00 + fp401;
LIBINT2_REALTYPE fp399;
fp399 = fp400 + src5[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = inteval->oo2z[vi] * fp399;
LIBINT2_REALTYPE fp402;
fp402 = inteval->PB_z[vi] * src0[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp397;
fp397 = fp402 + fp398;
target[((hsi*78+12)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp395;
fp395 = 2.0000000000000000e+00 * src1[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp394;
fp394 = 0.0000000000000000e+00 + fp395;
LIBINT2_REALTYPE fp393;
fp393 = fp394 + src5[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp392;
fp392 = inteval->oo2z[vi] * fp393;
LIBINT2_REALTYPE fp396;
fp396 = inteval->PB_z[vi] * src0[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = fp396 + fp392;
target[((hsi*78+13)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp389;
fp389 = 3.0000000000000000e+00 * src1[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = 0.0000000000000000e+00 + fp389;
LIBINT2_REALTYPE fp387;
fp387 = fp388 + src5[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = inteval->oo2z[vi] * fp387;
LIBINT2_REALTYPE fp390;
fp390 = inteval->PB_z[vi] * src0[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = fp390 + fp386;
target[((hsi*78+14)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp379;
fp379 = -5.0000000000000000e-01 * src4[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = -5.0000000000000000e-01 * src3[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = 4.0000000000000000e+00 * src1[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = 0.0000000000000000e+00 + fp383;
LIBINT2_REALTYPE fp380;
fp380 = fp382 + fp381;
LIBINT2_REALTYPE fp378;
fp378 = fp380 + fp379;
LIBINT2_REALTYPE fp377;
fp377 = inteval->oo2z[vi] * fp378;
LIBINT2_REALTYPE fp384;
fp384 = inteval->PB_y[vi] * src0[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = fp384 + fp377;
target[((hsi*78+15)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp374;
fp374 = 0.0000000000000000e+00 + src5[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp373;
fp373 = inteval->oo2z[vi] * fp374;
LIBINT2_REALTYPE fp375;
fp375 = inteval->PB_z[vi] * src0[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = fp375 + fp373;
target[((hsi*78+16)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp370;
fp370 = 1.0000000000000000e+00 * src1[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = 0.0000000000000000e+00 + fp370;
LIBINT2_REALTYPE fp368;
fp368 = fp369 + src5[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = inteval->oo2z[vi] * fp368;
LIBINT2_REALTYPE fp371;
fp371 = inteval->PB_z[vi] * src0[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = fp371 + fp367;
target[((hsi*78+17)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp364;
fp364 = 2.0000000000000000e+00 * src1[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = 0.0000000000000000e+00 + fp364;
LIBINT2_REALTYPE fp362;
fp362 = fp363 + src5[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = inteval->oo2z[vi] * fp362;
LIBINT2_REALTYPE fp365;
fp365 = inteval->PB_z[vi] * src0[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = fp365 + fp361;
target[((hsi*78+18)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp358;
fp358 = 3.0000000000000000e+00 * src1[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = 0.0000000000000000e+00 + fp358;
LIBINT2_REALTYPE fp356;
fp356 = fp357 + src5[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = inteval->oo2z[vi] * fp356;
LIBINT2_REALTYPE fp359;
fp359 = inteval->PB_z[vi] * src0[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp359 + fp355;
target[((hsi*78+19)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp410;
fp410 = -5.0000000000000000e-01 * src4[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp412;
fp412 = -5.0000000000000000e-01 * src3[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = 3.0000000000000000e+00 * src1[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp413;
fp413 = 0.0000000000000000e+00 + fp414;
LIBINT2_REALTYPE fp411;
fp411 = fp413 + fp412;
LIBINT2_REALTYPE fp409;
fp409 = fp411 + fp410;
LIBINT2_REALTYPE fp408;
fp408 = inteval->oo2z[vi] * fp409;
LIBINT2_REALTYPE fp415;
fp415 = inteval->PB_y[vi] * src0[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp407;
fp407 = fp415 + fp408;
target[((hsi*78+10)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp107;
fp107 = 4.0000000000000000e+00 * src1[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + fp107;
LIBINT2_REALTYPE fp105;
fp105 = fp106 + src5[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp108;
fp108 = inteval->PB_z[vi] * src0[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp108 + fp104;
target[((hsi*78+60)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp101;
fp101 = 5.0000000000000000e+00 * src1[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp101;
LIBINT2_REALTYPE fp99;
fp99 = fp100 + src5[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp99;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PB_z[vi] * src0[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp102 + fp98;
target[((hsi*78+61)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp95;
fp95 = 6.0000000000000000e+00 * src1[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + fp95;
LIBINT2_REALTYPE fp93;
fp93 = fp94 + src5[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp96;
fp96 = inteval->PB_z[vi] * src0[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp96 + fp92;
target[((hsi*78+62)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp89;
fp89 = 7.0000000000000000e+00 * src1[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + fp89;
LIBINT2_REALTYPE fp87;
fp87 = fp88 + src5[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->oo2z[vi] * fp87;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PB_z[vi] * src0[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp90 + fp86;
target[((hsi*78+63)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp83;
fp83 = 8.0000000000000000e+00 * src1[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + fp83;
LIBINT2_REALTYPE fp81;
fp81 = fp82 + src5[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PB_z[vi] * src0[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp84 + fp80;
target[((hsi*78+64)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp77;
fp77 = 9.0000000000000000e+00 * src1[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + fp77;
LIBINT2_REALTYPE fp75;
fp75 = fp76 + src5[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PB_z[vi] * src0[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp78 + fp74;
target[((hsi*78+65)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp67;
fp67 = -5.0000000000000000e-01 * src4[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = -5.0000000000000000e-01 * src3[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+01 * src1[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PB_y[vi] * src0[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp72 + fp65;
target[((hsi*78+66)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src5[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PB_z[vi] * src0[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
target[((hsi*78+67)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp235;
fp235 = 2.0000000000000000e+00 * src1[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = 0.0000000000000000e+00 + fp235;
LIBINT2_REALTYPE fp233;
fp233 = fp234 + src5[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->oo2z[vi] * fp233;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PB_z[vi] * src0[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp236 + fp232;
target[((hsi*78+39)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp52;
fp52 = 2.0000000000000000e+00 * src1[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + fp52;
LIBINT2_REALTYPE fp50;
fp50 = fp51 + src5[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PB_z[vi] * src0[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp53 + fp49;
target[((hsi*78+69)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp46;
fp46 = 3.0000000000000000e+00 * src1[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src5[((hsi*66+58)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PB_z[vi] * src0[((hsi*66+58)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp47 + fp43;
target[((hsi*78+70)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp40;
fp40 = 4.0000000000000000e+00 * src1[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src5[((hsi*66+59)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PB_z[vi] * src0[((hsi*66+59)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp41 + fp37;
target[((hsi*78+71)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp34;
fp34 = 5.0000000000000000e+00 * src1[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src5[((hsi*66+60)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PB_z[vi] * src0[((hsi*66+60)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp35 + fp31;
target[((hsi*78+72)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
fp28 = 6.0000000000000000e+00 * src1[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src5[((hsi*66+61)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_z[vi] * src0[((hsi*66+61)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*78+73)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = 7.0000000000000000e+00 * src1[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src5[((hsi*66+62)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PB_z[vi] * src0[((hsi*66+62)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*78+74)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = 8.0000000000000000e+00 * src1[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src5[((hsi*66+63)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PB_z[vi] * src0[((hsi*66+63)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*78+75)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 9.0000000000000000e+00 * src1[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src5[((hsi*66+64)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PB_z[vi] * src0[((hsi*66+64)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*78+76)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+01 * src1[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src5[((hsi*66+65)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PB_z[vi] * src0[((hsi*66+65)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*78+77)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * src1[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + fp58;
LIBINT2_REALTYPE fp56;
fp56 = fp57 + src5[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PB_z[vi] * src0[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp59 + fp55;
target[((hsi*78+68)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp229;
fp229 = 3.0000000000000000e+00 * src1[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = 0.0000000000000000e+00 + fp229;
LIBINT2_REALTYPE fp227;
fp227 = fp228 + src5[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = inteval->oo2z[vi] * fp227;
LIBINT2_REALTYPE fp230;
fp230 = inteval->PB_z[vi] * src0[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp230 + fp226;
target[((hsi*78+40)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp223;
fp223 = 4.0000000000000000e+00 * src1[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = 0.0000000000000000e+00 + fp223;
LIBINT2_REALTYPE fp221;
fp221 = fp222 + src5[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = inteval->oo2z[vi] * fp221;
LIBINT2_REALTYPE fp224;
fp224 = inteval->PB_z[vi] * src0[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp224 + fp220;
target[((hsi*78+41)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp217;
fp217 = 5.0000000000000000e+00 * src1[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = 0.0000000000000000e+00 + fp217;
LIBINT2_REALTYPE fp215;
fp215 = fp216 + src5[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = inteval->oo2z[vi] * fp215;
LIBINT2_REALTYPE fp218;
fp218 = inteval->PB_z[vi] * src0[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp218 + fp214;
target[((hsi*78+42)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp211;
fp211 = 6.0000000000000000e+00 * src1[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = 0.0000000000000000e+00 + fp211;
LIBINT2_REALTYPE fp209;
fp209 = fp210 + src5[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp212;
fp212 = inteval->PB_z[vi] * src0[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp212 + fp208;
target[((hsi*78+43)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp205;
fp205 = 7.0000000000000000e+00 * src1[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + fp205;
LIBINT2_REALTYPE fp203;
fp203 = fp204 + src5[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp203;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PB_z[vi] * src0[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp206 + fp202;
target[((hsi*78+44)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp195;
fp195 = -5.0000000000000000e-01 * src4[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = -5.0000000000000000e-01 * src3[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = 8.0000000000000000e+00 * src1[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = 0.0000000000000000e+00 + fp199;
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
LIBINT2_REALTYPE fp193;
fp193 = inteval->oo2z[vi] * fp194;
LIBINT2_REALTYPE fp200;
fp200 = inteval->PB_y[vi] * src0[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp200 + fp193;
target[((hsi*78+45)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + src5[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->oo2z[vi] * fp190;
LIBINT2_REALTYPE fp191;
fp191 = inteval->PB_z[vi] * src0[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp191 + fp189;
target[((hsi*78+46)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp186;
fp186 = 1.0000000000000000e+00 * src1[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + fp186;
LIBINT2_REALTYPE fp184;
fp184 = fp185 + src5[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->oo2z[vi] * fp184;
LIBINT2_REALTYPE fp187;
fp187 = inteval->PB_z[vi] * src0[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp187 + fp183;
target[((hsi*78+47)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp180;
fp180 = 2.0000000000000000e+00 * src1[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + fp180;
LIBINT2_REALTYPE fp178;
fp178 = fp179 + src5[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = inteval->oo2z[vi] * fp178;
LIBINT2_REALTYPE fp181;
fp181 = inteval->PB_z[vi] * src0[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp181 + fp177;
target[((hsi*78+48)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp113;
fp113 = 3.0000000000000000e+00 * src1[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + fp113;
LIBINT2_REALTYPE fp111;
fp111 = fp112 + src5[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->oo2z[vi] * fp111;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PB_z[vi] * src0[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp114 + fp110;
target[((hsi*78+59)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp168;
fp168 = 4.0000000000000000e+00 * src1[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + fp168;
LIBINT2_REALTYPE fp166;
fp166 = fp167 + src5[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->oo2z[vi] * fp166;
LIBINT2_REALTYPE fp169;
fp169 = inteval->PB_z[vi] * src0[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp169 + fp165;
target[((hsi*78+50)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp162;
fp162 = 5.0000000000000000e+00 * src1[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + fp162;
LIBINT2_REALTYPE fp160;
fp160 = fp161 + src5[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = inteval->oo2z[vi] * fp160;
LIBINT2_REALTYPE fp163;
fp163 = inteval->PB_z[vi] * src0[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp163 + fp159;
target[((hsi*78+51)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp156;
fp156 = 6.0000000000000000e+00 * src1[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + fp156;
LIBINT2_REALTYPE fp154;
fp154 = fp155 + src5[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp157;
fp157 = inteval->PB_z[vi] * src0[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp157 + fp153;
target[((hsi*78+52)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp150;
fp150 = 7.0000000000000000e+00 * src1[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + fp150;
LIBINT2_REALTYPE fp148;
fp148 = fp149 + src5[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PB_z[vi] * src0[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp151 + fp147;
target[((hsi*78+53)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp144;
fp144 = 8.0000000000000000e+00 * src1[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + fp144;
LIBINT2_REALTYPE fp142;
fp142 = fp143 + src5[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->oo2z[vi] * fp142;
LIBINT2_REALTYPE fp145;
fp145 = inteval->PB_z[vi] * src0[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp145 + fp141;
target[((hsi*78+54)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp134;
fp134 = -5.0000000000000000e-01 * src4[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = -5.0000000000000000e-01 * src3[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 9.0000000000000000e+00 * src1[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + fp138;
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp133;
fp133 = fp135 + fp134;
LIBINT2_REALTYPE fp132;
fp132 = inteval->oo2z[vi] * fp133;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PB_y[vi] * src0[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp139 + fp132;
target[((hsi*78+55)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src5[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp129;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PB_z[vi] * src0[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
target[((hsi*78+56)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp125;
fp125 = 1.0000000000000000e+00 * src1[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + fp125;
LIBINT2_REALTYPE fp123;
fp123 = fp124 + src5[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PB_z[vi] * src0[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp126 + fp122;
target[((hsi*78+57)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp119;
fp119 = 2.0000000000000000e+00 * src1[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + fp119;
LIBINT2_REALTYPE fp117;
fp117 = fp118 + src5[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp117;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PB_z[vi] * src0[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp120 + fp116;
target[((hsi*78+58)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp174;
fp174 = 3.0000000000000000e+00 * src1[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + fp174;
LIBINT2_REALTYPE fp172;
fp172 = fp173 + src5[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = inteval->oo2z[vi] * fp172;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PB_z[vi] * src0[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp175 + fp171;
target[((hsi*78+49)*1+lsi)*1] = fp170;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 478 */
}

#ifdef __cplusplus
};
#endif
