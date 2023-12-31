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
void CR_aB_i__0___CartesianMultipole_sB_0_c_2_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_y[vi] * fp76;
LIBINT2_REALTYPE fp78;
fp78 = fp75 + fp79;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp78;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp249;
fp249 = fp118 * fp73;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp11;
target[((hsi*84+22)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp76 + fp81;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_y[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = fp78 + fp83;
LIBINT2_REALTYPE fp247;
fp247 = fp118 * fp82;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp10;
target[((hsi*84+23)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_y[vi] * fp90;
LIBINT2_REALTYPE fp92;
fp92 = fp89 + fp93;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_y[vi] * fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp90 + fp95;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_y[vi] * fp94;
LIBINT2_REALTYPE fp96;
fp96 = fp92 + fp97;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp119 * fp96;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp9;
target[((hsi*84+24)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp88;
fp88 = inteval->BO_y[vi] * fp92;
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_y[vi] * fp89;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp84 + fp86;
LIBINT2_REALTYPE fp87;
fp87 = fp85 + fp88;
LIBINT2_REALTYPE fp243;
fp243 = fp118 * fp87;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp9;
target[((hsi*84+25)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp118 * fp96;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp8;
target[((hsi*84+26)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_y[vi] * fp104;
LIBINT2_REALTYPE fp106;
fp106 = fp103 + fp107;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_y[vi] * fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp104 + fp109;
LIBINT2_REALTYPE fp111;
fp111 = inteval->BO_y[vi] * fp108;
LIBINT2_REALTYPE fp110;
fp110 = fp106 + fp111;
LIBINT2_REALTYPE fp239;
fp239 = fp119 * fp110;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp7;
target[((hsi*84+27)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_y[vi] * fp106;
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_y[vi] * fp103;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp98 + fp100;
LIBINT2_REALTYPE fp101;
fp101 = fp99 + fp102;
LIBINT2_REALTYPE fp237;
fp237 = fp118 * fp101;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp7;
target[((hsi*84+28)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp118 * fp110;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp6;
target[((hsi*84+29)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp48;
LIBINT2_REALTYPE fp50;
fp50 = fp47 + fp51;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_y[vi] * fp49;
LIBINT2_REALTYPE fp52;
fp52 = fp48 + fp53;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp54;
fp54 = fp50 + fp55;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp117 * fp54;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp13;
target[((hsi*84+30)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = fp125 * fp110;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp13;
target[((hsi*84+0)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp116 * fp54;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp12;
target[((hsi*84+32)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_y[vi] * fp62;
LIBINT2_REALTYPE fp64;
fp64 = fp61 + fp65;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_y[vi] * fp63;
LIBINT2_REALTYPE fp66;
fp66 = fp62 + fp67;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp68;
fp68 = fp64 + fp69;
LIBINT2_REALTYPE fp227;
fp227 = fp117 * fp68;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp11;
target[((hsi*84+33)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_y[vi] * fp64;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_y[vi] * fp61;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp225;
fp225 = fp116 * fp59;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp11;
target[((hsi*84+34)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp223;
fp223 = fp116 * fp68;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp10;
target[((hsi*84+35)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp221;
fp221 = fp117 * fp82;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp9;
target[((hsi*84+36)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp219;
fp219 = fp116 * fp73;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp9;
target[((hsi*84+37)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp217;
fp217 = fp116 * fp82;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp8;
target[((hsi*84+38)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp215;
fp215 = fp117 * fp96;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp7;
target[((hsi*84+39)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp213;
fp213 = fp116 * fp87;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp7;
target[((hsi*84+40)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp211;
fp211 = fp116 * fp96;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp6;
target[((hsi*84+41)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_y[vi] * fp50;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp45;
fp45 = fp43 + fp46;
LIBINT2_REALTYPE fp231;
fp231 = fp116 * fp45;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp13;
target[((hsi*84+31)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp124 * fp101;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp13;
target[((hsi*84+1)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp289;
fp289 = fp124 * fp110;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp12;
target[((hsi*84+2)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = fp123 * fp96;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp13;
target[((hsi*84+3)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp122 * fp87;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp13;
target[((hsi*84+4)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp283;
fp283 = fp122 * fp96;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp12;
target[((hsi*84+5)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp281;
fp281 = fp123 * fp110;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp11;
target[((hsi*84+6)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp279;
fp279 = fp122 * fp101;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp11;
target[((hsi*84+7)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp277;
fp277 = fp122 * fp110;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp10;
target[((hsi*84+8)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp121 * fp82;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp13;
target[((hsi*84+9)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp251;
fp251 = fp119 * fp82;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp11;
target[((hsi*84+21)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = fp120 * fp82;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp12;
target[((hsi*84+11)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp269;
fp269 = fp121 * fp96;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp11;
target[((hsi*84+12)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp267;
fp267 = fp120 * fp87;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp11;
target[((hsi*84+13)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp265;
fp265 = fp120 * fp96;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp10;
target[((hsi*84+14)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp263;
fp263 = fp121 * fp110;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp9;
target[((hsi*84+15)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp261;
fp261 = fp120 * fp101;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp9;
target[((hsi*84+16)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp259;
fp259 = fp120 * fp110;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp8;
target[((hsi*84+17)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp257;
fp257 = fp119 * fp68;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp13;
target[((hsi*84+18)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp255;
fp255 = fp118 * fp59;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp13;
target[((hsi*84+19)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp253;
fp253 = fp118 * fp68;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp12;
target[((hsi*84+20)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp273;
fp273 = fp120 * fp73;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp13;
target[((hsi*84+10)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_y[vi] * fp20;
LIBINT2_REALTYPE fp22;
fp22 = fp19 + fp23;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_y[vi] * fp22;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_y[vi] * fp19;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp165;
fp165 = fp112 * fp17;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp13;
target[((hsi*84+64)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_y[vi] * fp21;
LIBINT2_REALTYPE fp24;
fp24 = fp20 + fp25;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_y[vi] * fp24;
LIBINT2_REALTYPE fp26;
fp26 = fp22 + fp27;
LIBINT2_REALTYPE fp163;
fp163 = fp112 * fp26;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp12;
target[((hsi*84+65)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp36;
fp36 = fp33 + fp37;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp38;
fp38 = fp34 + fp39;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp38;
LIBINT2_REALTYPE fp40;
fp40 = fp36 + fp41;
LIBINT2_REALTYPE fp161;
fp161 = fp113 * fp40;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp11;
target[((hsi*84+66)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp36;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_y[vi] * fp33;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp159;
fp159 = fp112 * fp31;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp11;
target[((hsi*84+67)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp157;
fp157 = fp112 * fp40;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp10;
target[((hsi*84+68)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp155;
fp155 = fp113 * fp54;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp9;
target[((hsi*84+69)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp153;
fp153 = fp112 * fp45;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp9;
target[((hsi*84+70)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp151;
fp151 = fp112 * fp54;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp8;
target[((hsi*84+71)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp149;
fp149 = fp113 * fp68;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp7;
target[((hsi*84+72)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp117 * fp110;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp5;
target[((hsi*84+42)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp145;
fp145 = fp112 * fp68;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp6;
target[((hsi*84+74)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp143;
fp143 = fp113 * fp82;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp5;
target[((hsi*84+75)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = fp112 * fp73;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp5;
target[((hsi*84+76)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp112 * fp82;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp4;
target[((hsi*84+77)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp113 * fp96;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp3;
target[((hsi*84+78)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp135;
fp135 = fp112 * fp87;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp3;
target[((hsi*84+79)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp112 * fp96;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp2;
target[((hsi*84+80)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp113 * fp110;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp1;
target[((hsi*84+81)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp129;
fp129 = fp112 * fp101;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp1;
target[((hsi*84+82)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp112 * fp110;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp0;
target[((hsi*84+83)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp147;
fp147 = fp112 * fp59;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp7;
target[((hsi*84+73)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp207;
fp207 = fp116 * fp101;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp5;
target[((hsi*84+43)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp205;
fp205 = fp116 * fp110;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp4;
target[((hsi*84+44)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp115 * fp40;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp13;
target[((hsi*84+45)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp114 * fp31;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp13;
target[((hsi*84+46)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp199;
fp199 = fp114 * fp40;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp12;
target[((hsi*84+47)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp197;
fp197 = fp115 * fp54;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp11;
target[((hsi*84+48)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp195;
fp195 = fp114 * fp45;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp11;
target[((hsi*84+49)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp193;
fp193 = fp114 * fp54;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp10;
target[((hsi*84+50)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp191;
fp191 = fp115 * fp68;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp9;
target[((hsi*84+51)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp167;
fp167 = fp113 * fp26;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp13;
target[((hsi*84+63)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp187;
fp187 = fp114 * fp68;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp8;
target[((hsi*84+53)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp185;
fp185 = fp115 * fp82;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp7;
target[((hsi*84+54)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp183;
fp183 = fp114 * fp73;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp7;
target[((hsi*84+55)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp181;
fp181 = fp114 * fp82;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp6;
target[((hsi*84+56)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp179;
fp179 = fp115 * fp96;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp5;
target[((hsi*84+57)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp177;
fp177 = fp114 * fp87;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp5;
target[((hsi*84+58)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp175;
fp175 = fp114 * fp96;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp4;
target[((hsi*84+59)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp173;
fp173 = fp115 * fp110;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp3;
target[((hsi*84+60)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp171;
fp171 = fp114 * fp101;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp3;
target[((hsi*84+61)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp169;
fp169 = fp114 * fp110;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp2;
target[((hsi*84+62)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp189;
fp189 = fp114 * fp59;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp9;
target[((hsi*84+52)*1+lsi)*1] = fp188;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 294 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
