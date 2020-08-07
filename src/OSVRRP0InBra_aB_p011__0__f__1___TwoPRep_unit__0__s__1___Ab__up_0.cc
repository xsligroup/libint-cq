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
void OSVRRP0InBra_aB_p011__0__f__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp117;
fp117 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_x[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
target[((hsi*30+1)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp113;
fp113 = fp117 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_x[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
target[((hsi*30+2)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp110;
fp110 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_x[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp111 + fp109;
target[((hsi*30+3)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp106;
fp106 = fp110 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_x[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
target[((hsi*30+4)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp103;
fp103 = fp110 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_x[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
target[((hsi*30+5)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_x[vi] * src0[((hsi*10+6)*1+lsi)*1];
target[((hsi*30+6)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_x[vi] * src0[((hsi*10+7)*1+lsi)*1];
target[((hsi*30+7)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_x[vi] * src0[((hsi*10+8)*1+lsi)*1];
target[((hsi*30+8)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_x[vi] * src0[((hsi*10+9)*1+lsi)*1];
target[((hsi*30+9)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp96;
fp96 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp97 - fp95;
target[((hsi*30+10)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp90;
fp90 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 1.0000000000000000e+00 * fp90;
LIBINT2_REALTYPE fp92;
fp92 = fp110 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp88;
fp88 = fp91 - fp89;
target[((hsi*30+11)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * fp86;
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_y[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp87 - fp85;
target[((hsi*30+12)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp81;
fp81 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 1.0000000000000000e+00 * fp81;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp83 + fp116;
LIBINT2_REALTYPE fp79;
fp79 = fp82 - fp80;
target[((hsi*30+13)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp75;
fp75 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 1.0000000000000000e+00 * fp75;
LIBINT2_REALTYPE fp77;
fp77 = fp110 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_y[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
LIBINT2_REALTYPE fp73;
fp73 = fp76 - fp74;
target[((hsi*30+14)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp121;
fp121 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
target[((hsi*30+0)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp65;
fp65 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 1.0000000000000000e+00 * fp65;
LIBINT2_REALTYPE fp67;
fp67 = fp121 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp63;
fp63 = fp66 - fp64;
target[((hsi*30+16)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp59;
fp59 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * fp59;
LIBINT2_REALTYPE fp61;
fp61 = fp117 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_y[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp57;
fp57 = fp60 - fp58;
target[((hsi*30+17)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp54;
fp54 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * fp54;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_y[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp56 + fp103;
LIBINT2_REALTYPE fp52;
fp52 = fp55 - fp53;
target[((hsi*30+18)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp50;
fp50 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * fp50;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_y[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp51 - fp49;
target[((hsi*30+19)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp46;
fp46 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * fp46;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp47 - fp45;
target[((hsi*30+20)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp42;
fp42 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * fp42;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp43 - fp41;
target[((hsi*30+21)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp37;
fp37 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp39 + fp92;
LIBINT2_REALTYPE fp35;
fp35 = fp38 - fp36;
target[((hsi*30+22)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp33;
fp33 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 1.0000000000000000e+00 * fp33;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp34 - fp32;
target[((hsi*30+23)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp27;
fp27 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * fp27;
LIBINT2_REALTYPE fp29;
fp29 = fp110 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
LIBINT2_REALTYPE fp25;
fp25 = fp28 - fp26;
target[((hsi*30+24)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp22;
fp22 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp24 + fp113;
LIBINT2_REALTYPE fp20;
fp20 = fp23 - fp21;
target[((hsi*30+25)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
fp18 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 1.0000000000000000e+00 * fp18;
LIBINT2_REALTYPE fp19;
fp19 = inteval->WP_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp19 - fp17;
target[((hsi*30+26)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp13;
fp13 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * fp13;
LIBINT2_REALTYPE fp15;
fp15 = inteval->WP_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp15 + fp109;
LIBINT2_REALTYPE fp11;
fp11 = fp14 - fp12;
target[((hsi*30+27)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp8;
fp8 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 1.0000000000000000e+00 * fp8;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp10 + fp61;
LIBINT2_REALTYPE fp6;
fp6 = fp9 - fp7;
target[((hsi*30+28)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * fp2;
LIBINT2_REALTYPE fp4;
fp4 = fp121 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 - fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp71;
fp71 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 1.0000000000000000e+00 * fp71;
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp72 - fp70;
target[((hsi*30+15)*1+lsi)*1] = fp69;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 123 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif