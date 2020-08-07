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
void OSVRRP0InBra_aB_d__0__f__1___TwoPRep_s020__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5, const LIBINT2_REALTYPE* src6) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp399;
fp399 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp195;
fp195 = fp399 * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = inteval->WP_z[vi] * src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = inteval->PA_z[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
target[((hsi*60+29)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp389;
fp389 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp255;
fp255 = fp389 * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->WP_z[vi] * src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->PA_z[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp202 + fp201;
LIBINT2_REALTYPE fp199;
fp199 = fp200 + fp255;
target[((hsi*60+28)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp370;
fp370 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp369;
fp369 = fp370 * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->WP_z[vi] * src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = inteval->PA_z[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp206 + fp205;
LIBINT2_REALTYPE fp203;
fp203 = fp204 + fp369;
target[((hsi*60+27)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp208;
fp208 = inteval->WP_z[vi] * src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = inteval->PA_z[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp209 + fp208;
target[((hsi*60+26)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp379;
fp379 = fp389 * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = inteval->WP_z[vi] * src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = inteval->PA_z[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp213 + fp212;
LIBINT2_REALTYPE fp210;
fp210 = fp211 + fp379;
target[((hsi*60+25)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp215;
fp215 = fp370 * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = inteval->WP_z[vi] * src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = inteval->PA_z[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = fp218 + fp217;
LIBINT2_REALTYPE fp214;
fp214 = fp216 + fp215;
target[((hsi*60+24)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp220;
fp220 = inteval->WP_z[vi] * src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->PA_z[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp221 + fp220;
target[((hsi*60+23)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp310;
fp310 = fp370 * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = inteval->WP_z[vi] * src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = inteval->PA_z[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp225 + fp224;
LIBINT2_REALTYPE fp222;
fp222 = fp223 + fp310;
target[((hsi*60+22)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp227;
fp227 = inteval->WP_z[vi] * src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = inteval->PA_z[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
target[((hsi*60+21)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp230;
fp230 = inteval->WP_z[vi] * src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = inteval->PA_z[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp231 + fp230;
target[((hsi*60+20)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp235;
fp235 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp236 - fp235;
LIBINT2_REALTYPE fp233;
fp233 = 2.0000000000000000e+00 * fp234;
LIBINT2_REALTYPE fp238;
fp238 = inteval->WP_y[vi] * src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = inteval->PA_y[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp239 + fp238;
LIBINT2_REALTYPE fp232;
fp232 = fp237 + fp233;
target[((hsi*60+19)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp243;
fp243 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp244 - fp243;
LIBINT2_REALTYPE fp241;
fp241 = 2.0000000000000000e+00 * fp242;
LIBINT2_REALTYPE fp351;
fp351 = fp370 * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = inteval->WP_y[vi] * src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = inteval->PA_y[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp248 + fp247;
LIBINT2_REALTYPE fp245;
fp245 = fp246 + fp351;
LIBINT2_REALTYPE fp240;
fp240 = fp245 + fp241;
target[((hsi*60+18)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp252;
fp252 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp253 - fp252;
LIBINT2_REALTYPE fp250;
fp250 = 2.0000000000000000e+00 * fp251;
LIBINT2_REALTYPE fp257;
fp257 = inteval->WP_y[vi] * src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = inteval->PA_y[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp258 + fp257;
LIBINT2_REALTYPE fp254;
fp254 = fp256 + fp255;
LIBINT2_REALTYPE fp249;
fp249 = fp254 + fp250;
target[((hsi*60+17)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp262;
fp262 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp263 - fp262;
LIBINT2_REALTYPE fp260;
fp260 = 2.0000000000000000e+00 * fp261;
LIBINT2_REALTYPE fp265;
fp265 = fp399 * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = inteval->WP_y[vi] * src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = inteval->PA_y[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp268 + fp267;
LIBINT2_REALTYPE fp264;
fp264 = fp266 + fp265;
LIBINT2_REALTYPE fp259;
fp259 = fp264 + fp260;
target[((hsi*60+16)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp403;
fp403 = inteval->roz[vi] * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp402;
fp402 = src2[((hsi*10+0)*1+lsi)*1] - fp403;
LIBINT2_REALTYPE fp401;
fp401 = fp404 * fp402;
LIBINT2_REALTYPE fp406;
fp406 = inteval->WP_x[vi] * src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp407;
fp407 = inteval->PA_x[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = fp407 + fp406;
LIBINT2_REALTYPE fp400;
fp400 = fp405 + fp401;
LIBINT2_REALTYPE fp397;
fp397 = fp400 + fp398;
target[((hsi*60+0)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp280;
fp280 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = fp281 - fp280;
LIBINT2_REALTYPE fp278;
fp278 = 2.0000000000000000e+00 * fp279;
LIBINT2_REALTYPE fp283;
fp283 = fp370 * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = inteval->WP_y[vi] * src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = inteval->PA_y[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = fp286 + fp285;
LIBINT2_REALTYPE fp282;
fp282 = fp284 + fp283;
LIBINT2_REALTYPE fp277;
fp277 = fp282 + fp278;
target[((hsi*60+14)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp290;
fp290 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = fp291 - fp290;
LIBINT2_REALTYPE fp288;
fp288 = 2.0000000000000000e+00 * fp289;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = inteval->WP_y[vi] * src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = inteval->PA_y[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = fp295 + fp294;
LIBINT2_REALTYPE fp292;
fp292 = fp293 + fp388;
LIBINT2_REALTYPE fp287;
fp287 = fp292 + fp288;
target[((hsi*60+13)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp299;
fp299 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = fp300 - fp299;
LIBINT2_REALTYPE fp297;
fp297 = 2.0000000000000000e+00 * fp298;
LIBINT2_REALTYPE fp302;
fp302 = inteval->WP_y[vi] * src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = inteval->PA_y[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp303 + fp302;
LIBINT2_REALTYPE fp296;
fp296 = fp301 + fp297;
target[((hsi*60+12)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp307;
fp307 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = fp308 - fp307;
LIBINT2_REALTYPE fp305;
fp305 = 2.0000000000000000e+00 * fp306;
LIBINT2_REALTYPE fp312;
fp312 = inteval->WP_y[vi] * src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = inteval->PA_y[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = fp313 + fp312;
LIBINT2_REALTYPE fp309;
fp309 = fp311 + fp310;
LIBINT2_REALTYPE fp304;
fp304 = fp309 + fp305;
target[((hsi*60+11)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp317;
fp317 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = fp318 - fp317;
LIBINT2_REALTYPE fp315;
fp315 = 2.0000000000000000e+00 * fp316;
LIBINT2_REALTYPE fp320;
fp320 = inteval->WP_y[vi] * src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = inteval->PA_y[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp321 + fp320;
LIBINT2_REALTYPE fp314;
fp314 = fp319 + fp315;
target[((hsi*60+10)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp325;
fp325 = inteval->roz[vi] * src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = src2[((hsi*10+9)*1+lsi)*1] - fp325;
LIBINT2_REALTYPE fp323;
fp323 = fp404 * fp324;
LIBINT2_REALTYPE fp327;
fp327 = inteval->WP_x[vi] * src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = inteval->PA_x[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp328 + fp327;
LIBINT2_REALTYPE fp322;
fp322 = fp326 + fp323;
target[((hsi*60+9)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp332;
fp332 = inteval->roz[vi] * src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = src2[((hsi*10+8)*1+lsi)*1] - fp332;
LIBINT2_REALTYPE fp330;
fp330 = fp404 * fp331;
LIBINT2_REALTYPE fp334;
fp334 = inteval->WP_x[vi] * src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = inteval->PA_x[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = fp335 + fp334;
LIBINT2_REALTYPE fp329;
fp329 = fp333 + fp330;
target[((hsi*60+8)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp339;
fp339 = inteval->roz[vi] * src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = src2[((hsi*10+7)*1+lsi)*1] - fp339;
LIBINT2_REALTYPE fp337;
fp337 = fp404 * fp338;
LIBINT2_REALTYPE fp341;
fp341 = inteval->WP_x[vi] * src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = inteval->PA_x[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp342 + fp341;
LIBINT2_REALTYPE fp336;
fp336 = fp340 + fp337;
target[((hsi*60+7)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp346;
fp346 = inteval->roz[vi] * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = src2[((hsi*10+6)*1+lsi)*1] - fp346;
LIBINT2_REALTYPE fp344;
fp344 = fp404 * fp345;
LIBINT2_REALTYPE fp348;
fp348 = inteval->WP_x[vi] * src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = inteval->PA_x[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp347;
fp347 = fp349 + fp348;
LIBINT2_REALTYPE fp343;
fp343 = fp347 + fp344;
target[((hsi*60+6)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp355;
fp355 = inteval->roz[vi] * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = src2[((hsi*10+5)*1+lsi)*1] - fp355;
LIBINT2_REALTYPE fp353;
fp353 = fp404 * fp354;
LIBINT2_REALTYPE fp357;
fp357 = inteval->WP_x[vi] * src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = inteval->PA_x[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp358 + fp357;
LIBINT2_REALTYPE fp352;
fp352 = fp356 + fp353;
LIBINT2_REALTYPE fp350;
fp350 = fp352 + fp351;
target[((hsi*60+5)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp360;
fp360 = fp370 * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = inteval->roz[vi] * src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = src2[((hsi*10+4)*1+lsi)*1] - fp364;
LIBINT2_REALTYPE fp362;
fp362 = fp404 * fp363;
LIBINT2_REALTYPE fp366;
fp366 = inteval->WP_x[vi] * src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = inteval->PA_x[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = fp367 + fp366;
LIBINT2_REALTYPE fp361;
fp361 = fp365 + fp362;
LIBINT2_REALTYPE fp359;
fp359 = fp361 + fp360;
target[((hsi*60+4)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp374;
fp374 = inteval->roz[vi] * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp373;
fp373 = src2[((hsi*10+3)*1+lsi)*1] - fp374;
LIBINT2_REALTYPE fp372;
fp372 = fp404 * fp373;
LIBINT2_REALTYPE fp376;
fp376 = inteval->WP_x[vi] * src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = inteval->PA_x[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = fp377 + fp376;
LIBINT2_REALTYPE fp371;
fp371 = fp375 + fp372;
LIBINT2_REALTYPE fp368;
fp368 = fp371 + fp369;
target[((hsi*60+3)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp383;
fp383 = inteval->roz[vi] * src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = src2[((hsi*10+2)*1+lsi)*1] - fp383;
LIBINT2_REALTYPE fp381;
fp381 = fp404 * fp382;
LIBINT2_REALTYPE fp385;
fp385 = inteval->WP_x[vi] * src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = inteval->PA_x[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = fp386 + fp385;
LIBINT2_REALTYPE fp380;
fp380 = fp384 + fp381;
LIBINT2_REALTYPE fp378;
fp378 = fp380 + fp379;
target[((hsi*60+2)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp393;
fp393 = inteval->roz[vi] * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp392;
fp392 = src2[((hsi*10+1)*1+lsi)*1] - fp393;
LIBINT2_REALTYPE fp391;
fp391 = fp404 * fp392;
LIBINT2_REALTYPE fp395;
fp395 = inteval->WP_x[vi] * src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp396;
fp396 = inteval->PA_x[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp394;
fp394 = fp396 + fp395;
LIBINT2_REALTYPE fp390;
fp390 = fp394 + fp391;
LIBINT2_REALTYPE fp387;
fp387 = fp390 + fp388;
target[((hsi*60+1)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp272;
fp272 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = fp273 - fp272;
LIBINT2_REALTYPE fp270;
fp270 = 2.0000000000000000e+00 * fp271;
LIBINT2_REALTYPE fp275;
fp275 = inteval->WP_y[vi] * src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = inteval->PA_y[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = fp276 + fp275;
LIBINT2_REALTYPE fp269;
fp269 = fp274 + fp270;
target[((hsi*60+15)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp1;
fp1 = fp399 * src4[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src1[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + fp323;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp7;
fp7 = fp389 * src4[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src1[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + fp330;
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*60+58)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp13;
fp13 = fp370 * src4[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src1[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + fp337;
LIBINT2_REALTYPE fp12;
fp12 = fp14 + fp13;
target[((hsi*60+57)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src1[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->PA_z[vi] * src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
LIBINT2_REALTYPE fp18;
fp18 = fp19 + fp344;
target[((hsi*60+56)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp23;
fp23 = fp389 * src4[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_z[vi] * src1[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_z[vi] * src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp27 + fp26;
LIBINT2_REALTYPE fp24;
fp24 = fp25 + fp353;
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
target[((hsi*60+55)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp29;
fp29 = fp370 * src4[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_z[vi] * src1[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->PA_z[vi] * src0[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
LIBINT2_REALTYPE fp30;
fp30 = fp31 + fp362;
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
target[((hsi*60+54)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * src1[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->PA_z[vi] * src0[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
LIBINT2_REALTYPE fp34;
fp34 = fp35 + fp372;
target[((hsi*60+53)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp39;
fp39 = fp370 * src4[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_z[vi] * src1[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->PA_z[vi] * src0[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp43 + fp42;
LIBINT2_REALTYPE fp40;
fp40 = fp41 + fp381;
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
target[((hsi*60+52)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * src1[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_z[vi] * src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp45 + fp391;
target[((hsi*60+51)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * src1[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->PA_z[vi] * src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp51 + fp50;
LIBINT2_REALTYPE fp48;
fp48 = fp49 + fp401;
target[((hsi*60+50)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp53;
fp53 = fp399 * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * src1[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->PA_z[vi] * src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
target[((hsi*60+49)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp118;
fp118 = fp389 * src4[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_z[vi] * src1[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->PA_z[vi] * src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
LIBINT2_REALTYPE fp57;
fp57 = fp58 + fp118;
target[((hsi*60+48)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp62;
fp62 = fp370 * src4[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_z[vi] * src1[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->PA_z[vi] * src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
target[((hsi*60+47)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_z[vi] * src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->PA_z[vi] * src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
target[((hsi*60+46)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp188;
fp188 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp189 - fp188;
LIBINT2_REALTYPE fp186;
fp186 = 2.0000000000000000e+00 * fp187;
LIBINT2_REALTYPE fp192;
fp192 = inteval->WP_y[vi] * src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = inteval->PA_y[vi] * src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp193 + fp192;
LIBINT2_REALTYPE fp190;
fp190 = fp191 + fp401;
LIBINT2_REALTYPE fp185;
fp185 = fp190 + fp186;
target[((hsi*60+30)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp75;
fp75 = fp370 * src4[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_z[vi] * src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->PA_z[vi] * src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
target[((hsi*60+44)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_z[vi] * src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->PA_z[vi] * src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
target[((hsi*60+43)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp180;
fp180 = fp370 * src4[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_z[vi] * src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->PA_z[vi] * src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp85 + fp84;
LIBINT2_REALTYPE fp82;
fp82 = fp83 + fp180;
target[((hsi*60+42)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_z[vi] * src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->PA_z[vi] * src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
target[((hsi*60+41)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_z[vi] * src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_z[vi] * src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
target[((hsi*60+40)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp95;
fp95 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp96 - fp95;
LIBINT2_REALTYPE fp93;
fp93 = 2.0000000000000000e+00 * fp94;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_y[vi] * src1[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->PA_y[vi] * src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
LIBINT2_REALTYPE fp97;
fp97 = fp98 + fp323;
LIBINT2_REALTYPE fp92;
fp92 = fp97 + fp93;
target[((hsi*60+39)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp104;
fp104 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp105 - fp104;
LIBINT2_REALTYPE fp102;
fp102 = 2.0000000000000000e+00 * fp103;
LIBINT2_REALTYPE fp107;
fp107 = fp370 * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * src1[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->PA_y[vi] * src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp111 + fp110;
LIBINT2_REALTYPE fp108;
fp108 = fp109 + fp330;
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp101;
fp101 = fp106 + fp102;
target[((hsi*60+38)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp115;
fp115 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
LIBINT2_REALTYPE fp113;
fp113 = 2.0000000000000000e+00 * fp114;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_y[vi] * src1[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_y[vi] * src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
LIBINT2_REALTYPE fp119;
fp119 = fp120 + fp337;
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
LIBINT2_REALTYPE fp112;
fp112 = fp117 + fp113;
target[((hsi*60+37)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp126;
fp126 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp127 - fp126;
LIBINT2_REALTYPE fp124;
fp124 = 2.0000000000000000e+00 * fp125;
LIBINT2_REALTYPE fp129;
fp129 = fp399 * src4[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = inteval->WP_y[vi] * src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->PA_y[vi] * src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp133 + fp132;
LIBINT2_REALTYPE fp130;
fp130 = fp131 + fp344;
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
LIBINT2_REALTYPE fp123;
fp123 = fp128 + fp124;
target[((hsi*60+36)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp137;
fp137 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp138 - fp137;
LIBINT2_REALTYPE fp135;
fp135 = 2.0000000000000000e+00 * fp136;
LIBINT2_REALTYPE fp141;
fp141 = inteval->WP_y[vi] * src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->PA_y[vi] * src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
LIBINT2_REALTYPE fp139;
fp139 = fp140 + fp353;
LIBINT2_REALTYPE fp134;
fp134 = fp139 + fp135;
target[((hsi*60+35)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp146;
fp146 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp147 - fp146;
LIBINT2_REALTYPE fp144;
fp144 = 2.0000000000000000e+00 * fp145;
LIBINT2_REALTYPE fp149;
fp149 = fp370 * src4[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = inteval->WP_y[vi] * src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->PA_y[vi] * src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp153 + fp152;
LIBINT2_REALTYPE fp150;
fp150 = fp151 + fp362;
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
LIBINT2_REALTYPE fp143;
fp143 = fp148 + fp144;
target[((hsi*60+34)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp157;
fp157 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp158 - fp157;
LIBINT2_REALTYPE fp155;
fp155 = 2.0000000000000000e+00 * fp156;
LIBINT2_REALTYPE fp160;
fp160 = fp389 * src4[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->WP_y[vi] * src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = inteval->PA_y[vi] * src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
LIBINT2_REALTYPE fp161;
fp161 = fp162 + fp372;
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
LIBINT2_REALTYPE fp154;
fp154 = fp159 + fp155;
target[((hsi*60+33)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp168;
fp168 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp169 - fp168;
LIBINT2_REALTYPE fp166;
fp166 = 2.0000000000000000e+00 * fp167;
LIBINT2_REALTYPE fp172;
fp172 = inteval->WP_y[vi] * src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_y[vi] * src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp170;
fp170 = fp171 + fp381;
LIBINT2_REALTYPE fp165;
fp165 = fp170 + fp166;
target[((hsi*60+32)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp177;
fp177 = inteval->alpha2_rho_over_zeta2[vi] * src6[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->rho12_over_alpha1[vi] * src5[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp178 - fp177;
LIBINT2_REALTYPE fp175;
fp175 = 2.0000000000000000e+00 * fp176;
LIBINT2_REALTYPE fp183;
fp183 = inteval->WP_y[vi] * src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->PA_y[vi] * src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp184 + fp183;
LIBINT2_REALTYPE fp181;
fp181 = fp182 + fp391;
LIBINT2_REALTYPE fp179;
fp179 = fp181 + fp180;
LIBINT2_REALTYPE fp174;
fp174 = fp179 + fp175;
target[((hsi*60+31)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp70;
fp70 = fp389 * src4[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_z[vi] * src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_z[vi] * src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
target[((hsi*60+45)*1+lsi)*1] = fp69;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 408 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif