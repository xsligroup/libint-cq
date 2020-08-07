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
void deriv1eri2_aB_P__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp74;
fp74 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp31;
fp31 = 1.0000000000000000e+00 * fp74;
LIBINT2_REALTYPE fp91;
fp91 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp91 * fp61;
LIBINT2_REALTYPE fp81;
fp81 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp80;
fp80 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp81;
LIBINT2_REALTYPE fp82;
fp82 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp82 * fp80;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * fp104;
LIBINT2_REALTYPE fp34;
fp34 = fp35 + fp79;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WQ_z[vi] * fp34;
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha0_bra[vi] * fp27;
LIBINT2_REALTYPE fp30;
fp30 = fp32 - fp31;
LIBINT2_REALTYPE fp26;
fp26 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp86;
fp86 = 1.0000000000000000e+00 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_bra[vi] * fp34;
LIBINT2_REALTYPE fp36;
fp36 = fp37 - fp86;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_y[vi] * fp36;
LIBINT2_REALTYPE fp25;
fp25 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_x[vi] * fp36;
LIBINT2_REALTYPE fp24;
fp24 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp102;
fp102 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp102 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp64;
fp64 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_z[vi] * fp64;
LIBINT2_REALTYPE fp96;
fp96 = fp97 + fp101;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_y[vi] * fp96;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_bra[vi] * fp39;
LIBINT2_REALTYPE fp23;
fp23 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_y[vi] * fp67;
LIBINT2_REALTYPE fp98;
fp98 = fp99 + fp101;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_z[vi] * fp98;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha0_bra[vi] * fp41;
LIBINT2_REALTYPE fp22;
fp22 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_y[vi] * fp70;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * fp107;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_bra[vi] * fp43;
LIBINT2_REALTYPE fp21;
fp21 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_x[vi] * fp96;
LIBINT2_REALTYPE fp58;
fp58 = inteval->two_alpha0_bra[vi] * fp57;
LIBINT2_REALTYPE fp20;
fp20 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_x[vi] * fp67;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_z[vi] * fp109;
LIBINT2_REALTYPE fp60;
fp60 = inteval->two_alpha0_bra[vi] * fp59;
LIBINT2_REALTYPE fp19;
fp19 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_x[vi] * fp70;
LIBINT2_REALTYPE fp100;
fp100 = fp103 + fp101;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_z[vi] * fp100;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha0_bra[vi] * fp62;
LIBINT2_REALTYPE fp18;
fp18 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp17;
fp17 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp16;
fp16 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp15;
fp15 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_y[vi] * fp105;
LIBINT2_REALTYPE fp52;
fp52 = fp53 + fp79;
LIBINT2_REALTYPE fp55;
fp55 = inteval->two_alpha0_bra[vi] * fp52;
LIBINT2_REALTYPE fp54;
fp54 = fp55 - fp86;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * fp54;
LIBINT2_REALTYPE fp14;
fp14 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp50;
fp50 = 1.0000000000000000e+00 * fp76;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp91 * fp71;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_y[vi] * fp52;
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_bra[vi] * fp46;
LIBINT2_REALTYPE fp49;
fp49 = fp51 - fp50;
LIBINT2_REALTYPE fp13;
fp13 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_x[vi] * fp54;
LIBINT2_REALTYPE fp12;
fp12 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp108;
fp108 = inteval->WP_x[vi] * fp64;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_y[vi] * fp108;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_bra[vi] * fp65;
LIBINT2_REALTYPE fp11;
fp11 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_x[vi] * fp98;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_bra[vi] * fp68;
LIBINT2_REALTYPE fp10;
fp10 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_y[vi] * fp100;
LIBINT2_REALTYPE fp73;
fp73 = inteval->two_alpha0_bra[vi] * fp72;
LIBINT2_REALTYPE fp9;
fp9 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp8;
fp8 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp7;
fp7 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp6;
fp6 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp5;
fp5 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp4;
fp4 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp3;
fp3 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_x[vi] * fp106;
LIBINT2_REALTYPE fp78;
fp78 = fp83 + fp79;
LIBINT2_REALTYPE fp87;
fp87 = inteval->two_alpha0_bra[vi] * fp78;
LIBINT2_REALTYPE fp85;
fp85 = fp87 - fp86;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_z[vi] * fp85;
LIBINT2_REALTYPE fp2;
fp2 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_y[vi] * fp85;
LIBINT2_REALTYPE fp1;
fp1 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp88;
fp88 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp94;
fp94 = 1.0000000000000000e+00 * fp88;
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp84;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_x[vi] * fp78;
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_bra[vi] * fp89;
LIBINT2_REALTYPE fp93;
fp93 = fp95 - fp94;
LIBINT2_REALTYPE fp0;
fp0 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 110 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
