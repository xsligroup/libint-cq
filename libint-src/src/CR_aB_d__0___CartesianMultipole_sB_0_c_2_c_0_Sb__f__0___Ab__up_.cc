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
void CR_aB_d__0___CartesianMultipole_sB_0_c_2_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_y[vi] * fp76;
LIBINT2_REALTYPE fp78;
fp78 = fp75 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp76 + fp81;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_y[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = fp78 + fp83;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp88 * fp82;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp4;
target[((hsi*60+29)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp78;
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp159;
fp159 = fp88 * fp73;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp5;
target[((hsi*60+28)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_y[vi] * fp70;
LIBINT2_REALTYPE fp66;
fp66 = fp65 + fp67;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_y[vi] * fp71;
LIBINT2_REALTYPE fp68;
fp68 = fp66 + fp69;
LIBINT2_REALTYPE fp161;
fp161 = fp88 * fp68;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp6;
target[((hsi*60+27)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_y[vi] * fp65;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp60 + fp62;
LIBINT2_REALTYPE fp63;
fp63 = fp61 + fp64;
LIBINT2_REALTYPE fp163;
fp163 = fp88 * fp63;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp7;
target[((hsi*60+26)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp89 * fp82;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp5;
target[((hsi*60+25)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp89 * fp73;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp6;
target[((hsi*60+24)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp89 * fp68;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp7;
target[((hsi*60+23)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp90 * fp82;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp6;
target[((hsi*60+22)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp90 * fp73;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp7;
target[((hsi*60+21)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp91 * fp82;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp7;
target[((hsi*60+20)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp54;
fp54 = fp51 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp56;
LIBINT2_REALTYPE fp58;
fp58 = fp54 + fp59;
LIBINT2_REALTYPE fp177;
fp177 = fp88 * fp58;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp8;
target[((hsi*60+19)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp51;
LIBINT2_REALTYPE fp47;
fp47 = fp46 + fp48;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp54;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp179;
fp179 = fp88 * fp49;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp9;
target[((hsi*60+18)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp41 + fp43;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp42 + fp45;
LIBINT2_REALTYPE fp181;
fp181 = fp88 * fp44;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp10;
target[((hsi*60+17)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp42;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp41;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp36 + fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp37 + fp40;
LIBINT2_REALTYPE fp183;
fp183 = fp88 * fp39;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp11;
target[((hsi*60+16)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp95 * fp82;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp11;
target[((hsi*60+0)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp187;
fp187 = fp89 * fp49;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp10;
target[((hsi*60+14)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp89 * fp44;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp11;
target[((hsi*60+13)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp90 * fp58;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp10;
target[((hsi*60+12)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp90 * fp49;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp11;
target[((hsi*60+11)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp91 * fp58;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp11;
target[((hsi*60+10)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp92 * fp82;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp8;
target[((hsi*60+9)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp92 * fp73;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp9;
target[((hsi*60+8)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp92 * fp68;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp10;
target[((hsi*60+7)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp92 * fp63;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp11;
target[((hsi*60+6)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp93 * fp82;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp9;
target[((hsi*60+5)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp93 * fp73;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp10;
target[((hsi*60+4)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp93 * fp68;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp11;
target[((hsi*60+3)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp94 * fp82;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp10;
target[((hsi*60+2)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp94 * fp73;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp11;
target[((hsi*60+1)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp185;
fp185 = fp89 * fp58;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp9;
target[((hsi*60+15)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp84 * fp82;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp0;
target[((hsi*60+59)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp84 * fp73;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp1;
target[((hsi*60+58)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp84 * fp68;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp2;
target[((hsi*60+57)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp84 * fp63;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp3;
target[((hsi*60+56)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp85 * fp82;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp1;
target[((hsi*60+55)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp85 * fp73;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp2;
target[((hsi*60+54)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp85 * fp68;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp3;
target[((hsi*60+53)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp86 * fp82;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp2;
target[((hsi*60+52)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp86 * fp73;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp3;
target[((hsi*60+51)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp87 * fp82;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp3;
target[((hsi*60+50)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp84 * fp58;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp4;
target[((hsi*60+49)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp84 * fp49;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp5;
target[((hsi*60+48)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp84 * fp44;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp6;
target[((hsi*60+47)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp84 * fp39;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp7;
target[((hsi*60+46)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp30;
fp30 = fp27 + fp31;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp32;
fp32 = fp28 + fp33;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_y[vi] * fp32;
LIBINT2_REALTYPE fp34;
fp34 = fp30 + fp35;
LIBINT2_REALTYPE fp155;
fp155 = fp87 * fp34;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp11;
target[((hsi*60+30)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp127;
fp127 = fp85 * fp49;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp6;
target[((hsi*60+44)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp85 * fp44;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp7;
target[((hsi*60+43)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp86 * fp58;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp6;
target[((hsi*60+42)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp86 * fp49;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp7;
target[((hsi*60+41)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp87 * fp58;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp7;
target[((hsi*60+40)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp84 * fp34;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp8;
target[((hsi*60+39)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp27;
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_y[vi] * fp30;
LIBINT2_REALTYPE fp25;
fp25 = fp23 + fp26;
LIBINT2_REALTYPE fp139;
fp139 = fp84 * fp25;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp9;
target[((hsi*60+38)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_y[vi] * fp22;
LIBINT2_REALTYPE fp18;
fp18 = fp17 + fp19;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_y[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = fp18 + fp21;
LIBINT2_REALTYPE fp141;
fp141 = fp84 * fp20;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp10;
target[((hsi*60+37)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_y[vi] * fp18;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp17;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp15;
fp15 = fp13 + fp16;
LIBINT2_REALTYPE fp143;
fp143 = fp84 * fp15;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp11;
target[((hsi*60+36)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp85 * fp34;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp9;
target[((hsi*60+35)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp85 * fp25;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp10;
target[((hsi*60+34)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp85 * fp20;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp11;
target[((hsi*60+33)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp86 * fp34;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp10;
target[((hsi*60+32)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp86 * fp25;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp11;
target[((hsi*60+31)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp125;
fp125 = fp85 * fp58;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp5;
target[((hsi*60+45)*1+lsi)*1] = fp124;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 216 */
}

#ifdef __cplusplus
};
#endif
