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
void OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp332;
fp332 = 5.0000000000000000e-01 * src4[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = 5.0000000000000000e+00 * src1[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = 0.0000000000000000e+00 + fp334;
LIBINT2_REALTYPE fp331;
fp331 = fp333 + fp332;
LIBINT2_REALTYPE fp330;
fp330 = inteval->oo2z[vi] * fp331;
LIBINT2_REALTYPE fp335;
fp335 = inteval->PA_y[vi] * src0[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = fp335 + fp330;
target[((hsi*78+21)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp327;
fp327 = 0.0000000000000000e+00 + src5[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = inteval->oo2z[vi] * fp327;
LIBINT2_REALTYPE fp328;
fp328 = inteval->PA_z[vi] * src0[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp325;
fp325 = fp328 + fp326;
target[((hsi*78+22)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp323;
fp323 = 1.0000000000000000e+00 * src1[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = 0.0000000000000000e+00 + fp323;
LIBINT2_REALTYPE fp321;
fp321 = fp322 + src5[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = inteval->oo2z[vi] * fp321;
LIBINT2_REALTYPE fp324;
fp324 = inteval->PA_z[vi] * src0[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp324 + fp320;
target[((hsi*78+23)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp317;
fp317 = 2.0000000000000000e+00 * src1[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = 0.0000000000000000e+00 + fp317;
LIBINT2_REALTYPE fp315;
fp315 = fp316 + src5[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = inteval->oo2z[vi] * fp315;
LIBINT2_REALTYPE fp318;
fp318 = inteval->PA_z[vi] * src0[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp318 + fp314;
target[((hsi*78+24)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp311;
fp311 = 3.0000000000000000e+00 * src1[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = 0.0000000000000000e+00 + fp311;
LIBINT2_REALTYPE fp309;
fp309 = fp310 + src5[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = inteval->oo2z[vi] * fp309;
LIBINT2_REALTYPE fp312;
fp312 = inteval->PA_z[vi] * src0[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = fp312 + fp308;
target[((hsi*78+25)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp305;
fp305 = 4.0000000000000000e+00 * src1[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = 0.0000000000000000e+00 + fp305;
LIBINT2_REALTYPE fp303;
fp303 = fp304 + src5[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = inteval->oo2z[vi] * fp303;
LIBINT2_REALTYPE fp306;
fp306 = inteval->PA_z[vi] * src0[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp306 + fp302;
target[((hsi*78+26)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp299;
fp299 = 5.0000000000000000e+00 * src1[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = 0.0000000000000000e+00 + fp299;
LIBINT2_REALTYPE fp297;
fp297 = fp298 + src5[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = inteval->oo2z[vi] * fp297;
LIBINT2_REALTYPE fp300;
fp300 = inteval->PA_z[vi] * src0[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp300 + fp296;
target[((hsi*78+27)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp291;
fp291 = 5.0000000000000000e-01 * src4[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = 6.0000000000000000e+00 * src1[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = 0.0000000000000000e+00 + fp293;
LIBINT2_REALTYPE fp290;
fp290 = fp292 + fp291;
LIBINT2_REALTYPE fp289;
fp289 = inteval->oo2z[vi] * fp290;
LIBINT2_REALTYPE fp294;
fp294 = inteval->PA_y[vi] * src0[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp294 + fp289;
target[((hsi*78+28)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp452;
fp452 = 5.0000000000000000e-01 * src3[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp454;
fp454 = 5.0000000000000000e-01 * src2[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp456;
fp456 = 1.0000000000000000e+01 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp455;
fp455 = 0.0000000000000000e+00 + fp456;
LIBINT2_REALTYPE fp453;
fp453 = fp455 + fp454;
LIBINT2_REALTYPE fp451;
fp451 = fp453 - fp452;
LIBINT2_REALTYPE fp450;
fp450 = inteval->oo2z[vi] * fp451;
LIBINT2_REALTYPE fp457;
fp457 = inteval->PA_x[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp449;
fp449 = fp457 + fp450;
target[((hsi*78+0)*1+lsi)*1] = fp449;
LIBINT2_REALTYPE fp282;
fp282 = 1.0000000000000000e+00 * src1[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = 0.0000000000000000e+00 + fp282;
LIBINT2_REALTYPE fp280;
fp280 = fp281 + src5[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = inteval->oo2z[vi] * fp280;
LIBINT2_REALTYPE fp283;
fp283 = inteval->PA_z[vi] * src0[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = fp283 + fp279;
target[((hsi*78+30)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp276;
fp276 = 2.0000000000000000e+00 * src1[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = 0.0000000000000000e+00 + fp276;
LIBINT2_REALTYPE fp274;
fp274 = fp275 + src5[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = inteval->oo2z[vi] * fp274;
LIBINT2_REALTYPE fp277;
fp277 = inteval->PA_z[vi] * src0[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp277 + fp273;
target[((hsi*78+31)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp270;
fp270 = 3.0000000000000000e+00 * src1[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = 0.0000000000000000e+00 + fp270;
LIBINT2_REALTYPE fp268;
fp268 = fp269 + src5[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = inteval->oo2z[vi] * fp268;
LIBINT2_REALTYPE fp271;
fp271 = inteval->PA_z[vi] * src0[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp271 + fp267;
target[((hsi*78+32)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp264;
fp264 = 4.0000000000000000e+00 * src1[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = 0.0000000000000000e+00 + fp264;
LIBINT2_REALTYPE fp262;
fp262 = fp263 + src5[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = inteval->oo2z[vi] * fp262;
LIBINT2_REALTYPE fp265;
fp265 = inteval->PA_z[vi] * src0[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp265 + fp261;
target[((hsi*78+33)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp258;
fp258 = 5.0000000000000000e+00 * src1[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = 0.0000000000000000e+00 + fp258;
LIBINT2_REALTYPE fp256;
fp256 = fp257 + src5[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = inteval->oo2z[vi] * fp256;
LIBINT2_REALTYPE fp259;
fp259 = inteval->PA_z[vi] * src0[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp259 + fp255;
target[((hsi*78+34)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp252;
fp252 = 6.0000000000000000e+00 * src1[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = 0.0000000000000000e+00 + fp252;
LIBINT2_REALTYPE fp250;
fp250 = fp251 + src5[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = inteval->oo2z[vi] * fp250;
LIBINT2_REALTYPE fp253;
fp253 = inteval->PA_z[vi] * src0[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = fp253 + fp249;
target[((hsi*78+35)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp244;
fp244 = 5.0000000000000000e-01 * src4[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = 7.0000000000000000e+00 * src1[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = 0.0000000000000000e+00 + fp246;
LIBINT2_REALTYPE fp243;
fp243 = fp245 + fp244;
LIBINT2_REALTYPE fp242;
fp242 = inteval->oo2z[vi] * fp243;
LIBINT2_REALTYPE fp247;
fp247 = inteval->PA_y[vi] * src0[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp247 + fp242;
target[((hsi*78+36)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp239;
fp239 = 0.0000000000000000e+00 + src5[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = inteval->oo2z[vi] * fp239;
LIBINT2_REALTYPE fp240;
fp240 = inteval->PA_z[vi] * src0[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp240 + fp238;
target[((hsi*78+37)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * src1[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = 0.0000000000000000e+00 + fp235;
LIBINT2_REALTYPE fp233;
fp233 = fp234 + src5[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->oo2z[vi] * fp233;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PA_z[vi] * src0[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp236 + fp232;
target[((hsi*78+38)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp286;
fp286 = 0.0000000000000000e+00 + src5[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = inteval->oo2z[vi] * fp286;
LIBINT2_REALTYPE fp287;
fp287 = inteval->PA_z[vi] * src0[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = fp287 + fp285;
target[((hsi*78+29)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp447;
fp447 = 5.0000000000000000e-01 * src4[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp446;
fp446 = 0.0000000000000000e+00 + fp447;
LIBINT2_REALTYPE fp445;
fp445 = inteval->oo2z[vi] * fp446;
LIBINT2_REALTYPE fp448;
fp448 = inteval->PA_y[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp444;
fp444 = fp448 + fp445;
target[((hsi*78+1)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp442;
fp442 = 0.0000000000000000e+00 + src5[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp441;
fp441 = inteval->oo2z[vi] * fp442;
LIBINT2_REALTYPE fp443;
fp443 = inteval->PA_z[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp440;
fp440 = fp443 + fp441;
target[((hsi*78+2)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp436;
fp436 = 5.0000000000000000e-01 * src4[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp438;
fp438 = 1.0000000000000000e+00 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp437;
fp437 = 0.0000000000000000e+00 + fp438;
LIBINT2_REALTYPE fp435;
fp435 = fp437 + fp436;
LIBINT2_REALTYPE fp434;
fp434 = inteval->oo2z[vi] * fp435;
LIBINT2_REALTYPE fp439;
fp439 = inteval->PA_y[vi] * src0[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp433;
fp433 = fp439 + fp434;
target[((hsi*78+3)*1+lsi)*1] = fp433;
LIBINT2_REALTYPE fp431;
fp431 = 0.0000000000000000e+00 + src5[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp430;
fp430 = inteval->oo2z[vi] * fp431;
LIBINT2_REALTYPE fp432;
fp432 = inteval->PA_z[vi] * src0[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp429;
fp429 = fp432 + fp430;
target[((hsi*78+4)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp427;
fp427 = 1.0000000000000000e+00 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp426;
fp426 = 0.0000000000000000e+00 + fp427;
LIBINT2_REALTYPE fp425;
fp425 = fp426 + src5[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp424;
fp424 = inteval->oo2z[vi] * fp425;
LIBINT2_REALTYPE fp428;
fp428 = inteval->PA_z[vi] * src0[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp423;
fp423 = fp428 + fp424;
target[((hsi*78+5)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp419;
fp419 = 5.0000000000000000e-01 * src4[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp421;
fp421 = 2.0000000000000000e+00 * src1[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp420;
fp420 = 0.0000000000000000e+00 + fp421;
LIBINT2_REALTYPE fp418;
fp418 = fp420 + fp419;
LIBINT2_REALTYPE fp417;
fp417 = inteval->oo2z[vi] * fp418;
LIBINT2_REALTYPE fp422;
fp422 = inteval->PA_y[vi] * src0[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp416;
fp416 = fp422 + fp417;
target[((hsi*78+6)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp414;
fp414 = 0.0000000000000000e+00 + src5[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp413;
fp413 = inteval->oo2z[vi] * fp414;
LIBINT2_REALTYPE fp415;
fp415 = inteval->PA_z[vi] * src0[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp412;
fp412 = fp415 + fp413;
target[((hsi*78+7)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp410;
fp410 = 1.0000000000000000e+00 * src1[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp409;
fp409 = 0.0000000000000000e+00 + fp410;
LIBINT2_REALTYPE fp408;
fp408 = fp409 + src5[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp407;
fp407 = inteval->oo2z[vi] * fp408;
LIBINT2_REALTYPE fp411;
fp411 = inteval->PA_z[vi] * src0[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp406;
fp406 = fp411 + fp407;
target[((hsi*78+8)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp404;
fp404 = 2.0000000000000000e+00 * src1[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = 0.0000000000000000e+00 + fp404;
LIBINT2_REALTYPE fp402;
fp402 = fp403 + src5[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp401;
fp401 = inteval->oo2z[vi] * fp402;
LIBINT2_REALTYPE fp405;
fp405 = inteval->PA_z[vi] * src0[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp400;
fp400 = fp405 + fp401;
target[((hsi*78+9)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp340;
fp340 = 4.0000000000000000e+00 * src1[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = 0.0000000000000000e+00 + fp340;
LIBINT2_REALTYPE fp338;
fp338 = fp339 + src5[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = inteval->oo2z[vi] * fp338;
LIBINT2_REALTYPE fp341;
fp341 = inteval->PA_z[vi] * src0[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp341 + fp337;
target[((hsi*78+20)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp391;
fp391 = 0.0000000000000000e+00 + src5[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = inteval->oo2z[vi] * fp391;
LIBINT2_REALTYPE fp392;
fp392 = inteval->PA_z[vi] * src0[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp389;
fp389 = fp392 + fp390;
target[((hsi*78+11)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp387;
fp387 = 1.0000000000000000e+00 * src1[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = 0.0000000000000000e+00 + fp387;
LIBINT2_REALTYPE fp385;
fp385 = fp386 + src5[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = inteval->oo2z[vi] * fp385;
LIBINT2_REALTYPE fp388;
fp388 = inteval->PA_z[vi] * src0[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = fp388 + fp384;
target[((hsi*78+12)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp381;
fp381 = 2.0000000000000000e+00 * src1[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = 0.0000000000000000e+00 + fp381;
LIBINT2_REALTYPE fp379;
fp379 = fp380 + src5[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
fp378 = inteval->oo2z[vi] * fp379;
LIBINT2_REALTYPE fp382;
fp382 = inteval->PA_z[vi] * src0[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = fp382 + fp378;
target[((hsi*78+13)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp375;
fp375 = 3.0000000000000000e+00 * src1[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = 0.0000000000000000e+00 + fp375;
LIBINT2_REALTYPE fp373;
fp373 = fp374 + src5[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = inteval->oo2z[vi] * fp373;
LIBINT2_REALTYPE fp376;
fp376 = inteval->PA_z[vi] * src0[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = fp376 + fp372;
target[((hsi*78+14)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp367;
fp367 = 5.0000000000000000e-01 * src4[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = 4.0000000000000000e+00 * src1[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = 0.0000000000000000e+00 + fp369;
LIBINT2_REALTYPE fp366;
fp366 = fp368 + fp367;
LIBINT2_REALTYPE fp365;
fp365 = inteval->oo2z[vi] * fp366;
LIBINT2_REALTYPE fp370;
fp370 = inteval->PA_y[vi] * src0[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = fp370 + fp365;
target[((hsi*78+15)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp362;
fp362 = 0.0000000000000000e+00 + src5[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = inteval->oo2z[vi] * fp362;
LIBINT2_REALTYPE fp363;
fp363 = inteval->PA_z[vi] * src0[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = fp363 + fp361;
target[((hsi*78+16)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp358;
fp358 = 1.0000000000000000e+00 * src1[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = 0.0000000000000000e+00 + fp358;
LIBINT2_REALTYPE fp356;
fp356 = fp357 + src5[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = inteval->oo2z[vi] * fp356;
LIBINT2_REALTYPE fp359;
fp359 = inteval->PA_z[vi] * src0[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp359 + fp355;
target[((hsi*78+17)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp352;
fp352 = 2.0000000000000000e+00 * src1[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = 0.0000000000000000e+00 + fp352;
LIBINT2_REALTYPE fp350;
fp350 = fp351 + src5[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = inteval->oo2z[vi] * fp350;
LIBINT2_REALTYPE fp353;
fp353 = inteval->PA_z[vi] * src0[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp353 + fp349;
target[((hsi*78+18)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp346;
fp346 = 3.0000000000000000e+00 * src1[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = 0.0000000000000000e+00 + fp346;
LIBINT2_REALTYPE fp344;
fp344 = fp345 + src5[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = inteval->oo2z[vi] * fp344;
LIBINT2_REALTYPE fp347;
fp347 = inteval->PA_z[vi] * src0[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = fp347 + fp343;
target[((hsi*78+19)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp396;
fp396 = 5.0000000000000000e-01 * src4[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = 3.0000000000000000e+00 * src1[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp397;
fp397 = 0.0000000000000000e+00 + fp398;
LIBINT2_REALTYPE fp395;
fp395 = fp397 + fp396;
LIBINT2_REALTYPE fp394;
fp394 = inteval->oo2z[vi] * fp395;
LIBINT2_REALTYPE fp399;
fp399 = inteval->PA_y[vi] * src0[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp393;
fp393 = fp399 + fp394;
target[((hsi*78+10)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp105;
fp105 = 4.0000000000000000e+00 * src1[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + fp105;
LIBINT2_REALTYPE fp103;
fp103 = fp104 + src5[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PA_z[vi] * src0[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp106 + fp102;
target[((hsi*78+60)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp99;
fp99 = 5.0000000000000000e+00 * src1[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + fp99;
LIBINT2_REALTYPE fp97;
fp97 = fp98 + src5[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->oo2z[vi] * fp97;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PA_z[vi] * src0[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp100 + fp96;
target[((hsi*78+61)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp93;
fp93 = 6.0000000000000000e+00 * src1[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + fp93;
LIBINT2_REALTYPE fp91;
fp91 = fp92 + src5[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->oo2z[vi] * fp91;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_z[vi] * src0[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp94 + fp90;
target[((hsi*78+62)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp87;
fp87 = 7.0000000000000000e+00 * src1[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + fp87;
LIBINT2_REALTYPE fp85;
fp85 = fp86 + src5[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PA_z[vi] * src0[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp88 + fp84;
target[((hsi*78+63)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp81;
fp81 = 8.0000000000000000e+00 * src1[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp81;
LIBINT2_REALTYPE fp79;
fp79 = fp80 + src5[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2z[vi] * fp79;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_z[vi] * src0[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp82 + fp78;
target[((hsi*78+64)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp75;
fp75 = 9.0000000000000000e+00 * src1[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + fp75;
LIBINT2_REALTYPE fp73;
fp73 = fp74 + src5[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp76;
fp76 = inteval->PA_z[vi] * src0[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp76 + fp72;
target[((hsi*78+65)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp67;
fp67 = 5.0000000000000000e-01 * src4[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+01 * src1[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PA_y[vi] * src0[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp70 + fp65;
target[((hsi*78+66)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src5[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_z[vi] * src0[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
target[((hsi*78+67)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp229;
fp229 = 2.0000000000000000e+00 * src1[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = 0.0000000000000000e+00 + fp229;
LIBINT2_REALTYPE fp227;
fp227 = fp228 + src5[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = inteval->oo2z[vi] * fp227;
LIBINT2_REALTYPE fp230;
fp230 = inteval->PA_z[vi] * src0[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp230 + fp226;
target[((hsi*78+39)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp52;
fp52 = 2.0000000000000000e+00 * src1[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + fp52;
LIBINT2_REALTYPE fp50;
fp50 = fp51 + src5[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * src0[((hsi*66+57)*1+lsi)*1];
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
fp47 = inteval->PA_z[vi] * src0[((hsi*66+58)*1+lsi)*1];
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
fp41 = inteval->PA_z[vi] * src0[((hsi*66+59)*1+lsi)*1];
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
fp35 = inteval->PA_z[vi] * src0[((hsi*66+60)*1+lsi)*1];
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
fp29 = inteval->PA_z[vi] * src0[((hsi*66+61)*1+lsi)*1];
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
fp23 = inteval->PA_z[vi] * src0[((hsi*66+62)*1+lsi)*1];
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
fp17 = inteval->PA_z[vi] * src0[((hsi*66+63)*1+lsi)*1];
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
fp11 = inteval->PA_z[vi] * src0[((hsi*66+64)*1+lsi)*1];
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
fp5 = inteval->PA_z[vi] * src0[((hsi*66+65)*1+lsi)*1];
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
fp59 = inteval->PA_z[vi] * src0[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp59 + fp55;
target[((hsi*78+68)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp223;
fp223 = 3.0000000000000000e+00 * src1[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = 0.0000000000000000e+00 + fp223;
LIBINT2_REALTYPE fp221;
fp221 = fp222 + src5[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = inteval->oo2z[vi] * fp221;
LIBINT2_REALTYPE fp224;
fp224 = inteval->PA_z[vi] * src0[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp224 + fp220;
target[((hsi*78+40)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp217;
fp217 = 4.0000000000000000e+00 * src1[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = 0.0000000000000000e+00 + fp217;
LIBINT2_REALTYPE fp215;
fp215 = fp216 + src5[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = inteval->oo2z[vi] * fp215;
LIBINT2_REALTYPE fp218;
fp218 = inteval->PA_z[vi] * src0[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp218 + fp214;
target[((hsi*78+41)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp211;
fp211 = 5.0000000000000000e+00 * src1[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = 0.0000000000000000e+00 + fp211;
LIBINT2_REALTYPE fp209;
fp209 = fp210 + src5[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp212;
fp212 = inteval->PA_z[vi] * src0[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp212 + fp208;
target[((hsi*78+42)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp205;
fp205 = 6.0000000000000000e+00 * src1[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + fp205;
LIBINT2_REALTYPE fp203;
fp203 = fp204 + src5[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp203;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PA_z[vi] * src0[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp206 + fp202;
target[((hsi*78+43)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp199;
fp199 = 7.0000000000000000e+00 * src1[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = 0.0000000000000000e+00 + fp199;
LIBINT2_REALTYPE fp197;
fp197 = fp198 + src5[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp200;
fp200 = inteval->PA_z[vi] * src0[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp200 + fp196;
target[((hsi*78+44)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp191;
fp191 = 5.0000000000000000e-01 * src4[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = 8.0000000000000000e+00 * src1[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + fp193;
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
LIBINT2_REALTYPE fp189;
fp189 = inteval->oo2z[vi] * fp190;
LIBINT2_REALTYPE fp194;
fp194 = inteval->PA_y[vi] * src0[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp194 + fp189;
target[((hsi*78+45)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + src5[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->oo2z[vi] * fp186;
LIBINT2_REALTYPE fp187;
fp187 = inteval->PA_z[vi] * src0[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
target[((hsi*78+46)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp182;
fp182 = 1.0000000000000000e+00 * src1[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + fp182;
LIBINT2_REALTYPE fp180;
fp180 = fp181 + src5[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->oo2z[vi] * fp180;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_z[vi] * src0[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp183 + fp179;
target[((hsi*78+47)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp176;
fp176 = 2.0000000000000000e+00 * src1[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + fp176;
LIBINT2_REALTYPE fp174;
fp174 = fp175 + src5[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->oo2z[vi] * fp174;
LIBINT2_REALTYPE fp177;
fp177 = inteval->PA_z[vi] * src0[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp177 + fp173;
target[((hsi*78+48)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp111;
fp111 = 3.0000000000000000e+00 * src1[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + fp111;
LIBINT2_REALTYPE fp109;
fp109 = fp110 + src5[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->oo2z[vi] * fp109;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PA_z[vi] * src0[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp112 + fp108;
target[((hsi*78+59)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp164;
fp164 = 4.0000000000000000e+00 * src1[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + fp164;
LIBINT2_REALTYPE fp162;
fp162 = fp163 + src5[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->oo2z[vi] * fp162;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_z[vi] * src0[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp165 + fp161;
target[((hsi*78+50)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp158;
fp158 = 5.0000000000000000e+00 * src1[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + fp158;
LIBINT2_REALTYPE fp156;
fp156 = fp157 + src5[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = inteval->oo2z[vi] * fp156;
LIBINT2_REALTYPE fp159;
fp159 = inteval->PA_z[vi] * src0[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp159 + fp155;
target[((hsi*78+51)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp152;
fp152 = 6.0000000000000000e+00 * src1[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + fp152;
LIBINT2_REALTYPE fp150;
fp150 = fp151 + src5[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->oo2z[vi] * fp150;
LIBINT2_REALTYPE fp153;
fp153 = inteval->PA_z[vi] * src0[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp153 + fp149;
target[((hsi*78+52)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp146;
fp146 = 7.0000000000000000e+00 * src1[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + fp146;
LIBINT2_REALTYPE fp144;
fp144 = fp145 + src5[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->oo2z[vi] * fp144;
LIBINT2_REALTYPE fp147;
fp147 = inteval->PA_z[vi] * src0[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp147 + fp143;
target[((hsi*78+53)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp140;
fp140 = 8.0000000000000000e+00 * src1[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + fp140;
LIBINT2_REALTYPE fp138;
fp138 = fp139 + src5[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->oo2z[vi] * fp138;
LIBINT2_REALTYPE fp141;
fp141 = inteval->PA_z[vi] * src0[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp141 + fp137;
target[((hsi*78+54)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp132;
fp132 = 5.0000000000000000e-01 * src4[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = 9.0000000000000000e+00 * src1[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + fp134;
LIBINT2_REALTYPE fp131;
fp131 = fp133 + fp132;
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp135;
fp135 = inteval->PA_y[vi] * src0[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp135 + fp130;
target[((hsi*78+55)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src5[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->oo2z[vi] * fp127;
LIBINT2_REALTYPE fp128;
fp128 = inteval->PA_z[vi] * src0[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp128 + fp126;
target[((hsi*78+56)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * src1[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + fp123;
LIBINT2_REALTYPE fp121;
fp121 = fp122 + src5[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->oo2z[vi] * fp121;
LIBINT2_REALTYPE fp124;
fp124 = inteval->PA_z[vi] * src0[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp124 + fp120;
target[((hsi*78+57)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp117;
fp117 = 2.0000000000000000e+00 * src1[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + fp117;
LIBINT2_REALTYPE fp115;
fp115 = fp116 + src5[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->oo2z[vi] * fp115;
LIBINT2_REALTYPE fp118;
fp118 = inteval->PA_z[vi] * src0[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp118 + fp114;
target[((hsi*78+58)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp170;
fp170 = 3.0000000000000000e+00 * src1[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + fp170;
LIBINT2_REALTYPE fp168;
fp168 = fp169 + src5[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->oo2z[vi] * fp168;
LIBINT2_REALTYPE fp171;
fp171 = inteval->PA_z[vi] * src0[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp171 + fp167;
target[((hsi*78+49)*1+lsi)*1] = fp166;
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
#endif
