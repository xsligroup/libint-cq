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
void CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp6;
fp6 = fp3 + fp7;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp8;
fp8 = fp4 + fp9;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp12;
fp12 = fp6 + fp13;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*16+15)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp10;
fp10 = fp1 + fp11;
LIBINT2_REALTYPE fp14;
fp14 = fp10 + fp15;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp68 * fp67;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp14;
target[((hsi*10+9)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp22;
fp22 = fp19 + fp23;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp24;
fp24 = fp20 + fp25;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp28;
fp28 = fp22 + fp29;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp16 + fp18;
LIBINT2_REALTYPE fp26;
fp26 = fp17 + fp27;
LIBINT2_REALTYPE fp30;
fp30 = fp26 + fp31;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp68 * fp66;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp30;
target[((hsi*10+8)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp38;
fp38 = fp35 + fp39;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp37;
LIBINT2_REALTYPE fp40;
fp40 = fp36 + fp41;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp44;
fp44 = fp38 + fp45;
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_z[vi] * fp44;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp32 + fp34;
LIBINT2_REALTYPE fp42;
fp42 = fp33 + fp43;
LIBINT2_REALTYPE fp46;
fp46 = fp42 + fp47;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp68 * fp65;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp46;
target[((hsi*10+7)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp52;
LIBINT2_REALTYPE fp54;
fp54 = fp51 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_z[vi] * fp56;
LIBINT2_REALTYPE fp60;
fp60 = fp54 + fp61;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_z[vi] * fp60;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_z[vi] * fp51;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp48 + fp50;
LIBINT2_REALTYPE fp58;
fp58 = fp49 + fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp58 + fp63;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp68 * fp64;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp62;
target[((hsi*10+6)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp69 * fp67;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp30;
target[((hsi*10+5)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp69 * fp66;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp46;
target[((hsi*10+4)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp69 * fp65;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp62;
target[((hsi*10+3)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp70 * fp67;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp46;
target[((hsi*10+2)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp70 * fp66;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp62;
target[((hsi*10+1)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp71 * fp67;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp62;
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
