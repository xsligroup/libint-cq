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
void OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_4_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5, const LIBINT2_REALTYPE* src6) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp175;
fp175 = 4.0000000000000000e+00 * src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + fp175;
LIBINT2_REALTYPE fp173;
fp173 = fp174 + src6[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->oo2z[vi] * fp173;
LIBINT2_REALTYPE fp176;
fp176 = inteval->PA_z[vi] * src0[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp176 + fp172;
target[((hsi*55+26)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp181;
fp181 = 3.0000000000000000e+00 * src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + fp181;
LIBINT2_REALTYPE fp179;
fp179 = fp180 + src6[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->oo2z[vi] * fp179;
LIBINT2_REALTYPE fp182;
fp182 = inteval->PA_z[vi] * src0[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp182 + fp178;
target[((hsi*55+25)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp187;
fp187 = 2.0000000000000000e+00 * src1[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + fp187;
LIBINT2_REALTYPE fp185;
fp185 = fp186 + src6[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp188;
fp188 = inteval->PA_z[vi] * src0[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp188 + fp184;
target[((hsi*55+24)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp193;
fp193 = 1.0000000000000000e+00 * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + fp193;
LIBINT2_REALTYPE fp191;
fp191 = fp192 + src6[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp194;
fp194 = inteval->PA_z[vi] * src0[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp194 + fp190;
target[((hsi*55+23)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp197;
fp197 = 0.0000000000000000e+00 + src6[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp198;
fp198 = inteval->PA_z[vi] * src0[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
target[((hsi*55+22)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp202;
fp202 = 5.0000000000000000e-01 * src5[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 5.0000000000000000e-01 * src4[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = 5.0000000000000000e+00 * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = 0.0000000000000000e+00 + fp206;
LIBINT2_REALTYPE fp203;
fp203 = fp205 + fp204;
LIBINT2_REALTYPE fp201;
fp201 = fp203 + fp202;
LIBINT2_REALTYPE fp200;
fp200 = inteval->oo2z[vi] * fp201;
LIBINT2_REALTYPE fp207;
fp207 = inteval->PA_y[vi] * src0[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp207 + fp200;
target[((hsi*55+21)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp212;
fp212 = 4.0000000000000000e+00 * src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = 0.0000000000000000e+00 + fp212;
LIBINT2_REALTYPE fp210;
fp210 = fp211 + src6[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = inteval->oo2z[vi] * fp210;
LIBINT2_REALTYPE fp213;
fp213 = inteval->PA_z[vi] * src0[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp213 + fp209;
target[((hsi*55+20)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp218;
fp218 = 3.0000000000000000e+00 * src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = 0.0000000000000000e+00 + fp218;
LIBINT2_REALTYPE fp216;
fp216 = fp217 + src6[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = inteval->oo2z[vi] * fp216;
LIBINT2_REALTYPE fp219;
fp219 = inteval->PA_z[vi] * src0[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp219 + fp215;
target[((hsi*55+19)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp224;
fp224 = 2.0000000000000000e+00 * src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = 0.0000000000000000e+00 + fp224;
LIBINT2_REALTYPE fp222;
fp222 = fp223 + src6[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->oo2z[vi] * fp222;
LIBINT2_REALTYPE fp225;
fp225 = inteval->PA_z[vi] * src0[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp225 + fp221;
target[((hsi*55+18)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp230;
fp230 = 1.0000000000000000e+00 * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = 0.0000000000000000e+00 + fp230;
LIBINT2_REALTYPE fp228;
fp228 = fp229 + src6[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = inteval->oo2z[vi] * fp228;
LIBINT2_REALTYPE fp231;
fp231 = inteval->PA_z[vi] * src0[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp231 + fp227;
target[((hsi*55+17)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp234;
fp234 = 0.0000000000000000e+00 + src6[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->oo2z[vi] * fp234;
LIBINT2_REALTYPE fp235;
fp235 = inteval->PA_z[vi] * src0[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp235 + fp233;
target[((hsi*55+16)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp239;
fp239 = 5.0000000000000000e-01 * src5[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = 5.0000000000000000e-01 * src4[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = 4.0000000000000000e+00 * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = 0.0000000000000000e+00 + fp243;
LIBINT2_REALTYPE fp240;
fp240 = fp242 + fp241;
LIBINT2_REALTYPE fp238;
fp238 = fp240 + fp239;
LIBINT2_REALTYPE fp237;
fp237 = inteval->oo2z[vi] * fp238;
LIBINT2_REALTYPE fp244;
fp244 = inteval->PA_y[vi] * src0[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp244 + fp237;
target[((hsi*55+15)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp334;
fp334 = 5.0000000000000000e-01 * src3[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = 5.0000000000000000e-01 * src2[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = 8.0000000000000000e+00 * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = 0.0000000000000000e+00 + fp338;
LIBINT2_REALTYPE fp335;
fp335 = fp337 + fp336;
LIBINT2_REALTYPE fp333;
fp333 = fp335 - fp334;
LIBINT2_REALTYPE fp332;
fp332 = inteval->oo2z[vi] * fp333;
LIBINT2_REALTYPE fp339;
fp339 = inteval->PA_x[vi] * src0[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp339 + fp332;
target[((hsi*55+0)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp255;
fp255 = 2.0000000000000000e+00 * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = 0.0000000000000000e+00 + fp255;
LIBINT2_REALTYPE fp253;
fp253 = fp254 + src6[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = inteval->oo2z[vi] * fp253;
LIBINT2_REALTYPE fp256;
fp256 = inteval->PA_z[vi] * src0[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp256 + fp252;
target[((hsi*55+13)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp261;
fp261 = 1.0000000000000000e+00 * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = 0.0000000000000000e+00 + fp261;
LIBINT2_REALTYPE fp259;
fp259 = fp260 + src6[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = inteval->oo2z[vi] * fp259;
LIBINT2_REALTYPE fp262;
fp262 = inteval->PA_z[vi] * src0[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp262 + fp258;
target[((hsi*55+12)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp265;
fp265 = 0.0000000000000000e+00 + src6[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = inteval->oo2z[vi] * fp265;
LIBINT2_REALTYPE fp266;
fp266 = inteval->PA_z[vi] * src0[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp266 + fp264;
target[((hsi*55+11)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp270;
fp270 = 5.0000000000000000e-01 * src5[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = 5.0000000000000000e-01 * src4[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = 3.0000000000000000e+00 * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = 0.0000000000000000e+00 + fp274;
LIBINT2_REALTYPE fp271;
fp271 = fp273 + fp272;
LIBINT2_REALTYPE fp269;
fp269 = fp271 + fp270;
LIBINT2_REALTYPE fp268;
fp268 = inteval->oo2z[vi] * fp269;
LIBINT2_REALTYPE fp275;
fp275 = inteval->PA_y[vi] * src0[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp275 + fp268;
target[((hsi*55+10)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp280;
fp280 = 2.0000000000000000e+00 * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = 0.0000000000000000e+00 + fp280;
LIBINT2_REALTYPE fp278;
fp278 = fp279 + src6[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->oo2z[vi] * fp278;
LIBINT2_REALTYPE fp281;
fp281 = inteval->PA_z[vi] * src0[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = fp281 + fp277;
target[((hsi*55+9)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp286;
fp286 = 1.0000000000000000e+00 * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = 0.0000000000000000e+00 + fp286;
LIBINT2_REALTYPE fp284;
fp284 = fp285 + src6[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = inteval->oo2z[vi] * fp284;
LIBINT2_REALTYPE fp287;
fp287 = inteval->PA_z[vi] * src0[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = fp287 + fp283;
target[((hsi*55+8)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp290;
fp290 = 0.0000000000000000e+00 + src6[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = inteval->oo2z[vi] * fp290;
LIBINT2_REALTYPE fp291;
fp291 = inteval->PA_z[vi] * src0[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp291 + fp289;
target[((hsi*55+7)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp295;
fp295 = 5.0000000000000000e-01 * src5[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = 5.0000000000000000e-01 * src4[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = 2.0000000000000000e+00 * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = 0.0000000000000000e+00 + fp299;
LIBINT2_REALTYPE fp296;
fp296 = fp298 + fp297;
LIBINT2_REALTYPE fp294;
fp294 = fp296 + fp295;
LIBINT2_REALTYPE fp293;
fp293 = inteval->oo2z[vi] * fp294;
LIBINT2_REALTYPE fp300;
fp300 = inteval->PA_y[vi] * src0[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp300 + fp293;
target[((hsi*55+6)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp305;
fp305 = 1.0000000000000000e+00 * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = 0.0000000000000000e+00 + fp305;
LIBINT2_REALTYPE fp303;
fp303 = fp304 + src6[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = inteval->oo2z[vi] * fp303;
LIBINT2_REALTYPE fp306;
fp306 = inteval->PA_z[vi] * src0[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp306 + fp302;
target[((hsi*55+5)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp309;
fp309 = 0.0000000000000000e+00 + src6[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = inteval->oo2z[vi] * fp309;
LIBINT2_REALTYPE fp310;
fp310 = inteval->PA_z[vi] * src0[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = fp310 + fp308;
target[((hsi*55+4)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp314;
fp314 = 5.0000000000000000e-01 * src5[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = 5.0000000000000000e-01 * src4[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = 1.0000000000000000e+00 * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = 0.0000000000000000e+00 + fp318;
LIBINT2_REALTYPE fp315;
fp315 = fp317 + fp316;
LIBINT2_REALTYPE fp313;
fp313 = fp315 + fp314;
LIBINT2_REALTYPE fp312;
fp312 = inteval->oo2z[vi] * fp313;
LIBINT2_REALTYPE fp319;
fp319 = inteval->PA_y[vi] * src0[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = fp319 + fp312;
target[((hsi*55+3)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp322;
fp322 = 0.0000000000000000e+00 + src6[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = inteval->oo2z[vi] * fp322;
LIBINT2_REALTYPE fp323;
fp323 = inteval->PA_z[vi] * src0[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = fp323 + fp321;
target[((hsi*55+2)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp327;
fp327 = 5.0000000000000000e-01 * src5[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = 5.0000000000000000e-01 * src4[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = 0.0000000000000000e+00 + fp329;
LIBINT2_REALTYPE fp326;
fp326 = fp328 + fp327;
LIBINT2_REALTYPE fp325;
fp325 = inteval->oo2z[vi] * fp326;
LIBINT2_REALTYPE fp330;
fp330 = inteval->PA_y[vi] * src0[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = fp330 + fp325;
target[((hsi*55+1)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp249;
fp249 = 3.0000000000000000e+00 * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = 0.0000000000000000e+00 + fp249;
LIBINT2_REALTYPE fp247;
fp247 = fp248 + src6[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = inteval->oo2z[vi] * fp247;
LIBINT2_REALTYPE fp250;
fp250 = inteval->PA_z[vi] * src0[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp250 + fp246;
target[((hsi*55+14)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp4;
fp4 = 8.0000000000000000e+00 * src1[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src6[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*55+54)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
fp10 = 7.0000000000000000e+00 * src1[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src6[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*55+53)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
fp16 = 6.0000000000000000e+00 * src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src6[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*55+52)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
fp22 = 5.0000000000000000e+00 * src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src6[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*55+51)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
fp28 = 4.0000000000000000e+00 * src1[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src6[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*55+50)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
fp34 = 3.0000000000000000e+00 * src1[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src6[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * src0[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp35 + fp31;
target[((hsi*55+49)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
fp40 = 2.0000000000000000e+00 * src1[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src6[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * src0[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp41 + fp37;
target[((hsi*55+48)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp46;
fp46 = 1.0000000000000000e+00 * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src6[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_z[vi] * src0[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp47 + fp43;
target[((hsi*55+47)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src6[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PA_z[vi] * src0[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp51 + fp49;
target[((hsi*55+46)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp55;
fp55 = 5.0000000000000000e-01 * src5[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 5.0000000000000000e-01 * src4[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 8.0000000000000000e+00 * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp59;
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PA_y[vi] * src0[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp60 + fp53;
target[((hsi*55+45)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp65;
fp65 = 7.0000000000000000e+00 * src1[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + fp65;
LIBINT2_REALTYPE fp63;
fp63 = fp64 + src6[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_z[vi] * src0[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp66 + fp62;
target[((hsi*55+44)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp71;
fp71 = 6.0000000000000000e+00 * src1[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp69;
fp69 = fp70 + src6[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp69;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PA_z[vi] * src0[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp72 + fp68;
target[((hsi*55+43)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp77;
fp77 = 5.0000000000000000e+00 * src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + fp77;
LIBINT2_REALTYPE fp75;
fp75 = fp76 + src6[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PA_z[vi] * src0[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp78 + fp74;
target[((hsi*55+42)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp169;
fp169 = 5.0000000000000000e+00 * src1[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + fp169;
LIBINT2_REALTYPE fp167;
fp167 = fp168 + src6[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp170;
fp170 = inteval->PA_z[vi] * src0[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp170 + fp166;
target[((hsi*55+27)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp89;
fp89 = 3.0000000000000000e+00 * src1[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + fp89;
LIBINT2_REALTYPE fp87;
fp87 = fp88 + src6[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->oo2z[vi] * fp87;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PA_z[vi] * src0[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp90 + fp86;
target[((hsi*55+40)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp95;
fp95 = 2.0000000000000000e+00 * src1[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + fp95;
LIBINT2_REALTYPE fp93;
fp93 = fp94 + src6[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp96;
fp96 = inteval->PA_z[vi] * src0[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp96 + fp92;
target[((hsi*55+39)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp101;
LIBINT2_REALTYPE fp99;
fp99 = fp100 + src6[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp99;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PA_z[vi] * src0[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp102 + fp98;
target[((hsi*55+38)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src6[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PA_z[vi] * src0[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp106 + fp104;
target[((hsi*55+37)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp110;
fp110 = 5.0000000000000000e-01 * src5[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 5.0000000000000000e-01 * src4[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 7.0000000000000000e+00 * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp114;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp109;
fp109 = fp111 + fp110;
LIBINT2_REALTYPE fp108;
fp108 = inteval->oo2z[vi] * fp109;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_y[vi] * src0[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp115 + fp108;
target[((hsi*55+36)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp120;
fp120 = 6.0000000000000000e+00 * src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + fp120;
LIBINT2_REALTYPE fp118;
fp118 = fp119 + src6[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->PA_z[vi] * src0[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp121 + fp117;
target[((hsi*55+35)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp126;
fp126 = 5.0000000000000000e+00 * src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + fp126;
LIBINT2_REALTYPE fp124;
fp124 = fp125 + src6[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->oo2z[vi] * fp124;
LIBINT2_REALTYPE fp127;
fp127 = inteval->PA_z[vi] * src0[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp127 + fp123;
target[((hsi*55+34)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp132;
fp132 = 4.0000000000000000e+00 * src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + fp132;
LIBINT2_REALTYPE fp130;
fp130 = fp131 + src6[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->oo2z[vi] * fp130;
LIBINT2_REALTYPE fp133;
fp133 = inteval->PA_z[vi] * src0[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp133 + fp129;
target[((hsi*55+33)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp138;
fp138 = 3.0000000000000000e+00 * src1[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + fp138;
LIBINT2_REALTYPE fp136;
fp136 = fp137 + src6[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PA_z[vi] * src0[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp139 + fp135;
target[((hsi*55+32)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp144;
fp144 = 2.0000000000000000e+00 * src1[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + fp144;
LIBINT2_REALTYPE fp142;
fp142 = fp143 + src6[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->oo2z[vi] * fp142;
LIBINT2_REALTYPE fp145;
fp145 = inteval->PA_z[vi] * src0[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp145 + fp141;
target[((hsi*55+31)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp150;
fp150 = 1.0000000000000000e+00 * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + fp150;
LIBINT2_REALTYPE fp148;
fp148 = fp149 + src6[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_z[vi] * src0[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp151 + fp147;
target[((hsi*55+30)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src6[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp155;
fp155 = inteval->PA_z[vi] * src0[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp155 + fp153;
target[((hsi*55+29)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp159;
fp159 = 5.0000000000000000e-01 * src5[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = 5.0000000000000000e-01 * src4[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 6.0000000000000000e+00 * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = 0.0000000000000000e+00 + fp163;
LIBINT2_REALTYPE fp160;
fp160 = fp162 + fp161;
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
LIBINT2_REALTYPE fp157;
fp157 = inteval->oo2z[vi] * fp158;
LIBINT2_REALTYPE fp164;
fp164 = inteval->PA_y[vi] * src0[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp164 + fp157;
target[((hsi*55+28)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp83;
fp83 = 4.0000000000000000e+00 * src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + fp83;
LIBINT2_REALTYPE fp81;
fp81 = fp82 + src6[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PA_z[vi] * src0[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp84 + fp80;
target[((hsi*55+41)*1+lsi)*1] = fp79;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 340 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
