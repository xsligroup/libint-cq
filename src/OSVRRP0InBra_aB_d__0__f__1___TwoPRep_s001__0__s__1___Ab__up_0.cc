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
void OSVRRP0InBra_aB_d__0__f__1___TwoPRep_s001__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5, const LIBINT2_REALTYPE* src6) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp247;
fp247 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp248 - fp247;
LIBINT2_REALTYPE fp245;
fp245 = 1.0000000000000000e+00 * fp246;
LIBINT2_REALTYPE fp449;
fp449 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp250;
fp250 = fp449 * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = inteval->WP_z[vi] * src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = inteval->PA_z[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp253 + fp252;
LIBINT2_REALTYPE fp249;
fp249 = fp251 + fp250;
LIBINT2_REALTYPE fp244;
fp244 = fp249 + fp245;
target[((hsi*60+29)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp257;
fp257 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp258 - fp257;
LIBINT2_REALTYPE fp255;
fp255 = 1.0000000000000000e+00 * fp256;
LIBINT2_REALTYPE fp439;
fp439 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp340;
fp340 = fp439 * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = inteval->WP_z[vi] * src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = inteval->PA_z[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp262 + fp261;
LIBINT2_REALTYPE fp259;
fp259 = fp260 + fp340;
LIBINT2_REALTYPE fp254;
fp254 = fp259 + fp255;
target[((hsi*60+28)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp266;
fp266 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp267 - fp266;
LIBINT2_REALTYPE fp264;
fp264 = 1.0000000000000000e+00 * fp265;
LIBINT2_REALTYPE fp420;
fp420 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp419;
fp419 = fp420 * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = inteval->WP_z[vi] * src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = inteval->PA_z[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp271 + fp270;
LIBINT2_REALTYPE fp268;
fp268 = fp269 + fp419;
LIBINT2_REALTYPE fp263;
fp263 = fp268 + fp264;
target[((hsi*60+27)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp275;
fp275 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = fp276 - fp275;
LIBINT2_REALTYPE fp273;
fp273 = 1.0000000000000000e+00 * fp274;
LIBINT2_REALTYPE fp278;
fp278 = inteval->WP_z[vi] * src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = inteval->PA_z[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp279 + fp278;
LIBINT2_REALTYPE fp272;
fp272 = fp277 + fp273;
target[((hsi*60+26)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp283;
fp283 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = fp284 - fp283;
LIBINT2_REALTYPE fp281;
fp281 = 1.0000000000000000e+00 * fp282;
LIBINT2_REALTYPE fp429;
fp429 = fp439 * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = inteval->WP_z[vi] * src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = inteval->PA_z[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp288 + fp287;
LIBINT2_REALTYPE fp285;
fp285 = fp286 + fp429;
LIBINT2_REALTYPE fp280;
fp280 = fp285 + fp281;
target[((hsi*60+25)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp292;
fp292 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp293 - fp292;
LIBINT2_REALTYPE fp290;
fp290 = 1.0000000000000000e+00 * fp291;
LIBINT2_REALTYPE fp295;
fp295 = fp420 * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = inteval->WP_z[vi] * src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = inteval->PA_z[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp298 + fp297;
LIBINT2_REALTYPE fp294;
fp294 = fp296 + fp295;
LIBINT2_REALTYPE fp289;
fp289 = fp294 + fp290;
target[((hsi*60+24)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp302;
fp302 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp303 - fp302;
LIBINT2_REALTYPE fp300;
fp300 = 1.0000000000000000e+00 * fp301;
LIBINT2_REALTYPE fp305;
fp305 = inteval->WP_z[vi] * src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = inteval->PA_z[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = fp306 + fp305;
LIBINT2_REALTYPE fp299;
fp299 = fp304 + fp300;
target[((hsi*60+23)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp310;
fp310 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = fp311 - fp310;
LIBINT2_REALTYPE fp308;
fp308 = 1.0000000000000000e+00 * fp309;
LIBINT2_REALTYPE fp365;
fp365 = fp420 * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = inteval->WP_z[vi] * src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = inteval->PA_z[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp315 + fp314;
LIBINT2_REALTYPE fp312;
fp312 = fp313 + fp365;
LIBINT2_REALTYPE fp307;
fp307 = fp312 + fp308;
target[((hsi*60+22)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp319;
fp319 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = fp320 - fp319;
LIBINT2_REALTYPE fp317;
fp317 = 1.0000000000000000e+00 * fp318;
LIBINT2_REALTYPE fp322;
fp322 = inteval->WP_z[vi] * src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = inteval->PA_z[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp323 + fp322;
LIBINT2_REALTYPE fp316;
fp316 = fp321 + fp317;
target[((hsi*60+21)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp327;
fp327 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp328 - fp327;
LIBINT2_REALTYPE fp325;
fp325 = 1.0000000000000000e+00 * fp326;
LIBINT2_REALTYPE fp330;
fp330 = inteval->WP_z[vi] * src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = inteval->PA_z[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = fp331 + fp330;
LIBINT2_REALTYPE fp324;
fp324 = fp329 + fp325;
target[((hsi*60+20)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp333;
fp333 = inteval->WP_y[vi] * src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = inteval->PA_y[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = fp334 + fp333;
target[((hsi*60+19)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp401;
fp401 = fp420 * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = inteval->WP_y[vi] * src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = inteval->PA_y[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp338 + fp337;
LIBINT2_REALTYPE fp335;
fp335 = fp336 + fp401;
target[((hsi*60+18)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp342;
fp342 = inteval->WP_y[vi] * src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = inteval->PA_y[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = fp343 + fp342;
LIBINT2_REALTYPE fp339;
fp339 = fp341 + fp340;
target[((hsi*60+17)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp345;
fp345 = fp449 * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp347;
fp347 = inteval->WP_y[vi] * src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = inteval->PA_y[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = fp348 + fp347;
LIBINT2_REALTYPE fp344;
fp344 = fp346 + fp345;
target[((hsi*60+16)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp454;
fp454 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp453;
fp453 = inteval->roz[vi] * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp452;
fp452 = src2[((hsi*10+0)*1+lsi)*1] - fp453;
LIBINT2_REALTYPE fp451;
fp451 = fp454 * fp452;
LIBINT2_REALTYPE fp456;
fp456 = inteval->WP_x[vi] * src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp457;
fp457 = inteval->PA_x[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp455;
fp455 = fp457 + fp456;
LIBINT2_REALTYPE fp450;
fp450 = fp455 + fp451;
LIBINT2_REALTYPE fp447;
fp447 = fp450 + fp448;
target[((hsi*60+0)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp353;
fp353 = fp420 * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = inteval->WP_y[vi] * src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = inteval->PA_y[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp356 + fp355;
LIBINT2_REALTYPE fp352;
fp352 = fp354 + fp353;
target[((hsi*60+14)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = inteval->WP_y[vi] * src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = inteval->PA_y[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = fp360 + fp359;
LIBINT2_REALTYPE fp357;
fp357 = fp358 + fp438;
target[((hsi*60+13)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp362;
fp362 = inteval->WP_y[vi] * src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = inteval->PA_y[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = fp363 + fp362;
target[((hsi*60+12)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp367;
fp367 = inteval->WP_y[vi] * src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = inteval->PA_y[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = fp368 + fp367;
LIBINT2_REALTYPE fp364;
fp364 = fp366 + fp365;
target[((hsi*60+11)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp370;
fp370 = inteval->WP_y[vi] * src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = inteval->PA_y[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp371 + fp370;
target[((hsi*60+10)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp375;
fp375 = inteval->roz[vi] * src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = src2[((hsi*10+9)*1+lsi)*1] - fp375;
LIBINT2_REALTYPE fp373;
fp373 = fp454 * fp374;
LIBINT2_REALTYPE fp377;
fp377 = inteval->WP_x[vi] * src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
fp378 = inteval->PA_x[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = fp378 + fp377;
LIBINT2_REALTYPE fp372;
fp372 = fp376 + fp373;
target[((hsi*60+9)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp382;
fp382 = inteval->roz[vi] * src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = src2[((hsi*10+8)*1+lsi)*1] - fp382;
LIBINT2_REALTYPE fp380;
fp380 = fp454 * fp381;
LIBINT2_REALTYPE fp384;
fp384 = inteval->WP_x[vi] * src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = inteval->PA_x[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = fp385 + fp384;
LIBINT2_REALTYPE fp379;
fp379 = fp383 + fp380;
target[((hsi*60+8)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp389;
fp389 = inteval->roz[vi] * src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = src2[((hsi*10+7)*1+lsi)*1] - fp389;
LIBINT2_REALTYPE fp387;
fp387 = fp454 * fp388;
LIBINT2_REALTYPE fp391;
fp391 = inteval->WP_x[vi] * src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp392;
fp392 = inteval->PA_x[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = fp392 + fp391;
LIBINT2_REALTYPE fp386;
fp386 = fp390 + fp387;
target[((hsi*60+7)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp396;
fp396 = inteval->roz[vi] * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp395;
fp395 = src2[((hsi*10+6)*1+lsi)*1] - fp396;
LIBINT2_REALTYPE fp394;
fp394 = fp454 * fp395;
LIBINT2_REALTYPE fp398;
fp398 = inteval->WP_x[vi] * src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp399;
fp399 = inteval->PA_x[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp397;
fp397 = fp399 + fp398;
LIBINT2_REALTYPE fp393;
fp393 = fp397 + fp394;
target[((hsi*60+6)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp405;
fp405 = inteval->roz[vi] * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = src2[((hsi*10+5)*1+lsi)*1] - fp405;
LIBINT2_REALTYPE fp403;
fp403 = fp454 * fp404;
LIBINT2_REALTYPE fp407;
fp407 = inteval->WP_x[vi] * src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp408;
fp408 = inteval->PA_x[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp406;
fp406 = fp408 + fp407;
LIBINT2_REALTYPE fp402;
fp402 = fp406 + fp403;
LIBINT2_REALTYPE fp400;
fp400 = fp402 + fp401;
target[((hsi*60+5)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp410;
fp410 = fp420 * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = inteval->roz[vi] * src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp413;
fp413 = src2[((hsi*10+4)*1+lsi)*1] - fp414;
LIBINT2_REALTYPE fp412;
fp412 = fp454 * fp413;
LIBINT2_REALTYPE fp416;
fp416 = inteval->WP_x[vi] * src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp417;
fp417 = inteval->PA_x[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp415;
fp415 = fp417 + fp416;
LIBINT2_REALTYPE fp411;
fp411 = fp415 + fp412;
LIBINT2_REALTYPE fp409;
fp409 = fp411 + fp410;
target[((hsi*60+4)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp424;
fp424 = inteval->roz[vi] * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp423;
fp423 = src2[((hsi*10+3)*1+lsi)*1] - fp424;
LIBINT2_REALTYPE fp422;
fp422 = fp454 * fp423;
LIBINT2_REALTYPE fp426;
fp426 = inteval->WP_x[vi] * src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = inteval->PA_x[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp425;
fp425 = fp427 + fp426;
LIBINT2_REALTYPE fp421;
fp421 = fp425 + fp422;
LIBINT2_REALTYPE fp418;
fp418 = fp421 + fp419;
target[((hsi*60+3)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp433;
fp433 = inteval->roz[vi] * src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = src2[((hsi*10+2)*1+lsi)*1] - fp433;
LIBINT2_REALTYPE fp431;
fp431 = fp454 * fp432;
LIBINT2_REALTYPE fp435;
fp435 = inteval->WP_x[vi] * src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp436;
fp436 = inteval->PA_x[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp434;
fp434 = fp436 + fp435;
LIBINT2_REALTYPE fp430;
fp430 = fp434 + fp431;
LIBINT2_REALTYPE fp428;
fp428 = fp430 + fp429;
target[((hsi*60+2)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp443;
fp443 = inteval->roz[vi] * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp442;
fp442 = src2[((hsi*10+1)*1+lsi)*1] - fp443;
LIBINT2_REALTYPE fp441;
fp441 = fp454 * fp442;
LIBINT2_REALTYPE fp445;
fp445 = inteval->WP_x[vi] * src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp446;
fp446 = inteval->PA_x[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp444;
fp444 = fp446 + fp445;
LIBINT2_REALTYPE fp440;
fp440 = fp444 + fp441;
LIBINT2_REALTYPE fp437;
fp437 = fp440 + fp438;
target[((hsi*60+1)*1+lsi)*1] = fp437;
LIBINT2_REALTYPE fp350;
fp350 = inteval->WP_y[vi] * src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = inteval->PA_y[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = fp351 + fp350;
target[((hsi*60+15)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp3;
fp3 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 - fp3;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = fp449 * src4[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src1[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->PA_z[vi] * src0[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp8 + fp373;
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp14;
fp14 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 - fp14;
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * fp13;
LIBINT2_REALTYPE fp17;
fp17 = fp439 * src4[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src1[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->PA_z[vi] * src0[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
LIBINT2_REALTYPE fp18;
fp18 = fp19 + fp380;
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
LIBINT2_REALTYPE fp11;
fp11 = fp16 + fp12;
target[((hsi*60+58)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp25;
fp25 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
LIBINT2_REALTYPE fp23;
fp23 = 1.0000000000000000e+00 * fp24;
LIBINT2_REALTYPE fp28;
fp28 = fp420 * src4[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_z[vi] * src1[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->PA_z[vi] * src0[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp29;
fp29 = fp30 + fp387;
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp22;
fp22 = fp27 + fp23;
target[((hsi*60+57)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp36;
fp36 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp37 - fp36;
LIBINT2_REALTYPE fp34;
fp34 = 1.0000000000000000e+00 * fp35;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * src1[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp39 + fp394;
LIBINT2_REALTYPE fp33;
fp33 = fp38 + fp34;
target[((hsi*60+56)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp45;
fp45 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * fp44;
LIBINT2_REALTYPE fp48;
fp48 = fp439 * src4[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * src1[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_z[vi] * src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp49;
fp49 = fp50 + fp403;
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
LIBINT2_REALTYPE fp42;
fp42 = fp47 + fp43;
target[((hsi*60+55)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp56;
fp56 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * fp55;
LIBINT2_REALTYPE fp59;
fp59 = fp420 * src4[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_z[vi] * src1[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_z[vi] * src0[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp60;
fp60 = fp61 + fp412;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
LIBINT2_REALTYPE fp53;
fp53 = fp58 + fp54;
target[((hsi*60+54)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp67;
fp67 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp68 - fp67;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * fp66;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_z[vi] * src1[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->PA_z[vi] * src0[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
LIBINT2_REALTYPE fp69;
fp69 = fp70 + fp422;
LIBINT2_REALTYPE fp64;
fp64 = fp69 + fp65;
target[((hsi*60+53)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp76;
fp76 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp77 - fp76;
LIBINT2_REALTYPE fp74;
fp74 = 1.0000000000000000e+00 * fp75;
LIBINT2_REALTYPE fp79;
fp79 = fp420 * src4[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_z[vi] * src1[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->PA_z[vi] * src0[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp83 + fp82;
LIBINT2_REALTYPE fp80;
fp80 = fp81 + fp431;
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
LIBINT2_REALTYPE fp73;
fp73 = fp78 + fp74;
target[((hsi*60+52)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp87;
fp87 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp88 - fp87;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * fp86;
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_z[vi] * src1[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_z[vi] * src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
LIBINT2_REALTYPE fp89;
fp89 = fp90 + fp441;
LIBINT2_REALTYPE fp84;
fp84 = fp89 + fp85;
target[((hsi*60+51)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp96;
fp96 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp97 - fp96;
LIBINT2_REALTYPE fp94;
fp94 = 1.0000000000000000e+00 * fp95;
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_z[vi] * src1[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_z[vi] * src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp98;
fp98 = fp99 + fp451;
LIBINT2_REALTYPE fp93;
fp93 = fp98 + fp94;
target[((hsi*60+50)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp105;
fp105 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp106 - fp105;
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * fp104;
LIBINT2_REALTYPE fp108;
fp108 = fp449 * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_z[vi] * src1[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->PA_z[vi] * src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp111 + fp110;
LIBINT2_REALTYPE fp107;
fp107 = fp109 + fp108;
LIBINT2_REALTYPE fp102;
fp102 = fp107 + fp103;
target[((hsi*60+49)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp115;
fp115 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * fp114;
LIBINT2_REALTYPE fp203;
fp203 = fp439 * src4[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->WP_z[vi] * src1[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->PA_z[vi] * src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
LIBINT2_REALTYPE fp117;
fp117 = fp118 + fp203;
LIBINT2_REALTYPE fp112;
fp112 = fp117 + fp113;
target[((hsi*60+48)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp124;
fp124 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp125 - fp124;
LIBINT2_REALTYPE fp122;
fp122 = 1.0000000000000000e+00 * fp123;
LIBINT2_REALTYPE fp127;
fp127 = fp420 * src4[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->WP_z[vi] * src1[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->PA_z[vi] * src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
LIBINT2_REALTYPE fp121;
fp121 = fp126 + fp122;
target[((hsi*60+47)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp134;
fp134 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp135 - fp134;
LIBINT2_REALTYPE fp132;
fp132 = 1.0000000000000000e+00 * fp133;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_z[vi] * src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->PA_z[vi] * src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
LIBINT2_REALTYPE fp131;
fp131 = fp136 + fp132;
target[((hsi*60+46)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp242;
fp242 = inteval->WP_y[vi] * src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = inteval->PA_y[vi] * src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp243 + fp242;
LIBINT2_REALTYPE fp240;
fp240 = fp241 + fp451;
target[((hsi*60+30)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp152;
fp152 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp153 - fp152;
LIBINT2_REALTYPE fp150;
fp150 = 1.0000000000000000e+00 * fp151;
LIBINT2_REALTYPE fp155;
fp155 = fp420 * src4[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->WP_z[vi] * src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = inteval->PA_z[vi] * src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp158 + fp157;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp149;
fp149 = fp154 + fp150;
target[((hsi*60+44)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp162;
fp162 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp163 - fp162;
LIBINT2_REALTYPE fp160;
fp160 = 1.0000000000000000e+00 * fp161;
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_z[vi] * src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->PA_z[vi] * src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
LIBINT2_REALTYPE fp159;
fp159 = fp164 + fp160;
target[((hsi*60+43)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp170;
fp170 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp171 - fp170;
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * fp169;
LIBINT2_REALTYPE fp235;
fp235 = fp420 * src4[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = inteval->WP_z[vi] * src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = inteval->PA_z[vi] * src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp175 + fp174;
LIBINT2_REALTYPE fp172;
fp172 = fp173 + fp235;
LIBINT2_REALTYPE fp167;
fp167 = fp172 + fp168;
target[((hsi*60+42)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp179;
fp179 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp180 - fp179;
LIBINT2_REALTYPE fp177;
fp177 = 1.0000000000000000e+00 * fp178;
LIBINT2_REALTYPE fp182;
fp182 = inteval->WP_z[vi] * src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_z[vi] * src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp183 + fp182;
LIBINT2_REALTYPE fp176;
fp176 = fp181 + fp177;
target[((hsi*60+41)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp187;
fp187 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp188 - fp187;
LIBINT2_REALTYPE fp185;
fp185 = 1.0000000000000000e+00 * fp186;
LIBINT2_REALTYPE fp190;
fp190 = inteval->WP_z[vi] * src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = inteval->PA_z[vi] * src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp191 + fp190;
LIBINT2_REALTYPE fp184;
fp184 = fp189 + fp185;
target[((hsi*60+40)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp194;
fp194 = inteval->WP_y[vi] * src1[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->PA_y[vi] * src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp195 + fp194;
LIBINT2_REALTYPE fp192;
fp192 = fp193 + fp373;
target[((hsi*60+39)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp197;
fp197 = fp420 * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = inteval->WP_y[vi] * src1[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->PA_y[vi] * src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp201 + fp200;
LIBINT2_REALTYPE fp198;
fp198 = fp199 + fp380;
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
target[((hsi*60+38)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp206;
fp206 = inteval->WP_y[vi] * src1[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = inteval->PA_y[vi] * src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp207 + fp206;
LIBINT2_REALTYPE fp204;
fp204 = fp205 + fp387;
LIBINT2_REALTYPE fp202;
fp202 = fp204 + fp203;
target[((hsi*60+37)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp209;
fp209 = fp449 * src4[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = inteval->WP_y[vi] * src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = inteval->PA_y[vi] * src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp213 + fp212;
LIBINT2_REALTYPE fp210;
fp210 = fp211 + fp394;
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
target[((hsi*60+36)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp216;
fp216 = inteval->WP_y[vi] * src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = inteval->PA_y[vi] * src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp217 + fp216;
LIBINT2_REALTYPE fp214;
fp214 = fp215 + fp403;
target[((hsi*60+35)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp219;
fp219 = fp420 * src4[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = inteval->WP_y[vi] * src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = inteval->PA_y[vi] * src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp223 + fp222;
LIBINT2_REALTYPE fp220;
fp220 = fp221 + fp412;
LIBINT2_REALTYPE fp218;
fp218 = fp220 + fp219;
target[((hsi*60+34)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp225;
fp225 = fp439 * src4[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = inteval->WP_y[vi] * src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->PA_y[vi] * src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp229 + fp228;
LIBINT2_REALTYPE fp226;
fp226 = fp227 + fp422;
LIBINT2_REALTYPE fp224;
fp224 = fp226 + fp225;
target[((hsi*60+33)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp232;
fp232 = inteval->WP_y[vi] * src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->PA_y[vi] * src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp233 + fp232;
LIBINT2_REALTYPE fp230;
fp230 = fp231 + fp431;
target[((hsi*60+32)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp238;
fp238 = inteval->WP_y[vi] * src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = inteval->PA_y[vi] * src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp239 + fp238;
LIBINT2_REALTYPE fp236;
fp236 = fp237 + fp441;
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
target[((hsi*60+31)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp142;
fp142 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp143 - fp142;
LIBINT2_REALTYPE fp140;
fp140 = 1.0000000000000000e+00 * fp141;
LIBINT2_REALTYPE fp145;
fp145 = fp439 * src4[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->WP_z[vi] * src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->PA_z[vi] * src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp148 + fp147;
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp139;
fp139 = fp144 + fp140;
target[((hsi*60+45)*1+lsi)*1] = fp139;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 458 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
