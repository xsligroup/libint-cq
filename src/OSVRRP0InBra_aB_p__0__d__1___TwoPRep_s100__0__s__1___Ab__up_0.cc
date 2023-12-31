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
void OSVRRP0InBra_aB_p__0__d__1___TwoPRep_s100__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp82;
fp82 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp83 - fp82;
LIBINT2_REALTYPE fp80;
fp80 = 1.0000000000000000e+00 * fp81;
LIBINT2_REALTYPE fp86;
fp86 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_x[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->PA_x[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
LIBINT2_REALTYPE fp79;
fp79 = fp84 + fp80;
target[((hsi*18+1)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp72;
fp72 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp73 - fp72;
LIBINT2_REALTYPE fp70;
fp70 = 1.0000000000000000e+00 * fp71;
LIBINT2_REALTYPE fp75;
fp75 = fp86 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_x[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->PA_x[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
LIBINT2_REALTYPE fp69;
fp69 = fp74 + fp70;
target[((hsi*18+2)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp64;
fp64 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp65 - fp64;
LIBINT2_REALTYPE fp62;
fp62 = 1.0000000000000000e+00 * fp63;
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_x[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->PA_x[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp61;
fp61 = fp66 + fp62;
target[((hsi*18+3)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp56;
fp56 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * fp55;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_x[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->PA_x[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
LIBINT2_REALTYPE fp53;
fp53 = fp58 + fp54;
target[((hsi*18+4)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp48;
fp48 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp49 - fp48;
LIBINT2_REALTYPE fp46;
fp46 = 1.0000000000000000e+00 * fp47;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_x[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_x[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp45;
fp45 = fp50 + fp46;
target[((hsi*18+5)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_y[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*18+6)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp38;
fp38 = fp86 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_y[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
target[((hsi*18+7)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_y[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->PA_y[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
target[((hsi*18+8)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp93;
fp93 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp94 - fp93;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * fp92;
LIBINT2_REALTYPE fp97;
fp97 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_x[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->PA_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
LIBINT2_REALTYPE fp90;
fp90 = fp95 + fp91;
target[((hsi*18+0)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_y[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->PA_y[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
LIBINT2_REALTYPE fp25;
fp25 = fp26 + fp75;
target[((hsi*18+10)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_y[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->PA_y[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
target[((hsi*18+11)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->PA_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
target[((hsi*18+12)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->PA_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*18+13)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
LIBINT2_REALTYPE fp12;
fp12 = fp13 + fp38;
target[((hsi*18+14)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
target[((hsi*18+15)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->PA_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
LIBINT2_REALTYPE fp5;
fp5 = fp6 + fp85;
target[((hsi*18+16)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = fp97 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->PA_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp30;
fp30 = fp97 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_y[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->PA_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
LIBINT2_REALTYPE fp29;
fp29 = fp31 + fp30;
target[((hsi*18+9)*1+lsi)*1] = fp29;
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
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
