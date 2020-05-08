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
void HRRPart0ket0bra0l010p(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp289;
fp289 = inteval->BA_x[vi] * src1[((hsi*45+35)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = src0[((hsi*55+35)*lowdim+lsi)*1] + fp289;
target[((hsi*135+35)*lowdim+lsi)*1] = fp288;
LIBINT2_REALTYPE fp287;
fp287 = inteval->BA_x[vi] * src1[((hsi*45+36)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = src0[((hsi*55+36)*lowdim+lsi)*1] + fp287;
target[((hsi*135+36)*lowdim+lsi)*1] = fp286;
LIBINT2_REALTYPE fp285;
fp285 = inteval->BA_x[vi] * src1[((hsi*45+37)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = src0[((hsi*55+37)*lowdim+lsi)*1] + fp285;
target[((hsi*135+37)*lowdim+lsi)*1] = fp284;
LIBINT2_REALTYPE fp283;
fp283 = inteval->BA_x[vi] * src1[((hsi*45+38)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = src0[((hsi*55+38)*lowdim+lsi)*1] + fp283;
target[((hsi*135+38)*lowdim+lsi)*1] = fp282;
LIBINT2_REALTYPE fp281;
fp281 = inteval->BA_x[vi] * src1[((hsi*45+39)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = src0[((hsi*55+39)*lowdim+lsi)*1] + fp281;
target[((hsi*135+39)*lowdim+lsi)*1] = fp280;
LIBINT2_REALTYPE fp279;
fp279 = inteval->BA_x[vi] * src1[((hsi*45+40)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = src0[((hsi*55+40)*lowdim+lsi)*1] + fp279;
target[((hsi*135+40)*lowdim+lsi)*1] = fp278;
LIBINT2_REALTYPE fp277;
fp277 = inteval->BA_x[vi] * src1[((hsi*45+41)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = src0[((hsi*55+41)*lowdim+lsi)*1] + fp277;
target[((hsi*135+41)*lowdim+lsi)*1] = fp276;
LIBINT2_REALTYPE fp275;
fp275 = inteval->BA_x[vi] * src1[((hsi*45+42)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = src0[((hsi*55+42)*lowdim+lsi)*1] + fp275;
target[((hsi*135+42)*lowdim+lsi)*1] = fp274;
LIBINT2_REALTYPE fp273;
fp273 = inteval->BA_x[vi] * src1[((hsi*45+43)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = src0[((hsi*55+43)*lowdim+lsi)*1] + fp273;
target[((hsi*135+43)*lowdim+lsi)*1] = fp272;
LIBINT2_REALTYPE fp271;
fp271 = inteval->BA_x[vi] * src1[((hsi*45+44)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = src0[((hsi*55+44)*lowdim+lsi)*1] + fp271;
target[((hsi*135+44)*lowdim+lsi)*1] = fp270;
LIBINT2_REALTYPE fp267;
fp267 = 1.0000000000000000e+00 * src2[((hsi*45+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = inteval->BA_y[vi] * src1[((hsi*45+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = src0[((hsi*55+1)*lowdim+lsi)*1] + fp269;
LIBINT2_REALTYPE fp266;
fp266 = fp268 + fp267;
target[((hsi*135+45)*lowdim+lsi)*1] = fp266;
LIBINT2_REALTYPE fp263;
fp263 = 1.0000000000000000e+00 * src2[((hsi*45+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = inteval->BA_y[vi] * src1[((hsi*45+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = src0[((hsi*55+3)*lowdim+lsi)*1] + fp265;
LIBINT2_REALTYPE fp262;
fp262 = fp264 + fp263;
target[((hsi*135+46)*lowdim+lsi)*1] = fp262;
LIBINT2_REALTYPE fp259;
fp259 = 1.0000000000000000e+00 * src2[((hsi*45+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = inteval->BA_y[vi] * src1[((hsi*45+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = src0[((hsi*55+4)*lowdim+lsi)*1] + fp261;
LIBINT2_REALTYPE fp258;
fp258 = fp260 + fp259;
target[((hsi*135+47)*lowdim+lsi)*1] = fp258;
LIBINT2_REALTYPE fp255;
fp255 = 1.0000000000000000e+00 * src2[((hsi*45+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->BA_y[vi] * src1[((hsi*45+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = src0[((hsi*55+6)*lowdim+lsi)*1] + fp257;
LIBINT2_REALTYPE fp254;
fp254 = fp256 + fp255;
target[((hsi*135+48)*lowdim+lsi)*1] = fp254;
LIBINT2_REALTYPE fp251;
fp251 = 1.0000000000000000e+00 * src2[((hsi*45+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = inteval->BA_y[vi] * src1[((hsi*45+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = src0[((hsi*55+7)*lowdim+lsi)*1] + fp253;
LIBINT2_REALTYPE fp250;
fp250 = fp252 + fp251;
target[((hsi*135+49)*lowdim+lsi)*1] = fp250;
LIBINT2_REALTYPE fp359;
fp359 = inteval->BA_x[vi] * src1[((hsi*45+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = src0[((hsi*55+0)*lowdim+lsi)*1] + fp359;
target[((hsi*135+0)*lowdim+lsi)*1] = fp358;
LIBINT2_REALTYPE fp183;
fp183 = 1.0000000000000000e+00 * src2[((hsi*45+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->BA_y[vi] * src1[((hsi*45+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = src0[((hsi*55+28)*lowdim+lsi)*1] + fp185;
LIBINT2_REALTYPE fp182;
fp182 = fp184 + fp183;
target[((hsi*135+66)*lowdim+lsi)*1] = fp182;
LIBINT2_REALTYPE fp187;
fp187 = 1.0000000000000000e+00 * src2[((hsi*45+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->BA_y[vi] * src1[((hsi*45+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*55+26)*lowdim+lsi)*1] + fp189;
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
target[((hsi*135+65)*lowdim+lsi)*1] = fp186;
LIBINT2_REALTYPE fp191;
fp191 = 1.0000000000000000e+00 * src2[((hsi*45+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = inteval->BA_y[vi] * src1[((hsi*45+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*55+25)*lowdim+lsi)*1] + fp193;
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
target[((hsi*135+64)*lowdim+lsi)*1] = fp190;
LIBINT2_REALTYPE fp195;
fp195 = 1.0000000000000000e+00 * src2[((hsi*45+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = inteval->BA_y[vi] * src1[((hsi*45+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = src0[((hsi*55+24)*lowdim+lsi)*1] + fp197;
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
target[((hsi*135+63)*lowdim+lsi)*1] = fp194;
LIBINT2_REALTYPE fp199;
fp199 = 1.0000000000000000e+00 * src2[((hsi*45+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->BA_y[vi] * src1[((hsi*45+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*55+23)*lowdim+lsi)*1] + fp201;
LIBINT2_REALTYPE fp198;
fp198 = fp200 + fp199;
target[((hsi*135+62)*lowdim+lsi)*1] = fp198;
LIBINT2_REALTYPE fp203;
fp203 = 1.0000000000000000e+00 * src2[((hsi*45+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->BA_y[vi] * src1[((hsi*45+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*55+22)*lowdim+lsi)*1] + fp205;
LIBINT2_REALTYPE fp202;
fp202 = fp204 + fp203;
target[((hsi*135+61)*lowdim+lsi)*1] = fp202;
LIBINT2_REALTYPE fp207;
fp207 = 1.0000000000000000e+00 * src2[((hsi*45+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = inteval->BA_y[vi] * src1[((hsi*45+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = src0[((hsi*55+21)*lowdim+lsi)*1] + fp209;
LIBINT2_REALTYPE fp206;
fp206 = fp208 + fp207;
target[((hsi*135+60)*lowdim+lsi)*1] = fp206;
LIBINT2_REALTYPE fp247;
fp247 = 1.0000000000000000e+00 * src2[((hsi*45+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = inteval->BA_y[vi] * src1[((hsi*45+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = src0[((hsi*55+8)*lowdim+lsi)*1] + fp249;
LIBINT2_REALTYPE fp246;
fp246 = fp248 + fp247;
target[((hsi*135+50)*lowdim+lsi)*1] = fp246;
LIBINT2_REALTYPE fp215;
fp215 = 1.0000000000000000e+00 * src2[((hsi*45+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = inteval->BA_y[vi] * src1[((hsi*45+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = src0[((hsi*55+18)*lowdim+lsi)*1] + fp217;
LIBINT2_REALTYPE fp214;
fp214 = fp216 + fp215;
target[((hsi*135+58)*lowdim+lsi)*1] = fp214;
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * src2[((hsi*45+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->BA_y[vi] * src1[((hsi*45+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = src0[((hsi*55+17)*lowdim+lsi)*1] + fp221;
LIBINT2_REALTYPE fp218;
fp218 = fp220 + fp219;
target[((hsi*135+57)*lowdim+lsi)*1] = fp218;
LIBINT2_REALTYPE fp223;
fp223 = 1.0000000000000000e+00 * src2[((hsi*45+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = inteval->BA_y[vi] * src1[((hsi*45+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*55+16)*lowdim+lsi)*1] + fp225;
LIBINT2_REALTYPE fp222;
fp222 = fp224 + fp223;
target[((hsi*135+56)*lowdim+lsi)*1] = fp222;
LIBINT2_REALTYPE fp227;
fp227 = 1.0000000000000000e+00 * src2[((hsi*45+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->BA_y[vi] * src1[((hsi*45+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = src0[((hsi*55+15)*lowdim+lsi)*1] + fp229;
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
target[((hsi*135+55)*lowdim+lsi)*1] = fp226;
LIBINT2_REALTYPE fp231;
fp231 = 1.0000000000000000e+00 * src2[((hsi*45+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->BA_y[vi] * src1[((hsi*45+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = src0[((hsi*55+13)*lowdim+lsi)*1] + fp233;
LIBINT2_REALTYPE fp230;
fp230 = fp232 + fp231;
target[((hsi*135+54)*lowdim+lsi)*1] = fp230;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * src2[((hsi*45+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = inteval->BA_y[vi] * src1[((hsi*45+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = src0[((hsi*55+12)*lowdim+lsi)*1] + fp237;
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
target[((hsi*135+53)*lowdim+lsi)*1] = fp234;
LIBINT2_REALTYPE fp239;
fp239 = 1.0000000000000000e+00 * src2[((hsi*45+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = inteval->BA_y[vi] * src1[((hsi*45+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*55+11)*lowdim+lsi)*1] + fp241;
LIBINT2_REALTYPE fp238;
fp238 = fp240 + fp239;
target[((hsi*135+52)*lowdim+lsi)*1] = fp238;
LIBINT2_REALTYPE fp243;
fp243 = 1.0000000000000000e+00 * src2[((hsi*45+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = inteval->BA_y[vi] * src1[((hsi*45+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = src0[((hsi*55+10)*lowdim+lsi)*1] + fp245;
LIBINT2_REALTYPE fp242;
fp242 = fp244 + fp243;
target[((hsi*135+51)*lowdim+lsi)*1] = fp242;
LIBINT2_REALTYPE fp211;
fp211 = 1.0000000000000000e+00 * src2[((hsi*45+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = inteval->BA_y[vi] * src1[((hsi*45+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = src0[((hsi*55+19)*lowdim+lsi)*1] + fp213;
LIBINT2_REALTYPE fp210;
fp210 = fp212 + fp211;
target[((hsi*135+59)*lowdim+lsi)*1] = fp210;
LIBINT2_REALTYPE fp327;
fp327 = inteval->BA_x[vi] * src1[((hsi*45+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = src0[((hsi*55+16)*lowdim+lsi)*1] + fp327;
target[((hsi*135+16)*lowdim+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = inteval->BA_x[vi] * src1[((hsi*45+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = src0[((hsi*55+15)*lowdim+lsi)*1] + fp329;
target[((hsi*135+15)*lowdim+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = inteval->BA_x[vi] * src1[((hsi*45+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = src0[((hsi*55+14)*lowdim+lsi)*1] + fp331;
target[((hsi*135+14)*lowdim+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = inteval->BA_x[vi] * src1[((hsi*45+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = src0[((hsi*55+13)*lowdim+lsi)*1] + fp333;
target[((hsi*135+13)*lowdim+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = inteval->BA_x[vi] * src1[((hsi*45+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = src0[((hsi*55+12)*lowdim+lsi)*1] + fp335;
target[((hsi*135+12)*lowdim+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = inteval->BA_x[vi] * src1[((hsi*45+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = src0[((hsi*55+11)*lowdim+lsi)*1] + fp337;
target[((hsi*135+11)*lowdim+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = inteval->BA_x[vi] * src1[((hsi*45+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = src0[((hsi*55+10)*lowdim+lsi)*1] + fp339;
target[((hsi*135+10)*lowdim+lsi)*1] = fp338;
LIBINT2_REALTYPE fp291;
fp291 = inteval->BA_x[vi] * src1[((hsi*45+34)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = src0[((hsi*55+34)*lowdim+lsi)*1] + fp291;
target[((hsi*135+34)*lowdim+lsi)*1] = fp290;
LIBINT2_REALTYPE fp343;
fp343 = inteval->BA_x[vi] * src1[((hsi*45+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = src0[((hsi*55+8)*lowdim+lsi)*1] + fp343;
target[((hsi*135+8)*lowdim+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = inteval->BA_x[vi] * src1[((hsi*45+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = src0[((hsi*55+7)*lowdim+lsi)*1] + fp345;
target[((hsi*135+7)*lowdim+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = inteval->BA_x[vi] * src1[((hsi*45+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = src0[((hsi*55+6)*lowdim+lsi)*1] + fp347;
target[((hsi*135+6)*lowdim+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = inteval->BA_x[vi] * src1[((hsi*45+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = src0[((hsi*55+5)*lowdim+lsi)*1] + fp349;
target[((hsi*135+5)*lowdim+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = inteval->BA_x[vi] * src1[((hsi*45+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = src0[((hsi*55+4)*lowdim+lsi)*1] + fp351;
target[((hsi*135+4)*lowdim+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = inteval->BA_x[vi] * src1[((hsi*45+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = src0[((hsi*55+3)*lowdim+lsi)*1] + fp353;
target[((hsi*135+3)*lowdim+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = inteval->BA_x[vi] * src1[((hsi*45+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = src0[((hsi*55+2)*lowdim+lsi)*1] + fp355;
target[((hsi*135+2)*lowdim+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = inteval->BA_x[vi] * src1[((hsi*45+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = src0[((hsi*55+1)*lowdim+lsi)*1] + fp357;
target[((hsi*135+1)*lowdim+lsi)*1] = fp356;
LIBINT2_REALTYPE fp341;
fp341 = inteval->BA_x[vi] * src1[((hsi*45+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = src0[((hsi*55+9)*lowdim+lsi)*1] + fp341;
target[((hsi*135+9)*lowdim+lsi)*1] = fp340;
LIBINT2_REALTYPE fp293;
fp293 = inteval->BA_x[vi] * src1[((hsi*45+33)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = src0[((hsi*55+33)*lowdim+lsi)*1] + fp293;
target[((hsi*135+33)*lowdim+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = inteval->BA_x[vi] * src1[((hsi*45+32)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = src0[((hsi*55+32)*lowdim+lsi)*1] + fp295;
target[((hsi*135+32)*lowdim+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = inteval->BA_x[vi] * src1[((hsi*45+31)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = src0[((hsi*55+31)*lowdim+lsi)*1] + fp297;
target[((hsi*135+31)*lowdim+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = inteval->BA_x[vi] * src1[((hsi*45+30)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = src0[((hsi*55+30)*lowdim+lsi)*1] + fp299;
target[((hsi*135+30)*lowdim+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = inteval->BA_x[vi] * src1[((hsi*45+29)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = src0[((hsi*55+29)*lowdim+lsi)*1] + fp301;
target[((hsi*135+29)*lowdim+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = inteval->BA_x[vi] * src1[((hsi*45+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = src0[((hsi*55+28)*lowdim+lsi)*1] + fp303;
target[((hsi*135+28)*lowdim+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = inteval->BA_x[vi] * src1[((hsi*45+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = src0[((hsi*55+27)*lowdim+lsi)*1] + fp305;
target[((hsi*135+27)*lowdim+lsi)*1] = fp304;
LIBINT2_REALTYPE fp325;
fp325 = inteval->BA_x[vi] * src1[((hsi*45+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = src0[((hsi*55+17)*lowdim+lsi)*1] + fp325;
target[((hsi*135+17)*lowdim+lsi)*1] = fp324;
LIBINT2_REALTYPE fp309;
fp309 = inteval->BA_x[vi] * src1[((hsi*45+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = src0[((hsi*55+25)*lowdim+lsi)*1] + fp309;
target[((hsi*135+25)*lowdim+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = inteval->BA_x[vi] * src1[((hsi*45+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = src0[((hsi*55+24)*lowdim+lsi)*1] + fp311;
target[((hsi*135+24)*lowdim+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = inteval->BA_x[vi] * src1[((hsi*45+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = src0[((hsi*55+23)*lowdim+lsi)*1] + fp313;
target[((hsi*135+23)*lowdim+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = inteval->BA_x[vi] * src1[((hsi*45+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = src0[((hsi*55+22)*lowdim+lsi)*1] + fp315;
target[((hsi*135+22)*lowdim+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = inteval->BA_x[vi] * src1[((hsi*45+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = src0[((hsi*55+21)*lowdim+lsi)*1] + fp317;
target[((hsi*135+21)*lowdim+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = inteval->BA_x[vi] * src1[((hsi*45+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = src0[((hsi*55+20)*lowdim+lsi)*1] + fp319;
target[((hsi*135+20)*lowdim+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = inteval->BA_x[vi] * src1[((hsi*45+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = src0[((hsi*55+19)*lowdim+lsi)*1] + fp321;
target[((hsi*135+19)*lowdim+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = inteval->BA_x[vi] * src1[((hsi*45+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = src0[((hsi*55+18)*lowdim+lsi)*1] + fp323;
target[((hsi*135+18)*lowdim+lsi)*1] = fp322;
LIBINT2_REALTYPE fp307;
fp307 = inteval->BA_x[vi] * src1[((hsi*45+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = src0[((hsi*55+26)*lowdim+lsi)*1] + fp307;
target[((hsi*135+26)*lowdim+lsi)*1] = fp306;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BA_z[vi] * src1[((hsi*45+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*55+35)*lowdim+lsi)*1] + fp35;
target[((hsi*135+117)*lowdim+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BA_z[vi] * src1[((hsi*45+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*55+34)*lowdim+lsi)*1] + fp37;
target[((hsi*135+116)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BA_z[vi] * src1[((hsi*45+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*55+33)*lowdim+lsi)*1] + fp39;
target[((hsi*135+115)*lowdim+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BA_z[vi] * src1[((hsi*45+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*55+32)*lowdim+lsi)*1] + fp41;
target[((hsi*135+114)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BA_z[vi] * src1[((hsi*45+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*55+31)*lowdim+lsi)*1] + fp43;
target[((hsi*135+113)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BA_z[vi] * src1[((hsi*45+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*55+30)*lowdim+lsi)*1] + fp45;
target[((hsi*135+112)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->BA_z[vi] * src1[((hsi*45+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*55+29)*lowdim+lsi)*1] + fp47;
target[((hsi*135+111)*lowdim+lsi)*1] = fp46;
LIBINT2_REALTYPE fp179;
fp179 = 1.0000000000000000e+00 * src2[((hsi*45+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = inteval->BA_y[vi] * src1[((hsi*45+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = src0[((hsi*55+29)*lowdim+lsi)*1] + fp181;
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
target[((hsi*135+67)*lowdim+lsi)*1] = fp178;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BA_z[vi] * src1[((hsi*45+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*55+26)*lowdim+lsi)*1] + fp51;
target[((hsi*135+109)*lowdim+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BA_z[vi] * src1[((hsi*45+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*55+25)*lowdim+lsi)*1] + fp53;
target[((hsi*135+108)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BA_z[vi] * src1[((hsi*45+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*55+24)*lowdim+lsi)*1] + fp55;
target[((hsi*135+107)*lowdim+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BA_z[vi] * src1[((hsi*45+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*55+23)*lowdim+lsi)*1] + fp57;
target[((hsi*135+106)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BA_z[vi] * src1[((hsi*45+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*55+22)*lowdim+lsi)*1] + fp59;
target[((hsi*135+105)*lowdim+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = inteval->BA_z[vi] * src1[((hsi*45+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*55+20)*lowdim+lsi)*1] + fp61;
target[((hsi*135+104)*lowdim+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BA_z[vi] * src1[((hsi*45+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*55+19)*lowdim+lsi)*1] + fp63;
target[((hsi*135+103)*lowdim+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BA_z[vi] * src1[((hsi*45+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*55+18)*lowdim+lsi)*1] + fp65;
target[((hsi*135+102)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp49;
fp49 = inteval->BA_z[vi] * src1[((hsi*45+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*55+27)*lowdim+lsi)*1] + fp49;
target[((hsi*135+110)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp1;
fp1 = inteval->BA_z[vi] * src1[((hsi*45+44)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*55+54)*lowdim+lsi)*1] + fp1;
target[((hsi*135+134)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->BA_z[vi] * src1[((hsi*45+43)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*55+53)*lowdim+lsi)*1] + fp3;
target[((hsi*135+133)*lowdim+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->BA_z[vi] * src1[((hsi*45+42)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*55+52)*lowdim+lsi)*1] + fp5;
target[((hsi*135+132)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = inteval->BA_z[vi] * src1[((hsi*45+41)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*55+51)*lowdim+lsi)*1] + fp7;
target[((hsi*135+131)*lowdim+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BA_z[vi] * src1[((hsi*45+40)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*55+50)*lowdim+lsi)*1] + fp9;
target[((hsi*135+130)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BA_z[vi] * src1[((hsi*45+39)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*55+49)*lowdim+lsi)*1] + fp11;
target[((hsi*135+129)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BA_z[vi] * src1[((hsi*45+38)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*55+48)*lowdim+lsi)*1] + fp13;
target[((hsi*135+128)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BA_z[vi] * src1[((hsi*45+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*55+37)*lowdim+lsi)*1] + fp33;
target[((hsi*135+118)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp17;
fp17 = inteval->BA_z[vi] * src1[((hsi*45+36)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*55+46)*lowdim+lsi)*1] + fp17;
target[((hsi*135+126)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->BA_z[vi] * src1[((hsi*45+35)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*55+44)*lowdim+lsi)*1] + fp19;
target[((hsi*135+125)*lowdim+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BA_z[vi] * src1[((hsi*45+34)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*55+43)*lowdim+lsi)*1] + fp21;
target[((hsi*135+124)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BA_z[vi] * src1[((hsi*45+33)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*55+42)*lowdim+lsi)*1] + fp23;
target[((hsi*135+123)*lowdim+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BA_z[vi] * src1[((hsi*45+32)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*55+41)*lowdim+lsi)*1] + fp25;
target[((hsi*135+122)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BA_z[vi] * src1[((hsi*45+31)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*55+40)*lowdim+lsi)*1] + fp27;
target[((hsi*135+121)*lowdim+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BA_z[vi] * src1[((hsi*45+30)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*55+39)*lowdim+lsi)*1] + fp29;
target[((hsi*135+120)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BA_z[vi] * src1[((hsi*45+29)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*55+38)*lowdim+lsi)*1] + fp31;
target[((hsi*135+119)*lowdim+lsi)*1] = fp30;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BA_z[vi] * src1[((hsi*45+37)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*55+47)*lowdim+lsi)*1] + fp15;
target[((hsi*135+127)*lowdim+lsi)*1] = fp14;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * src2[((hsi*45+38)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->BA_y[vi] * src1[((hsi*45+38)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*55+47)*lowdim+lsi)*1] + fp117;
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
target[((hsi*135+83)*lowdim+lsi)*1] = fp114;
LIBINT2_REALTYPE fp119;
fp119 = 1.0000000000000000e+00 * src2[((hsi*45+37)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->BA_y[vi] * src1[((hsi*45+37)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*55+46)*lowdim+lsi)*1] + fp121;
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
target[((hsi*135+82)*lowdim+lsi)*1] = fp118;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * src2[((hsi*45+36)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->BA_y[vi] * src1[((hsi*45+36)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*55+45)*lowdim+lsi)*1] + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*135+81)*lowdim+lsi)*1] = fp122;
LIBINT2_REALTYPE fp127;
fp127 = 1.0000000000000000e+00 * src2[((hsi*45+35)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->BA_y[vi] * src1[((hsi*45+35)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*55+43)*lowdim+lsi)*1] + fp129;
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
target[((hsi*135+80)*lowdim+lsi)*1] = fp126;
LIBINT2_REALTYPE fp131;
fp131 = 1.0000000000000000e+00 * src2[((hsi*45+34)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->BA_y[vi] * src1[((hsi*45+34)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*55+42)*lowdim+lsi)*1] + fp133;
LIBINT2_REALTYPE fp130;
fp130 = fp132 + fp131;
target[((hsi*135+79)*lowdim+lsi)*1] = fp130;
LIBINT2_REALTYPE fp135;
fp135 = 1.0000000000000000e+00 * src2[((hsi*45+33)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->BA_y[vi] * src1[((hsi*45+33)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*55+41)*lowdim+lsi)*1] + fp137;
LIBINT2_REALTYPE fp134;
fp134 = fp136 + fp135;
target[((hsi*135+78)*lowdim+lsi)*1] = fp134;
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * src2[((hsi*45+32)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->BA_y[vi] * src1[((hsi*45+32)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*55+40)*lowdim+lsi)*1] + fp141;
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
target[((hsi*135+77)*lowdim+lsi)*1] = fp138;
LIBINT2_REALTYPE fp67;
fp67 = inteval->BA_z[vi] * src1[((hsi*45+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*55+17)*lowdim+lsi)*1] + fp67;
target[((hsi*135+101)*lowdim+lsi)*1] = fp66;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * src2[((hsi*45+30)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->BA_y[vi] * src1[((hsi*45+30)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = src0[((hsi*55+38)*lowdim+lsi)*1] + fp149;
LIBINT2_REALTYPE fp146;
fp146 = fp148 + fp147;
target[((hsi*135+75)*lowdim+lsi)*1] = fp146;
LIBINT2_REALTYPE fp151;
fp151 = 1.0000000000000000e+00 * src2[((hsi*45+29)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->BA_y[vi] * src1[((hsi*45+29)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*55+37)*lowdim+lsi)*1] + fp153;
LIBINT2_REALTYPE fp150;
fp150 = fp152 + fp151;
target[((hsi*135+74)*lowdim+lsi)*1] = fp150;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * src2[((hsi*45+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->BA_y[vi] * src1[((hsi*45+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*55+36)*lowdim+lsi)*1] + fp157;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
target[((hsi*135+73)*lowdim+lsi)*1] = fp154;
LIBINT2_REALTYPE fp159;
fp159 = 1.0000000000000000e+00 * src2[((hsi*45+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->BA_y[vi] * src1[((hsi*45+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*55+34)*lowdim+lsi)*1] + fp161;
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
target[((hsi*135+72)*lowdim+lsi)*1] = fp158;
LIBINT2_REALTYPE fp163;
fp163 = 1.0000000000000000e+00 * src2[((hsi*45+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->BA_y[vi] * src1[((hsi*45+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = src0[((hsi*55+33)*lowdim+lsi)*1] + fp165;
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
target[((hsi*135+71)*lowdim+lsi)*1] = fp162;
LIBINT2_REALTYPE fp167;
fp167 = 1.0000000000000000e+00 * src2[((hsi*45+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->BA_y[vi] * src1[((hsi*45+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*55+32)*lowdim+lsi)*1] + fp169;
LIBINT2_REALTYPE fp166;
fp166 = fp168 + fp167;
target[((hsi*135+70)*lowdim+lsi)*1] = fp166;
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * src2[((hsi*45+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->BA_y[vi] * src1[((hsi*45+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = src0[((hsi*55+31)*lowdim+lsi)*1] + fp173;
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
target[((hsi*135+69)*lowdim+lsi)*1] = fp170;
LIBINT2_REALTYPE fp175;
fp175 = 1.0000000000000000e+00 * src2[((hsi*45+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = inteval->BA_y[vi] * src1[((hsi*45+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = src0[((hsi*55+30)*lowdim+lsi)*1] + fp177;
LIBINT2_REALTYPE fp174;
fp174 = fp176 + fp175;
target[((hsi*135+68)*lowdim+lsi)*1] = fp174;
LIBINT2_REALTYPE fp143;
fp143 = 1.0000000000000000e+00 * src2[((hsi*45+31)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->BA_y[vi] * src1[((hsi*45+31)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*55+39)*lowdim+lsi)*1] + fp145;
LIBINT2_REALTYPE fp142;
fp142 = fp144 + fp143;
target[((hsi*135+76)*lowdim+lsi)*1] = fp142;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BA_z[vi] * src1[((hsi*45+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*55+16)*lowdim+lsi)*1] + fp69;
target[((hsi*135+100)*lowdim+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BA_z[vi] * src1[((hsi*45+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*55+14)*lowdim+lsi)*1] + fp71;
target[((hsi*135+99)*lowdim+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->BA_z[vi] * src1[((hsi*45+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*55+13)*lowdim+lsi)*1] + fp73;
target[((hsi*135+98)*lowdim+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BA_z[vi] * src1[((hsi*45+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*55+12)*lowdim+lsi)*1] + fp75;
target[((hsi*135+97)*lowdim+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BA_z[vi] * src1[((hsi*45+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*55+11)*lowdim+lsi)*1] + fp77;
target[((hsi*135+96)*lowdim+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->BA_z[vi] * src1[((hsi*45+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*55+9)*lowdim+lsi)*1] + fp79;
target[((hsi*135+95)*lowdim+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->BA_z[vi] * src1[((hsi*45+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*55+8)*lowdim+lsi)*1] + fp81;
target[((hsi*135+94)*lowdim+lsi)*1] = fp80;
LIBINT2_REALTYPE fp111;
fp111 = 1.0000000000000000e+00 * src2[((hsi*45+39)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->BA_y[vi] * src1[((hsi*45+39)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*55+48)*lowdim+lsi)*1] + fp113;
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
target[((hsi*135+84)*lowdim+lsi)*1] = fp110;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BA_z[vi] * src1[((hsi*45+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*55+5)*lowdim+lsi)*1] + fp85;
target[((hsi*135+92)*lowdim+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BA_z[vi] * src1[((hsi*45+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*55+4)*lowdim+lsi)*1] + fp87;
target[((hsi*135+91)*lowdim+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BA_z[vi] * src1[((hsi*45+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*55+2)*lowdim+lsi)*1] + fp89;
target[((hsi*135+90)*lowdim+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src2[((hsi*45+44)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->BA_y[vi] * src1[((hsi*45+44)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*55+53)*lowdim+lsi)*1] + fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*135+89)*lowdim+lsi)*1] = fp90;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * src2[((hsi*45+43)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->BA_y[vi] * src1[((hsi*45+43)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*55+52)*lowdim+lsi)*1] + fp97;
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
target[((hsi*135+88)*lowdim+lsi)*1] = fp94;
LIBINT2_REALTYPE fp99;
fp99 = 1.0000000000000000e+00 * src2[((hsi*45+42)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->BA_y[vi] * src1[((hsi*45+42)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*55+51)*lowdim+lsi)*1] + fp101;
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
target[((hsi*135+87)*lowdim+lsi)*1] = fp98;
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * src2[((hsi*45+41)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->BA_y[vi] * src1[((hsi*45+41)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*55+50)*lowdim+lsi)*1] + fp105;
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
target[((hsi*135+86)*lowdim+lsi)*1] = fp102;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * src2[((hsi*45+40)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->BA_y[vi] * src1[((hsi*45+40)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*55+49)*lowdim+lsi)*1] + fp109;
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
target[((hsi*135+85)*lowdim+lsi)*1] = fp106;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BA_z[vi] * src1[((hsi*45+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*55+7)*lowdim+lsi)*1] + fp83;
target[((hsi*135+93)*lowdim+lsi)*1] = fp82;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 360 */
}

#ifdef __cplusplus
};
#endif
