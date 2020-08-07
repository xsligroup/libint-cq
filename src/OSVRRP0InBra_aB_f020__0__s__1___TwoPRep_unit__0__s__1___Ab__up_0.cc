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
void OSVRRP0InBra_aB_f020__0__s__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp35;
fp35 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp3;
fp3 = inteval->roz[vi] * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src1[((hsi*3+2)*1+lsi)*1] - fp3;
LIBINT2_REALTYPE fp1;
fp1 = fp35 * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp15;
fp15 = inteval->roz[vi] * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src1[((hsi*3+1)*1+lsi)*1] - fp15;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*10+8)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp8;
fp8 = inteval->WP_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
target[((hsi*10+7)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 2.0000000000000000e+00 * fp11;
LIBINT2_REALTYPE fp13;
fp13 = fp35 * fp14;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp16 + fp13;
LIBINT2_REALTYPE fp9;
fp9 = fp12 - fp10;
target[((hsi*10+6)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp34;
fp34 = inteval->roz[vi] * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = src1[((hsi*3+0)*1+lsi)*1] - fp34;
LIBINT2_REALTYPE fp24;
fp24 = inteval->oo2z[vi] * fp33;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp18 + fp24;
target[((hsi*10+5)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->WP_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
target[((hsi*10+4)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp22;
fp22 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 2.0000000000000000e+00 * fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp20;
fp20 = fp23 - fp21;
target[((hsi*10+3)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+2)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 2.0000000000000000e+00 * fp29;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp30 - fp28;
target[((hsi*10+1)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp32;
fp32 = fp35 * fp33;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp36 + fp32;
target[((hsi*10+0)*1+lsi)*1] = fp31;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 37 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif