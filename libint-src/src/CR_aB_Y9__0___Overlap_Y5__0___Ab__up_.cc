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
void CR_aB_Y9__0___Overlap_Y5__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*60+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp349;
fp349 = inteval->PB_y[vi] * target[((hsi*60+0)*1+lsi)*1];
target[((hsi*60+1)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp347;
fp347 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp346;
fp346 = fp347 * target[((hsi*60+0)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = inteval->PB_y[vi] * target[((hsi*60+1)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = fp348 + fp346;
target[((hsi*60+2)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp343;
fp343 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp342;
fp342 = fp343 * target[((hsi*60+1)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = inteval->PB_y[vi] * target[((hsi*60+2)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = fp344 + fp342;
target[((hsi*60+3)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp339;
fp339 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp338;
fp338 = fp339 * target[((hsi*60+2)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = inteval->PB_y[vi] * target[((hsi*60+3)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = fp340 + fp338;
target[((hsi*60+4)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp332;
fp332 = inteval->PA_y[vi] * target[((hsi*60+0)*1+lsi)*1];
target[((hsi*60+6)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp271;
fp271 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp270;
fp270 = fp271 * target[((hsi*60+6)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp309;
fp309 = fp310 * target[((hsi*60+0)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = inteval->PA_y[vi] * target[((hsi*60+6)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp311 + fp309;
target[((hsi*60+12)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp272;
fp272 = inteval->PA_y[vi] * target[((hsi*60+12)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp272 + fp270;
target[((hsi*60+18)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp225;
fp225 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp224;
fp224 = fp225 * target[((hsi*60+18)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp302;
fp302 = fp303 * target[((hsi*60+6)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp305;
fp305 = fp306 * target[((hsi*60+1)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp329;
fp329 = fp330 * target[((hsi*60+0)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = inteval->PA_y[vi] * target[((hsi*60+1)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = fp331 + fp329;
target[((hsi*60+7)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp307;
fp307 = inteval->PA_y[vi] * target[((hsi*60+7)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = fp307 + fp305;
LIBINT2_REALTYPE fp301;
fp301 = fp304 + fp302;
target[((hsi*60+13)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp228;
fp228 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp227;
fp227 = fp228 * target[((hsi*60+13)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp263;
fp263 = fp264 * target[((hsi*60+12)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp266;
fp266 = fp267 * target[((hsi*60+7)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = inteval->PA_y[vi] * target[((hsi*60+13)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp268 + fp266;
LIBINT2_REALTYPE fp262;
fp262 = fp265 + fp263;
target[((hsi*60+19)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp229;
fp229 = inteval->PA_y[vi] * target[((hsi*60+19)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp229 + fp227;
LIBINT2_REALTYPE fp223;
fp223 = fp226 + fp224;
target[((hsi*60+25)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp179;
fp179 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp178;
fp178 = fp179 * target[((hsi*60+25)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp256;
fp256 = fp257 * target[((hsi*60+13)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp325;
fp325 = fp326 * target[((hsi*60+1)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = inteval->PA_y[vi] * target[((hsi*60+2)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = fp327 + fp325;
target[((hsi*60+8)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp260;
fp260 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp259;
fp259 = fp260 * target[((hsi*60+8)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp295;
fp295 = fp296 * target[((hsi*60+7)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp298;
fp298 = fp299 * target[((hsi*60+2)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = inteval->PA_y[vi] * target[((hsi*60+8)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp300 + fp298;
LIBINT2_REALTYPE fp294;
fp294 = fp297 + fp295;
target[((hsi*60+14)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp261;
fp261 = inteval->PA_y[vi] * target[((hsi*60+14)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp261 + fp259;
LIBINT2_REALTYPE fp255;
fp255 = fp258 + fp256;
target[((hsi*60+20)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp182;
fp182 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp181;
fp181 = fp182 * target[((hsi*60+20)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp217;
fp217 = fp218 * target[((hsi*60+19)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp220;
fp220 = fp221 * target[((hsi*60+14)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = inteval->PA_y[vi] * target[((hsi*60+20)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp222 + fp220;
LIBINT2_REALTYPE fp216;
fp216 = fp219 + fp217;
target[((hsi*60+26)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_y[vi] * target[((hsi*60+26)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp183 + fp181;
LIBINT2_REALTYPE fp177;
fp177 = fp180 + fp178;
target[((hsi*60+32)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp250;
fp250 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp249;
fp249 = fp250 * target[((hsi*60+14)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp321;
fp321 = fp322 * target[((hsi*60+2)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = inteval->PA_y[vi] * target[((hsi*60+3)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = fp323 + fp321;
target[((hsi*60+9)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp253;
fp253 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp252;
fp252 = fp253 * target[((hsi*60+9)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp288;
fp288 = fp289 * target[((hsi*60+8)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp291;
fp291 = fp292 * target[((hsi*60+3)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->PA_y[vi] * target[((hsi*60+9)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp293 + fp291;
LIBINT2_REALTYPE fp287;
fp287 = fp290 + fp288;
target[((hsi*60+15)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp254;
fp254 = inteval->PA_y[vi] * target[((hsi*60+15)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp254 + fp252;
LIBINT2_REALTYPE fp248;
fp248 = fp251 + fp249;
target[((hsi*60+21)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp204;
fp204 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp203;
fp203 = fp204 * target[((hsi*60+21)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp281;
fp281 = fp282 * target[((hsi*60+9)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp284;
fp284 = fp285 * target[((hsi*60+4)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp317;
fp317 = fp318 * target[((hsi*60+3)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = inteval->PA_y[vi] * target[((hsi*60+4)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = fp319 + fp317;
target[((hsi*60+10)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp286;
fp286 = inteval->PA_y[vi] * target[((hsi*60+10)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp286 + fp284;
LIBINT2_REALTYPE fp280;
fp280 = fp283 + fp281;
target[((hsi*60+16)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp207;
fp207 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp206;
fp206 = fp207 * target[((hsi*60+16)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp242;
fp242 = fp243 * target[((hsi*60+15)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp245;
fp245 = fp246 * target[((hsi*60+10)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = inteval->PA_y[vi] * target[((hsi*60+16)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp247 + fp245;
LIBINT2_REALTYPE fp241;
fp241 = fp244 + fp242;
target[((hsi*60+22)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp208;
fp208 = inteval->PA_y[vi] * target[((hsi*60+22)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp208 + fp206;
LIBINT2_REALTYPE fp202;
fp202 = fp205 + fp203;
target[((hsi*60+28)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp211;
fp211 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp210;
fp210 = fp211 * target[((hsi*60+20)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp213;
fp213 = fp214 * target[((hsi*60+15)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = inteval->PA_y[vi] * target[((hsi*60+21)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp215 + fp213;
LIBINT2_REALTYPE fp209;
fp209 = fp212 + fp210;
target[((hsi*60+27)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp232;
fp232 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp231;
fp231 = fp232 * target[((hsi*60+12)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->PA_y[vi] * target[((hsi*60+18)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp233 + fp231;
target[((hsi*60+24)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp186;
fp186 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp185;
fp185 = fp186 * target[((hsi*60+24)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp188;
fp188 = fp189 * target[((hsi*60+19)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->PA_y[vi] * target[((hsi*60+25)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp190 + fp188;
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
target[((hsi*60+31)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp133;
fp133 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * target[((hsi*60+32)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * target[((hsi*60+27)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp171;
fp171 = fp172 * target[((hsi*60+26)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * target[((hsi*60+21)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = inteval->PA_y[vi] * target[((hsi*60+27)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp176 + fp174;
LIBINT2_REALTYPE fp170;
fp170 = fp173 + fp171;
target[((hsi*60+33)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp137;
fp137 = inteval->PA_y[vi] * target[((hsi*60+33)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
LIBINT2_REALTYPE fp131;
fp131 = fp134 + fp132;
target[((hsi*60+39)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp87;
fp87 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * target[((hsi*60+39)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp164;
fp164 = fp165 * target[((hsi*60+27)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp167;
fp167 = fp168 * target[((hsi*60+22)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->PA_y[vi] * target[((hsi*60+28)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp169 + fp167;
LIBINT2_REALTYPE fp163;
fp163 = fp166 + fp164;
target[((hsi*60+34)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp90;
fp90 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*60+34)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * target[((hsi*60+33)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * target[((hsi*60+28)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->PA_y[vi] * target[((hsi*60+34)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
LIBINT2_REALTYPE fp124;
fp124 = fp127 + fp125;
target[((hsi*60+40)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_y[vi] * target[((hsi*60+40)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
LIBINT2_REALTYPE fp85;
fp85 = fp88 + fp86;
target[((hsi*60+46)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp140;
fp140 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp140 * target[((hsi*60+31)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * target[((hsi*60+26)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = inteval->PA_y[vi] * target[((hsi*60+32)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp144 + fp142;
LIBINT2_REALTYPE fp138;
fp138 = fp141 + fp139;
target[((hsi*60+38)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp94;
fp94 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * target[((hsi*60+38)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * target[((hsi*60+33)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->PA_y[vi] * target[((hsi*60+39)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
target[((hsi*60+45)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp193;
fp193 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp192;
fp192 = fp193 * target[((hsi*60+18)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = inteval->PA_y[vi] * target[((hsi*60+24)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp194 + fp192;
target[((hsi*60+30)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * target[((hsi*60+30)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * target[((hsi*60+25)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_y[vi] * target[((hsi*60+31)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
target[((hsi*60+37)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp101;
fp101 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * target[((hsi*60+37)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * target[((hsi*60+32)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->PA_y[vi] * target[((hsi*60+38)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
target[((hsi*60+44)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp154;
fp154 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp153;
fp153 = fp154 * target[((hsi*60+24)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = inteval->PA_y[vi] * target[((hsi*60+30)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp155 + fp153;
target[((hsi*60+36)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp108;
fp108 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp108 * target[((hsi*60+36)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * target[((hsi*60+31)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->PA_y[vi] * target[((hsi*60+37)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
LIBINT2_REALTYPE fp106;
fp106 = fp109 + fp107;
target[((hsi*60+43)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp115;
fp115 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * target[((hsi*60+30)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->PA_y[vi] * target[((hsi*60+36)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp116 + fp114;
target[((hsi*60+42)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp335;
fp335 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp334;
fp334 = fp335 * target[((hsi*60+3)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = inteval->PB_y[vi] * target[((hsi*60+4)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = fp336 + fp334;
target[((hsi*60+5)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp48;
fp48 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * target[((hsi*60+45)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*60+40)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_y[vi] * target[((hsi*60+46)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
LIBINT2_REALTYPE fp46;
fp46 = fp49 + fp47;
target[((hsi*60+52)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp55;
fp55 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * target[((hsi*60+44)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*60+39)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_y[vi] * target[((hsi*60+45)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*60+51)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp314;
fp314 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp313;
fp313 = fp314 * target[((hsi*60+4)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = inteval->PA_y[vi] * target[((hsi*60+5)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = fp315 + fp313;
target[((hsi*60+11)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp62;
fp62 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * target[((hsi*60+43)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*60+38)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_y[vi] * target[((hsi*60+44)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
target[((hsi*60+50)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp76;
fp76 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*60+36)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->PA_y[vi] * target[((hsi*60+42)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*60+48)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * target[((hsi*60+40)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp157;
fp157 = fp158 * target[((hsi*60+28)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp235;
fp235 = fp236 * target[((hsi*60+16)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp238;
fp238 = fp239 * target[((hsi*60+11)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp274;
fp274 = fp275 * target[((hsi*60+10)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp277;
fp277 = fp278 * target[((hsi*60+5)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = inteval->PA_y[vi] * target[((hsi*60+11)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = fp279 + fp277;
LIBINT2_REALTYPE fp273;
fp273 = fp276 + fp274;
target[((hsi*60+17)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp240;
fp240 = inteval->PA_y[vi] * target[((hsi*60+17)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp240 + fp238;
LIBINT2_REALTYPE fp234;
fp234 = fp237 + fp235;
target[((hsi*60+23)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp161;
fp161 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp160;
fp160 = fp161 * target[((hsi*60+23)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * target[((hsi*60+22)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp199;
fp199 = fp200 * target[((hsi*60+17)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->PA_y[vi] * target[((hsi*60+23)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp201 + fp199;
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
target[((hsi*60+29)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp162;
fp162 = inteval->PA_y[vi] * target[((hsi*60+29)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp162 + fp160;
LIBINT2_REALTYPE fp156;
fp156 = fp159 + fp157;
target[((hsi*60+35)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp83;
fp83 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*60+35)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 * target[((hsi*60+34)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * target[((hsi*60+29)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->PA_y[vi] * target[((hsi*60+35)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp123 + fp121;
LIBINT2_REALTYPE fp117;
fp117 = fp120 + fp118;
target[((hsi*60+41)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PA_y[vi] * target[((hsi*60+41)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*60+47)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * target[((hsi*60+42)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*60+37)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_y[vi] * target[((hsi*60+43)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*60+49)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp41;
fp41 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * target[((hsi*60+46)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*60+41)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_y[vi] * target[((hsi*60+47)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
target[((hsi*60+53)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp37;
fp37 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*60+42)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->PA_y[vi] * target[((hsi*60+48)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*60+54)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*60+48)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*60+43)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_y[vi] * target[((hsi*60+49)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*60+55)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*60+49)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*60+44)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_y[vi] * target[((hsi*60+50)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*60+56)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*60+50)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*60+45)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_y[vi] * target[((hsi*60+51)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*60+57)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*60+51)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*60+46)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_y[vi] * target[((hsi*60+52)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*60+58)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*60+52)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*60+47)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_y[vi] * target[((hsi*60+53)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp6 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*60+59)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 350 */
}

#ifdef __cplusplus
};
#endif
