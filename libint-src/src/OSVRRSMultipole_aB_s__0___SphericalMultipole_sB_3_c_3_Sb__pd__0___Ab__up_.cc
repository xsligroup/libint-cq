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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_3_Sb__pd__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp321;
fp321 = 2.0000000000000000e+00 * src1[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = 0.0000000000000000e+00 + fp321;
LIBINT2_REALTYPE fp319;
fp319 = inteval->oo2z[vi] * fp320;
LIBINT2_REALTYPE fp322;
fp322 = inteval->PB_z[vi] * src0[((hsi*78+17)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = fp322 + fp319;
target[((hsi*91+24)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp316;
fp316 = 3.0000000000000000e+00 * src1[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = 0.0000000000000000e+00 + fp316;
LIBINT2_REALTYPE fp314;
fp314 = inteval->oo2z[vi] * fp315;
LIBINT2_REALTYPE fp317;
fp317 = inteval->PB_z[vi] * src0[((hsi*78+18)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp317 + fp314;
target[((hsi*91+25)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp311;
fp311 = 4.0000000000000000e+00 * src1[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = 0.0000000000000000e+00 + fp311;
LIBINT2_REALTYPE fp309;
fp309 = inteval->oo2z[vi] * fp310;
LIBINT2_REALTYPE fp312;
fp312 = inteval->PB_z[vi] * src0[((hsi*78+19)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp312 + fp309;
target[((hsi*91+26)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp306;
fp306 = 5.0000000000000000e+00 * src1[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = 0.0000000000000000e+00 + fp306;
LIBINT2_REALTYPE fp304;
fp304 = inteval->oo2z[vi] * fp305;
LIBINT2_REALTYPE fp307;
fp307 = inteval->PB_z[vi] * src0[((hsi*78+20)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp307 + fp304;
target[((hsi*91+27)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp299;
fp299 = 5.0000000000000000e-01 * src3[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = 6.0000000000000000e+00 * src1[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = 0.0000000000000000e+00 + fp301;
LIBINT2_REALTYPE fp298;
fp298 = fp300 + fp299;
LIBINT2_REALTYPE fp297;
fp297 = inteval->oo2z[vi] * fp298;
LIBINT2_REALTYPE fp302;
fp302 = inteval->PB_y[vi] * src0[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp302 + fp297;
target[((hsi*91+28)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp295;
fp295 = inteval->PB_z[vi] * src0[((hsi*78+21)*1+lsi)*1];
target[((hsi*91+29)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp293;
fp293 = 1.0000000000000000e+00 * src1[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = 0.0000000000000000e+00 + fp293;
LIBINT2_REALTYPE fp291;
fp291 = inteval->oo2z[vi] * fp292;
LIBINT2_REALTYPE fp294;
fp294 = inteval->PB_z[vi] * src0[((hsi*78+22)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp294 + fp291;
target[((hsi*91+30)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp288;
fp288 = 2.0000000000000000e+00 * src1[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = 0.0000000000000000e+00 + fp288;
LIBINT2_REALTYPE fp286;
fp286 = inteval->oo2z[vi] * fp287;
LIBINT2_REALTYPE fp289;
fp289 = inteval->PB_z[vi] * src0[((hsi*78+23)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp289 + fp286;
target[((hsi*91+31)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp283;
fp283 = 3.0000000000000000e+00 * src1[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = 0.0000000000000000e+00 + fp283;
LIBINT2_REALTYPE fp281;
fp281 = inteval->oo2z[vi] * fp282;
LIBINT2_REALTYPE fp284;
fp284 = inteval->PB_z[vi] * src0[((hsi*78+24)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp284 + fp281;
target[((hsi*91+32)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp278;
fp278 = 4.0000000000000000e+00 * src1[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = 0.0000000000000000e+00 + fp278;
LIBINT2_REALTYPE fp276;
fp276 = inteval->oo2z[vi] * fp277;
LIBINT2_REALTYPE fp279;
fp279 = inteval->PB_z[vi] * src0[((hsi*78+25)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp279 + fp276;
target[((hsi*91+33)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp427;
fp427 = 5.0000000000000000e-01 * src2[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp429;
fp429 = 1.1000000000000000e+01 * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
fp428 = 0.0000000000000000e+00 + fp429;
LIBINT2_REALTYPE fp426;
fp426 = fp428 - fp427;
LIBINT2_REALTYPE fp425;
fp425 = inteval->oo2z[vi] * fp426;
LIBINT2_REALTYPE fp430;
fp430 = inteval->PB_x[vi] * src0[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp424;
fp424 = fp430 + fp425;
target[((hsi*91+0)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp268;
fp268 = 6.0000000000000000e+00 * src1[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = 0.0000000000000000e+00 + fp268;
LIBINT2_REALTYPE fp266;
fp266 = inteval->oo2z[vi] * fp267;
LIBINT2_REALTYPE fp269;
fp269 = inteval->PB_z[vi] * src0[((hsi*78+27)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp269 + fp266;
target[((hsi*91+35)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp261;
fp261 = 5.0000000000000000e-01 * src3[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = 7.0000000000000000e+00 * src1[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = 0.0000000000000000e+00 + fp263;
LIBINT2_REALTYPE fp260;
fp260 = fp262 + fp261;
LIBINT2_REALTYPE fp259;
fp259 = inteval->oo2z[vi] * fp260;
LIBINT2_REALTYPE fp264;
fp264 = inteval->PB_y[vi] * src0[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp264 + fp259;
target[((hsi*91+36)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp257;
fp257 = inteval->PB_z[vi] * src0[((hsi*78+28)*1+lsi)*1];
target[((hsi*91+37)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp255;
fp255 = 1.0000000000000000e+00 * src1[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = 0.0000000000000000e+00 + fp255;
LIBINT2_REALTYPE fp253;
fp253 = inteval->oo2z[vi] * fp254;
LIBINT2_REALTYPE fp256;
fp256 = inteval->PB_z[vi] * src0[((hsi*78+29)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp256 + fp253;
target[((hsi*91+38)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp250;
fp250 = 2.0000000000000000e+00 * src1[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = 0.0000000000000000e+00 + fp250;
LIBINT2_REALTYPE fp248;
fp248 = inteval->oo2z[vi] * fp249;
LIBINT2_REALTYPE fp251;
fp251 = inteval->PB_z[vi] * src0[((hsi*78+30)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp251 + fp248;
target[((hsi*91+39)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp245;
fp245 = 3.0000000000000000e+00 * src1[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = 0.0000000000000000e+00 + fp245;
LIBINT2_REALTYPE fp243;
fp243 = inteval->oo2z[vi] * fp244;
LIBINT2_REALTYPE fp246;
fp246 = inteval->PB_z[vi] * src0[((hsi*78+31)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp246 + fp243;
target[((hsi*91+40)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp240;
fp240 = 4.0000000000000000e+00 * src1[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = 0.0000000000000000e+00 + fp240;
LIBINT2_REALTYPE fp238;
fp238 = inteval->oo2z[vi] * fp239;
LIBINT2_REALTYPE fp241;
fp241 = inteval->PB_z[vi] * src0[((hsi*78+32)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp241 + fp238;
target[((hsi*91+41)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp235;
fp235 = 5.0000000000000000e+00 * src1[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = 0.0000000000000000e+00 + fp235;
LIBINT2_REALTYPE fp233;
fp233 = inteval->oo2z[vi] * fp234;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PB_z[vi] * src0[((hsi*78+33)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp236 + fp233;
target[((hsi*91+42)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp230;
fp230 = 6.0000000000000000e+00 * src1[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = 0.0000000000000000e+00 + fp230;
LIBINT2_REALTYPE fp228;
fp228 = inteval->oo2z[vi] * fp229;
LIBINT2_REALTYPE fp231;
fp231 = inteval->PB_z[vi] * src0[((hsi*78+34)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp231 + fp228;
target[((hsi*91+43)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp225;
fp225 = 7.0000000000000000e+00 * src1[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = 0.0000000000000000e+00 + fp225;
LIBINT2_REALTYPE fp223;
fp223 = inteval->oo2z[vi] * fp224;
LIBINT2_REALTYPE fp226;
fp226 = inteval->PB_z[vi] * src0[((hsi*78+35)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp226 + fp223;
target[((hsi*91+44)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp273;
fp273 = 5.0000000000000000e+00 * src1[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = 0.0000000000000000e+00 + fp273;
LIBINT2_REALTYPE fp271;
fp271 = inteval->oo2z[vi] * fp272;
LIBINT2_REALTYPE fp274;
fp274 = inteval->PB_z[vi] * src0[((hsi*78+26)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp274 + fp271;
target[((hsi*91+34)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp422;
fp422 = 5.0000000000000000e-01 * src3[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp421;
fp421 = 0.0000000000000000e+00 + fp422;
LIBINT2_REALTYPE fp420;
fp420 = inteval->oo2z[vi] * fp421;
LIBINT2_REALTYPE fp423;
fp423 = inteval->PB_y[vi] * src0[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = fp423 + fp420;
target[((hsi*91+1)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp418;
fp418 = inteval->PB_z[vi] * src0[((hsi*78+0)*1+lsi)*1];
target[((hsi*91+2)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp414;
fp414 = 5.0000000000000000e-01 * src3[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp416;
fp416 = 1.0000000000000000e+00 * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp415;
fp415 = 0.0000000000000000e+00 + fp416;
LIBINT2_REALTYPE fp413;
fp413 = fp415 + fp414;
LIBINT2_REALTYPE fp412;
fp412 = inteval->oo2z[vi] * fp413;
LIBINT2_REALTYPE fp417;
fp417 = inteval->PB_y[vi] * src0[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = fp417 + fp412;
target[((hsi*91+3)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp410;
fp410 = inteval->PB_z[vi] * src0[((hsi*78+1)*1+lsi)*1];
target[((hsi*91+4)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp408;
fp408 = 1.0000000000000000e+00 * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp407;
fp407 = 0.0000000000000000e+00 + fp408;
LIBINT2_REALTYPE fp406;
fp406 = inteval->oo2z[vi] * fp407;
LIBINT2_REALTYPE fp409;
fp409 = inteval->PB_z[vi] * src0[((hsi*78+2)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = fp409 + fp406;
target[((hsi*91+5)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp401;
fp401 = 5.0000000000000000e-01 * src3[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = 2.0000000000000000e+00 * src1[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp402;
fp402 = 0.0000000000000000e+00 + fp403;
LIBINT2_REALTYPE fp400;
fp400 = fp402 + fp401;
LIBINT2_REALTYPE fp399;
fp399 = inteval->oo2z[vi] * fp400;
LIBINT2_REALTYPE fp404;
fp404 = inteval->PB_y[vi] * src0[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = fp404 + fp399;
target[((hsi*91+6)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp397;
fp397 = inteval->PB_z[vi] * src0[((hsi*78+3)*1+lsi)*1];
target[((hsi*91+7)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp395;
fp395 = 1.0000000000000000e+00 * src1[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp394;
fp394 = 0.0000000000000000e+00 + fp395;
LIBINT2_REALTYPE fp393;
fp393 = inteval->oo2z[vi] * fp394;
LIBINT2_REALTYPE fp396;
fp396 = inteval->PB_z[vi] * src0[((hsi*78+4)*1+lsi)*1];
LIBINT2_REALTYPE fp392;
fp392 = fp396 + fp393;
target[((hsi*91+8)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp390;
fp390 = 2.0000000000000000e+00 * src1[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp389;
fp389 = 0.0000000000000000e+00 + fp390;
LIBINT2_REALTYPE fp388;
fp388 = inteval->oo2z[vi] * fp389;
LIBINT2_REALTYPE fp391;
fp391 = inteval->PB_z[vi] * src0[((hsi*78+5)*1+lsi)*1];
LIBINT2_REALTYPE fp387;
fp387 = fp391 + fp388;
target[((hsi*91+9)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp383;
fp383 = 5.0000000000000000e-01 * src3[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = 3.0000000000000000e+00 * src1[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = 0.0000000000000000e+00 + fp385;
LIBINT2_REALTYPE fp382;
fp382 = fp384 + fp383;
LIBINT2_REALTYPE fp381;
fp381 = inteval->oo2z[vi] * fp382;
LIBINT2_REALTYPE fp386;
fp386 = inteval->PB_y[vi] * src0[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = fp386 + fp381;
target[((hsi*91+10)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp326;
fp326 = 1.0000000000000000e+00 * src1[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp325;
fp325 = 0.0000000000000000e+00 + fp326;
LIBINT2_REALTYPE fp324;
fp324 = inteval->oo2z[vi] * fp325;
LIBINT2_REALTYPE fp327;
fp327 = inteval->PB_z[vi] * src0[((hsi*78+16)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = fp327 + fp324;
target[((hsi*91+23)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp377;
fp377 = 1.0000000000000000e+00 * src1[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = 0.0000000000000000e+00 + fp377;
LIBINT2_REALTYPE fp375;
fp375 = inteval->oo2z[vi] * fp376;
LIBINT2_REALTYPE fp378;
fp378 = inteval->PB_z[vi] * src0[((hsi*78+7)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = fp378 + fp375;
target[((hsi*91+12)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp372;
fp372 = 2.0000000000000000e+00 * src1[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = 0.0000000000000000e+00 + fp372;
LIBINT2_REALTYPE fp370;
fp370 = inteval->oo2z[vi] * fp371;
LIBINT2_REALTYPE fp373;
fp373 = inteval->PB_z[vi] * src0[((hsi*78+8)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp373 + fp370;
target[((hsi*91+13)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp367;
fp367 = 3.0000000000000000e+00 * src1[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = 0.0000000000000000e+00 + fp367;
LIBINT2_REALTYPE fp365;
fp365 = inteval->oo2z[vi] * fp366;
LIBINT2_REALTYPE fp368;
fp368 = inteval->PB_z[vi] * src0[((hsi*78+9)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = fp368 + fp365;
target[((hsi*91+14)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp360;
fp360 = 5.0000000000000000e-01 * src3[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp362;
fp362 = 4.0000000000000000e+00 * src1[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = 0.0000000000000000e+00 + fp362;
LIBINT2_REALTYPE fp359;
fp359 = fp361 + fp360;
LIBINT2_REALTYPE fp358;
fp358 = inteval->oo2z[vi] * fp359;
LIBINT2_REALTYPE fp363;
fp363 = inteval->PB_y[vi] * src0[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = fp363 + fp358;
target[((hsi*91+15)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp356;
fp356 = inteval->PB_z[vi] * src0[((hsi*78+10)*1+lsi)*1];
target[((hsi*91+16)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp354;
fp354 = 1.0000000000000000e+00 * src1[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = 0.0000000000000000e+00 + fp354;
LIBINT2_REALTYPE fp352;
fp352 = inteval->oo2z[vi] * fp353;
LIBINT2_REALTYPE fp355;
fp355 = inteval->PB_z[vi] * src0[((hsi*78+11)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = fp355 + fp352;
target[((hsi*91+17)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp349;
fp349 = 2.0000000000000000e+00 * src1[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = 0.0000000000000000e+00 + fp349;
LIBINT2_REALTYPE fp347;
fp347 = inteval->oo2z[vi] * fp348;
LIBINT2_REALTYPE fp350;
fp350 = inteval->PB_z[vi] * src0[((hsi*78+12)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = fp350 + fp347;
target[((hsi*91+18)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp344;
fp344 = 3.0000000000000000e+00 * src1[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = 0.0000000000000000e+00 + fp344;
LIBINT2_REALTYPE fp342;
fp342 = inteval->oo2z[vi] * fp343;
LIBINT2_REALTYPE fp345;
fp345 = inteval->PB_z[vi] * src0[((hsi*78+13)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = fp345 + fp342;
target[((hsi*91+19)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp339;
fp339 = 4.0000000000000000e+00 * src1[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = 0.0000000000000000e+00 + fp339;
LIBINT2_REALTYPE fp337;
fp337 = inteval->oo2z[vi] * fp338;
LIBINT2_REALTYPE fp340;
fp340 = inteval->PB_z[vi] * src0[((hsi*78+14)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp340 + fp337;
target[((hsi*91+20)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp332;
fp332 = 5.0000000000000000e-01 * src3[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = 5.0000000000000000e+00 * src1[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = 0.0000000000000000e+00 + fp334;
LIBINT2_REALTYPE fp331;
fp331 = fp333 + fp332;
LIBINT2_REALTYPE fp330;
fp330 = inteval->oo2z[vi] * fp331;
LIBINT2_REALTYPE fp335;
fp335 = inteval->PB_y[vi] * src0[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = fp335 + fp330;
target[((hsi*91+21)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp328;
fp328 = inteval->PB_z[vi] * src0[((hsi*78+15)*1+lsi)*1];
target[((hsi*91+22)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp379;
fp379 = inteval->PB_z[vi] * src0[((hsi*78+6)*1+lsi)*1];
target[((hsi*91+11)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp106;
fp106 = 2.0000000000000000e+00 * src1[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + fp106;
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PB_z[vi] * src0[((hsi*78+57)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp107 + fp104;
target[((hsi*91+69)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp101;
fp101 = 3.0000000000000000e+00 * src1[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp101;
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PB_z[vi] * src0[((hsi*78+58)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp102 + fp99;
target[((hsi*91+70)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp96;
fp96 = 4.0000000000000000e+00 * src1[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + fp96;
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PB_z[vi] * src0[((hsi*78+59)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp97 + fp94;
target[((hsi*91+71)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp91;
fp91 = 5.0000000000000000e+00 * src1[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PB_z[vi] * src0[((hsi*78+60)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp92 + fp89;
target[((hsi*91+72)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = 6.0000000000000000e+00 * src1[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + fp86;
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PB_z[vi] * src0[((hsi*78+61)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp87 + fp84;
target[((hsi*91+73)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp81;
fp81 = 7.0000000000000000e+00 * src1[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp81;
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PB_z[vi] * src0[((hsi*78+62)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp82 + fp79;
target[((hsi*91+74)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp76;
fp76 = 8.0000000000000000e+00 * src1[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + fp76;
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp77;
fp77 = inteval->PB_z[vi] * src0[((hsi*78+63)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp77 + fp74;
target[((hsi*91+75)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp71;
fp71 = 9.0000000000000000e+00 * src1[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PB_z[vi] * src0[((hsi*78+64)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp72 + fp69;
target[((hsi*91+76)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp66;
fp66 = 1.0000000000000000e+01 * src1[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PB_z[vi] * src0[((hsi*78+65)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp67 + fp64;
target[((hsi*91+77)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp59;
fp59 = 5.0000000000000000e-01 * src3[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 1.1000000000000000e+01 * src1[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + fp61;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PB_y[vi] * src0[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp62 + fp57;
target[((hsi*91+78)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp218;
fp218 = 5.0000000000000000e-01 * src3[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = 8.0000000000000000e+00 * src1[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = 0.0000000000000000e+00 + fp220;
LIBINT2_REALTYPE fp217;
fp217 = fp219 + fp218;
LIBINT2_REALTYPE fp216;
fp216 = inteval->oo2z[vi] * fp217;
LIBINT2_REALTYPE fp221;
fp221 = inteval->PB_y[vi] * src0[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp221 + fp216;
target[((hsi*91+45)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src1[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + fp53;
LIBINT2_REALTYPE fp51;
fp51 = inteval->oo2z[vi] * fp52;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PB_z[vi] * src0[((hsi*78+67)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp54 + fp51;
target[((hsi*91+80)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp48;
fp48 = 2.0000000000000000e+00 * src1[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + fp48;
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PB_z[vi] * src0[((hsi*78+68)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp49 + fp46;
target[((hsi*91+81)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = 3.0000000000000000e+00 * src1[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + fp43;
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PB_z[vi] * src0[((hsi*78+69)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp44 + fp41;
target[((hsi*91+82)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp38;
fp38 = 4.0000000000000000e+00 * src1[((hsi*66+58)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PB_z[vi] * src0[((hsi*78+70)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp39 + fp36;
target[((hsi*91+83)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp33;
fp33 = 5.0000000000000000e+00 * src1[((hsi*66+59)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PB_z[vi] * src0[((hsi*78+71)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp34 + fp31;
target[((hsi*91+84)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
fp28 = 6.0000000000000000e+00 * src1[((hsi*66+60)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_z[vi] * src0[((hsi*78+72)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp29 + fp26;
target[((hsi*91+85)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp23;
fp23 = 7.0000000000000000e+00 * src1[((hsi*66+61)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + fp23;
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PB_z[vi] * src0[((hsi*78+73)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp24 + fp21;
target[((hsi*91+86)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
fp18 = 8.0000000000000000e+00 * src1[((hsi*66+62)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PB_z[vi] * src0[((hsi*78+74)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp19 + fp16;
target[((hsi*91+87)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = 9.0000000000000000e+00 * src1[((hsi*66+63)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + fp13;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PB_z[vi] * src0[((hsi*78+75)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp14 + fp11;
target[((hsi*91+88)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp8;
fp8 = 1.0000000000000000e+01 * src1[((hsi*66+64)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + fp8;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PB_z[vi] * src0[((hsi*78+76)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp9 + fp6;
target[((hsi*91+89)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp3;
fp3 = 1.1000000000000000e+01 * src1[((hsi*66+65)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + fp3;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PB_z[vi] * src0[((hsi*78+77)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*91+90)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp55;
fp55 = inteval->PB_z[vi] * src0[((hsi*78+66)*1+lsi)*1];
target[((hsi*91+79)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp214;
fp214 = inteval->PB_z[vi] * src0[((hsi*78+36)*1+lsi)*1];
target[((hsi*91+46)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp212;
fp212 = 1.0000000000000000e+00 * src1[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = 0.0000000000000000e+00 + fp212;
LIBINT2_REALTYPE fp210;
fp210 = inteval->oo2z[vi] * fp211;
LIBINT2_REALTYPE fp213;
fp213 = inteval->PB_z[vi] * src0[((hsi*78+37)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp213 + fp210;
target[((hsi*91+47)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp207;
fp207 = 2.0000000000000000e+00 * src1[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = 0.0000000000000000e+00 + fp207;
LIBINT2_REALTYPE fp205;
fp205 = inteval->oo2z[vi] * fp206;
LIBINT2_REALTYPE fp208;
fp208 = inteval->PB_z[vi] * src0[((hsi*78+38)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp208 + fp205;
target[((hsi*91+48)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp202;
fp202 = 3.0000000000000000e+00 * src1[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = 0.0000000000000000e+00 + fp202;
LIBINT2_REALTYPE fp200;
fp200 = inteval->oo2z[vi] * fp201;
LIBINT2_REALTYPE fp203;
fp203 = inteval->PB_z[vi] * src0[((hsi*78+39)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp203 + fp200;
target[((hsi*91+49)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp197;
fp197 = 4.0000000000000000e+00 * src1[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = 0.0000000000000000e+00 + fp197;
LIBINT2_REALTYPE fp195;
fp195 = inteval->oo2z[vi] * fp196;
LIBINT2_REALTYPE fp198;
fp198 = inteval->PB_z[vi] * src0[((hsi*78+40)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp198 + fp195;
target[((hsi*91+50)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp192;
fp192 = 5.0000000000000000e+00 * src1[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + fp192;
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp193;
fp193 = inteval->PB_z[vi] * src0[((hsi*78+41)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp193 + fp190;
target[((hsi*91+51)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp187;
fp187 = 6.0000000000000000e+00 * src1[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + fp187;
LIBINT2_REALTYPE fp185;
fp185 = inteval->oo2z[vi] * fp186;
LIBINT2_REALTYPE fp188;
fp188 = inteval->PB_z[vi] * src0[((hsi*78+42)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp188 + fp185;
target[((hsi*91+52)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp182;
fp182 = 7.0000000000000000e+00 * src1[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + fp182;
LIBINT2_REALTYPE fp180;
fp180 = inteval->oo2z[vi] * fp181;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PB_z[vi] * src0[((hsi*78+43)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp183 + fp180;
target[((hsi*91+53)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp177;
fp177 = 8.0000000000000000e+00 * src1[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + fp177;
LIBINT2_REALTYPE fp175;
fp175 = inteval->oo2z[vi] * fp176;
LIBINT2_REALTYPE fp178;
fp178 = inteval->PB_z[vi] * src0[((hsi*78+44)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp178 + fp175;
target[((hsi*91+54)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp170;
fp170 = 5.0000000000000000e-01 * src3[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = 9.0000000000000000e+00 * src1[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + fp172;
LIBINT2_REALTYPE fp169;
fp169 = fp171 + fp170;
LIBINT2_REALTYPE fp168;
fp168 = inteval->oo2z[vi] * fp169;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PB_y[vi] * src0[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp173 + fp168;
target[((hsi*91+55)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp111;
fp111 = 1.0000000000000000e+00 * src1[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + fp111;
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PB_z[vi] * src0[((hsi*78+56)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp112 + fp109;
target[((hsi*91+68)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp164;
fp164 = 1.0000000000000000e+00 * src1[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + fp164;
LIBINT2_REALTYPE fp162;
fp162 = inteval->oo2z[vi] * fp163;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PB_z[vi] * src0[((hsi*78+46)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp165 + fp162;
target[((hsi*91+57)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp159;
fp159 = 2.0000000000000000e+00 * src1[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + fp159;
LIBINT2_REALTYPE fp157;
fp157 = inteval->oo2z[vi] * fp158;
LIBINT2_REALTYPE fp160;
fp160 = inteval->PB_z[vi] * src0[((hsi*78+47)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp160 + fp157;
target[((hsi*91+58)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp154;
fp154 = 3.0000000000000000e+00 * src1[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + fp154;
LIBINT2_REALTYPE fp152;
fp152 = inteval->oo2z[vi] * fp153;
LIBINT2_REALTYPE fp155;
fp155 = inteval->PB_z[vi] * src0[((hsi*78+48)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp155 + fp152;
target[((hsi*91+59)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp149;
fp149 = 4.0000000000000000e+00 * src1[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + fp149;
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PB_z[vi] * src0[((hsi*78+49)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp150 + fp147;
target[((hsi*91+60)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp144;
fp144 = 5.0000000000000000e+00 * src1[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + fp144;
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp143;
LIBINT2_REALTYPE fp145;
fp145 = inteval->PB_z[vi] * src0[((hsi*78+50)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp145 + fp142;
target[((hsi*91+61)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp139;
fp139 = 6.0000000000000000e+00 * src1[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + fp139;
LIBINT2_REALTYPE fp137;
fp137 = inteval->oo2z[vi] * fp138;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PB_z[vi] * src0[((hsi*78+51)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp140 + fp137;
target[((hsi*91+62)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
fp134 = 7.0000000000000000e+00 * src1[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + fp134;
LIBINT2_REALTYPE fp132;
fp132 = inteval->oo2z[vi] * fp133;
LIBINT2_REALTYPE fp135;
fp135 = inteval->PB_z[vi] * src0[((hsi*78+52)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp135 + fp132;
target[((hsi*91+63)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp129;
fp129 = 8.0000000000000000e+00 * src1[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + fp129;
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PB_z[vi] * src0[((hsi*78+53)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp130 + fp127;
target[((hsi*91+64)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp124;
fp124 = 9.0000000000000000e+00 * src1[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + fp124;
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PB_z[vi] * src0[((hsi*78+54)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp125 + fp122;
target[((hsi*91+65)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp117;
fp117 = 5.0000000000000000e-01 * src3[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 1.0000000000000000e+01 * src1[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + fp119;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
LIBINT2_REALTYPE fp115;
fp115 = inteval->oo2z[vi] * fp116;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PB_y[vi] * src0[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp120 + fp115;
target[((hsi*91+66)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = inteval->PB_z[vi] * src0[((hsi*78+55)*1+lsi)*1];
target[((hsi*91+67)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PB_z[vi] * src0[((hsi*78+45)*1+lsi)*1];
target[((hsi*91+56)*1+lsi)*1] = fp166;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 431 */
}

#ifdef __cplusplus
};
#endif
