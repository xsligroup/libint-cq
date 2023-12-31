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
void CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_2_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp52;
fp52 = fp49 + fp53;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp50 + fp55;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp69 * fp59;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp56;
target[((hsi*45+21)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp44;
LIBINT2_REALTYPE fp40;
fp40 = fp39 + fp41;
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp49;
LIBINT2_REALTYPE fp45;
fp45 = fp44 + fp46;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp45;
LIBINT2_REALTYPE fp42;
fp42 = fp40 + fp43;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp70 * fp62;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp42;
target[((hsi*45+20)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_z[vi] * fp52;
LIBINT2_REALTYPE fp47;
fp47 = fp45 + fp48;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp70 * fp61;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp47;
target[((hsi*45+19)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp70 * fp60;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp56;
target[((hsi*45+18)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp71 * fp62;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp47;
target[((hsi*45+17)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp71 * fp61;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp56;
target[((hsi*45+16)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp72 * fp62;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp56;
target[((hsi*45+15)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_z[vi] * fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp34 + fp36;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp29 + fp31;
LIBINT2_REALTYPE fp32;
fp32 = fp30 + fp33;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp73 * fp67;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp32;
target[((hsi*45+14)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp37;
fp37 = fp35 + fp38;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp73 * fp66;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp37;
target[((hsi*45+13)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp73 * fp65;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp42;
target[((hsi*45+12)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp77 * fp67;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp56;
target[((hsi*45+0)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp73 * fp63;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp56;
target[((hsi*45+10)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp74 * fp67;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp37;
target[((hsi*45+9)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp74 * fp66;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp42;
target[((hsi*45+8)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp74 * fp65;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp47;
target[((hsi*45+7)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp74 * fp64;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp56;
target[((hsi*45+6)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp75 * fp67;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp42;
target[((hsi*45+5)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp75 * fp66;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp47;
target[((hsi*45+4)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp75 * fp65;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp56;
target[((hsi*45+3)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp76 * fp67;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp47;
target[((hsi*45+2)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp76 * fp66;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp56;
target[((hsi*45+1)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp145;
fp145 = fp73 * fp64;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp47;
target[((hsi*45+11)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp6;
fp6 = fp5 + fp7;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+13)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp68 * fp67;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp3;
target[((hsi*45+44)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp8;
fp8 = fp6 + fp9;
LIBINT2_REALTYPE fp81;
fp81 = fp68 * fp66;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp8;
target[((hsi*45+43)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp16;
fp16 = fp15 + fp17;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp13;
fp13 = fp11 + fp14;
LIBINT2_REALTYPE fp83;
fp83 = fp68 * fp65;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp13;
target[((hsi*45+42)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp23;
fp23 = fp20 + fp24;
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp18;
fp18 = fp16 + fp19;
LIBINT2_REALTYPE fp85;
fp85 = fp68 * fp64;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp18;
target[((hsi*45+41)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp25;
fp25 = fp21 + fp26;
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp27;
fp27 = fp23 + fp28;
LIBINT2_REALTYPE fp87;
fp87 = fp68 * fp63;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp27;
target[((hsi*45+40)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp69 * fp67;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp8;
target[((hsi*45+39)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp69 * fp66;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp13;
target[((hsi*45+38)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = fp69 * fp65;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp18;
target[((hsi*45+37)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp69 * fp64;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp27;
target[((hsi*45+36)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp70 * fp67;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp13;
target[((hsi*45+35)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp123;
fp123 = fp69 * fp60;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp47;
target[((hsi*45+22)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp101;
fp101 = fp70 * fp65;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp27;
target[((hsi*45+33)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp71 * fp67;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp18;
target[((hsi*45+32)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp71 * fp66;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp27;
target[((hsi*45+31)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp72 * fp67;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp27;
target[((hsi*45+30)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp68 * fp62;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp32;
target[((hsi*45+29)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp68 * fp61;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp37;
target[((hsi*45+28)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp68 * fp60;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp42;
target[((hsi*45+27)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp68 * fp59;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp47;
target[((hsi*45+26)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp68 * fp58;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp56;
target[((hsi*45+25)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp69 * fp62;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp37;
target[((hsi*45+24)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp69 * fp61;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp42;
target[((hsi*45+23)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp99;
fp99 = fp70 * fp66;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp18;
target[((hsi*45+34)*1+lsi)*1] = fp98;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 168 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
