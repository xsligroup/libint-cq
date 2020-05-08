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
void OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp162;
fp162 = 3.0000000000000000e+00 * src1[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + fp162;
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp163;
fp163 = inteval->PA_z[vi] * src0[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp163 + fp160;
target[((hsi*66+32)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp167;
fp167 = 2.0000000000000000e+00 * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + fp167;
LIBINT2_REALTYPE fp165;
fp165 = inteval->oo2z[vi] * fp166;
LIBINT2_REALTYPE fp168;
fp168 = inteval->PA_z[vi] * src0[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp168 + fp165;
target[((hsi*66+31)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp172;
fp172 = 1.0000000000000000e+00 * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + fp172;
LIBINT2_REALTYPE fp170;
fp170 = inteval->oo2z[vi] * fp171;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_z[vi] * src0[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp173 + fp170;
target[((hsi*66+30)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp174;
fp174 = inteval->PA_z[vi] * src0[((hsi*55+21)*1+lsi)*1];
target[((hsi*66+29)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp178;
fp178 = 5.0000000000000000e-01 * src3[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = 6.0000000000000000e+00 * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + fp180;
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp176;
fp176 = inteval->oo2z[vi] * fp177;
LIBINT2_REALTYPE fp181;
fp181 = inteval->PA_y[vi] * src0[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp181 + fp176;
target[((hsi*66+28)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp185;
fp185 = 5.0000000000000000e+00 * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = 0.0000000000000000e+00 + fp185;
LIBINT2_REALTYPE fp183;
fp183 = inteval->oo2z[vi] * fp184;
LIBINT2_REALTYPE fp186;
fp186 = inteval->PA_z[vi] * src0[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp186 + fp183;
target[((hsi*66+27)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp190;
fp190 = 4.0000000000000000e+00 * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = 0.0000000000000000e+00 + fp190;
LIBINT2_REALTYPE fp188;
fp188 = inteval->oo2z[vi] * fp189;
LIBINT2_REALTYPE fp191;
fp191 = inteval->PA_z[vi] * src0[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp191 + fp188;
target[((hsi*66+26)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp195;
fp195 = 3.0000000000000000e+00 * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = 0.0000000000000000e+00 + fp195;
LIBINT2_REALTYPE fp193;
fp193 = inteval->oo2z[vi] * fp194;
LIBINT2_REALTYPE fp196;
fp196 = inteval->PA_z[vi] * src0[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp196 + fp193;
target[((hsi*66+25)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp200;
fp200 = 2.0000000000000000e+00 * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = 0.0000000000000000e+00 + fp200;
LIBINT2_REALTYPE fp198;
fp198 = inteval->oo2z[vi] * fp199;
LIBINT2_REALTYPE fp201;
fp201 = inteval->PA_z[vi] * src0[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp201 + fp198;
target[((hsi*66+24)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp205;
fp205 = 1.0000000000000000e+00 * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + fp205;
LIBINT2_REALTYPE fp203;
fp203 = inteval->oo2z[vi] * fp204;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PA_z[vi] * src0[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp206 + fp203;
target[((hsi*66+23)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp207;
fp207 = inteval->PA_z[vi] * src0[((hsi*55+15)*1+lsi)*1];
target[((hsi*66+22)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp211;
fp211 = 5.0000000000000000e-01 * src3[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = 5.0000000000000000e+00 * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = 0.0000000000000000e+00 + fp213;
LIBINT2_REALTYPE fp210;
fp210 = fp212 + fp211;
LIBINT2_REALTYPE fp209;
fp209 = inteval->oo2z[vi] * fp210;
LIBINT2_REALTYPE fp214;
fp214 = inteval->PA_y[vi] * src0[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp214 + fp209;
target[((hsi*66+21)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp218;
fp218 = 4.0000000000000000e+00 * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = 0.0000000000000000e+00 + fp218;
LIBINT2_REALTYPE fp216;
fp216 = inteval->oo2z[vi] * fp217;
LIBINT2_REALTYPE fp219;
fp219 = inteval->PA_z[vi] * src0[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp219 + fp216;
target[((hsi*66+20)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp223;
fp223 = 3.0000000000000000e+00 * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = 0.0000000000000000e+00 + fp223;
LIBINT2_REALTYPE fp221;
fp221 = inteval->oo2z[vi] * fp222;
LIBINT2_REALTYPE fp224;
fp224 = inteval->PA_z[vi] * src0[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp224 + fp221;
target[((hsi*66+19)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp228;
fp228 = 2.0000000000000000e+00 * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = 0.0000000000000000e+00 + fp228;
LIBINT2_REALTYPE fp226;
fp226 = inteval->oo2z[vi] * fp227;
LIBINT2_REALTYPE fp229;
fp229 = inteval->PA_z[vi] * src0[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp229 + fp226;
target[((hsi*66+18)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp306;
fp306 = 5.0000000000000000e-01 * src2[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = 9.0000000000000000e+00 * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = 0.0000000000000000e+00 + fp308;
LIBINT2_REALTYPE fp305;
fp305 = fp307 - fp306;
LIBINT2_REALTYPE fp304;
fp304 = inteval->oo2z[vi] * fp305;
LIBINT2_REALTYPE fp309;
fp309 = inteval->PA_x[vi] * src0[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp309 + fp304;
target[((hsi*66+0)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp301;
fp301 = 5.0000000000000000e-01 * src3[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = 0.0000000000000000e+00 + fp301;
LIBINT2_REALTYPE fp299;
fp299 = inteval->oo2z[vi] * fp300;
LIBINT2_REALTYPE fp302;
fp302 = inteval->PA_y[vi] * src0[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = fp302 + fp299;
target[((hsi*66+1)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp297;
fp297 = inteval->PA_z[vi] * src0[((hsi*55+0)*1+lsi)*1];
target[((hsi*66+2)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp293;
fp293 = 5.0000000000000000e-01 * src3[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = 1.0000000000000000e+00 * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = 0.0000000000000000e+00 + fp295;
LIBINT2_REALTYPE fp292;
fp292 = fp294 + fp293;
LIBINT2_REALTYPE fp291;
fp291 = inteval->oo2z[vi] * fp292;
LIBINT2_REALTYPE fp296;
fp296 = inteval->PA_y[vi] * src0[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp296 + fp291;
target[((hsi*66+3)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp289;
fp289 = inteval->PA_z[vi] * src0[((hsi*55+1)*1+lsi)*1];
target[((hsi*66+4)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp287;
fp287 = 1.0000000000000000e+00 * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = 0.0000000000000000e+00 + fp287;
LIBINT2_REALTYPE fp285;
fp285 = inteval->oo2z[vi] * fp286;
LIBINT2_REALTYPE fp288;
fp288 = inteval->PA_z[vi] * src0[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = fp288 + fp285;
target[((hsi*66+5)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp280;
fp280 = 5.0000000000000000e-01 * src3[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = 2.0000000000000000e+00 * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = 0.0000000000000000e+00 + fp282;
LIBINT2_REALTYPE fp279;
fp279 = fp281 + fp280;
LIBINT2_REALTYPE fp278;
fp278 = inteval->oo2z[vi] * fp279;
LIBINT2_REALTYPE fp283;
fp283 = inteval->PA_y[vi] * src0[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp283 + fp278;
target[((hsi*66+6)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp276;
fp276 = inteval->PA_z[vi] * src0[((hsi*55+3)*1+lsi)*1];
target[((hsi*66+7)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp233;
fp233 = 1.0000000000000000e+00 * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = 0.0000000000000000e+00 + fp233;
LIBINT2_REALTYPE fp231;
fp231 = inteval->oo2z[vi] * fp232;
LIBINT2_REALTYPE fp234;
fp234 = inteval->PA_z[vi] * src0[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp234 + fp231;
target[((hsi*66+17)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp269;
fp269 = 2.0000000000000000e+00 * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = 0.0000000000000000e+00 + fp269;
LIBINT2_REALTYPE fp267;
fp267 = inteval->oo2z[vi] * fp268;
LIBINT2_REALTYPE fp270;
fp270 = inteval->PA_z[vi] * src0[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp270 + fp267;
target[((hsi*66+9)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp262;
fp262 = 5.0000000000000000e-01 * src3[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = 3.0000000000000000e+00 * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = 0.0000000000000000e+00 + fp264;
LIBINT2_REALTYPE fp261;
fp261 = fp263 + fp262;
LIBINT2_REALTYPE fp260;
fp260 = inteval->oo2z[vi] * fp261;
LIBINT2_REALTYPE fp265;
fp265 = inteval->PA_y[vi] * src0[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp265 + fp260;
target[((hsi*66+10)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp258;
fp258 = inteval->PA_z[vi] * src0[((hsi*55+6)*1+lsi)*1];
target[((hsi*66+11)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp256;
fp256 = 1.0000000000000000e+00 * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = 0.0000000000000000e+00 + fp256;
LIBINT2_REALTYPE fp254;
fp254 = inteval->oo2z[vi] * fp255;
LIBINT2_REALTYPE fp257;
fp257 = inteval->PA_z[vi] * src0[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp257 + fp254;
target[((hsi*66+12)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp251;
fp251 = 2.0000000000000000e+00 * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = 0.0000000000000000e+00 + fp251;
LIBINT2_REALTYPE fp249;
fp249 = inteval->oo2z[vi] * fp250;
LIBINT2_REALTYPE fp252;
fp252 = inteval->PA_z[vi] * src0[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = fp252 + fp249;
target[((hsi*66+13)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp246;
fp246 = 3.0000000000000000e+00 * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = 0.0000000000000000e+00 + fp246;
LIBINT2_REALTYPE fp244;
fp244 = inteval->oo2z[vi] * fp245;
LIBINT2_REALTYPE fp247;
fp247 = inteval->PA_z[vi] * src0[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp247 + fp244;
target[((hsi*66+14)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp239;
fp239 = 5.0000000000000000e-01 * src3[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = 4.0000000000000000e+00 * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = 0.0000000000000000e+00 + fp241;
LIBINT2_REALTYPE fp238;
fp238 = fp240 + fp239;
LIBINT2_REALTYPE fp237;
fp237 = inteval->oo2z[vi] * fp238;
LIBINT2_REALTYPE fp242;
fp242 = inteval->PA_y[vi] * src0[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp242 + fp237;
target[((hsi*66+15)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp235;
fp235 = inteval->PA_z[vi] * src0[((hsi*55+10)*1+lsi)*1];
target[((hsi*66+16)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp274;
fp274 = 1.0000000000000000e+00 * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = 0.0000000000000000e+00 + fp274;
LIBINT2_REALTYPE fp272;
fp272 = inteval->oo2z[vi] * fp273;
LIBINT2_REALTYPE fp275;
fp275 = inteval->PA_z[vi] * src0[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = fp275 + fp272;
target[((hsi*66+8)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp3;
fp3 = 9.0000000000000000e+00 * src1[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + fp3;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PA_z[vi] * src0[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*66+65)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = 8.0000000000000000e+00 * src1[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + fp8;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PA_z[vi] * src0[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp9 + fp6;
target[((hsi*66+64)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
fp13 = 7.0000000000000000e+00 * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + fp13;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PA_z[vi] * src0[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp14 + fp11;
target[((hsi*66+63)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
fp18 = 6.0000000000000000e+00 * src1[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PA_z[vi] * src0[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp19 + fp16;
target[((hsi*66+62)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e+00 * src1[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + fp23;
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PA_z[vi] * src0[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp24 + fp21;
target[((hsi*66+61)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
fp28 = 4.0000000000000000e+00 * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp29 + fp26;
target[((hsi*66+60)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp33;
fp33 = 3.0000000000000000e+00 * src1[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_z[vi] * src0[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp34 + fp31;
target[((hsi*66+59)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
fp38 = 2.0000000000000000e+00 * src1[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_z[vi] * src0[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp39 + fp36;
target[((hsi*66+58)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + fp43;
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_z[vi] * src0[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp44 + fp41;
target[((hsi*66+57)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_z[vi] * src0[((hsi*55+45)*1+lsi)*1];
target[((hsi*66+56)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp49;
fp49 = 5.0000000000000000e-01 * src3[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 9.0000000000000000e+00 * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + fp51;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_y[vi] * src0[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp52 + fp47;
target[((hsi*66+55)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp56;
fp56 = 8.0000000000000000e+00 * src1[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + fp56;
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PA_z[vi] * src0[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp57 + fp54;
target[((hsi*66+54)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp61;
fp61 = 7.0000000000000000e+00 * src1[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + fp61;
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PA_z[vi] * src0[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp62 + fp59;
target[((hsi*66+53)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp66;
fp66 = 6.0000000000000000e+00 * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_z[vi] * src0[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp67 + fp64;
target[((hsi*66+52)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp71;
fp71 = 5.0000000000000000e+00 * src1[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PA_z[vi] * src0[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp72 + fp69;
target[((hsi*66+51)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp157;
fp157 = 4.0000000000000000e+00 * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + fp157;
LIBINT2_REALTYPE fp155;
fp155 = inteval->oo2z[vi] * fp156;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PA_z[vi] * src0[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp158 + fp155;
target[((hsi*66+33)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp152;
fp152 = 5.0000000000000000e+00 * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + fp152;
LIBINT2_REALTYPE fp150;
fp150 = inteval->oo2z[vi] * fp151;
LIBINT2_REALTYPE fp153;
fp153 = inteval->PA_z[vi] * src0[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp153 + fp150;
target[((hsi*66+34)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp147;
fp147 = 6.0000000000000000e+00 * src1[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + fp147;
LIBINT2_REALTYPE fp145;
fp145 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp148;
fp148 = inteval->PA_z[vi] * src0[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp148 + fp145;
target[((hsi*66+35)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp140;
fp140 = 5.0000000000000000e-01 * src3[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = 7.0000000000000000e+00 * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + fp142;
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
LIBINT2_REALTYPE fp138;
fp138 = inteval->oo2z[vi] * fp139;
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_y[vi] * src0[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp143 + fp138;
target[((hsi*66+36)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PA_z[vi] * src0[((hsi*55+28)*1+lsi)*1];
target[((hsi*66+37)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
fp134 = 1.0000000000000000e+00 * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + fp134;
LIBINT2_REALTYPE fp132;
fp132 = inteval->oo2z[vi] * fp133;
LIBINT2_REALTYPE fp135;
fp135 = inteval->PA_z[vi] * src0[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp135 + fp132;
target[((hsi*66+38)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp129;
fp129 = 2.0000000000000000e+00 * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + fp129;
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PA_z[vi] * src0[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp130 + fp127;
target[((hsi*66+39)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp124;
fp124 = 3.0000000000000000e+00 * src1[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + fp124;
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PA_z[vi] * src0[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp125 + fp122;
target[((hsi*66+40)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp76;
fp76 = 4.0000000000000000e+00 * src1[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + fp76;
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp77;
fp77 = inteval->PA_z[vi] * src0[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp77 + fp74;
target[((hsi*66+50)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp114;
fp114 = 5.0000000000000000e+00 * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp114;
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_z[vi] * src0[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp115 + fp112;
target[((hsi*66+42)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp109;
fp109 = 6.0000000000000000e+00 * src1[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PA_z[vi] * src0[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp110 + fp107;
target[((hsi*66+43)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp104;
fp104 = 7.0000000000000000e+00 * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + fp104;
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp105;
fp105 = inteval->PA_z[vi] * src0[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp105 + fp102;
target[((hsi*66+44)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp97;
fp97 = 5.0000000000000000e-01 * src3[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 8.0000000000000000e+00 * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + fp99;
LIBINT2_REALTYPE fp96;
fp96 = fp98 + fp97;
LIBINT2_REALTYPE fp95;
fp95 = inteval->oo2z[vi] * fp96;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PA_y[vi] * src0[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp100 + fp95;
target[((hsi*66+45)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp93;
fp93 = inteval->PA_z[vi] * src0[((hsi*55+36)*1+lsi)*1];
target[((hsi*66+46)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_z[vi] * src0[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp92 + fp89;
target[((hsi*66+47)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = 2.0000000000000000e+00 * src1[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + fp86;
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_z[vi] * src0[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp87 + fp84;
target[((hsi*66+48)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp81;
fp81 = 3.0000000000000000e+00 * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp81;
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_z[vi] * src0[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp82 + fp79;
target[((hsi*66+49)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp119;
fp119 = 4.0000000000000000e+00 * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + fp119;
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PA_z[vi] * src0[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp120 + fp117;
target[((hsi*66+41)*1+lsi)*1] = fp116;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 310 */
}

#ifdef __cplusplus
};
#endif
