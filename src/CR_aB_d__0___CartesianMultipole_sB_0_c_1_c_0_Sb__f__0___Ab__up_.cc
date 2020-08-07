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
void CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp48;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp55 * fp49;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp4;
target[((hsi*60+29)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp45;
fp45 = fp44 + fp46;
LIBINT2_REALTYPE fp126;
fp126 = fp55 * fp45;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp5;
target[((hsi*60+28)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp42;
fp42 = fp41 + fp43;
LIBINT2_REALTYPE fp128;
fp128 = fp55 * fp42;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp6;
target[((hsi*60+27)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp41;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp38 + fp40;
LIBINT2_REALTYPE fp130;
fp130 = fp55 * fp39;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp7;
target[((hsi*60+26)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp56 * fp49;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp5;
target[((hsi*60+25)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp56 * fp45;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp6;
target[((hsi*60+24)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp136;
fp136 = fp56 * fp42;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp7;
target[((hsi*60+23)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp57 * fp49;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp6;
target[((hsi*60+22)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp140;
fp140 = fp57 * fp45;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp7;
target[((hsi*60+21)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp58 * fp49;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp7;
target[((hsi*60+20)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp36;
fp36 = fp34 + fp37;
LIBINT2_REALTYPE fp144;
fp144 = fp55 * fp36;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp8;
target[((hsi*60+19)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp31 + fp33;
LIBINT2_REALTYPE fp146;
fp146 = fp55 * fp32;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp9;
target[((hsi*60+18)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_y[vi] * fp31;
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp148;
fp148 = fp55 * fp29;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp10;
target[((hsi*60+17)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp150;
fp150 = fp55 * fp26;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp11;
target[((hsi*60+16)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp62 * fp49;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp11;
target[((hsi*60+0)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp154;
fp154 = fp56 * fp32;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp10;
target[((hsi*60+14)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp156;
fp156 = fp56 * fp29;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp11;
target[((hsi*60+13)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp57 * fp36;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp10;
target[((hsi*60+12)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp160;
fp160 = fp57 * fp32;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp11;
target[((hsi*60+11)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp162;
fp162 = fp58 * fp36;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp11;
target[((hsi*60+10)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp59 * fp49;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp8;
target[((hsi*60+9)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp166;
fp166 = fp59 * fp45;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp9;
target[((hsi*60+8)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp168;
fp168 = fp59 * fp42;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp10;
target[((hsi*60+7)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp170;
fp170 = fp59 * fp39;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp11;
target[((hsi*60+6)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp60 * fp49;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp9;
target[((hsi*60+5)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp174;
fp174 = fp60 * fp45;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp10;
target[((hsi*60+4)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp60 * fp42;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp11;
target[((hsi*60+3)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp61 * fp49;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp10;
target[((hsi*60+2)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = fp61 * fp45;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp11;
target[((hsi*60+1)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp152;
fp152 = fp56 * fp36;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp9;
target[((hsi*60+15)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp51 * fp49;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp0;
target[((hsi*60+59)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp51 * fp45;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp1;
target[((hsi*60+58)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp51 * fp42;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp2;
target[((hsi*60+57)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp51 * fp39;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp3;
target[((hsi*60+56)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp52 * fp49;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp1;
target[((hsi*60+55)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp74;
fp74 = fp52 * fp45;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp2;
target[((hsi*60+54)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp76;
fp76 = fp52 * fp42;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp3;
target[((hsi*60+53)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp53 * fp49;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp2;
target[((hsi*60+52)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp53 * fp45;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp3;
target[((hsi*60+51)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp54 * fp49;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp3;
target[((hsi*60+50)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp84;
fp84 = fp51 * fp36;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp4;
target[((hsi*60+49)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp51 * fp32;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp5;
target[((hsi*60+48)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp51 * fp29;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp6;
target[((hsi*60+47)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp90;
fp90 = fp51 * fp26;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp7;
target[((hsi*60+46)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp22;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp122;
fp122 = fp54 * fp23;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp11;
target[((hsi*60+30)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp94;
fp94 = fp52 * fp32;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp6;
target[((hsi*60+44)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp52 * fp29;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp7;
target[((hsi*60+43)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp53 * fp36;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp6;
target[((hsi*60+42)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp100;
fp100 = fp53 * fp32;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp7;
target[((hsi*60+41)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp54 * fp36;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp7;
target[((hsi*60+40)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp51 * fp23;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp8;
target[((hsi*60+39)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_y[vi] * fp21;
LIBINT2_REALTYPE fp19;
fp19 = fp18 + fp20;
LIBINT2_REALTYPE fp106;
fp106 = fp51 * fp19;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp9;
target[((hsi*60+38)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_y[vi] * fp18;
LIBINT2_REALTYPE fp16;
fp16 = fp15 + fp17;
LIBINT2_REALTYPE fp108;
fp108 = fp51 * fp16;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp10;
target[((hsi*60+37)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp15;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp110;
fp110 = fp51 * fp13;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp11;
target[((hsi*60+36)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp112;
fp112 = fp52 * fp23;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp9;
target[((hsi*60+35)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp114;
fp114 = fp52 * fp19;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp10;
target[((hsi*60+34)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp116;
fp116 = fp52 * fp16;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp11;
target[((hsi*60+33)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp118;
fp118 = fp53 * fp23;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp10;
target[((hsi*60+32)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp120;
fp120 = fp53 * fp19;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp11;
target[((hsi*60+31)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp92;
fp92 = fp52 * fp36;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp5;
target[((hsi*60+45)*1+lsi)*1] = fp91;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 183 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif