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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_0_c_0_Sb__pd__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp309;
fp309 = 2.0000000000000000e+00 * src1[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = 0.0000000000000000e+00 + fp309;
LIBINT2_REALTYPE fp307;
fp307 = inteval->oo2z[vi] * fp308;
LIBINT2_REALTYPE fp310;
fp310 = inteval->PB_z[vi] * src0[((hsi*78+17)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = fp310 + fp307;
target[((hsi*91+24)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp304;
fp304 = 3.0000000000000000e+00 * src1[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = 0.0000000000000000e+00 + fp304;
LIBINT2_REALTYPE fp302;
fp302 = inteval->oo2z[vi] * fp303;
LIBINT2_REALTYPE fp305;
fp305 = inteval->PB_z[vi] * src0[((hsi*78+18)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp305 + fp302;
target[((hsi*91+25)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp299;
fp299 = 4.0000000000000000e+00 * src1[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = 0.0000000000000000e+00 + fp299;
LIBINT2_REALTYPE fp297;
fp297 = inteval->oo2z[vi] * fp298;
LIBINT2_REALTYPE fp300;
fp300 = inteval->PB_z[vi] * src0[((hsi*78+19)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp300 + fp297;
target[((hsi*91+26)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp294;
fp294 = 5.0000000000000000e+00 * src1[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = 0.0000000000000000e+00 + fp294;
LIBINT2_REALTYPE fp292;
fp292 = inteval->oo2z[vi] * fp293;
LIBINT2_REALTYPE fp295;
fp295 = inteval->PB_z[vi] * src0[((hsi*78+20)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp295 + fp292;
target[((hsi*91+27)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp289;
fp289 = 6.0000000000000000e+00 * src1[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = 0.0000000000000000e+00 + fp289;
LIBINT2_REALTYPE fp287;
fp287 = inteval->oo2z[vi] * fp288;
LIBINT2_REALTYPE fp290;
fp290 = inteval->PB_y[vi] * src0[((hsi*78+21)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp290 + fp287;
target[((hsi*91+28)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp285;
fp285 = inteval->PB_z[vi] * src0[((hsi*78+21)*1+lsi)*1];
target[((hsi*91+29)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp283;
fp283 = 1.0000000000000000e+00 * src1[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = 0.0000000000000000e+00 + fp283;
LIBINT2_REALTYPE fp281;
fp281 = inteval->oo2z[vi] * fp282;
LIBINT2_REALTYPE fp284;
fp284 = inteval->PB_z[vi] * src0[((hsi*78+22)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp284 + fp281;
target[((hsi*91+30)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp278;
fp278 = 2.0000000000000000e+00 * src1[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = 0.0000000000000000e+00 + fp278;
LIBINT2_REALTYPE fp276;
fp276 = inteval->oo2z[vi] * fp277;
LIBINT2_REALTYPE fp279;
fp279 = inteval->PB_z[vi] * src0[((hsi*78+23)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp279 + fp276;
target[((hsi*91+31)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp273;
fp273 = 3.0000000000000000e+00 * src1[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = 0.0000000000000000e+00 + fp273;
LIBINT2_REALTYPE fp271;
fp271 = inteval->oo2z[vi] * fp272;
LIBINT2_REALTYPE fp274;
fp274 = inteval->PB_z[vi] * src0[((hsi*78+24)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp274 + fp271;
target[((hsi*91+32)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp268;
fp268 = 4.0000000000000000e+00 * src1[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = 0.0000000000000000e+00 + fp268;
LIBINT2_REALTYPE fp266;
fp266 = inteval->oo2z[vi] * fp267;
LIBINT2_REALTYPE fp269;
fp269 = inteval->PB_z[vi] * src0[((hsi*78+25)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp269 + fp266;
target[((hsi*91+33)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp401;
fp401 = 1.1000000000000000e+01 * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp400;
fp400 = 0.0000000000000000e+00 + fp401;
LIBINT2_REALTYPE fp399;
fp399 = inteval->oo2z[vi] * fp400;
LIBINT2_REALTYPE fp402;
fp402 = inteval->PB_x[vi] * src0[((hsi*78+0)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = fp402 + fp399;
target[((hsi*91+0)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp258;
fp258 = 6.0000000000000000e+00 * src1[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = 0.0000000000000000e+00 + fp258;
LIBINT2_REALTYPE fp256;
fp256 = inteval->oo2z[vi] * fp257;
LIBINT2_REALTYPE fp259;
fp259 = inteval->PB_z[vi] * src0[((hsi*78+27)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = fp259 + fp256;
target[((hsi*91+35)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp253;
fp253 = 7.0000000000000000e+00 * src1[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = 0.0000000000000000e+00 + fp253;
LIBINT2_REALTYPE fp251;
fp251 = inteval->oo2z[vi] * fp252;
LIBINT2_REALTYPE fp254;
fp254 = inteval->PB_y[vi] * src0[((hsi*78+28)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp254 + fp251;
target[((hsi*91+36)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp249;
fp249 = inteval->PB_z[vi] * src0[((hsi*78+28)*1+lsi)*1];
target[((hsi*91+37)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp247;
fp247 = 1.0000000000000000e+00 * src1[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = 0.0000000000000000e+00 + fp247;
LIBINT2_REALTYPE fp245;
fp245 = inteval->oo2z[vi] * fp246;
LIBINT2_REALTYPE fp248;
fp248 = inteval->PB_z[vi] * src0[((hsi*78+29)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp248 + fp245;
target[((hsi*91+38)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp242;
fp242 = 2.0000000000000000e+00 * src1[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = 0.0000000000000000e+00 + fp242;
LIBINT2_REALTYPE fp240;
fp240 = inteval->oo2z[vi] * fp241;
LIBINT2_REALTYPE fp243;
fp243 = inteval->PB_z[vi] * src0[((hsi*78+30)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp243 + fp240;
target[((hsi*91+39)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp237;
fp237 = 3.0000000000000000e+00 * src1[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = 0.0000000000000000e+00 + fp237;
LIBINT2_REALTYPE fp235;
fp235 = inteval->oo2z[vi] * fp236;
LIBINT2_REALTYPE fp238;
fp238 = inteval->PB_z[vi] * src0[((hsi*78+31)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp238 + fp235;
target[((hsi*91+40)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp232;
fp232 = 4.0000000000000000e+00 * src1[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = 0.0000000000000000e+00 + fp232;
LIBINT2_REALTYPE fp230;
fp230 = inteval->oo2z[vi] * fp231;
LIBINT2_REALTYPE fp233;
fp233 = inteval->PB_z[vi] * src0[((hsi*78+32)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp233 + fp230;
target[((hsi*91+41)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp227;
fp227 = 5.0000000000000000e+00 * src1[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = 0.0000000000000000e+00 + fp227;
LIBINT2_REALTYPE fp225;
fp225 = inteval->oo2z[vi] * fp226;
LIBINT2_REALTYPE fp228;
fp228 = inteval->PB_z[vi] * src0[((hsi*78+33)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp228 + fp225;
target[((hsi*91+42)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp222;
fp222 = 6.0000000000000000e+00 * src1[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = 0.0000000000000000e+00 + fp222;
LIBINT2_REALTYPE fp220;
fp220 = inteval->oo2z[vi] * fp221;
LIBINT2_REALTYPE fp223;
fp223 = inteval->PB_z[vi] * src0[((hsi*78+34)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp223 + fp220;
target[((hsi*91+43)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp217;
fp217 = 7.0000000000000000e+00 * src1[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = 0.0000000000000000e+00 + fp217;
LIBINT2_REALTYPE fp215;
fp215 = inteval->oo2z[vi] * fp216;
LIBINT2_REALTYPE fp218;
fp218 = inteval->PB_z[vi] * src0[((hsi*78+35)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp218 + fp215;
target[((hsi*91+44)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp263;
fp263 = 5.0000000000000000e+00 * src1[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = 0.0000000000000000e+00 + fp263;
LIBINT2_REALTYPE fp261;
fp261 = inteval->oo2z[vi] * fp262;
LIBINT2_REALTYPE fp264;
fp264 = inteval->PB_z[vi] * src0[((hsi*78+26)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp264 + fp261;
target[((hsi*91+34)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp397;
fp397 = inteval->PB_y[vi] * src0[((hsi*78+0)*1+lsi)*1];
target[((hsi*91+1)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp396;
fp396 = inteval->PB_z[vi] * src0[((hsi*78+0)*1+lsi)*1];
target[((hsi*91+2)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp394;
fp394 = 1.0000000000000000e+00 * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp393;
fp393 = 0.0000000000000000e+00 + fp394;
LIBINT2_REALTYPE fp392;
fp392 = inteval->oo2z[vi] * fp393;
LIBINT2_REALTYPE fp395;
fp395 = inteval->PB_y[vi] * src0[((hsi*78+1)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = fp395 + fp392;
target[((hsi*91+3)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp390;
fp390 = inteval->PB_z[vi] * src0[((hsi*78+1)*1+lsi)*1];
target[((hsi*91+4)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp388;
fp388 = 1.0000000000000000e+00 * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp387;
fp387 = 0.0000000000000000e+00 + fp388;
LIBINT2_REALTYPE fp386;
fp386 = inteval->oo2z[vi] * fp387;
LIBINT2_REALTYPE fp389;
fp389 = inteval->PB_z[vi] * src0[((hsi*78+2)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = fp389 + fp386;
target[((hsi*91+5)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp383;
fp383 = 2.0000000000000000e+00 * src1[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = 0.0000000000000000e+00 + fp383;
LIBINT2_REALTYPE fp381;
fp381 = inteval->oo2z[vi] * fp382;
LIBINT2_REALTYPE fp384;
fp384 = inteval->PB_y[vi] * src0[((hsi*78+3)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = fp384 + fp381;
target[((hsi*91+6)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp379;
fp379 = inteval->PB_z[vi] * src0[((hsi*78+3)*1+lsi)*1];
target[((hsi*91+7)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp377;
fp377 = 1.0000000000000000e+00 * src1[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = 0.0000000000000000e+00 + fp377;
LIBINT2_REALTYPE fp375;
fp375 = inteval->oo2z[vi] * fp376;
LIBINT2_REALTYPE fp378;
fp378 = inteval->PB_z[vi] * src0[((hsi*78+4)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = fp378 + fp375;
target[((hsi*91+8)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp372;
fp372 = 2.0000000000000000e+00 * src1[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = 0.0000000000000000e+00 + fp372;
LIBINT2_REALTYPE fp370;
fp370 = inteval->oo2z[vi] * fp371;
LIBINT2_REALTYPE fp373;
fp373 = inteval->PB_z[vi] * src0[((hsi*78+5)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp373 + fp370;
target[((hsi*91+9)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp367;
fp367 = 3.0000000000000000e+00 * src1[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = 0.0000000000000000e+00 + fp367;
LIBINT2_REALTYPE fp365;
fp365 = inteval->oo2z[vi] * fp366;
LIBINT2_REALTYPE fp368;
fp368 = inteval->PB_y[vi] * src0[((hsi*78+6)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = fp368 + fp365;
target[((hsi*91+10)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp314;
fp314 = 1.0000000000000000e+00 * src1[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = 0.0000000000000000e+00 + fp314;
LIBINT2_REALTYPE fp312;
fp312 = inteval->oo2z[vi] * fp313;
LIBINT2_REALTYPE fp315;
fp315 = inteval->PB_z[vi] * src0[((hsi*78+16)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = fp315 + fp312;
target[((hsi*91+23)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp361;
fp361 = 1.0000000000000000e+00 * src1[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = 0.0000000000000000e+00 + fp361;
LIBINT2_REALTYPE fp359;
fp359 = inteval->oo2z[vi] * fp360;
LIBINT2_REALTYPE fp362;
fp362 = inteval->PB_z[vi] * src0[((hsi*78+7)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = fp362 + fp359;
target[((hsi*91+12)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp356;
fp356 = 2.0000000000000000e+00 * src1[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = 0.0000000000000000e+00 + fp356;
LIBINT2_REALTYPE fp354;
fp354 = inteval->oo2z[vi] * fp355;
LIBINT2_REALTYPE fp357;
fp357 = inteval->PB_z[vi] * src0[((hsi*78+8)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = fp357 + fp354;
target[((hsi*91+13)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp351;
fp351 = 3.0000000000000000e+00 * src1[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = 0.0000000000000000e+00 + fp351;
LIBINT2_REALTYPE fp349;
fp349 = inteval->oo2z[vi] * fp350;
LIBINT2_REALTYPE fp352;
fp352 = inteval->PB_z[vi] * src0[((hsi*78+9)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp352 + fp349;
target[((hsi*91+14)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp346;
fp346 = 4.0000000000000000e+00 * src1[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = 0.0000000000000000e+00 + fp346;
LIBINT2_REALTYPE fp344;
fp344 = inteval->oo2z[vi] * fp345;
LIBINT2_REALTYPE fp347;
fp347 = inteval->PB_y[vi] * src0[((hsi*78+10)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = fp347 + fp344;
target[((hsi*91+15)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp342;
fp342 = inteval->PB_z[vi] * src0[((hsi*78+10)*1+lsi)*1];
target[((hsi*91+16)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp340;
fp340 = 1.0000000000000000e+00 * src1[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = 0.0000000000000000e+00 + fp340;
LIBINT2_REALTYPE fp338;
fp338 = inteval->oo2z[vi] * fp339;
LIBINT2_REALTYPE fp341;
fp341 = inteval->PB_z[vi] * src0[((hsi*78+11)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = fp341 + fp338;
target[((hsi*91+17)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp335;
fp335 = 2.0000000000000000e+00 * src1[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = 0.0000000000000000e+00 + fp335;
LIBINT2_REALTYPE fp333;
fp333 = inteval->oo2z[vi] * fp334;
LIBINT2_REALTYPE fp336;
fp336 = inteval->PB_z[vi] * src0[((hsi*78+12)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = fp336 + fp333;
target[((hsi*91+18)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp330;
fp330 = 3.0000000000000000e+00 * src1[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = 0.0000000000000000e+00 + fp330;
LIBINT2_REALTYPE fp328;
fp328 = inteval->oo2z[vi] * fp329;
LIBINT2_REALTYPE fp331;
fp331 = inteval->PB_z[vi] * src0[((hsi*78+13)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = fp331 + fp328;
target[((hsi*91+19)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp325;
fp325 = 4.0000000000000000e+00 * src1[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = 0.0000000000000000e+00 + fp325;
LIBINT2_REALTYPE fp323;
fp323 = inteval->oo2z[vi] * fp324;
LIBINT2_REALTYPE fp326;
fp326 = inteval->PB_z[vi] * src0[((hsi*78+14)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = fp326 + fp323;
target[((hsi*91+20)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp320;
fp320 = 5.0000000000000000e+00 * src1[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = 0.0000000000000000e+00 + fp320;
LIBINT2_REALTYPE fp318;
fp318 = inteval->oo2z[vi] * fp319;
LIBINT2_REALTYPE fp321;
fp321 = inteval->PB_y[vi] * src0[((hsi*78+15)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = fp321 + fp318;
target[((hsi*91+21)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp316;
fp316 = inteval->PB_z[vi] * src0[((hsi*78+15)*1+lsi)*1];
target[((hsi*91+22)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp363;
fp363 = inteval->PB_z[vi] * src0[((hsi*78+6)*1+lsi)*1];
target[((hsi*91+11)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp104;
fp104 = 2.0000000000000000e+00 * src1[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + fp104;
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp105;
fp105 = inteval->PB_z[vi] * src0[((hsi*78+57)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp105 + fp102;
target[((hsi*91+69)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp99;
fp99 = 3.0000000000000000e+00 * src1[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + fp99;
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PB_z[vi] * src0[((hsi*78+58)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp100 + fp97;
target[((hsi*91+70)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp94;
fp94 = 4.0000000000000000e+00 * src1[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + fp94;
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp95;
fp95 = inteval->PB_z[vi] * src0[((hsi*78+59)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp95 + fp92;
target[((hsi*91+71)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp89;
fp89 = 5.0000000000000000e+00 * src1[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + fp89;
LIBINT2_REALTYPE fp87;
fp87 = inteval->oo2z[vi] * fp88;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PB_z[vi] * src0[((hsi*78+60)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp90 + fp87;
target[((hsi*91+72)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp84;
fp84 = 6.0000000000000000e+00 * src1[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + fp84;
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PB_z[vi] * src0[((hsi*78+61)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp85 + fp82;
target[((hsi*91+73)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp79;
fp79 = 7.0000000000000000e+00 * src1[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp80;
fp80 = inteval->PB_z[vi] * src0[((hsi*78+62)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp80 + fp77;
target[((hsi*91+74)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp74;
fp74 = 8.0000000000000000e+00 * src1[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + fp74;
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PB_z[vi] * src0[((hsi*78+63)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp75 + fp72;
target[((hsi*91+75)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp69;
fp69 = 9.0000000000000000e+00 * src1[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + fp69;
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PB_z[vi] * src0[((hsi*78+64)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp70 + fp67;
target[((hsi*91+76)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp64;
fp64 = 1.0000000000000000e+01 * src1[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp65;
fp65 = inteval->PB_z[vi] * src0[((hsi*78+65)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp65 + fp62;
target[((hsi*91+77)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp59;
fp59 = 1.1000000000000000e+01 * src1[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp59;
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_y[vi] * src0[((hsi*78+66)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp60 + fp57;
target[((hsi*91+78)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp212;
fp212 = 8.0000000000000000e+00 * src1[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = 0.0000000000000000e+00 + fp212;
LIBINT2_REALTYPE fp210;
fp210 = inteval->oo2z[vi] * fp211;
LIBINT2_REALTYPE fp213;
fp213 = inteval->PB_y[vi] * src0[((hsi*78+36)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp213 + fp210;
target[((hsi*91+45)*1+lsi)*1] = fp209;
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
LIBINT2_REALTYPE fp208;
fp208 = inteval->PB_z[vi] * src0[((hsi*78+36)*1+lsi)*1];
target[((hsi*91+46)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp206;
fp206 = 1.0000000000000000e+00 * src1[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = 0.0000000000000000e+00 + fp206;
LIBINT2_REALTYPE fp204;
fp204 = inteval->oo2z[vi] * fp205;
LIBINT2_REALTYPE fp207;
fp207 = inteval->PB_z[vi] * src0[((hsi*78+37)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp207 + fp204;
target[((hsi*91+47)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp201;
fp201 = 2.0000000000000000e+00 * src1[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = 0.0000000000000000e+00 + fp201;
LIBINT2_REALTYPE fp199;
fp199 = inteval->oo2z[vi] * fp200;
LIBINT2_REALTYPE fp202;
fp202 = inteval->PB_z[vi] * src0[((hsi*78+38)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp202 + fp199;
target[((hsi*91+48)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp196;
fp196 = 3.0000000000000000e+00 * src1[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = 0.0000000000000000e+00 + fp196;
LIBINT2_REALTYPE fp194;
fp194 = inteval->oo2z[vi] * fp195;
LIBINT2_REALTYPE fp197;
fp197 = inteval->PB_z[vi] * src0[((hsi*78+39)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp197 + fp194;
target[((hsi*91+49)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp191;
fp191 = 4.0000000000000000e+00 * src1[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + fp191;
LIBINT2_REALTYPE fp189;
fp189 = inteval->oo2z[vi] * fp190;
LIBINT2_REALTYPE fp192;
fp192 = inteval->PB_z[vi] * src0[((hsi*78+40)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp192 + fp189;
target[((hsi*91+50)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp186;
fp186 = 5.0000000000000000e+00 * src1[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + fp186;
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp187;
fp187 = inteval->PB_z[vi] * src0[((hsi*78+41)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp187 + fp184;
target[((hsi*91+51)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp181;
fp181 = 6.0000000000000000e+00 * src1[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + fp181;
LIBINT2_REALTYPE fp179;
fp179 = inteval->oo2z[vi] * fp180;
LIBINT2_REALTYPE fp182;
fp182 = inteval->PB_z[vi] * src0[((hsi*78+42)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp182 + fp179;
target[((hsi*91+52)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp176;
fp176 = 7.0000000000000000e+00 * src1[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + fp176;
LIBINT2_REALTYPE fp174;
fp174 = inteval->oo2z[vi] * fp175;
LIBINT2_REALTYPE fp177;
fp177 = inteval->PB_z[vi] * src0[((hsi*78+43)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp177 + fp174;
target[((hsi*91+53)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp171;
fp171 = 8.0000000000000000e+00 * src1[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + fp171;
LIBINT2_REALTYPE fp169;
fp169 = inteval->oo2z[vi] * fp170;
LIBINT2_REALTYPE fp172;
fp172 = inteval->PB_z[vi] * src0[((hsi*78+44)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp172 + fp169;
target[((hsi*91+54)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp166;
fp166 = 9.0000000000000000e+00 * src1[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + fp166;
LIBINT2_REALTYPE fp164;
fp164 = inteval->oo2z[vi] * fp165;
LIBINT2_REALTYPE fp167;
fp167 = inteval->PB_y[vi] * src0[((hsi*78+45)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp167 + fp164;
target[((hsi*91+55)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * src1[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PB_z[vi] * src0[((hsi*78+56)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp110 + fp107;
target[((hsi*91+68)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp160;
fp160 = 1.0000000000000000e+00 * src1[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + fp160;
LIBINT2_REALTYPE fp158;
fp158 = inteval->oo2z[vi] * fp159;
LIBINT2_REALTYPE fp161;
fp161 = inteval->PB_z[vi] * src0[((hsi*78+46)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp161 + fp158;
target[((hsi*91+57)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp155;
fp155 = 2.0000000000000000e+00 * src1[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + fp155;
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp156;
fp156 = inteval->PB_z[vi] * src0[((hsi*78+47)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp156 + fp153;
target[((hsi*91+58)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp150;
fp150 = 3.0000000000000000e+00 * src1[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + fp150;
LIBINT2_REALTYPE fp148;
fp148 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PB_z[vi] * src0[((hsi*78+48)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp151 + fp148;
target[((hsi*91+59)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp145;
fp145 = 4.0000000000000000e+00 * src1[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + fp145;
LIBINT2_REALTYPE fp143;
fp143 = inteval->oo2z[vi] * fp144;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PB_z[vi] * src0[((hsi*78+49)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp146 + fp143;
target[((hsi*91+60)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp140;
fp140 = 5.0000000000000000e+00 * src1[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + fp140;
LIBINT2_REALTYPE fp138;
fp138 = inteval->oo2z[vi] * fp139;
LIBINT2_REALTYPE fp141;
fp141 = inteval->PB_z[vi] * src0[((hsi*78+50)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp141 + fp138;
target[((hsi*91+61)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp135;
fp135 = 6.0000000000000000e+00 * src1[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + fp135;
LIBINT2_REALTYPE fp133;
fp133 = inteval->oo2z[vi] * fp134;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PB_z[vi] * src0[((hsi*78+51)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp136 + fp133;
target[((hsi*91+62)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp130;
fp130 = 7.0000000000000000e+00 * src1[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + fp130;
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp129;
LIBINT2_REALTYPE fp131;
fp131 = inteval->PB_z[vi] * src0[((hsi*78+52)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp131 + fp128;
target[((hsi*91+63)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp125;
fp125 = 8.0000000000000000e+00 * src1[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + fp125;
LIBINT2_REALTYPE fp123;
fp123 = inteval->oo2z[vi] * fp124;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PB_z[vi] * src0[((hsi*78+53)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp126 + fp123;
target[((hsi*91+64)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp120;
fp120 = 9.0000000000000000e+00 * src1[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + fp120;
LIBINT2_REALTYPE fp118;
fp118 = inteval->oo2z[vi] * fp119;
LIBINT2_REALTYPE fp121;
fp121 = inteval->PB_z[vi] * src0[((hsi*78+54)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp121 + fp118;
target[((hsi*91+65)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+01 * src1[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + fp115;
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2z[vi] * fp114;
LIBINT2_REALTYPE fp116;
fp116 = inteval->PB_y[vi] * src0[((hsi*78+55)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp116 + fp113;
target[((hsi*91+66)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PB_z[vi] * src0[((hsi*78+55)*1+lsi)*1];
target[((hsi*91+67)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp162;
fp162 = inteval->PB_z[vi] * src0[((hsi*78+45)*1+lsi)*1];
target[((hsi*91+56)*1+lsi)*1] = fp162;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 403 */
}

#ifdef __cplusplus
};
#endif
