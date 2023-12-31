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
void CR_DerivGaussP0InBra_aB_d001__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+35)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
target[((hsi*36+17)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp46;
fp46 = 1.0000000000000000e+00 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+34)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 - fp46;
target[((hsi*36+16)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+33)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
target[((hsi*36+15)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp52;
fp52 = 1.0000000000000000e+00 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+32)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp53 - fp52;
target[((hsi*36+14)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+31)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp56 - fp55;
target[((hsi*36+13)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+30)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp59 - fp58;
target[((hsi*36+12)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp60;
fp60 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+29)*1+lsi)*1];
target[((hsi*36+11)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp61;
fp61 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+28)*1+lsi)*1];
target[((hsi*36+10)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+12)*1+lsi)*1];
target[((hsi*36+0)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+26)*1+lsi)*1];
target[((hsi*36+8)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+25)*1+lsi)*1];
target[((hsi*36+7)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp65;
fp65 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+24)*1+lsi)*1];
target[((hsi*36+6)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+17)*1+lsi)*1];
target[((hsi*36+5)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp67;
fp67 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+16)*1+lsi)*1];
target[((hsi*36+4)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+15)*1+lsi)*1];
target[((hsi*36+3)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+14)*1+lsi)*1];
target[((hsi*36+2)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp70;
fp70 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+13)*1+lsi)*1];
target[((hsi*36+1)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp62;
fp62 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+27)*1+lsi)*1];
target[((hsi*36+9)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp1;
fp1 = 2.0000000000000000e+00 * src1[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+59)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp2 - fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = 2.0000000000000000e+00 * src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+58)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 - fp4;
target[((hsi*36+34)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp7;
fp7 = 2.0000000000000000e+00 * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+57)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp8 - fp7;
target[((hsi*36+33)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp10;
fp10 = 2.0000000000000000e+00 * src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+56)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp11 - fp10;
target[((hsi*36+32)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp13;
fp13 = 2.0000000000000000e+00 * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+55)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp14 - fp13;
target[((hsi*36+31)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+54)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 - fp16;
target[((hsi*36+30)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+53)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp20 - fp19;
target[((hsi*36+29)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+52)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 - fp22;
target[((hsi*36+28)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+42)*1+lsi)*1];
target[((hsi*36+18)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp28;
fp28 = 1.0000000000000000e+00 * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+50)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp29 - fp28;
target[((hsi*36+26)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp31;
fp31 = 1.0000000000000000e+00 * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+49)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 - fp31;
target[((hsi*36+25)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp34;
fp34 = 1.0000000000000000e+00 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+48)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp35 - fp34;
target[((hsi*36+24)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp36;
fp36 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+47)*1+lsi)*1];
target[((hsi*36+23)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+46)*1+lsi)*1];
target[((hsi*36+22)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+45)*1+lsi)*1];
target[((hsi*36+21)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp39;
fp39 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+44)*1+lsi)*1];
target[((hsi*36+20)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+43)*1+lsi)*1];
target[((hsi*36+19)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_bra[vi] * src0[((hsi*60+51)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
target[((hsi*36+27)*1+lsi)*1] = fp24;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 72 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
