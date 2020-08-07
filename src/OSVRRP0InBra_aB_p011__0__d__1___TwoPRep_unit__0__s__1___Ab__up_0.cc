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
void OSVRRP0InBra_aB_p011__0__d__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_x[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*18+1)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp61;
fp61 = fp65 * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_x[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
target[((hsi*18+2)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_x[vi] * src0[((hsi*6+3)*1+lsi)*1];
target[((hsi*18+3)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_x[vi] * src0[((hsi*6+4)*1+lsi)*1];
target[((hsi*18+4)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_x[vi] * src0[((hsi*6+5)*1+lsi)*1];
target[((hsi*18+5)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
fp55 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * fp55;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp56 - fp54;
target[((hsi*18+6)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp49;
fp49 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 1.0000000000000000e+00 * fp49;
LIBINT2_REALTYPE fp51;
fp51 = fp65 * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp47;
fp47 = fp50 - fp48;
target[((hsi*18+7)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp45;
fp45 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 1.0000000000000000e+00 * fp45;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_y[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp46 - fp44;
target[((hsi*18+8)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp69;
fp69 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*18+0)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp34;
fp34 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * fp34;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_y[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp36 + fp61;
LIBINT2_REALTYPE fp32;
fp32 = fp35 - fp33;
target[((hsi*18+10)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp30;
fp30 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 1.0000000000000000e+00 * fp30;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_y[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp31 - fp29;
target[((hsi*18+11)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
fp26 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * fp26;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 - fp25;
target[((hsi*18+12)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * fp22;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp23 - fp21;
target[((hsi*18+13)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp17;
fp17 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 1.0000000000000000e+00 * fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->WP_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp19 + fp51;
LIBINT2_REALTYPE fp15;
fp15 = fp18 - fp16;
target[((hsi*18+14)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * fp13;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp14 - fp12;
target[((hsi*18+15)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp8;
fp8 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 1.0000000000000000e+00 * fp8;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp10 + fp64;
LIBINT2_REALTYPE fp6;
fp6 = fp9 - fp7;
target[((hsi*18+16)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * fp2;
LIBINT2_REALTYPE fp4;
fp4 = fp69 * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 - fp1;
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp39;
fp39 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 1.0000000000000000e+00 * fp39;
LIBINT2_REALTYPE fp41;
fp41 = fp69 * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
LIBINT2_REALTYPE fp37;
fp37 = fp40 - fp38;
target[((hsi*18+9)*1+lsi)*1] = fp37;
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
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
