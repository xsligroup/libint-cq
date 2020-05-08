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
void HRRPart0bra0ket0i001p(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp165;
fp165 = inteval->AB_y[vi] * src1[((hsi*28+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = src0[((hsi*36+11)*lowdim+lsi)*1] + fp165;
target[((hsi*84+22)*lowdim+lsi)*1] = fp164;
LIBINT2_REALTYPE fp161;
fp161 = 1.0000000000000000e+00 * src2[((hsi*28+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->AB_z[vi] * src1[((hsi*28+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = src0[((hsi*36+12)*lowdim+lsi)*1] + fp163;
LIBINT2_REALTYPE fp160;
fp160 = fp162 + fp161;
target[((hsi*84+23)*lowdim+lsi)*1] = fp160;
LIBINT2_REALTYPE fp159;
fp159 = inteval->AB_x[vi] * src1[((hsi*28+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*36+8)*lowdim+lsi)*1] + fp159;
target[((hsi*84+24)*lowdim+lsi)*1] = fp158;
LIBINT2_REALTYPE fp157;
fp157 = inteval->AB_y[vi] * src1[((hsi*28+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*36+12)*lowdim+lsi)*1] + fp157;
target[((hsi*84+25)*lowdim+lsi)*1] = fp156;
LIBINT2_REALTYPE fp153;
fp153 = 1.0000000000000000e+00 * src2[((hsi*28+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = inteval->AB_z[vi] * src1[((hsi*28+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = src0[((hsi*36+13)*lowdim+lsi)*1] + fp155;
LIBINT2_REALTYPE fp152;
fp152 = fp154 + fp153;
target[((hsi*84+26)*lowdim+lsi)*1] = fp152;
LIBINT2_REALTYPE fp151;
fp151 = inteval->AB_x[vi] * src1[((hsi*28+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*36+9)*lowdim+lsi)*1] + fp151;
target[((hsi*84+27)*lowdim+lsi)*1] = fp150;
LIBINT2_REALTYPE fp149;
fp149 = inteval->AB_y[vi] * src1[((hsi*28+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = src0[((hsi*36+13)*lowdim+lsi)*1] + fp149;
target[((hsi*84+28)*lowdim+lsi)*1] = fp148;
LIBINT2_REALTYPE fp145;
fp145 = 1.0000000000000000e+00 * src2[((hsi*28+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->AB_z[vi] * src1[((hsi*28+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = src0[((hsi*36+14)*lowdim+lsi)*1] + fp147;
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
target[((hsi*84+29)*lowdim+lsi)*1] = fp144;
LIBINT2_REALTYPE fp143;
fp143 = inteval->AB_x[vi] * src1[((hsi*28+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*36+10)*lowdim+lsi)*1] + fp143;
target[((hsi*84+30)*lowdim+lsi)*1] = fp142;
LIBINT2_REALTYPE fp223;
fp223 = inteval->AB_x[vi] * src1[((hsi*28+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = src0[((hsi*36+0)*lowdim+lsi)*1] + fp223;
target[((hsi*84+0)*lowdim+lsi)*1] = fp222;
LIBINT2_REALTYPE fp137;
fp137 = 1.0000000000000000e+00 * src2[((hsi*28+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->AB_z[vi] * src1[((hsi*28+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = src0[((hsi*36+16)*lowdim+lsi)*1] + fp139;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*84+32)*lowdim+lsi)*1] = fp136;
LIBINT2_REALTYPE fp135;
fp135 = inteval->AB_x[vi] * src1[((hsi*28+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*36+11)*lowdim+lsi)*1] + fp135;
target[((hsi*84+33)*lowdim+lsi)*1] = fp134;
LIBINT2_REALTYPE fp133;
fp133 = inteval->AB_y[vi] * src1[((hsi*28+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*36+16)*lowdim+lsi)*1] + fp133;
target[((hsi*84+34)*lowdim+lsi)*1] = fp132;
LIBINT2_REALTYPE fp129;
fp129 = 1.0000000000000000e+00 * src2[((hsi*28+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->AB_z[vi] * src1[((hsi*28+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = src0[((hsi*36+17)*lowdim+lsi)*1] + fp131;
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
target[((hsi*84+35)*lowdim+lsi)*1] = fp128;
LIBINT2_REALTYPE fp127;
fp127 = inteval->AB_x[vi] * src1[((hsi*28+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*36+12)*lowdim+lsi)*1] + fp127;
target[((hsi*84+36)*lowdim+lsi)*1] = fp126;
LIBINT2_REALTYPE fp125;
fp125 = inteval->AB_y[vi] * src1[((hsi*28+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*36+17)*lowdim+lsi)*1] + fp125;
target[((hsi*84+37)*lowdim+lsi)*1] = fp124;
LIBINT2_REALTYPE fp121;
fp121 = 1.0000000000000000e+00 * src2[((hsi*28+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->AB_z[vi] * src1[((hsi*28+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = src0[((hsi*36+18)*lowdim+lsi)*1] + fp123;
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
target[((hsi*84+38)*lowdim+lsi)*1] = fp120;
LIBINT2_REALTYPE fp119;
fp119 = inteval->AB_x[vi] * src1[((hsi*28+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*36+13)*lowdim+lsi)*1] + fp119;
target[((hsi*84+39)*lowdim+lsi)*1] = fp118;
LIBINT2_REALTYPE fp117;
fp117 = inteval->AB_y[vi] * src1[((hsi*28+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*36+18)*lowdim+lsi)*1] + fp117;
target[((hsi*84+40)*lowdim+lsi)*1] = fp116;
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * src2[((hsi*28+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->AB_z[vi] * src1[((hsi*28+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*36+19)*lowdim+lsi)*1] + fp115;
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
target[((hsi*84+41)*lowdim+lsi)*1] = fp112;
LIBINT2_REALTYPE fp141;
fp141 = inteval->AB_y[vi] * src1[((hsi*28+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*36+15)*lowdim+lsi)*1] + fp141;
target[((hsi*84+31)*lowdim+lsi)*1] = fp140;
LIBINT2_REALTYPE fp221;
fp221 = inteval->AB_y[vi] * src1[((hsi*28+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = src0[((hsi*36+1)*lowdim+lsi)*1] + fp221;
target[((hsi*84+1)*lowdim+lsi)*1] = fp220;
LIBINT2_REALTYPE fp217;
fp217 = 1.0000000000000000e+00 * src2[((hsi*28+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = inteval->AB_z[vi] * src1[((hsi*28+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = src0[((hsi*36+2)*lowdim+lsi)*1] + fp219;
LIBINT2_REALTYPE fp216;
fp216 = fp218 + fp217;
target[((hsi*84+2)*lowdim+lsi)*1] = fp216;
LIBINT2_REALTYPE fp215;
fp215 = inteval->AB_x[vi] * src1[((hsi*28+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = src0[((hsi*36+1)*lowdim+lsi)*1] + fp215;
target[((hsi*84+3)*lowdim+lsi)*1] = fp214;
LIBINT2_REALTYPE fp213;
fp213 = inteval->AB_y[vi] * src1[((hsi*28+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = src0[((hsi*36+3)*lowdim+lsi)*1] + fp213;
target[((hsi*84+4)*lowdim+lsi)*1] = fp212;
LIBINT2_REALTYPE fp209;
fp209 = 1.0000000000000000e+00 * src2[((hsi*28+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = inteval->AB_z[vi] * src1[((hsi*28+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = src0[((hsi*36+4)*lowdim+lsi)*1] + fp211;
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
target[((hsi*84+5)*lowdim+lsi)*1] = fp208;
LIBINT2_REALTYPE fp207;
fp207 = inteval->AB_x[vi] * src1[((hsi*28+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = src0[((hsi*36+2)*lowdim+lsi)*1] + fp207;
target[((hsi*84+6)*lowdim+lsi)*1] = fp206;
LIBINT2_REALTYPE fp205;
fp205 = inteval->AB_y[vi] * src1[((hsi*28+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*36+4)*lowdim+lsi)*1] + fp205;
target[((hsi*84+7)*lowdim+lsi)*1] = fp204;
LIBINT2_REALTYPE fp201;
fp201 = 1.0000000000000000e+00 * src2[((hsi*28+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = inteval->AB_z[vi] * src1[((hsi*28+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = src0[((hsi*36+5)*lowdim+lsi)*1] + fp203;
LIBINT2_REALTYPE fp200;
fp200 = fp202 + fp201;
target[((hsi*84+8)*lowdim+lsi)*1] = fp200;
LIBINT2_REALTYPE fp199;
fp199 = inteval->AB_x[vi] * src1[((hsi*28+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = src0[((hsi*36+3)*lowdim+lsi)*1] + fp199;
target[((hsi*84+9)*lowdim+lsi)*1] = fp198;
LIBINT2_REALTYPE fp167;
fp167 = inteval->AB_x[vi] * src1[((hsi*28+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = src0[((hsi*36+7)*lowdim+lsi)*1] + fp167;
target[((hsi*84+21)*lowdim+lsi)*1] = fp166;
LIBINT2_REALTYPE fp193;
fp193 = 1.0000000000000000e+00 * src2[((hsi*28+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->AB_z[vi] * src1[((hsi*28+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src0[((hsi*36+7)*lowdim+lsi)*1] + fp195;
LIBINT2_REALTYPE fp192;
fp192 = fp194 + fp193;
target[((hsi*84+11)*lowdim+lsi)*1] = fp192;
LIBINT2_REALTYPE fp191;
fp191 = inteval->AB_x[vi] * src1[((hsi*28+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = src0[((hsi*36+4)*lowdim+lsi)*1] + fp191;
target[((hsi*84+12)*lowdim+lsi)*1] = fp190;
LIBINT2_REALTYPE fp189;
fp189 = inteval->AB_y[vi] * src1[((hsi*28+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*36+7)*lowdim+lsi)*1] + fp189;
target[((hsi*84+13)*lowdim+lsi)*1] = fp188;
LIBINT2_REALTYPE fp185;
fp185 = 1.0000000000000000e+00 * src2[((hsi*28+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = inteval->AB_z[vi] * src1[((hsi*28+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = src0[((hsi*36+8)*lowdim+lsi)*1] + fp187;
LIBINT2_REALTYPE fp184;
fp184 = fp186 + fp185;
target[((hsi*84+14)*lowdim+lsi)*1] = fp184;
LIBINT2_REALTYPE fp183;
fp183 = inteval->AB_x[vi] * src1[((hsi*28+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*36+5)*lowdim+lsi)*1] + fp183;
target[((hsi*84+15)*lowdim+lsi)*1] = fp182;
LIBINT2_REALTYPE fp181;
fp181 = inteval->AB_y[vi] * src1[((hsi*28+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = src0[((hsi*36+8)*lowdim+lsi)*1] + fp181;
target[((hsi*84+16)*lowdim+lsi)*1] = fp180;
LIBINT2_REALTYPE fp177;
fp177 = 1.0000000000000000e+00 * src2[((hsi*28+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->AB_z[vi] * src1[((hsi*28+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = src0[((hsi*36+9)*lowdim+lsi)*1] + fp179;
LIBINT2_REALTYPE fp176;
fp176 = fp178 + fp177;
target[((hsi*84+17)*lowdim+lsi)*1] = fp176;
LIBINT2_REALTYPE fp175;
fp175 = inteval->AB_x[vi] * src1[((hsi*28+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*36+6)*lowdim+lsi)*1] + fp175;
target[((hsi*84+18)*lowdim+lsi)*1] = fp174;
LIBINT2_REALTYPE fp173;
fp173 = inteval->AB_y[vi] * src1[((hsi*28+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = src0[((hsi*36+10)*lowdim+lsi)*1] + fp173;
target[((hsi*84+19)*lowdim+lsi)*1] = fp172;
LIBINT2_REALTYPE fp169;
fp169 = 1.0000000000000000e+00 * src2[((hsi*28+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = inteval->AB_z[vi] * src1[((hsi*28+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = src0[((hsi*36+11)*lowdim+lsi)*1] + fp171;
LIBINT2_REALTYPE fp168;
fp168 = fp170 + fp169;
target[((hsi*84+20)*lowdim+lsi)*1] = fp168;
LIBINT2_REALTYPE fp197;
fp197 = inteval->AB_y[vi] * src1[((hsi*28+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = src0[((hsi*36+6)*lowdim+lsi)*1] + fp197;
target[((hsi*84+10)*lowdim+lsi)*1] = fp196;
LIBINT2_REALTYPE fp53;
fp53 = inteval->AB_y[vi] * src1[((hsi*28+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*36+28)*lowdim+lsi)*1] + fp53;
target[((hsi*84+64)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * src2[((hsi*28+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->AB_z[vi] * src1[((hsi*28+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*36+29)*lowdim+lsi)*1] + fp51;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*84+65)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp47;
fp47 = inteval->AB_x[vi] * src1[((hsi*28+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*36+22)*lowdim+lsi)*1] + fp47;
target[((hsi*84+66)*lowdim+lsi)*1] = fp46;
LIBINT2_REALTYPE fp45;
fp45 = inteval->AB_y[vi] * src1[((hsi*28+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*36+29)*lowdim+lsi)*1] + fp45;
target[((hsi*84+67)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * src2[((hsi*28+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->AB_z[vi] * src1[((hsi*28+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*36+30)*lowdim+lsi)*1] + fp43;
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
target[((hsi*84+68)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp39;
fp39 = inteval->AB_x[vi] * src1[((hsi*28+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*36+23)*lowdim+lsi)*1] + fp39;
target[((hsi*84+69)*lowdim+lsi)*1] = fp38;
LIBINT2_REALTYPE fp37;
fp37 = inteval->AB_y[vi] * src1[((hsi*28+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*36+30)*lowdim+lsi)*1] + fp37;
target[((hsi*84+70)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * src2[((hsi*28+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->AB_z[vi] * src1[((hsi*28+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*36+31)*lowdim+lsi)*1] + fp35;
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
target[((hsi*84+71)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp31;
fp31 = inteval->AB_x[vi] * src1[((hsi*28+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*36+24)*lowdim+lsi)*1] + fp31;
target[((hsi*84+72)*lowdim+lsi)*1] = fp30;
LIBINT2_REALTYPE fp111;
fp111 = inteval->AB_x[vi] * src1[((hsi*28+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*36+14)*lowdim+lsi)*1] + fp111;
target[((hsi*84+42)*lowdim+lsi)*1] = fp110;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * src2[((hsi*28+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->AB_z[vi] * src1[((hsi*28+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*36+32)*lowdim+lsi)*1] + fp27;
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
target[((hsi*84+74)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp23;
fp23 = inteval->AB_x[vi] * src1[((hsi*28+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*36+25)*lowdim+lsi)*1] + fp23;
target[((hsi*84+75)*lowdim+lsi)*1] = fp22;
LIBINT2_REALTYPE fp21;
fp21 = inteval->AB_y[vi] * src1[((hsi*28+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*36+32)*lowdim+lsi)*1] + fp21;
target[((hsi*84+76)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp17;
fp17 = 1.0000000000000000e+00 * src2[((hsi*28+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->AB_z[vi] * src1[((hsi*28+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*36+33)*lowdim+lsi)*1] + fp19;
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*84+77)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp15;
fp15 = inteval->AB_x[vi] * src1[((hsi*28+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*36+26)*lowdim+lsi)*1] + fp15;
target[((hsi*84+78)*lowdim+lsi)*1] = fp14;
LIBINT2_REALTYPE fp13;
fp13 = inteval->AB_y[vi] * src1[((hsi*28+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*36+33)*lowdim+lsi)*1] + fp13;
target[((hsi*84+79)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp9;
fp9 = 1.0000000000000000e+00 * src2[((hsi*28+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->AB_z[vi] * src1[((hsi*28+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*36+34)*lowdim+lsi)*1] + fp11;
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
target[((hsi*84+80)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp7;
fp7 = inteval->AB_x[vi] * src1[((hsi*28+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*36+27)*lowdim+lsi)*1] + fp7;
target[((hsi*84+81)*lowdim+lsi)*1] = fp6;
LIBINT2_REALTYPE fp5;
fp5 = inteval->AB_y[vi] * src1[((hsi*28+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*36+34)*lowdim+lsi)*1] + fp5;
target[((hsi*84+82)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * src2[((hsi*28+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->AB_z[vi] * src1[((hsi*28+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*36+35)*lowdim+lsi)*1] + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*84+83)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp29;
fp29 = inteval->AB_y[vi] * src1[((hsi*28+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*36+31)*lowdim+lsi)*1] + fp29;
target[((hsi*84+73)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp109;
fp109 = inteval->AB_y[vi] * src1[((hsi*28+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*36+19)*lowdim+lsi)*1] + fp109;
target[((hsi*84+43)*lowdim+lsi)*1] = fp108;
LIBINT2_REALTYPE fp105;
fp105 = 1.0000000000000000e+00 * src2[((hsi*28+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->AB_z[vi] * src1[((hsi*28+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = src0[((hsi*36+20)*lowdim+lsi)*1] + fp107;
LIBINT2_REALTYPE fp104;
fp104 = fp106 + fp105;
target[((hsi*84+44)*lowdim+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = inteval->AB_x[vi] * src1[((hsi*28+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*36+15)*lowdim+lsi)*1] + fp103;
target[((hsi*84+45)*lowdim+lsi)*1] = fp102;
LIBINT2_REALTYPE fp101;
fp101 = inteval->AB_y[vi] * src1[((hsi*28+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*36+21)*lowdim+lsi)*1] + fp101;
target[((hsi*84+46)*lowdim+lsi)*1] = fp100;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * src2[((hsi*28+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->AB_z[vi] * src1[((hsi*28+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*36+22)*lowdim+lsi)*1] + fp99;
LIBINT2_REALTYPE fp96;
fp96 = fp98 + fp97;
target[((hsi*84+47)*lowdim+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = inteval->AB_x[vi] * src1[((hsi*28+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*36+16)*lowdim+lsi)*1] + fp95;
target[((hsi*84+48)*lowdim+lsi)*1] = fp94;
LIBINT2_REALTYPE fp93;
fp93 = inteval->AB_y[vi] * src1[((hsi*28+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*36+22)*lowdim+lsi)*1] + fp93;
target[((hsi*84+49)*lowdim+lsi)*1] = fp92;
LIBINT2_REALTYPE fp89;
fp89 = 1.0000000000000000e+00 * src2[((hsi*28+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->AB_z[vi] * src1[((hsi*28+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = src0[((hsi*36+23)*lowdim+lsi)*1] + fp91;
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
target[((hsi*84+50)*lowdim+lsi)*1] = fp88;
LIBINT2_REALTYPE fp87;
fp87 = inteval->AB_x[vi] * src1[((hsi*28+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*36+17)*lowdim+lsi)*1] + fp87;
target[((hsi*84+51)*lowdim+lsi)*1] = fp86;
LIBINT2_REALTYPE fp55;
fp55 = inteval->AB_x[vi] * src1[((hsi*28+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*36+21)*lowdim+lsi)*1] + fp55;
target[((hsi*84+63)*lowdim+lsi)*1] = fp54;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * src2[((hsi*28+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->AB_z[vi] * src1[((hsi*28+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*36+24)*lowdim+lsi)*1] + fp83;
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
target[((hsi*84+53)*lowdim+lsi)*1] = fp80;
LIBINT2_REALTYPE fp79;
fp79 = inteval->AB_x[vi] * src1[((hsi*28+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*36+18)*lowdim+lsi)*1] + fp79;
target[((hsi*84+54)*lowdim+lsi)*1] = fp78;
LIBINT2_REALTYPE fp77;
fp77 = inteval->AB_y[vi] * src1[((hsi*28+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*36+24)*lowdim+lsi)*1] + fp77;
target[((hsi*84+55)*lowdim+lsi)*1] = fp76;
LIBINT2_REALTYPE fp73;
fp73 = 1.0000000000000000e+00 * src2[((hsi*28+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->AB_z[vi] * src1[((hsi*28+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*36+25)*lowdim+lsi)*1] + fp75;
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*84+56)*lowdim+lsi)*1] = fp72;
LIBINT2_REALTYPE fp71;
fp71 = inteval->AB_x[vi] * src1[((hsi*28+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*36+19)*lowdim+lsi)*1] + fp71;
target[((hsi*84+57)*lowdim+lsi)*1] = fp70;
LIBINT2_REALTYPE fp69;
fp69 = inteval->AB_y[vi] * src1[((hsi*28+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*36+25)*lowdim+lsi)*1] + fp69;
target[((hsi*84+58)*lowdim+lsi)*1] = fp68;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * src2[((hsi*28+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->AB_z[vi] * src1[((hsi*28+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*36+26)*lowdim+lsi)*1] + fp67;
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
target[((hsi*84+59)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp63;
fp63 = inteval->AB_x[vi] * src1[((hsi*28+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*36+20)*lowdim+lsi)*1] + fp63;
target[((hsi*84+60)*lowdim+lsi)*1] = fp62;
LIBINT2_REALTYPE fp61;
fp61 = inteval->AB_y[vi] * src1[((hsi*28+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*36+26)*lowdim+lsi)*1] + fp61;
target[((hsi*84+61)*lowdim+lsi)*1] = fp60;
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * src2[((hsi*28+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->AB_z[vi] * src1[((hsi*28+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*36+27)*lowdim+lsi)*1] + fp59;
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
target[((hsi*84+62)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp85;
fp85 = inteval->AB_y[vi] * src1[((hsi*28+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*36+23)*lowdim+lsi)*1] + fp85;
target[((hsi*84+52)*lowdim+lsi)*1] = fp84;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 224 */
}

#ifdef __cplusplus
};
#endif
