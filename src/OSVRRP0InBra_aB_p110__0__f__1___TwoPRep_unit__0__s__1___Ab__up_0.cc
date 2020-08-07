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
void OSVRRP0InBra_aB_p110__0__f__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp111;
fp111 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 1.0000000000000000e+00 * fp111;
LIBINT2_REALTYPE fp114;
fp114 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_x[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp115 + fp113;
LIBINT2_REALTYPE fp109;
fp109 = fp112 - fp110;
target[((hsi*30+1)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp105;
fp105 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * fp105;
LIBINT2_REALTYPE fp107;
fp107 = fp114 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->WP_x[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp103;
fp103 = fp106 - fp104;
target[((hsi*30+2)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp98;
fp98 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_x[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
LIBINT2_REALTYPE fp96;
fp96 = fp99 - fp97;
target[((hsi*30+3)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp92;
fp92 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * fp92;
LIBINT2_REALTYPE fp94;
fp94 = fp101 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_x[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp95 + fp94;
LIBINT2_REALTYPE fp90;
fp90 = fp93 - fp91;
target[((hsi*30+4)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp86;
fp86 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * fp86;
LIBINT2_REALTYPE fp88;
fp88 = fp101 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_x[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp84;
fp84 = fp87 - fp85;
target[((hsi*30+5)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp82;
fp82 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * fp82;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_x[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp83 - fp81;
target[((hsi*30+6)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp78;
fp78 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * fp78;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_x[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp79 - fp77;
target[((hsi*30+7)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp74;
fp74 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 1.0000000000000000e+00 * fp74;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_x[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp75 - fp73;
target[((hsi*30+8)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp70;
fp70 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * fp70;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_x[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp71 - fp69;
target[((hsi*30+9)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp66;
fp66 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * fp66;
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp67 - fp65;
target[((hsi*30+10)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp60;
fp60 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * fp60;
LIBINT2_REALTYPE fp62;
fp62 = fp101 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp58;
fp58 = fp61 - fp59;
target[((hsi*30+11)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp56;
fp56 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * fp56;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_y[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp57 - fp55;
target[((hsi*30+12)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp51;
fp51 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 1.0000000000000000e+00 * fp51;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp53 + fp113;
LIBINT2_REALTYPE fp49;
fp49 = fp52 - fp50;
target[((hsi*30+13)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp45;
fp45 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 1.0000000000000000e+00 * fp45;
LIBINT2_REALTYPE fp47;
fp47 = fp101 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_y[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp43;
fp43 = fp46 - fp44;
target[((hsi*30+14)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp118;
fp118 = inteval->alpha1_rho_over_zeta2[vi] * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * fp118;
LIBINT2_REALTYPE fp121;
fp121 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
LIBINT2_REALTYPE fp116;
fp116 = fp119 - fp117;
target[((hsi*30+0)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp35;
fp35 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 1.0000000000000000e+00 * fp35;
LIBINT2_REALTYPE fp37;
fp37 = fp121 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
LIBINT2_REALTYPE fp33;
fp33 = fp36 - fp34;
target[((hsi*30+16)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp29;
fp29 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 1.0000000000000000e+00 * fp29;
LIBINT2_REALTYPE fp31;
fp31 = fp114 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_y[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp27;
fp27 = fp30 - fp28;
target[((hsi*30+17)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp24;
fp24 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 1.0000000000000000e+00 * fp24;
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_y[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp26 + fp88;
LIBINT2_REALTYPE fp22;
fp22 = fp25 - fp23;
target[((hsi*30+18)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * fp20;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_y[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp21 - fp19;
target[((hsi*30+19)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*30+20)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
target[((hsi*30+21)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp15;
fp15 = inteval->WP_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp15 + fp62;
target[((hsi*30+22)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
target[((hsi*30+23)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp11;
fp11 = fp101 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->WP_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*30+24)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp9 + fp107;
target[((hsi*30+25)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
target[((hsi*30+26)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp6 + fp100;
target[((hsi*30+27)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp4 + fp31;
target[((hsi*30+28)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp1;
fp1 = fp121 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->WP_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp41;
fp41 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 1.0000000000000000e+00 * fp41;
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp42 - fp40;
target[((hsi*30+15)*1+lsi)*1] = fp39;
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