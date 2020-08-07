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
void OSVRRP0InBra_aB_d__0__f__1___TwoPRep_unit__0__s200__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp202;
fp202 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp202 * src3[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
target[((hsi*60+29)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp191;
fp191 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp191 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_z[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp88 + fp106;
target[((hsi*60+28)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp172;
fp172 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp171;
fp171 = fp172 * src3[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_z[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp90 + fp171;
target[((hsi*60+27)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_z[vi] * src0[((hsi*30+6)*1+lsi)*1];
target[((hsi*60+26)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp181;
fp181 = fp191 * src3[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp93 + fp181;
target[((hsi*60+25)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp172 * src3[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_z[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
target[((hsi*60+24)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_z[vi] * src0[((hsi*30+3)*1+lsi)*1];
target[((hsi*60+23)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp119;
fp119 = fp172 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_z[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp99 + fp119;
target[((hsi*60+22)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_z[vi] * src0[((hsi*30+1)*1+lsi)*1];
target[((hsi*60+21)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_z[vi] * src0[((hsi*30+0)*1+lsi)*1];
target[((hsi*60+20)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_y[vi] * src0[((hsi*30+9)*1+lsi)*1];
target[((hsi*60+19)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp153;
fp153 = fp172 * src3[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_y[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp104 + fp153;
target[((hsi*60+18)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_y[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
target[((hsi*60+17)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp109;
fp109 = fp202 * src3[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
target[((hsi*60+16)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp199;
fp199 = 2.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp198;
fp198 = fp199 * src4[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp202 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp206;
fp206 = inteval->roz[vi] * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = src1[((hsi*10+0)*1+lsi)*1] - fp206;
LIBINT2_REALTYPE fp204;
fp204 = fp207 * fp205;
LIBINT2_REALTYPE fp208;
fp208 = inteval->WP_x[vi] * src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp208 + fp204;
LIBINT2_REALTYPE fp200;
fp200 = fp203 + fp201;
LIBINT2_REALTYPE fp197;
fp197 = fp200 + fp198;
target[((hsi*60+0)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp113;
fp113 = fp172 * src3[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_y[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
target[((hsi*60+14)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * src3[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->WP_y[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp116 + fp190;
target[((hsi*60+13)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WP_y[vi] * src0[((hsi*30+2)*1+lsi)*1];
target[((hsi*60+12)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_y[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
target[((hsi*60+11)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_y[vi] * src0[((hsi*30+0)*1+lsi)*1];
target[((hsi*60+10)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp123;
fp123 = fp199 * src4[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->roz[vi] * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src1[((hsi*10+9)*1+lsi)*1] - fp127;
LIBINT2_REALTYPE fp125;
fp125 = fp207 * fp126;
LIBINT2_REALTYPE fp128;
fp128 = inteval->WP_x[vi] * src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp128 + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*60+9)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp130;
fp130 = fp199 * src4[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->roz[vi] * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = src1[((hsi*10+8)*1+lsi)*1] - fp134;
LIBINT2_REALTYPE fp132;
fp132 = fp207 * fp133;
LIBINT2_REALTYPE fp135;
fp135 = inteval->WP_x[vi] * src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp135 + fp132;
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
target[((hsi*60+8)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp137;
fp137 = fp199 * src4[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->roz[vi] * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src1[((hsi*10+7)*1+lsi)*1] - fp141;
LIBINT2_REALTYPE fp139;
fp139 = fp207 * fp140;
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_x[vi] * src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp142 + fp139;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*60+7)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp144;
fp144 = fp199 * src4[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->roz[vi] * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = src1[((hsi*10+6)*1+lsi)*1] - fp148;
LIBINT2_REALTYPE fp146;
fp146 = fp207 * fp147;
LIBINT2_REALTYPE fp149;
fp149 = inteval->WP_x[vi] * src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp149 + fp146;
LIBINT2_REALTYPE fp143;
fp143 = fp145 + fp144;
target[((hsi*60+6)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp151;
fp151 = fp199 * src4[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->roz[vi] * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src1[((hsi*10+5)*1+lsi)*1] - fp157;
LIBINT2_REALTYPE fp155;
fp155 = fp207 * fp156;
LIBINT2_REALTYPE fp158;
fp158 = inteval->WP_x[vi] * src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp158 + fp155;
LIBINT2_REALTYPE fp152;
fp152 = fp154 + fp153;
LIBINT2_REALTYPE fp150;
fp150 = fp152 + fp151;
target[((hsi*60+5)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp160;
fp160 = fp199 * src4[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp172 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->roz[vi] * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = src1[((hsi*10+4)*1+lsi)*1] - fp166;
LIBINT2_REALTYPE fp164;
fp164 = fp207 * fp165;
LIBINT2_REALTYPE fp167;
fp167 = inteval->WP_x[vi] * src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp167 + fp164;
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
target[((hsi*60+4)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp169;
fp169 = fp199 * src4[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = inteval->roz[vi] * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = src1[((hsi*10+3)*1+lsi)*1] - fp176;
LIBINT2_REALTYPE fp174;
fp174 = fp207 * fp175;
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_x[vi] * src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp177 + fp174;
LIBINT2_REALTYPE fp170;
fp170 = fp173 + fp171;
LIBINT2_REALTYPE fp168;
fp168 = fp170 + fp169;
target[((hsi*60+3)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp179;
fp179 = fp199 * src4[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->roz[vi] * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = src1[((hsi*10+2)*1+lsi)*1] - fp185;
LIBINT2_REALTYPE fp183;
fp183 = fp207 * fp184;
LIBINT2_REALTYPE fp186;
fp186 = inteval->WP_x[vi] * src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp186 + fp183;
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
target[((hsi*60+2)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp188;
fp188 = fp199 * src4[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->roz[vi] * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src1[((hsi*10+1)*1+lsi)*1] - fp195;
LIBINT2_REALTYPE fp193;
fp193 = fp207 * fp194;
LIBINT2_REALTYPE fp196;
fp196 = inteval->WP_x[vi] * src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp196 + fp193;
LIBINT2_REALTYPE fp189;
fp189 = fp192 + fp190;
LIBINT2_REALTYPE fp187;
fp187 = fp189 + fp188;
target[((hsi*60+1)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_y[vi] * src0[((hsi*30+5)*1+lsi)*1];
target[((hsi*60+15)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp1;
fp1 = fp202 * src3[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src0[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp3 + fp125;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = fp191 * src3[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src0[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 + fp132;
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
target[((hsi*60+58)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp9;
fp9 = fp172 * src3[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->WP_z[vi] * src0[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp11 + fp139;
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
target[((hsi*60+57)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_z[vi] * src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 + fp146;
target[((hsi*60+56)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
fp15 = fp191 * src3[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 + fp155;
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*60+55)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp19;
fp19 = fp172 * src3[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_z[vi] * src0[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp21 + fp164;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*60+54)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp23 + fp174;
target[((hsi*60+53)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
fp25 = fp172 * src3[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_z[vi] * src0[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp27 + fp183;
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
target[((hsi*60+52)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_z[vi] * src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp29 + fp193;
target[((hsi*60+51)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_z[vi] * src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp31 + fp204;
target[((hsi*60+50)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
fp33 = fp202 * src3[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
target[((hsi*60+49)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp59;
fp59 = fp191 * src3[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp36 + fp59;
target[((hsi*60+48)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp38;
fp38 = fp172 * src3[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_z[vi] * src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
target[((hsi*60+47)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * src0[((hsi*30+16)*1+lsi)*1];
target[((hsi*60+46)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_y[vi] * src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp83 + fp204;
target[((hsi*60+30)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp45;
fp45 = fp172 * src3[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
target[((hsi*60+44)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * src0[((hsi*30+13)*1+lsi)*1];
target[((hsi*60+43)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp79;
fp79 = fp172 * src3[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_z[vi] * src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp49 + fp79;
target[((hsi*60+42)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * src0[((hsi*30+11)*1+lsi)*1];
target[((hsi*60+41)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * src0[((hsi*30+10)*1+lsi)*1];
target[((hsi*60+40)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_y[vi] * src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp53 + fp125;
target[((hsi*60+39)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp172 * src3[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_y[vi] * src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp57 + fp132;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
target[((hsi*60+38)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_y[vi] * src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp61 + fp139;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*60+37)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp63;
fp63 = fp202 * src3[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_y[vi] * src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp65 + fp146;
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
target[((hsi*60+36)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp67 + fp155;
target[((hsi*60+35)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp172 * src3[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_y[vi] * src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp71 + fp164;
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
target[((hsi*60+34)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp73;
fp73 = fp191 * src3[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_y[vi] * src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp75 + fp174;
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*60+33)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_y[vi] * src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp183;
target[((hsi*60+32)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_y[vi] * src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp81 + fp193;
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
target[((hsi*60+31)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp42;
fp42 = fp191 * src3[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp43 + fp42;
target[((hsi*60+45)*1+lsi)*1] = fp41;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 209 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif