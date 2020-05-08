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
void CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src2[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src2[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->BO_z[vi] * fp125;
LIBINT2_REALTYPE fp123;
fp123 = fp122 + fp124;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src2[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->BO_z[vi] * fp126;
LIBINT2_REALTYPE fp128;
fp128 = fp125 + fp129;
LIBINT2_REALTYPE fp133;
fp133 = inteval->BO_z[vi] * fp128;
LIBINT2_REALTYPE fp132;
fp132 = fp123 + fp133;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src2[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->BO_z[vi] * fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp126 + fp131;
LIBINT2_REALTYPE fp135;
fp135 = inteval->BO_z[vi] * fp130;
LIBINT2_REALTYPE fp134;
fp134 = fp128 + fp135;
LIBINT2_REALTYPE fp137;
fp137 = inteval->BO_z[vi] * fp134;
LIBINT2_REALTYPE fp136;
fp136 = fp132 + fp137;
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src1[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp153 * fp141;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp136;
target[((hsi*63+30)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp56;
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src2[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp57;
LIBINT2_REALTYPE fp59;
fp59 = fp56 + fp60;
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_z[vi] * fp59;
LIBINT2_REALTYPE fp63;
fp63 = fp54 + fp64;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp46 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp51;
fp51 = fp49 + fp52;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp154 * fp149;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp51;
target[((hsi*63+29)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src2[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_z[vi] * fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp57 + fp62;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_z[vi] * fp61;
LIBINT2_REALTYPE fp65;
fp65 = fp59 + fp66;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_z[vi] * fp65;
LIBINT2_REALTYPE fp67;
fp67 = fp63 + fp68;
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp154 * fp148;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp67;
target[((hsi*63+28)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp155 * fp149;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp67;
target[((hsi*63+27)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src2[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src2[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->BO_z[vi] * fp79;
LIBINT2_REALTYPE fp77;
fp77 = fp76 + fp78;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src2[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_z[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = fp79 + fp83;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_z[vi] * fp82;
LIBINT2_REALTYPE fp86;
fp86 = fp77 + fp87;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_z[vi] * fp86;
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_z[vi] * fp77;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_z[vi] * fp76;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src2[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp69 + fp71;
LIBINT2_REALTYPE fp72;
fp72 = fp70 + fp73;
LIBINT2_REALTYPE fp74;
fp74 = fp72 + fp75;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp154 * fp147;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp74;
target[((hsi*63+26)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src2[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_z[vi] * fp81;
LIBINT2_REALTYPE fp84;
fp84 = fp80 + fp85;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_z[vi] * fp84;
LIBINT2_REALTYPE fp88;
fp88 = fp82 + fp89;
LIBINT2_REALTYPE fp91;
fp91 = inteval->BO_z[vi] * fp88;
LIBINT2_REALTYPE fp90;
fp90 = fp86 + fp91;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp154 * fp146;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp90;
target[((hsi*63+25)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp155 * fp147;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp90;
target[((hsi*63+24)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src2[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src2[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->BO_z[vi] * fp102;
LIBINT2_REALTYPE fp100;
fp100 = fp99 + fp101;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src2[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->BO_z[vi] * fp103;
LIBINT2_REALTYPE fp105;
fp105 = fp102 + fp106;
LIBINT2_REALTYPE fp110;
fp110 = inteval->BO_z[vi] * fp105;
LIBINT2_REALTYPE fp109;
fp109 = fp100 + fp110;
LIBINT2_REALTYPE fp98;
fp98 = inteval->BO_z[vi] * fp109;
LIBINT2_REALTYPE fp96;
fp96 = inteval->BO_z[vi] * fp100;
LIBINT2_REALTYPE fp94;
fp94 = inteval->BO_z[vi] * fp99;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src2[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp92 + fp94;
LIBINT2_REALTYPE fp95;
fp95 = fp93 + fp96;
LIBINT2_REALTYPE fp97;
fp97 = fp95 + fp98;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp154 * fp145;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp97;
target[((hsi*63+23)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src2[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->BO_z[vi] * fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp103 + fp108;
LIBINT2_REALTYPE fp112;
fp112 = inteval->BO_z[vi] * fp107;
LIBINT2_REALTYPE fp111;
fp111 = fp105 + fp112;
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_z[vi] * fp111;
LIBINT2_REALTYPE fp113;
fp113 = fp109 + fp114;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp154 * fp144;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp113;
target[((hsi*63+22)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp155 * fp145;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp113;
target[((hsi*63+21)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp121;
fp121 = inteval->BO_z[vi] * fp132;
LIBINT2_REALTYPE fp119;
fp119 = inteval->BO_z[vi] * fp123;
LIBINT2_REALTYPE fp117;
fp117 = inteval->BO_z[vi] * fp122;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src2[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp115 + fp117;
LIBINT2_REALTYPE fp118;
fp118 = fp116 + fp119;
LIBINT2_REALTYPE fp120;
fp120 = fp118 + fp121;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp154 * fp143;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp120;
target[((hsi*63+20)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp154 * fp142;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp136;
target[((hsi*63+19)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp155 * fp143;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp136;
target[((hsi*63+18)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp156 * fp149;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp74;
target[((hsi*63+17)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = fp161 * fp149;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp136;
target[((hsi*63+0)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp157 * fp149;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp90;
target[((hsi*63+15)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp156 * fp147;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp97;
target[((hsi*63+14)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp156 * fp146;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp113;
target[((hsi*63+13)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp157 * fp147;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp113;
target[((hsi*63+12)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp156 * fp145;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp120;
target[((hsi*63+11)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp156 * fp144;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp136;
target[((hsi*63+10)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp157 * fp145;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp136;
target[((hsi*63+9)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = fp158 * fp149;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp97;
target[((hsi*63+8)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp158 * fp148;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp113;
target[((hsi*63+7)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp159 * fp149;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp113;
target[((hsi*63+6)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp158 * fp147;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp120;
target[((hsi*63+5)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp158 * fp146;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp136;
target[((hsi*63+4)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp159 * fp147;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp136;
target[((hsi*63+3)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp160 * fp149;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp120;
target[((hsi*63+2)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp160 * fp148;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp136;
target[((hsi*63+1)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp255;
fp255 = fp156 * fp148;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp90;
target[((hsi*63+16)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp13;
fp13 = fp10 + fp14;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp17;
fp17 = fp8 + fp18;
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp150 * fp149;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp5;
target[((hsi*63+62)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp15;
fp15 = fp11 + fp16;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp19;
fp19 = fp13 + fp20;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp21;
fp21 = fp17 + fp22;
LIBINT2_REALTYPE fp165;
fp165 = fp150 * fp148;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp21;
target[((hsi*63+61)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp151 * fp149;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp21;
target[((hsi*63+60)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp31;
fp31 = fp30 + fp32;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp36;
fp36 = fp33 + fp37;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp40;
fp40 = fp31 + fp41;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp30;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp23 + fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp28;
fp28 = fp26 + fp29;
LIBINT2_REALTYPE fp169;
fp169 = fp150 * fp147;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp28;
target[((hsi*63+59)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp38;
fp38 = fp34 + fp39;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp42;
fp42 = fp36 + fp43;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_z[vi] * fp42;
LIBINT2_REALTYPE fp44;
fp44 = fp40 + fp45;
LIBINT2_REALTYPE fp171;
fp171 = fp150 * fp146;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp44;
target[((hsi*63+58)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp151 * fp147;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp44;
target[((hsi*63+57)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp150 * fp145;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp51;
target[((hsi*63+56)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp150 * fp144;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp67;
target[((hsi*63+55)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp151 * fp145;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp67;
target[((hsi*63+54)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp150 * fp143;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp74;
target[((hsi*63+53)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp150 * fp142;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp90;
target[((hsi*63+52)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp151 * fp143;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp90;
target[((hsi*63+51)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp150 * fp141;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp97;
target[((hsi*63+50)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src1[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp150 * fp140;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp113;
target[((hsi*63+49)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp151 * fp141;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp113;
target[((hsi*63+48)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp152 * fp140;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp136;
target[((hsi*63+31)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + src1[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp150 * fp138;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp136;
target[((hsi*63+46)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + src1[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp151 * fp139;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp136;
target[((hsi*63+45)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp152 * fp149;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp28;
target[((hsi*63+44)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp152 * fp148;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp44;
target[((hsi*63+43)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp153 * fp149;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp44;
target[((hsi*63+42)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp152 * fp147;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp51;
target[((hsi*63+41)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp152 * fp146;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp67;
target[((hsi*63+40)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp153 * fp147;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp67;
target[((hsi*63+39)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp152 * fp145;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp74;
target[((hsi*63+38)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp152 * fp144;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp90;
target[((hsi*63+37)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp153 * fp145;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp90;
target[((hsi*63+36)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp152 * fp143;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp97;
target[((hsi*63+35)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp152 * fp142;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp113;
target[((hsi*63+34)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp153 * fp143;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp113;
target[((hsi*63+33)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp152 * fp141;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp120;
target[((hsi*63+32)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp193;
fp193 = fp150 * fp139;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp120;
target[((hsi*63+47)*1+lsi)*1] = fp192;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 288 */
}

#ifdef __cplusplus
};
#endif
