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
void OSVRRP0InBra_aB_f__0__d__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp214;
fp214 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp126;
fp126 = fp214 * src3[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->WP_z[vi] * src0[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp127 + fp126;
target[((hsi*60+29)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp206;
fp206 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp206 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_z[vi] * src0[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
target[((hsi*60+28)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = inteval->WP_z[vi] * src0[((hsi*36+9)*1+lsi)*1];
target[((hsi*60+27)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp153;
fp153 = fp206 * src3[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_z[vi] * src0[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp133 + fp153;
target[((hsi*60+26)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp134;
fp134 = inteval->WP_z[vi] * src0[((hsi*36+7)*1+lsi)*1];
target[((hsi*60+25)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp135;
fp135 = inteval->WP_z[vi] * src0[((hsi*36+6)*1+lsi)*1];
target[((hsi*60+24)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp159;
fp159 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp185;
fp185 = inteval->roz[vi] * src2[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = src1[((hsi*18+5)*1+lsi)*1] - fp185;
LIBINT2_REALTYPE fp137;
fp137 = fp159 * fp184;
LIBINT2_REALTYPE fp138;
fp138 = inteval->WP_y[vi] * src0[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*60+23)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp140;
fp140 = fp206 * src3[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->roz[vi] * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = src1[((hsi*18+4)*1+lsi)*1] - fp190;
LIBINT2_REALTYPE fp142;
fp142 = fp159 * fp189;
LIBINT2_REALTYPE fp143;
fp143 = inteval->WP_y[vi] * src0[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
target[((hsi*60+22)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp145;
fp145 = fp214 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->roz[vi] * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src1[((hsi*18+3)*1+lsi)*1] - fp195;
LIBINT2_REALTYPE fp147;
fp147 = fp159 * fp194;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_y[vi] * src0[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp148 + fp147;
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
target[((hsi*60+21)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp202;
fp202 = inteval->roz[vi] * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = src1[((hsi*18+2)*1+lsi)*1] - fp202;
LIBINT2_REALTYPE fp150;
fp150 = fp159 * fp201;
LIBINT2_REALTYPE fp151;
fp151 = inteval->WP_y[vi] * src0[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp151 + fp150;
target[((hsi*60+20)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp210;
fp210 = inteval->roz[vi] * src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = src1[((hsi*18+1)*1+lsi)*1] - fp210;
LIBINT2_REALTYPE fp155;
fp155 = fp159 * fp209;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_y[vi] * src0[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp152;
fp152 = fp154 + fp153;
target[((hsi*60+19)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp218;
fp218 = inteval->roz[vi] * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = src1[((hsi*18+0)*1+lsi)*1] - fp218;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp217;
LIBINT2_REALTYPE fp160;
fp160 = inteval->WP_y[vi] * src0[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp160 + fp158;
target[((hsi*60+18)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp162;
fp162 = fp214 * src3[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->WP_z[vi] * src0[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
target[((hsi*60+17)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * src3[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_z[vi] * src0[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp165 + fp205;
target[((hsi*60+16)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp216;
fp216 = fp219 * fp217;
LIBINT2_REALTYPE fp220;
fp220 = inteval->WP_x[vi] * src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp220 + fp216;
LIBINT2_REALTYPE fp212;
fp212 = fp215 + fp213;
target[((hsi*60+0)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp179;
fp179 = fp206 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = inteval->WP_z[vi] * src0[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp168 + fp179;
target[((hsi*60+14)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp169;
fp169 = inteval->WP_z[vi] * src0[((hsi*36+1)*1+lsi)*1];
target[((hsi*60+13)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp170;
fp170 = inteval->WP_z[vi] * src0[((hsi*36+0)*1+lsi)*1];
target[((hsi*60+12)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WP_y[vi] * src0[((hsi*36+5)*1+lsi)*1];
target[((hsi*60+11)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp198;
fp198 = fp206 * src3[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->WP_y[vi] * src0[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp173 + fp198;
target[((hsi*60+10)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp214 * src3[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = inteval->WP_y[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp176 + fp175;
target[((hsi*60+9)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_y[vi] * src0[((hsi*36+2)*1+lsi)*1];
target[((hsi*60+8)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = inteval->WP_y[vi] * src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
target[((hsi*60+7)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = inteval->WP_y[vi] * src0[((hsi*36+0)*1+lsi)*1];
target[((hsi*60+6)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp183;
fp183 = fp219 * fp184;
LIBINT2_REALTYPE fp186;
fp186 = inteval->WP_x[vi] * src0[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp186 + fp183;
target[((hsi*60+5)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp188;
fp188 = fp219 * fp189;
LIBINT2_REALTYPE fp191;
fp191 = inteval->WP_x[vi] * src0[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp191 + fp188;
target[((hsi*60+4)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp193;
fp193 = fp219 * fp194;
LIBINT2_REALTYPE fp196;
fp196 = inteval->WP_x[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp196 + fp193;
target[((hsi*60+3)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp200;
fp200 = fp219 * fp201;
LIBINT2_REALTYPE fp203;
fp203 = inteval->WP_x[vi] * src0[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp203 + fp200;
LIBINT2_REALTYPE fp197;
fp197 = fp199 + fp198;
target[((hsi*60+2)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp208;
fp208 = fp219 * fp209;
LIBINT2_REALTYPE fp211;
fp211 = inteval->WP_x[vi] * src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp211 + fp208;
LIBINT2_REALTYPE fp204;
fp204 = fp207 + fp205;
target[((hsi*60+1)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp166;
fp166 = inteval->WP_z[vi] * src0[((hsi*36+3)*1+lsi)*1];
target[((hsi*60+15)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp1;
fp1 = fp214 * src3[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->roz[vi] * src2[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src1[((hsi*18+17)*1+lsi)*1] - fp5;
LIBINT2_REALTYPE fp3;
fp3 = fp219 * fp4;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src0[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp6 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = fp206 * src3[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->roz[vi] * src2[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = src1[((hsi*18+16)*1+lsi)*1] - fp12;
LIBINT2_REALTYPE fp10;
fp10 = fp219 * fp11;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_z[vi] * src0[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp13 + fp10;
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
target[((hsi*60+58)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp17;
fp17 = inteval->roz[vi] * src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src1[((hsi*18+15)*1+lsi)*1] - fp17;
LIBINT2_REALTYPE fp15;
fp15 = fp219 * fp16;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_z[vi] * src0[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp18 + fp15;
target[((hsi*60+57)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp20;
fp20 = fp206 * src3[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->roz[vi] * src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = src1[((hsi*18+14)*1+lsi)*1] - fp24;
LIBINT2_REALTYPE fp22;
fp22 = fp219 * fp23;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_z[vi] * src0[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp25 + fp22;
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
target[((hsi*60+56)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp29;
fp29 = inteval->roz[vi] * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src1[((hsi*18+13)*1+lsi)*1] - fp29;
LIBINT2_REALTYPE fp27;
fp27 = fp219 * fp28;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src0[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp30 + fp27;
target[((hsi*60+55)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp34;
fp34 = inteval->roz[vi] * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = src1[((hsi*18+12)*1+lsi)*1] - fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp219 * fp33;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * src0[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp35 + fp32;
target[((hsi*60+54)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp37;
fp37 = fp214 * src3[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->roz[vi] * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = src1[((hsi*18+11)*1+lsi)*1] - fp74;
LIBINT2_REALTYPE fp39;
fp39 = fp159 * fp73;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * src0[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
target[((hsi*60+53)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp42;
fp42 = fp206 * src3[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->roz[vi] * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src1[((hsi*18+10)*1+lsi)*1] - fp81;
LIBINT2_REALTYPE fp44;
fp44 = fp159 * fp80;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_z[vi] * src0[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp45 + fp44;
LIBINT2_REALTYPE fp41;
fp41 = fp43 + fp42;
target[((hsi*60+52)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp88;
fp88 = inteval->roz[vi] * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = src1[((hsi*18+9)*1+lsi)*1] - fp88;
LIBINT2_REALTYPE fp47;
fp47 = fp159 * fp87;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_z[vi] * src0[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
target[((hsi*60+51)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp50;
fp50 = fp206 * src3[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->roz[vi] * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src1[((hsi*18+8)*1+lsi)*1] - fp93;
LIBINT2_REALTYPE fp52;
fp52 = fp159 * fp92;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_z[vi] * src0[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
LIBINT2_REALTYPE fp49;
fp49 = fp51 + fp50;
target[((hsi*60+50)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp100;
fp100 = inteval->roz[vi] * src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = src1[((hsi*18+7)*1+lsi)*1] - fp100;
LIBINT2_REALTYPE fp55;
fp55 = fp159 * fp99;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_z[vi] * src0[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
target[((hsi*60+49)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp105;
fp105 = inteval->roz[vi] * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src1[((hsi*18+6)*1+lsi)*1] - fp105;
LIBINT2_REALTYPE fp58;
fp58 = fp159 * fp104;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_z[vi] * src0[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
target[((hsi*60+48)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp61;
fp61 = fp214 * src3[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_z[vi] * src0[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
target[((hsi*60+47)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp64;
fp64 = fp206 * src3[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_z[vi] * src0[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
target[((hsi*60+46)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp124;
fp124 = inteval->WP_z[vi] * src0[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp124 + fp158;
target[((hsi*60+30)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp96;
fp96 = fp206 * src3[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_z[vi] * src0[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp68 + fp96;
target[((hsi*60+44)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_z[vi] * src0[((hsi*36+19)*1+lsi)*1];
target[((hsi*60+43)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_z[vi] * src0[((hsi*36+18)*1+lsi)*1];
target[((hsi*60+42)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp72;
fp72 = fp219 * fp73;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_y[vi] * src0[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp75 + fp72;
target[((hsi*60+41)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp77;
fp77 = fp206 * src3[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp219 * fp80;
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_y[vi] * src0[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp82 + fp79;
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
target[((hsi*60+40)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp84;
fp84 = fp214 * src3[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp219 * fp87;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_y[vi] * src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp89 + fp86;
LIBINT2_REALTYPE fp83;
fp83 = fp85 + fp84;
target[((hsi*60+39)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp91;
fp91 = fp219 * fp92;
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_y[vi] * src0[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp94 + fp91;
target[((hsi*60+38)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp98;
fp98 = fp219 * fp99;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_y[vi] * src0[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp101 + fp98;
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
target[((hsi*60+37)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp103;
fp103 = fp219 * fp104;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_y[vi] * src0[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp106 + fp103;
target[((hsi*60+36)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp108;
fp108 = fp214 * src3[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_z[vi] * src0[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp110 + fp137;
LIBINT2_REALTYPE fp107;
fp107 = fp109 + fp108;
target[((hsi*60+35)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp112;
fp112 = fp206 * src3[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_z[vi] * src0[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp114 + fp142;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
target[((hsi*60+34)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp116;
fp116 = inteval->WP_z[vi] * src0[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp116 + fp147;
target[((hsi*60+33)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp118;
fp118 = fp206 * src3[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_z[vi] * src0[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp120 + fp150;
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
target[((hsi*60+32)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_z[vi] * src0[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp122 + fp155;
target[((hsi*60+31)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_z[vi] * src0[((hsi*36+21)*1+lsi)*1];
target[((hsi*60+45)*1+lsi)*1] = fp66;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 221 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
