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
void CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp54;
fp54 = fp52 + fp55;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_x[vi] * fp81;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp80 + fp83;
LIBINT2_REALTYPE fp152;
fp152 = fp82 * fp54;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp26;
target[((hsi*45+21)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_x[vi] * fp77;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp47;
fp47 = fp45 + fp48;
LIBINT2_REALTYPE fp154;
fp154 = fp78 * fp47;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp29;
target[((hsi*45+20)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_z[vi] * fp32;
LIBINT2_REALTYPE fp33;
fp33 = fp31 + fp34;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp156;
fp156 = fp78 * fp43;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp33;
target[((hsi*45+19)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp82 * fp47;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp33;
target[((hsi*45+18)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_y[vi] * fp67;
LIBINT2_REALTYPE fp68;
fp68 = fp66 + fp69;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_x[vi] * fp84;
LIBINT2_REALTYPE fp85;
fp85 = fp88 + fp86;
LIBINT2_REALTYPE fp160;
fp160 = fp85 * fp68;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp15;
target[((hsi*45+17)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp63 + fp65;
LIBINT2_REALTYPE fp162;
fp162 = fp85 * fp64;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp19;
target[((hsi*45+16)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_x[vi] * fp88;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp87 + fp90;
LIBINT2_REALTYPE fp164;
fp164 = fp89 * fp68;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp19;
target[((hsi*45+15)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp61;
fp61 = fp59 + fp62;
LIBINT2_REALTYPE fp166;
fp166 = fp85 * fp61;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp22;
target[((hsi*45+14)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_y[vi] * fp59;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp168;
fp168 = fp85 * fp57;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp26;
target[((hsi*45+13)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp170;
fp170 = fp89 * fp61;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp26;
target[((hsi*45+12)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_x[vi] * fp102;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp101 + fp104;
LIBINT2_REALTYPE fp194;
fp194 = fp103 * fp68;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp33;
target[((hsi*45+0)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp49 + fp51;
LIBINT2_REALTYPE fp174;
fp174 = fp85 * fp50;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp33;
target[((hsi*45+10)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp89 * fp54;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp33;
target[((hsi*45+9)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_x[vi] * fp91;
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
LIBINT2_REALTYPE fp178;
fp178 = fp92 * fp68;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp22;
target[((hsi*45+8)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = fp92 * fp64;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp26;
target[((hsi*45+7)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_x[vi] * fp95;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp94 + fp97;
LIBINT2_REALTYPE fp182;
fp182 = fp96 * fp68;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp26;
target[((hsi*45+6)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp184;
fp184 = fp92 * fp61;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp29;
target[((hsi*45+5)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp186;
fp186 = fp92 * fp57;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp33;
target[((hsi*45+4)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp188;
fp188 = fp96 * fp61;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp33;
target[((hsi*45+3)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src0[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_x[vi] * fp98;
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
LIBINT2_REALTYPE fp190;
fp190 = fp99 * fp68;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp29;
target[((hsi*45+2)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp192;
fp192 = fp99 * fp64;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp33;
target[((hsi*45+1)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp172;
fp172 = fp85 * fp54;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp29;
target[((hsi*45+11)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_x[vi] * fp70;
LIBINT2_REALTYPE fp71;
fp71 = fp74 + fp72;
LIBINT2_REALTYPE fp106;
fp106 = fp71 * fp68;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp1;
target[((hsi*45+44)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp108;
fp108 = fp71 * fp64;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp5;
target[((hsi*45+43)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_x[vi] * fp74;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp73 + fp76;
LIBINT2_REALTYPE fp110;
fp110 = fp75 * fp68;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp5;
target[((hsi*45+42)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp112;
fp112 = fp71 * fp61;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp8;
target[((hsi*45+41)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp12;
fp12 = fp10 + fp13;
LIBINT2_REALTYPE fp114;
fp114 = fp71 * fp57;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp12;
target[((hsi*45+40)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp116;
fp116 = fp75 * fp61;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp12;
target[((hsi*45+39)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp118;
fp118 = fp71 * fp54;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp15;
target[((hsi*45+38)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp120;
fp120 = fp71 * fp50;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp19;
target[((hsi*45+37)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp122;
fp122 = fp75 * fp54;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp19;
target[((hsi*45+36)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp124;
fp124 = fp71 * fp47;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp22;
target[((hsi*45+35)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp150;
fp150 = fp78 * fp50;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp26;
target[((hsi*45+22)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp128;
fp128 = fp75 * fp47;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp26;
target[((hsi*45+33)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp39;
LIBINT2_REALTYPE fp40;
fp40 = fp38 + fp41;
LIBINT2_REALTYPE fp130;
fp130 = fp71 * fp40;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp29;
target[((hsi*45+32)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp38;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp132;
fp132 = fp71 * fp36;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp33;
target[((hsi*45+31)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp75 * fp40;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp33;
target[((hsi*45+30)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp136;
fp136 = fp78 * fp68;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp8;
target[((hsi*45+29)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp78 * fp64;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp12;
target[((hsi*45+28)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp140;
fp140 = fp82 * fp68;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp12;
target[((hsi*45+27)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp78 * fp61;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp15;
target[((hsi*45+26)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp144;
fp144 = fp78 * fp57;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp19;
target[((hsi*45+25)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp82 * fp61;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp19;
target[((hsi*45+24)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp148;
fp148 = fp78 * fp54;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp22;
target[((hsi*45+23)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp126;
fp126 = fp71 * fp43;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp26;
target[((hsi*45+34)*1+lsi)*1] = fp125;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 195 */
}

#ifdef __cplusplus
};
#endif
