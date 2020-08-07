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
void OSVRRP0InBra_aB_d__0__f__1___TwoPRep_s__0__s002__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp239;
fp239 = 2.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp185;
fp185 = fp239 * src5[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp187;
fp187 = fp360 * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->WP_z[vi] * src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->PA_z[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp190 + fp189;
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
LIBINT2_REALTYPE fp184;
fp184 = fp186 + fp185;
target[((hsi*60+29)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp192;
fp192 = fp239 * src5[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp251;
fp251 = fp350 * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->WP_z[vi] * src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->PA_z[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
LIBINT2_REALTYPE fp193;
fp193 = fp194 + fp251;
LIBINT2_REALTYPE fp191;
fp191 = fp193 + fp192;
target[((hsi*60+28)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp198;
fp198 = fp239 * src5[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp330;
fp330 = fp331 * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->WP_z[vi] * src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->PA_z[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp202 + fp201;
LIBINT2_REALTYPE fp199;
fp199 = fp200 + fp330;
LIBINT2_REALTYPE fp197;
fp197 = fp199 + fp198;
target[((hsi*60+27)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp204;
fp204 = fp239 * src5[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = inteval->WP_z[vi] * src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = inteval->PA_z[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp207 + fp206;
LIBINT2_REALTYPE fp203;
fp203 = fp205 + fp204;
target[((hsi*60+26)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp209;
fp209 = fp239 * src5[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp350 * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = inteval->WP_z[vi] * src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = inteval->PA_z[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp213 + fp212;
LIBINT2_REALTYPE fp210;
fp210 = fp211 + fp340;
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
target[((hsi*60+25)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp215;
fp215 = fp239 * src5[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp331 * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = inteval->WP_z[vi] * src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = inteval->PA_z[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp220 + fp219;
LIBINT2_REALTYPE fp216;
fp216 = fp218 + fp217;
LIBINT2_REALTYPE fp214;
fp214 = fp216 + fp215;
target[((hsi*60+24)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp222;
fp222 = fp239 * src5[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = inteval->WP_z[vi] * src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = inteval->PA_z[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp225 + fp224;
LIBINT2_REALTYPE fp221;
fp221 = fp223 + fp222;
target[((hsi*60+23)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp227;
fp227 = fp239 * src5[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = fp331 * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = inteval->WP_z[vi] * src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = inteval->PA_z[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp231 + fp230;
LIBINT2_REALTYPE fp228;
fp228 = fp229 + fp276;
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
target[((hsi*60+22)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp233;
fp233 = fp239 * src5[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = inteval->WP_z[vi] * src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = inteval->PA_z[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
LIBINT2_REALTYPE fp232;
fp232 = fp234 + fp233;
target[((hsi*60+21)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * src5[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = inteval->WP_z[vi] * src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = inteval->PA_z[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp242 + fp241;
LIBINT2_REALTYPE fp237;
fp237 = fp240 + fp238;
target[((hsi*60+20)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp244;
fp244 = inteval->WP_y[vi] * src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = inteval->PA_y[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp245 + fp244;
target[((hsi*60+19)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp312;
fp312 = fp331 * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = inteval->WP_y[vi] * src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = inteval->PA_y[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp249 + fp248;
LIBINT2_REALTYPE fp246;
fp246 = fp247 + fp312;
target[((hsi*60+18)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp253;
fp253 = inteval->WP_y[vi] * src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = inteval->PA_y[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp254 + fp253;
LIBINT2_REALTYPE fp250;
fp250 = fp252 + fp251;
target[((hsi*60+17)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp256;
fp256 = fp360 * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = inteval->WP_y[vi] * src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = inteval->PA_y[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp259 + fp258;
LIBINT2_REALTYPE fp255;
fp255 = fp257 + fp256;
target[((hsi*60+16)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp364;
fp364 = inteval->roz[vi] * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = src2[((hsi*10+0)*1+lsi)*1] - fp364;
LIBINT2_REALTYPE fp362;
fp362 = fp365 * fp363;
LIBINT2_REALTYPE fp367;
fp367 = inteval->WP_x[vi] * src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = inteval->PA_x[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = fp368 + fp367;
LIBINT2_REALTYPE fp361;
fp361 = fp366 + fp362;
LIBINT2_REALTYPE fp358;
fp358 = fp361 + fp359;
target[((hsi*60+0)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp264;
fp264 = fp331 * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = inteval->WP_y[vi] * src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = inteval->PA_y[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp267 + fp266;
LIBINT2_REALTYPE fp263;
fp263 = fp265 + fp264;
target[((hsi*60+14)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = inteval->WP_y[vi] * src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = inteval->PA_y[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp271 + fp270;
LIBINT2_REALTYPE fp268;
fp268 = fp269 + fp349;
target[((hsi*60+13)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp273;
fp273 = inteval->WP_y[vi] * src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = inteval->PA_y[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp274 + fp273;
target[((hsi*60+12)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp278;
fp278 = inteval->WP_y[vi] * src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = inteval->PA_y[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp279 + fp278;
LIBINT2_REALTYPE fp275;
fp275 = fp277 + fp276;
target[((hsi*60+11)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp281;
fp281 = inteval->WP_y[vi] * src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = inteval->PA_y[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp282 + fp281;
target[((hsi*60+10)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp286;
fp286 = inteval->roz[vi] * src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = src2[((hsi*10+9)*1+lsi)*1] - fp286;
LIBINT2_REALTYPE fp284;
fp284 = fp365 * fp285;
LIBINT2_REALTYPE fp288;
fp288 = inteval->WP_x[vi] * src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = inteval->PA_x[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = fp289 + fp288;
LIBINT2_REALTYPE fp283;
fp283 = fp287 + fp284;
target[((hsi*60+9)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp293;
fp293 = inteval->roz[vi] * src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = src2[((hsi*10+8)*1+lsi)*1] - fp293;
LIBINT2_REALTYPE fp291;
fp291 = fp365 * fp292;
LIBINT2_REALTYPE fp295;
fp295 = inteval->WP_x[vi] * src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = inteval->PA_x[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = fp296 + fp295;
LIBINT2_REALTYPE fp290;
fp290 = fp294 + fp291;
target[((hsi*60+8)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp300;
fp300 = inteval->roz[vi] * src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = src2[((hsi*10+7)*1+lsi)*1] - fp300;
LIBINT2_REALTYPE fp298;
fp298 = fp365 * fp299;
LIBINT2_REALTYPE fp302;
fp302 = inteval->WP_x[vi] * src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = inteval->PA_x[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp303 + fp302;
LIBINT2_REALTYPE fp297;
fp297 = fp301 + fp298;
target[((hsi*60+7)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp307;
fp307 = inteval->roz[vi] * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = src2[((hsi*10+6)*1+lsi)*1] - fp307;
LIBINT2_REALTYPE fp305;
fp305 = fp365 * fp306;
LIBINT2_REALTYPE fp309;
fp309 = inteval->WP_x[vi] * src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = inteval->PA_x[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp310 + fp309;
LIBINT2_REALTYPE fp304;
fp304 = fp308 + fp305;
target[((hsi*60+6)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp316;
fp316 = inteval->roz[vi] * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = src2[((hsi*10+5)*1+lsi)*1] - fp316;
LIBINT2_REALTYPE fp314;
fp314 = fp365 * fp315;
LIBINT2_REALTYPE fp318;
fp318 = inteval->WP_x[vi] * src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = inteval->PA_x[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = fp319 + fp318;
LIBINT2_REALTYPE fp313;
fp313 = fp317 + fp314;
LIBINT2_REALTYPE fp311;
fp311 = fp313 + fp312;
target[((hsi*60+5)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp321;
fp321 = fp331 * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp325;
fp325 = inteval->roz[vi] * src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = src2[((hsi*10+4)*1+lsi)*1] - fp325;
LIBINT2_REALTYPE fp323;
fp323 = fp365 * fp324;
LIBINT2_REALTYPE fp327;
fp327 = inteval->WP_x[vi] * src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = inteval->PA_x[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp328 + fp327;
LIBINT2_REALTYPE fp322;
fp322 = fp326 + fp323;
LIBINT2_REALTYPE fp320;
fp320 = fp322 + fp321;
target[((hsi*60+4)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp335;
fp335 = inteval->roz[vi] * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = src2[((hsi*10+3)*1+lsi)*1] - fp335;
LIBINT2_REALTYPE fp333;
fp333 = fp365 * fp334;
LIBINT2_REALTYPE fp337;
fp337 = inteval->WP_x[vi] * src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = inteval->PA_x[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = fp338 + fp337;
LIBINT2_REALTYPE fp332;
fp332 = fp336 + fp333;
LIBINT2_REALTYPE fp329;
fp329 = fp332 + fp330;
target[((hsi*60+3)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp344;
fp344 = inteval->roz[vi] * src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = src2[((hsi*10+2)*1+lsi)*1] - fp344;
LIBINT2_REALTYPE fp342;
fp342 = fp365 * fp343;
LIBINT2_REALTYPE fp346;
fp346 = inteval->WP_x[vi] * src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp347;
fp347 = inteval->PA_x[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = fp347 + fp346;
LIBINT2_REALTYPE fp341;
fp341 = fp345 + fp342;
LIBINT2_REALTYPE fp339;
fp339 = fp341 + fp340;
target[((hsi*60+2)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp354;
fp354 = inteval->roz[vi] * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = src2[((hsi*10+1)*1+lsi)*1] - fp354;
LIBINT2_REALTYPE fp352;
fp352 = fp365 * fp353;
LIBINT2_REALTYPE fp356;
fp356 = inteval->WP_x[vi] * src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = inteval->PA_x[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = fp357 + fp356;
LIBINT2_REALTYPE fp351;
fp351 = fp355 + fp352;
LIBINT2_REALTYPE fp348;
fp348 = fp351 + fp349;
target[((hsi*60+1)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp261;
fp261 = inteval->WP_y[vi] * src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = inteval->PA_y[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp262 + fp261;
target[((hsi*60+15)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp1;
fp1 = fp239 * src5[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp360 * src4[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src1[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_z[vi] * src0[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp5 + fp284;
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
fp9 = fp239 * src5[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp350 * src4[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src1[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_z[vi] * src0[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
LIBINT2_REALTYPE fp12;
fp12 = fp13 + fp291;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
target[((hsi*60+58)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp17;
fp17 = fp239 * src5[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp331 * src4[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * src1[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + fp298;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*60+57)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp25;
fp25 = fp239 * src5[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_z[vi] * src1[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + fp305;
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
target[((hsi*60+56)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp31;
fp31 = fp239 * src5[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp350 * src4[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * src1[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->PA_z[vi] * src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
LIBINT2_REALTYPE fp34;
fp34 = fp35 + fp314;
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*60+55)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp39;
fp39 = fp239 * src5[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp331 * src4[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_z[vi] * src1[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_z[vi] * src0[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp45 + fp44;
LIBINT2_REALTYPE fp42;
fp42 = fp43 + fp323;
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
target[((hsi*60+54)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp47;
fp47 = fp239 * src5[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * src1[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->PA_z[vi] * src0[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp51 + fp50;
LIBINT2_REALTYPE fp48;
fp48 = fp49 + fp333;
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
target[((hsi*60+53)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp53;
fp53 = fp239 * src5[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp331 * src4[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_z[vi] * src1[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * src0[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
LIBINT2_REALTYPE fp56;
fp56 = fp57 + fp342;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
target[((hsi*60+52)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp61;
fp61 = fp239 * src5[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_z[vi] * src1[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->PA_z[vi] * src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = fp63 + fp352;
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
target[((hsi*60+51)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp67;
fp67 = fp239 * src5[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_z[vi] * src1[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_z[vi] * src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp68;
fp68 = fp69 + fp362;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
target[((hsi*60+50)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp73;
fp73 = fp239 * src5[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp360 * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_z[vi] * src1[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->PA_z[vi] * src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*60+49)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp80;
fp80 = fp239 * src5[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp350 * src4[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_z[vi] * src1[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->PA_z[vi] * src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
LIBINT2_REALTYPE fp81;
fp81 = fp82 + fp143;
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
target[((hsi*60+48)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp86;
fp86 = fp239 * src5[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp331 * src4[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_z[vi] * src1[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_z[vi] * src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
target[((hsi*60+47)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp93;
fp93 = fp239 * src5[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_z[vi] * src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->PA_z[vi] * src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
target[((hsi*60+46)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp182;
fp182 = inteval->WP_y[vi] * src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_y[vi] * src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp183 + fp182;
LIBINT2_REALTYPE fp180;
fp180 = fp181 + fp362;
target[((hsi*60+30)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp105;
fp105 = fp239 * src5[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp331 * src4[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_z[vi] * src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->PA_z[vi] * src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp104;
fp104 = fp106 + fp105;
target[((hsi*60+44)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp112;
fp112 = fp239 * src5[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_z[vi] * src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_z[vi] * src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp115 + fp114;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
target[((hsi*60+43)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp117;
fp117 = fp239 * src5[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp331 * src4[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_z[vi] * src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->PA_z[vi] * src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp121 + fp120;
LIBINT2_REALTYPE fp118;
fp118 = fp119 + fp175;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
target[((hsi*60+42)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp123;
fp123 = fp239 * src5[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_z[vi] * src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->PA_z[vi] * src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*60+41)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp128;
fp128 = fp239 * src5[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_z[vi] * src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->PA_z[vi] * src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
LIBINT2_REALTYPE fp127;
fp127 = fp129 + fp128;
target[((hsi*60+40)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp134;
fp134 = inteval->WP_y[vi] * src1[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->PA_y[vi] * src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp135 + fp134;
LIBINT2_REALTYPE fp132;
fp132 = fp133 + fp284;
target[((hsi*60+39)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp137;
fp137 = fp331 * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = inteval->WP_y[vi] * src1[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->PA_y[vi] * src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
LIBINT2_REALTYPE fp138;
fp138 = fp139 + fp291;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*60+38)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp146;
fp146 = inteval->WP_y[vi] * src1[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->PA_y[vi] * src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp147 + fp146;
LIBINT2_REALTYPE fp144;
fp144 = fp145 + fp298;
LIBINT2_REALTYPE fp142;
fp142 = fp144 + fp143;
target[((hsi*60+37)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp149;
fp149 = fp360 * src4[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = inteval->WP_y[vi] * src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->PA_y[vi] * src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp153 + fp152;
LIBINT2_REALTYPE fp150;
fp150 = fp151 + fp305;
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
target[((hsi*60+36)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_y[vi] * src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->PA_y[vi] * src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
LIBINT2_REALTYPE fp154;
fp154 = fp155 + fp314;
target[((hsi*60+35)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp159;
fp159 = fp331 * src4[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = inteval->WP_y[vi] * src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->PA_y[vi] * src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp160;
fp160 = fp161 + fp323;
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
target[((hsi*60+34)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp165;
fp165 = fp350 * src4[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = inteval->WP_y[vi] * src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->PA_y[vi] * src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp169 + fp168;
LIBINT2_REALTYPE fp166;
fp166 = fp167 + fp333;
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
target[((hsi*60+33)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp172;
fp172 = inteval->WP_y[vi] * src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_y[vi] * src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp170;
fp170 = fp171 + fp342;
target[((hsi*60+32)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp178;
fp178 = inteval->WP_y[vi] * src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->PA_y[vi] * src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp176;
fp176 = fp177 + fp352;
LIBINT2_REALTYPE fp174;
fp174 = fp176 + fp175;
target[((hsi*60+31)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp98;
fp98 = fp239 * src5[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp350 * src4[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_z[vi] * src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_z[vi] * src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp103 + fp102;
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
target[((hsi*60+45)*1+lsi)*1] = fp97;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 369 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif