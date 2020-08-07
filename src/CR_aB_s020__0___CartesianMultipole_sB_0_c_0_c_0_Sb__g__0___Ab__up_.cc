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
void CR_aB_s020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp15 * fp13;
LIBINT2_REALTYPE fp20;
fp20 = fp21 * fp0;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * fp20;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp15 * fp14;
LIBINT2_REALTYPE fp22;
fp22 = fp23 * fp0;
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_bra[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
LIBINT2_REALTYPE fp125;
fp125 = inteval->two_alpha0_bra[vi] * fp24;
target[((hsi*15+14)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp15 * fp11;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp1;
LIBINT2_REALTYPE fp32;
fp32 = 1.0000000000000000e+00 * fp27;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp15 * fp12;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp1;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha0_bra[vi] * fp29;
LIBINT2_REALTYPE fp31;
fp31 = fp33 - fp32;
LIBINT2_REALTYPE fp126;
fp126 = inteval->two_alpha0_bra[vi] * fp31;
target[((hsi*15+13)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp15 * fp9;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp2;
LIBINT2_REALTYPE fp39;
fp39 = 1.0000000000000000e+00 * fp34;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp15 * fp10;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp2;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_bra[vi] * fp36;
LIBINT2_REALTYPE fp38;
fp38 = fp40 - fp39;
LIBINT2_REALTYPE fp127;
fp127 = inteval->two_alpha0_bra[vi] * fp38;
target[((hsi*15+12)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp15 * fp7;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp3;
LIBINT2_REALTYPE fp46;
fp46 = 1.0000000000000000e+00 * fp41;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp15 * fp8;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp3;
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_bra[vi] * fp43;
LIBINT2_REALTYPE fp45;
fp45 = fp47 - fp46;
LIBINT2_REALTYPE fp128;
fp128 = inteval->two_alpha0_bra[vi] * fp45;
target[((hsi*15+11)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp15 * fp5;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp4;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * fp48;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp15 * fp6;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp4;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_bra[vi] * fp50;
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
LIBINT2_REALTYPE fp129;
fp129 = inteval->two_alpha0_bra[vi] * fp52;
target[((hsi*15+10)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp16 * fp13;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp1;
LIBINT2_REALTYPE fp60;
fp60 = 1.0000000000000000e+00 * fp55;
LIBINT2_REALTYPE fp58;
fp58 = fp16 * fp14;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp1;
LIBINT2_REALTYPE fp61;
fp61 = inteval->two_alpha0_bra[vi] * fp57;
LIBINT2_REALTYPE fp59;
fp59 = fp61 - fp60;
LIBINT2_REALTYPE fp130;
fp130 = inteval->two_alpha0_bra[vi] * fp59;
target[((hsi*15+9)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp63;
fp63 = fp16 * fp11;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp2;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * fp62;
LIBINT2_REALTYPE fp65;
fp65 = fp16 * fp12;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp2;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_bra[vi] * fp64;
LIBINT2_REALTYPE fp66;
fp66 = fp68 - fp67;
LIBINT2_REALTYPE fp131;
fp131 = inteval->two_alpha0_bra[vi] * fp66;
target[((hsi*15+8)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp70;
fp70 = fp16 * fp9;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp3;
LIBINT2_REALTYPE fp74;
fp74 = 1.0000000000000000e+00 * fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp16 * fp10;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp3;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_bra[vi] * fp71;
LIBINT2_REALTYPE fp73;
fp73 = fp75 - fp74;
LIBINT2_REALTYPE fp132;
fp132 = inteval->two_alpha0_bra[vi] * fp73;
target[((hsi*15+7)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp77;
fp77 = fp16 * fp7;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp4;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp16 * fp8;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp4;
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_bra[vi] * fp78;
LIBINT2_REALTYPE fp80;
fp80 = fp82 - fp81;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha0_bra[vi] * fp80;
target[((hsi*15+6)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp17 * fp13;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp2;
LIBINT2_REALTYPE fp88;
fp88 = 1.0000000000000000e+00 * fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp17 * fp14;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp2;
LIBINT2_REALTYPE fp89;
fp89 = inteval->two_alpha0_bra[vi] * fp85;
LIBINT2_REALTYPE fp87;
fp87 = fp89 - fp88;
LIBINT2_REALTYPE fp134;
fp134 = inteval->two_alpha0_bra[vi] * fp87;
target[((hsi*15+5)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp91;
fp91 = fp17 * fp11;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp3;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * fp90;
LIBINT2_REALTYPE fp93;
fp93 = fp17 * fp12;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp3;
LIBINT2_REALTYPE fp96;
fp96 = inteval->two_alpha0_bra[vi] * fp92;
LIBINT2_REALTYPE fp94;
fp94 = fp96 - fp95;
LIBINT2_REALTYPE fp135;
fp135 = inteval->two_alpha0_bra[vi] * fp94;
target[((hsi*15+4)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp98;
fp98 = fp17 * fp9;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp4;
LIBINT2_REALTYPE fp102;
fp102 = 1.0000000000000000e+00 * fp97;
LIBINT2_REALTYPE fp100;
fp100 = fp17 * fp10;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp4;
LIBINT2_REALTYPE fp103;
fp103 = inteval->two_alpha0_bra[vi] * fp99;
LIBINT2_REALTYPE fp101;
fp101 = fp103 - fp102;
LIBINT2_REALTYPE fp136;
fp136 = inteval->two_alpha0_bra[vi] * fp101;
target[((hsi*15+3)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp18 * fp13;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp3;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp18 * fp14;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp3;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_bra[vi] * fp106;
LIBINT2_REALTYPE fp108;
fp108 = fp110 - fp109;
LIBINT2_REALTYPE fp137;
fp137 = inteval->two_alpha0_bra[vi] * fp108;
target[((hsi*15+2)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp112;
fp112 = fp18 * fp11;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp4;
LIBINT2_REALTYPE fp116;
fp116 = 1.0000000000000000e+00 * fp111;
LIBINT2_REALTYPE fp114;
fp114 = fp18 * fp12;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp4;
LIBINT2_REALTYPE fp117;
fp117 = inteval->two_alpha0_bra[vi] * fp113;
LIBINT2_REALTYPE fp115;
fp115 = fp117 - fp116;
LIBINT2_REALTYPE fp138;
fp138 = inteval->two_alpha0_bra[vi] * fp115;
target[((hsi*15+1)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp19 * fp13;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp4;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp19 * fp14;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp4;
LIBINT2_REALTYPE fp124;
fp124 = inteval->two_alpha0_bra[vi] * fp120;
LIBINT2_REALTYPE fp122;
fp122 = fp124 - fp123;
LIBINT2_REALTYPE fp139;
fp139 = inteval->two_alpha0_bra[vi] * fp122;
target[((hsi*15+0)*1+lsi)*1] = fp139;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 140 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
