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
void OSVRRP0InBra_aB_d__0__p__1___TwoPRep_unit__0__s011__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp67;
fp67 = inteval->roz[vi] * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src1[((hsi*3+1)*1+lsi)*1] - fp67;
LIBINT2_REALTYPE fp65;
fp65 = fp76 * fp66;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_x[vi] * src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp68 + fp65;
target[((hsi*18+1)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp62;
fp62 = inteval->roz[vi] * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = src1[((hsi*3+2)*1+lsi)*1] - fp62;
LIBINT2_REALTYPE fp60;
fp60 = fp76 * fp61;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_x[vi] * src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp63 + fp60;
target[((hsi*18+2)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp57 * src4[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_y[vi] * src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp58 + fp56;
target[((hsi*18+3)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp57 * src4[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * src3[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_y[vi] * src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp54 + fp70;
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
target[((hsi*18+4)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp49;
fp49 = fp57 * src4[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_y[vi] * src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*18+5)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp46;
fp46 = fp57 * src5[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
target[((hsi*18+6)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = fp57 * src5[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_z[vi] * src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*18+7)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp39;
fp39 = fp57 * src5[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_z[vi] * src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp41 + fp70;
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
target[((hsi*18+8)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp75;
fp75 = inteval->roz[vi] * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src1[((hsi*3+0)*1+lsi)*1] - fp75;
LIBINT2_REALTYPE fp73;
fp73 = fp76 * fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_x[vi] * src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp77 + fp73;
LIBINT2_REALTYPE fp69;
fp69 = fp72 + fp70;
target[((hsi*18+0)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp29;
fp29 = fp57 * src4[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp71 * src3[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_y[vi] * src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp33 + fp65;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
target[((hsi*18+10)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp25;
fp25 = fp57 * src4[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_y[vi] * src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp27 + fp60;
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
target[((hsi*18+11)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = fp57 * src5[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
target[((hsi*18+12)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp19;
fp19 = fp57 * src5[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*18+13)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp15;
fp15 = fp57 * src5[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 + fp31;
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*18+14)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp11;
fp11 = fp57 * src5[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_z[vi] * src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 + fp73;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*18+15)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp7;
fp7 = fp57 * src5[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src0[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp9 + fp65;
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*18+16)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp1;
fp1 = fp57 * src5[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp71 * src3[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 + fp60;
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp35;
fp35 = fp57 * src4[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_y[vi] * src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp37 + fp73;
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
target[((hsi*18+9)*1+lsi)*1] = fp34;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 78 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
