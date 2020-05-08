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
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp11 * fp10;
LIBINT2_REALTYPE fp16;
fp16 = fp17 * fp0;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_ket[vi] * fp16;
target[((hsi*15+14)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp11 * fp8;
LIBINT2_REALTYPE fp18;
fp18 = fp19 * fp1;
LIBINT2_REALTYPE fp68;
fp68 = 1.0000000000000000e+00 * fp18;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp11 * fp9;
LIBINT2_REALTYPE fp20;
fp20 = fp21 * fp1;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_ket[vi] * fp20;
LIBINT2_REALTYPE fp67;
fp67 = fp69 - fp68;
target[((hsi*15+13)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp11 * fp10;
LIBINT2_REALTYPE fp22;
fp22 = fp23 * fp2;
LIBINT2_REALTYPE fp71;
fp71 = 2.0000000000000000e+00 * fp22;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp11 * fp7;
LIBINT2_REALTYPE fp24;
fp24 = fp25 * fp2;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_ket[vi] * fp24;
LIBINT2_REALTYPE fp70;
fp70 = fp72 - fp71;
target[((hsi*15+12)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp11 * fp9;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp3;
LIBINT2_REALTYPE fp74;
fp74 = 3.0000000000000000e+00 * fp26;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp11 * fp6;
LIBINT2_REALTYPE fp28;
fp28 = fp29 * fp3;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_ket[vi] * fp28;
LIBINT2_REALTYPE fp73;
fp73 = fp75 - fp74;
target[((hsi*15+11)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp11 * fp7;
LIBINT2_REALTYPE fp30;
fp30 = fp31 * fp4;
LIBINT2_REALTYPE fp77;
fp77 = 4.0000000000000000e+00 * fp30;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp11 * fp5;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp4;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_ket[vi] * fp32;
LIBINT2_REALTYPE fp76;
fp76 = fp78 - fp77;
target[((hsi*15+10)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp12 * fp10;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp1;
LIBINT2_REALTYPE fp79;
fp79 = inteval->two_alpha0_ket[vi] * fp34;
target[((hsi*15+9)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp37;
fp37 = fp12 * fp8;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp2;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * fp36;
LIBINT2_REALTYPE fp39;
fp39 = fp12 * fp9;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp2;
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_ket[vi] * fp38;
LIBINT2_REALTYPE fp80;
fp80 = fp82 - fp81;
target[((hsi*15+8)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp41;
fp41 = fp12 * fp10;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp3;
LIBINT2_REALTYPE fp84;
fp84 = 2.0000000000000000e+00 * fp40;
LIBINT2_REALTYPE fp43;
fp43 = fp12 * fp7;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp3;
LIBINT2_REALTYPE fp85;
fp85 = inteval->two_alpha0_ket[vi] * fp42;
LIBINT2_REALTYPE fp83;
fp83 = fp85 - fp84;
target[((hsi*15+7)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp45;
fp45 = fp12 * fp9;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp4;
LIBINT2_REALTYPE fp87;
fp87 = 3.0000000000000000e+00 * fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp12 * fp6;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp4;
LIBINT2_REALTYPE fp88;
fp88 = inteval->two_alpha0_ket[vi] * fp46;
LIBINT2_REALTYPE fp86;
fp86 = fp88 - fp87;
target[((hsi*15+6)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp13 * fp10;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp2;
LIBINT2_REALTYPE fp89;
fp89 = inteval->two_alpha0_ket[vi] * fp48;
target[((hsi*15+5)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp51;
fp51 = fp13 * fp8;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp3;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * fp50;
LIBINT2_REALTYPE fp53;
fp53 = fp13 * fp9;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp3;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_ket[vi] * fp52;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
target[((hsi*15+4)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp55;
fp55 = fp13 * fp10;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp4;
LIBINT2_REALTYPE fp94;
fp94 = 2.0000000000000000e+00 * fp54;
LIBINT2_REALTYPE fp57;
fp57 = fp13 * fp7;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp4;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_ket[vi] * fp56;
LIBINT2_REALTYPE fp93;
fp93 = fp95 - fp94;
target[((hsi*15+3)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp14 * fp10;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp3;
LIBINT2_REALTYPE fp96;
fp96 = inteval->two_alpha0_ket[vi] * fp58;
target[((hsi*15+2)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp61;
fp61 = fp14 * fp8;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp4;
LIBINT2_REALTYPE fp98;
fp98 = 1.0000000000000000e+00 * fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp14 * fp9;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp4;
LIBINT2_REALTYPE fp99;
fp99 = inteval->two_alpha0_ket[vi] * fp62;
LIBINT2_REALTYPE fp97;
fp97 = fp99 - fp98;
target[((hsi*15+1)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp15 * fp10;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp4;
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha0_ket[vi] * fp64;
target[((hsi*15+0)*1+lsi)*1] = fp100;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 101 */
}

#ifdef __cplusplus
};
#endif
