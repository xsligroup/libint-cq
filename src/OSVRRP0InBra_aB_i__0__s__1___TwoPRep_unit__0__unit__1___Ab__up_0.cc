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
void OSVRRP0InBra_aB_i__0__s__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp126;
fp126 = inteval->WP_y[vi] * src0[((hsi*21+0)*1+lsi)*1];
target[((hsi*28+1)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_z[vi] * src0[((hsi*21+0)*1+lsi)*1];
target[((hsi*28+2)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp122;
fp122 = inteval->roz[vi] * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = src1[((hsi*15+0)*1+lsi)*1] - fp122;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp123 * fp121;
LIBINT2_REALTYPE fp124;
fp124 = inteval->WP_y[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp124 + fp120;
target[((hsi*28+3)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_z[vi] * src0[((hsi*21+1)*1+lsi)*1];
target[((hsi*28+4)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp115;
fp115 = inteval->roz[vi] * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src1[((hsi*15+0)*1+lsi)*1] - fp115;
LIBINT2_REALTYPE fp116;
fp116 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp116 * fp114;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WP_z[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp117 + fp113;
target[((hsi*28+5)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp109;
fp109 = inteval->roz[vi] * src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src1[((hsi*15+1)*1+lsi)*1] - fp109;
LIBINT2_REALTYPE fp110;
fp110 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp110 * fp108;
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_y[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp111 + fp107;
target[((hsi*28+6)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_z[vi] * src0[((hsi*21+3)*1+lsi)*1];
target[((hsi*28+7)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp102;
fp102 = inteval->roz[vi] * src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = src1[((hsi*15+1)*1+lsi)*1] - fp102;
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp103 * fp101;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_z[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp104 + fp100;
target[((hsi*28+8)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp96;
fp96 = inteval->roz[vi] * src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = src1[((hsi*15+2)*1+lsi)*1] - fp96;
LIBINT2_REALTYPE fp97;
fp97 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp97 * fp95;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_z[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp98 + fp94;
target[((hsi*28+9)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp90;
fp90 = inteval->roz[vi] * src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = src1[((hsi*15+3)*1+lsi)*1] - fp90;
LIBINT2_REALTYPE fp91;
fp91 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp91 * fp89;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_y[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp92 + fp88;
target[((hsi*28+10)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * src0[((hsi*21+6)*1+lsi)*1];
target[((hsi*28+11)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp83;
fp83 = inteval->roz[vi] * src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src1[((hsi*15+3)*1+lsi)*1] - fp83;
LIBINT2_REALTYPE fp84;
fp84 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp84 * fp82;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp85 + fp81;
target[((hsi*28+12)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp77;
fp77 = inteval->roz[vi] * src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src1[((hsi*15+4)*1+lsi)*1] - fp77;
LIBINT2_REALTYPE fp78;
fp78 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp78 * fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_z[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp79 + fp75;
target[((hsi*28+13)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp130;
fp130 = inteval->roz[vi] * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = src1[((hsi*15+0)*1+lsi)*1] - fp130;
LIBINT2_REALTYPE fp131;
fp131 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp131 * fp129;
LIBINT2_REALTYPE fp132;
fp132 = inteval->WP_x[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp132 + fp128;
target[((hsi*28+0)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp65;
fp65 = inteval->roz[vi] * src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src1[((hsi*15+6)*1+lsi)*1] - fp65;
LIBINT2_REALTYPE fp66;
fp66 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp66 * fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp67 + fp63;
target[((hsi*28+15)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_z[vi] * src0[((hsi*21+10)*1+lsi)*1];
target[((hsi*28+16)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp58;
fp58 = inteval->roz[vi] * src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = src1[((hsi*15+6)*1+lsi)*1] - fp58;
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp59 * fp57;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_z[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp60 + fp56;
target[((hsi*28+17)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp52;
fp52 = inteval->roz[vi] * src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = src1[((hsi*15+7)*1+lsi)*1] - fp52;
LIBINT2_REALTYPE fp53;
fp53 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp53 * fp51;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_z[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp54 + fp50;
target[((hsi*28+18)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp46;
fp46 = inteval->roz[vi] * src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = src1[((hsi*15+8)*1+lsi)*1] - fp46;
LIBINT2_REALTYPE fp47;
fp47 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp47 * fp45;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_z[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp48 + fp44;
target[((hsi*28+19)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp40;
fp40 = inteval->roz[vi] * src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = src1[((hsi*15+9)*1+lsi)*1] - fp40;
LIBINT2_REALTYPE fp41;
fp41 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp38;
fp38 = fp41 * fp39;
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_z[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp42 + fp38;
target[((hsi*28+20)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp34;
fp34 = inteval->roz[vi] * src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = src1[((hsi*15+10)*1+lsi)*1] - fp34;
LIBINT2_REALTYPE fp35;
fp35 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp35 * fp33;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_y[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp36 + fp32;
target[((hsi*28+21)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src0[((hsi*21+15)*1+lsi)*1];
target[((hsi*28+22)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp27;
fp27 = inteval->roz[vi] * src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src1[((hsi*15+10)*1+lsi)*1] - fp27;
LIBINT2_REALTYPE fp28;
fp28 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp28 * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_z[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*28+23)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp21;
fp21 = inteval->roz[vi] * src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src1[((hsi*15+11)*1+lsi)*1] - fp21;
LIBINT2_REALTYPE fp22;
fp22 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp22 * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*28+24)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp15;
fp15 = inteval->roz[vi] * src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src1[((hsi*15+12)*1+lsi)*1] - fp15;
LIBINT2_REALTYPE fp16;
fp16 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp16 * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*28+25)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp9;
fp9 = inteval->roz[vi] * src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src1[((hsi*15+13)*1+lsi)*1] - fp9;
LIBINT2_REALTYPE fp10;
fp10 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp10 * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WP_z[vi] * src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*28+26)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp3;
fp3 = inteval->roz[vi] * src2[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src1[((hsi*15+14)*1+lsi)*1] - fp3;
LIBINT2_REALTYPE fp4;
fp4 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp71;
fp71 = inteval->roz[vi] * src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src1[((hsi*15+5)*1+lsi)*1] - fp71;
LIBINT2_REALTYPE fp72;
fp72 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp72 * fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_z[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp73 + fp69;
target[((hsi*28+14)*1+lsi)*1] = fp68;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 133 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
