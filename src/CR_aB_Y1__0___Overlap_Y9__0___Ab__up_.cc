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
void CR_aB_Y1__0___Overlap_Y9__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*20+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp69;
fp69 = inteval->PB_y[vi] * target[((hsi*20+0)*1+lsi)*1];
target[((hsi*20+1)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp67 * target[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->PB_y[vi] * target[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp68 + fp66;
target[((hsi*20+2)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp63;
fp63 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp62;
fp62 = fp63 * target[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->PB_y[vi] * target[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp64 + fp62;
target[((hsi*20+3)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp59;
fp59 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * target[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_y[vi] * target[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp60 + fp58;
target[((hsi*20+4)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
fp55 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * target[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->PB_y[vi] * target[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*20+5)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp51;
fp51 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PB_y[vi] * target[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*20+6)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp47;
fp47 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * target[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->PB_y[vi] * target[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
target[((hsi*20+7)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * target[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->PB_y[vi] * target[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp44 + fp42;
target[((hsi*20+8)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp39;
fp39 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp38;
fp38 = fp39 * target[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->PB_y[vi] * target[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp40 + fp38;
target[((hsi*20+9)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp34;
fp34 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * target[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_y[vi] * target[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp35 + fp33;
target[((hsi*20+11)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp30;
fp30 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_y[vi] * target[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*20+12)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
fp26 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_y[vi] * target[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
target[((hsi*20+13)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * target[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_y[vi] * target[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp23 + fp21;
target[((hsi*20+14)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
fp18 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp18 * target[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->PA_y[vi] * target[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp19 + fp17;
target[((hsi*20+15)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * target[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_y[vi] * target[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp15 + fp13;
target[((hsi*20+16)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * target[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_y[vi] * target[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp11 + fp9;
target[((hsi*20+17)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp6;
fp6 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp5;
fp5 = fp6 * target[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_y[vi] * target[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp7 + fp5;
target[((hsi*20+18)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp2;
fp2 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->PA_y[vi] * target[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*20+19)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PA_y[vi] * target[((hsi*20+0)*1+lsi)*1];
target[((hsi*20+10)*1+lsi)*1] = fp36;
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
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
