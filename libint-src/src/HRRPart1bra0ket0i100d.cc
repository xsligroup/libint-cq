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
void HRRPart1bra0ket0i100d(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp245;
fp245 = inteval->CD_z[vi] * src1[((hsi*84+30)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = src0[((hsi*108+48)*1+lsi)*1] + fp245;
target[((hsi*168+62)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = inteval->CD_y[vi] * src1[((hsi*84+30)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = src0[((hsi*108+45)*1+lsi)*1] + fp247;
target[((hsi*168+61)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = 1.0000000000000000e+00 * src2[((hsi*84+30)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = inteval->CD_x[vi] * src1[((hsi*84+30)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = src0[((hsi*108+30)*1+lsi)*1] + fp251;
LIBINT2_REALTYPE fp248;
fp248 = fp250 + fp249;
target[((hsi*168+60)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp253;
fp253 = inteval->CD_z[vi] * src1[((hsi*84+29)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = src0[((hsi*108+44)*1+lsi)*1] + fp253;
target[((hsi*168+59)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = inteval->CD_z[vi] * src1[((hsi*84+28)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = src0[((hsi*108+43)*1+lsi)*1] + fp255;
target[((hsi*168+58)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = inteval->CD_y[vi] * src1[((hsi*84+28)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = src0[((hsi*108+40)*1+lsi)*1] + fp257;
target[((hsi*168+57)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = inteval->CD_z[vi] * src1[((hsi*84+27)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = src0[((hsi*108+42)*1+lsi)*1] + fp259;
target[((hsi*168+56)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = inteval->CD_y[vi] * src1[((hsi*84+27)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = src0[((hsi*108+39)*1+lsi)*1] + fp261;
target[((hsi*168+55)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = 1.0000000000000000e+00 * src2[((hsi*84+27)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = inteval->CD_x[vi] * src1[((hsi*84+27)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = src0[((hsi*108+27)*1+lsi)*1] + fp265;
LIBINT2_REALTYPE fp262;
fp262 = fp264 + fp263;
target[((hsi*168+54)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp389;
fp389 = 1.0000000000000000e+00 * src2[((hsi*84+0)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = inteval->CD_x[vi] * src1[((hsi*84+0)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = src0[((hsi*108+0)*1+lsi)*1] + fp391;
LIBINT2_REALTYPE fp388;
fp388 = fp390 + fp389;
target[((hsi*168+0)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp269;
fp269 = inteval->CD_z[vi] * src1[((hsi*84+25)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = src0[((hsi*108+40)*1+lsi)*1] + fp269;
target[((hsi*168+52)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = inteval->CD_y[vi] * src1[((hsi*84+25)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = src0[((hsi*108+37)*1+lsi)*1] + fp271;
target[((hsi*168+51)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = inteval->CD_z[vi] * src1[((hsi*84+24)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = src0[((hsi*108+39)*1+lsi)*1] + fp273;
target[((hsi*168+50)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = inteval->CD_y[vi] * src1[((hsi*84+24)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = src0[((hsi*108+36)*1+lsi)*1] + fp275;
target[((hsi*168+49)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = 1.0000000000000000e+00 * src2[((hsi*84+24)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = inteval->CD_x[vi] * src1[((hsi*84+24)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = src0[((hsi*108+24)*1+lsi)*1] + fp279;
LIBINT2_REALTYPE fp276;
fp276 = fp278 + fp277;
target[((hsi*168+48)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp281;
fp281 = inteval->CD_z[vi] * src1[((hsi*84+23)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = src0[((hsi*108+38)*1+lsi)*1] + fp281;
target[((hsi*168+47)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = inteval->CD_z[vi] * src1[((hsi*84+22)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = src0[((hsi*108+37)*1+lsi)*1] + fp283;
target[((hsi*168+46)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = inteval->CD_y[vi] * src1[((hsi*84+22)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = src0[((hsi*108+34)*1+lsi)*1] + fp285;
target[((hsi*168+45)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = inteval->CD_z[vi] * src1[((hsi*84+21)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = src0[((hsi*108+36)*1+lsi)*1] + fp287;
target[((hsi*168+44)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = inteval->CD_y[vi] * src1[((hsi*84+21)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = src0[((hsi*108+33)*1+lsi)*1] + fp289;
target[((hsi*168+43)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp267;
fp267 = inteval->CD_z[vi] * src1[((hsi*84+26)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = src0[((hsi*108+41)*1+lsi)*1] + fp267;
target[((hsi*168+53)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp197;
fp197 = inteval->CD_z[vi] * src1[((hsi*84+41)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = src0[((hsi*108+59)*1+lsi)*1] + fp197;
target[((hsi*168+83)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = inteval->CD_z[vi] * src1[((hsi*84+40)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = src0[((hsi*108+58)*1+lsi)*1] + fp199;
target[((hsi*168+82)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = inteval->CD_y[vi] * src1[((hsi*84+40)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*108+55)*1+lsi)*1] + fp201;
target[((hsi*168+81)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = inteval->CD_z[vi] * src1[((hsi*84+39)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = src0[((hsi*108+57)*1+lsi)*1] + fp203;
target[((hsi*168+80)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = inteval->CD_y[vi] * src1[((hsi*84+39)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*108+54)*1+lsi)*1] + fp205;
target[((hsi*168+79)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = 1.0000000000000000e+00 * src2[((hsi*84+39)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = inteval->CD_x[vi] * src1[((hsi*84+39)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = src0[((hsi*108+39)*1+lsi)*1] + fp209;
LIBINT2_REALTYPE fp206;
fp206 = fp208 + fp207;
target[((hsi*168+78)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp211;
fp211 = inteval->CD_z[vi] * src1[((hsi*84+38)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = src0[((hsi*108+56)*1+lsi)*1] + fp211;
target[((hsi*168+77)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = inteval->CD_z[vi] * src1[((hsi*84+37)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = src0[((hsi*108+55)*1+lsi)*1] + fp213;
target[((hsi*168+76)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = inteval->CD_y[vi] * src1[((hsi*84+37)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = src0[((hsi*108+52)*1+lsi)*1] + fp215;
target[((hsi*168+75)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp243;
fp243 = inteval->CD_y[vi] * src1[((hsi*84+31)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = src0[((hsi*108+46)*1+lsi)*1] + fp243;
target[((hsi*168+63)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp219;
fp219 = inteval->CD_y[vi] * src1[((hsi*84+36)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = src0[((hsi*108+51)*1+lsi)*1] + fp219;
target[((hsi*168+73)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = 1.0000000000000000e+00 * src2[((hsi*84+36)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = inteval->CD_x[vi] * src1[((hsi*84+36)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = src0[((hsi*108+36)*1+lsi)*1] + fp223;
LIBINT2_REALTYPE fp220;
fp220 = fp222 + fp221;
target[((hsi*168+72)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp225;
fp225 = inteval->CD_z[vi] * src1[((hsi*84+35)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*108+53)*1+lsi)*1] + fp225;
target[((hsi*168+71)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = inteval->CD_z[vi] * src1[((hsi*84+34)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = src0[((hsi*108+52)*1+lsi)*1] + fp227;
target[((hsi*168+70)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = inteval->CD_y[vi] * src1[((hsi*84+34)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = src0[((hsi*108+49)*1+lsi)*1] + fp229;
target[((hsi*168+69)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = inteval->CD_z[vi] * src1[((hsi*84+33)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = src0[((hsi*108+51)*1+lsi)*1] + fp231;
target[((hsi*168+68)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = inteval->CD_y[vi] * src1[((hsi*84+33)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = src0[((hsi*108+48)*1+lsi)*1] + fp233;
target[((hsi*168+67)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * src2[((hsi*84+33)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = inteval->CD_x[vi] * src1[((hsi*84+33)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = src0[((hsi*108+33)*1+lsi)*1] + fp237;
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
target[((hsi*168+66)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp239;
fp239 = inteval->CD_z[vi] * src1[((hsi*84+32)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = src0[((hsi*108+50)*1+lsi)*1] + fp239;
target[((hsi*168+65)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = inteval->CD_z[vi] * src1[((hsi*84+31)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*108+49)*1+lsi)*1] + fp241;
target[((hsi*168+64)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp217;
fp217 = inteval->CD_z[vi] * src1[((hsi*84+36)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = src0[((hsi*108+54)*1+lsi)*1] + fp217;
target[((hsi*168+74)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp343;
fp343 = inteval->CD_z[vi] * src1[((hsi*84+9)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = src0[((hsi*108+21)*1+lsi)*1] + fp343;
target[((hsi*168+20)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = inteval->CD_y[vi] * src1[((hsi*84+9)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = src0[((hsi*108+18)*1+lsi)*1] + fp345;
target[((hsi*168+19)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = 1.0000000000000000e+00 * src2[((hsi*84+9)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = inteval->CD_x[vi] * src1[((hsi*84+9)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = src0[((hsi*108+9)*1+lsi)*1] + fp349;
LIBINT2_REALTYPE fp346;
fp346 = fp348 + fp347;
target[((hsi*168+18)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp351;
fp351 = inteval->CD_z[vi] * src1[((hsi*84+8)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = src0[((hsi*108+17)*1+lsi)*1] + fp351;
target[((hsi*168+17)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = inteval->CD_z[vi] * src1[((hsi*84+7)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = src0[((hsi*108+16)*1+lsi)*1] + fp353;
target[((hsi*168+16)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = inteval->CD_y[vi] * src1[((hsi*84+7)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = src0[((hsi*108+13)*1+lsi)*1] + fp355;
target[((hsi*168+15)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = inteval->CD_z[vi] * src1[((hsi*84+6)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = src0[((hsi*108+15)*1+lsi)*1] + fp357;
target[((hsi*168+14)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = inteval->CD_y[vi] * src1[((hsi*84+6)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = src0[((hsi*108+12)*1+lsi)*1] + fp359;
target[((hsi*168+13)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = 1.0000000000000000e+00 * src2[((hsi*84+6)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = inteval->CD_x[vi] * src1[((hsi*84+6)*1+lsi)*1];
LIBINT2_REALTYPE fp362;
fp362 = src0[((hsi*108+6)*1+lsi)*1] + fp363;
LIBINT2_REALTYPE fp360;
fp360 = fp362 + fp361;
target[((hsi*168+12)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp291;
fp291 = 1.0000000000000000e+00 * src2[((hsi*84+21)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->CD_x[vi] * src1[((hsi*84+21)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = src0[((hsi*108+21)*1+lsi)*1] + fp293;
LIBINT2_REALTYPE fp290;
fp290 = fp292 + fp291;
target[((hsi*168+42)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp367;
fp367 = inteval->CD_z[vi] * src1[((hsi*84+4)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = src0[((hsi*108+13)*1+lsi)*1] + fp367;
target[((hsi*168+10)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = inteval->CD_y[vi] * src1[((hsi*84+4)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = src0[((hsi*108+10)*1+lsi)*1] + fp369;
target[((hsi*168+9)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = inteval->CD_z[vi] * src1[((hsi*84+3)*1+lsi)*1];
LIBINT2_REALTYPE fp370;
fp370 = src0[((hsi*108+12)*1+lsi)*1] + fp371;
target[((hsi*168+8)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = inteval->CD_y[vi] * src1[((hsi*84+3)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = src0[((hsi*108+9)*1+lsi)*1] + fp373;
target[((hsi*168+7)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = 1.0000000000000000e+00 * src2[((hsi*84+3)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = inteval->CD_x[vi] * src1[((hsi*84+3)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = src0[((hsi*108+3)*1+lsi)*1] + fp377;
LIBINT2_REALTYPE fp374;
fp374 = fp376 + fp375;
target[((hsi*168+6)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp379;
fp379 = inteval->CD_z[vi] * src1[((hsi*84+2)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
fp378 = src0[((hsi*108+8)*1+lsi)*1] + fp379;
target[((hsi*168+5)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = inteval->CD_z[vi] * src1[((hsi*84+1)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = src0[((hsi*108+7)*1+lsi)*1] + fp381;
target[((hsi*168+4)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = inteval->CD_y[vi] * src1[((hsi*84+1)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = src0[((hsi*108+4)*1+lsi)*1] + fp383;
target[((hsi*168+3)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = inteval->CD_z[vi] * src1[((hsi*84+0)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = src0[((hsi*108+6)*1+lsi)*1] + fp385;
target[((hsi*168+2)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = inteval->CD_y[vi] * src1[((hsi*84+0)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = src0[((hsi*108+3)*1+lsi)*1] + fp387;
target[((hsi*168+1)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp365;
fp365 = inteval->CD_z[vi] * src1[((hsi*84+5)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = src0[((hsi*108+14)*1+lsi)*1] + fp365;
target[((hsi*168+11)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp295;
fp295 = inteval->CD_z[vi] * src1[((hsi*84+20)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = src0[((hsi*108+35)*1+lsi)*1] + fp295;
target[((hsi*168+41)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = inteval->CD_z[vi] * src1[((hsi*84+19)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = src0[((hsi*108+34)*1+lsi)*1] + fp297;
target[((hsi*168+40)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = inteval->CD_y[vi] * src1[((hsi*84+19)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = src0[((hsi*108+31)*1+lsi)*1] + fp299;
target[((hsi*168+39)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = inteval->CD_z[vi] * src1[((hsi*84+18)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = src0[((hsi*108+33)*1+lsi)*1] + fp301;
target[((hsi*168+38)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = inteval->CD_y[vi] * src1[((hsi*84+18)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = src0[((hsi*108+30)*1+lsi)*1] + fp303;
target[((hsi*168+37)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = 1.0000000000000000e+00 * src2[((hsi*84+18)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = inteval->CD_x[vi] * src1[((hsi*84+18)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = src0[((hsi*108+18)*1+lsi)*1] + fp307;
LIBINT2_REALTYPE fp304;
fp304 = fp306 + fp305;
target[((hsi*168+36)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp309;
fp309 = inteval->CD_z[vi] * src1[((hsi*84+17)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = src0[((hsi*108+29)*1+lsi)*1] + fp309;
target[((hsi*168+35)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = inteval->CD_z[vi] * src1[((hsi*84+16)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = src0[((hsi*108+28)*1+lsi)*1] + fp311;
target[((hsi*168+34)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = inteval->CD_y[vi] * src1[((hsi*84+16)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = src0[((hsi*108+25)*1+lsi)*1] + fp313;
target[((hsi*168+33)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp341;
fp341 = inteval->CD_y[vi] * src1[((hsi*84+10)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = src0[((hsi*108+19)*1+lsi)*1] + fp341;
target[((hsi*168+21)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp317;
fp317 = inteval->CD_y[vi] * src1[((hsi*84+15)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = src0[((hsi*108+24)*1+lsi)*1] + fp317;
target[((hsi*168+31)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = 1.0000000000000000e+00 * src2[((hsi*84+15)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = inteval->CD_x[vi] * src1[((hsi*84+15)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = src0[((hsi*108+15)*1+lsi)*1] + fp321;
LIBINT2_REALTYPE fp318;
fp318 = fp320 + fp319;
target[((hsi*168+30)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp323;
fp323 = inteval->CD_z[vi] * src1[((hsi*84+14)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = src0[((hsi*108+26)*1+lsi)*1] + fp323;
target[((hsi*168+29)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = inteval->CD_z[vi] * src1[((hsi*84+13)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = src0[((hsi*108+25)*1+lsi)*1] + fp325;
target[((hsi*168+28)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = inteval->CD_y[vi] * src1[((hsi*84+13)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = src0[((hsi*108+22)*1+lsi)*1] + fp327;
target[((hsi*168+27)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = inteval->CD_z[vi] * src1[((hsi*84+12)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = src0[((hsi*108+24)*1+lsi)*1] + fp329;
target[((hsi*168+26)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = inteval->CD_y[vi] * src1[((hsi*84+12)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = src0[((hsi*108+21)*1+lsi)*1] + fp331;
target[((hsi*168+25)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = 1.0000000000000000e+00 * src2[((hsi*84+12)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = inteval->CD_x[vi] * src1[((hsi*84+12)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = src0[((hsi*108+12)*1+lsi)*1] + fp335;
LIBINT2_REALTYPE fp332;
fp332 = fp334 + fp333;
target[((hsi*168+24)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp337;
fp337 = inteval->CD_z[vi] * src1[((hsi*84+11)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = src0[((hsi*108+23)*1+lsi)*1] + fp337;
target[((hsi*168+23)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = inteval->CD_z[vi] * src1[((hsi*84+10)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = src0[((hsi*108+22)*1+lsi)*1] + fp339;
target[((hsi*168+22)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp315;
fp315 = inteval->CD_z[vi] * src1[((hsi*84+15)*1+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = src0[((hsi*108+27)*1+lsi)*1] + fp315;
target[((hsi*168+32)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_z[vi] * src1[((hsi*84+72)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*108+96)*1+lsi)*1] + fp49;
target[((hsi*168+146)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = inteval->CD_y[vi] * src1[((hsi*84+72)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*108+93)*1+lsi)*1] + fp51;
target[((hsi*168+145)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src2[((hsi*84+72)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->CD_x[vi] * src1[((hsi*84+72)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*108+72)*1+lsi)*1] + fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
target[((hsi*168+144)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_z[vi] * src1[((hsi*84+71)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*108+95)*1+lsi)*1] + fp57;
target[((hsi*168+143)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->CD_z[vi] * src1[((hsi*84+70)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*108+94)*1+lsi)*1] + fp59;
target[((hsi*168+142)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = inteval->CD_y[vi] * src1[((hsi*84+70)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*108+91)*1+lsi)*1] + fp61;
target[((hsi*168+141)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->CD_z[vi] * src1[((hsi*84+69)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*108+93)*1+lsi)*1] + fp63;
target[((hsi*168+140)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->CD_y[vi] * src1[((hsi*84+69)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*108+90)*1+lsi)*1] + fp65;
target[((hsi*168+139)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * src2[((hsi*84+69)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->CD_x[vi] * src1[((hsi*84+69)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*108+69)*1+lsi)*1] + fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
target[((hsi*168+138)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp193;
fp193 = 1.0000000000000000e+00 * src2[((hsi*84+42)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->CD_x[vi] * src1[((hsi*84+42)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src0[((hsi*108+42)*1+lsi)*1] + fp195;
LIBINT2_REALTYPE fp192;
fp192 = fp194 + fp193;
target[((hsi*168+84)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp73;
fp73 = inteval->CD_z[vi] * src1[((hsi*84+67)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*108+91)*1+lsi)*1] + fp73;
target[((hsi*168+136)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->CD_y[vi] * src1[((hsi*84+67)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*108+88)*1+lsi)*1] + fp75;
target[((hsi*168+135)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->CD_z[vi] * src1[((hsi*84+66)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*108+90)*1+lsi)*1] + fp77;
target[((hsi*168+134)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_y[vi] * src1[((hsi*84+66)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*108+87)*1+lsi)*1] + fp79;
target[((hsi*168+133)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * src2[((hsi*84+66)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->CD_x[vi] * src1[((hsi*84+66)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*108+66)*1+lsi)*1] + fp83;
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
target[((hsi*168+132)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp85;
fp85 = inteval->CD_z[vi] * src1[((hsi*84+65)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*108+89)*1+lsi)*1] + fp85;
target[((hsi*168+131)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = inteval->CD_z[vi] * src1[((hsi*84+64)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*108+88)*1+lsi)*1] + fp87;
target[((hsi*168+130)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_y[vi] * src1[((hsi*84+64)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*108+85)*1+lsi)*1] + fp89;
target[((hsi*168+129)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = inteval->CD_z[vi] * src1[((hsi*84+63)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = src0[((hsi*108+87)*1+lsi)*1] + fp91;
target[((hsi*168+128)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_y[vi] * src1[((hsi*84+63)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*108+84)*1+lsi)*1] + fp93;
target[((hsi*168+127)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_z[vi] * src1[((hsi*84+68)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*108+92)*1+lsi)*1] + fp71;
target[((hsi*168+137)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp1;
fp1 = inteval->CD_z[vi] * src1[((hsi*84+83)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*108+107)*1+lsi)*1] + fp1;
target[((hsi*168+167)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->CD_z[vi] * src1[((hsi*84+82)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*108+106)*1+lsi)*1] + fp3;
target[((hsi*168+166)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->CD_y[vi] * src1[((hsi*84+82)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*108+103)*1+lsi)*1] + fp5;
target[((hsi*168+165)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_z[vi] * src1[((hsi*84+81)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*108+105)*1+lsi)*1] + fp7;
target[((hsi*168+164)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_y[vi] * src1[((hsi*84+81)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*108+102)*1+lsi)*1] + fp9;
target[((hsi*168+163)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * src2[((hsi*84+81)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_x[vi] * src1[((hsi*84+81)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*108+81)*1+lsi)*1] + fp13;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*168+162)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_z[vi] * src1[((hsi*84+80)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*108+104)*1+lsi)*1] + fp15;
target[((hsi*168+161)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_z[vi] * src1[((hsi*84+79)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*108+103)*1+lsi)*1] + fp17;
target[((hsi*168+160)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->CD_y[vi] * src1[((hsi*84+79)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*108+100)*1+lsi)*1] + fp19;
target[((hsi*168+159)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp47;
fp47 = inteval->CD_y[vi] * src1[((hsi*84+73)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*108+94)*1+lsi)*1] + fp47;
target[((hsi*168+147)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_y[vi] * src1[((hsi*84+78)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*108+99)*1+lsi)*1] + fp23;
target[((hsi*168+157)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * src2[((hsi*84+78)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->CD_x[vi] * src1[((hsi*84+78)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*108+78)*1+lsi)*1] + fp27;
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
target[((hsi*168+156)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_z[vi] * src1[((hsi*84+77)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*108+101)*1+lsi)*1] + fp29;
target[((hsi*168+155)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_z[vi] * src1[((hsi*84+76)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*108+100)*1+lsi)*1] + fp31;
target[((hsi*168+154)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->CD_y[vi] * src1[((hsi*84+76)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*108+97)*1+lsi)*1] + fp33;
target[((hsi*168+153)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->CD_z[vi] * src1[((hsi*84+75)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*108+99)*1+lsi)*1] + fp35;
target[((hsi*168+152)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->CD_y[vi] * src1[((hsi*84+75)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*108+96)*1+lsi)*1] + fp37;
target[((hsi*168+151)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
fp39 = 1.0000000000000000e+00 * src2[((hsi*84+75)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->CD_x[vi] * src1[((hsi*84+75)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*108+75)*1+lsi)*1] + fp41;
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
target[((hsi*168+150)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp43;
fp43 = inteval->CD_z[vi] * src1[((hsi*84+74)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*108+98)*1+lsi)*1] + fp43;
target[((hsi*168+149)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->CD_z[vi] * src1[((hsi*84+73)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*108+97)*1+lsi)*1] + fp45;
target[((hsi*168+148)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp21;
fp21 = inteval->CD_z[vi] * src1[((hsi*84+78)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*108+102)*1+lsi)*1] + fp21;
target[((hsi*168+158)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp147;
fp147 = inteval->CD_z[vi] * src1[((hsi*84+51)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = src0[((hsi*108+72)*1+lsi)*1] + fp147;
target[((hsi*168+104)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = inteval->CD_y[vi] * src1[((hsi*84+51)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = src0[((hsi*108+69)*1+lsi)*1] + fp149;
target[((hsi*168+103)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = 1.0000000000000000e+00 * src2[((hsi*84+51)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_x[vi] * src1[((hsi*84+51)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*108+51)*1+lsi)*1] + fp153;
LIBINT2_REALTYPE fp150;
fp150 = fp152 + fp151;
target[((hsi*168+102)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp155;
fp155 = inteval->CD_z[vi] * src1[((hsi*84+50)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = src0[((hsi*108+71)*1+lsi)*1] + fp155;
target[((hsi*168+101)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = inteval->CD_z[vi] * src1[((hsi*84+49)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*108+70)*1+lsi)*1] + fp157;
target[((hsi*168+100)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = inteval->CD_y[vi] * src1[((hsi*84+49)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*108+67)*1+lsi)*1] + fp159;
target[((hsi*168+99)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = inteval->CD_z[vi] * src1[((hsi*84+48)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*108+69)*1+lsi)*1] + fp161;
target[((hsi*168+98)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = inteval->CD_y[vi] * src1[((hsi*84+48)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = src0[((hsi*108+66)*1+lsi)*1] + fp163;
target[((hsi*168+97)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = 1.0000000000000000e+00 * src2[((hsi*84+48)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->CD_x[vi] * src1[((hsi*84+48)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = src0[((hsi*108+48)*1+lsi)*1] + fp167;
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
target[((hsi*168+96)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * src2[((hsi*84+63)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->CD_x[vi] * src1[((hsi*84+63)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*108+63)*1+lsi)*1] + fp97;
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
target[((hsi*168+126)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp171;
fp171 = inteval->CD_z[vi] * src1[((hsi*84+46)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = src0[((hsi*108+67)*1+lsi)*1] + fp171;
target[((hsi*168+94)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = inteval->CD_y[vi] * src1[((hsi*84+46)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = src0[((hsi*108+64)*1+lsi)*1] + fp173;
target[((hsi*168+93)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = inteval->CD_z[vi] * src1[((hsi*84+45)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*108+66)*1+lsi)*1] + fp175;
target[((hsi*168+92)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = inteval->CD_y[vi] * src1[((hsi*84+45)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = src0[((hsi*108+63)*1+lsi)*1] + fp177;
target[((hsi*168+91)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = 1.0000000000000000e+00 * src2[((hsi*84+45)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = inteval->CD_x[vi] * src1[((hsi*84+45)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = src0[((hsi*108+45)*1+lsi)*1] + fp181;
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
target[((hsi*168+90)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp183;
fp183 = inteval->CD_z[vi] * src1[((hsi*84+44)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*108+62)*1+lsi)*1] + fp183;
target[((hsi*168+89)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = inteval->CD_z[vi] * src1[((hsi*84+43)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = src0[((hsi*108+61)*1+lsi)*1] + fp185;
target[((hsi*168+88)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = inteval->CD_y[vi] * src1[((hsi*84+43)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = src0[((hsi*108+58)*1+lsi)*1] + fp187;
target[((hsi*168+87)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = inteval->CD_z[vi] * src1[((hsi*84+42)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*108+60)*1+lsi)*1] + fp189;
target[((hsi*168+86)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = inteval->CD_y[vi] * src1[((hsi*84+42)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = src0[((hsi*108+57)*1+lsi)*1] + fp191;
target[((hsi*168+85)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp169;
fp169 = inteval->CD_z[vi] * src1[((hsi*84+47)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*108+68)*1+lsi)*1] + fp169;
target[((hsi*168+95)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_z[vi] * src1[((hsi*84+62)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*108+83)*1+lsi)*1] + fp99;
target[((hsi*168+125)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->CD_z[vi] * src1[((hsi*84+61)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*108+82)*1+lsi)*1] + fp101;
target[((hsi*168+124)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = inteval->CD_y[vi] * src1[((hsi*84+61)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*108+79)*1+lsi)*1] + fp103;
target[((hsi*168+123)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_z[vi] * src1[((hsi*84+60)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*108+81)*1+lsi)*1] + fp105;
target[((hsi*168+122)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = inteval->CD_y[vi] * src1[((hsi*84+60)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = src0[((hsi*108+78)*1+lsi)*1] + fp107;
target[((hsi*168+121)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * src2[((hsi*84+60)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->CD_x[vi] * src1[((hsi*84+60)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*108+60)*1+lsi)*1] + fp111;
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
target[((hsi*168+120)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp113;
fp113 = inteval->CD_z[vi] * src1[((hsi*84+59)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*108+80)*1+lsi)*1] + fp113;
target[((hsi*168+119)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = inteval->CD_z[vi] * src1[((hsi*84+58)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*108+79)*1+lsi)*1] + fp115;
target[((hsi*168+118)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = inteval->CD_y[vi] * src1[((hsi*84+58)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*108+76)*1+lsi)*1] + fp117;
target[((hsi*168+117)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp145;
fp145 = inteval->CD_y[vi] * src1[((hsi*84+52)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*108+70)*1+lsi)*1] + fp145;
target[((hsi*168+105)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp121;
fp121 = inteval->CD_y[vi] * src1[((hsi*84+57)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*108+75)*1+lsi)*1] + fp121;
target[((hsi*168+115)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * src2[((hsi*84+57)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_x[vi] * src1[((hsi*84+57)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*108+57)*1+lsi)*1] + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*168+114)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp127;
fp127 = inteval->CD_z[vi] * src1[((hsi*84+56)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*108+77)*1+lsi)*1] + fp127;
target[((hsi*168+113)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_z[vi] * src1[((hsi*84+55)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*108+76)*1+lsi)*1] + fp129;
target[((hsi*168+112)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = inteval->CD_y[vi] * src1[((hsi*84+55)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = src0[((hsi*108+73)*1+lsi)*1] + fp131;
target[((hsi*168+111)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = inteval->CD_z[vi] * src1[((hsi*84+54)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*108+75)*1+lsi)*1] + fp133;
target[((hsi*168+110)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = inteval->CD_y[vi] * src1[((hsi*84+54)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*108+72)*1+lsi)*1] + fp135;
target[((hsi*168+109)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = 1.0000000000000000e+00 * src2[((hsi*84+54)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->CD_x[vi] * src1[((hsi*84+54)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = src0[((hsi*108+54)*1+lsi)*1] + fp139;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*168+108)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_z[vi] * src1[((hsi*84+53)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*108+74)*1+lsi)*1] + fp141;
target[((hsi*168+107)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_z[vi] * src1[((hsi*84+52)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*108+73)*1+lsi)*1] + fp143;
target[((hsi*168+106)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_z[vi] * src1[((hsi*84+57)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*108+78)*1+lsi)*1] + fp119;
target[((hsi*168+116)*1+lsi)*1] = fp118;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 392 */
}

#ifdef __cplusplus
};
#endif
