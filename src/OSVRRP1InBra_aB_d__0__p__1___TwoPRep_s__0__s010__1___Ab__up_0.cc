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
void OSVRRP1InBra_aB_d__0__p__1___TwoPRep_s__0__s010__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp90;
fp90 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->rho34_over_alpha3[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp91 - fp90;
LIBINT2_REALTYPE fp88;
fp88 = 1.0000000000000000e+00 * fp89;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WQ_y[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->QC_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
LIBINT2_REALTYPE fp87;
fp87 = fp92 + fp88;
target[((hsi*18+1)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WQ_z[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->QC_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
target[((hsi*18+2)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp80;
fp80 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->WQ_x[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->QC_x[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp83 + fp82;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*18+3)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp71;
fp71 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->rho34_over_alpha3[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp72 - fp71;
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * fp70;
LIBINT2_REALTYPE fp74;
fp74 = fp80 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_y[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->QC_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
LIBINT2_REALTYPE fp73;
fp73 = fp75 + fp74;
LIBINT2_REALTYPE fp68;
fp68 = fp73 + fp69;
target[((hsi*18+4)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_z[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->QC_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
target[((hsi*18+5)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp61;
fp61 = fp80 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->WQ_x[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->QC_x[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
target[((hsi*18+6)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp55;
fp55 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->rho34_over_alpha3[vi] * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp56 - fp55;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * fp54;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WQ_y[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->QC_y[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
LIBINT2_REALTYPE fp52;
fp52 = fp57 + fp53;
target[((hsi*18+7)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_z[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->QC_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp51 + fp50;
LIBINT2_REALTYPE fp48;
fp48 = fp49 + fp74;
target[((hsi*18+8)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp97;
fp97 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->WQ_x[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->QC_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
target[((hsi*18+0)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp38;
fp38 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->rho34_over_alpha3[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp39 - fp38;
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * fp37;
LIBINT2_REALTYPE fp41;
fp41 = fp97 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_y[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->QC_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
LIBINT2_REALTYPE fp35;
fp35 = fp40 + fp36;
target[((hsi*18+10)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_z[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->QC_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
target[((hsi*18+11)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_x[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->QC_x[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp31 + fp30;
target[((hsi*18+12)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp23;
fp23 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->rho34_over_alpha3[vi] * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp24 - fp23;
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * fp22;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WQ_y[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->QC_y[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
LIBINT2_REALTYPE fp25;
fp25 = fp26 + fp61;
LIBINT2_REALTYPE fp20;
fp20 = fp25 + fp21;
target[((hsi*18+13)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WQ_z[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->QC_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp19 + fp18;
LIBINT2_REALTYPE fp16;
fp16 = fp17 + fp79;
target[((hsi*18+14)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WQ_x[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->QC_x[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
target[((hsi*18+15)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp8;
fp8 = inteval->alpha4_rho_over_eta2[vi] * src4[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->rho34_over_alpha3[vi] * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 - fp8;
LIBINT2_REALTYPE fp6;
fp6 = 1.0000000000000000e+00 * fp7;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WQ_y[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->QC_y[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
LIBINT2_REALTYPE fp5;
fp5 = fp10 + fp6;
target[((hsi*18+16)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = fp97 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WQ_z[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->QC_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_x[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->QC_x[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
target[((hsi*18+9)*1+lsi)*1] = fp45;
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
