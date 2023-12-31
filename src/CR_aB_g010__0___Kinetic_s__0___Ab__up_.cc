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
void CR_aB_g010__0___Kinetic_s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp4 * src2[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 - fp1;
LIBINT2_REALTYPE fp89;
fp89 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp0;
LIBINT2_REALTYPE fp56;
fp56 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * src1[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp57 - fp55;
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*14+0)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp60 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
LIBINT2_REALTYPE fp87;
fp87 = fp90 + fp88;
LIBINT2_REALTYPE fp287;
fp287 = inteval->two_alpha0_bra[vi] * fp87;
target[((hsi*15+14)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp8;
fp8 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src2[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp9 - fp7;
LIBINT2_REALTYPE fp97;
fp97 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp6;
LIBINT2_REALTYPE fp47;
fp47 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp46 * src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*14+0)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp60 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp102 * src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
LIBINT2_REALTYPE fp289;
fp289 = 1.0000000000000000e+00 * fp95;
LIBINT2_REALTYPE fp105;
fp105 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp6;
LIBINT2_REALTYPE fp50;
fp50 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp51 - fp49;
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*14+0)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp60 * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp109 + fp107;
LIBINT2_REALTYPE fp103;
fp103 = fp106 + fp104;
LIBINT2_REALTYPE fp290;
fp290 = inteval->two_alpha0_bra[vi] * fp103;
LIBINT2_REALTYPE fp288;
fp288 = fp290 - fp289;
target[((hsi*15+13)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp14;
fp14 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp15 - fp13;
LIBINT2_REALTYPE fp113;
fp113 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp12;
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*14+0)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp60 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp117 + fp115;
LIBINT2_REALTYPE fp111;
fp111 = fp114 + fp112;
LIBINT2_REALTYPE fp292;
fp292 = 2.0000000000000000e+00 * fp111;
LIBINT2_REALTYPE fp121;
fp121 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp12;
LIBINT2_REALTYPE fp41;
fp41 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src1[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp42 - fp40;
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*14+0)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp60 * src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp125 + fp123;
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
LIBINT2_REALTYPE fp293;
fp293 = inteval->two_alpha0_bra[vi] * fp119;
LIBINT2_REALTYPE fp291;
fp291 = fp293 - fp292;
target[((hsi*15+12)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp20;
fp20 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * src2[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp21 - fp19;
LIBINT2_REALTYPE fp129;
fp129 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp18;
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*14+0)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp60 * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp133 + fp131;
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
LIBINT2_REALTYPE fp295;
fp295 = 3.0000000000000000e+00 * fp127;
LIBINT2_REALTYPE fp137;
fp137 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp18;
LIBINT2_REALTYPE fp35;
fp35 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp36 - fp34;
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*14+0)*1+lsi)*1] * fp33;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp60 * src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp141 + fp139;
LIBINT2_REALTYPE fp135;
fp135 = fp138 + fp136;
LIBINT2_REALTYPE fp296;
fp296 = inteval->two_alpha0_bra[vi] * fp135;
LIBINT2_REALTYPE fp294;
fp294 = fp296 - fp295;
target[((hsi*15+11)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp26;
fp26 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp24;
fp24 = fp25 * src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp24;
LIBINT2_REALTYPE fp148;
fp148 = src0[((hsi*14+0)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp60 * src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp149 + fp147;
LIBINT2_REALTYPE fp143;
fp143 = fp146 + fp144;
LIBINT2_REALTYPE fp298;
fp298 = 4.0000000000000000e+00 * fp143;
LIBINT2_REALTYPE fp153;
fp153 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp24;
LIBINT2_REALTYPE fp29;
fp29 = 2.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * src1[((hsi*14+13)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp30 - fp28;
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*14+0)*1+lsi)*1] * fp27;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp60 * src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp158 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp157 + fp155;
LIBINT2_REALTYPE fp151;
fp151 = fp154 + fp152;
LIBINT2_REALTYPE fp299;
fp299 = inteval->two_alpha0_bra[vi] * fp151;
LIBINT2_REALTYPE fp297;
fp297 = fp299 - fp298;
target[((hsi*15+10)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp161;
fp161 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp6;
LIBINT2_REALTYPE fp164;
fp164 = src0[((hsi*14+2)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src0[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp67 * src0[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 - fp64;
LIBINT2_REALTYPE fp166;
fp166 = fp63 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp166 * src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
LIBINT2_REALTYPE fp159;
fp159 = fp162 + fp160;
LIBINT2_REALTYPE fp300;
fp300 = inteval->two_alpha0_bra[vi] * fp159;
target[((hsi*15+9)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp169;
fp169 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp12;
LIBINT2_REALTYPE fp172;
fp172 = src0[((hsi*14+2)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp63 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp174 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp173 + fp171;
LIBINT2_REALTYPE fp167;
fp167 = fp170 + fp168;
LIBINT2_REALTYPE fp302;
fp302 = 1.0000000000000000e+00 * fp167;
LIBINT2_REALTYPE fp177;
fp177 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp12;
LIBINT2_REALTYPE fp180;
fp180 = src0[((hsi*14+2)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp63 * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp182 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp181 + fp179;
LIBINT2_REALTYPE fp175;
fp175 = fp178 + fp176;
LIBINT2_REALTYPE fp303;
fp303 = inteval->two_alpha0_bra[vi] * fp175;
LIBINT2_REALTYPE fp301;
fp301 = fp303 - fp302;
target[((hsi*15+8)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp185;
fp185 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp18;
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*14+2)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp63 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp190 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp189 + fp187;
LIBINT2_REALTYPE fp183;
fp183 = fp186 + fp184;
LIBINT2_REALTYPE fp305;
fp305 = 2.0000000000000000e+00 * fp183;
LIBINT2_REALTYPE fp193;
fp193 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp18;
LIBINT2_REALTYPE fp196;
fp196 = src0[((hsi*14+2)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp63 * src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp198 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp197 + fp195;
LIBINT2_REALTYPE fp191;
fp191 = fp194 + fp192;
LIBINT2_REALTYPE fp306;
fp306 = inteval->two_alpha0_bra[vi] * fp191;
LIBINT2_REALTYPE fp304;
fp304 = fp306 - fp305;
target[((hsi*15+7)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp201;
fp201 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp24;
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*14+2)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp63 * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp206 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp205 + fp203;
LIBINT2_REALTYPE fp199;
fp199 = fp202 + fp200;
LIBINT2_REALTYPE fp308;
fp308 = 3.0000000000000000e+00 * fp199;
LIBINT2_REALTYPE fp209;
fp209 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp24;
LIBINT2_REALTYPE fp212;
fp212 = src0[((hsi*14+2)*1+lsi)*1] * fp33;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp63 * src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp214 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = fp213 + fp211;
LIBINT2_REALTYPE fp207;
fp207 = fp210 + fp208;
LIBINT2_REALTYPE fp309;
fp309 = inteval->two_alpha0_bra[vi] * fp207;
LIBINT2_REALTYPE fp307;
fp307 = fp309 - fp308;
target[((hsi*15+6)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp217;
fp217 = src0[((hsi*14+4)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp12;
LIBINT2_REALTYPE fp220;
fp220 = src0[((hsi*14+4)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp72 - fp70;
LIBINT2_REALTYPE fp222;
fp222 = fp69 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp222 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp221 + fp219;
LIBINT2_REALTYPE fp215;
fp215 = fp218 + fp216;
LIBINT2_REALTYPE fp310;
fp310 = inteval->two_alpha0_bra[vi] * fp215;
target[((hsi*15+5)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp225;
fp225 = src0[((hsi*14+4)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp18;
LIBINT2_REALTYPE fp228;
fp228 = src0[((hsi*14+4)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp69 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp230 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp229 + fp227;
LIBINT2_REALTYPE fp223;
fp223 = fp226 + fp224;
LIBINT2_REALTYPE fp312;
fp312 = 1.0000000000000000e+00 * fp223;
LIBINT2_REALTYPE fp233;
fp233 = src0[((hsi*14+4)*1+lsi)*1] * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp18;
LIBINT2_REALTYPE fp236;
fp236 = src0[((hsi*14+4)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp69 * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp238 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp237 + fp235;
LIBINT2_REALTYPE fp231;
fp231 = fp234 + fp232;
LIBINT2_REALTYPE fp313;
fp313 = inteval->two_alpha0_bra[vi] * fp231;
LIBINT2_REALTYPE fp311;
fp311 = fp313 - fp312;
target[((hsi*15+4)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp241;
fp241 = src0[((hsi*14+4)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp24;
LIBINT2_REALTYPE fp244;
fp244 = src0[((hsi*14+4)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp69 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp246 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp245 + fp243;
LIBINT2_REALTYPE fp239;
fp239 = fp242 + fp240;
LIBINT2_REALTYPE fp315;
fp315 = 2.0000000000000000e+00 * fp239;
LIBINT2_REALTYPE fp249;
fp249 = src0[((hsi*14+4)*1+lsi)*1] * src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp24;
LIBINT2_REALTYPE fp252;
fp252 = src0[((hsi*14+4)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp69 * src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp254 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp253 + fp251;
LIBINT2_REALTYPE fp247;
fp247 = fp250 + fp248;
LIBINT2_REALTYPE fp316;
fp316 = inteval->two_alpha0_bra[vi] * fp247;
LIBINT2_REALTYPE fp314;
fp314 = fp316 - fp315;
target[((hsi*15+3)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp257;
fp257 = src0[((hsi*14+6)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp18;
LIBINT2_REALTYPE fp260;
fp260 = src0[((hsi*14+6)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * src0[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * src0[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp78 - fp76;
LIBINT2_REALTYPE fp262;
fp262 = fp75 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp262 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp261 + fp259;
LIBINT2_REALTYPE fp255;
fp255 = fp258 + fp256;
LIBINT2_REALTYPE fp317;
fp317 = inteval->two_alpha0_bra[vi] * fp255;
target[((hsi*15+2)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp265;
fp265 = src0[((hsi*14+6)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp24;
LIBINT2_REALTYPE fp268;
fp268 = src0[((hsi*14+6)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp75 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp270 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp269 + fp267;
LIBINT2_REALTYPE fp263;
fp263 = fp266 + fp264;
LIBINT2_REALTYPE fp319;
fp319 = 1.0000000000000000e+00 * fp263;
LIBINT2_REALTYPE fp273;
fp273 = src0[((hsi*14+6)*1+lsi)*1] * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp24;
LIBINT2_REALTYPE fp276;
fp276 = src0[((hsi*14+6)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = fp75 * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp278 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = fp277 + fp275;
LIBINT2_REALTYPE fp271;
fp271 = fp274 + fp272;
LIBINT2_REALTYPE fp320;
fp320 = inteval->two_alpha0_bra[vi] * fp271;
LIBINT2_REALTYPE fp318;
fp318 = fp320 - fp319;
target[((hsi*15+1)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp281;
fp281 = src0[((hsi*14+8)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp24;
LIBINT2_REALTYPE fp284;
fp284 = src0[((hsi*14+8)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp85 * src0[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp84 - fp82;
LIBINT2_REALTYPE fp286;
fp286 = fp81 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp286 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = fp285 + fp283;
LIBINT2_REALTYPE fp279;
fp279 = fp282 + fp280;
LIBINT2_REALTYPE fp321;
fp321 = inteval->two_alpha0_bra[vi] * fp279;
target[((hsi*15+0)*1+lsi)*1] = fp321;
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
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
