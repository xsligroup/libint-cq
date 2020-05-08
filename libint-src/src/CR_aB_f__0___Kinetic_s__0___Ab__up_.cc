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
void CR_aB_f__0___Kinetic_s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp30;
fp30 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp30 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp2;
fp2 = fp32 * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp2 - fp1;
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*10+0)*1+lsi)*1] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp0;
LIBINT2_REALTYPE fp19;
fp19 = fp32 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = src0[((hsi*10+0)*1+lsi)*1] * fp19;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp32 * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp20 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp40 + fp38;
LIBINT2_REALTYPE fp34;
fp34 = fp37 + fp35;
target[((hsi*10+9)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp4;
fp4 = inteval->two_alpha0_ket[vi] * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp32 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 - fp4;
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*10+0)*1+lsi)*1] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp3;
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp23 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp32 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
LIBINT2_REALTYPE fp47;
fp47 = src0[((hsi*10+0)*1+lsi)*1] * fp16;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp20 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp49 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*10+8)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp7;
fp7 = fp23 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp32 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp8 - fp7;
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*10+0)*1+lsi)*1] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp6;
LIBINT2_REALTYPE fp14;
fp14 = inteval->two_alpha0_ket[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp32 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 - fp14;
LIBINT2_REALTYPE fp55;
fp55 = src0[((hsi*10+0)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp20 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp57 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
LIBINT2_REALTYPE fp50;
fp50 = fp53 + fp51;
target[((hsi*10+7)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp9;
fp9 = fp32 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*10+0)*1+lsi)*1] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp9;
LIBINT2_REALTYPE fp11;
fp11 = fp30 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp32 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
LIBINT2_REALTYPE fp63;
fp63 = src0[((hsi*10+0)*1+lsi)*1] * fp10;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp20 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp64 + fp62;
LIBINT2_REALTYPE fp58;
fp58 = fp61 + fp59;
target[((hsi*10+6)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*10+2)*1+lsi)*1] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp3;
LIBINT2_REALTYPE fp71;
fp71 = src0[((hsi*10+2)*1+lsi)*1] * fp19;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp32 * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp24 - fp22;
LIBINT2_REALTYPE fp73;
fp73 = fp21 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp72 + fp70;
LIBINT2_REALTYPE fp66;
fp66 = fp69 + fp67;
target[((hsi*10+5)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*10+2)*1+lsi)*1] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp6;
LIBINT2_REALTYPE fp79;
fp79 = src0[((hsi*10+2)*1+lsi)*1] * fp16;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp21 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp81 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*10+4)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*10+2)*1+lsi)*1] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp9;
LIBINT2_REALTYPE fp87;
fp87 = src0[((hsi*10+2)*1+lsi)*1] * fp13;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp21 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp89 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp88 + fp86;
LIBINT2_REALTYPE fp82;
fp82 = fp85 + fp83;
target[((hsi*10+3)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*10+4)*1+lsi)*1] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp6;
LIBINT2_REALTYPE fp95;
fp95 = src0[((hsi*10+4)*1+lsi)*1] * fp19;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_ket[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp32 * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp27 - fp26;
LIBINT2_REALTYPE fp97;
fp97 = fp25 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp96 + fp94;
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
target[((hsi*10+2)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*10+4)*1+lsi)*1] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp9;
LIBINT2_REALTYPE fp103;
fp103 = src0[((hsi*10+4)*1+lsi)*1] * fp16;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp25 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp104 + fp102;
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
target[((hsi*10+1)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*10+6)*1+lsi)*1] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp9;
LIBINT2_REALTYPE fp111;
fp111 = src0[((hsi*10+6)*1+lsi)*1] * fp19;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp31 - fp29;
LIBINT2_REALTYPE fp113;
fp113 = fp28 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
LIBINT2_REALTYPE fp106;
fp106 = fp109 + fp107;
target[((hsi*10+0)*1+lsi)*1] = fp106;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 114 */
}

#ifdef __cplusplus
};
#endif
