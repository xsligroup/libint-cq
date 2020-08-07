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
void OSVRRP1InBra_aB_h010__0__p__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp133;
fp133 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->WQ_x[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp134 + fp132;
target[((hsi*63+30)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp137;
fp137 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp136;
fp136 = fp137 * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->WQ_z[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp138 + fp136;
target[((hsi*63+29)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp141;
fp141 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp140;
fp140 = fp141 * src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->WQ_y[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp142 + fp140;
target[((hsi*63+28)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp145;
fp145 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp144;
fp144 = fp145 * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = inteval->WQ_x[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp146 + fp144;
target[((hsi*63+27)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp149;
fp149 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp148;
fp148 = fp149 * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = inteval->WQ_z[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp150 + fp148;
target[((hsi*63+26)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp153;
fp153 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp155;
fp155 = fp156 * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->WQ_y[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp157 + fp155;
LIBINT2_REALTYPE fp151;
fp151 = fp154 + fp152;
target[((hsi*63+25)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp160;
fp160 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->WQ_x[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp161 + fp159;
target[((hsi*63+24)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp164;
fp164 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->WQ_z[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
target[((hsi*63+23)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp167;
fp167 = fp168 * src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_y[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp172 + fp170;
LIBINT2_REALTYPE fp166;
fp166 = fp169 + fp167;
target[((hsi*63+22)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp175;
fp175 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = inteval->WQ_x[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp176 + fp174;
target[((hsi*63+21)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp177;
fp177 = inteval->WQ_z[vi] * src0[((hsi*21+6)*1+lsi)*1];
target[((hsi*63+20)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp179;
fp179 = fp180 * src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp182;
fp182 = fp183 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->WQ_y[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp184 + fp182;
LIBINT2_REALTYPE fp178;
fp178 = fp181 + fp179;
target[((hsi*63+19)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp187;
fp187 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp186;
fp186 = fp187 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = inteval->WQ_x[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp188 + fp186;
target[((hsi*63+18)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp191;
fp191 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp190;
fp190 = fp191 * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = inteval->WQ_z[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp192 + fp190;
target[((hsi*63+17)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp259;
fp259 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp258;
fp258 = fp259 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = inteval->WQ_x[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp260 + fp258;
target[((hsi*63+0)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp199;
fp199 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp198;
fp198 = fp199 * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = inteval->WQ_x[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp200 + fp198;
target[((hsi*63+15)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp203;
fp203 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp202;
fp202 = fp203 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = inteval->WQ_z[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp204 + fp202;
target[((hsi*63+14)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp207;
fp207 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp206;
fp206 = fp207 * src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp209;
fp209 = fp210 * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = inteval->WQ_y[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp211 + fp209;
LIBINT2_REALTYPE fp205;
fp205 = fp208 + fp206;
target[((hsi*63+13)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp214;
fp214 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp213;
fp213 = fp214 * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = inteval->WQ_x[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp215 + fp213;
target[((hsi*63+12)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp216;
fp216 = inteval->WQ_z[vi] * src0[((hsi*21+3)*1+lsi)*1];
target[((hsi*63+11)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp218;
fp218 = fp219 * src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp221;
fp221 = fp222 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = inteval->WQ_y[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp223 + fp221;
LIBINT2_REALTYPE fp217;
fp217 = fp220 + fp218;
target[((hsi*63+10)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp226;
fp226 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp225;
fp225 = fp226 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = inteval->WQ_x[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp227 + fp225;
target[((hsi*63+9)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp230;
fp230 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp229;
fp229 = fp230 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = inteval->WQ_z[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp231 + fp229;
target[((hsi*63+8)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp234;
fp234 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp233;
fp233 = fp234 * src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = inteval->WQ_y[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp235 + fp233;
target[((hsi*63+7)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp238;
fp238 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp237;
fp237 = fp238 * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = inteval->WQ_x[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp239 + fp237;
target[((hsi*63+6)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp240;
fp240 = inteval->WQ_z[vi] * src0[((hsi*21+1)*1+lsi)*1];
target[((hsi*63+5)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp242;
fp242 = fp243 * src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp245;
fp245 = fp246 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = inteval->WQ_y[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp247 + fp245;
LIBINT2_REALTYPE fp241;
fp241 = fp244 + fp242;
target[((hsi*63+4)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp250;
fp250 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp249;
fp249 = fp250 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = inteval->WQ_x[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = fp251 + fp249;
target[((hsi*63+3)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp252;
fp252 = inteval->WQ_z[vi] * src0[((hsi*21+0)*1+lsi)*1];
target[((hsi*63+2)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp254;
fp254 = fp255 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = inteval->WQ_y[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp256 + fp254;
target[((hsi*63+1)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp195;
fp195 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp194;
fp194 = fp195 * src2[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->WQ_y[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp196 + fp194;
target[((hsi*63+16)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp2;
fp2 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WQ_z[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*63+62)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp5;
fp5 = fp6 * src2[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->WQ_y[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp7 + fp5;
target[((hsi*63+61)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp8;
fp8 = inteval->WQ_x[vi] * src0[((hsi*21+20)*1+lsi)*1];
target[((hsi*63+60)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->WQ_z[vi] * src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp12 + fp10;
target[((hsi*63+59)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp15;
fp15 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp14;
fp14 = fp15 * src2[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp18 * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->WQ_y[vi] * src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp19 + fp17;
LIBINT2_REALTYPE fp13;
fp13 = fp16 + fp14;
target[((hsi*63+58)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WQ_x[vi] * src0[((hsi*21+19)*1+lsi)*1];
target[((hsi*63+57)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
fp23 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->WQ_z[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*63+56)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp27 * src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_y[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
LIBINT2_REALTYPE fp25;
fp25 = fp28 + fp26;
target[((hsi*63+55)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_x[vi] * src0[((hsi*21+18)*1+lsi)*1];
target[((hsi*63+54)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
fp35 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_z[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp36 + fp34;
target[((hsi*63+53)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp39;
fp39 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp38;
fp38 = fp39 * src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_y[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp43 + fp41;
LIBINT2_REALTYPE fp37;
fp37 = fp40 + fp38;
target[((hsi*63+52)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WQ_x[vi] * src0[((hsi*21+17)*1+lsi)*1];
target[((hsi*63+51)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_z[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
target[((hsi*63+50)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->WQ_y[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*63+49)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_x[vi] * src0[((hsi*21+16)*1+lsi)*1];
target[((hsi*63+48)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp126;
fp126 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_y[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
LIBINT2_REALTYPE fp124;
fp124 = fp127 + fp125;
target[((hsi*63+31)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp60;
fp60 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp60 * src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp62;
fp62 = fp63 * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->WQ_y[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp64 + fp62;
LIBINT2_REALTYPE fp58;
fp58 = fp61 + fp59;
target[((hsi*63+46)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_x[vi] * src0[((hsi*21+15)*1+lsi)*1];
target[((hsi*63+45)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp68;
fp68 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_z[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp69 + fp67;
target[((hsi*63+44)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp72;
fp72 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->WQ_y[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
target[((hsi*63+43)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_x[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*63+42)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp80;
fp80 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_z[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*63+41)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp84;
fp84 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp84 * src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->WQ_y[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp88 + fp86;
LIBINT2_REALTYPE fp82;
fp82 = fp85 + fp83;
target[((hsi*63+40)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp91 * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_x[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
target[((hsi*63+39)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp95;
fp95 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_z[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp96 + fp94;
target[((hsi*63+38)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp99;
fp99 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp102 * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->WQ_y[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp103 + fp101;
LIBINT2_REALTYPE fp97;
fp97 = fp100 + fp98;
target[((hsi*63+37)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp106;
fp106 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp106 * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->WQ_x[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp107 + fp105;
target[((hsi*63+36)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp110;
fp110 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_z[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp111 + fp109;
target[((hsi*63+35)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp114;
fp114 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_y[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
LIBINT2_REALTYPE fp112;
fp112 = fp115 + fp113;
target[((hsi*63+34)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp121;
fp121 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->WQ_x[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
target[((hsi*63+33)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WQ_z[vi] * src0[((hsi*21+10)*1+lsi)*1];
target[((hsi*63+32)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WQ_z[vi] * src0[((hsi*21+15)*1+lsi)*1];
target[((hsi*63+47)*1+lsi)*1] = fp57;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 261 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif