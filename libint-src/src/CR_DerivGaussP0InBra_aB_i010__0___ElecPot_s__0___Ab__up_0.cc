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
extern "C" {
#endif
void CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp68 - fp67;
target[((hsi*28+1)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp65;
fp65 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+4)*1+lsi)*1];
target[((hsi*28+2)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp63;
fp63 = 2.0000000000000000e+00 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
target[((hsi*28+3)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp60;
fp60 = 1.0000000000000000e+00 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp61 - fp60;
target[((hsi*28+4)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp58;
fp58 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+8)*1+lsi)*1];
target[((hsi*28+5)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp56;
fp56 = 3.0000000000000000e+00 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
target[((hsi*28+6)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp53;
fp53 = 2.0000000000000000e+00 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
target[((hsi*28+7)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp50;
fp50 = 1.0000000000000000e+00 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp51 - fp50;
target[((hsi*28+8)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+13)*1+lsi)*1];
target[((hsi*28+9)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp46;
fp46 = 4.0000000000000000e+00 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 - fp46;
target[((hsi*28+10)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = 3.0000000000000000e+00 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
target[((hsi*28+11)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp40;
fp40 = 2.0000000000000000e+00 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 - fp40;
target[((hsi*28+12)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp38 - fp37;
target[((hsi*28+13)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+1)*1+lsi)*1];
target[((hsi*28+0)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp33;
fp33 = 5.0000000000000000e+00 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp34 - fp33;
target[((hsi*28+15)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp30;
fp30 = 4.0000000000000000e+00 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp31 - fp30;
target[((hsi*28+16)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp27;
fp27 = 3.0000000000000000e+00 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp28 - fp27;
target[((hsi*28+17)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp24;
fp24 = 2.0000000000000000e+00 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 - fp24;
target[((hsi*28+18)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
target[((hsi*28+19)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp19;
fp19 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+26)*1+lsi)*1];
target[((hsi*28+20)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp17;
fp17 = 6.0000000000000000e+00 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
target[((hsi*28+21)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = 5.0000000000000000e+00 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 - fp14;
target[((hsi*28+22)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp11;
fp11 = 4.0000000000000000e+00 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
target[((hsi*28+23)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp8;
fp8 = 3.0000000000000000e+00 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 - fp8;
target[((hsi*28+24)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp5;
fp5 = 2.0000000000000000e+00 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp6 - fp5;
target[((hsi*28+25)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp2;
fp2 = 1.0000000000000000e+00 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp3 - fp2;
target[((hsi*28+26)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp0;
fp0 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+34)*1+lsi)*1];
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp35;
fp35 = inteval->two_alpha0_bra[vi] * src0[((hsi*36+19)*1+lsi)*1];
target[((hsi*28+14)*1+lsi)*1] = fp35;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 70 */
}

#ifdef __cplusplus
};
#endif
