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
void HRRPart1bra0ket0h010d(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, int highdim) {

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
fp245 = 1.0000000000000000e+00 * src2[((hsi*63+16)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = inteval->CD_y[vi] * src1[((hsi*63+16)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = src0[((hsi*84+25)*1+lsi)*1] + fp247;
LIBINT2_REALTYPE fp244;
fp244 = fp246 + fp245;
target[((hsi*126+33)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp243;
fp243 = inteval->CD_z[vi] * src1[((hsi*63+16)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = src0[((hsi*84+28)*1+lsi)*1] + fp243;
target[((hsi*126+34)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp241;
fp241 = inteval->CD_z[vi] * src1[((hsi*63+17)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*84+29)*1+lsi)*1] + fp241;
target[((hsi*126+35)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp239;
fp239 = inteval->CD_x[vi] * src1[((hsi*63+18)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = src0[((hsi*84+18)*1+lsi)*1] + fp239;
target[((hsi*126+36)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * src2[((hsi*63+18)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = inteval->CD_y[vi] * src1[((hsi*63+18)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = src0[((hsi*84+30)*1+lsi)*1] + fp237;
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
target[((hsi*126+37)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp233;
fp233 = inteval->CD_z[vi] * src1[((hsi*63+18)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = src0[((hsi*84+33)*1+lsi)*1] + fp233;
target[((hsi*126+38)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp229;
fp229 = 1.0000000000000000e+00 * src2[((hsi*63+19)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = inteval->CD_y[vi] * src1[((hsi*63+19)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = src0[((hsi*84+31)*1+lsi)*1] + fp231;
LIBINT2_REALTYPE fp228;
fp228 = fp230 + fp229;
target[((hsi*126+39)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp227;
fp227 = inteval->CD_z[vi] * src1[((hsi*63+19)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = src0[((hsi*84+34)*1+lsi)*1] + fp227;
target[((hsi*126+40)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp225;
fp225 = inteval->CD_z[vi] * src1[((hsi*63+20)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*84+35)*1+lsi)*1] + fp225;
target[((hsi*126+41)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp223;
fp223 = inteval->CD_x[vi] * src1[((hsi*63+21)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = src0[((hsi*84+21)*1+lsi)*1] + fp223;
target[((hsi*126+42)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * src2[((hsi*63+21)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->CD_y[vi] * src1[((hsi*63+21)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = src0[((hsi*84+33)*1+lsi)*1] + fp221;
LIBINT2_REALTYPE fp218;
fp218 = fp220 + fp219;
target[((hsi*126+43)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp217;
fp217 = inteval->CD_z[vi] * src1[((hsi*63+21)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = src0[((hsi*84+36)*1+lsi)*1] + fp217;
target[((hsi*126+44)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp213;
fp213 = 1.0000000000000000e+00 * src2[((hsi*63+22)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = inteval->CD_y[vi] * src1[((hsi*63+22)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = src0[((hsi*84+34)*1+lsi)*1] + fp215;
LIBINT2_REALTYPE fp212;
fp212 = fp214 + fp213;
target[((hsi*126+45)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp211;
fp211 = inteval->CD_z[vi] * src1[((hsi*63+22)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = src0[((hsi*84+37)*1+lsi)*1] + fp211;
target[((hsi*126+46)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp335;
fp335 = inteval->CD_x[vi] * src1[((hsi*63+0)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = src0[((hsi*84+0)*1+lsi)*1] + fp335;
target[((hsi*126+0)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp207;
fp207 = inteval->CD_x[vi] * src1[((hsi*63+24)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = src0[((hsi*84+24)*1+lsi)*1] + fp207;
target[((hsi*126+48)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp203;
fp203 = 1.0000000000000000e+00 * src2[((hsi*63+24)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->CD_y[vi] * src1[((hsi*63+24)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*84+36)*1+lsi)*1] + fp205;
LIBINT2_REALTYPE fp202;
fp202 = fp204 + fp203;
target[((hsi*126+49)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp201;
fp201 = inteval->CD_z[vi] * src1[((hsi*63+24)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*84+39)*1+lsi)*1] + fp201;
target[((hsi*126+50)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp197;
fp197 = 1.0000000000000000e+00 * src2[((hsi*63+25)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = inteval->CD_y[vi] * src1[((hsi*63+25)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = src0[((hsi*84+37)*1+lsi)*1] + fp199;
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
target[((hsi*126+51)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp195;
fp195 = inteval->CD_z[vi] * src1[((hsi*63+25)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src0[((hsi*84+40)*1+lsi)*1] + fp195;
target[((hsi*126+52)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp193;
fp193 = inteval->CD_z[vi] * src1[((hsi*63+26)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*84+41)*1+lsi)*1] + fp193;
target[((hsi*126+53)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp191;
fp191 = inteval->CD_x[vi] * src1[((hsi*63+27)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = src0[((hsi*84+27)*1+lsi)*1] + fp191;
target[((hsi*126+54)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp187;
fp187 = 1.0000000000000000e+00 * src2[((hsi*63+27)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->CD_y[vi] * src1[((hsi*63+27)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*84+39)*1+lsi)*1] + fp189;
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
target[((hsi*126+55)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp185;
fp185 = inteval->CD_z[vi] * src1[((hsi*63+27)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = src0[((hsi*84+42)*1+lsi)*1] + fp185;
target[((hsi*126+56)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp181;
fp181 = 1.0000000000000000e+00 * src2[((hsi*63+28)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->CD_y[vi] * src1[((hsi*63+28)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*84+40)*1+lsi)*1] + fp183;
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
target[((hsi*126+57)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp179;
fp179 = inteval->CD_z[vi] * src1[((hsi*63+28)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = src0[((hsi*84+43)*1+lsi)*1] + fp179;
target[((hsi*126+58)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp177;
fp177 = inteval->CD_z[vi] * src1[((hsi*63+29)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = src0[((hsi*84+44)*1+lsi)*1] + fp177;
target[((hsi*126+59)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp175;
fp175 = inteval->CD_x[vi] * src1[((hsi*63+30)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*84+30)*1+lsi)*1] + fp175;
target[((hsi*126+60)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * src2[((hsi*63+30)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->CD_y[vi] * src1[((hsi*63+30)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = src0[((hsi*84+45)*1+lsi)*1] + fp173;
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
target[((hsi*126+61)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp169;
fp169 = inteval->CD_z[vi] * src1[((hsi*63+30)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*84+48)*1+lsi)*1] + fp169;
target[((hsi*126+62)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp209;
fp209 = inteval->CD_z[vi] * src1[((hsi*63+23)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = src0[((hsi*84+38)*1+lsi)*1] + fp209;
target[((hsi*126+47)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp331;
fp331 = 1.0000000000000000e+00 * src2[((hsi*63+0)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = inteval->CD_y[vi] * src1[((hsi*63+0)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = src0[((hsi*84+3)*1+lsi)*1] + fp333;
LIBINT2_REALTYPE fp330;
fp330 = fp332 + fp331;
target[((hsi*126+1)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp329;
fp329 = inteval->CD_z[vi] * src1[((hsi*63+0)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = src0[((hsi*84+6)*1+lsi)*1] + fp329;
target[((hsi*126+2)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp325;
fp325 = 1.0000000000000000e+00 * src2[((hsi*63+1)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = inteval->CD_y[vi] * src1[((hsi*63+1)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = src0[((hsi*84+4)*1+lsi)*1] + fp327;
LIBINT2_REALTYPE fp324;
fp324 = fp326 + fp325;
target[((hsi*126+3)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp323;
fp323 = inteval->CD_z[vi] * src1[((hsi*63+1)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = src0[((hsi*84+7)*1+lsi)*1] + fp323;
target[((hsi*126+4)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp321;
fp321 = inteval->CD_z[vi] * src1[((hsi*63+2)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = src0[((hsi*84+8)*1+lsi)*1] + fp321;
target[((hsi*126+5)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp319;
fp319 = inteval->CD_x[vi] * src1[((hsi*63+3)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = src0[((hsi*84+3)*1+lsi)*1] + fp319;
target[((hsi*126+6)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp315;
fp315 = 1.0000000000000000e+00 * src2[((hsi*63+3)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = inteval->CD_y[vi] * src1[((hsi*63+3)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = src0[((hsi*84+9)*1+lsi)*1] + fp317;
LIBINT2_REALTYPE fp314;
fp314 = fp316 + fp315;
target[((hsi*126+7)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp313;
fp313 = inteval->CD_z[vi] * src1[((hsi*63+3)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = src0[((hsi*84+12)*1+lsi)*1] + fp313;
target[((hsi*126+8)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp309;
fp309 = 1.0000000000000000e+00 * src2[((hsi*63+4)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = inteval->CD_y[vi] * src1[((hsi*63+4)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = src0[((hsi*84+10)*1+lsi)*1] + fp311;
LIBINT2_REALTYPE fp308;
fp308 = fp310 + fp309;
target[((hsi*126+9)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp307;
fp307 = inteval->CD_z[vi] * src1[((hsi*63+4)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = src0[((hsi*84+13)*1+lsi)*1] + fp307;
target[((hsi*126+10)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp305;
fp305 = inteval->CD_z[vi] * src1[((hsi*63+5)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = src0[((hsi*84+14)*1+lsi)*1] + fp305;
target[((hsi*126+11)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp303;
fp303 = inteval->CD_x[vi] * src1[((hsi*63+6)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = src0[((hsi*84+6)*1+lsi)*1] + fp303;
target[((hsi*126+12)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp299;
fp299 = 1.0000000000000000e+00 * src2[((hsi*63+6)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = inteval->CD_y[vi] * src1[((hsi*63+6)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = src0[((hsi*84+12)*1+lsi)*1] + fp301;
LIBINT2_REALTYPE fp298;
fp298 = fp300 + fp299;
target[((hsi*126+13)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp297;
fp297 = inteval->CD_z[vi] * src1[((hsi*63+6)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = src0[((hsi*84+15)*1+lsi)*1] + fp297;
target[((hsi*126+14)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp293;
fp293 = 1.0000000000000000e+00 * src2[((hsi*63+7)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = inteval->CD_y[vi] * src1[((hsi*63+7)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = src0[((hsi*84+13)*1+lsi)*1] + fp295;
LIBINT2_REALTYPE fp292;
fp292 = fp294 + fp293;
target[((hsi*126+15)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp249;
fp249 = inteval->CD_z[vi] * src1[((hsi*63+15)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = src0[((hsi*84+27)*1+lsi)*1] + fp249;
target[((hsi*126+32)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp289;
fp289 = inteval->CD_z[vi] * src1[((hsi*63+8)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = src0[((hsi*84+17)*1+lsi)*1] + fp289;
target[((hsi*126+17)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp287;
fp287 = inteval->CD_x[vi] * src1[((hsi*63+9)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = src0[((hsi*84+9)*1+lsi)*1] + fp287;
target[((hsi*126+18)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp283;
fp283 = 1.0000000000000000e+00 * src2[((hsi*63+9)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = inteval->CD_y[vi] * src1[((hsi*63+9)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = src0[((hsi*84+18)*1+lsi)*1] + fp285;
LIBINT2_REALTYPE fp282;
fp282 = fp284 + fp283;
target[((hsi*126+19)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp281;
fp281 = inteval->CD_z[vi] * src1[((hsi*63+9)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = src0[((hsi*84+21)*1+lsi)*1] + fp281;
target[((hsi*126+20)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp277;
fp277 = 1.0000000000000000e+00 * src2[((hsi*63+10)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = inteval->CD_y[vi] * src1[((hsi*63+10)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = src0[((hsi*84+19)*1+lsi)*1] + fp279;
LIBINT2_REALTYPE fp276;
fp276 = fp278 + fp277;
target[((hsi*126+21)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp275;
fp275 = inteval->CD_z[vi] * src1[((hsi*63+10)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = src0[((hsi*84+22)*1+lsi)*1] + fp275;
target[((hsi*126+22)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp273;
fp273 = inteval->CD_z[vi] * src1[((hsi*63+11)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = src0[((hsi*84+23)*1+lsi)*1] + fp273;
target[((hsi*126+23)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp271;
fp271 = inteval->CD_x[vi] * src1[((hsi*63+12)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = src0[((hsi*84+12)*1+lsi)*1] + fp271;
target[((hsi*126+24)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp267;
fp267 = 1.0000000000000000e+00 * src2[((hsi*63+12)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = inteval->CD_y[vi] * src1[((hsi*63+12)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = src0[((hsi*84+21)*1+lsi)*1] + fp269;
LIBINT2_REALTYPE fp266;
fp266 = fp268 + fp267;
target[((hsi*126+25)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp265;
fp265 = inteval->CD_z[vi] * src1[((hsi*63+12)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = src0[((hsi*84+24)*1+lsi)*1] + fp265;
target[((hsi*126+26)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp261;
fp261 = 1.0000000000000000e+00 * src2[((hsi*63+13)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = inteval->CD_y[vi] * src1[((hsi*63+13)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = src0[((hsi*84+22)*1+lsi)*1] + fp263;
LIBINT2_REALTYPE fp260;
fp260 = fp262 + fp261;
target[((hsi*126+27)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp259;
fp259 = inteval->CD_z[vi] * src1[((hsi*63+13)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = src0[((hsi*84+25)*1+lsi)*1] + fp259;
target[((hsi*126+28)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp257;
fp257 = inteval->CD_z[vi] * src1[((hsi*63+14)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = src0[((hsi*84+26)*1+lsi)*1] + fp257;
target[((hsi*126+29)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp255;
fp255 = inteval->CD_x[vi] * src1[((hsi*63+15)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = src0[((hsi*84+15)*1+lsi)*1] + fp255;
target[((hsi*126+30)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp251;
fp251 = 1.0000000000000000e+00 * src2[((hsi*63+15)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = inteval->CD_y[vi] * src1[((hsi*63+15)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = src0[((hsi*84+24)*1+lsi)*1] + fp253;
LIBINT2_REALTYPE fp250;
fp250 = fp252 + fp251;
target[((hsi*126+31)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp291;
fp291 = inteval->CD_z[vi] * src1[((hsi*63+7)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = src0[((hsi*84+16)*1+lsi)*1] + fp291;
target[((hsi*126+16)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_x[vi] * src1[((hsi*63+48)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*84+48)*1+lsi)*1] + fp79;
target[((hsi*126+96)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * src2[((hsi*63+48)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->CD_y[vi] * src1[((hsi*63+48)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*84+66)*1+lsi)*1] + fp77;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
target[((hsi*126+97)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp73;
fp73 = inteval->CD_z[vi] * src1[((hsi*63+48)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*84+69)*1+lsi)*1] + fp73;
target[((hsi*126+98)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * src2[((hsi*63+49)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_y[vi] * src1[((hsi*63+49)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*84+67)*1+lsi)*1] + fp71;
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
target[((hsi*126+99)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp67;
fp67 = inteval->CD_z[vi] * src1[((hsi*63+49)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*84+70)*1+lsi)*1] + fp67;
target[((hsi*126+100)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp65;
fp65 = inteval->CD_z[vi] * src1[((hsi*63+50)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*84+71)*1+lsi)*1] + fp65;
target[((hsi*126+101)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp63;
fp63 = inteval->CD_x[vi] * src1[((hsi*63+51)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*84+51)*1+lsi)*1] + fp63;
target[((hsi*126+102)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * src2[((hsi*63+51)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->CD_y[vi] * src1[((hsi*63+51)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*84+69)*1+lsi)*1] + fp61;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*126+103)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_z[vi] * src1[((hsi*63+51)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*84+72)*1+lsi)*1] + fp57;
target[((hsi*126+104)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src2[((hsi*63+52)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->CD_y[vi] * src1[((hsi*63+52)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*84+70)*1+lsi)*1] + fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
target[((hsi*126+105)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp51;
fp51 = inteval->CD_z[vi] * src1[((hsi*63+52)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*84+73)*1+lsi)*1] + fp51;
target[((hsi*126+106)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_z[vi] * src1[((hsi*63+53)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*84+74)*1+lsi)*1] + fp49;
target[((hsi*126+107)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp47;
fp47 = inteval->CD_x[vi] * src1[((hsi*63+54)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*84+54)*1+lsi)*1] + fp47;
target[((hsi*126+108)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * src2[((hsi*63+54)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->CD_y[vi] * src1[((hsi*63+54)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*84+72)*1+lsi)*1] + fp45;
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*126+109)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp165;
fp165 = 1.0000000000000000e+00 * src2[((hsi*63+31)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->CD_y[vi] * src1[((hsi*63+31)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = src0[((hsi*84+46)*1+lsi)*1] + fp167;
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
target[((hsi*126+63)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * src2[((hsi*63+55)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_y[vi] * src1[((hsi*63+55)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*84+73)*1+lsi)*1] + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
target[((hsi*126+111)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp35;
fp35 = inteval->CD_z[vi] * src1[((hsi*63+55)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*84+76)*1+lsi)*1] + fp35;
target[((hsi*126+112)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp33;
fp33 = inteval->CD_z[vi] * src1[((hsi*63+56)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*84+77)*1+lsi)*1] + fp33;
target[((hsi*126+113)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_x[vi] * src1[((hsi*63+57)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*84+57)*1+lsi)*1] + fp31;
target[((hsi*126+114)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * src2[((hsi*63+57)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_y[vi] * src1[((hsi*63+57)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*84+75)*1+lsi)*1] + fp29;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*126+115)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp25;
fp25 = inteval->CD_z[vi] * src1[((hsi*63+57)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*84+78)*1+lsi)*1] + fp25;
target[((hsi*126+116)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * src2[((hsi*63+58)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_y[vi] * src1[((hsi*63+58)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*84+76)*1+lsi)*1] + fp23;
LIBINT2_REALTYPE fp20;
fp20 = fp22 + fp21;
target[((hsi*126+117)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp19;
fp19 = inteval->CD_z[vi] * src1[((hsi*63+58)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*84+79)*1+lsi)*1] + fp19;
target[((hsi*126+118)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_z[vi] * src1[((hsi*63+59)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*84+80)*1+lsi)*1] + fp17;
target[((hsi*126+119)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_x[vi] * src1[((hsi*63+60)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*84+60)*1+lsi)*1] + fp15;
target[((hsi*126+120)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * src2[((hsi*63+60)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_y[vi] * src1[((hsi*63+60)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*84+78)*1+lsi)*1] + fp13;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*126+121)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_z[vi] * src1[((hsi*63+60)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*84+81)*1+lsi)*1] + fp9;
target[((hsi*126+122)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * src2[((hsi*63+61)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_y[vi] * src1[((hsi*63+61)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*84+79)*1+lsi)*1] + fp7;
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
target[((hsi*126+123)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp3;
fp3 = inteval->CD_z[vi] * src1[((hsi*63+61)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*84+82)*1+lsi)*1] + fp3;
target[((hsi*126+124)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp1;
fp1 = inteval->CD_z[vi] * src1[((hsi*63+62)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*84+83)*1+lsi)*1] + fp1;
target[((hsi*126+125)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp41;
fp41 = inteval->CD_z[vi] * src1[((hsi*63+54)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*84+75)*1+lsi)*1] + fp41;
target[((hsi*126+110)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp163;
fp163 = inteval->CD_z[vi] * src1[((hsi*63+31)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = src0[((hsi*84+49)*1+lsi)*1] + fp163;
target[((hsi*126+64)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp161;
fp161 = inteval->CD_z[vi] * src1[((hsi*63+32)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*84+50)*1+lsi)*1] + fp161;
target[((hsi*126+65)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp159;
fp159 = inteval->CD_x[vi] * src1[((hsi*63+33)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*84+33)*1+lsi)*1] + fp159;
target[((hsi*126+66)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * src2[((hsi*63+33)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->CD_y[vi] * src1[((hsi*63+33)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*84+48)*1+lsi)*1] + fp157;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
target[((hsi*126+67)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_z[vi] * src1[((hsi*63+33)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*84+51)*1+lsi)*1] + fp153;
target[((hsi*126+68)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * src2[((hsi*63+34)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->CD_y[vi] * src1[((hsi*63+34)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*84+49)*1+lsi)*1] + fp151;
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
target[((hsi*126+69)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp147;
fp147 = inteval->CD_z[vi] * src1[((hsi*63+34)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = src0[((hsi*84+52)*1+lsi)*1] + fp147;
target[((hsi*126+70)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp145;
fp145 = inteval->CD_z[vi] * src1[((hsi*63+35)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*84+53)*1+lsi)*1] + fp145;
target[((hsi*126+71)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_x[vi] * src1[((hsi*63+36)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*84+36)*1+lsi)*1] + fp143;
target[((hsi*126+72)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * src2[((hsi*63+36)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_y[vi] * src1[((hsi*63+36)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*84+51)*1+lsi)*1] + fp141;
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
target[((hsi*126+73)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp137;
fp137 = inteval->CD_z[vi] * src1[((hsi*63+36)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*84+54)*1+lsi)*1] + fp137;
target[((hsi*126+74)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp133;
fp133 = 1.0000000000000000e+00 * src2[((hsi*63+37)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->CD_y[vi] * src1[((hsi*63+37)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*84+52)*1+lsi)*1] + fp135;
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
target[((hsi*126+75)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp131;
fp131 = inteval->CD_z[vi] * src1[((hsi*63+37)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = src0[((hsi*84+55)*1+lsi)*1] + fp131;
target[((hsi*126+76)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_z[vi] * src1[((hsi*63+38)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*84+56)*1+lsi)*1] + fp129;
target[((hsi*126+77)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp127;
fp127 = inteval->CD_x[vi] * src1[((hsi*63+39)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*84+39)*1+lsi)*1] + fp127;
target[((hsi*126+78)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp81;
fp81 = inteval->CD_z[vi] * src1[((hsi*63+47)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*84+68)*1+lsi)*1] + fp81;
target[((hsi*126+95)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp121;
fp121 = inteval->CD_z[vi] * src1[((hsi*63+39)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*84+57)*1+lsi)*1] + fp121;
target[((hsi*126+80)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * src2[((hsi*63+40)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_y[vi] * src1[((hsi*63+40)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*84+55)*1+lsi)*1] + fp119;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
target[((hsi*126+81)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp115;
fp115 = inteval->CD_z[vi] * src1[((hsi*63+40)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*84+58)*1+lsi)*1] + fp115;
target[((hsi*126+82)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = inteval->CD_z[vi] * src1[((hsi*63+41)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*84+59)*1+lsi)*1] + fp113;
target[((hsi*126+83)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = inteval->CD_x[vi] * src1[((hsi*63+42)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*84+42)*1+lsi)*1] + fp111;
target[((hsi*126+84)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * src2[((hsi*63+42)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->CD_y[vi] * src1[((hsi*63+42)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*84+57)*1+lsi)*1] + fp109;
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
target[((hsi*126+85)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_z[vi] * src1[((hsi*63+42)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*84+60)*1+lsi)*1] + fp105;
target[((hsi*126+86)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src2[((hsi*63+43)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->CD_y[vi] * src1[((hsi*63+43)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*84+58)*1+lsi)*1] + fp103;
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
target[((hsi*126+87)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_z[vi] * src1[((hsi*63+43)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*84+61)*1+lsi)*1] + fp99;
target[((hsi*126+88)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp97;
fp97 = inteval->CD_z[vi] * src1[((hsi*63+44)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*84+62)*1+lsi)*1] + fp97;
target[((hsi*126+89)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = inteval->CD_x[vi] * src1[((hsi*63+45)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*84+45)*1+lsi)*1] + fp95;
target[((hsi*126+90)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src2[((hsi*63+45)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_y[vi] * src1[((hsi*63+45)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*84+63)*1+lsi)*1] + fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*126+91)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_z[vi] * src1[((hsi*63+45)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*84+66)*1+lsi)*1] + fp89;
target[((hsi*126+92)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * src2[((hsi*63+46)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->CD_y[vi] * src1[((hsi*63+46)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*84+64)*1+lsi)*1] + fp87;
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
target[((hsi*126+93)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp83;
fp83 = inteval->CD_z[vi] * src1[((hsi*63+46)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*84+67)*1+lsi)*1] + fp83;
target[((hsi*126+94)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * src2[((hsi*63+39)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_y[vi] * src1[((hsi*63+39)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*84+54)*1+lsi)*1] + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*126+79)*1+lsi)*1] = fp122;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 336 */
}

#ifdef __cplusplus
};
#endif
