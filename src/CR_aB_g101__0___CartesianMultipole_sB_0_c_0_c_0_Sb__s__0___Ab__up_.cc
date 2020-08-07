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
void CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp12 * fp10;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp2;
LIBINT2_REALTYPE fp20;
fp20 = 4.0000000000000000e+00 * fp89;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp12 * fp10;
LIBINT2_REALTYPE fp17;
fp17 = fp18 * fp0;
LIBINT2_REALTYPE fp21;
fp21 = inteval->two_alpha0_bra[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = fp21 - fp20;
LIBINT2_REALTYPE fp148;
fp148 = inteval->two_alpha0_bra[vi] * fp19;
target[((hsi*15+14)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp12 * fp9;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp4;
LIBINT2_REALTYPE fp25;
fp25 = 3.0000000000000000e+00 * fp103;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp12 * fp9;
LIBINT2_REALTYPE fp22;
fp22 = fp23 * fp1;
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_bra[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
LIBINT2_REALTYPE fp149;
fp149 = inteval->two_alpha0_bra[vi] * fp24;
target[((hsi*15+13)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp12 * fp8;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp5;
LIBINT2_REALTYPE fp30;
fp30 = 2.0000000000000000e+00 * fp113;
LIBINT2_REALTYPE fp28;
fp28 = fp12 * fp8;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp2;
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_bra[vi] * fp27;
LIBINT2_REALTYPE fp29;
fp29 = fp31 - fp30;
LIBINT2_REALTYPE fp150;
fp150 = inteval->two_alpha0_bra[vi] * fp29;
target[((hsi*15+12)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp12 * fp7;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp3;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * fp32;
LIBINT2_REALTYPE fp35;
fp35 = fp12 * fp7;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp4;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_bra[vi] * fp34;
LIBINT2_REALTYPE fp36;
fp36 = fp38 - fp37;
LIBINT2_REALTYPE fp151;
fp151 = inteval->two_alpha0_bra[vi] * fp36;
target[((hsi*15+11)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp12 * fp6;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp5;
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_bra[vi] * fp39;
LIBINT2_REALTYPE fp152;
fp152 = inteval->two_alpha0_bra[vi] * fp41;
target[((hsi*15+10)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp11 * fp10;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp4;
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * fp42;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp13 * fp10;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp4;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_bra[vi] * fp124;
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
LIBINT2_REALTYPE fp154;
fp154 = 3.0000000000000000e+00 * fp48;
LIBINT2_REALTYPE fp45;
fp45 = fp11 * fp10;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp1;
LIBINT2_REALTYPE fp52;
fp52 = 1.0000000000000000e+00 * fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp13 * fp10;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp1;
LIBINT2_REALTYPE fp53;
fp53 = inteval->two_alpha0_bra[vi] * fp46;
LIBINT2_REALTYPE fp51;
fp51 = fp53 - fp52;
LIBINT2_REALTYPE fp155;
fp155 = inteval->two_alpha0_bra[vi] * fp51;
LIBINT2_REALTYPE fp153;
fp153 = fp155 - fp154;
target[((hsi*15+9)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp55;
fp55 = fp11 * fp9;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp5;
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * fp54;
LIBINT2_REALTYPE fp135;
fp135 = fp13 * fp9;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp5;
LIBINT2_REALTYPE fp62;
fp62 = inteval->two_alpha0_bra[vi] * fp134;
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
LIBINT2_REALTYPE fp157;
fp157 = 2.0000000000000000e+00 * fp60;
LIBINT2_REALTYPE fp57;
fp57 = fp11 * fp9;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp2;
LIBINT2_REALTYPE fp64;
fp64 = 1.0000000000000000e+00 * fp56;
LIBINT2_REALTYPE fp59;
fp59 = fp13 * fp9;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp2;
LIBINT2_REALTYPE fp65;
fp65 = inteval->two_alpha0_bra[vi] * fp58;
LIBINT2_REALTYPE fp63;
fp63 = fp65 - fp64;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_bra[vi] * fp63;
LIBINT2_REALTYPE fp156;
fp156 = fp158 - fp157;
target[((hsi*15+8)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp67;
fp67 = fp11 * fp8;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp3;
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp13 * fp8;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp3;
LIBINT2_REALTYPE fp76;
fp76 = inteval->two_alpha0_bra[vi] * fp68;
LIBINT2_REALTYPE fp74;
fp74 = fp76 - fp75;
LIBINT2_REALTYPE fp160;
fp160 = 1.0000000000000000e+00 * fp74;
LIBINT2_REALTYPE fp71;
fp71 = fp11 * fp8;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp4;
LIBINT2_REALTYPE fp78;
fp78 = 1.0000000000000000e+00 * fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp13 * fp8;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp4;
LIBINT2_REALTYPE fp79;
fp79 = inteval->two_alpha0_bra[vi] * fp72;
LIBINT2_REALTYPE fp77;
fp77 = fp79 - fp78;
LIBINT2_REALTYPE fp161;
fp161 = inteval->two_alpha0_bra[vi] * fp77;
LIBINT2_REALTYPE fp159;
fp159 = fp161 - fp160;
target[((hsi*15+7)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp81;
fp81 = fp11 * fp7;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp5;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp13 * fp7;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp5;
LIBINT2_REALTYPE fp86;
fp86 = inteval->two_alpha0_bra[vi] * fp82;
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_bra[vi] * fp84;
target[((hsi*15+6)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp88;
fp88 = fp12 * fp10;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp5;
LIBINT2_REALTYPE fp94;
fp94 = 2.0000000000000000e+00 * fp87;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp15 * fp10;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp5;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_bra[vi] * fp141;
LIBINT2_REALTYPE fp93;
fp93 = fp95 - fp94;
LIBINT2_REALTYPE fp164;
fp164 = 2.0000000000000000e+00 * fp93;
LIBINT2_REALTYPE fp97;
fp97 = 2.0000000000000000e+00 * fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp15 * fp10;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp2;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_bra[vi] * fp91;
LIBINT2_REALTYPE fp96;
fp96 = fp98 - fp97;
LIBINT2_REALTYPE fp165;
fp165 = inteval->two_alpha0_bra[vi] * fp96;
LIBINT2_REALTYPE fp163;
fp163 = fp165 - fp164;
target[((hsi*15+5)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp100;
fp100 = fp12 * fp9;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp3;
LIBINT2_REALTYPE fp108;
fp108 = 2.0000000000000000e+00 * fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp15 * fp9;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp3;
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha0_bra[vi] * fp101;
LIBINT2_REALTYPE fp107;
fp107 = fp109 - fp108;
LIBINT2_REALTYPE fp167;
fp167 = 1.0000000000000000e+00 * fp107;
LIBINT2_REALTYPE fp111;
fp111 = 2.0000000000000000e+00 * fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp15 * fp9;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp4;
LIBINT2_REALTYPE fp112;
fp112 = inteval->two_alpha0_bra[vi] * fp105;
LIBINT2_REALTYPE fp110;
fp110 = fp112 - fp111;
LIBINT2_REALTYPE fp168;
fp168 = inteval->two_alpha0_bra[vi] * fp110;
LIBINT2_REALTYPE fp166;
fp166 = fp168 - fp167;
target[((hsi*15+4)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp118;
fp118 = 2.0000000000000000e+00 * fp113;
LIBINT2_REALTYPE fp116;
fp116 = fp15 * fp8;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp5;
LIBINT2_REALTYPE fp119;
fp119 = inteval->two_alpha0_bra[vi] * fp115;
LIBINT2_REALTYPE fp117;
fp117 = fp119 - fp118;
LIBINT2_REALTYPE fp169;
fp169 = inteval->two_alpha0_bra[vi] * fp117;
target[((hsi*15+3)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp121;
fp121 = fp13 * fp10;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp3;
LIBINT2_REALTYPE fp129;
fp129 = 3.0000000000000000e+00 * fp120;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp14 * fp10;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp3;
LIBINT2_REALTYPE fp130;
fp130 = inteval->two_alpha0_bra[vi] * fp122;
LIBINT2_REALTYPE fp128;
fp128 = fp130 - fp129;
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * fp128;
LIBINT2_REALTYPE fp132;
fp132 = 3.0000000000000000e+00 * fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp14 * fp10;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp4;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha0_bra[vi] * fp126;
LIBINT2_REALTYPE fp131;
fp131 = fp133 - fp132;
LIBINT2_REALTYPE fp172;
fp172 = inteval->two_alpha0_bra[vi] * fp131;
LIBINT2_REALTYPE fp170;
fp170 = fp172 - fp171;
target[((hsi*15+2)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp139;
fp139 = 3.0000000000000000e+00 * fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp14 * fp9;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp5;
LIBINT2_REALTYPE fp140;
fp140 = inteval->two_alpha0_bra[vi] * fp136;
LIBINT2_REALTYPE fp138;
fp138 = fp140 - fp139;
LIBINT2_REALTYPE fp173;
fp173 = inteval->two_alpha0_bra[vi] * fp138;
target[((hsi*15+1)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp146;
fp146 = 4.0000000000000000e+00 * fp141;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp16 * fp10;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp5;
LIBINT2_REALTYPE fp147;
fp147 = inteval->two_alpha0_bra[vi] * fp143;
LIBINT2_REALTYPE fp145;
fp145 = fp147 - fp146;
LIBINT2_REALTYPE fp174;
fp174 = inteval->two_alpha0_bra[vi] * fp145;
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