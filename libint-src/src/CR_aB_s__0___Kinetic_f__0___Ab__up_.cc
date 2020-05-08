/*
 *  Copyright (C) 2004-2018 Edward F. Valeev
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
void CR_aB_s__0___Kinetic_f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp29;
fp29 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp29 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp2;
fp2 = fp31 * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp2 - fp1;
LIBINT2_REALTYPE fp35;
fp35 = src0[((hsi*10+0)*1+lsi)*1] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp0;
LIBINT2_REALTYPE fp19;
fp19 = fp31 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*10+0)*1+lsi)*1] * fp19;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp31 * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp20 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
LIBINT2_REALTYPE fp33;
fp33 = fp36 + fp34;
target[((hsi*10+9)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp4;
fp4 = inteval->two_alpha0_bra[vi] * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp31 * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 - fp4;
LIBINT2_REALTYPE fp43;
fp43 = src0[((hsi*10+0)*1+lsi)*1] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp3;
LIBINT2_REALTYPE fp17;
fp17 = fp32 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp31 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*10+0)*1+lsi)*1] * fp16;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp20 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp47 + fp45;
LIBINT2_REALTYPE fp41;
fp41 = fp44 + fp42;
target[((hsi*10+8)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp7;
fp7 = fp32 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp31 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp8 - fp7;
LIBINT2_REALTYPE fp51;
fp51 = src0[((hsi*10+0)*1+lsi)*1] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp6;
LIBINT2_REALTYPE fp14;
fp14 = inteval->two_alpha0_bra[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp31 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 - fp14;
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*10+0)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp20 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*10+7)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp9;
fp9 = fp31 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = src0[((hsi*10+0)*1+lsi)*1] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp9;
LIBINT2_REALTYPE fp11;
fp11 = fp29 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp31 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*10+0)*1+lsi)*1] * fp10;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp20 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
LIBINT2_REALTYPE fp57;
fp57 = fp60 + fp58;
target[((hsi*10+6)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp67;
fp67 = src0[((hsi*10+1)*1+lsi)*1] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp3;
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*10+1)*1+lsi)*1] * fp19;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp32 * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp31 * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 - fp22;
LIBINT2_REALTYPE fp72;
fp72 = fp21 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp71 + fp69;
LIBINT2_REALTYPE fp65;
fp65 = fp68 + fp66;
target[((hsi*10+5)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp75;
fp75 = src0[((hsi*10+1)*1+lsi)*1] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp6;
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*10+1)*1+lsi)*1] * fp16;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp21 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp79 + fp77;
LIBINT2_REALTYPE fp73;
fp73 = fp76 + fp74;
target[((hsi*10+4)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp83;
fp83 = src0[((hsi*10+1)*1+lsi)*1] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp9;
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*10+1)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp21 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp88 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*10+3)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp91;
fp91 = src0[((hsi*10+2)*1+lsi)*1] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp6;
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*10+2)*1+lsi)*1] * fp19;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->two_alpha0_bra[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp31 * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
LIBINT2_REALTYPE fp96;
fp96 = fp24 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp96 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
target[((hsi*10+2)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp99;
fp99 = src0[((hsi*10+2)*1+lsi)*1] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp9;
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*10+2)*1+lsi)*1] * fp16;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp24 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp103 + fp101;
LIBINT2_REALTYPE fp97;
fp97 = fp100 + fp98;
target[((hsi*10+1)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp107;
fp107 = src0[((hsi*10+3)*1+lsi)*1] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp9;
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*10+3)*1+lsi)*1] * fp19;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp30 - fp28;
LIBINT2_REALTYPE fp112;
fp112 = fp27 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp112 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp111 + fp109;
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
target[((hsi*10+0)*1+lsi)*1] = fp105;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 113 */
}

#ifdef __cplusplus
};
#endif
