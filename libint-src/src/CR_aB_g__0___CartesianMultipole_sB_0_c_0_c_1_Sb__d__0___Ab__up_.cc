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
void CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp37;
LIBINT2_REALTYPE fp38;
fp38 = fp36 + fp39;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp73 * fp61;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp38;
target[((hsi*90+24)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp72 * fp60;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp38;
target[((hsi*90+25)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp34;
fp34 = fp33 + fp35;
LIBINT2_REALTYPE fp207;
fp207 = fp72 * fp61;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp34;
target[((hsi*90+26)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp71 * fp59;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp38;
target[((hsi*90+27)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp203;
fp203 = fp71 * fp60;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp34;
target[((hsi*90+28)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp30 + fp32;
LIBINT2_REALTYPE fp201;
fp201 = fp71 * fp61;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp31;
target[((hsi*90+29)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp27;
LIBINT2_REALTYPE fp28;
fp28 = fp26 + fp29;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp73 * fp64;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp28;
target[((hsi*90+30)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp72 * fp63;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp28;
target[((hsi*90+31)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp26;
LIBINT2_REALTYPE fp24;
fp24 = fp23 + fp25;
LIBINT2_REALTYPE fp195;
fp195 = fp72 * fp64;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp24;
target[((hsi*90+32)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp71 * fp62;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp28;
target[((hsi*90+33)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp48;
fp48 = fp46 + fp49;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp79 * fp64;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp48;
target[((hsi*90+0)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp189;
fp189 = fp71 * fp64;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp21;
target[((hsi*90+35)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp70 * fp55;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp48;
target[((hsi*90+36)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp69 * fp54;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp48;
target[((hsi*90+37)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src2[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_z[vi] * fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp43 + fp45;
LIBINT2_REALTYPE fp183;
fp183 = fp69 * fp55;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp44;
target[((hsi*90+38)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp68 * fp53;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp48;
target[((hsi*90+39)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp179;
fp179 = fp68 * fp54;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp44;
target[((hsi*90+40)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_z[vi] * fp43;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src2[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp40 + fp42;
LIBINT2_REALTYPE fp177;
fp177 = fp68 * fp55;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp41;
target[((hsi*90+41)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp70 * fp58;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp38;
target[((hsi*90+42)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp69 * fp57;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp38;
target[((hsi*90+43)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp171;
fp171 = fp69 * fp58;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp34;
target[((hsi*90+44)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp191;
fp191 = fp71 * fp63;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp24;
target[((hsi*90+34)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp78 * fp63;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp48;
target[((hsi*90+1)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp255;
fp255 = fp78 * fp64;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp44;
target[((hsi*90+2)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp77 * fp62;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp48;
target[((hsi*90+3)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp251;
fp251 = fp77 * fp63;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp44;
target[((hsi*90+4)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp249;
fp249 = fp77 * fp64;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp41;
target[((hsi*90+5)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp76 * fp61;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp48;
target[((hsi*90+6)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp75 * fp60;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp48;
target[((hsi*90+7)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp243;
fp243 = fp75 * fp61;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp44;
target[((hsi*90+8)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp74 * fp59;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp48;
target[((hsi*90+9)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp239;
fp239 = fp74 * fp60;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp44;
target[((hsi*90+10)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp213;
fp213 = fp71 * fp58;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp41;
target[((hsi*90+23)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp235;
fp235 = fp76 * fp64;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp38;
target[((hsi*90+12)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp233;
fp233 = fp75 * fp63;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp38;
target[((hsi*90+13)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp231;
fp231 = fp75 * fp64;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp34;
target[((hsi*90+14)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp229;
fp229 = fp74 * fp62;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp38;
target[((hsi*90+15)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp227;
fp227 = fp74 * fp63;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp34;
target[((hsi*90+16)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp225;
fp225 = fp74 * fp64;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp31;
target[((hsi*90+17)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp223;
fp223 = fp73 * fp58;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp48;
target[((hsi*90+18)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp221;
fp221 = fp72 * fp57;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp48;
target[((hsi*90+19)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp219;
fp219 = fp72 * fp58;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp44;
target[((hsi*90+20)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp71 * fp56;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp48;
target[((hsi*90+21)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp215;
fp215 = fp71 * fp57;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp44;
target[((hsi*90+22)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp237;
fp237 = fp74 * fp61;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp41;
target[((hsi*90+11)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp65 * fp53;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp38;
target[((hsi*90+69)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp119;
fp119 = fp65 * fp54;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp34;
target[((hsi*90+70)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp117;
fp117 = fp65 * fp55;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp31;
target[((hsi*90+71)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp67 * fp58;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp28;
target[((hsi*90+72)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp66 * fp57;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp28;
target[((hsi*90+73)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = fp66 * fp58;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp24;
target[((hsi*90+74)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp109;
fp109 = fp65 * fp56;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp28;
target[((hsi*90+75)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp107;
fp107 = fp65 * fp57;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp24;
target[((hsi*90+76)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp105;
fp105 = fp65 * fp58;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp21;
target[((hsi*90+77)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp18;
fp18 = fp16 + fp19;
LIBINT2_REALTYPE fp103;
fp103 = fp67 * fp61;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp18;
target[((hsi*90+78)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp169;
fp169 = fp68 * fp56;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp38;
target[((hsi*90+45)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp99;
fp99 = fp66 * fp61;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp14;
target[((hsi*90+80)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp97;
fp97 = fp65 * fp59;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp18;
target[((hsi*90+81)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = fp65 * fp60;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp14;
target[((hsi*90+82)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp93;
fp93 = fp65 * fp61;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp11;
target[((hsi*90+83)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp8;
fp8 = fp6 + fp9;
LIBINT2_REALTYPE fp91;
fp91 = fp67 * fp64;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp8;
target[((hsi*90+84)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp89;
fp89 = fp66 * fp63;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp8;
target[((hsi*90+85)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp87;
fp87 = fp66 * fp64;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp4;
target[((hsi*90+86)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp85;
fp85 = fp65 * fp62;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp8;
target[((hsi*90+87)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp83;
fp83 = fp65 * fp63;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp4;
target[((hsi*90+88)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+19)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp81;
fp81 = fp65 * fp64;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp1;
target[((hsi*90+89)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp101;
fp101 = fp66 * fp60;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp18;
target[((hsi*90+79)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp167;
fp167 = fp68 * fp57;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp34;
target[((hsi*90+46)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp165;
fp165 = fp68 * fp58;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp31;
target[((hsi*90+47)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp163;
fp163 = fp70 * fp61;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp28;
target[((hsi*90+48)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp161;
fp161 = fp69 * fp60;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp28;
target[((hsi*90+49)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp159;
fp159 = fp69 * fp61;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp24;
target[((hsi*90+50)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp157;
fp157 = fp68 * fp59;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp28;
target[((hsi*90+51)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp155;
fp155 = fp68 * fp60;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp24;
target[((hsi*90+52)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp153;
fp153 = fp68 * fp61;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp21;
target[((hsi*90+53)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp151;
fp151 = fp70 * fp64;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp18;
target[((hsi*90+54)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp149;
fp149 = fp69 * fp63;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp18;
target[((hsi*90+55)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp123;
fp123 = fp66 * fp55;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp34;
target[((hsi*90+68)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp145;
fp145 = fp68 * fp62;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp18;
target[((hsi*90+57)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp143;
fp143 = fp68 * fp63;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp14;
target[((hsi*90+58)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = fp68 * fp64;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp11;
target[((hsi*90+59)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp67 * fp52;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp48;
target[((hsi*90+60)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp66 * fp51;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp48;
target[((hsi*90+61)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp135;
fp135 = fp66 * fp52;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp44;
target[((hsi*90+62)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp65 * fp50;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp48;
target[((hsi*90+63)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp131;
fp131 = fp65 * fp51;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp44;
target[((hsi*90+64)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp129;
fp129 = fp65 * fp52;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp41;
target[((hsi*90+65)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp127;
fp127 = fp67 * fp55;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp38;
target[((hsi*90+66)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp125;
fp125 = fp66 * fp54;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp38;
target[((hsi*90+67)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp147;
fp147 = fp69 * fp64;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp14;
target[((hsi*90+56)*1+lsi)*1] = fp146;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 260 */
}

#ifdef __cplusplus
};
#endif
