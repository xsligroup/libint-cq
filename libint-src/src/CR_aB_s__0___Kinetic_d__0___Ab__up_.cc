/*
 *  Copyright (C) 2004-2018 Edward F. Valeev
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
void CR_aB_s__0___Kinetic_d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->two_alpha0_bra[vi] * src2[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp2;
fp2 = fp21 * src2[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp2 - fp1;
LIBINT2_REALTYPE fp25;
fp25 = src0[((hsi*8+0)*1+lsi)*1] * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp25 * fp0;
LIBINT2_REALTYPE fp13;
fp13 = fp21 * src1[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*8+0)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp21 * src0[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp14 * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp29 + fp27;
LIBINT2_REALTYPE fp23;
fp23 = fp26 + fp24;
target[((hsi*6+5)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp4;
fp4 = fp22 * src2[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp21 * src2[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 - fp4;
LIBINT2_REALTYPE fp33;
fp33 = src0[((hsi*8+0)*1+lsi)*1] * src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp3;
LIBINT2_REALTYPE fp11;
fp11 = fp22 * src1[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp21 * src1[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*8+0)*1+lsi)*1] * fp10;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp14 * src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp37 + fp35;
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
target[((hsi*6+4)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp6;
fp6 = fp21 * src2[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = src0[((hsi*8+0)*1+lsi)*1] * src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp6;
LIBINT2_REALTYPE fp8;
fp8 = inteval->two_alpha0_bra[vi] * src1[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp21 * src1[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 - fp8;
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*8+0)*1+lsi)*1] * fp7;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp14 * src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp46 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
target[((hsi*6+3)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp49;
fp49 = src0[((hsi*8+1)*1+lsi)*1] * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp3;
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*8+1)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp22 * src0[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp21 * src0[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 - fp16;
LIBINT2_REALTYPE fp54;
fp54 = fp15 * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp53 + fp51;
LIBINT2_REALTYPE fp47;
fp47 = fp50 + fp48;
target[((hsi*6+2)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp57;
fp57 = src0[((hsi*8+1)*1+lsi)*1] * src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp6;
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*8+1)*1+lsi)*1] * fp10;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp15 * src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp61 + fp59;
LIBINT2_REALTYPE fp55;
fp55 = fp58 + fp56;
target[((hsi*6+1)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp65;
fp65 = src0[((hsi*8+2)*1+lsi)*1] * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp6;
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*8+2)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->two_alpha0_bra[vi] * src0[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp21 * src0[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp20 - fp19;
LIBINT2_REALTYPE fp70;
fp70 = fp18 * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp69 + fp67;
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*6+0)*1+lsi)*1] = fp63;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 71 */
}

#ifdef __cplusplus
};
#endif
