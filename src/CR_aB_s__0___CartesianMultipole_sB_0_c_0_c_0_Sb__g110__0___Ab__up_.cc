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
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp12 * fp10;
LIBINT2_REALTYPE fp17;
fp17 = fp18 * fp0;
LIBINT2_REALTYPE fp19;
fp19 = inteval->two_alpha0_ket[vi] * fp17;
LIBINT2_REALTYPE fp148;
fp148 = inteval->two_alpha0_ket[vi] * fp19;
target[((hsi*15+14)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp12 * fp8;
LIBINT2_REALTYPE fp20;
fp20 = fp21 * fp1;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * fp20;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp12 * fp9;
LIBINT2_REALTYPE fp22;
fp22 = fp23 * fp1;
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_ket[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
LIBINT2_REALTYPE fp149;
fp149 = inteval->two_alpha0_ket[vi] * fp24;
target[((hsi*15+13)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp12 * fp10;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp2;
LIBINT2_REALTYPE fp30;
fp30 = 2.0000000000000000e+00 * fp87;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp12 * fp7;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp2;
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_ket[vi] * fp27;
LIBINT2_REALTYPE fp29;
fp29 = fp31 - fp30;
LIBINT2_REALTYPE fp150;
fp150 = inteval->two_alpha0_ket[vi] * fp29;
target[((hsi*15+12)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp12 * fp9;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp3;
LIBINT2_REALTYPE fp35;
fp35 = 3.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp12 * fp6;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp3;
LIBINT2_REALTYPE fp36;
fp36 = inteval->two_alpha0_ket[vi] * fp32;
LIBINT2_REALTYPE fp34;
fp34 = fp36 - fp35;
LIBINT2_REALTYPE fp151;
fp151 = inteval->two_alpha0_ket[vi] * fp34;
target[((hsi*15+11)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp12 * fp7;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp4;
LIBINT2_REALTYPE fp40;
fp40 = 4.0000000000000000e+00 * fp110;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp12 * fp5;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp4;
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_ket[vi] * fp37;
LIBINT2_REALTYPE fp39;
fp39 = fp41 - fp40;
LIBINT2_REALTYPE fp152;
fp152 = inteval->two_alpha0_ket[vi] * fp39;
target[((hsi*15+10)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp11 * fp10;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp1;
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * fp42;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp13 * fp10;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp1;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha0_ket[vi] * fp44;
LIBINT2_REALTYPE fp46;
fp46 = fp48 - fp47;
LIBINT2_REALTYPE fp153;
fp153 = inteval->two_alpha0_ket[vi] * fp46;
target[((hsi*15+9)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp50;
fp50 = fp11 * fp8;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp2;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * fp49;
LIBINT2_REALTYPE fp52;
fp52 = fp13 * fp8;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp2;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_ket[vi] * fp51;
LIBINT2_REALTYPE fp57;
fp57 = fp59 - fp58;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * fp57;
LIBINT2_REALTYPE fp54;
fp54 = fp11 * fp9;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp2;
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp13 * fp9;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp2;
LIBINT2_REALTYPE fp62;
fp62 = inteval->two_alpha0_ket[vi] * fp55;
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
LIBINT2_REALTYPE fp156;
fp156 = inteval->two_alpha0_ket[vi] * fp60;
LIBINT2_REALTYPE fp154;
fp154 = fp156 - fp155;
target[((hsi*15+8)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp64;
fp64 = fp11 * fp10;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp3;
LIBINT2_REALTYPE fp70;
fp70 = 1.0000000000000000e+00 * fp63;
LIBINT2_REALTYPE fp121;
fp121 = fp13 * fp10;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp3;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_ket[vi] * fp120;
LIBINT2_REALTYPE fp69;
fp69 = fp71 - fp70;
LIBINT2_REALTYPE fp158;
fp158 = 2.0000000000000000e+00 * fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp11 * fp7;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp3;
LIBINT2_REALTYPE fp73;
fp73 = 1.0000000000000000e+00 * fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp13 * fp7;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp3;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha0_ket[vi] * fp67;
LIBINT2_REALTYPE fp72;
fp72 = fp74 - fp73;
LIBINT2_REALTYPE fp159;
fp159 = inteval->two_alpha0_ket[vi] * fp72;
LIBINT2_REALTYPE fp157;
fp157 = fp159 - fp158;
target[((hsi*15+7)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp76;
fp76 = fp11 * fp9;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp4;
LIBINT2_REALTYPE fp82;
fp82 = 1.0000000000000000e+00 * fp75;
LIBINT2_REALTYPE fp132;
fp132 = fp13 * fp9;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp4;
LIBINT2_REALTYPE fp83;
fp83 = inteval->two_alpha0_ket[vi] * fp131;
LIBINT2_REALTYPE fp81;
fp81 = fp83 - fp82;
LIBINT2_REALTYPE fp161;
fp161 = 3.0000000000000000e+00 * fp81;
LIBINT2_REALTYPE fp78;
fp78 = fp11 * fp6;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp4;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp13 * fp6;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp4;
LIBINT2_REALTYPE fp86;
fp86 = inteval->two_alpha0_ket[vi] * fp79;
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_ket[vi] * fp84;
LIBINT2_REALTYPE fp160;
fp160 = fp162 - fp161;
target[((hsi*15+6)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp92;
fp92 = 2.0000000000000000e+00 * fp87;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp15 * fp10;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp2;
LIBINT2_REALTYPE fp93;
fp93 = inteval->two_alpha0_ket[vi] * fp89;
LIBINT2_REALTYPE fp91;
fp91 = fp93 - fp92;
LIBINT2_REALTYPE fp163;
fp163 = inteval->two_alpha0_ket[vi] * fp91;
target[((hsi*15+5)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp95;
fp95 = fp12 * fp8;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp3;
LIBINT2_REALTYPE fp103;
fp103 = 2.0000000000000000e+00 * fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp15 * fp8;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp3;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_ket[vi] * fp96;
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
LIBINT2_REALTYPE fp165;
fp165 = 1.0000000000000000e+00 * fp102;
LIBINT2_REALTYPE fp106;
fp106 = 2.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp15 * fp9;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp3;
LIBINT2_REALTYPE fp107;
fp107 = inteval->two_alpha0_ket[vi] * fp100;
LIBINT2_REALTYPE fp105;
fp105 = fp107 - fp106;
LIBINT2_REALTYPE fp166;
fp166 = inteval->two_alpha0_ket[vi] * fp105;
LIBINT2_REALTYPE fp164;
fp164 = fp166 - fp165;
target[((hsi*15+4)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp109;
fp109 = fp12 * fp10;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp4;
LIBINT2_REALTYPE fp115;
fp115 = 2.0000000000000000e+00 * fp108;
LIBINT2_REALTYPE fp142;
fp142 = fp15 * fp10;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp4;
LIBINT2_REALTYPE fp116;
fp116 = inteval->two_alpha0_ket[vi] * fp141;
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
LIBINT2_REALTYPE fp168;
fp168 = 2.0000000000000000e+00 * fp114;
LIBINT2_REALTYPE fp118;
fp118 = 2.0000000000000000e+00 * fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp15 * fp7;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp4;
LIBINT2_REALTYPE fp119;
fp119 = inteval->two_alpha0_ket[vi] * fp112;
LIBINT2_REALTYPE fp117;
fp117 = fp119 - fp118;
LIBINT2_REALTYPE fp169;
fp169 = inteval->two_alpha0_ket[vi] * fp117;
LIBINT2_REALTYPE fp167;
fp167 = fp169 - fp168;
target[((hsi*15+3)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp125;
fp125 = 3.0000000000000000e+00 * fp120;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp14 * fp10;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp3;
LIBINT2_REALTYPE fp126;
fp126 = inteval->two_alpha0_ket[vi] * fp122;
LIBINT2_REALTYPE fp124;
fp124 = fp126 - fp125;
LIBINT2_REALTYPE fp170;
fp170 = inteval->two_alpha0_ket[vi] * fp124;
target[((hsi*15+2)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp128;
fp128 = fp13 * fp8;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp4;
LIBINT2_REALTYPE fp136;
fp136 = 3.0000000000000000e+00 * fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp14 * fp8;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp4;
LIBINT2_REALTYPE fp137;
fp137 = inteval->two_alpha0_ket[vi] * fp129;
LIBINT2_REALTYPE fp135;
fp135 = fp137 - fp136;
LIBINT2_REALTYPE fp172;
fp172 = 1.0000000000000000e+00 * fp135;
LIBINT2_REALTYPE fp139;
fp139 = 3.0000000000000000e+00 * fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp14 * fp9;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp4;
LIBINT2_REALTYPE fp140;
fp140 = inteval->two_alpha0_ket[vi] * fp133;
LIBINT2_REALTYPE fp138;
fp138 = fp140 - fp139;
LIBINT2_REALTYPE fp173;
fp173 = inteval->two_alpha0_ket[vi] * fp138;
LIBINT2_REALTYPE fp171;
fp171 = fp173 - fp172;
target[((hsi*15+1)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp146;
fp146 = 4.0000000000000000e+00 * fp141;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp16 * fp10;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp4;
LIBINT2_REALTYPE fp147;
fp147 = inteval->two_alpha0_ket[vi] * fp143;
LIBINT2_REALTYPE fp145;
fp145 = fp147 - fp146;
LIBINT2_REALTYPE fp174;
fp174 = inteval->two_alpha0_ket[vi] * fp145;
target[((hsi*15+0)*1+lsi)*1] = fp174;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 175 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
