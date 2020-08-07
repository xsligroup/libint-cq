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
void CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s001__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp17 * fp11;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp6;
LIBINT2_REALTYPE fp138;
fp138 = inteval->two_alpha0_ket[vi] * fp136;
LIBINT2_REALTYPE fp161;
fp161 = inteval->two_alpha0_bra[vi] * fp138;
target[((hsi*21+1)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp17 * fp12;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp4;
LIBINT2_REALTYPE fp134;
fp134 = 1.0000000000000000e+00 * fp129;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp17 * fp12;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp5;
LIBINT2_REALTYPE fp135;
fp135 = inteval->two_alpha0_bra[vi] * fp131;
LIBINT2_REALTYPE fp133;
fp133 = fp135 - fp134;
LIBINT2_REALTYPE fp160;
fp160 = inteval->two_alpha0_ket[vi] * fp133;
target[((hsi*21+2)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp16 * fp10;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp6;
LIBINT2_REALTYPE fp128;
fp128 = inteval->two_alpha0_ket[vi] * fp126;
LIBINT2_REALTYPE fp159;
fp159 = inteval->two_alpha0_bra[vi] * fp128;
target[((hsi*21+3)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp120;
fp120 = fp16 * fp11;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp4;
LIBINT2_REALTYPE fp124;
fp124 = 1.0000000000000000e+00 * fp119;
LIBINT2_REALTYPE fp122;
fp122 = fp16 * fp11;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp5;
LIBINT2_REALTYPE fp125;
fp125 = inteval->two_alpha0_bra[vi] * fp121;
LIBINT2_REALTYPE fp123;
fp123 = fp125 - fp124;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_ket[vi] * fp123;
target[((hsi*21+4)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp113;
fp113 = fp16 * fp12;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp6;
LIBINT2_REALTYPE fp117;
fp117 = 2.0000000000000000e+00 * fp112;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp16 * fp12;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp3;
LIBINT2_REALTYPE fp118;
fp118 = inteval->two_alpha0_bra[vi] * fp114;
LIBINT2_REALTYPE fp116;
fp116 = fp118 - fp117;
LIBINT2_REALTYPE fp157;
fp157 = inteval->two_alpha0_ket[vi] * fp116;
target[((hsi*21+5)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp15 * fp9;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp6;
LIBINT2_REALTYPE fp111;
fp111 = inteval->two_alpha0_ket[vi] * fp109;
LIBINT2_REALTYPE fp156;
fp156 = inteval->two_alpha0_bra[vi] * fp111;
target[((hsi*21+6)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp103;
fp103 = fp15 * fp10;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp4;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp15 * fp10;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp5;
LIBINT2_REALTYPE fp108;
fp108 = inteval->two_alpha0_bra[vi] * fp104;
LIBINT2_REALTYPE fp106;
fp106 = fp108 - fp107;
LIBINT2_REALTYPE fp155;
fp155 = inteval->two_alpha0_ket[vi] * fp106;
target[((hsi*21+7)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp96;
fp96 = fp15 * fp11;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp6;
LIBINT2_REALTYPE fp100;
fp100 = 2.0000000000000000e+00 * fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp15 * fp11;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp3;
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_bra[vi] * fp97;
LIBINT2_REALTYPE fp99;
fp99 = fp101 - fp100;
LIBINT2_REALTYPE fp154;
fp154 = inteval->two_alpha0_ket[vi] * fp99;
target[((hsi*21+8)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp89;
fp89 = fp15 * fp12;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp5;
LIBINT2_REALTYPE fp93;
fp93 = 3.0000000000000000e+00 * fp88;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp15 * fp12;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp2;
LIBINT2_REALTYPE fp94;
fp94 = inteval->two_alpha0_bra[vi] * fp90;
LIBINT2_REALTYPE fp92;
fp92 = fp94 - fp93;
LIBINT2_REALTYPE fp153;
fp153 = inteval->two_alpha0_ket[vi] * fp92;
target[((hsi*21+9)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp18 * fp12;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp6;
LIBINT2_REALTYPE fp141;
fp141 = inteval->two_alpha0_ket[vi] * fp139;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_bra[vi] * fp141;
target[((hsi*21+0)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp14 * fp9;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp4;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * fp78;
LIBINT2_REALTYPE fp81;
fp81 = fp14 * fp9;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp5;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_bra[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = fp84 - fp83;
LIBINT2_REALTYPE fp151;
fp151 = inteval->two_alpha0_ket[vi] * fp82;
target[((hsi*21+11)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp72;
fp72 = fp14 * fp10;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp6;
LIBINT2_REALTYPE fp76;
fp76 = 2.0000000000000000e+00 * fp71;
LIBINT2_REALTYPE fp74;
fp74 = fp14 * fp10;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp3;
LIBINT2_REALTYPE fp77;
fp77 = inteval->two_alpha0_bra[vi] * fp73;
LIBINT2_REALTYPE fp75;
fp75 = fp77 - fp76;
LIBINT2_REALTYPE fp150;
fp150 = inteval->two_alpha0_ket[vi] * fp75;
target[((hsi*21+12)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp65;
fp65 = fp14 * fp11;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp5;
LIBINT2_REALTYPE fp69;
fp69 = 3.0000000000000000e+00 * fp64;
LIBINT2_REALTYPE fp67;
fp67 = fp14 * fp11;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp2;
LIBINT2_REALTYPE fp70;
fp70 = inteval->two_alpha0_bra[vi] * fp66;
LIBINT2_REALTYPE fp68;
fp68 = fp70 - fp69;
LIBINT2_REALTYPE fp149;
fp149 = inteval->two_alpha0_ket[vi] * fp68;
target[((hsi*21+13)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp58;
fp58 = fp14 * fp12;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp3;
LIBINT2_REALTYPE fp62;
fp62 = 4.0000000000000000e+00 * fp57;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp14 * fp12;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp1;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha0_bra[vi] * fp59;
LIBINT2_REALTYPE fp61;
fp61 = fp63 - fp62;
LIBINT2_REALTYPE fp148;
fp148 = inteval->two_alpha0_ket[vi] * fp61;
target[((hsi*21+14)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp13 * fp7;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp6;
LIBINT2_REALTYPE fp56;
fp56 = inteval->two_alpha0_ket[vi] * fp54;
LIBINT2_REALTYPE fp147;
fp147 = inteval->two_alpha0_bra[vi] * fp56;
target[((hsi*21+15)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp13 * fp8;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp4;
LIBINT2_REALTYPE fp52;
fp52 = 1.0000000000000000e+00 * fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp13 * fp8;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp5;
LIBINT2_REALTYPE fp53;
fp53 = inteval->two_alpha0_bra[vi] * fp49;
LIBINT2_REALTYPE fp51;
fp51 = fp53 - fp52;
LIBINT2_REALTYPE fp146;
fp146 = inteval->two_alpha0_ket[vi] * fp51;
target[((hsi*21+16)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp41;
fp41 = fp13 * fp9;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp6;
LIBINT2_REALTYPE fp45;
fp45 = 2.0000000000000000e+00 * fp40;
LIBINT2_REALTYPE fp43;
fp43 = fp13 * fp9;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp3;
LIBINT2_REALTYPE fp46;
fp46 = inteval->two_alpha0_bra[vi] * fp42;
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
LIBINT2_REALTYPE fp145;
fp145 = inteval->two_alpha0_ket[vi] * fp44;
target[((hsi*21+17)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp34;
fp34 = fp13 * fp10;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp5;
LIBINT2_REALTYPE fp38;
fp38 = 3.0000000000000000e+00 * fp33;
LIBINT2_REALTYPE fp36;
fp36 = fp13 * fp10;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp2;
LIBINT2_REALTYPE fp39;
fp39 = inteval->two_alpha0_bra[vi] * fp35;
LIBINT2_REALTYPE fp37;
fp37 = fp39 - fp38;
LIBINT2_REALTYPE fp144;
fp144 = inteval->two_alpha0_ket[vi] * fp37;
target[((hsi*21+18)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp27;
fp27 = fp13 * fp11;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp3;
LIBINT2_REALTYPE fp31;
fp31 = 4.0000000000000000e+00 * fp26;
LIBINT2_REALTYPE fp29;
fp29 = fp13 * fp11;
LIBINT2_REALTYPE fp28;
fp28 = fp29 * fp1;
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha0_bra[vi] * fp28;
LIBINT2_REALTYPE fp30;
fp30 = fp32 - fp31;
LIBINT2_REALTYPE fp143;
fp143 = inteval->two_alpha0_ket[vi] * fp30;
target[((hsi*21+19)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp20;
fp20 = fp13 * fp12;
LIBINT2_REALTYPE fp19;
fp19 = fp20 * fp2;
LIBINT2_REALTYPE fp24;
fp24 = 5.0000000000000000e+00 * fp19;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+13)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp13 * fp12;
LIBINT2_REALTYPE fp21;
fp21 = fp22 * fp0;
LIBINT2_REALTYPE fp25;
fp25 = inteval->two_alpha0_bra[vi] * fp21;
LIBINT2_REALTYPE fp23;
fp23 = fp25 - fp24;
LIBINT2_REALTYPE fp142;
fp142 = inteval->two_alpha0_ket[vi] * fp23;
target[((hsi*21+20)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp86;
fp86 = fp14 * fp8;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp6;
LIBINT2_REALTYPE fp87;
fp87 = inteval->two_alpha0_ket[vi] * fp85;
LIBINT2_REALTYPE fp152;
fp152 = inteval->two_alpha0_bra[vi] * fp87;
target[((hsi*21+10)*1+lsi)*1] = fp152;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 163 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
