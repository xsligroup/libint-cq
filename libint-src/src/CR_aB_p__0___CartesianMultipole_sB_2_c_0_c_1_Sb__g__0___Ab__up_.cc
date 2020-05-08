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
void CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp29;
LIBINT2_REALTYPE fp30;
fp30 = fp28 + fp31;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_x[vi] * fp52;
LIBINT2_REALTYPE fp53;
fp53 = fp57 + fp54;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_x[vi] * fp47;
LIBINT2_REALTYPE fp48;
fp48 = fp52 + fp49;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_x[vi] * fp48;
LIBINT2_REALTYPE fp50;
fp50 = fp53 + fp51;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp50 * fp33;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp30;
target[((hsi*45+21)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_x[vi] * fp57;
LIBINT2_REALTYPE fp58;
fp58 = fp64 + fp59;
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_x[vi] * fp53;
LIBINT2_REALTYPE fp55;
fp55 = fp58 + fp56;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp55 * fp36;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp23;
target[((hsi*45+20)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp55 * fp35;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp26;
target[((hsi*45+19)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp55 * fp34;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp30;
target[((hsi*45+18)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_x[vi] * fp64;
LIBINT2_REALTYPE fp67;
fp67 = fp63 + fp68;
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_x[vi] * fp58;
LIBINT2_REALTYPE fp60;
fp60 = fp67 + fp61;
LIBINT2_REALTYPE fp155;
fp155 = fp60 * fp36;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp26;
target[((hsi*45+17)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp60 * fp35;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp30;
target[((hsi*45+16)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_x[vi] * fp67;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_x[vi] * fp63;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp62 + fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp65 + fp70;
LIBINT2_REALTYPE fp159;
fp159 = fp69 * fp36;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp30;
target[((hsi*45+15)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp16 + fp18;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->BO_x[vi] * fp76;
LIBINT2_REALTYPE fp77;
fp77 = fp81 + fp78;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_x[vi] * fp71;
LIBINT2_REALTYPE fp72;
fp72 = fp76 + fp73;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_x[vi] * fp72;
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
LIBINT2_REALTYPE fp161;
fp161 = fp74 * fp41;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp17;
target[((hsi*45+14)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp19 + fp21;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp74 * fp40;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp20;
target[((hsi*45+13)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp74 * fp39;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp23;
target[((hsi*45+12)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src0[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src0[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_x[vi] * fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp92 + fp97;
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_x[vi] * fp96;
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_x[vi] * fp92;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp91 + fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp94 + fp99;
LIBINT2_REALTYPE fp189;
fp189 = fp98 * fp41;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp30;
target[((hsi*45+0)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp74 * fp37;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp30;
target[((hsi*45+10)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_x[vi] * fp81;
LIBINT2_REALTYPE fp82;
fp82 = fp86 + fp83;
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_x[vi] * fp77;
LIBINT2_REALTYPE fp79;
fp79 = fp82 + fp80;
LIBINT2_REALTYPE fp171;
fp171 = fp79 * fp41;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp20;
target[((hsi*45+9)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp79 * fp40;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp23;
target[((hsi*45+8)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp79 * fp39;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp26;
target[((hsi*45+7)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp79 * fp38;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp30;
target[((hsi*45+6)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp88;
fp88 = inteval->BO_x[vi] * fp86;
LIBINT2_REALTYPE fp87;
fp87 = fp93 + fp88;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp82;
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
LIBINT2_REALTYPE fp179;
fp179 = fp84 * fp41;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp23;
target[((hsi*45+5)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp84 * fp40;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp26;
target[((hsi*45+4)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp84 * fp39;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp30;
target[((hsi*45+3)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_x[vi] * fp87;
LIBINT2_REALTYPE fp89;
fp89 = fp96 + fp90;
LIBINT2_REALTYPE fp185;
fp185 = fp89 * fp41;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp26;
target[((hsi*45+2)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp89 * fp40;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp30;
target[((hsi*45+1)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp167;
fp167 = fp74 * fp38;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp26;
target[((hsi*45+11)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_x[vi] * fp42;
LIBINT2_REALTYPE fp43;
fp43 = fp47 + fp44;
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_x[vi] * fp43;
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp101;
fp101 = fp45 * fp41;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp1;
target[((hsi*45+44)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp103;
fp103 = fp45 * fp40;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp4;
target[((hsi*45+43)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp105;
fp105 = fp45 * fp39;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp7;
target[((hsi*45+42)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp107;
fp107 = fp45 * fp38;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp10;
target[((hsi*45+41)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp14;
fp14 = fp12 + fp15;
LIBINT2_REALTYPE fp109;
fp109 = fp45 * fp37;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp14;
target[((hsi*45+40)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp50 * fp41;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp4;
target[((hsi*45+39)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp50 * fp40;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp7;
target[((hsi*45+38)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp50 * fp39;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp10;
target[((hsi*45+37)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp50 * fp38;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp14;
target[((hsi*45+36)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp55 * fp41;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp7;
target[((hsi*45+35)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp145;
fp145 = fp50 * fp34;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp26;
target[((hsi*45+22)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp123;
fp123 = fp55 * fp39;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp14;
target[((hsi*45+33)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp60 * fp41;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp10;
target[((hsi*45+32)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp60 * fp40;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp14;
target[((hsi*45+31)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp69 * fp41;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp14;
target[((hsi*45+30)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp45 * fp36;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp17;
target[((hsi*45+29)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp45 * fp35;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp20;
target[((hsi*45+28)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp45 * fp34;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp23;
target[((hsi*45+27)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp45 * fp33;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp26;
target[((hsi*45+26)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp45 * fp32;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp30;
target[((hsi*45+25)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp50 * fp36;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp20;
target[((hsi*45+24)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp50 * fp35;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp23;
target[((hsi*45+23)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp121;
fp121 = fp55 * fp40;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp10;
target[((hsi*45+34)*1+lsi)*1] = fp120;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 190 */
}

#ifdef __cplusplus
};
#endif
