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
void OSVRRP0InBra_aB_p__0__p__1___TwoPRep_s__0__s101__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp38;
fp38 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp38 * src4[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src2[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + fp40;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*9+8)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp7;
fp7 = fp38 * src4[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->PA_z[vi] * src0[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*9+7)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp12;
fp12 = fp38 * src4[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_z[vi] * src0[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
LIBINT2_REALTYPE fp11;
fp11 = fp13 + fp12;
target[((hsi*9+6)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_y[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->PA_y[vi] * src0[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*9+5)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_y[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->PA_y[vi] * src0[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp22 + fp21;
LIBINT2_REALTYPE fp19;
fp19 = fp20 + fp40;
target[((hsi*9+4)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_y[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_y[vi] * src0[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
target[((hsi*9+3)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp27;
fp27 = fp38 * src3[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_x[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->PA_x[vi] * src0[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*9+2)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp32;
fp32 = fp38 * src3[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_x[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_x[vi] * src0[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
target[((hsi*9+1)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * src3[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_x[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_x[vi] * src0[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
target[((hsi*9+0)*1+lsi)*1] = fp36;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 45 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
