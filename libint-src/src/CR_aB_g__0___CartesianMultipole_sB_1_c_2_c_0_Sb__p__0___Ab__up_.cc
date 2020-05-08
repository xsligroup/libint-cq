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
void CR_aB_g__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp46;
fp46 = fp43 + fp47;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp48;
fp48 = fp44 + fp49;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp48;
LIBINT2_REALTYPE fp50;
fp50 = fp46 + fp51;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_x[vi] * fp91;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp90 + fp93;
LIBINT2_REALTYPE fp162;
fp162 = fp92 * fp50;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp7;
target[((hsi*45+21)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp87;
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp30;
LIBINT2_REALTYPE fp32;
fp32 = fp29 + fp33;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_y[vi] * fp31;
LIBINT2_REALTYPE fp34;
fp34 = fp30 + fp35;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp36;
fp36 = fp32 + fp37;
LIBINT2_REALTYPE fp164;
fp164 = fp88 * fp36;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp8;
target[((hsi*45+20)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_y[vi] * fp32;
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*25+18)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp24 + fp26;
LIBINT2_REALTYPE fp27;
fp27 = fp25 + fp28;
LIBINT2_REALTYPE fp166;
fp166 = fp88 * fp27;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp9;
target[((hsi*45+19)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp168;
fp168 = fp92 * fp36;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp9;
target[((hsi*45+18)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_y[vi] * fp72;
LIBINT2_REALTYPE fp74;
fp74 = fp71 + fp75;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_y[vi] * fp73;
LIBINT2_REALTYPE fp76;
fp76 = fp72 + fp77;
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_y[vi] * fp76;
LIBINT2_REALTYPE fp78;
fp78 = fp74 + fp79;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src0[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->BO_x[vi] * fp94;
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
LIBINT2_REALTYPE fp170;
fp170 = fp95 * fp78;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp4;
target[((hsi*45+17)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_y[vi] * fp74;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_y[vi] * fp71;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*25+3)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp66 + fp68;
LIBINT2_REALTYPE fp69;
fp69 = fp67 + fp70;
LIBINT2_REALTYPE fp172;
fp172 = fp95 * fp69;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp5;
target[((hsi*45+16)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_x[vi] * fp98;
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src0[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp97 + fp100;
LIBINT2_REALTYPE fp174;
fp174 = fp99 * fp78;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp5;
target[((hsi*45+15)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_y[vi] * fp58;
LIBINT2_REALTYPE fp60;
fp60 = fp57 + fp61;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_y[vi] * fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp58 + fp63;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_y[vi] * fp62;
LIBINT2_REALTYPE fp64;
fp64 = fp60 + fp65;
LIBINT2_REALTYPE fp176;
fp176 = fp95 * fp64;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp6;
target[((hsi*45+14)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_y[vi] * fp57;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*25+8)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp52 + fp54;
LIBINT2_REALTYPE fp55;
fp55 = fp53 + fp56;
LIBINT2_REALTYPE fp178;
fp178 = fp95 * fp55;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp7;
target[((hsi*45+13)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = fp99 * fp64;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp7;
target[((hsi*45+12)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src0[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_x[vi] * fp112;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src0[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp111 + fp114;
LIBINT2_REALTYPE fp204;
fp204 = fp113 * fp78;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp9;
target[((hsi*45+0)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*25+13)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp38 + fp40;
LIBINT2_REALTYPE fp41;
fp41 = fp39 + fp42;
LIBINT2_REALTYPE fp184;
fp184 = fp95 * fp41;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp9;
target[((hsi*45+10)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp186;
fp186 = fp99 * fp50;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp9;
target[((hsi*45+9)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->BO_x[vi] * fp101;
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
LIBINT2_REALTYPE fp188;
fp188 = fp102 * fp78;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp6;
target[((hsi*45+8)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp190;
fp190 = fp102 * fp69;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp7;
target[((hsi*45+7)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_x[vi] * fp105;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src0[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp104 + fp107;
LIBINT2_REALTYPE fp192;
fp192 = fp106 * fp78;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp7;
target[((hsi*45+6)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp194;
fp194 = fp102 * fp64;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp8;
target[((hsi*45+5)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp196;
fp196 = fp102 * fp55;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp9;
target[((hsi*45+4)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp198;
fp198 = fp106 * fp64;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp9;
target[((hsi*45+3)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src0[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->BO_x[vi] * fp108;
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
LIBINT2_REALTYPE fp200;
fp200 = fp109 * fp78;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp8;
target[((hsi*45+2)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp202;
fp202 = fp109 * fp69;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp9;
target[((hsi*45+1)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp182;
fp182 = fp95 * fp50;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp8;
target[((hsi*45+11)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_x[vi] * fp80;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
LIBINT2_REALTYPE fp116;
fp116 = fp81 * fp78;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp0;
target[((hsi*45+44)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp81 * fp69;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp1;
target[((hsi*45+43)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_x[vi] * fp84;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp83 + fp86;
LIBINT2_REALTYPE fp120;
fp120 = fp85 * fp78;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp1;
target[((hsi*45+42)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp81 * fp64;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp2;
target[((hsi*45+41)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp81 * fp55;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp3;
target[((hsi*45+40)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp126;
fp126 = fp85 * fp64;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp3;
target[((hsi*45+39)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp128;
fp128 = fp81 * fp50;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp4;
target[((hsi*45+38)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp81 * fp41;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp5;
target[((hsi*45+37)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp85 * fp50;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp5;
target[((hsi*45+36)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp81 * fp36;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp6;
target[((hsi*45+35)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp160;
fp160 = fp88 * fp41;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp7;
target[((hsi*45+22)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp138;
fp138 = fp85 * fp36;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp7;
target[((hsi*45+33)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_y[vi] * fp16;
LIBINT2_REALTYPE fp18;
fp18 = fp15 + fp19;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_y[vi] * fp17;
LIBINT2_REALTYPE fp20;
fp20 = fp16 + fp21;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_y[vi] * fp20;
LIBINT2_REALTYPE fp22;
fp22 = fp18 + fp23;
LIBINT2_REALTYPE fp140;
fp140 = fp81 * fp22;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp8;
target[((hsi*45+32)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp18;
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_y[vi] * fp15;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*25+23)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp13;
fp13 = fp11 + fp14;
LIBINT2_REALTYPE fp142;
fp142 = fp81 * fp13;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp9;
target[((hsi*45+31)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp144;
fp144 = fp85 * fp22;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp9;
target[((hsi*45+30)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp88 * fp78;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp2;
target[((hsi*45+29)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp148;
fp148 = fp88 * fp69;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp3;
target[((hsi*45+28)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp150;
fp150 = fp92 * fp78;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp3;
target[((hsi*45+27)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp152;
fp152 = fp88 * fp64;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp4;
target[((hsi*45+26)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp154;
fp154 = fp88 * fp55;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp5;
target[((hsi*45+25)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp156;
fp156 = fp92 * fp64;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp5;
target[((hsi*45+24)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp88 * fp50;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp6;
target[((hsi*45+23)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp136;
fp136 = fp81 * fp27;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp7;
target[((hsi*45+34)*1+lsi)*1] = fp135;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 205 */
}

#ifdef __cplusplus
};
#endif
