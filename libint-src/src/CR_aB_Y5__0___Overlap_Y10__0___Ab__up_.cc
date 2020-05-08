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
void CR_aB_Y5__0___Overlap_Y10__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*66+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp371;
fp371 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp370;
fp370 = fp371 * target[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp373;
fp373 = inteval->PB_y[vi] * target[((hsi*66+0)*1+lsi)*1];
target[((hsi*66+1)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp372;
fp372 = inteval->PB_y[vi] * target[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp372 + fp370;
target[((hsi*66+2)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp363;
fp363 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp362;
fp362 = fp363 * target[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp366;
fp366 = fp367 * target[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = inteval->PB_y[vi] * target[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = fp368 + fp366;
target[((hsi*66+3)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp364;
fp364 = inteval->PB_y[vi] * target[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = fp364 + fp362;
target[((hsi*66+4)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp355;
fp355 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp354;
fp354 = fp355 * target[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp358;
fp358 = fp359 * target[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = inteval->PB_y[vi] * target[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = fp360 + fp358;
target[((hsi*66+5)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp356;
fp356 = inteval->PB_y[vi] * target[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = fp356 + fp354;
target[((hsi*66+6)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp347;
fp347 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp346;
fp346 = fp347 * target[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp350;
fp350 = fp351 * target[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = inteval->PB_y[vi] * target[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = fp352 + fp350;
target[((hsi*66+7)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp348;
fp348 = inteval->PB_y[vi] * target[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = fp348 + fp346;
target[((hsi*66+8)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp343;
fp343 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp342;
fp342 = fp343 * target[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = inteval->PB_y[vi] * target[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = fp344 + fp342;
target[((hsi*66+9)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp306;
fp306 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp305;
fp305 = fp306 * target[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = inteval->PA_y[vi] * target[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = fp307 + fp305;
target[((hsi*66+19)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp231;
fp231 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp230;
fp230 = fp231 * target[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp233;
fp233 = fp234 * target[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp301;
fp301 = fp302 * target[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = inteval->PA_y[vi] * target[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp303 + fp301;
target[((hsi*66+20)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp235;
fp235 = inteval->PA_y[vi] * target[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp235 + fp233;
LIBINT2_REALTYPE fp229;
fp229 = fp232 + fp230;
target[((hsi*66+31)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp310;
fp310 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp309;
fp309 = fp310 * target[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = inteval->PA_y[vi] * target[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp311 + fp309;
target[((hsi*66+18)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp238;
fp238 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp237;
fp237 = fp238 * target[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp240;
fp240 = fp241 * target[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = inteval->PA_y[vi] * target[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp242 + fp240;
LIBINT2_REALTYPE fp236;
fp236 = fp239 + fp237;
target[((hsi*66+30)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp314;
fp314 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp313;
fp313 = fp314 * target[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = inteval->PA_y[vi] * target[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = fp315 + fp313;
target[((hsi*66+17)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp245;
fp245 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp244;
fp244 = fp245 * target[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp247;
fp247 = fp248 * target[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = inteval->PA_y[vi] * target[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp249 + fp247;
LIBINT2_REALTYPE fp243;
fp243 = fp246 + fp244;
target[((hsi*66+29)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp318;
fp318 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp317;
fp317 = fp318 * target[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = inteval->PA_y[vi] * target[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = fp319 + fp317;
target[((hsi*66+16)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp252;
fp252 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp251;
fp251 = fp252 * target[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp254;
fp254 = fp255 * target[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = inteval->PA_y[vi] * target[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp256 + fp254;
LIBINT2_REALTYPE fp250;
fp250 = fp253 + fp251;
target[((hsi*66+28)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp322;
fp322 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp321;
fp321 = fp322 * target[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = inteval->PA_y[vi] * target[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = fp323 + fp321;
target[((hsi*66+15)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp259;
fp259 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp258;
fp258 = fp259 * target[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp261;
fp261 = fp262 * target[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = inteval->PA_y[vi] * target[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp263 + fp261;
LIBINT2_REALTYPE fp257;
fp257 = fp260 + fp258;
target[((hsi*66+27)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp326;
fp326 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp325;
fp325 = fp326 * target[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = inteval->PA_y[vi] * target[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = fp327 + fp325;
target[((hsi*66+14)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp266;
fp266 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp265;
fp265 = fp266 * target[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp268;
fp268 = fp269 * target[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = inteval->PA_y[vi] * target[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp270 + fp268;
LIBINT2_REALTYPE fp264;
fp264 = fp267 + fp265;
target[((hsi*66+26)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp330;
fp330 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp329;
fp329 = fp330 * target[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = inteval->PA_y[vi] * target[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = fp331 + fp329;
target[((hsi*66+13)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp273;
fp273 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp272;
fp272 = fp273 * target[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp275;
fp275 = fp276 * target[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->PA_y[vi] * target[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = fp277 + fp275;
LIBINT2_REALTYPE fp271;
fp271 = fp274 + fp272;
target[((hsi*66+25)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp334;
fp334 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp333;
fp333 = fp334 * target[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = inteval->PA_y[vi] * target[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = fp335 + fp333;
target[((hsi*66+12)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp280;
fp280 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp279;
fp279 = fp280 * target[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp282;
fp282 = fp283 * target[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = inteval->PA_y[vi] * target[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = fp284 + fp282;
LIBINT2_REALTYPE fp278;
fp278 = fp281 + fp279;
target[((hsi*66+24)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp336;
fp336 = inteval->PA_y[vi] * target[((hsi*66+0)*1+lsi)*1];
target[((hsi*66+11)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp287;
fp287 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp286;
fp286 = fp287 * target[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp289;
fp289 = fp290 * target[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = inteval->PA_y[vi] * target[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp291 + fp289;
LIBINT2_REALTYPE fp285;
fp285 = fp288 + fp286;
target[((hsi*66+23)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp294;
fp294 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp293;
fp293 = fp294 * target[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = inteval->PA_y[vi] * target[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp295 + fp293;
target[((hsi*66+22)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp213;
fp213 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * target[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp215;
fp215 = fp216 * target[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = inteval->PA_y[vi] * target[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp217 + fp215;
LIBINT2_REALTYPE fp211;
fp211 = fp214 + fp212;
target[((hsi*66+34)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp206;
fp206 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp205;
fp205 = fp206 * target[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp208;
fp208 = fp209 * target[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = inteval->PA_y[vi] * target[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp210 + fp208;
LIBINT2_REALTYPE fp204;
fp204 = fp207 + fp205;
target[((hsi*66+35)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp199;
fp199 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp198;
fp198 = fp199 * target[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp201;
fp201 = fp202 * target[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = inteval->PA_y[vi] * target[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp203 + fp201;
LIBINT2_REALTYPE fp197;
fp197 = fp200 + fp198;
target[((hsi*66+36)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp192;
fp192 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp191;
fp191 = fp192 * target[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp194;
fp194 = fp195 * target[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->PA_y[vi] * target[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp196 + fp194;
LIBINT2_REALTYPE fp190;
fp190 = fp193 + fp191;
target[((hsi*66+37)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp185;
fp185 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp184;
fp184 = fp185 * target[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp187;
fp187 = fp188 * target[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->PA_y[vi] * target[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp189 + fp187;
LIBINT2_REALTYPE fp183;
fp183 = fp186 + fp184;
target[((hsi*66+38)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp178;
fp178 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp177;
fp177 = fp178 * target[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp180;
fp180 = fp181 * target[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = inteval->PA_y[vi] * target[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp182 + fp180;
LIBINT2_REALTYPE fp176;
fp176 = fp179 + fp177;
target[((hsi*66+39)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp171;
fp171 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * target[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp173;
fp173 = fp174 * target[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = inteval->PA_y[vi] * target[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp175 + fp173;
LIBINT2_REALTYPE fp169;
fp169 = fp172 + fp170;
target[((hsi*66+40)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp164;
fp164 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * target[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp166;
fp166 = fp167 * target[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = inteval->PA_y[vi] * target[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp168 + fp166;
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
target[((hsi*66+41)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp157;
fp157 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * target[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * target[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->PA_y[vi] * target[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp161 + fp159;
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
target[((hsi*66+42)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp220;
fp220 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp219;
fp219 = fp220 * target[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->PA_y[vi] * target[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp221 + fp219;
target[((hsi*66+33)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp339;
fp339 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp338;
fp338 = fp339 * target[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = inteval->PB_y[vi] * target[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = fp340 + fp338;
target[((hsi*66+10)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp83;
fp83 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * target[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_y[vi] * target[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*66+53)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp90;
fp90 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * target[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_y[vi] * target[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp94 + fp92;
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*66+52)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp97;
fp97 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * target[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * target[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_y[vi] * target[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
target[((hsi*66+51)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp111;
fp111 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * target[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * target[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_y[vi] * target[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp115 + fp113;
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
target[((hsi*66+49)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp118;
fp118 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * target[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * target[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_y[vi] * target[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
target[((hsi*66+48)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp224;
fp224 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp223;
fp223 = fp224 * target[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp226;
fp226 = fp227 * target[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp297;
fp297 = fp298 * target[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = inteval->PA_y[vi] * target[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp299 + fp297;
target[((hsi*66+21)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp228;
fp228 = inteval->PA_y[vi] * target[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp228 + fp226;
LIBINT2_REALTYPE fp222;
fp222 = fp225 + fp223;
target[((hsi*66+32)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp150;
fp150 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * target[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * target[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->PA_y[vi] * target[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp154 + fp152;
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
target[((hsi*66+43)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp146;
fp146 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * target[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->PA_y[vi] * target[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp147 + fp145;
target[((hsi*66+44)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp139 * target[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * target[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_y[vi] * target[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp143 + fp141;
LIBINT2_REALTYPE fp137;
fp137 = fp140 + fp138;
target[((hsi*66+45)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp132;
fp132 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp131;
fp131 = fp132 * target[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp134;
fp134 = fp135 * target[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->PA_y[vi] * target[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp136 + fp134;
LIBINT2_REALTYPE fp130;
fp130 = fp133 + fp131;
target[((hsi*66+46)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp104;
fp104 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * target[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * target[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->PA_y[vi] * target[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
target[((hsi*66+50)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp125;
fp125 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * target[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * target[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->PA_y[vi] * target[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
target[((hsi*66+47)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * target[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->PA_y[vi] * target[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*66+54)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp72;
fp72 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_y[vi] * target[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
target[((hsi*66+55)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * target[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->PA_y[vi] * target[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp69 + fp67;
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*66+56)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp58;
fp58 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * target[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->PA_y[vi] * target[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp62 + fp60;
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
target[((hsi*66+57)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp51;
fp51 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * target[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->PA_y[vi] * target[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*66+58)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp44;
fp44 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * target[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->PA_y[vi] * target[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*66+59)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp37;
fp37 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_y[vi] * target[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*66+60)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp30;
fp30 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_y[vi] * target[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*66+61)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_y[vi] * target[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*66+62)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_y[vi] * target[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*66+63)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_y[vi] * target[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*66+64)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_y[vi] * target[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp6 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*66+65)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 374 */
}

#ifdef __cplusplus
};
#endif
