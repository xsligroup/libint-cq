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
void CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp11 * fp9;
LIBINT2_REALTYPE fp16;
fp16 = fp17 * fp0;
LIBINT2_REALTYPE fp18;
fp18 = inteval->two_alpha0_ket[vi] * fp16;
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_bra[vi] * fp18;
target[((hsi*15+14)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp11 * fp8;
LIBINT2_REALTYPE fp19;
fp19 = fp20 * fp1;
LIBINT2_REALTYPE fp21;
fp21 = inteval->two_alpha0_ket[vi] * fp19;
LIBINT2_REALTYPE fp102;
fp102 = inteval->two_alpha0_bra[vi] * fp21;
target[((hsi*15+13)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp11 * fp7;
LIBINT2_REALTYPE fp22;
fp22 = fp23 * fp2;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha0_ket[vi] * fp22;
LIBINT2_REALTYPE fp103;
fp103 = inteval->two_alpha0_bra[vi] * fp24;
target[((hsi*15+12)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp11 * fp6;
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp3;
LIBINT2_REALTYPE fp27;
fp27 = inteval->two_alpha0_ket[vi] * fp25;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_bra[vi] * fp27;
target[((hsi*15+11)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp11 * fp5;
LIBINT2_REALTYPE fp28;
fp28 = fp29 * fp4;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha0_ket[vi] * fp28;
LIBINT2_REALTYPE fp105;
fp105 = inteval->two_alpha0_bra[vi] * fp30;
target[((hsi*15+10)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp10 * fp9;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp1;
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * fp31;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp12 * fp9;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp1;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_ket[vi] * fp33;
LIBINT2_REALTYPE fp35;
fp35 = fp37 - fp36;
LIBINT2_REALTYPE fp106;
fp106 = inteval->two_alpha0_bra[vi] * fp35;
target[((hsi*15+9)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp39;
fp39 = fp10 * fp8;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp2;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * fp38;
LIBINT2_REALTYPE fp41;
fp41 = fp12 * fp8;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp2;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_ket[vi] * fp40;
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
LIBINT2_REALTYPE fp107;
fp107 = inteval->two_alpha0_bra[vi] * fp42;
target[((hsi*15+8)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp46;
fp46 = fp10 * fp7;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp3;
LIBINT2_REALTYPE fp50;
fp50 = 1.0000000000000000e+00 * fp45;
LIBINT2_REALTYPE fp48;
fp48 = fp12 * fp7;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp3;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_ket[vi] * fp47;
LIBINT2_REALTYPE fp49;
fp49 = fp51 - fp50;
LIBINT2_REALTYPE fp108;
fp108 = inteval->two_alpha0_bra[vi] * fp49;
target[((hsi*15+7)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp53;
fp53 = fp10 * fp6;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp4;
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp12 * fp6;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp4;
LIBINT2_REALTYPE fp58;
fp58 = inteval->two_alpha0_ket[vi] * fp54;
LIBINT2_REALTYPE fp56;
fp56 = fp58 - fp57;
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha0_bra[vi] * fp56;
target[((hsi*15+6)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp60;
fp60 = fp11 * fp9;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp2;
LIBINT2_REALTYPE fp64;
fp64 = 2.0000000000000000e+00 * fp59;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp14 * fp9;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp2;
LIBINT2_REALTYPE fp65;
fp65 = inteval->two_alpha0_ket[vi] * fp61;
LIBINT2_REALTYPE fp63;
fp63 = fp65 - fp64;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_bra[vi] * fp63;
target[((hsi*15+5)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp67;
fp67 = fp11 * fp8;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp3;
LIBINT2_REALTYPE fp71;
fp71 = 2.0000000000000000e+00 * fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp14 * fp8;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp3;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_ket[vi] * fp68;
LIBINT2_REALTYPE fp70;
fp70 = fp72 - fp71;
LIBINT2_REALTYPE fp111;
fp111 = inteval->two_alpha0_bra[vi] * fp70;
target[((hsi*15+4)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp74;
fp74 = fp11 * fp7;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp4;
LIBINT2_REALTYPE fp78;
fp78 = 2.0000000000000000e+00 * fp73;
LIBINT2_REALTYPE fp76;
fp76 = fp14 * fp7;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp4;
LIBINT2_REALTYPE fp79;
fp79 = inteval->two_alpha0_ket[vi] * fp75;
LIBINT2_REALTYPE fp77;
fp77 = fp79 - fp78;
LIBINT2_REALTYPE fp112;
fp112 = inteval->two_alpha0_bra[vi] * fp77;
target[((hsi*15+3)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp81;
fp81 = fp12 * fp9;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp3;
LIBINT2_REALTYPE fp85;
fp85 = 3.0000000000000000e+00 * fp80;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp13 * fp9;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp3;
LIBINT2_REALTYPE fp86;
fp86 = inteval->two_alpha0_ket[vi] * fp82;
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
LIBINT2_REALTYPE fp113;
fp113 = inteval->two_alpha0_bra[vi] * fp84;
target[((hsi*15+2)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp88;
fp88 = fp12 * fp8;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp4;
LIBINT2_REALTYPE fp92;
fp92 = 3.0000000000000000e+00 * fp87;
LIBINT2_REALTYPE fp90;
fp90 = fp13 * fp8;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp4;
LIBINT2_REALTYPE fp93;
fp93 = inteval->two_alpha0_ket[vi] * fp89;
LIBINT2_REALTYPE fp91;
fp91 = fp93 - fp92;
LIBINT2_REALTYPE fp114;
fp114 = inteval->two_alpha0_bra[vi] * fp91;
target[((hsi*15+1)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp95;
fp95 = fp14 * fp9;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp4;
LIBINT2_REALTYPE fp99;
fp99 = 4.0000000000000000e+00 * fp94;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp15 * fp9;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp4;
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha0_ket[vi] * fp96;
LIBINT2_REALTYPE fp98;
fp98 = fp100 - fp99;
LIBINT2_REALTYPE fp115;
fp115 = inteval->two_alpha0_bra[vi] * fp98;
target[((hsi*15+0)*1+lsi)*1] = fp115;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 116 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
