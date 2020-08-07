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
void OSVRRP0InBra_aB_d010__0__d__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp136;
fp136 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp136 * src3[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_z[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
target[((hsi*36+17)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * src3[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_z[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp69 + fp127;
target[((hsi*36+16)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_z[vi] * src0[((hsi*18+3)*1+lsi)*1];
target[((hsi*36+15)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp98;
fp98 = fp128 * src3[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_z[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp72 + fp98;
target[((hsi*36+14)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_z[vi] * src0[((hsi*18+1)*1+lsi)*1];
target[((hsi*36+13)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_z[vi] * src0[((hsi*18+0)*1+lsi)*1];
target[((hsi*36+12)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * fp77;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_y[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp78 - fp76;
target[((hsi*36+11)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp81;
fp81 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 1.0000000000000000e+00 * fp81;
LIBINT2_REALTYPE fp120;
fp120 = fp128 * src3[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_y[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp83 + fp120;
LIBINT2_REALTYPE fp79;
fp79 = fp82 - fp80;
target[((hsi*36+10)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * src3[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp140;
fp140 = inteval->roz[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = src1[((hsi*6+0)*1+lsi)*1] - fp140;
LIBINT2_REALTYPE fp138;
fp138 = fp141 * fp139;
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_x[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp142 + fp138;
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
target[((hsi*36+0)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp92;
fp92 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * fp92;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_y[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp93 - fp91;
target[((hsi*36+8)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp96;
fp96 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_y[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp94;
fp94 = fp97 - fp95;
target[((hsi*36+7)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp102;
fp102 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * fp102;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_y[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp103 - fp101;
target[((hsi*36+6)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp107;
fp107 = inteval->roz[vi] * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = src1[((hsi*6+5)*1+lsi)*1] - fp107;
LIBINT2_REALTYPE fp105;
fp105 = fp141 * fp106;
LIBINT2_REALTYPE fp108;
fp108 = inteval->WP_x[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp108 + fp105;
target[((hsi*36+5)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp112;
fp112 = inteval->roz[vi] * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = src1[((hsi*6+4)*1+lsi)*1] - fp112;
LIBINT2_REALTYPE fp110;
fp110 = fp141 * fp111;
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_x[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp113 + fp110;
target[((hsi*36+4)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp117;
fp117 = inteval->roz[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src1[((hsi*6+3)*1+lsi)*1] - fp117;
LIBINT2_REALTYPE fp115;
fp115 = fp141 * fp116;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_x[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp118 + fp115;
target[((hsi*36+3)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp124;
fp124 = inteval->roz[vi] * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = src1[((hsi*6+2)*1+lsi)*1] - fp124;
LIBINT2_REALTYPE fp122;
fp122 = fp141 * fp123;
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_x[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp125 + fp122;
LIBINT2_REALTYPE fp119;
fp119 = fp121 + fp120;
target[((hsi*36+2)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp132;
fp132 = inteval->roz[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = src1[((hsi*6+1)*1+lsi)*1] - fp132;
LIBINT2_REALTYPE fp130;
fp130 = fp141 * fp131;
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_x[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp133 + fp130;
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
target[((hsi*36+1)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp86;
fp86 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * fp86;
LIBINT2_REALTYPE fp88;
fp88 = fp136 * src3[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_y[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp84;
fp84 = fp87 - fp85;
target[((hsi*36+9)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp1;
fp1 = fp136 * src3[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src0[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp3 + fp105;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = fp128 * src3[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src0[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 + fp110;
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
target[((hsi*36+34)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp9 + fp115;
target[((hsi*36+33)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = fp128 * src3[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_z[vi] * src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 + fp122;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*36+32)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = inteval->WP_z[vi] * src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp15 + fp130;
target[((hsi*36+31)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 + fp138;
target[((hsi*36+30)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = fp136 * src3[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*36+29)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp22;
fp22 = fp128 * src3[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
target[((hsi*36+28)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp62;
fp62 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * fp62;
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_y[vi] * src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp64 + fp138;
LIBINT2_REALTYPE fp60;
fp60 = fp63 - fp61;
target[((hsi*36+18)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp57;
fp57 = fp128 * src3[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_z[vi] * src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp26 + fp57;
target[((hsi*36+26)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_z[vi] * src0[((hsi*18+7)*1+lsi)*1];
target[((hsi*36+25)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_z[vi] * src0[((hsi*18+6)*1+lsi)*1];
target[((hsi*36+24)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * fp31;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_y[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp33 + fp105;
LIBINT2_REALTYPE fp29;
fp29 = fp32 - fp30;
target[((hsi*36+23)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp36;
fp36 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * fp36;
LIBINT2_REALTYPE fp38;
fp38 = fp128 * src3[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_y[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp40 + fp110;
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
LIBINT2_REALTYPE fp34;
fp34 = fp37 - fp35;
target[((hsi*36+22)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp43;
fp43 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 1.0000000000000000e+00 * fp43;
LIBINT2_REALTYPE fp45;
fp45 = fp136 * src3[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_y[vi] * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp47 + fp115;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp41;
fp41 = fp44 - fp42;
target[((hsi*36+21)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp50;
fp50 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * fp50;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_y[vi] * src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp52 + fp122;
LIBINT2_REALTYPE fp48;
fp48 = fp51 - fp49;
target[((hsi*36+20)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp55;
fp55 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * fp55;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_y[vi] * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp59 + fp130;
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
LIBINT2_REALTYPE fp53;
fp53 = fp56 - fp54;
target[((hsi*36+19)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * src0[((hsi*18+9)*1+lsi)*1];
target[((hsi*36+27)*1+lsi)*1] = fp24;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 143 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif