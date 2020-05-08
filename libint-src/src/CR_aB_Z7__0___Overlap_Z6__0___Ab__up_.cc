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
void CR_aB_Z7__0___Overlap_Z6__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*56+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp321;
fp321 = inteval->PB_z[vi] * target[((hsi*56+0)*1+lsi)*1];
target[((hsi*56+1)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp319;
fp319 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp318;
fp318 = fp319 * target[((hsi*56+0)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = inteval->PB_z[vi] * target[((hsi*56+1)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = fp320 + fp318;
target[((hsi*56+2)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp315;
fp315 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp314;
fp314 = fp315 * target[((hsi*56+1)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = inteval->PB_z[vi] * target[((hsi*56+2)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp316 + fp314;
target[((hsi*56+3)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp311;
fp311 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp310;
fp310 = fp311 * target[((hsi*56+2)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = inteval->PB_z[vi] * target[((hsi*56+3)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = fp312 + fp310;
target[((hsi*56+4)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp307;
fp307 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp306;
fp306 = fp307 * target[((hsi*56+3)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = inteval->PB_z[vi] * target[((hsi*56+4)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp308 + fp306;
target[((hsi*56+5)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp274;
fp274 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp273;
fp273 = fp274 * target[((hsi*56+0)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = inteval->PA_z[vi] * target[((hsi*56+0)*1+lsi)*1];
target[((hsi*56+7)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp275;
fp275 = inteval->PA_z[vi] * target[((hsi*56+7)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp275 + fp273;
target[((hsi*56+14)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp221;
fp221 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp220;
fp220 = fp221 * target[((hsi*56+14)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp297;
fp297 = fp298 * target[((hsi*56+0)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = inteval->PA_z[vi] * target[((hsi*56+1)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp299 + fp297;
target[((hsi*56+8)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp224;
fp224 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp223;
fp223 = fp224 * target[((hsi*56+8)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp266;
fp266 = fp267 * target[((hsi*56+7)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp269;
fp269 = fp270 * target[((hsi*56+1)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = inteval->PA_z[vi] * target[((hsi*56+8)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp271 + fp269;
LIBINT2_REALTYPE fp265;
fp265 = fp268 + fp266;
target[((hsi*56+15)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp225;
fp225 = inteval->PA_z[vi] * target[((hsi*56+15)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp225 + fp223;
LIBINT2_REALTYPE fp219;
fp219 = fp222 + fp220;
target[((hsi*56+22)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp168;
fp168 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp167;
fp167 = fp168 * target[((hsi*56+22)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp259;
fp259 = fp260 * target[((hsi*56+8)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp262;
fp262 = fp263 * target[((hsi*56+2)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp293;
fp293 = fp294 * target[((hsi*56+1)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = inteval->PA_z[vi] * target[((hsi*56+2)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp295 + fp293;
target[((hsi*56+9)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp264;
fp264 = inteval->PA_z[vi] * target[((hsi*56+9)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp264 + fp262;
LIBINT2_REALTYPE fp258;
fp258 = fp261 + fp259;
target[((hsi*56+16)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp171;
fp171 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * target[((hsi*56+16)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp213;
fp213 = fp214 * target[((hsi*56+15)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp216;
fp216 = fp217 * target[((hsi*56+9)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = inteval->PA_z[vi] * target[((hsi*56+16)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp218 + fp216;
LIBINT2_REALTYPE fp212;
fp212 = fp215 + fp213;
target[((hsi*56+23)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp172;
fp172 = inteval->PA_z[vi] * target[((hsi*56+23)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp172 + fp170;
LIBINT2_REALTYPE fp166;
fp166 = fp169 + fp167;
target[((hsi*56+30)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp290;
fp290 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp289;
fp289 = fp290 * target[((hsi*56+2)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = inteval->PA_z[vi] * target[((hsi*56+3)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp291 + fp289;
target[((hsi*56+10)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp246;
fp246 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp245;
fp245 = fp246 * target[((hsi*56+10)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp248;
fp248 = fp249 * target[((hsi*56+4)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp285;
fp285 = fp286 * target[((hsi*56+3)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = inteval->PA_z[vi] * target[((hsi*56+4)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = fp287 + fp285;
target[((hsi*56+11)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp250;
fp250 = inteval->PA_z[vi] * target[((hsi*56+11)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp250 + fp248;
LIBINT2_REALTYPE fp244;
fp244 = fp247 + fp245;
target[((hsi*56+18)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp193;
fp193 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp192;
fp192 = fp193 * target[((hsi*56+18)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp281;
fp281 = fp282 * target[((hsi*56+4)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = inteval->PA_z[vi] * target[((hsi*56+5)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp283 + fp281;
target[((hsi*56+12)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp196;
fp196 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp195;
fp195 = fp196 * target[((hsi*56+12)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp238;
fp238 = fp239 * target[((hsi*56+11)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp241;
fp241 = fp242 * target[((hsi*56+5)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = inteval->PA_z[vi] * target[((hsi*56+12)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp243 + fp241;
LIBINT2_REALTYPE fp237;
fp237 = fp240 + fp238;
target[((hsi*56+19)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp197;
fp197 = inteval->PA_z[vi] * target[((hsi*56+19)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp197 + fp195;
LIBINT2_REALTYPE fp191;
fp191 = fp194 + fp192;
target[((hsi*56+26)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp253;
fp253 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp252;
fp252 = fp253 * target[((hsi*56+9)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp255;
fp255 = fp256 * target[((hsi*56+3)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->PA_z[vi] * target[((hsi*56+10)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp257 + fp255;
LIBINT2_REALTYPE fp251;
fp251 = fp254 + fp252;
target[((hsi*56+17)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp200;
fp200 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp199;
fp199 = fp200 * target[((hsi*56+17)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp202;
fp202 = fp203 * target[((hsi*56+11)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = inteval->PA_z[vi] * target[((hsi*56+18)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp204 + fp202;
LIBINT2_REALTYPE fp198;
fp198 = fp201 + fp199;
target[((hsi*56+25)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp207;
fp207 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp206;
fp206 = fp207 * target[((hsi*56+16)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp209;
fp209 = fp210 * target[((hsi*56+10)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = inteval->PA_z[vi] * target[((hsi*56+17)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp211 + fp209;
LIBINT2_REALTYPE fp205;
fp205 = fp208 + fp206;
target[((hsi*56+24)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp228;
fp228 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp227;
fp227 = fp228 * target[((hsi*56+7)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->PA_z[vi] * target[((hsi*56+14)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp229 + fp227;
target[((hsi*56+21)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp175;
fp175 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * target[((hsi*56+21)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp177;
fp177 = fp178 * target[((hsi*56+15)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->PA_z[vi] * target[((hsi*56+22)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp179 + fp177;
LIBINT2_REALTYPE fp173;
fp173 = fp176 + fp174;
target[((hsi*56+29)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp161;
fp161 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp160;
fp160 = fp161 * target[((hsi*56+23)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * target[((hsi*56+17)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_z[vi] * target[((hsi*56+24)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
LIBINT2_REALTYPE fp159;
fp159 = fp162 + fp160;
target[((hsi*56+31)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp154;
fp154 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp153;
fp153 = fp154 * target[((hsi*56+24)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * target[((hsi*56+18)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = inteval->PA_z[vi] * target[((hsi*56+25)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
LIBINT2_REALTYPE fp152;
fp152 = fp155 + fp153;
target[((hsi*56+32)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp147;
fp147 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * target[((hsi*56+25)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * target[((hsi*56+19)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_z[vi] * target[((hsi*56+26)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
target[((hsi*56+33)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp136;
fp136 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * target[((hsi*56+21)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp181;
fp181 = fp182 * target[((hsi*56+14)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_z[vi] * target[((hsi*56+21)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp183 + fp181;
target[((hsi*56+28)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp137;
fp137 = inteval->PA_z[vi] * target[((hsi*56+28)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
target[((hsi*56+35)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp129;
fp129 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * target[((hsi*56+28)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp131;
fp131 = fp132 * target[((hsi*56+22)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->PA_z[vi] * target[((hsi*56+29)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp133 + fp131;
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
target[((hsi*56+36)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp122;
fp122 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * target[((hsi*56+29)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * target[((hsi*56+23)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->PA_z[vi] * target[((hsi*56+30)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
LIBINT2_REALTYPE fp120;
fp120 = fp123 + fp121;
target[((hsi*56+37)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp115;
fp115 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * target[((hsi*56+30)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * target[((hsi*56+24)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->PA_z[vi] * target[((hsi*56+31)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
LIBINT2_REALTYPE fp113;
fp113 = fp116 + fp114;
target[((hsi*56+38)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp108;
fp108 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp108 * target[((hsi*56+31)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * target[((hsi*56+25)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->PA_z[vi] * target[((hsi*56+32)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
LIBINT2_REALTYPE fp106;
fp106 = fp109 + fp107;
target[((hsi*56+39)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp101;
fp101 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * target[((hsi*56+32)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * target[((hsi*56+26)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->PA_z[vi] * target[((hsi*56+33)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
target[((hsi*56+40)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp303;
fp303 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp302;
fp302 = fp303 * target[((hsi*56+4)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = inteval->PB_z[vi] * target[((hsi*56+5)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp304 + fp302;
target[((hsi*56+6)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp55;
fp55 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * target[((hsi*56+39)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*56+33)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * target[((hsi*56+40)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*56+47)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp62;
fp62 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * target[((hsi*56+38)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*56+32)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_z[vi] * target[((hsi*56+39)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
target[((hsi*56+46)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp69;
fp69 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * target[((hsi*56+37)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*56+31)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_z[vi] * target[((hsi*56+38)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*56+45)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp278;
fp278 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp277;
fp277 = fp278 * target[((hsi*56+5)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = inteval->PA_z[vi] * target[((hsi*56+6)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = fp279 + fp277;
target[((hsi*56+13)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp76;
fp76 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*56+36)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * target[((hsi*56+30)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->PA_z[vi] * target[((hsi*56+37)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*56+44)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp90;
fp90 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*56+28)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_z[vi] * target[((hsi*56+35)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*56+42)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp94;
fp94 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * target[((hsi*56+33)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp185;
fp185 = fp186 * target[((hsi*56+19)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp188;
fp188 = fp189 * target[((hsi*56+13)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp231;
fp231 = fp232 * target[((hsi*56+12)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp234;
fp234 = fp235 * target[((hsi*56+6)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = inteval->PA_z[vi] * target[((hsi*56+13)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp236 + fp234;
LIBINT2_REALTYPE fp230;
fp230 = fp233 + fp231;
target[((hsi*56+20)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp190;
fp190 = inteval->PA_z[vi] * target[((hsi*56+20)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp190 + fp188;
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
target[((hsi*56+27)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp97;
fp97 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * target[((hsi*56+27)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp140 * target[((hsi*56+26)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * target[((hsi*56+20)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = inteval->PA_z[vi] * target[((hsi*56+27)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp144 + fp142;
LIBINT2_REALTYPE fp138;
fp138 = fp141 + fp139;
target[((hsi*56+34)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PA_z[vi] * target[((hsi*56+34)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
target[((hsi*56+41)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*56+35)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * target[((hsi*56+29)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_z[vi] * target[((hsi*56+36)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*56+43)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp48;
fp48 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * target[((hsi*56+40)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*56+34)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_z[vi] * target[((hsi*56+41)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
LIBINT2_REALTYPE fp46;
fp46 = fp49 + fp47;
target[((hsi*56+48)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp44;
fp44 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*56+35)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_z[vi] * target[((hsi*56+42)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*56+49)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*56+42)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*56+36)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * target[((hsi*56+43)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*56+50)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp30;
fp30 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*56+43)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*56+37)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_z[vi] * target[((hsi*56+44)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*56+51)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*56+44)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*56+38)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_z[vi] * target[((hsi*56+45)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*56+52)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*56+45)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*56+39)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_z[vi] * target[((hsi*56+46)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*56+53)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*56+46)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*56+40)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_z[vi] * target[((hsi*56+47)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*56+54)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*56+47)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*56+41)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_z[vi] * target[((hsi*56+48)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp6 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*56+55)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 322 */
}

#ifdef __cplusplus
};
#endif
