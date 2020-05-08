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
void CR_DerivGaussP0InKet_aB_s__0___ElecPot_h100__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp46;
fp46 = 4.0000000000000000e+00 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 - fp46;
target[((hsi*21+1)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = 4.0000000000000000e+00 * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
target[((hsi*21+2)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp40;
fp40 = 3.0000000000000000e+00 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 - fp40;
target[((hsi*21+3)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp37;
fp37 = 3.0000000000000000e+00 * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp38 - fp37;
target[((hsi*21+4)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp34;
fp34 = 3.0000000000000000e+00 * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp35 - fp34;
target[((hsi*21+5)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp31;
fp31 = 2.0000000000000000e+00 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 - fp31;
target[((hsi*21+6)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
fp28 = 2.0000000000000000e+00 * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp29 - fp28;
target[((hsi*21+7)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp25;
fp25 = 2.0000000000000000e+00 * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
target[((hsi*21+8)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = 2.0000000000000000e+00 * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 - fp22;
target[((hsi*21+9)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp49;
fp49 = 5.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
target[((hsi*21+0)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp16;
fp16 = 1.0000000000000000e+00 * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 - fp16;
target[((hsi*21+11)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp14 - fp13;
target[((hsi*21+12)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp11 - fp10;
target[((hsi*21+13)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp7;
fp7 = 1.0000000000000000e+00 * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp8 - fp7;
target[((hsi*21+14)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp5;
fp5 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+15)*1+lsi)*1];
target[((hsi*21+15)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp4;
fp4 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+16)*1+lsi)*1];
target[((hsi*21+16)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp3;
fp3 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+17)*1+lsi)*1];
target[((hsi*21+17)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp2;
fp2 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+18)*1+lsi)*1];
target[((hsi*21+18)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp1;
fp1 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+19)*1+lsi)*1];
target[((hsi*21+19)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp0;
fp0 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+20)*1+lsi)*1];
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->two_alpha0_ket[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp20 - fp19;
target[((hsi*21+10)*1+lsi)*1] = fp18;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 51 */
}

#ifdef __cplusplus
};
#endif
