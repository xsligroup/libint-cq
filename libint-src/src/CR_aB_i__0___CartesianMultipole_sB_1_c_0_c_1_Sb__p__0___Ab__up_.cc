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
void CR_aB_i__0___CartesianMultipole_sB_1_c_0_c_1_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src2[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp39;
LIBINT2_REALTYPE fp40;
fp40 = fp38 + fp41;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_x[vi] * fp84;
LIBINT2_REALTYPE fp85;
fp85 = fp88 + fp86;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp85 * fp57;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp40;
target[((hsi*84+22)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp85 * fp58;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp36;
target[((hsi*84+23)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_z[vi] * fp32;
LIBINT2_REALTYPE fp33;
fp33 = fp31 + fp34;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_x[vi] * fp88;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp87 + fp90;
LIBINT2_REALTYPE fp231;
fp231 = fp89 * fp60;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp33;
target[((hsi*84+24)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp85 * fp59;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp33;
target[((hsi*84+25)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp227;
fp227 = fp85 * fp60;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp29;
target[((hsi*84+26)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp89 * fp62;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp26;
target[((hsi*84+27)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp85 * fp61;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp26;
target[((hsi*84+28)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp221;
fp221 = fp85 * fp62;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp22;
target[((hsi*84+29)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src2[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_z[vi] * fp46;
LIBINT2_REALTYPE fp47;
fp47 = fp45 + fp48;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_x[vi] * fp81;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp80 + fp83;
LIBINT2_REALTYPE fp219;
fp219 = fp82 * fp54;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp47;
target[((hsi*84+30)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->BO_x[vi] * fp109;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp108 + fp111;
LIBINT2_REALTYPE fp279;
fp279 = fp110 * fp62;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp47;
target[((hsi*84+0)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp45;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_x[vi] * fp77;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
LIBINT2_REALTYPE fp215;
fp215 = fp78 * fp54;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp43;
target[((hsi*84+32)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp82 * fp56;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp40;
target[((hsi*84+33)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp78 * fp55;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp40;
target[((hsi*84+34)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp209;
fp209 = fp78 * fp56;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp36;
target[((hsi*84+35)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp207;
fp207 = fp82 * fp58;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp33;
target[((hsi*84+36)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp205;
fp205 = fp78 * fp57;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp33;
target[((hsi*84+37)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp203;
fp203 = fp78 * fp58;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp29;
target[((hsi*84+38)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp201;
fp201 = fp82 * fp60;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp26;
target[((hsi*84+39)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp199;
fp199 = fp78 * fp59;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp26;
target[((hsi*84+40)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp197;
fp197 = fp78 * fp60;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp22;
target[((hsi*84+41)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp78 * fp53;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp47;
target[((hsi*84+31)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_x[vi] * fp105;
LIBINT2_REALTYPE fp106;
fp106 = fp109 + fp107;
LIBINT2_REALTYPE fp277;
fp277 = fp106 * fp61;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp47;
target[((hsi*84+1)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp275;
fp275 = fp106 * fp62;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp43;
target[((hsi*84+2)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_x[vi] * fp102;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp101 + fp104;
LIBINT2_REALTYPE fp273;
fp273 = fp103 * fp60;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp47;
target[((hsi*84+3)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_x[vi] * fp98;
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
LIBINT2_REALTYPE fp271;
fp271 = fp99 * fp59;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp47;
target[((hsi*84+4)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp269;
fp269 = fp99 * fp60;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp43;
target[((hsi*84+5)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp267;
fp267 = fp103 * fp62;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp40;
target[((hsi*84+6)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp265;
fp265 = fp99 * fp61;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp40;
target[((hsi*84+7)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp263;
fp263 = fp99 * fp62;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp36;
target[((hsi*84+8)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_x[vi] * fp95;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp94 + fp97;
LIBINT2_REALTYPE fp261;
fp261 = fp96 * fp58;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp47;
target[((hsi*84+9)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp237;
fp237 = fp89 * fp58;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp40;
target[((hsi*84+21)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_x[vi] * fp91;
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
LIBINT2_REALTYPE fp257;
fp257 = fp92 * fp58;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp43;
target[((hsi*84+11)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp255;
fp255 = fp96 * fp60;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp40;
target[((hsi*84+12)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp253;
fp253 = fp92 * fp59;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp40;
target[((hsi*84+13)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp251;
fp251 = fp92 * fp60;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp36;
target[((hsi*84+14)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp249;
fp249 = fp96 * fp62;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp33;
target[((hsi*84+15)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp247;
fp247 = fp92 * fp61;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp33;
target[((hsi*84+16)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp245;
fp245 = fp92 * fp62;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp29;
target[((hsi*84+17)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp243;
fp243 = fp89 * fp56;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp47;
target[((hsi*84+18)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp241;
fp241 = fp85 * fp55;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp47;
target[((hsi*84+19)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp239;
fp239 = fp85 * fp56;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp43;
target[((hsi*84+20)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp259;
fp259 = fp92 * fp57;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp47;
target[((hsi*84+10)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_x[vi] * fp63;
LIBINT2_REALTYPE fp64;
fp64 = fp67 + fp65;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp64 * fp49;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp47;
target[((hsi*84+64)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp64 * fp50;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp43;
target[((hsi*84+65)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_x[vi] * fp67;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp66 + fp69;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp68 * fp52;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp40;
target[((hsi*84+66)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp64 * fp51;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp40;
target[((hsi*84+67)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp143;
fp143 = fp64 * fp52;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp36;
target[((hsi*84+68)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = fp68 * fp54;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp33;
target[((hsi*84+69)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp139;
fp139 = fp64 * fp53;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp33;
target[((hsi*84+70)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp137;
fp137 = fp64 * fp54;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp29;
target[((hsi*84+71)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp135;
fp135 = fp68 * fp56;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp26;
target[((hsi*84+72)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp195;
fp195 = fp82 * fp62;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp19;
target[((hsi*84+42)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp131;
fp131 = fp64 * fp56;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp22;
target[((hsi*84+74)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp129;
fp129 = fp68 * fp58;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp19;
target[((hsi*84+75)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp127;
fp127 = fp64 * fp57;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp19;
target[((hsi*84+76)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp125;
fp125 = fp64 * fp58;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp15;
target[((hsi*84+77)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp12;
fp12 = fp10 + fp13;
LIBINT2_REALTYPE fp123;
fp123 = fp68 * fp60;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp12;
target[((hsi*84+78)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp121;
fp121 = fp64 * fp59;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp12;
target[((hsi*84+79)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp119;
fp119 = fp64 * fp60;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp8;
target[((hsi*84+80)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp117;
fp117 = fp68 * fp62;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp5;
target[((hsi*84+81)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp115;
fp115 = fp64 * fp61;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp5;
target[((hsi*84+82)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp113;
fp113 = fp64 * fp62;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp1;
target[((hsi*84+83)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp133;
fp133 = fp64 * fp55;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp26;
target[((hsi*84+73)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp193;
fp193 = fp78 * fp61;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp19;
target[((hsi*84+43)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp191;
fp191 = fp78 * fp62;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp15;
target[((hsi*84+44)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_x[vi] * fp74;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp73 + fp76;
LIBINT2_REALTYPE fp189;
fp189 = fp75 * fp52;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp47;
target[((hsi*84+45)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_x[vi] * fp70;
LIBINT2_REALTYPE fp71;
fp71 = fp74 + fp72;
LIBINT2_REALTYPE fp187;
fp187 = fp71 * fp51;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp47;
target[((hsi*84+46)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp185;
fp185 = fp71 * fp52;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp43;
target[((hsi*84+47)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp183;
fp183 = fp75 * fp54;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp40;
target[((hsi*84+48)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp181;
fp181 = fp71 * fp53;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp40;
target[((hsi*84+49)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp179;
fp179 = fp71 * fp54;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp36;
target[((hsi*84+50)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp177;
fp177 = fp75 * fp56;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp33;
target[((hsi*84+51)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp153;
fp153 = fp68 * fp50;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp47;
target[((hsi*84+63)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp173;
fp173 = fp71 * fp56;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp29;
target[((hsi*84+53)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp171;
fp171 = fp75 * fp58;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp26;
target[((hsi*84+54)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp169;
fp169 = fp71 * fp57;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp26;
target[((hsi*84+55)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp167;
fp167 = fp71 * fp58;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp22;
target[((hsi*84+56)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp165;
fp165 = fp75 * fp60;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp19;
target[((hsi*84+57)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp163;
fp163 = fp71 * fp59;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp19;
target[((hsi*84+58)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp161;
fp161 = fp71 * fp60;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp15;
target[((hsi*84+59)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp159;
fp159 = fp75 * fp62;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp12;
target[((hsi*84+60)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp157;
fp157 = fp71 * fp61;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp12;
target[((hsi*84+61)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp155;
fp155 = fp71 * fp62;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp8;
target[((hsi*84+62)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp175;
fp175 = fp71 * fp55;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp33;
target[((hsi*84+52)*1+lsi)*1] = fp174;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 280 */
}

#ifdef __cplusplus
};
#endif
