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
void OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp269;
fp269 = 5.0000000000000000e-01 * src3[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = 5.0000000000000000e+00 * src1[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = 0.0000000000000000e+00 + fp271;
LIBINT2_REALTYPE fp268;
fp268 = fp270 + fp269;
LIBINT2_REALTYPE fp267;
fp267 = inteval->oo2z[vi] * fp268;
LIBINT2_REALTYPE fp272;
fp272 = inteval->PA_y[vi] * src0[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp272 + fp267;
target[((hsi*78+21)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp265;
fp265 = inteval->PA_z[vi] * src0[((hsi*66+15)*1+lsi)*1];
target[((hsi*78+22)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp263;
fp263 = 1.0000000000000000e+00 * src1[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = 0.0000000000000000e+00 + fp263;
LIBINT2_REALTYPE fp261;
fp261 = inteval->oo2z[vi] * fp262;
LIBINT2_REALTYPE fp264;
fp264 = inteval->PA_z[vi] * src0[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp264 + fp261;
target[((hsi*78+23)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp258;
fp258 = 2.0000000000000000e+00 * src1[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = 0.0000000000000000e+00 + fp258;
LIBINT2_REALTYPE fp256;
fp256 = inteval->oo2z[vi] * fp257;
LIBINT2_REALTYPE fp259;
fp259 = inteval->PA_z[vi] * src0[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = fp259 + fp256;
target[((hsi*78+24)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp253;
fp253 = 3.0000000000000000e+00 * src1[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = 0.0000000000000000e+00 + fp253;
LIBINT2_REALTYPE fp251;
fp251 = inteval->oo2z[vi] * fp252;
LIBINT2_REALTYPE fp254;
fp254 = inteval->PA_z[vi] * src0[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp254 + fp251;
target[((hsi*78+25)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp248;
fp248 = 4.0000000000000000e+00 * src1[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = 0.0000000000000000e+00 + fp248;
LIBINT2_REALTYPE fp246;
fp246 = inteval->oo2z[vi] * fp247;
LIBINT2_REALTYPE fp249;
fp249 = inteval->PA_z[vi] * src0[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp249 + fp246;
target[((hsi*78+26)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp243;
fp243 = 5.0000000000000000e+00 * src1[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = 0.0000000000000000e+00 + fp243;
LIBINT2_REALTYPE fp241;
fp241 = inteval->oo2z[vi] * fp242;
LIBINT2_REALTYPE fp244;
fp244 = inteval->PA_z[vi] * src0[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp244 + fp241;
target[((hsi*78+27)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp236;
fp236 = 5.0000000000000000e-01 * src3[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = 6.0000000000000000e+00 * src1[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = 0.0000000000000000e+00 + fp238;
LIBINT2_REALTYPE fp235;
fp235 = fp237 + fp236;
LIBINT2_REALTYPE fp234;
fp234 = inteval->oo2z[vi] * fp235;
LIBINT2_REALTYPE fp239;
fp239 = inteval->PA_y[vi] * src0[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp239 + fp234;
target[((hsi*78+28)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp364;
fp364 = 5.0000000000000000e-01 * src2[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = 1.0000000000000000e+01 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = 0.0000000000000000e+00 + fp366;
LIBINT2_REALTYPE fp363;
fp363 = fp365 - fp364;
LIBINT2_REALTYPE fp362;
fp362 = inteval->oo2z[vi] * fp363;
LIBINT2_REALTYPE fp367;
fp367 = inteval->PA_x[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = fp367 + fp362;
target[((hsi*78+0)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp230;
fp230 = 1.0000000000000000e+00 * src1[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = 0.0000000000000000e+00 + fp230;
LIBINT2_REALTYPE fp228;
fp228 = inteval->oo2z[vi] * fp229;
LIBINT2_REALTYPE fp231;
fp231 = inteval->PA_z[vi] * src0[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp231 + fp228;
target[((hsi*78+30)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp225;
fp225 = 2.0000000000000000e+00 * src1[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = 0.0000000000000000e+00 + fp225;
LIBINT2_REALTYPE fp223;
fp223 = inteval->oo2z[vi] * fp224;
LIBINT2_REALTYPE fp226;
fp226 = inteval->PA_z[vi] * src0[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp226 + fp223;
target[((hsi*78+31)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp220;
fp220 = 3.0000000000000000e+00 * src1[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = 0.0000000000000000e+00 + fp220;
LIBINT2_REALTYPE fp218;
fp218 = inteval->oo2z[vi] * fp219;
LIBINT2_REALTYPE fp221;
fp221 = inteval->PA_z[vi] * src0[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp221 + fp218;
target[((hsi*78+32)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp215;
fp215 = 4.0000000000000000e+00 * src1[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = 0.0000000000000000e+00 + fp215;
LIBINT2_REALTYPE fp213;
fp213 = inteval->oo2z[vi] * fp214;
LIBINT2_REALTYPE fp216;
fp216 = inteval->PA_z[vi] * src0[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp216 + fp213;
target[((hsi*78+33)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp210;
fp210 = 5.0000000000000000e+00 * src1[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = 0.0000000000000000e+00 + fp210;
LIBINT2_REALTYPE fp208;
fp208 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp211;
fp211 = inteval->PA_z[vi] * src0[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp211 + fp208;
target[((hsi*78+34)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp205;
fp205 = 6.0000000000000000e+00 * src1[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + fp205;
LIBINT2_REALTYPE fp203;
fp203 = inteval->oo2z[vi] * fp204;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PA_z[vi] * src0[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp206 + fp203;
target[((hsi*78+35)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp198;
fp198 = 5.0000000000000000e-01 * src3[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = 7.0000000000000000e+00 * src1[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = 0.0000000000000000e+00 + fp200;
LIBINT2_REALTYPE fp197;
fp197 = fp199 + fp198;
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp201;
fp201 = inteval->PA_y[vi] * src0[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp201 + fp196;
target[((hsi*78+36)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp194;
fp194 = inteval->PA_z[vi] * src0[((hsi*66+28)*1+lsi)*1];
target[((hsi*78+37)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp192;
fp192 = 1.0000000000000000e+00 * src1[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + fp192;
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp193;
fp193 = inteval->PA_z[vi] * src0[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp193 + fp190;
target[((hsi*78+38)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp232;
fp232 = inteval->PA_z[vi] * src0[((hsi*66+21)*1+lsi)*1];
target[((hsi*78+29)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp359;
fp359 = 5.0000000000000000e-01 * src3[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = 0.0000000000000000e+00 + fp359;
LIBINT2_REALTYPE fp357;
fp357 = inteval->oo2z[vi] * fp358;
LIBINT2_REALTYPE fp360;
fp360 = inteval->PA_y[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp360 + fp357;
target[((hsi*78+1)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp355;
fp355 = inteval->PA_z[vi] * src0[((hsi*66+0)*1+lsi)*1];
target[((hsi*78+2)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp351;
fp351 = 5.0000000000000000e-01 * src3[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = 1.0000000000000000e+00 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = 0.0000000000000000e+00 + fp353;
LIBINT2_REALTYPE fp350;
fp350 = fp352 + fp351;
LIBINT2_REALTYPE fp349;
fp349 = inteval->oo2z[vi] * fp350;
LIBINT2_REALTYPE fp354;
fp354 = inteval->PA_y[vi] * src0[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp354 + fp349;
target[((hsi*78+3)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp347;
fp347 = inteval->PA_z[vi] * src0[((hsi*66+1)*1+lsi)*1];
target[((hsi*78+4)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp345;
fp345 = 1.0000000000000000e+00 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = 0.0000000000000000e+00 + fp345;
LIBINT2_REALTYPE fp343;
fp343 = inteval->oo2z[vi] * fp344;
LIBINT2_REALTYPE fp346;
fp346 = inteval->PA_z[vi] * src0[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = fp346 + fp343;
target[((hsi*78+5)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp338;
fp338 = 5.0000000000000000e-01 * src3[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = 2.0000000000000000e+00 * src1[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = 0.0000000000000000e+00 + fp340;
LIBINT2_REALTYPE fp337;
fp337 = fp339 + fp338;
LIBINT2_REALTYPE fp336;
fp336 = inteval->oo2z[vi] * fp337;
LIBINT2_REALTYPE fp341;
fp341 = inteval->PA_y[vi] * src0[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = fp341 + fp336;
target[((hsi*78+6)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp334;
fp334 = inteval->PA_z[vi] * src0[((hsi*66+3)*1+lsi)*1];
target[((hsi*78+7)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp332;
fp332 = 1.0000000000000000e+00 * src1[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = 0.0000000000000000e+00 + fp332;
LIBINT2_REALTYPE fp330;
fp330 = inteval->oo2z[vi] * fp331;
LIBINT2_REALTYPE fp333;
fp333 = inteval->PA_z[vi] * src0[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = fp333 + fp330;
target[((hsi*78+8)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp327;
fp327 = 2.0000000000000000e+00 * src1[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = 0.0000000000000000e+00 + fp327;
LIBINT2_REALTYPE fp325;
fp325 = inteval->oo2z[vi] * fp326;
LIBINT2_REALTYPE fp328;
fp328 = inteval->PA_z[vi] * src0[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = fp328 + fp325;
target[((hsi*78+9)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp276;
fp276 = 4.0000000000000000e+00 * src1[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = 0.0000000000000000e+00 + fp276;
LIBINT2_REALTYPE fp274;
fp274 = inteval->oo2z[vi] * fp275;
LIBINT2_REALTYPE fp277;
fp277 = inteval->PA_z[vi] * src0[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = fp277 + fp274;
target[((hsi*78+20)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp316;
fp316 = inteval->PA_z[vi] * src0[((hsi*66+6)*1+lsi)*1];
target[((hsi*78+11)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp314;
fp314 = 1.0000000000000000e+00 * src1[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = 0.0000000000000000e+00 + fp314;
LIBINT2_REALTYPE fp312;
fp312 = inteval->oo2z[vi] * fp313;
LIBINT2_REALTYPE fp315;
fp315 = inteval->PA_z[vi] * src0[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = fp315 + fp312;
target[((hsi*78+12)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp309;
fp309 = 2.0000000000000000e+00 * src1[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = 0.0000000000000000e+00 + fp309;
LIBINT2_REALTYPE fp307;
fp307 = inteval->oo2z[vi] * fp308;
LIBINT2_REALTYPE fp310;
fp310 = inteval->PA_z[vi] * src0[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = fp310 + fp307;
target[((hsi*78+13)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp304;
fp304 = 3.0000000000000000e+00 * src1[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = 0.0000000000000000e+00 + fp304;
LIBINT2_REALTYPE fp302;
fp302 = inteval->oo2z[vi] * fp303;
LIBINT2_REALTYPE fp305;
fp305 = inteval->PA_z[vi] * src0[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp305 + fp302;
target[((hsi*78+14)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp297;
fp297 = 5.0000000000000000e-01 * src3[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = 4.0000000000000000e+00 * src1[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = 0.0000000000000000e+00 + fp299;
LIBINT2_REALTYPE fp296;
fp296 = fp298 + fp297;
LIBINT2_REALTYPE fp295;
fp295 = inteval->oo2z[vi] * fp296;
LIBINT2_REALTYPE fp300;
fp300 = inteval->PA_y[vi] * src0[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = fp300 + fp295;
target[((hsi*78+15)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp293;
fp293 = inteval->PA_z[vi] * src0[((hsi*66+10)*1+lsi)*1];
target[((hsi*78+16)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp291;
fp291 = 1.0000000000000000e+00 * src1[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = 0.0000000000000000e+00 + fp291;
LIBINT2_REALTYPE fp289;
fp289 = inteval->oo2z[vi] * fp290;
LIBINT2_REALTYPE fp292;
fp292 = inteval->PA_z[vi] * src0[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp292 + fp289;
target[((hsi*78+17)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp286;
fp286 = 2.0000000000000000e+00 * src1[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = 0.0000000000000000e+00 + fp286;
LIBINT2_REALTYPE fp284;
fp284 = inteval->oo2z[vi] * fp285;
LIBINT2_REALTYPE fp287;
fp287 = inteval->PA_z[vi] * src0[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp287 + fp284;
target[((hsi*78+18)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp281;
fp281 = 3.0000000000000000e+00 * src1[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = 0.0000000000000000e+00 + fp281;
LIBINT2_REALTYPE fp279;
fp279 = inteval->oo2z[vi] * fp280;
LIBINT2_REALTYPE fp282;
fp282 = inteval->PA_z[vi] * src0[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = fp282 + fp279;
target[((hsi*78+19)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp320;
fp320 = 5.0000000000000000e-01 * src3[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = 3.0000000000000000e+00 * src1[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = 0.0000000000000000e+00 + fp322;
LIBINT2_REALTYPE fp319;
fp319 = fp321 + fp320;
LIBINT2_REALTYPE fp318;
fp318 = inteval->oo2z[vi] * fp319;
LIBINT2_REALTYPE fp323;
fp323 = inteval->PA_y[vi] * src0[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = fp323 + fp318;
target[((hsi*78+10)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp86;
fp86 = 4.0000000000000000e+00 * src1[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + fp86;
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_z[vi] * src0[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp87 + fp84;
target[((hsi*78+60)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp81;
fp81 = 5.0000000000000000e+00 * src1[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp81;
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_z[vi] * src0[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp82 + fp79;
target[((hsi*78+61)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp76;
fp76 = 6.0000000000000000e+00 * src1[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + fp76;
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp77;
fp77 = inteval->PA_z[vi] * src0[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp77 + fp74;
target[((hsi*78+62)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp71;
fp71 = 7.0000000000000000e+00 * src1[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PA_z[vi] * src0[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp72 + fp69;
target[((hsi*78+63)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp66;
fp66 = 8.0000000000000000e+00 * src1[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_z[vi] * src0[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp67 + fp64;
target[((hsi*78+64)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp61;
fp61 = 9.0000000000000000e+00 * src1[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + fp61;
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PA_z[vi] * src0[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp62 + fp59;
target[((hsi*78+65)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp54;
fp54 = 5.0000000000000000e-01 * src3[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 1.0000000000000000e+01 * src1[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + fp56;
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PA_y[vi] * src0[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp57 + fp52;
target[((hsi*78+66)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PA_z[vi] * src0[((hsi*66+55)*1+lsi)*1];
target[((hsi*78+67)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp187;
fp187 = 2.0000000000000000e+00 * src1[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + fp187;
LIBINT2_REALTYPE fp185;
fp185 = inteval->oo2z[vi] * fp186;
LIBINT2_REALTYPE fp188;
fp188 = inteval->PA_z[vi] * src0[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp188 + fp185;
target[((hsi*78+39)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp43;
fp43 = 2.0000000000000000e+00 * src1[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + fp43;
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_z[vi] * src0[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp44 + fp41;
target[((hsi*78+69)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp38;
fp38 = 3.0000000000000000e+00 * src1[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_z[vi] * src0[((hsi*66+58)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp39 + fp36;
target[((hsi*78+70)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp33;
fp33 = 4.0000000000000000e+00 * src1[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_z[vi] * src0[((hsi*66+59)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp34 + fp31;
target[((hsi*78+71)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
fp28 = 5.0000000000000000e+00 * src1[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*66+60)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp29 + fp26;
target[((hsi*78+72)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp23;
fp23 = 6.0000000000000000e+00 * src1[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + fp23;
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PA_z[vi] * src0[((hsi*66+61)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp24 + fp21;
target[((hsi*78+73)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
fp18 = 7.0000000000000000e+00 * src1[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PA_z[vi] * src0[((hsi*66+62)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp19 + fp16;
target[((hsi*78+74)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = 8.0000000000000000e+00 * src1[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + fp13;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PA_z[vi] * src0[((hsi*66+63)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp14 + fp11;
target[((hsi*78+75)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp8;
fp8 = 9.0000000000000000e+00 * src1[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + fp8;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PA_z[vi] * src0[((hsi*66+64)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp9 + fp6;
target[((hsi*78+76)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp3;
fp3 = 1.0000000000000000e+01 * src1[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + fp3;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PA_z[vi] * src0[((hsi*66+65)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*78+77)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp48;
fp48 = 1.0000000000000000e+00 * src1[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + fp48;
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PA_z[vi] * src0[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp49 + fp46;
target[((hsi*78+68)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp182;
fp182 = 3.0000000000000000e+00 * src1[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + fp182;
LIBINT2_REALTYPE fp180;
fp180 = inteval->oo2z[vi] * fp181;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_z[vi] * src0[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp183 + fp180;
target[((hsi*78+40)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp177;
fp177 = 4.0000000000000000e+00 * src1[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + fp177;
LIBINT2_REALTYPE fp175;
fp175 = inteval->oo2z[vi] * fp176;
LIBINT2_REALTYPE fp178;
fp178 = inteval->PA_z[vi] * src0[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp178 + fp175;
target[((hsi*78+41)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp172;
fp172 = 5.0000000000000000e+00 * src1[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + fp172;
LIBINT2_REALTYPE fp170;
fp170 = inteval->oo2z[vi] * fp171;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_z[vi] * src0[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp173 + fp170;
target[((hsi*78+42)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp167;
fp167 = 6.0000000000000000e+00 * src1[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + fp167;
LIBINT2_REALTYPE fp165;
fp165 = inteval->oo2z[vi] * fp166;
LIBINT2_REALTYPE fp168;
fp168 = inteval->PA_z[vi] * src0[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp168 + fp165;
target[((hsi*78+43)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp162;
fp162 = 7.0000000000000000e+00 * src1[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + fp162;
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp163;
fp163 = inteval->PA_z[vi] * src0[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp163 + fp160;
target[((hsi*78+44)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp155;
fp155 = 5.0000000000000000e-01 * src3[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 8.0000000000000000e+00 * src1[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + fp157;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PA_y[vi] * src0[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp158 + fp153;
target[((hsi*78+45)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_z[vi] * src0[((hsi*66+36)*1+lsi)*1];
target[((hsi*78+46)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * src1[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + fp149;
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PA_z[vi] * src0[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp150 + fp147;
target[((hsi*78+47)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp144;
fp144 = 2.0000000000000000e+00 * src1[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + fp144;
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp143;
LIBINT2_REALTYPE fp145;
fp145 = inteval->PA_z[vi] * src0[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp145 + fp142;
target[((hsi*78+48)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp91;
fp91 = 3.0000000000000000e+00 * src1[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_z[vi] * src0[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp92 + fp89;
target[((hsi*78+59)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp134;
fp134 = 4.0000000000000000e+00 * src1[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + fp134;
LIBINT2_REALTYPE fp132;
fp132 = inteval->oo2z[vi] * fp133;
LIBINT2_REALTYPE fp135;
fp135 = inteval->PA_z[vi] * src0[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp135 + fp132;
target[((hsi*78+50)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp129;
fp129 = 5.0000000000000000e+00 * src1[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + fp129;
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PA_z[vi] * src0[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp130 + fp127;
target[((hsi*78+51)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp124;
fp124 = 6.0000000000000000e+00 * src1[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + fp124;
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PA_z[vi] * src0[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp125 + fp122;
target[((hsi*78+52)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp119;
fp119 = 7.0000000000000000e+00 * src1[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + fp119;
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PA_z[vi] * src0[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp120 + fp117;
target[((hsi*78+53)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp114;
fp114 = 8.0000000000000000e+00 * src1[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp114;
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_z[vi] * src0[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp115 + fp112;
target[((hsi*78+54)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp107;
fp107 = 5.0000000000000000e-01 * src3[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = 9.0000000000000000e+00 * src1[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp106;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PA_y[vi] * src0[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp110 + fp105;
target[((hsi*78+55)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_z[vi] * src0[((hsi*66+45)*1+lsi)*1];
target[((hsi*78+56)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src1[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp101;
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PA_z[vi] * src0[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp102 + fp99;
target[((hsi*78+57)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp96;
fp96 = 2.0000000000000000e+00 * src1[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + fp96;
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PA_z[vi] * src0[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp97 + fp94;
target[((hsi*78+58)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp139;
fp139 = 3.0000000000000000e+00 * src1[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + fp139;
LIBINT2_REALTYPE fp137;
fp137 = inteval->oo2z[vi] * fp138;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_z[vi] * src0[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp140 + fp137;
target[((hsi*78+49)*1+lsi)*1] = fp136;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 368 */
}

#ifdef __cplusplus
};
#endif
