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
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src0[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp10 * fp9;
LIBINT2_REALTYPE fp17;
fp17 = fp18 * fp0;
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * fp17;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp14 * fp9;
LIBINT2_REALTYPE fp19;
fp19 = fp20 * fp0;
LIBINT2_REALTYPE fp23;
fp23 = inteval->two_alpha0_ket[vi] * fp19;
LIBINT2_REALTYPE fp21;
fp21 = fp23 - fp22;
LIBINT2_REALTYPE fp156;
fp156 = inteval->two_alpha0_ket[vi] * fp21;
target[((hsi*15+14)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp10 * fp8;
LIBINT2_REALTYPE fp24;
fp24 = fp25 * fp1;
LIBINT2_REALTYPE fp29;
fp29 = 1.0000000000000000e+00 * fp24;
LIBINT2_REALTYPE fp27;
fp27 = fp14 * fp8;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp1;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha0_ket[vi] * fp26;
LIBINT2_REALTYPE fp28;
fp28 = fp30 - fp29;
LIBINT2_REALTYPE fp157;
fp157 = inteval->two_alpha0_ket[vi] * fp28;
target[((hsi*15+13)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp10 * fp7;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp2;
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * fp31;
LIBINT2_REALTYPE fp34;
fp34 = fp14 * fp7;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp2;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_ket[vi] * fp33;
LIBINT2_REALTYPE fp35;
fp35 = fp37 - fp36;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_ket[vi] * fp35;
target[((hsi*15+12)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp10 * fp6;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp3;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * fp38;
LIBINT2_REALTYPE fp41;
fp41 = fp14 * fp6;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp3;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_ket[vi] * fp40;
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
LIBINT2_REALTYPE fp159;
fp159 = inteval->two_alpha0_ket[vi] * fp42;
target[((hsi*15+11)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp10 * fp5;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp4;
LIBINT2_REALTYPE fp50;
fp50 = 1.0000000000000000e+00 * fp45;
LIBINT2_REALTYPE fp48;
fp48 = fp14 * fp5;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp4;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_ket[vi] * fp47;
LIBINT2_REALTYPE fp49;
fp49 = fp51 - fp50;
LIBINT2_REALTYPE fp160;
fp160 = inteval->two_alpha0_ket[vi] * fp49;
target[((hsi*15+10)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp11 * fp9;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp1;
LIBINT2_REALTYPE fp56;
fp56 = inteval->two_alpha0_ket[vi] * fp52;
LIBINT2_REALTYPE fp162;
fp162 = 1.0000000000000000e+00 * fp56;
LIBINT2_REALTYPE fp58;
fp58 = 2.0000000000000000e+00 * fp52;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp12 * fp9;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp1;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_ket[vi] * fp54;
LIBINT2_REALTYPE fp57;
fp57 = fp59 - fp58;
LIBINT2_REALTYPE fp163;
fp163 = inteval->two_alpha0_ket[vi] * fp57;
LIBINT2_REALTYPE fp161;
fp161 = fp163 - fp162;
target[((hsi*15+9)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp61;
fp61 = fp11 * fp8;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp2;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_ket[vi] * fp60;
LIBINT2_REALTYPE fp165;
fp165 = 1.0000000000000000e+00 * fp64;
LIBINT2_REALTYPE fp66;
fp66 = 2.0000000000000000e+00 * fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp12 * fp8;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp2;
LIBINT2_REALTYPE fp67;
fp67 = inteval->two_alpha0_ket[vi] * fp62;
LIBINT2_REALTYPE fp65;
fp65 = fp67 - fp66;
LIBINT2_REALTYPE fp166;
fp166 = inteval->two_alpha0_ket[vi] * fp65;
LIBINT2_REALTYPE fp164;
fp164 = fp166 - fp165;
target[((hsi*15+8)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp69;
fp69 = fp11 * fp7;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp3;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_ket[vi] * fp68;
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * fp72;
LIBINT2_REALTYPE fp74;
fp74 = 2.0000000000000000e+00 * fp68;
LIBINT2_REALTYPE fp71;
fp71 = fp12 * fp7;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp3;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_ket[vi] * fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp75 - fp74;
LIBINT2_REALTYPE fp169;
fp169 = inteval->two_alpha0_ket[vi] * fp73;
LIBINT2_REALTYPE fp167;
fp167 = fp169 - fp168;
target[((hsi*15+7)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp77;
fp77 = fp11 * fp6;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp4;
LIBINT2_REALTYPE fp80;
fp80 = inteval->two_alpha0_ket[vi] * fp76;
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * fp80;
LIBINT2_REALTYPE fp82;
fp82 = 2.0000000000000000e+00 * fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp12 * fp6;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp4;
LIBINT2_REALTYPE fp83;
fp83 = inteval->two_alpha0_ket[vi] * fp78;
LIBINT2_REALTYPE fp81;
fp81 = fp83 - fp82;
LIBINT2_REALTYPE fp172;
fp172 = inteval->two_alpha0_ket[vi] * fp81;
LIBINT2_REALTYPE fp170;
fp170 = fp172 - fp171;
target[((hsi*15+6)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp85;
fp85 = fp10 * fp9;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp2;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * fp84;
LIBINT2_REALTYPE fp87;
fp87 = fp14 * fp9;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp2;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_ket[vi] * fp86;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp174;
fp174 = 2.0000000000000000e+00 * fp90;
LIBINT2_REALTYPE fp94;
fp94 = 3.0000000000000000e+00 * fp86;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp15 * fp9;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp2;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_ket[vi] * fp88;
LIBINT2_REALTYPE fp93;
fp93 = fp95 - fp94;
LIBINT2_REALTYPE fp175;
fp175 = inteval->two_alpha0_ket[vi] * fp93;
LIBINT2_REALTYPE fp173;
fp173 = fp175 - fp174;
target[((hsi*15+5)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp97;
fp97 = fp10 * fp8;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp3;
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp14 * fp8;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp3;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_ket[vi] * fp98;
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
LIBINT2_REALTYPE fp177;
fp177 = 2.0000000000000000e+00 * fp102;
LIBINT2_REALTYPE fp106;
fp106 = 3.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp15 * fp8;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp3;
LIBINT2_REALTYPE fp107;
fp107 = inteval->two_alpha0_ket[vi] * fp100;
LIBINT2_REALTYPE fp105;
fp105 = fp107 - fp106;
LIBINT2_REALTYPE fp178;
fp178 = inteval->two_alpha0_ket[vi] * fp105;
LIBINT2_REALTYPE fp176;
fp176 = fp178 - fp177;
target[((hsi*15+4)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp109;
fp109 = fp10 * fp7;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp4;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp14 * fp7;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp4;
LIBINT2_REALTYPE fp116;
fp116 = inteval->two_alpha0_ket[vi] * fp110;
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
LIBINT2_REALTYPE fp180;
fp180 = 2.0000000000000000e+00 * fp114;
LIBINT2_REALTYPE fp118;
fp118 = 3.0000000000000000e+00 * fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp15 * fp7;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp4;
LIBINT2_REALTYPE fp119;
fp119 = inteval->two_alpha0_ket[vi] * fp112;
LIBINT2_REALTYPE fp117;
fp117 = fp119 - fp118;
LIBINT2_REALTYPE fp181;
fp181 = inteval->two_alpha0_ket[vi] * fp117;
LIBINT2_REALTYPE fp179;
fp179 = fp181 - fp180;
target[((hsi*15+3)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp121;
fp121 = fp11 * fp9;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp3;
LIBINT2_REALTYPE fp127;
fp127 = 2.0000000000000000e+00 * fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp12 * fp9;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp3;
LIBINT2_REALTYPE fp128;
fp128 = inteval->two_alpha0_ket[vi] * fp122;
LIBINT2_REALTYPE fp126;
fp126 = fp128 - fp127;
LIBINT2_REALTYPE fp183;
fp183 = 3.0000000000000000e+00 * fp126;
LIBINT2_REALTYPE fp130;
fp130 = 4.0000000000000000e+00 * fp122;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp13 * fp9;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp3;
LIBINT2_REALTYPE fp131;
fp131 = inteval->two_alpha0_ket[vi] * fp124;
LIBINT2_REALTYPE fp129;
fp129 = fp131 - fp130;
LIBINT2_REALTYPE fp184;
fp184 = inteval->two_alpha0_ket[vi] * fp129;
LIBINT2_REALTYPE fp182;
fp182 = fp184 - fp183;
target[((hsi*15+2)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp133;
fp133 = fp11 * fp8;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp4;
LIBINT2_REALTYPE fp139;
fp139 = 2.0000000000000000e+00 * fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp12 * fp8;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp4;
LIBINT2_REALTYPE fp140;
fp140 = inteval->two_alpha0_ket[vi] * fp134;
LIBINT2_REALTYPE fp138;
fp138 = fp140 - fp139;
LIBINT2_REALTYPE fp186;
fp186 = 3.0000000000000000e+00 * fp138;
LIBINT2_REALTYPE fp142;
fp142 = 4.0000000000000000e+00 * fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp13 * fp8;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp4;
LIBINT2_REALTYPE fp143;
fp143 = inteval->two_alpha0_ket[vi] * fp136;
LIBINT2_REALTYPE fp141;
fp141 = fp143 - fp142;
LIBINT2_REALTYPE fp187;
fp187 = inteval->two_alpha0_ket[vi] * fp141;
LIBINT2_REALTYPE fp185;
fp185 = fp187 - fp186;
target[((hsi*15+1)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp145;
fp145 = fp14 * fp9;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp4;
LIBINT2_REALTYPE fp151;
fp151 = 3.0000000000000000e+00 * fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp15 * fp9;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp4;
LIBINT2_REALTYPE fp152;
fp152 = inteval->two_alpha0_ket[vi] * fp146;
LIBINT2_REALTYPE fp150;
fp150 = fp152 - fp151;
LIBINT2_REALTYPE fp189;
fp189 = 4.0000000000000000e+00 * fp150;
LIBINT2_REALTYPE fp154;
fp154 = 5.0000000000000000e+00 * fp146;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*7+6)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp16 * fp9;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp4;
LIBINT2_REALTYPE fp155;
fp155 = inteval->two_alpha0_ket[vi] * fp148;
LIBINT2_REALTYPE fp153;
fp153 = fp155 - fp154;
LIBINT2_REALTYPE fp190;
fp190 = inteval->two_alpha0_ket[vi] * fp153;
LIBINT2_REALTYPE fp188;
fp188 = fp190 - fp189;
target[((hsi*15+0)*1+lsi)*1] = fp188;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 191 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
