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
void OSVRRP0InBra_aB_p__0__d__1___TwoPRep_s100__0__s100__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp102;
fp102 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp102 * src5[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp93 - fp92;
LIBINT2_REALTYPE fp90;
fp90 = 1.0000000000000000e+00 * fp91;
LIBINT2_REALTYPE fp96;
fp96 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp95;
fp95 = fp96 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_x[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->PA_x[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp94;
fp94 = fp97 + fp95;
LIBINT2_REALTYPE fp89;
fp89 = fp94 + fp90;
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
target[((hsi*18+1)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp76;
fp76 = fp102 * src5[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp81 - fp80;
LIBINT2_REALTYPE fp78;
fp78 = 1.0000000000000000e+00 * fp79;
LIBINT2_REALTYPE fp83;
fp83 = fp96 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_x[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->PA_x[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
LIBINT2_REALTYPE fp77;
fp77 = fp82 + fp78;
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
target[((hsi*18+2)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp66;
fp66 = fp102 * src5[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 - fp70;
LIBINT2_REALTYPE fp68;
fp68 = 1.0000000000000000e+00 * fp69;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_x[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->PA_x[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
LIBINT2_REALTYPE fp67;
fp67 = fp72 + fp68;
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
target[((hsi*18+3)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp56;
fp56 = fp102 * src5[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp61 - fp60;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * fp59;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_x[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->PA_x[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
LIBINT2_REALTYPE fp57;
fp57 = fp62 + fp58;
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
target[((hsi*18+4)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp46;
fp46 = fp102 * src5[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp51 - fp50;
LIBINT2_REALTYPE fp48;
fp48 = 1.0000000000000000e+00 * fp49;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_x[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->PA_x[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
LIBINT2_REALTYPE fp47;
fp47 = fp52 + fp48;
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
target[((hsi*18+5)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_y[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*18+6)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp38;
fp38 = fp96 * src2[((hsi*3+0)*1+lsi)*1];
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
LIBINT2_REALTYPE fp101;
fp101 = fp102 * src5[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp107 - fp106;
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * fp105;
LIBINT2_REALTYPE fp110;
fp110 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_x[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->PA_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp108;
fp108 = fp111 + fp109;
LIBINT2_REALTYPE fp103;
fp103 = fp108 + fp104;
LIBINT2_REALTYPE fp100;
fp100 = fp103 + fp101;
target[((hsi*18+0)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_y[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->PA_y[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
LIBINT2_REALTYPE fp25;
fp25 = fp26 + fp83;
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
fp5 = fp6 + fp95;
target[((hsi*18+16)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = fp110 * src2[((hsi*3+2)*1+lsi)*1];
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
fp30 = fp110 * src2[((hsi*3+1)*1+lsi)*1];
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
/** Number of flops = 114 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif