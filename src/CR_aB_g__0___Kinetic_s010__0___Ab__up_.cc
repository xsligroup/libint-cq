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
void CR_aB_g__0___Kinetic_s010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

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
fp1 = fp2 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp4 * src2[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 - fp1;
LIBINT2_REALTYPE fp89;
fp89 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp0;
LIBINT2_REALTYPE fp56;
fp56 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp57 - fp55;
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*18+0)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp60 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
LIBINT2_REALTYPE fp87;
fp87 = fp90 + fp88;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_bra[vi] * fp87;
LIBINT2_REALTYPE fp322;
fp322 = -1.0000000000000000e+00 * fp95;
target[((hsi*15+14)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp8;
fp8 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp9 - fp7;
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp6;
LIBINT2_REALTYPE fp47;
fp47 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp46 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = src0[((hsi*18+0)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp60 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp103 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
LIBINT2_REALTYPE fp96;
fp96 = fp99 + fp97;
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp106;
fp106 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp6;
LIBINT2_REALTYPE fp50;
fp50 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp51 - fp49;
LIBINT2_REALTYPE fp109;
fp109 = src0[((hsi*18+0)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp60 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp110 + fp108;
LIBINT2_REALTYPE fp104;
fp104 = fp107 + fp105;
LIBINT2_REALTYPE fp114;
fp114 = inteval->two_alpha0_bra[vi] * fp104;
LIBINT2_REALTYPE fp112;
fp112 = fp114 - fp113;
LIBINT2_REALTYPE fp323;
fp323 = -1.0000000000000000e+00 * fp112;
target[((hsi*15+13)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp14;
fp14 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp15 - fp13;
LIBINT2_REALTYPE fp117;
fp117 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp12;
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*18+0)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp60 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp121 + fp119;
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
LIBINT2_REALTYPE fp132;
fp132 = 2.0000000000000000e+00 * fp115;
LIBINT2_REALTYPE fp125;
fp125 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp12;
LIBINT2_REALTYPE fp41;
fp41 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp42 - fp40;
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*18+0)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp60 * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha0_bra[vi] * fp123;
LIBINT2_REALTYPE fp131;
fp131 = fp133 - fp132;
LIBINT2_REALTYPE fp324;
fp324 = -1.0000000000000000e+00 * fp131;
target[((hsi*15+12)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp20;
fp20 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp21 - fp19;
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp18;
LIBINT2_REALTYPE fp139;
fp139 = src0[((hsi*18+0)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp60 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp141 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp140 + fp138;
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
LIBINT2_REALTYPE fp151;
fp151 = 3.0000000000000000e+00 * fp134;
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp18;
LIBINT2_REALTYPE fp35;
fp35 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp36 - fp34;
LIBINT2_REALTYPE fp147;
fp147 = src0[((hsi*18+0)*1+lsi)*1] * fp33;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp60 * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp149 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
LIBINT2_REALTYPE fp142;
fp142 = fp145 + fp143;
LIBINT2_REALTYPE fp152;
fp152 = inteval->two_alpha0_bra[vi] * fp142;
LIBINT2_REALTYPE fp150;
fp150 = fp152 - fp151;
LIBINT2_REALTYPE fp325;
fp325 = -1.0000000000000000e+00 * fp150;
target[((hsi*15+11)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp26;
fp26 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp24;
fp24 = fp25 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp24;
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*18+0)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp60 * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp159 + fp157;
LIBINT2_REALTYPE fp153;
fp153 = fp156 + fp154;
LIBINT2_REALTYPE fp170;
fp170 = 4.0000000000000000e+00 * fp153;
LIBINT2_REALTYPE fp163;
fp163 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp24;
LIBINT2_REALTYPE fp29;
fp29 = 2.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp338;
fp338 = fp339 * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp341;
fp341 = fp342 * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = inteval->PA_y[vi] * src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp343 + fp341;
LIBINT2_REALTYPE fp337;
fp337 = fp340 + fp338;
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * fp337;
LIBINT2_REALTYPE fp27;
fp27 = fp30 - fp28;
LIBINT2_REALTYPE fp166;
fp166 = src0[((hsi*18+0)*1+lsi)*1] * fp27;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp60 * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp168 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp167 + fp165;
LIBINT2_REALTYPE fp161;
fp161 = fp164 + fp162;
LIBINT2_REALTYPE fp171;
fp171 = inteval->two_alpha0_bra[vi] * fp161;
LIBINT2_REALTYPE fp169;
fp169 = fp171 - fp170;
LIBINT2_REALTYPE fp326;
fp326 = -1.0000000000000000e+00 * fp169;
target[((hsi*15+10)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp6;
LIBINT2_REALTYPE fp177;
fp177 = src0[((hsi*18+3)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp67 * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 - fp64;
LIBINT2_REALTYPE fp179;
fp179 = fp63 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp179 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp178 + fp176;
LIBINT2_REALTYPE fp172;
fp172 = fp175 + fp173;
LIBINT2_REALTYPE fp180;
fp180 = inteval->two_alpha0_bra[vi] * fp172;
LIBINT2_REALTYPE fp327;
fp327 = -1.0000000000000000e+00 * fp180;
target[((hsi*15+9)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp183;
fp183 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp12;
LIBINT2_REALTYPE fp186;
fp186 = src0[((hsi*18+3)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp63 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp188 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
LIBINT2_REALTYPE fp181;
fp181 = fp184 + fp182;
LIBINT2_REALTYPE fp198;
fp198 = 1.0000000000000000e+00 * fp181;
LIBINT2_REALTYPE fp191;
fp191 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp12;
LIBINT2_REALTYPE fp194;
fp194 = src0[((hsi*18+3)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp63 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp196 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp195 + fp193;
LIBINT2_REALTYPE fp189;
fp189 = fp192 + fp190;
LIBINT2_REALTYPE fp199;
fp199 = inteval->two_alpha0_bra[vi] * fp189;
LIBINT2_REALTYPE fp197;
fp197 = fp199 - fp198;
LIBINT2_REALTYPE fp328;
fp328 = -1.0000000000000000e+00 * fp197;
target[((hsi*15+8)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp202;
fp202 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp18;
LIBINT2_REALTYPE fp205;
fp205 = src0[((hsi*18+3)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp63 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp207 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp206 + fp204;
LIBINT2_REALTYPE fp200;
fp200 = fp203 + fp201;
LIBINT2_REALTYPE fp217;
fp217 = 2.0000000000000000e+00 * fp200;
LIBINT2_REALTYPE fp210;
fp210 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp18;
LIBINT2_REALTYPE fp213;
fp213 = src0[((hsi*18+3)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp63 * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp215 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp214 + fp212;
LIBINT2_REALTYPE fp208;
fp208 = fp211 + fp209;
LIBINT2_REALTYPE fp218;
fp218 = inteval->two_alpha0_bra[vi] * fp208;
LIBINT2_REALTYPE fp216;
fp216 = fp218 - fp217;
LIBINT2_REALTYPE fp329;
fp329 = -1.0000000000000000e+00 * fp216;
target[((hsi*15+7)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp221;
fp221 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp24;
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*18+3)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp63 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp226 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp225 + fp223;
LIBINT2_REALTYPE fp219;
fp219 = fp222 + fp220;
LIBINT2_REALTYPE fp236;
fp236 = 3.0000000000000000e+00 * fp219;
LIBINT2_REALTYPE fp229;
fp229 = src0[((hsi*18+3)*1+lsi)*1] * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp24;
LIBINT2_REALTYPE fp232;
fp232 = src0[((hsi*18+3)*1+lsi)*1] * fp33;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp63 * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp234 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp233 + fp231;
LIBINT2_REALTYPE fp227;
fp227 = fp230 + fp228;
LIBINT2_REALTYPE fp237;
fp237 = inteval->two_alpha0_bra[vi] * fp227;
LIBINT2_REALTYPE fp235;
fp235 = fp237 - fp236;
LIBINT2_REALTYPE fp330;
fp330 = -1.0000000000000000e+00 * fp235;
target[((hsi*15+6)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp12;
LIBINT2_REALTYPE fp243;
fp243 = src0[((hsi*18+6)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp72 - fp70;
LIBINT2_REALTYPE fp245;
fp245 = fp69 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp245 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp244 + fp242;
LIBINT2_REALTYPE fp238;
fp238 = fp241 + fp239;
LIBINT2_REALTYPE fp246;
fp246 = inteval->two_alpha0_bra[vi] * fp238;
LIBINT2_REALTYPE fp331;
fp331 = -1.0000000000000000e+00 * fp246;
target[((hsi*15+5)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp249;
fp249 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp18;
LIBINT2_REALTYPE fp252;
fp252 = src0[((hsi*18+6)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp69 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp254 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp253 + fp251;
LIBINT2_REALTYPE fp247;
fp247 = fp250 + fp248;
LIBINT2_REALTYPE fp264;
fp264 = 1.0000000000000000e+00 * fp247;
LIBINT2_REALTYPE fp257;
fp257 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp18;
LIBINT2_REALTYPE fp260;
fp260 = src0[((hsi*18+6)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = fp69 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp262 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp261 + fp259;
LIBINT2_REALTYPE fp255;
fp255 = fp258 + fp256;
LIBINT2_REALTYPE fp265;
fp265 = inteval->two_alpha0_bra[vi] * fp255;
LIBINT2_REALTYPE fp263;
fp263 = fp265 - fp264;
LIBINT2_REALTYPE fp332;
fp332 = -1.0000000000000000e+00 * fp263;
target[((hsi*15+4)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp268;
fp268 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp24;
LIBINT2_REALTYPE fp271;
fp271 = src0[((hsi*18+6)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = fp69 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp273 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp272 + fp270;
LIBINT2_REALTYPE fp266;
fp266 = fp269 + fp267;
LIBINT2_REALTYPE fp283;
fp283 = 2.0000000000000000e+00 * fp266;
LIBINT2_REALTYPE fp276;
fp276 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp24;
LIBINT2_REALTYPE fp279;
fp279 = src0[((hsi*18+6)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = fp69 * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp281 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp280 + fp278;
LIBINT2_REALTYPE fp274;
fp274 = fp277 + fp275;
LIBINT2_REALTYPE fp284;
fp284 = inteval->two_alpha0_bra[vi] * fp274;
LIBINT2_REALTYPE fp282;
fp282 = fp284 - fp283;
LIBINT2_REALTYPE fp333;
fp333 = -1.0000000000000000e+00 * fp282;
target[((hsi*15+3)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp287;
fp287 = src0[((hsi*18+9)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp18;
LIBINT2_REALTYPE fp290;
fp290 = src0[((hsi*18+9)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp78 - fp76;
LIBINT2_REALTYPE fp292;
fp292 = fp75 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp292 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp291 + fp289;
LIBINT2_REALTYPE fp285;
fp285 = fp288 + fp286;
LIBINT2_REALTYPE fp293;
fp293 = inteval->two_alpha0_bra[vi] * fp285;
LIBINT2_REALTYPE fp334;
fp334 = -1.0000000000000000e+00 * fp293;
target[((hsi*15+2)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp296;
fp296 = src0[((hsi*18+9)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp24;
LIBINT2_REALTYPE fp299;
fp299 = src0[((hsi*18+9)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp75 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp301 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp300 + fp298;
LIBINT2_REALTYPE fp294;
fp294 = fp297 + fp295;
LIBINT2_REALTYPE fp311;
fp311 = 1.0000000000000000e+00 * fp294;
LIBINT2_REALTYPE fp304;
fp304 = src0[((hsi*18+9)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp24;
LIBINT2_REALTYPE fp307;
fp307 = src0[((hsi*18+9)*1+lsi)*1] * fp48;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = fp75 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp309 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp308 + fp306;
LIBINT2_REALTYPE fp302;
fp302 = fp305 + fp303;
LIBINT2_REALTYPE fp312;
fp312 = inteval->two_alpha0_bra[vi] * fp302;
LIBINT2_REALTYPE fp310;
fp310 = fp312 - fp311;
LIBINT2_REALTYPE fp335;
fp335 = -1.0000000000000000e+00 * fp310;
target[((hsi*15+1)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp315;
fp315 = src0[((hsi*18+12)*1+lsi)*1] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp24;
LIBINT2_REALTYPE fp318;
fp318 = src0[((hsi*18+12)*1+lsi)*1] * fp54;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp85 * src0[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp84 - fp82;
LIBINT2_REALTYPE fp320;
fp320 = fp81 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp320 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = fp319 + fp317;
LIBINT2_REALTYPE fp313;
fp313 = fp316 + fp314;
LIBINT2_REALTYPE fp321;
fp321 = inteval->two_alpha0_bra[vi] * fp313;
LIBINT2_REALTYPE fp336;
fp336 = -1.0000000000000000e+00 * fp321;
target[((hsi*15+0)*1+lsi)*1] = fp336;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 344 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
