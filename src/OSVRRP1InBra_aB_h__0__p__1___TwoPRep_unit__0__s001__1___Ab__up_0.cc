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
void OSVRRP1InBra_aB_h__0__p__1___TwoPRep_unit__0__s001__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp218;
fp218 = fp219 * src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->WQ_x[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = inteval->QC_x[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp222 + fp221;
LIBINT2_REALTYPE fp217;
fp217 = fp220 + fp218;
target[((hsi*63+30)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp226;
fp226 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp227 - fp226;
LIBINT2_REALTYPE fp224;
fp224 = 1.0000000000000000e+00 * fp225;
LIBINT2_REALTYPE fp230;
fp230 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp229;
fp229 = fp230 * src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->WQ_z[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->QC_z[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp233 + fp232;
LIBINT2_REALTYPE fp228;
fp228 = fp231 + fp229;
LIBINT2_REALTYPE fp223;
fp223 = fp228 + fp224;
target[((hsi*63+29)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp235;
fp235 = inteval->WQ_y[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = inteval->QC_y[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
target[((hsi*63+28)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp239;
fp239 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp238;
fp238 = fp239 * src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = inteval->WQ_x[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = inteval->QC_x[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp242 + fp241;
LIBINT2_REALTYPE fp237;
fp237 = fp240 + fp238;
target[((hsi*63+27)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp246;
fp246 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp247 - fp246;
LIBINT2_REALTYPE fp244;
fp244 = 1.0000000000000000e+00 * fp245;
LIBINT2_REALTYPE fp250;
fp250 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp249;
fp249 = fp250 * src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = inteval->WQ_z[vi] * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = inteval->QC_z[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp253 + fp252;
LIBINT2_REALTYPE fp248;
fp248 = fp251 + fp249;
LIBINT2_REALTYPE fp243;
fp243 = fp248 + fp244;
target[((hsi*63+26)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp256;
fp256 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp255;
fp255 = fp256 * src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = inteval->WQ_y[vi] * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = inteval->QC_y[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp259 + fp258;
LIBINT2_REALTYPE fp254;
fp254 = fp257 + fp255;
target[((hsi*63+25)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp262;
fp262 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp261;
fp261 = fp262 * src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = inteval->WQ_x[vi] * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = inteval->QC_x[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp265 + fp264;
LIBINT2_REALTYPE fp260;
fp260 = fp263 + fp261;
target[((hsi*63+24)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp269;
fp269 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp270 - fp269;
LIBINT2_REALTYPE fp267;
fp267 = 1.0000000000000000e+00 * fp268;
LIBINT2_REALTYPE fp273;
fp273 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp272;
fp272 = fp273 * src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = inteval->WQ_z[vi] * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = inteval->QC_z[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = fp276 + fp275;
LIBINT2_REALTYPE fp271;
fp271 = fp274 + fp272;
LIBINT2_REALTYPE fp266;
fp266 = fp271 + fp267;
target[((hsi*63+23)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp279;
fp279 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp278;
fp278 = fp279 * src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = inteval->WQ_y[vi] * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = inteval->QC_y[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp282 + fp281;
LIBINT2_REALTYPE fp277;
fp277 = fp280 + fp278;
target[((hsi*63+22)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp285;
fp285 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp284;
fp284 = fp285 * src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = inteval->WQ_x[vi] * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = inteval->QC_x[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp288 + fp287;
LIBINT2_REALTYPE fp283;
fp283 = fp286 + fp284;
target[((hsi*63+21)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp292;
fp292 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp293 - fp292;
LIBINT2_REALTYPE fp290;
fp290 = 1.0000000000000000e+00 * fp291;
LIBINT2_REALTYPE fp295;
fp295 = inteval->WQ_z[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = inteval->QC_z[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = fp296 + fp295;
LIBINT2_REALTYPE fp289;
fp289 = fp294 + fp290;
target[((hsi*63+20)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp299;
fp299 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp298;
fp298 = fp299 * src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = inteval->WQ_y[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = inteval->QC_y[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp302 + fp301;
LIBINT2_REALTYPE fp297;
fp297 = fp300 + fp298;
target[((hsi*63+19)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp305;
fp305 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp304;
fp304 = fp305 * src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = inteval->WQ_x[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = inteval->QC_x[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = fp308 + fp307;
LIBINT2_REALTYPE fp303;
fp303 = fp306 + fp304;
target[((hsi*63+18)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp312;
fp312 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = fp313 - fp312;
LIBINT2_REALTYPE fp310;
fp310 = 1.0000000000000000e+00 * fp311;
LIBINT2_REALTYPE fp316;
fp316 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp315;
fp315 = fp316 * src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = inteval->WQ_z[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = inteval->QC_z[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = fp319 + fp318;
LIBINT2_REALTYPE fp314;
fp314 = fp317 + fp315;
LIBINT2_REALTYPE fp309;
fp309 = fp314 + fp310;
target[((hsi*63+17)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp425;
fp425 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp424;
fp424 = fp425 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = inteval->WQ_x[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
fp428 = inteval->QC_x[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp426;
fp426 = fp428 + fp427;
LIBINT2_REALTYPE fp423;
fp423 = fp426 + fp424;
target[((hsi*63+0)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp325;
fp325 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp324;
fp324 = fp325 * src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = inteval->WQ_x[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = inteval->QC_x[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp328 + fp327;
LIBINT2_REALTYPE fp323;
fp323 = fp326 + fp324;
target[((hsi*63+15)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp332;
fp332 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp333 - fp332;
LIBINT2_REALTYPE fp330;
fp330 = 1.0000000000000000e+00 * fp331;
LIBINT2_REALTYPE fp336;
fp336 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp335;
fp335 = fp336 * src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = inteval->WQ_z[vi] * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = inteval->QC_z[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = fp339 + fp338;
LIBINT2_REALTYPE fp334;
fp334 = fp337 + fp335;
LIBINT2_REALTYPE fp329;
fp329 = fp334 + fp330;
target[((hsi*63+14)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp342;
fp342 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp341;
fp341 = fp342 * src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = inteval->WQ_y[vi] * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = inteval->QC_y[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = fp345 + fp344;
LIBINT2_REALTYPE fp340;
fp340 = fp343 + fp341;
target[((hsi*63+13)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp348;
fp348 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp347;
fp347 = fp348 * src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = inteval->WQ_x[vi] * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = inteval->QC_x[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = fp351 + fp350;
LIBINT2_REALTYPE fp346;
fp346 = fp349 + fp347;
target[((hsi*63+12)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp355;
fp355 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp356 - fp355;
LIBINT2_REALTYPE fp353;
fp353 = 1.0000000000000000e+00 * fp354;
LIBINT2_REALTYPE fp358;
fp358 = inteval->WQ_z[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = inteval->QC_z[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = fp359 + fp358;
LIBINT2_REALTYPE fp352;
fp352 = fp357 + fp353;
target[((hsi*63+11)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp362;
fp362 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp361;
fp361 = fp362 * src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = inteval->WQ_y[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = inteval->QC_y[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = fp365 + fp364;
LIBINT2_REALTYPE fp360;
fp360 = fp363 + fp361;
target[((hsi*63+10)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp368;
fp368 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp367;
fp367 = fp368 * src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp370;
fp370 = inteval->WQ_x[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = inteval->QC_x[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp371 + fp370;
LIBINT2_REALTYPE fp366;
fp366 = fp369 + fp367;
target[((hsi*63+9)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp375;
fp375 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = fp376 - fp375;
LIBINT2_REALTYPE fp373;
fp373 = 1.0000000000000000e+00 * fp374;
LIBINT2_REALTYPE fp379;
fp379 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp378;
fp378 = fp379 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = inteval->WQ_z[vi] * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = inteval->QC_z[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = fp382 + fp381;
LIBINT2_REALTYPE fp377;
fp377 = fp380 + fp378;
LIBINT2_REALTYPE fp372;
fp372 = fp377 + fp373;
target[((hsi*63+8)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp384;
fp384 = inteval->WQ_y[vi] * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = inteval->QC_y[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = fp385 + fp384;
target[((hsi*63+7)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp388;
fp388 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp387;
fp387 = fp388 * src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = inteval->WQ_x[vi] * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = inteval->QC_x[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp389;
fp389 = fp391 + fp390;
LIBINT2_REALTYPE fp386;
fp386 = fp389 + fp387;
target[((hsi*63+6)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp395;
fp395 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp396;
fp396 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp394;
fp394 = fp396 - fp395;
LIBINT2_REALTYPE fp393;
fp393 = 1.0000000000000000e+00 * fp394;
LIBINT2_REALTYPE fp398;
fp398 = inteval->WQ_z[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp399;
fp399 = inteval->QC_z[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp397;
fp397 = fp399 + fp398;
LIBINT2_REALTYPE fp392;
fp392 = fp397 + fp393;
target[((hsi*63+5)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp402;
fp402 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp401;
fp401 = fp402 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = inteval->WQ_y[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = inteval->QC_y[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
fp403 = fp405 + fp404;
LIBINT2_REALTYPE fp400;
fp400 = fp403 + fp401;
target[((hsi*63+4)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp408;
fp408 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp407;
fp407 = fp408 * src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp410;
fp410 = inteval->WQ_x[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = inteval->QC_x[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp409;
fp409 = fp411 + fp410;
LIBINT2_REALTYPE fp406;
fp406 = fp409 + fp407;
target[((hsi*63+3)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp415;
fp415 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp416;
fp416 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = fp416 - fp415;
LIBINT2_REALTYPE fp413;
fp413 = 1.0000000000000000e+00 * fp414;
LIBINT2_REALTYPE fp418;
fp418 = inteval->WQ_z[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = inteval->QC_z[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp417;
fp417 = fp419 + fp418;
LIBINT2_REALTYPE fp412;
fp412 = fp417 + fp413;
target[((hsi*63+2)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp421;
fp421 = inteval->WQ_y[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp422;
fp422 = inteval->QC_y[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp420;
fp420 = fp422 + fp421;
target[((hsi*63+1)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp321;
fp321 = inteval->WQ_y[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = inteval->QC_y[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = fp322 + fp321;
target[((hsi*63+16)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp3;
fp3 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 - fp3;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * fp2;
LIBINT2_REALTYPE fp7;
fp7 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp6;
fp6 = fp7 * src2[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->WQ_z[vi] * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->QC_z[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
LIBINT2_REALTYPE fp5;
fp5 = fp8 + fp6;
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*63+62)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp12;
fp12 = inteval->WQ_y[vi] * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->QC_y[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp13 + fp12;
target[((hsi*63+61)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp15;
fp15 = inteval->WQ_x[vi] * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->QC_x[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*63+60)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp20;
fp20 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 - fp20;
LIBINT2_REALTYPE fp18;
fp18 = 1.0000000000000000e+00 * fp19;
LIBINT2_REALTYPE fp24;
fp24 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp23;
fp23 = fp24 * src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->WQ_z[vi] * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->QC_z[vi] * src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp27 + fp26;
LIBINT2_REALTYPE fp22;
fp22 = fp25 + fp23;
LIBINT2_REALTYPE fp17;
fp17 = fp22 + fp18;
target[((hsi*63+59)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * src2[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_y[vi] * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->QC_y[vi] * src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*63+58)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WQ_x[vi] * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->QC_x[vi] * src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
target[((hsi*63+57)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp40;
fp40 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 - fp40;
LIBINT2_REALTYPE fp38;
fp38 = 1.0000000000000000e+00 * fp39;
LIBINT2_REALTYPE fp44;
fp44 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_z[vi] * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->QC_z[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
LIBINT2_REALTYPE fp37;
fp37 = fp42 + fp38;
target[((hsi*63+56)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp50;
fp50 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_y[vi] * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->QC_y[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
LIBINT2_REALTYPE fp48;
fp48 = fp51 + fp49;
target[((hsi*63+55)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WQ_x[vi] * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->QC_x[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
target[((hsi*63+54)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp60;
fp60 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp61 - fp60;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * fp59;
LIBINT2_REALTYPE fp64;
fp64 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_z[vi] * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->QC_z[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
LIBINT2_REALTYPE fp62;
fp62 = fp65 + fp63;
LIBINT2_REALTYPE fp57;
fp57 = fp62 + fp58;
target[((hsi*63+53)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp70;
fp70 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->WQ_y[vi] * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->QC_y[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
LIBINT2_REALTYPE fp68;
fp68 = fp71 + fp69;
target[((hsi*63+52)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_x[vi] * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->QC_x[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
target[((hsi*63+51)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp80;
fp80 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp81 - fp80;
LIBINT2_REALTYPE fp78;
fp78 = 1.0000000000000000e+00 * fp79;
LIBINT2_REALTYPE fp84;
fp84 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp84 * src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->WQ_z[vi] * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->QC_z[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
LIBINT2_REALTYPE fp82;
fp82 = fp85 + fp83;
LIBINT2_REALTYPE fp77;
fp77 = fp82 + fp78;
target[((hsi*63+50)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp90;
fp90 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_y[vi] * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->QC_y[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*63+49)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WQ_x[vi] * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->QC_x[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
target[((hsi*63+48)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp213;
fp213 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = inteval->WQ_y[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = inteval->QC_y[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp216 + fp215;
LIBINT2_REALTYPE fp211;
fp211 = fp214 + fp212;
target[((hsi*63+31)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp107;
fp107 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->WQ_y[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->QC_y[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
target[((hsi*63+46)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WQ_x[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->QC_x[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
target[((hsi*63+45)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp117;
fp117 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp118 - fp117;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * fp116;
LIBINT2_REALTYPE fp121;
fp121 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->WQ_z[vi] * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->QC_z[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
LIBINT2_REALTYPE fp114;
fp114 = fp119 + fp115;
target[((hsi*63+44)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp126;
fp126 = inteval->WQ_y[vi] * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->QC_y[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp127 + fp126;
target[((hsi*63+43)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp130;
fp130 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * src2[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = inteval->WQ_x[vi] * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->QC_x[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp133 + fp132;
LIBINT2_REALTYPE fp128;
fp128 = fp131 + fp129;
target[((hsi*63+42)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp137;
fp137 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp138 - fp137;
LIBINT2_REALTYPE fp135;
fp135 = 1.0000000000000000e+00 * fp136;
LIBINT2_REALTYPE fp141;
fp141 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp140;
fp140 = fp141 * src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->WQ_z[vi] * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = inteval->QC_z[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp144 + fp143;
LIBINT2_REALTYPE fp139;
fp139 = fp142 + fp140;
LIBINT2_REALTYPE fp134;
fp134 = fp139 + fp135;
target[((hsi*63+41)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->WQ_y[vi] * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = inteval->QC_y[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
target[((hsi*63+40)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp153;
fp153 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = inteval->WQ_x[vi] * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = inteval->QC_x[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp151;
fp151 = fp154 + fp152;
target[((hsi*63+39)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp160;
fp160 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp161 - fp160;
LIBINT2_REALTYPE fp158;
fp158 = 1.0000000000000000e+00 * fp159;
LIBINT2_REALTYPE fp164;
fp164 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->WQ_z[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->QC_z[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp167 + fp166;
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
LIBINT2_REALTYPE fp157;
fp157 = fp162 + fp158;
target[((hsi*63+38)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp170;
fp170 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp169;
fp169 = fp170 * src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_y[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->QC_y[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp168;
fp168 = fp171 + fp169;
target[((hsi*63+37)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp176;
fp176 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp175;
fp175 = fp176 * src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->WQ_x[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->QC_x[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp174;
fp174 = fp177 + fp175;
target[((hsi*63+36)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp183;
fp183 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp184 - fp183;
LIBINT2_REALTYPE fp181;
fp181 = 1.0000000000000000e+00 * fp182;
LIBINT2_REALTYPE fp187;
fp187 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp186;
fp186 = fp187 * src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->WQ_z[vi] * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->QC_z[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp190 + fp189;
LIBINT2_REALTYPE fp185;
fp185 = fp188 + fp186;
LIBINT2_REALTYPE fp180;
fp180 = fp185 + fp181;
target[((hsi*63+35)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp193;
fp193 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp192;
fp192 = fp193 * src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->WQ_y[vi] * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->QC_y[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
LIBINT2_REALTYPE fp191;
fp191 = fp194 + fp192;
target[((hsi*63+34)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp199;
fp199 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp198;
fp198 = fp199 * src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->WQ_x[vi] * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->QC_x[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp202 + fp201;
LIBINT2_REALTYPE fp197;
fp197 = fp200 + fp198;
target[((hsi*63+33)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp206;
fp206 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp207 - fp206;
LIBINT2_REALTYPE fp204;
fp204 = 1.0000000000000000e+00 * fp205;
LIBINT2_REALTYPE fp209;
fp209 = inteval->WQ_z[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = inteval->QC_z[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
LIBINT2_REALTYPE fp203;
fp203 = fp208 + fp204;
target[((hsi*63+32)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp100;
fp100 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->rho34_over_alpha3[vi] * src3[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp101 - fp100;
LIBINT2_REALTYPE fp98;
fp98 = 1.0000000000000000e+00 * fp99;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WQ_z[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->QC_z[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
LIBINT2_REALTYPE fp97;
fp97 = fp102 + fp98;
target[((hsi*63+47)*1+lsi)*1] = fp97;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 429 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif