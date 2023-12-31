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
void OSVRRP1InBra_aB_s__0__g__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->roe[vi] * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src1[((hsi*6+5)*1+lsi)*1] - fp3;
LIBINT2_REALTYPE fp4;
fp4 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WQ_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
fp9 = inteval->roe[vi] * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src1[((hsi*6+4)*1+lsi)*1] - fp9;
LIBINT2_REALTYPE fp10;
fp10 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp10 * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WQ_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*15+13)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp15;
fp15 = inteval->roe[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src1[((hsi*6+3)*1+lsi)*1] - fp15;
LIBINT2_REALTYPE fp16;
fp16 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp16 * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WQ_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*15+12)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WQ_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
target[((hsi*15+11)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp22;
fp22 = inteval->roe[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = src1[((hsi*6+3)*1+lsi)*1] - fp22;
LIBINT2_REALTYPE fp23;
fp23 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp23 * fp21;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WQ_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp24 + fp20;
target[((hsi*15+10)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp28;
fp28 = inteval->roe[vi] * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = src1[((hsi*6+2)*1+lsi)*1] - fp28;
LIBINT2_REALTYPE fp29;
fp29 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp29 * fp27;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp30 + fp26;
target[((hsi*15+9)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp34;
fp34 = inteval->roe[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = src1[((hsi*6+1)*1+lsi)*1] - fp34;
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp35 * fp33;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp36 + fp32;
target[((hsi*15+8)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WQ_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
target[((hsi*15+7)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp41;
fp41 = inteval->roe[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src1[((hsi*6+1)*1+lsi)*1] - fp41;
LIBINT2_REALTYPE fp42;
fp42 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp42 * fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp43 + fp39;
target[((hsi*15+6)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp47;
fp47 = inteval->roe[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src1[((hsi*6+0)*1+lsi)*1] - fp47;
LIBINT2_REALTYPE fp48;
fp48 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp48 * fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->WQ_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp49 + fp45;
target[((hsi*15+5)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
target[((hsi*15+4)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp54;
fp54 = inteval->roe[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = src1[((hsi*6+0)*1+lsi)*1] - fp54;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp55 * fp53;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp56 + fp52;
target[((hsi*15+3)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WQ_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+2)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WQ_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+1)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp62;
fp62 = inteval->roe[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = src1[((hsi*6+0)*1+lsi)*1] - fp62;
LIBINT2_REALTYPE fp63;
fp63 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp63 * fp61;
LIBINT2_REALTYPE fp64;
fp64 = inteval->WQ_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp64 + fp60;
target[((hsi*15+0)*1+lsi)*1] = fp59;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 65 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
