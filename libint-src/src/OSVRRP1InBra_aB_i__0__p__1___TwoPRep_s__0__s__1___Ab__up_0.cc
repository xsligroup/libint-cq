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
void OSVRRP1InBra_aB_i__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp326;
fp326 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp325;
fp325 = fp326 * src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = inteval->WQ_y[vi] * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = inteval->QC_y[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = fp329 + fp328;
LIBINT2_REALTYPE fp324;
fp324 = fp327 + fp325;
target[((hsi*84+22)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp320;
fp320 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp319;
fp319 = fp320 * src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = inteval->WQ_z[vi] * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = inteval->QC_z[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp323 + fp322;
LIBINT2_REALTYPE fp318;
fp318 = fp321 + fp319;
target[((hsi*84+23)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp314;
fp314 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp313;
fp313 = fp314 * src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = inteval->WQ_x[vi] * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = inteval->QC_x[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = fp317 + fp316;
LIBINT2_REALTYPE fp312;
fp312 = fp315 + fp313;
target[((hsi*84+24)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp308;
fp308 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp307;
fp307 = fp308 * src2[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = inteval->WQ_y[vi] * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = inteval->QC_y[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = fp311 + fp310;
LIBINT2_REALTYPE fp306;
fp306 = fp309 + fp307;
target[((hsi*84+25)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp302;
fp302 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp301;
fp301 = fp302 * src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = inteval->WQ_z[vi] * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = inteval->QC_z[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp305 + fp304;
LIBINT2_REALTYPE fp300;
fp300 = fp303 + fp301;
target[((hsi*84+26)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp296;
fp296 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp295;
fp295 = fp296 * src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = inteval->WQ_x[vi] * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = inteval->QC_x[vi] * src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp299 + fp298;
LIBINT2_REALTYPE fp294;
fp294 = fp297 + fp295;
target[((hsi*84+27)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp292;
fp292 = inteval->WQ_y[vi] * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->QC_y[vi] * src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp293 + fp292;
target[((hsi*84+28)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp287;
fp287 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp286;
fp286 = fp287 * src2[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = inteval->WQ_z[vi] * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = inteval->QC_z[vi] * src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp290 + fp289;
LIBINT2_REALTYPE fp285;
fp285 = fp288 + fp286;
target[((hsi*84+29)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp281;
fp281 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp280;
fp280 = fp281 * src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = inteval->WQ_x[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = inteval->QC_x[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = fp284 + fp283;
LIBINT2_REALTYPE fp279;
fp279 = fp282 + fp280;
target[((hsi*84+30)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp437;
fp437 = 6.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp436;
fp436 = fp437 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
fp439 = inteval->WQ_x[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp440;
fp440 = inteval->QC_x[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp438;
fp438 = fp440 + fp439;
LIBINT2_REALTYPE fp435;
fp435 = fp438 + fp436;
target[((hsi*84+0)*1+lsi)*1] = fp435;
LIBINT2_REALTYPE fp271;
fp271 = inteval->WQ_z[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = inteval->QC_z[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp272 + fp271;
target[((hsi*84+32)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp266;
fp266 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp265;
fp265 = fp266 * src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = inteval->WQ_x[vi] * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = inteval->QC_x[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp269 + fp268;
LIBINT2_REALTYPE fp264;
fp264 = fp267 + fp265;
target[((hsi*84+33)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp260;
fp260 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp259;
fp259 = fp260 * src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = inteval->WQ_y[vi] * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = inteval->QC_y[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp263 + fp262;
LIBINT2_REALTYPE fp258;
fp258 = fp261 + fp259;
target[((hsi*84+34)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp254;
fp254 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp253;
fp253 = fp254 * src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = inteval->WQ_z[vi] * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->QC_z[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = fp257 + fp256;
LIBINT2_REALTYPE fp252;
fp252 = fp255 + fp253;
target[((hsi*84+35)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp248;
fp248 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp247;
fp247 = fp248 * src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = inteval->WQ_x[vi] * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = inteval->QC_x[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp251 + fp250;
LIBINT2_REALTYPE fp246;
fp246 = fp249 + fp247;
target[((hsi*84+36)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp242;
fp242 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp241;
fp241 = fp242 * src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = inteval->WQ_y[vi] * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = inteval->QC_y[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp245 + fp244;
LIBINT2_REALTYPE fp240;
fp240 = fp243 + fp241;
target[((hsi*84+37)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp236;
fp236 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp235;
fp235 = fp236 * src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = inteval->WQ_z[vi] * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = inteval->QC_z[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp239 + fp238;
LIBINT2_REALTYPE fp234;
fp234 = fp237 + fp235;
target[((hsi*84+38)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp230;
fp230 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp229;
fp229 = fp230 * src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->WQ_x[vi] * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->QC_x[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp233 + fp232;
LIBINT2_REALTYPE fp228;
fp228 = fp231 + fp229;
target[((hsi*84+39)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp224;
fp224 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp223;
fp223 = fp224 * src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = inteval->WQ_y[vi] * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = inteval->QC_y[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp227 + fp226;
LIBINT2_REALTYPE fp222;
fp222 = fp225 + fp223;
target[((hsi*84+40)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp218;
fp218 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp217;
fp217 = fp218 * src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = inteval->WQ_z[vi] * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->QC_z[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp221 + fp220;
LIBINT2_REALTYPE fp216;
fp216 = fp219 + fp217;
target[((hsi*84+41)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp275;
fp275 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp274;
fp274 = fp275 * src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->WQ_y[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = inteval->QC_y[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = fp278 + fp277;
LIBINT2_REALTYPE fp273;
fp273 = fp276 + fp274;
target[((hsi*84+31)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp433;
fp433 = inteval->WQ_y[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp434;
fp434 = inteval->QC_y[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = fp434 + fp433;
target[((hsi*84+1)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp430;
fp430 = inteval->WQ_z[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp431;
fp431 = inteval->QC_z[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp429;
fp429 = fp431 + fp430;
target[((hsi*84+2)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp425;
fp425 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp424;
fp424 = fp425 * src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = inteval->WQ_x[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
fp428 = inteval->QC_x[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp426;
fp426 = fp428 + fp427;
LIBINT2_REALTYPE fp423;
fp423 = fp426 + fp424;
target[((hsi*84+3)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp419;
fp419 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp418;
fp418 = fp419 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp421;
fp421 = inteval->WQ_y[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp422;
fp422 = inteval->QC_y[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp420;
fp420 = fp422 + fp421;
LIBINT2_REALTYPE fp417;
fp417 = fp420 + fp418;
target[((hsi*84+4)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp415;
fp415 = inteval->WQ_z[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp416;
fp416 = inteval->QC_z[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = fp416 + fp415;
target[((hsi*84+5)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp410;
fp410 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp409;
fp409 = fp410 * src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp412;
fp412 = inteval->WQ_x[vi] * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp413;
fp413 = inteval->QC_x[vi] * src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = fp413 + fp412;
LIBINT2_REALTYPE fp408;
fp408 = fp411 + fp409;
target[((hsi*84+6)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp406;
fp406 = inteval->WQ_y[vi] * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp407;
fp407 = inteval->QC_y[vi] * src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = fp407 + fp406;
target[((hsi*84+7)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp401;
fp401 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp400;
fp400 = fp401 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = inteval->WQ_z[vi] * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = inteval->QC_z[vi] * src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp402;
fp402 = fp404 + fp403;
LIBINT2_REALTYPE fp399;
fp399 = fp402 + fp400;
target[((hsi*84+8)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp395;
fp395 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp394;
fp394 = fp395 * src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp397;
fp397 = inteval->WQ_x[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = inteval->QC_x[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp396;
fp396 = fp398 + fp397;
LIBINT2_REALTYPE fp393;
fp393 = fp396 + fp394;
target[((hsi*84+9)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp332;
fp332 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp331;
fp331 = fp332 * src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = inteval->WQ_x[vi] * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = inteval->QC_x[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = fp335 + fp334;
LIBINT2_REALTYPE fp330;
fp330 = fp333 + fp331;
target[((hsi*84+21)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp385;
fp385 = inteval->WQ_z[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = inteval->QC_z[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = fp386 + fp385;
target[((hsi*84+11)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp380;
fp380 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp379;
fp379 = fp380 * src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = inteval->WQ_x[vi] * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = inteval->QC_x[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = fp383 + fp382;
LIBINT2_REALTYPE fp378;
fp378 = fp381 + fp379;
target[((hsi*84+12)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp374;
fp374 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp373;
fp373 = fp374 * src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = inteval->WQ_y[vi] * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = inteval->QC_y[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = fp377 + fp376;
LIBINT2_REALTYPE fp372;
fp372 = fp375 + fp373;
target[((hsi*84+13)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp368;
fp368 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp367;
fp367 = fp368 * src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp370;
fp370 = inteval->WQ_z[vi] * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = inteval->QC_z[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp371 + fp370;
LIBINT2_REALTYPE fp366;
fp366 = fp369 + fp367;
target[((hsi*84+14)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp362;
fp362 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp361;
fp361 = fp362 * src2[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = inteval->WQ_x[vi] * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = inteval->QC_x[vi] * src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = fp365 + fp364;
LIBINT2_REALTYPE fp360;
fp360 = fp363 + fp361;
target[((hsi*84+15)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp358;
fp358 = inteval->WQ_y[vi] * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = inteval->QC_y[vi] * src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = fp359 + fp358;
target[((hsi*84+16)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp353;
fp353 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp352;
fp352 = fp353 * src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = inteval->WQ_z[vi] * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = inteval->QC_z[vi] * src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp356 + fp355;
LIBINT2_REALTYPE fp351;
fp351 = fp354 + fp352;
target[((hsi*84+17)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp347;
fp347 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp346;
fp346 = fp347 * src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = inteval->WQ_x[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = inteval->QC_x[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp350 + fp349;
LIBINT2_REALTYPE fp345;
fp345 = fp348 + fp346;
target[((hsi*84+18)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp341;
fp341 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp340;
fp340 = fp341 * src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = inteval->WQ_y[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = inteval->QC_y[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = fp344 + fp343;
LIBINT2_REALTYPE fp339;
fp339 = fp342 + fp340;
target[((hsi*84+19)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp337;
fp337 = inteval->WQ_z[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = inteval->QC_z[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp338 + fp337;
target[((hsi*84+20)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp389;
fp389 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp388;
fp388 = fp389 * src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = inteval->WQ_y[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp392;
fp392 = inteval->QC_y[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = fp392 + fp391;
LIBINT2_REALTYPE fp387;
fp387 = fp390 + fp388;
target[((hsi*84+10)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp92;
fp92 = 6.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->WQ_y[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->QC_y[vi] * src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp95 + fp94;
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
target[((hsi*84+64)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WQ_z[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->QC_z[vi] * src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
target[((hsi*84+65)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WQ_x[vi] * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->QC_x[vi] * src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
target[((hsi*84+66)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->WQ_y[vi] * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->QC_y[vi] * src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp83 + fp82;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*84+67)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp74;
fp74 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_z[vi] * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->QC_z[vi] * src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
LIBINT2_REALTYPE fp72;
fp72 = fp75 + fp73;
target[((hsi*84+68)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_x[vi] * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->QC_x[vi] * src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
target[((hsi*84+69)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp65;
fp65 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->WQ_y[vi] * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->QC_y[vi] * src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*84+70)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp59;
fp59 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->WQ_z[vi] * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->QC_z[vi] * src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp57;
fp57 = fp60 + fp58;
target[((hsi*84+71)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WQ_x[vi] * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->QC_x[vi] * src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
target[((hsi*84+72)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp212;
fp212 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp211;
fp211 = fp212 * src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = inteval->WQ_x[vi] * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = inteval->QC_x[vi] * src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp215 + fp214;
LIBINT2_REALTYPE fp210;
fp210 = fp213 + fp211;
target[((hsi*84+42)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp44;
fp44 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_z[vi] * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->QC_z[vi] * src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*84+74)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WQ_x[vi] * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->QC_x[vi] * src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
target[((hsi*84+75)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp35;
fp35 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * src2[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->WQ_y[vi] * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->QC_y[vi] * src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
LIBINT2_REALTYPE fp33;
fp33 = fp36 + fp34;
target[((hsi*84+76)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp29;
fp29 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_z[vi] * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->QC_z[vi] * src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp27;
fp27 = fp30 + fp28;
target[((hsi*84+77)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WQ_x[vi] * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->QC_x[vi] * src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
target[((hsi*84+78)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp20;
fp20 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->WQ_y[vi] * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->QC_y[vi] * src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
LIBINT2_REALTYPE fp18;
fp18 = fp21 + fp19;
target[((hsi*84+79)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp14;
fp14 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src2[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->WQ_z[vi] * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->QC_z[vi] * src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
LIBINT2_REALTYPE fp12;
fp12 = fp15 + fp13;
target[((hsi*84+80)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WQ_x[vi] * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->QC_x[vi] * src0[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
target[((hsi*84+81)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WQ_y[vi] * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->QC_y[vi] * src0[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*84+82)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp2;
fp2 = 6.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src2[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->WQ_z[vi] * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->QC_z[vi] * src0[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*84+83)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp50;
fp50 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_y[vi] * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->QC_y[vi] * src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
LIBINT2_REALTYPE fp48;
fp48 = fp51 + fp49;
target[((hsi*84+73)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp208;
fp208 = inteval->WQ_y[vi] * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = inteval->QC_y[vi] * src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp209 + fp208;
target[((hsi*84+43)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp203;
fp203 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp202;
fp202 = fp203 * src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->WQ_z[vi] * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = inteval->QC_z[vi] * src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp206 + fp205;
LIBINT2_REALTYPE fp201;
fp201 = fp204 + fp202;
target[((hsi*84+44)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp197;
fp197 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = inteval->WQ_x[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = inteval->QC_x[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp200 + fp199;
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
target[((hsi*84+45)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp191;
fp191 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp190;
fp190 = fp191 * src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = inteval->WQ_y[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = inteval->QC_y[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp194 + fp193;
LIBINT2_REALTYPE fp189;
fp189 = fp192 + fp190;
target[((hsi*84+46)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp187;
fp187 = inteval->WQ_z[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = inteval->QC_z[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
target[((hsi*84+47)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp182;
fp182 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp181;
fp181 = fp182 * src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->WQ_x[vi] * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->QC_x[vi] * src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp185 + fp184;
LIBINT2_REALTYPE fp180;
fp180 = fp183 + fp181;
target[((hsi*84+48)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp176;
fp176 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp175;
fp175 = fp176 * src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->WQ_y[vi] * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->QC_y[vi] * src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp174;
fp174 = fp177 + fp175;
target[((hsi*84+49)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp170;
fp170 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp169;
fp169 = fp170 * src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_z[vi] * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->QC_z[vi] * src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp168;
fp168 = fp171 + fp169;
target[((hsi*84+50)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp164;
fp164 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->WQ_x[vi] * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->QC_x[vi] * src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp167 + fp166;
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
target[((hsi*84+51)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WQ_x[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->QC_x[vi] * src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp98 + fp97;
target[((hsi*84+63)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp152;
fp152 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp151;
fp151 = fp152 * src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->WQ_z[vi] * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = inteval->QC_z[vi] * src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp155 + fp154;
LIBINT2_REALTYPE fp150;
fp150 = fp153 + fp151;
target[((hsi*84+53)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp146;
fp146 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->WQ_x[vi] * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->QC_x[vi] * src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
LIBINT2_REALTYPE fp144;
fp144 = fp147 + fp145;
target[((hsi*84+54)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp140;
fp140 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp140 * src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->WQ_y[vi] * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->QC_y[vi] * src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp138;
fp138 = fp141 + fp139;
target[((hsi*84+55)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp134;
fp134 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->WQ_z[vi] * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->QC_z[vi] * src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp132;
fp132 = fp135 + fp133;
target[((hsi*84+56)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * src2[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_x[vi] * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->QC_x[vi] * src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
target[((hsi*84+57)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp122;
fp122 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->WQ_y[vi] * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->QC_y[vi] * src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp125 + fp124;
LIBINT2_REALTYPE fp120;
fp120 = fp123 + fp121;
target[((hsi*84+58)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp116;
fp116 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp115;
fp115 = fp116 * src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_z[vi] * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->QC_z[vi] * src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
LIBINT2_REALTYPE fp114;
fp114 = fp117 + fp115;
target[((hsi*84+59)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp110;
fp110 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * src2[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->WQ_x[vi] * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->QC_x[vi] * src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp108;
fp108 = fp111 + fp109;
target[((hsi*84+60)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_y[vi] * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->QC_y[vi] * src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
target[((hsi*84+61)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp101;
fp101 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->WQ_z[vi] * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->QC_z[vi] * src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
target[((hsi*84+62)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp158;
fp158 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp157;
fp157 = fp158 * src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->WQ_y[vi] * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->QC_y[vi] * src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
LIBINT2_REALTYPE fp156;
fp156 = fp159 + fp157;
target[((hsi*84+52)*1+lsi)*1] = fp156;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 441 */
}

#ifdef __cplusplus
};
#endif
