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
void CR_aB_Y2__0___Overlap_Y4__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*15+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * target[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->PB_y[vi] * target[((hsi*15+0)*1+lsi)*1];
target[((hsi*15+1)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_y[vi] * target[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp60 + fp58;
target[((hsi*15+2)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
fp55 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * target[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->PB_y[vi] * target[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*15+3)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp38;
fp38 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * target[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_y[vi] * target[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
target[((hsi*15+8)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp42;
fp42 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * target[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->PA_y[vi] * target[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp43 + fp41;
target[((hsi*15+7)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp46;
fp46 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp46 * target[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_y[vi] * target[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp47 + fp45;
target[((hsi*15+6)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp48;
fp48 = inteval->PA_y[vi] * target[((hsi*15+0)*1+lsi)*1];
target[((hsi*15+5)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PB_y[vi] * target[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*15+4)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp34;
fp34 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * target[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_y[vi] * target[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp35 + fp33;
target[((hsi*15+9)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp2;
fp2 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_y[vi] * target[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp6 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
fp9 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_y[vi] * target[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*15+13)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_y[vi] * target[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*15+12)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp23;
fp23 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_y[vi] * target[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*15+11)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_y[vi] * target[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*15+10)*1+lsi)*1] = fp28;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 62 */
}

#ifdef __cplusplus
};
#endif
