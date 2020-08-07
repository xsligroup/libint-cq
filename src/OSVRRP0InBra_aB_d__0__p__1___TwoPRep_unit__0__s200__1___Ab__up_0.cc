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
void OSVRRP0InBra_aB_d__0__p__1___TwoPRep_unit__0__s200__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp44;
fp44 = 2.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp44 * src4[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp40;
fp40 = inteval->roz[vi] * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = src1[((hsi*3+1)*1+lsi)*1] - fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp52 * fp39;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_x[vi] * src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp41 + fp38;
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
target[((hsi*18+1)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp29;
fp29 = fp44 * src4[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->roz[vi] * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src1[((hsi*3+2)*1+lsi)*1] - fp33;
LIBINT2_REALTYPE fp31;
fp31 = fp52 * fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_x[vi] * src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp34 + fp31;
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
target[((hsi*18+2)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_y[vi] * src0[((hsi*9+0)*1+lsi)*1];
target[((hsi*18+3)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * src3[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_y[vi] * src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp26 + fp46;
target[((hsi*18+4)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_y[vi] * src0[((hsi*9+2)*1+lsi)*1];
target[((hsi*18+5)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*9+0)*1+lsi)*1];
target[((hsi*18+6)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * src0[((hsi*9+1)*1+lsi)*1];
target[((hsi*18+7)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_z[vi] * src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp21 + fp46;
target[((hsi*18+8)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * src4[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->roz[vi] * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src1[((hsi*3+0)*1+lsi)*1] - fp51;
LIBINT2_REALTYPE fp49;
fp49 = fp52 * fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_x[vi] * src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp53 + fp49;
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*18+0)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp15;
fp15 = fp47 * src3[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_y[vi] * src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 + fp38;
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*18+10)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_y[vi] * src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 + fp31;
target[((hsi*18+11)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WP_z[vi] * src0[((hsi*9+3)*1+lsi)*1];
target[((hsi*18+12)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src0[((hsi*9+4)*1+lsi)*1];
target[((hsi*18+13)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp9 + fp15;
target[((hsi*18+14)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 + fp49;
target[((hsi*18+15)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 + fp38;
target[((hsi*18+16)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp1;
fp1 = fp47 * src3[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src0[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp3 + fp31;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp19;
fp19 = inteval->WP_y[vi] * src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp19 + fp49;
target[((hsi*18+9)*1+lsi)*1] = fp18;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 54 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif