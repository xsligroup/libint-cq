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
void CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp28 * fp20;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp11;
LIBINT2_REALTYPE fp194;
fp194 = inteval->two_alpha0_ket[vi] * fp97;
target[((hsi*45+21)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp27 * fp18;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp12;
LIBINT2_REALTYPE fp196;
fp196 = 1.0000000000000000e+00 * fp99;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp27 * fp18;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp13;
LIBINT2_REALTYPE fp197;
fp197 = inteval->two_alpha0_ket[vi] * fp101;
LIBINT2_REALTYPE fp195;
fp195 = fp197 - fp196;
target[((hsi*45+20)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp27 * fp17;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp14;
LIBINT2_REALTYPE fp198;
fp198 = inteval->two_alpha0_ket[vi] * fp103;
target[((hsi*45+19)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp106;
fp106 = fp28 * fp18;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp14;
LIBINT2_REALTYPE fp199;
fp199 = inteval->two_alpha0_ket[vi] * fp105;
target[((hsi*45+18)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp29 * fp24;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp6;
LIBINT2_REALTYPE fp201;
fp201 = 1.0000000000000000e+00 * fp107;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp29 * fp24;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp7;
LIBINT2_REALTYPE fp202;
fp202 = inteval->two_alpha0_ket[vi] * fp109;
LIBINT2_REALTYPE fp200;
fp200 = fp202 - fp201;
target[((hsi*45+17)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp29 * fp23;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp8;
LIBINT2_REALTYPE fp203;
fp203 = inteval->two_alpha0_ket[vi] * fp111;
target[((hsi*45+16)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp30 * fp24;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp8;
LIBINT2_REALTYPE fp204;
fp204 = inteval->two_alpha0_ket[vi] * fp113;
target[((hsi*45+15)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp29 * fp22;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp9;
LIBINT2_REALTYPE fp206;
fp206 = 1.0000000000000000e+00 * fp115;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp29 * fp22;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp10;
LIBINT2_REALTYPE fp207;
fp207 = inteval->two_alpha0_ket[vi] * fp117;
LIBINT2_REALTYPE fp205;
fp205 = fp207 - fp206;
target[((hsi*45+14)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp29 * fp21;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp11;
LIBINT2_REALTYPE fp208;
fp208 = inteval->two_alpha0_ket[vi] * fp119;
target[((hsi*45+13)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp122;
fp122 = fp30 * fp22;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp11;
LIBINT2_REALTYPE fp209;
fp209 = inteval->two_alpha0_ket[vi] * fp121;
target[((hsi*45+12)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp34 * fp24;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp14;
LIBINT2_REALTYPE fp229;
fp229 = inteval->two_alpha0_ket[vi] * fp153;
target[((hsi*45+0)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp29 * fp19;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp14;
LIBINT2_REALTYPE fp213;
fp213 = inteval->two_alpha0_ket[vi] * fp127;
target[((hsi*45+10)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp130;
fp130 = fp30 * fp20;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp14;
LIBINT2_REALTYPE fp214;
fp214 = inteval->two_alpha0_ket[vi] * fp129;
target[((hsi*45+9)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp31 * fp24;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp9;
LIBINT2_REALTYPE fp216;
fp216 = 1.0000000000000000e+00 * fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp31 * fp24;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp10;
LIBINT2_REALTYPE fp217;
fp217 = inteval->two_alpha0_ket[vi] * fp133;
LIBINT2_REALTYPE fp215;
fp215 = fp217 - fp216;
target[((hsi*45+8)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp136;
fp136 = fp31 * fp23;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp11;
LIBINT2_REALTYPE fp218;
fp218 = inteval->two_alpha0_ket[vi] * fp135;
target[((hsi*45+7)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp32 * fp24;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp11;
LIBINT2_REALTYPE fp219;
fp219 = inteval->two_alpha0_ket[vi] * fp137;
target[((hsi*45+6)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp140;
fp140 = fp31 * fp22;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp12;
LIBINT2_REALTYPE fp221;
fp221 = 1.0000000000000000e+00 * fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp31 * fp22;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp13;
LIBINT2_REALTYPE fp222;
fp222 = inteval->two_alpha0_ket[vi] * fp141;
LIBINT2_REALTYPE fp220;
fp220 = fp222 - fp221;
target[((hsi*45+5)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp144;
fp144 = fp31 * fp21;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp14;
LIBINT2_REALTYPE fp223;
fp223 = inteval->two_alpha0_ket[vi] * fp143;
target[((hsi*45+4)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp146;
fp146 = fp32 * fp22;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp14;
LIBINT2_REALTYPE fp224;
fp224 = inteval->two_alpha0_ket[vi] * fp145;
target[((hsi*45+3)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp33 * fp24;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp12;
LIBINT2_REALTYPE fp226;
fp226 = 1.0000000000000000e+00 * fp147;
LIBINT2_REALTYPE fp150;
fp150 = fp33 * fp24;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp13;
LIBINT2_REALTYPE fp227;
fp227 = inteval->two_alpha0_ket[vi] * fp149;
LIBINT2_REALTYPE fp225;
fp225 = fp227 - fp226;
target[((hsi*45+2)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp152;
fp152 = fp33 * fp23;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp14;
LIBINT2_REALTYPE fp228;
fp228 = inteval->two_alpha0_ket[vi] * fp151;
target[((hsi*45+1)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp124;
fp124 = fp29 * fp20;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp12;
LIBINT2_REALTYPE fp211;
fp211 = 1.0000000000000000e+00 * fp123;
LIBINT2_REALTYPE fp126;
fp126 = fp29 * fp20;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp13;
LIBINT2_REALTYPE fp212;
fp212 = inteval->two_alpha0_ket[vi] * fp125;
LIBINT2_REALTYPE fp210;
fp210 = fp212 - fp211;
target[((hsi*45+11)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp25 * fp24;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp0;
LIBINT2_REALTYPE fp156;
fp156 = 1.0000000000000000e+00 * fp35;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp25 * fp24;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp1;
LIBINT2_REALTYPE fp157;
fp157 = inteval->two_alpha0_ket[vi] * fp37;
LIBINT2_REALTYPE fp155;
fp155 = fp157 - fp156;
target[((hsi*45+44)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp25 * fp23;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp2;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_ket[vi] * fp39;
target[((hsi*45+43)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp26 * fp24;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp2;
LIBINT2_REALTYPE fp159;
fp159 = inteval->two_alpha0_ket[vi] * fp41;
target[((hsi*45+42)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp25 * fp22;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp3;
LIBINT2_REALTYPE fp161;
fp161 = 1.0000000000000000e+00 * fp43;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp25 * fp22;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp4;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_ket[vi] * fp45;
LIBINT2_REALTYPE fp160;
fp160 = fp162 - fp161;
target[((hsi*45+41)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp25 * fp21;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp5;
LIBINT2_REALTYPE fp163;
fp163 = inteval->two_alpha0_ket[vi] * fp47;
target[((hsi*45+40)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp50;
fp50 = fp26 * fp22;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp5;
LIBINT2_REALTYPE fp164;
fp164 = inteval->two_alpha0_ket[vi] * fp49;
target[((hsi*45+39)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp52;
fp52 = fp25 * fp20;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp6;
LIBINT2_REALTYPE fp166;
fp166 = 1.0000000000000000e+00 * fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp25 * fp20;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp7;
LIBINT2_REALTYPE fp167;
fp167 = inteval->two_alpha0_ket[vi] * fp53;
LIBINT2_REALTYPE fp165;
fp165 = fp167 - fp166;
target[((hsi*45+38)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp56;
fp56 = fp25 * fp19;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp8;
LIBINT2_REALTYPE fp168;
fp168 = inteval->two_alpha0_ket[vi] * fp55;
target[((hsi*45+37)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp58;
fp58 = fp26 * fp20;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp8;
LIBINT2_REALTYPE fp169;
fp169 = inteval->two_alpha0_ket[vi] * fp57;
target[((hsi*45+36)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp60;
fp60 = fp25 * fp18;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp9;
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp25 * fp18;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp10;
LIBINT2_REALTYPE fp172;
fp172 = inteval->two_alpha0_ket[vi] * fp61;
LIBINT2_REALTYPE fp170;
fp170 = fp172 - fp171;
target[((hsi*45+35)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp96;
fp96 = fp27 * fp19;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp11;
LIBINT2_REALTYPE fp193;
fp193 = inteval->two_alpha0_ket[vi] * fp95;
target[((hsi*45+22)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp66;
fp66 = fp26 * fp18;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp11;
LIBINT2_REALTYPE fp174;
fp174 = inteval->two_alpha0_ket[vi] * fp65;
target[((hsi*45+33)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp25 * fp16;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp12;
LIBINT2_REALTYPE fp176;
fp176 = 1.0000000000000000e+00 * fp67;
LIBINT2_REALTYPE fp70;
fp70 = fp25 * fp16;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp13;
LIBINT2_REALTYPE fp177;
fp177 = inteval->two_alpha0_ket[vi] * fp69;
LIBINT2_REALTYPE fp175;
fp175 = fp177 - fp176;
target[((hsi*45+32)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp25 * fp15;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp14;
LIBINT2_REALTYPE fp178;
fp178 = inteval->two_alpha0_ket[vi] * fp71;
target[((hsi*45+31)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp74;
fp74 = fp26 * fp16;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp14;
LIBINT2_REALTYPE fp179;
fp179 = inteval->two_alpha0_ket[vi] * fp73;
target[((hsi*45+30)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp76;
fp76 = fp27 * fp24;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp3;
LIBINT2_REALTYPE fp181;
fp181 = 1.0000000000000000e+00 * fp75;
LIBINT2_REALTYPE fp78;
fp78 = fp27 * fp24;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp4;
LIBINT2_REALTYPE fp182;
fp182 = inteval->two_alpha0_ket[vi] * fp77;
LIBINT2_REALTYPE fp180;
fp180 = fp182 - fp181;
target[((hsi*45+29)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp80;
fp80 = fp27 * fp23;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp5;
LIBINT2_REALTYPE fp183;
fp183 = inteval->two_alpha0_ket[vi] * fp79;
target[((hsi*45+28)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp82;
fp82 = fp28 * fp24;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp5;
LIBINT2_REALTYPE fp184;
fp184 = inteval->two_alpha0_ket[vi] * fp81;
target[((hsi*45+27)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp84;
fp84 = fp27 * fp22;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp6;
LIBINT2_REALTYPE fp186;
fp186 = 1.0000000000000000e+00 * fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp27 * fp22;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp7;
LIBINT2_REALTYPE fp187;
fp187 = inteval->two_alpha0_ket[vi] * fp85;
LIBINT2_REALTYPE fp185;
fp185 = fp187 - fp186;
target[((hsi*45+26)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp88;
fp88 = fp27 * fp21;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp8;
LIBINT2_REALTYPE fp188;
fp188 = inteval->two_alpha0_ket[vi] * fp87;
target[((hsi*45+25)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp90;
fp90 = fp28 * fp22;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp8;
LIBINT2_REALTYPE fp189;
fp189 = inteval->two_alpha0_ket[vi] * fp89;
target[((hsi*45+24)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp92;
fp92 = fp27 * fp20;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp9;
LIBINT2_REALTYPE fp191;
fp191 = 1.0000000000000000e+00 * fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp27 * fp20;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp10;
LIBINT2_REALTYPE fp192;
fp192 = inteval->two_alpha0_ket[vi] * fp93;
LIBINT2_REALTYPE fp190;
fp190 = fp192 - fp191;
target[((hsi*45+23)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp64;
fp64 = fp25 * fp17;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp11;
LIBINT2_REALTYPE fp173;
fp173 = inteval->two_alpha0_ket[vi] * fp63;
target[((hsi*45+34)*1+lsi)*1] = fp173;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 230 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
