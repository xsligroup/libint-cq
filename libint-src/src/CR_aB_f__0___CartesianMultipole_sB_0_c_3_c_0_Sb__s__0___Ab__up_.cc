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
void CR_aB_f__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp56;
LIBINT2_REALTYPE fp58;
fp58 = fp55 + fp59;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_y[vi] * fp57;
LIBINT2_REALTYPE fp60;
fp60 = fp56 + fp61;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp64;
fp64 = fp58 + fp65;
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_y[vi] * fp64;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_y[vi] * fp58;
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_y[vi] * fp55;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp52 + fp54;
LIBINT2_REALTYPE fp62;
fp62 = fp53 + fp63;
LIBINT2_REALTYPE fp66;
fp66 = fp62 + fp67;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp68 * fp66;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp0;
target[((hsi*10+9)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_y[vi] * fp40;
LIBINT2_REALTYPE fp42;
fp42 = fp39 + fp43;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_y[vi] * fp41;
LIBINT2_REALTYPE fp44;
fp44 = fp40 + fp45;
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp48;
fp48 = fp42 + fp49;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp48;
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_y[vi] * fp42;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp39;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp36 + fp38;
LIBINT2_REALTYPE fp46;
fp46 = fp37 + fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp46 + fp51;
LIBINT2_REALTYPE fp75;
fp75 = fp68 * fp50;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp1;
target[((hsi*10+8)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_y[vi] * fp24;
LIBINT2_REALTYPE fp26;
fp26 = fp23 + fp27;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp28;
fp28 = fp24 + fp29;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp32;
fp32 = fp26 + fp33;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_y[vi] * fp32;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp30;
fp30 = fp21 + fp31;
LIBINT2_REALTYPE fp34;
fp34 = fp30 + fp35;
LIBINT2_REALTYPE fp77;
fp77 = fp68 * fp34;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp2;
target[((hsi*10+7)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_y[vi] * fp8;
LIBINT2_REALTYPE fp10;
fp10 = fp7 + fp11;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_y[vi] * fp9;
LIBINT2_REALTYPE fp12;
fp12 = fp8 + fp13;
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_y[vi] * fp12;
LIBINT2_REALTYPE fp16;
fp16 = fp10 + fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_y[vi] * fp16;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_y[vi] * fp10;
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_y[vi] * fp7;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src1[((hsi*16+15)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp4 + fp6;
LIBINT2_REALTYPE fp14;
fp14 = fp5 + fp15;
LIBINT2_REALTYPE fp18;
fp18 = fp14 + fp19;
LIBINT2_REALTYPE fp79;
fp79 = fp68 * fp18;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp3;
target[((hsi*10+6)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp69 * fp66;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp1;
target[((hsi*10+5)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp69 * fp50;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp2;
target[((hsi*10+4)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp69 * fp34;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp3;
target[((hsi*10+3)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp70 * fp66;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp2;
target[((hsi*10+2)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp70 * fp50;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp3;
target[((hsi*10+1)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp71 * fp66;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp3;
target[((hsi*10+0)*1+lsi)*1] = fp90;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 92 */
}

#ifdef __cplusplus
};
#endif
