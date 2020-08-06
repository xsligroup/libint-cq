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
void OSVRRP1InBra_aB_s011__0__g__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src4[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->roe[vi] * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = src1[((hsi*6+5)*1+lsi)*1] - fp6;
LIBINT2_REALTYPE fp7;
fp7 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp7 * fp5;
LIBINT2_REALTYPE fp8;
fp8 = inteval->WQ_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp8 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * src4[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->roe[vi] * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src1[((hsi*6+4)*1+lsi)*1] - fp15;
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp16 * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WQ_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
LIBINT2_REALTYPE fp9;
fp9 = fp12 + fp10;
target[((hsi*15+13)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp20;
fp20 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src4[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->roe[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = src1[((hsi*6+3)*1+lsi)*1] - fp24;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp25 * fp23;
LIBINT2_REALTYPE fp26;
fp26 = inteval->WQ_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp26 + fp22;
LIBINT2_REALTYPE fp18;
fp18 = fp21 + fp19;
target[((hsi*15+12)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp29;
fp29 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src4[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp30 + fp28;
target[((hsi*15+11)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->roe[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src1[((hsi*6+3)*1+lsi)*1] - fp37;
LIBINT2_REALTYPE fp38;
fp38 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp38 * fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WQ_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp39 + fp35;
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
target[((hsi*15+10)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp42;
fp42 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * src4[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->roe[vi] * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = src1[((hsi*6+2)*1+lsi)*1] - fp46;
LIBINT2_REALTYPE fp47;
fp47 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp47 * fp45;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp48 + fp44;
LIBINT2_REALTYPE fp40;
fp40 = fp43 + fp41;
target[((hsi*15+9)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * src4[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->roe[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src1[((hsi*6+1)*1+lsi)*1] - fp55;
LIBINT2_REALTYPE fp56;
fp56 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp56 * fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WQ_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp57 + fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*15+8)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp60;
fp60 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp60 * src4[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->WQ_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp61 + fp59;
target[((hsi*15+7)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp64;
fp64 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->roe[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = src1[((hsi*6+1)*1+lsi)*1] - fp68;
LIBINT2_REALTYPE fp69;
fp69 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp69 * fp67;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp70 + fp66;
LIBINT2_REALTYPE fp62;
fp62 = fp65 + fp63;
target[((hsi*15+6)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp73;
fp73 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * src4[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->roe[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src1[((hsi*6+0)*1+lsi)*1] - fp77;
LIBINT2_REALTYPE fp78;
fp78 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp78 * fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WQ_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp79 + fp75;
LIBINT2_REALTYPE fp71;
fp71 = fp74 + fp72;
target[((hsi*15+5)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp82;
fp82 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * src4[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp83 + fp81;
target[((hsi*15+4)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp86;
fp86 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->roe[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = src1[((hsi*6+0)*1+lsi)*1] - fp90;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp91 * fp89;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp92 + fp88;
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
target[((hsi*15+3)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * src4[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp96 + fp94;
target[((hsi*15+2)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp99;
fp99 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->WQ_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp100 + fp98;
target[((hsi*15+1)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp104;
fp104 = inteval->roe[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = src1[((hsi*6+0)*1+lsi)*1] - fp104;
LIBINT2_REALTYPE fp105;
fp105 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp105 * fp103;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp106 + fp102;
target[((hsi*15+0)*1+lsi)*1] = fp101;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 107 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
