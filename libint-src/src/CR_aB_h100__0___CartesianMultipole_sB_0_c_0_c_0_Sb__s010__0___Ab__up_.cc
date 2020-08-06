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
void CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp15 * fp10;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp5;
LIBINT2_REALTYPE fp133;
fp133 = 4.0000000000000000e+00 * fp128;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp16 * fp10;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp5;
LIBINT2_REALTYPE fp134;
fp134 = inteval->two_alpha0_bra[vi] * fp130;
LIBINT2_REALTYPE fp132;
fp132 = fp134 - fp133;
LIBINT2_REALTYPE fp161;
fp161 = inteval->two_alpha0_ket[vi] * fp132;
target[((hsi*21+1)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp15 * fp11;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp4;
LIBINT2_REALTYPE fp126;
fp126 = 4.0000000000000000e+00 * fp121;
LIBINT2_REALTYPE fp124;
fp124 = fp16 * fp11;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp4;
LIBINT2_REALTYPE fp127;
fp127 = inteval->two_alpha0_bra[vi] * fp123;
LIBINT2_REALTYPE fp125;
fp125 = fp127 - fp126;
LIBINT2_REALTYPE fp160;
fp160 = inteval->two_alpha0_ket[vi] * fp125;
target[((hsi*21+2)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp14 * fp9;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp5;
LIBINT2_REALTYPE fp119;
fp119 = 3.0000000000000000e+00 * fp114;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp17 * fp9;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp5;
LIBINT2_REALTYPE fp120;
fp120 = inteval->two_alpha0_bra[vi] * fp116;
LIBINT2_REALTYPE fp118;
fp118 = fp120 - fp119;
LIBINT2_REALTYPE fp159;
fp159 = inteval->two_alpha0_ket[vi] * fp118;
target[((hsi*21+3)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp108;
fp108 = fp14 * fp10;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp4;
LIBINT2_REALTYPE fp112;
fp112 = 3.0000000000000000e+00 * fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp17 * fp10;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp4;
LIBINT2_REALTYPE fp113;
fp113 = inteval->two_alpha0_bra[vi] * fp109;
LIBINT2_REALTYPE fp111;
fp111 = fp113 - fp112;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_ket[vi] * fp111;
target[((hsi*21+4)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp14 * fp11;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp3;
LIBINT2_REALTYPE fp105;
fp105 = 3.0000000000000000e+00 * fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp17 * fp11;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp3;
LIBINT2_REALTYPE fp106;
fp106 = inteval->two_alpha0_bra[vi] * fp102;
LIBINT2_REALTYPE fp104;
fp104 = fp106 - fp105;
LIBINT2_REALTYPE fp157;
fp157 = inteval->two_alpha0_ket[vi] * fp104;
target[((hsi*21+5)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp13 * fp8;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp5;
LIBINT2_REALTYPE fp98;
fp98 = 2.0000000000000000e+00 * fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp15 * fp8;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp5;
LIBINT2_REALTYPE fp99;
fp99 = inteval->two_alpha0_bra[vi] * fp95;
LIBINT2_REALTYPE fp97;
fp97 = fp99 - fp98;
LIBINT2_REALTYPE fp156;
fp156 = inteval->two_alpha0_ket[vi] * fp97;
target[((hsi*21+6)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp87;
fp87 = fp13 * fp9;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp4;
LIBINT2_REALTYPE fp91;
fp91 = 2.0000000000000000e+00 * fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp15 * fp9;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp4;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_bra[vi] * fp88;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp155;
fp155 = inteval->two_alpha0_ket[vi] * fp90;
target[((hsi*21+7)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp80;
fp80 = fp13 * fp10;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp3;
LIBINT2_REALTYPE fp84;
fp84 = 2.0000000000000000e+00 * fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp15 * fp10;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp3;
LIBINT2_REALTYPE fp85;
fp85 = inteval->two_alpha0_bra[vi] * fp81;
LIBINT2_REALTYPE fp83;
fp83 = fp85 - fp84;
LIBINT2_REALTYPE fp154;
fp154 = inteval->two_alpha0_ket[vi] * fp83;
target[((hsi*21+8)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp13 * fp11;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp2;
LIBINT2_REALTYPE fp77;
fp77 = 2.0000000000000000e+00 * fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp15 * fp11;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp2;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_bra[vi] * fp74;
LIBINT2_REALTYPE fp76;
fp76 = fp78 - fp77;
LIBINT2_REALTYPE fp153;
fp153 = inteval->two_alpha0_ket[vi] * fp76;
target[((hsi*21+9)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp136;
fp136 = fp17 * fp11;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp5;
LIBINT2_REALTYPE fp140;
fp140 = 5.0000000000000000e+00 * fp135;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp18 * fp11;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp5;
LIBINT2_REALTYPE fp141;
fp141 = inteval->two_alpha0_bra[vi] * fp137;
LIBINT2_REALTYPE fp139;
fp139 = fp141 - fp140;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_ket[vi] * fp139;
target[((hsi*21+0)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp12 * fp8;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp4;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp14 * fp8;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp4;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_bra[vi] * fp60;
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
LIBINT2_REALTYPE fp151;
fp151 = inteval->two_alpha0_ket[vi] * fp62;
target[((hsi*21+11)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp52;
fp52 = fp12 * fp9;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp3;
LIBINT2_REALTYPE fp56;
fp56 = 1.0000000000000000e+00 * fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp14 * fp9;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp3;
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_bra[vi] * fp53;
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
LIBINT2_REALTYPE fp150;
fp150 = inteval->two_alpha0_ket[vi] * fp55;
target[((hsi*21+12)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp45;
fp45 = fp12 * fp10;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp2;
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp14 * fp10;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp2;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_bra[vi] * fp46;
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
LIBINT2_REALTYPE fp149;
fp149 = inteval->two_alpha0_ket[vi] * fp48;
target[((hsi*21+13)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp12 * fp11;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp1;
LIBINT2_REALTYPE fp42;
fp42 = 1.0000000000000000e+00 * fp37;
LIBINT2_REALTYPE fp40;
fp40 = fp14 * fp11;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp1;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha0_bra[vi] * fp39;
LIBINT2_REALTYPE fp41;
fp41 = fp43 - fp42;
LIBINT2_REALTYPE fp148;
fp148 = inteval->two_alpha0_ket[vi] * fp41;
target[((hsi*21+14)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp13 * fp6;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp5;
LIBINT2_REALTYPE fp36;
fp36 = inteval->two_alpha0_ket[vi] * fp34;
LIBINT2_REALTYPE fp147;
fp147 = inteval->two_alpha0_bra[vi] * fp36;
target[((hsi*21+15)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp13 * fp7;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp4;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha0_ket[vi] * fp31;
LIBINT2_REALTYPE fp146;
fp146 = inteval->two_alpha0_bra[vi] * fp33;
target[((hsi*21+16)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp29;
fp29 = fp13 * fp8;
LIBINT2_REALTYPE fp28;
fp28 = fp29 * fp3;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha0_ket[vi] * fp28;
LIBINT2_REALTYPE fp145;
fp145 = inteval->two_alpha0_bra[vi] * fp30;
target[((hsi*21+17)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp26;
fp26 = fp13 * fp9;
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp2;
LIBINT2_REALTYPE fp27;
fp27 = inteval->two_alpha0_ket[vi] * fp25;
LIBINT2_REALTYPE fp144;
fp144 = inteval->two_alpha0_bra[vi] * fp27;
target[((hsi*21+18)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp23;
fp23 = fp13 * fp10;
LIBINT2_REALTYPE fp22;
fp22 = fp23 * fp1;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha0_ket[vi] * fp22;
LIBINT2_REALTYPE fp143;
fp143 = inteval->two_alpha0_bra[vi] * fp24;
target[((hsi*21+19)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp13 * fp11;
LIBINT2_REALTYPE fp19;
fp19 = fp20 * fp0;
LIBINT2_REALTYPE fp21;
fp21 = inteval->two_alpha0_ket[vi] * fp19;
LIBINT2_REALTYPE fp142;
fp142 = inteval->two_alpha0_bra[vi] * fp21;
target[((hsi*21+20)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp66;
fp66 = fp12 * fp7;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp5;
LIBINT2_REALTYPE fp70;
fp70 = 1.0000000000000000e+00 * fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp14 * fp7;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp5;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_bra[vi] * fp67;
LIBINT2_REALTYPE fp69;
fp69 = fp71 - fp70;
LIBINT2_REALTYPE fp152;
fp152 = inteval->two_alpha0_ket[vi] * fp69;
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
