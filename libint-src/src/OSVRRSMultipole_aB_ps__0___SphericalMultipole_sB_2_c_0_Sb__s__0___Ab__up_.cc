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
void OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp205;
fp205 = 3.0000000000000000e+00 * src1[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + fp205;
LIBINT2_REALTYPE fp203;
fp203 = fp204 + src4[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp203;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PA_z[vi] * src0[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp206 + fp202;
target[((hsi*66+32)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp211;
fp211 = 2.0000000000000000e+00 * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = 0.0000000000000000e+00 + fp211;
LIBINT2_REALTYPE fp209;
fp209 = fp210 + src4[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp212;
fp212 = inteval->PA_z[vi] * src0[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp212 + fp208;
target[((hsi*66+31)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp217;
fp217 = 1.0000000000000000e+00 * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = 0.0000000000000000e+00 + fp217;
LIBINT2_REALTYPE fp215;
fp215 = fp216 + src4[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = inteval->oo2z[vi] * fp215;
LIBINT2_REALTYPE fp218;
fp218 = inteval->PA_z[vi] * src0[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp218 + fp214;
target[((hsi*66+30)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp221;
fp221 = 0.0000000000000000e+00 + src4[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = inteval->oo2z[vi] * fp221;
LIBINT2_REALTYPE fp222;
fp222 = inteval->PA_z[vi] * src0[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp222 + fp220;
target[((hsi*66+29)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp226;
fp226 = 5.0000000000000000e-01 * src3[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = 5.0000000000000000e-01 * src3[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = 6.0000000000000000e+00 * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = 0.0000000000000000e+00 + fp230;
LIBINT2_REALTYPE fp227;
fp227 = fp229 + fp228;
LIBINT2_REALTYPE fp225;
fp225 = fp227 + fp226;
LIBINT2_REALTYPE fp224;
fp224 = inteval->oo2z[vi] * fp225;
LIBINT2_REALTYPE fp231;
fp231 = inteval->PA_y[vi] * src0[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp231 + fp224;
target[((hsi*66+28)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp236;
fp236 = 5.0000000000000000e+00 * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = 0.0000000000000000e+00 + fp236;
LIBINT2_REALTYPE fp234;
fp234 = fp235 + src4[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->oo2z[vi] * fp234;
LIBINT2_REALTYPE fp237;
fp237 = inteval->PA_z[vi] * src0[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp237 + fp233;
target[((hsi*66+27)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp242;
fp242 = 4.0000000000000000e+00 * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = 0.0000000000000000e+00 + fp242;
LIBINT2_REALTYPE fp240;
fp240 = fp241 + src4[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = inteval->oo2z[vi] * fp240;
LIBINT2_REALTYPE fp243;
fp243 = inteval->PA_z[vi] * src0[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp243 + fp239;
target[((hsi*66+26)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp248;
fp248 = 3.0000000000000000e+00 * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = 0.0000000000000000e+00 + fp248;
LIBINT2_REALTYPE fp246;
fp246 = fp247 + src4[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = inteval->oo2z[vi] * fp246;
LIBINT2_REALTYPE fp249;
fp249 = inteval->PA_z[vi] * src0[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp249 + fp245;
target[((hsi*66+25)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp254;
fp254 = 2.0000000000000000e+00 * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = 0.0000000000000000e+00 + fp254;
LIBINT2_REALTYPE fp252;
fp252 = fp253 + src4[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = inteval->oo2z[vi] * fp252;
LIBINT2_REALTYPE fp255;
fp255 = inteval->PA_z[vi] * src0[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp255 + fp251;
target[((hsi*66+24)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp260;
fp260 = 1.0000000000000000e+00 * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = 0.0000000000000000e+00 + fp260;
LIBINT2_REALTYPE fp258;
fp258 = fp259 + src4[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->oo2z[vi] * fp258;
LIBINT2_REALTYPE fp261;
fp261 = inteval->PA_z[vi] * src0[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp261 + fp257;
target[((hsi*66+23)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp264;
fp264 = 0.0000000000000000e+00 + src4[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = inteval->oo2z[vi] * fp264;
LIBINT2_REALTYPE fp265;
fp265 = inteval->PA_z[vi] * src0[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = fp265 + fp263;
target[((hsi*66+22)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp269;
fp269 = 5.0000000000000000e-01 * src3[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = 5.0000000000000000e-01 * src3[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = 5.0000000000000000e+00 * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = 0.0000000000000000e+00 + fp273;
LIBINT2_REALTYPE fp270;
fp270 = fp272 + fp271;
LIBINT2_REALTYPE fp268;
fp268 = fp270 + fp269;
LIBINT2_REALTYPE fp267;
fp267 = inteval->oo2z[vi] * fp268;
LIBINT2_REALTYPE fp274;
fp274 = inteval->PA_y[vi] * src0[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp274 + fp267;
target[((hsi*66+21)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp279;
fp279 = 4.0000000000000000e+00 * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = 0.0000000000000000e+00 + fp279;
LIBINT2_REALTYPE fp277;
fp277 = fp278 + src4[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = inteval->oo2z[vi] * fp277;
LIBINT2_REALTYPE fp280;
fp280 = inteval->PA_z[vi] * src0[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp280 + fp276;
target[((hsi*66+20)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp285;
fp285 = 3.0000000000000000e+00 * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = 0.0000000000000000e+00 + fp285;
LIBINT2_REALTYPE fp283;
fp283 = fp284 + src4[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = inteval->oo2z[vi] * fp283;
LIBINT2_REALTYPE fp286;
fp286 = inteval->PA_z[vi] * src0[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = fp286 + fp282;
target[((hsi*66+19)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp291;
fp291 = 2.0000000000000000e+00 * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = 0.0000000000000000e+00 + fp291;
LIBINT2_REALTYPE fp289;
fp289 = fp290 + src4[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = inteval->oo2z[vi] * fp289;
LIBINT2_REALTYPE fp292;
fp292 = inteval->PA_z[vi] * src0[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = fp292 + fp288;
target[((hsi*66+18)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp401;
fp401 = -5.0000000000000000e-01 * src2[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = 5.0000000000000000e-01 * src2[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = 9.0000000000000000e+00 * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = 0.0000000000000000e+00 + fp405;
LIBINT2_REALTYPE fp402;
fp402 = fp404 + fp403;
LIBINT2_REALTYPE fp400;
fp400 = fp402 - fp401;
LIBINT2_REALTYPE fp399;
fp399 = inteval->oo2z[vi] * fp400;
LIBINT2_REALTYPE fp406;
fp406 = inteval->PA_x[vi] * src0[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = fp406 + fp399;
target[((hsi*66+0)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp394;
fp394 = 5.0000000000000000e-01 * src3[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp396;
fp396 = 5.0000000000000000e-01 * src3[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp395;
fp395 = 0.0000000000000000e+00 + fp396;
LIBINT2_REALTYPE fp393;
fp393 = fp395 + fp394;
LIBINT2_REALTYPE fp392;
fp392 = inteval->oo2z[vi] * fp393;
LIBINT2_REALTYPE fp397;
fp397 = inteval->PA_y[vi] * src0[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = fp397 + fp392;
target[((hsi*66+1)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp389;
fp389 = 0.0000000000000000e+00 + src4[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = inteval->oo2z[vi] * fp389;
LIBINT2_REALTYPE fp390;
fp390 = inteval->PA_z[vi] * src0[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp387;
fp387 = fp390 + fp388;
target[((hsi*66+2)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp381;
fp381 = 5.0000000000000000e-01 * src3[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = 5.0000000000000000e-01 * src3[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = 1.0000000000000000e+00 * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = 0.0000000000000000e+00 + fp385;
LIBINT2_REALTYPE fp382;
fp382 = fp384 + fp383;
LIBINT2_REALTYPE fp380;
fp380 = fp382 + fp381;
LIBINT2_REALTYPE fp379;
fp379 = inteval->oo2z[vi] * fp380;
LIBINT2_REALTYPE fp386;
fp386 = inteval->PA_y[vi] * src0[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
fp378 = fp386 + fp379;
target[((hsi*66+3)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp376;
fp376 = 0.0000000000000000e+00 + src4[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = inteval->oo2z[vi] * fp376;
LIBINT2_REALTYPE fp377;
fp377 = inteval->PA_z[vi] * src0[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = fp377 + fp375;
target[((hsi*66+4)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp372;
fp372 = 1.0000000000000000e+00 * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = 0.0000000000000000e+00 + fp372;
LIBINT2_REALTYPE fp370;
fp370 = fp371 + src4[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = inteval->oo2z[vi] * fp370;
LIBINT2_REALTYPE fp373;
fp373 = inteval->PA_z[vi] * src0[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = fp373 + fp369;
target[((hsi*66+5)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp362;
fp362 = 5.0000000000000000e-01 * src3[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = 5.0000000000000000e-01 * src3[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = 2.0000000000000000e+00 * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = 0.0000000000000000e+00 + fp366;
LIBINT2_REALTYPE fp363;
fp363 = fp365 + fp364;
LIBINT2_REALTYPE fp361;
fp361 = fp363 + fp362;
LIBINT2_REALTYPE fp360;
fp360 = inteval->oo2z[vi] * fp361;
LIBINT2_REALTYPE fp367;
fp367 = inteval->PA_y[vi] * src0[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = fp367 + fp360;
target[((hsi*66+6)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp357;
fp357 = 0.0000000000000000e+00 + src4[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = inteval->oo2z[vi] * fp357;
LIBINT2_REALTYPE fp358;
fp358 = inteval->PA_z[vi] * src0[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = fp358 + fp356;
target[((hsi*66+7)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp297;
fp297 = 1.0000000000000000e+00 * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = 0.0000000000000000e+00 + fp297;
LIBINT2_REALTYPE fp295;
fp295 = fp296 + src4[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = inteval->oo2z[vi] * fp295;
LIBINT2_REALTYPE fp298;
fp298 = inteval->PA_z[vi] * src0[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = fp298 + fp294;
target[((hsi*66+17)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp347;
fp347 = 2.0000000000000000e+00 * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = 0.0000000000000000e+00 + fp347;
LIBINT2_REALTYPE fp345;
fp345 = fp346 + src4[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = inteval->oo2z[vi] * fp345;
LIBINT2_REALTYPE fp348;
fp348 = inteval->PA_z[vi] * src0[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = fp348 + fp344;
target[((hsi*66+9)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp337;
fp337 = 5.0000000000000000e-01 * src3[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = 5.0000000000000000e-01 * src3[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = 3.0000000000000000e+00 * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = 0.0000000000000000e+00 + fp341;
LIBINT2_REALTYPE fp338;
fp338 = fp340 + fp339;
LIBINT2_REALTYPE fp336;
fp336 = fp338 + fp337;
LIBINT2_REALTYPE fp335;
fp335 = inteval->oo2z[vi] * fp336;
LIBINT2_REALTYPE fp342;
fp342 = inteval->PA_y[vi] * src0[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = fp342 + fp335;
target[((hsi*66+10)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp332;
fp332 = 0.0000000000000000e+00 + src4[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = inteval->oo2z[vi] * fp332;
LIBINT2_REALTYPE fp333;
fp333 = inteval->PA_z[vi] * src0[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = fp333 + fp331;
target[((hsi*66+11)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp328;
fp328 = 1.0000000000000000e+00 * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = 0.0000000000000000e+00 + fp328;
LIBINT2_REALTYPE fp326;
fp326 = fp327 + src4[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp325;
fp325 = inteval->oo2z[vi] * fp326;
LIBINT2_REALTYPE fp329;
fp329 = inteval->PA_z[vi] * src0[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = fp329 + fp325;
target[((hsi*66+12)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp322;
fp322 = 2.0000000000000000e+00 * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = 0.0000000000000000e+00 + fp322;
LIBINT2_REALTYPE fp320;
fp320 = fp321 + src4[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = inteval->oo2z[vi] * fp320;
LIBINT2_REALTYPE fp323;
fp323 = inteval->PA_z[vi] * src0[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = fp323 + fp319;
target[((hsi*66+13)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp316;
fp316 = 3.0000000000000000e+00 * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = 0.0000000000000000e+00 + fp316;
LIBINT2_REALTYPE fp314;
fp314 = fp315 + src4[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = inteval->oo2z[vi] * fp314;
LIBINT2_REALTYPE fp317;
fp317 = inteval->PA_z[vi] * src0[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = fp317 + fp313;
target[((hsi*66+14)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp306;
fp306 = 5.0000000000000000e-01 * src3[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = 5.0000000000000000e-01 * src3[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = 4.0000000000000000e+00 * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = 0.0000000000000000e+00 + fp310;
LIBINT2_REALTYPE fp307;
fp307 = fp309 + fp308;
LIBINT2_REALTYPE fp305;
fp305 = fp307 + fp306;
LIBINT2_REALTYPE fp304;
fp304 = inteval->oo2z[vi] * fp305;
LIBINT2_REALTYPE fp311;
fp311 = inteval->PA_y[vi] * src0[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp311 + fp304;
target[((hsi*66+15)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp301;
fp301 = 0.0000000000000000e+00 + src4[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = inteval->oo2z[vi] * fp301;
LIBINT2_REALTYPE fp302;
fp302 = inteval->PA_z[vi] * src0[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = fp302 + fp300;
target[((hsi*66+16)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp353;
fp353 = 1.0000000000000000e+00 * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = 0.0000000000000000e+00 + fp353;
LIBINT2_REALTYPE fp351;
fp351 = fp352 + src4[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = inteval->oo2z[vi] * fp351;
LIBINT2_REALTYPE fp354;
fp354 = inteval->PA_z[vi] * src0[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = fp354 + fp350;
target[((hsi*66+8)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp4;
fp4 = 9.0000000000000000e+00 * src1[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*66+65)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
fp10 = 8.0000000000000000e+00 * src1[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src4[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*66+64)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
fp16 = 7.0000000000000000e+00 * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src4[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*66+63)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
fp22 = 6.0000000000000000e+00 * src1[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src4[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*66+62)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
fp28 = 5.0000000000000000e+00 * src1[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src4[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*66+61)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
fp34 = 4.0000000000000000e+00 * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src4[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * src0[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp35 + fp31;
target[((hsi*66+60)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
fp40 = 3.0000000000000000e+00 * src1[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src4[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * src0[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp41 + fp37;
target[((hsi*66+59)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp46;
fp46 = 2.0000000000000000e+00 * src1[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src4[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_z[vi] * src0[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp47 + fp43;
target[((hsi*66+58)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp52;
fp52 = 1.0000000000000000e+00 * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + fp52;
LIBINT2_REALTYPE fp50;
fp50 = fp51 + src4[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * src0[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp53 + fp49;
target[((hsi*66+57)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src4[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PA_z[vi] * src0[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp57 + fp55;
target[((hsi*66+56)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp61;
fp61 = 5.0000000000000000e-01 * src3[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 5.0000000000000000e-01 * src3[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 9.0000000000000000e+00 * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + fp65;
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_y[vi] * src0[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp66 + fp59;
target[((hsi*66+55)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp71;
fp71 = 8.0000000000000000e+00 * src1[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp69;
fp69 = fp70 + src4[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp69;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PA_z[vi] * src0[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp72 + fp68;
target[((hsi*66+54)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp77;
fp77 = 7.0000000000000000e+00 * src1[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + fp77;
LIBINT2_REALTYPE fp75;
fp75 = fp76 + src4[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PA_z[vi] * src0[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp78 + fp74;
target[((hsi*66+53)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp83;
fp83 = 6.0000000000000000e+00 * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + fp83;
LIBINT2_REALTYPE fp81;
fp81 = fp82 + src4[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PA_z[vi] * src0[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp84 + fp80;
target[((hsi*66+52)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp89;
fp89 = 5.0000000000000000e+00 * src1[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + fp89;
LIBINT2_REALTYPE fp87;
fp87 = fp88 + src4[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->oo2z[vi] * fp87;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PA_z[vi] * src0[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp90 + fp86;
target[((hsi*66+51)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp199;
fp199 = 4.0000000000000000e+00 * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = 0.0000000000000000e+00 + fp199;
LIBINT2_REALTYPE fp197;
fp197 = fp198 + src4[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp200;
fp200 = inteval->PA_z[vi] * src0[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp200 + fp196;
target[((hsi*66+33)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp193;
fp193 = 5.0000000000000000e+00 * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + fp193;
LIBINT2_REALTYPE fp191;
fp191 = fp192 + src4[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp194;
fp194 = inteval->PA_z[vi] * src0[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp194 + fp190;
target[((hsi*66+34)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp187;
fp187 = 6.0000000000000000e+00 * src1[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + fp187;
LIBINT2_REALTYPE fp185;
fp185 = fp186 + src4[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp188;
fp188 = inteval->PA_z[vi] * src0[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp188 + fp184;
target[((hsi*66+35)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp177;
fp177 = 5.0000000000000000e-01 * src3[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = 5.0000000000000000e-01 * src3[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 7.0000000000000000e+00 * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + fp181;
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
LIBINT2_REALTYPE fp176;
fp176 = fp178 + fp177;
LIBINT2_REALTYPE fp175;
fp175 = inteval->oo2z[vi] * fp176;
LIBINT2_REALTYPE fp182;
fp182 = inteval->PA_y[vi] * src0[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp182 + fp175;
target[((hsi*66+36)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp172;
fp172 = 0.0000000000000000e+00 + src4[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = inteval->oo2z[vi] * fp172;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_z[vi] * src0[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp173 + fp171;
target[((hsi*66+37)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + fp168;
LIBINT2_REALTYPE fp166;
fp166 = fp167 + src4[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->oo2z[vi] * fp166;
LIBINT2_REALTYPE fp169;
fp169 = inteval->PA_z[vi] * src0[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp169 + fp165;
target[((hsi*66+38)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp162;
fp162 = 2.0000000000000000e+00 * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + fp162;
LIBINT2_REALTYPE fp160;
fp160 = fp161 + src4[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = inteval->oo2z[vi] * fp160;
LIBINT2_REALTYPE fp163;
fp163 = inteval->PA_z[vi] * src0[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp163 + fp159;
target[((hsi*66+39)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp156;
fp156 = 3.0000000000000000e+00 * src1[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + fp156;
LIBINT2_REALTYPE fp154;
fp154 = fp155 + src4[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp157;
fp157 = inteval->PA_z[vi] * src0[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp157 + fp153;
target[((hsi*66+40)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp95;
fp95 = 4.0000000000000000e+00 * src1[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + fp95;
LIBINT2_REALTYPE fp93;
fp93 = fp94 + src4[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp96;
fp96 = inteval->PA_z[vi] * src0[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp96 + fp92;
target[((hsi*66+50)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp144;
fp144 = 5.0000000000000000e+00 * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + fp144;
LIBINT2_REALTYPE fp142;
fp142 = fp143 + src4[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->oo2z[vi] * fp142;
LIBINT2_REALTYPE fp145;
fp145 = inteval->PA_z[vi] * src0[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp145 + fp141;
target[((hsi*66+42)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp138;
fp138 = 6.0000000000000000e+00 * src1[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + fp138;
LIBINT2_REALTYPE fp136;
fp136 = fp137 + src4[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PA_z[vi] * src0[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp139 + fp135;
target[((hsi*66+43)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp132;
fp132 = 7.0000000000000000e+00 * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + fp132;
LIBINT2_REALTYPE fp130;
fp130 = fp131 + src4[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->oo2z[vi] * fp130;
LIBINT2_REALTYPE fp133;
fp133 = inteval->PA_z[vi] * src0[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp133 + fp129;
target[((hsi*66+44)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp122;
fp122 = 5.0000000000000000e-01 * src3[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 5.0000000000000000e-01 * src3[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 8.0000000000000000e+00 * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + fp126;
LIBINT2_REALTYPE fp123;
fp123 = fp125 + fp124;
LIBINT2_REALTYPE fp121;
fp121 = fp123 + fp122;
LIBINT2_REALTYPE fp120;
fp120 = inteval->oo2z[vi] * fp121;
LIBINT2_REALTYPE fp127;
fp127 = inteval->PA_y[vi] * src0[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp127 + fp120;
target[((hsi*66+45)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src4[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp117;
LIBINT2_REALTYPE fp118;
fp118 = inteval->PA_z[vi] * src0[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
target[((hsi*66+46)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + fp113;
LIBINT2_REALTYPE fp111;
fp111 = fp112 + src4[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->oo2z[vi] * fp111;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PA_z[vi] * src0[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp114 + fp110;
target[((hsi*66+47)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp107;
fp107 = 2.0000000000000000e+00 * src1[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + fp107;
LIBINT2_REALTYPE fp105;
fp105 = fp106 + src4[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp108;
fp108 = inteval->PA_z[vi] * src0[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp108 + fp104;
target[((hsi*66+48)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp101;
fp101 = 3.0000000000000000e+00 * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp101;
LIBINT2_REALTYPE fp99;
fp99 = fp100 + src4[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp99;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PA_z[vi] * src0[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp102 + fp98;
target[((hsi*66+49)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp150;
fp150 = 4.0000000000000000e+00 * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + fp150;
LIBINT2_REALTYPE fp148;
fp148 = fp149 + src4[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_z[vi] * src0[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp151 + fp147;
target[((hsi*66+41)*1+lsi)*1] = fp146;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 407 */
}

#ifdef __cplusplus
};
#endif
