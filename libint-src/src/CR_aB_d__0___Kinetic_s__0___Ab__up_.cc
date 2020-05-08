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
void CR_aB_d__0___Kinetic_s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->two_alpha0_ket[vi] * src2[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp2;
fp2 = fp22 * src2[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp2 - fp1;
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*8+0)*1+lsi)*1] * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp0;
LIBINT2_REALTYPE fp13;
fp13 = fp22 * src1[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = src0[((hsi*8+0)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src2[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp22 * src0[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp14 * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * src2[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp30 + fp28;
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
target[((hsi*6+5)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp17;
fp17 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp17 * src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp22 * src2[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 - fp4;
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*8+0)*1+lsi)*1] * src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp3;
LIBINT2_REALTYPE fp11;
fp11 = fp17 * src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp22 * src1[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
LIBINT2_REALTYPE fp37;
fp37 = src0[((hsi*8+0)*1+lsi)*1] * fp10;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp14 * src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp39 * src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
LIBINT2_REALTYPE fp32;
fp32 = fp35 + fp33;
target[((hsi*6+4)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp6;
fp6 = fp22 * src2[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*8+0)*1+lsi)*1] * src1[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp6;
LIBINT2_REALTYPE fp8;
fp8 = inteval->two_alpha0_ket[vi] * src1[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp22 * src1[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 - fp8;
LIBINT2_REALTYPE fp45;
fp45 = src0[((hsi*8+0)*1+lsi)*1] * fp7;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp14 * src1[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp46 + fp44;
LIBINT2_REALTYPE fp40;
fp40 = fp43 + fp41;
target[((hsi*6+3)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*8+2)*1+lsi)*1] * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp3;
LIBINT2_REALTYPE fp53;
fp53 = src0[((hsi*8+2)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * src0[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp22 * src0[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp18 - fp16;
LIBINT2_REALTYPE fp55;
fp55 = fp15 * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp54 + fp52;
LIBINT2_REALTYPE fp48;
fp48 = fp51 + fp49;
target[((hsi*6+2)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*8+2)*1+lsi)*1] * src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp6;
LIBINT2_REALTYPE fp61;
fp61 = src0[((hsi*8+2)*1+lsi)*1] * fp10;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp15 * src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp63 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp62 + fp60;
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
target[((hsi*6+1)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*8+4)*1+lsi)*1] * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp6;
LIBINT2_REALTYPE fp69;
fp69 = src0[((hsi*8+4)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->two_alpha0_ket[vi] * src0[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * src0[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 - fp20;
LIBINT2_REALTYPE fp71;
fp71 = fp19 * src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
LIBINT2_REALTYPE fp64;
fp64 = fp67 + fp65;
target[((hsi*6+0)*1+lsi)*1] = fp64;
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
#endif
