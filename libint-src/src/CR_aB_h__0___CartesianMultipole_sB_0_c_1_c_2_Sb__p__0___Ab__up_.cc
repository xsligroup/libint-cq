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
void CR_aB_h__0___CartesianMultipole_sB_0_c_1_c_2_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src2[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src2[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_z[vi] * fp76;
LIBINT2_REALTYPE fp78;
fp78 = fp75 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src2[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_z[vi] * fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp76 + fp81;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_z[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = fp78 + fp83;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src1[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src1[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_y[vi] * fp95;
LIBINT2_REALTYPE fp96;
fp96 = fp94 + fp97;
LIBINT2_REALTYPE fp203;
fp203 = fp129 * fp96;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp82;
target[((hsi*63+30)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp36;
fp36 = fp33 + fp37;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->BO_y[vi] * fp123;
LIBINT2_REALTYPE fp124;
fp124 = fp122 + fp125;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp130 * fp124;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp31;
target[((hsi*63+29)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp38;
fp38 = fp34 + fp39;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp40;
fp40 = fp36 + fp41;
LIBINT2_REALTYPE fp121;
fp121 = inteval->BO_y[vi] * fp122;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp119 + fp121;
LIBINT2_REALTYPE fp207;
fp207 = fp130 * fp120;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp40;
target[((hsi*63+28)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp131 * fp124;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp40;
target[((hsi*63+27)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_z[vi] * fp48;
LIBINT2_REALTYPE fp50;
fp50 = fp47 + fp51;
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp45;
fp45 = fp43 + fp46;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->BO_y[vi] * fp116;
LIBINT2_REALTYPE fp117;
fp117 = fp115 + fp118;
LIBINT2_REALTYPE fp211;
fp211 = fp130 * fp117;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp45;
target[((hsi*63+26)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_z[vi] * fp49;
LIBINT2_REALTYPE fp52;
fp52 = fp48 + fp53;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp52;
LIBINT2_REALTYPE fp54;
fp54 = fp50 + fp55;
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_y[vi] * fp115;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp112 + fp114;
LIBINT2_REALTYPE fp213;
fp213 = fp130 * fp113;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp54;
target[((hsi*63+25)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp131 * fp117;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp54;
target[((hsi*63+24)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src2[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_z[vi] * fp62;
LIBINT2_REALTYPE fp64;
fp64 = fp61 + fp65;
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp64;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_z[vi] * fp61;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->BO_y[vi] * fp109;
LIBINT2_REALTYPE fp110;
fp110 = fp108 + fp111;
LIBINT2_REALTYPE fp217;
fp217 = fp130 * fp110;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp59;
target[((hsi*63+23)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp66;
fp66 = fp62 + fp67;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_z[vi] * fp66;
LIBINT2_REALTYPE fp68;
fp68 = fp64 + fp69;
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_y[vi] * fp108;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp105 + fp107;
LIBINT2_REALTYPE fp219;
fp219 = fp130 * fp106;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp68;
target[((hsi*63+22)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp131 * fp110;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp68;
target[((hsi*63+21)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_z[vi] * fp78;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_z[vi] * fp75;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src2[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_y[vi] * fp102;
LIBINT2_REALTYPE fp103;
fp103 = fp101 + fp104;
LIBINT2_REALTYPE fp223;
fp223 = fp130 * fp103;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp73;
target[((hsi*63+20)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_y[vi] * fp101;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp98 + fp100;
LIBINT2_REALTYPE fp225;
fp225 = fp130 * fp99;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp82;
target[((hsi*63+19)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp131 * fp103;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp82;
target[((hsi*63+18)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp132 * fp124;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp45;
target[((hsi*63+17)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp137 * fp124;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp82;
target[((hsi*63+0)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp133 * fp124;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp54;
target[((hsi*63+15)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp132 * fp117;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp59;
target[((hsi*63+14)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp132 * fp113;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp68;
target[((hsi*63+13)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp133 * fp117;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp68;
target[((hsi*63+12)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp132 * fp110;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp73;
target[((hsi*63+11)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp132 * fp106;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp82;
target[((hsi*63+10)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp133 * fp110;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp82;
target[((hsi*63+9)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp134 * fp124;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp59;
target[((hsi*63+8)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp134 * fp120;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp68;
target[((hsi*63+7)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp135 * fp124;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp68;
target[((hsi*63+6)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp134 * fp117;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp73;
target[((hsi*63+5)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp134 * fp113;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp82;
target[((hsi*63+4)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp135 * fp117;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp82;
target[((hsi*63+3)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp136 * fp124;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp73;
target[((hsi*63+2)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp136 * fp120;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp82;
target[((hsi*63+1)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp231;
fp231 = fp132 * fp120;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp54;
target[((hsi*63+16)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp8;
fp8 = fp5 + fp9;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp126 * fp124;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp3;
target[((hsi*63+62)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp10;
fp10 = fp6 + fp11;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp12;
fp12 = fp8 + fp13;
LIBINT2_REALTYPE fp141;
fp141 = fp126 * fp120;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp12;
target[((hsi*63+61)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp127 * fp124;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp12;
target[((hsi*63+60)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp22;
fp22 = fp19 + fp23;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp145;
fp145 = fp126 * fp117;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp17;
target[((hsi*63+59)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp24;
fp24 = fp20 + fp25;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp26;
fp26 = fp22 + fp27;
LIBINT2_REALTYPE fp147;
fp147 = fp126 * fp113;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp26;
target[((hsi*63+58)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp127 * fp117;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp26;
target[((hsi*63+57)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp126 * fp110;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp31;
target[((hsi*63+56)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp126 * fp106;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp40;
target[((hsi*63+55)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp127 * fp110;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp40;
target[((hsi*63+54)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp126 * fp103;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp45;
target[((hsi*63+53)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp126 * fp99;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp54;
target[((hsi*63+52)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp127 * fp103;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp54;
target[((hsi*63+51)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp126 * fp96;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp59;
target[((hsi*63+50)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_y[vi] * fp94;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp91 + fp93;
LIBINT2_REALTYPE fp165;
fp165 = fp126 * fp92;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp68;
target[((hsi*63+49)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp127 * fp96;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp68;
target[((hsi*63+48)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp128 * fp92;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp82;
target[((hsi*63+31)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_y[vi] * fp87;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp84 + fp86;
LIBINT2_REALTYPE fp171;
fp171 = fp126 * fp85;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp82;
target[((hsi*63+46)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src1[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_y[vi] * fp88;
LIBINT2_REALTYPE fp89;
fp89 = fp87 + fp90;
LIBINT2_REALTYPE fp173;
fp173 = fp127 * fp89;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp82;
target[((hsi*63+45)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp128 * fp124;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp17;
target[((hsi*63+44)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp128 * fp120;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp26;
target[((hsi*63+43)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp129 * fp124;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp26;
target[((hsi*63+42)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp128 * fp117;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp31;
target[((hsi*63+41)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp128 * fp113;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp40;
target[((hsi*63+40)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp129 * fp117;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp40;
target[((hsi*63+39)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp128 * fp110;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp45;
target[((hsi*63+38)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp128 * fp106;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp54;
target[((hsi*63+37)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp129 * fp110;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp54;
target[((hsi*63+36)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp128 * fp103;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp59;
target[((hsi*63+35)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp128 * fp99;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp68;
target[((hsi*63+34)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp129 * fp103;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp68;
target[((hsi*63+33)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp128 * fp96;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp73;
target[((hsi*63+32)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp169;
fp169 = fp126 * fp89;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp73;
target[((hsi*63+47)*1+lsi)*1] = fp168;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 264 */
}

#ifdef __cplusplus
};
#endif
