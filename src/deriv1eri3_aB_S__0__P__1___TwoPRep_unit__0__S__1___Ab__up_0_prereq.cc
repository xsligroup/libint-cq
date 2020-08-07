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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_S__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp46;
fp46 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_z[vi] * fp44;
LIBINT2_REALTYPE fp65;
fp65 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp64;
fp64 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp65;
LIBINT2_REALTYPE fp66;
fp66 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp66 * fp64;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp81;
fp81 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WQ_z[vi] * fp79;
LIBINT2_REALTYPE fp21;
fp21 = inteval->QC_z[vi] * fp44;
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
LIBINT2_REALTYPE fp18;
fp18 = fp19 + fp63;
LIBINT2_REALTYPE fp22;
fp22 = fp18 + fp23;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha1_ket[vi] * fp22;
LIBINT2_REALTYPE fp17;
fp17 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp84;
fp84 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp85;
fp85 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp85 + fp84;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_z[vi] * fp83;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp52;
fp52 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp93;
fp93 = inteval->QC_z[vi] * fp50;
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp26;
fp26 = inteval->CD_z[vi] * fp50;
LIBINT2_REALTYPE fp25;
fp25 = fp91 + fp26;
LIBINT2_REALTYPE fp27;
fp27 = inteval->two_alpha1_ket[vi] * fp25;
LIBINT2_REALTYPE fp16;
fp16 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp88;
fp88 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp89;
fp89 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WQ_z[vi] * fp87;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp61;
fp61 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp61 + fp60;
LIBINT2_REALTYPE fp96;
fp96 = inteval->QC_z[vi] * fp59;
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_z[vi] * fp59;
LIBINT2_REALTYPE fp28;
fp28 = fp94 + fp29;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha1_ket[vi] * fp28;
LIBINT2_REALTYPE fp15;
fp15 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp32;
fp32 = inteval->CD_y[vi] * fp44;
LIBINT2_REALTYPE fp31;
fp31 = fp91 + fp32;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha1_ket[vi] * fp31;
LIBINT2_REALTYPE fp14;
fp14 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_y[vi] * fp50;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_y[vi] * fp83;
LIBINT2_REALTYPE fp37;
fp37 = inteval->QC_y[vi] * fp50;
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
LIBINT2_REALTYPE fp34;
fp34 = fp35 + fp63;
LIBINT2_REALTYPE fp38;
fp38 = fp34 + fp39;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha1_ket[vi] * fp38;
LIBINT2_REALTYPE fp13;
fp13 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_y[vi] * fp87;
LIBINT2_REALTYPE fp55;
fp55 = inteval->QC_y[vi] * fp59;
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
LIBINT2_REALTYPE fp42;
fp42 = inteval->CD_y[vi] * fp59;
LIBINT2_REALTYPE fp41;
fp41 = fp53 + fp42;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha1_ket[vi] * fp41;
LIBINT2_REALTYPE fp12;
fp12 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->CD_x[vi] * fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp94 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha1_ket[vi] * fp47;
LIBINT2_REALTYPE fp11;
fp11 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_x[vi] * fp50;
LIBINT2_REALTYPE fp56;
fp56 = fp53 + fp57;
LIBINT2_REALTYPE fp58;
fp58 = inteval->two_alpha1_ket[vi] * fp56;
LIBINT2_REALTYPE fp10;
fp10 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_x[vi] * fp59;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_x[vi] * fp87;
LIBINT2_REALTYPE fp69;
fp69 = inteval->QC_x[vi] * fp59;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp62;
fp62 = fp67 + fp63;
LIBINT2_REALTYPE fp70;
fp70 = fp62 + fp71;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha1_ket[vi] * fp70;
LIBINT2_REALTYPE fp9;
fp9 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_z[vi] * fp79;
LIBINT2_REALTYPE fp97;
fp97 = fp98 + fp108;
LIBINT2_REALTYPE fp73;
fp73 = inteval->two_alpha0_bra[vi] * fp97;
LIBINT2_REALTYPE fp8;
fp8 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_z[vi] * fp83;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha0_bra[vi] * fp99;
LIBINT2_REALTYPE fp7;
fp7 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_z[vi] * fp87;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_bra[vi] * fp100;
LIBINT2_REALTYPE fp6;
fp6 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_y[vi] * fp79;
LIBINT2_REALTYPE fp76;
fp76 = inteval->two_alpha0_bra[vi] * fp101;
LIBINT2_REALTYPE fp5;
fp5 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_y[vi] * fp83;
LIBINT2_REALTYPE fp102;
fp102 = fp103 + fp108;
LIBINT2_REALTYPE fp77;
fp77 = inteval->two_alpha0_bra[vi] * fp102;
LIBINT2_REALTYPE fp4;
fp4 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_y[vi] * fp87;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_bra[vi] * fp104;
LIBINT2_REALTYPE fp3;
fp3 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_x[vi] * fp79;
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_bra[vi] * fp105;
LIBINT2_REALTYPE fp2;
fp2 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_x[vi] * fp83;
LIBINT2_REALTYPE fp86;
fp86 = inteval->two_alpha0_bra[vi] * fp106;
LIBINT2_REALTYPE fp1;
fp1 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_x[vi] * fp87;
LIBINT2_REALTYPE fp107;
fp107 = fp110 + fp108;
LIBINT2_REALTYPE fp90;
fp90 = inteval->two_alpha0_bra[vi] * fp107;
LIBINT2_REALTYPE fp0;
fp0 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 111 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
