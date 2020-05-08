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
void CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src1[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_y[vi] * fp83;
LIBINT2_REALTYPE fp85;
fp85 = fp82 + fp86;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->BO_y[vi] * fp84;
LIBINT2_REALTYPE fp87;
fp87 = fp83 + fp88;
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_y[vi] * fp87;
LIBINT2_REALTYPE fp89;
fp89 = fp85 + fp90;
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src0[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp118 * fp89;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp11;
target[((hsi*90+24)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*25+8)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_y[vi] * fp82;
LIBINT2_REALTYPE fp78;
fp78 = fp77 + fp79;
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_y[vi] * fp85;
LIBINT2_REALTYPE fp80;
fp80 = fp78 + fp81;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src0[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp117 * fp80;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp11;
target[((hsi*90+25)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp117 * fp89;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp10;
target[((hsi*90+26)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src0[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_y[vi] * fp78;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*25+9)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp72 + fp74;
LIBINT2_REALTYPE fp75;
fp75 = fp73 + fp76;
LIBINT2_REALTYPE fp250;
fp250 = fp116 * fp75;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp11;
target[((hsi*90+27)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp248;
fp248 = fp116 * fp80;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp10;
target[((hsi*90+28)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp116 * fp89;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp9;
target[((hsi*90+29)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src1[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src1[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->BO_y[vi] * fp102;
LIBINT2_REALTYPE fp104;
fp104 = fp101 + fp105;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_y[vi] * fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp102 + fp107;
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_y[vi] * fp106;
LIBINT2_REALTYPE fp108;
fp108 = fp104 + fp109;
LIBINT2_REALTYPE fp244;
fp244 = fp118 * fp108;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp8;
target[((hsi*90+30)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src1[((hsi*25+3)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->BO_y[vi] * fp101;
LIBINT2_REALTYPE fp97;
fp97 = fp96 + fp98;
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_y[vi] * fp104;
LIBINT2_REALTYPE fp99;
fp99 = fp97 + fp100;
LIBINT2_REALTYPE fp242;
fp242 = fp117 * fp99;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp8;
target[((hsi*90+31)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp117 * fp108;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp7;
target[((hsi*90+32)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_y[vi] * fp97;
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_y[vi] * fp96;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*25+4)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp91 + fp93;
LIBINT2_REALTYPE fp94;
fp94 = fp92 + fp95;
LIBINT2_REALTYPE fp238;
fp238 = fp116 * fp94;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp8;
target[((hsi*90+33)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = fp124 * fp108;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp14;
target[((hsi*90+0)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp116 * fp108;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp6;
target[((hsi*90+35)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp47;
fp47 = fp44 + fp48;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp49;
fp49 = fp45 + fp50;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_y[vi] * fp49;
LIBINT2_REALTYPE fp51;
fp51 = fp47 + fp52;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src0[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp115 * fp51;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp14;
target[((hsi*90+36)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*25+18)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp40;
fp40 = fp39 + fp41;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp42;
fp42 = fp40 + fp43;
LIBINT2_REALTYPE fp230;
fp230 = fp114 * fp42;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp14;
target[((hsi*90+37)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp114 * fp51;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp13;
target[((hsi*90+38)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src0[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp40;
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_y[vi] * fp39;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*25+19)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp34 + fp36;
LIBINT2_REALTYPE fp37;
fp37 = fp35 + fp38;
LIBINT2_REALTYPE fp226;
fp226 = fp113 * fp37;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp14;
target[((hsi*90+39)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp224;
fp224 = fp113 * fp42;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp13;
target[((hsi*90+40)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp113 * fp51;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp12;
target[((hsi*90+41)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src1[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_y[vi] * fp64;
LIBINT2_REALTYPE fp66;
fp66 = fp63 + fp67;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_y[vi] * fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp64 + fp69;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_y[vi] * fp68;
LIBINT2_REALTYPE fp70;
fp70 = fp66 + fp71;
LIBINT2_REALTYPE fp220;
fp220 = fp115 * fp70;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp11;
target[((hsi*90+42)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*25+13)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_y[vi] * fp63;
LIBINT2_REALTYPE fp59;
fp59 = fp58 + fp60;
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp61;
fp61 = fp59 + fp62;
LIBINT2_REALTYPE fp218;
fp218 = fp114 * fp61;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp11;
target[((hsi*90+43)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp216;
fp216 = fp114 * fp70;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp10;
target[((hsi*90+44)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp236;
fp236 = fp116 * fp99;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp7;
target[((hsi*90+34)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src0[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = fp123 * fp99;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp14;
target[((hsi*90+1)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp300;
fp300 = fp123 * fp108;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp13;
target[((hsi*90+2)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src0[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = fp122 * fp94;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp14;
target[((hsi*90+3)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp296;
fp296 = fp122 * fp99;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp13;
target[((hsi*90+4)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp294;
fp294 = fp122 * fp108;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp12;
target[((hsi*90+5)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp121 * fp89;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp14;
target[((hsi*90+6)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp120 * fp80;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp14;
target[((hsi*90+7)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp288;
fp288 = fp120 * fp89;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp13;
target[((hsi*90+8)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src0[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp119 * fp75;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp14;
target[((hsi*90+9)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp284;
fp284 = fp119 * fp80;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp13;
target[((hsi*90+10)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp258;
fp258 = fp116 * fp70;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp12;
target[((hsi*90+23)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp280;
fp280 = fp121 * fp108;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp11;
target[((hsi*90+12)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp278;
fp278 = fp120 * fp99;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp11;
target[((hsi*90+13)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp276;
fp276 = fp120 * fp108;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp10;
target[((hsi*90+14)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp274;
fp274 = fp119 * fp94;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp11;
target[((hsi*90+15)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp272;
fp272 = fp119 * fp99;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp10;
target[((hsi*90+16)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp270;
fp270 = fp119 * fp108;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp9;
target[((hsi*90+17)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp268;
fp268 = fp118 * fp70;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp14;
target[((hsi*90+18)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp266;
fp266 = fp117 * fp61;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp14;
target[((hsi*90+19)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp264;
fp264 = fp117 * fp70;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp13;
target[((hsi*90+20)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp59;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp58;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*25+14)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp56;
fp56 = fp54 + fp57;
LIBINT2_REALTYPE fp262;
fp262 = fp116 * fp56;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp14;
target[((hsi*90+21)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp260;
fp260 = fp116 * fp61;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp13;
target[((hsi*90+22)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp282;
fp282 = fp119 * fp89;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp12;
target[((hsi*90+11)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src0[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp110 * fp37;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp11;
target[((hsi*90+69)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp164;
fp164 = fp110 * fp42;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp10;
target[((hsi*90+70)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp162;
fp162 = fp110 * fp51;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp9;
target[((hsi*90+71)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src0[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp112 * fp70;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp8;
target[((hsi*90+72)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src0[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp111 * fp61;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp8;
target[((hsi*90+73)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp156;
fp156 = fp111 * fp70;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp7;
target[((hsi*90+74)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp154;
fp154 = fp110 * fp56;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp8;
target[((hsi*90+75)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp152;
fp152 = fp110 * fp61;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp7;
target[((hsi*90+76)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp150;
fp150 = fp110 * fp70;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp6;
target[((hsi*90+77)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp112 * fp89;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp5;
target[((hsi*90+78)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp214;
fp214 = fp113 * fp56;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp11;
target[((hsi*90+45)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp111 * fp89;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp4;
target[((hsi*90+80)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp142;
fp142 = fp110 * fp75;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp5;
target[((hsi*90+81)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp140;
fp140 = fp110 * fp80;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp4;
target[((hsi*90+82)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp110 * fp89;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp3;
target[((hsi*90+83)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp112 * fp108;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp2;
target[((hsi*90+84)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp134;
fp134 = fp111 * fp99;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp2;
target[((hsi*90+85)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp111 * fp108;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp1;
target[((hsi*90+86)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp130;
fp130 = fp110 * fp94;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp2;
target[((hsi*90+87)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp128;
fp128 = fp110 * fp99;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp1;
target[((hsi*90+88)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp110 * fp108;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp0;
target[((hsi*90+89)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp146;
fp146 = fp111 * fp80;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp5;
target[((hsi*90+79)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp212;
fp212 = fp113 * fp61;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp10;
target[((hsi*90+46)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp210;
fp210 = fp113 * fp70;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp9;
target[((hsi*90+47)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp208;
fp208 = fp115 * fp89;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp8;
target[((hsi*90+48)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp206;
fp206 = fp114 * fp80;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp8;
target[((hsi*90+49)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp204;
fp204 = fp114 * fp89;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp7;
target[((hsi*90+50)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp202;
fp202 = fp113 * fp75;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp8;
target[((hsi*90+51)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp200;
fp200 = fp113 * fp80;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp7;
target[((hsi*90+52)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp198;
fp198 = fp113 * fp89;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp6;
target[((hsi*90+53)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp196;
fp196 = fp115 * fp108;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp5;
target[((hsi*90+54)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp194;
fp194 = fp114 * fp99;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp5;
target[((hsi*90+55)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp168;
fp168 = fp111 * fp51;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp10;
target[((hsi*90+68)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp190;
fp190 = fp113 * fp94;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp5;
target[((hsi*90+57)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp188;
fp188 = fp113 * fp99;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp4;
target[((hsi*90+58)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp186;
fp186 = fp113 * fp108;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp3;
target[((hsi*90+59)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp28;
fp28 = fp25 + fp29;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_y[vi] * fp27;
LIBINT2_REALTYPE fp30;
fp30 = fp26 + fp31;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp30;
LIBINT2_REALTYPE fp32;
fp32 = fp28 + fp33;
LIBINT2_REALTYPE fp184;
fp184 = fp112 * fp32;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp14;
target[((hsi*90+60)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*25+23)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp182;
fp182 = fp111 * fp23;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp14;
target[((hsi*90+61)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp180;
fp180 = fp111 * fp32;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp13;
target[((hsi*90+62)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_y[vi] * fp21;
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_y[vi] * fp20;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*25+24)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp15 + fp17;
LIBINT2_REALTYPE fp18;
fp18 = fp16 + fp19;
LIBINT2_REALTYPE fp178;
fp178 = fp110 * fp18;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp14;
target[((hsi*90+63)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp176;
fp176 = fp110 * fp23;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp13;
target[((hsi*90+64)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp174;
fp174 = fp110 * fp32;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp12;
target[((hsi*90+65)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp172;
fp172 = fp112 * fp51;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp11;
target[((hsi*90+66)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp170;
fp170 = fp111 * fp42;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp11;
target[((hsi*90+67)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp192;
fp192 = fp114 * fp108;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp4;
target[((hsi*90+56)*1+lsi)*1] = fp191;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 305 */
}

#ifdef __cplusplus
};
#endif
