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
void deriv2eri2_aB_P__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_bra[vi] * fp91;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * fp95;
LIBINT2_REALTYPE fp24;
fp24 = 2.0000000000000000e+00 * fp91;
LIBINT2_REALTYPE fp70;
fp70 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp21;
fp21 = inteval->roz[vi] * fp85;
LIBINT2_REALTYPE fp20;
fp20 = fp91 - fp21;
LIBINT2_REALTYPE fp19;
fp19 = fp70 * fp20;
LIBINT2_REALTYPE fp63;
fp63 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp62;
fp62 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp63;
LIBINT2_REALTYPE fp64;
fp64 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp64 * fp62;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * fp78;
LIBINT2_REALTYPE fp45;
fp45 = fp46 + fp61;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * fp45;
LIBINT2_REALTYPE fp18;
fp18 = fp22 + fp19;
LIBINT2_REALTYPE fp25;
fp25 = inteval->two_alpha0_bra[vi] * fp18;
LIBINT2_REALTYPE fp23;
fp23 = fp25 - fp24;
LIBINT2_REALTYPE fp28;
fp28 = inteval->two_alpha0_bra[vi] * fp23;
LIBINT2_REALTYPE fp26;
fp26 = fp28 - fp27;
LIBINT2_REALTYPE fp17;
fp17 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp89;
fp89 = 1.0000000000000000e+00 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_bra[vi] * fp45;
LIBINT2_REALTYPE fp81;
fp81 = fp82 - fp89;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_y[vi] * fp81;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha0_bra[vi] * fp29;
LIBINT2_REALTYPE fp16;
fp16 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_x[vi] * fp81;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha0_bra[vi] * fp47;
LIBINT2_REALTYPE fp15;
fp15 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp14;
fp14 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_y[vi] * fp79;
LIBINT2_REALTYPE fp52;
fp52 = fp53 + fp61;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_bra[vi] * fp52;
LIBINT2_REALTYPE fp83;
fp83 = fp84 - fp89;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_z[vi] * fp83;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha0_bra[vi] * fp32;
LIBINT2_REALTYPE fp13;
fp13 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_y[vi] * fp80;
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_z[vi] * fp94;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_bra[vi] * fp49;
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_bra[vi] * fp50;
LIBINT2_REALTYPE fp12;
fp12 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp11;
fp11 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp96;
fp96 = inteval->two_alpha0_bra[vi] * fp92;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp40;
fp40 = 2.0000000000000000e+00 * fp92;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp37;
fp37 = inteval->roz[vi] * fp86;
LIBINT2_REALTYPE fp36;
fp36 = fp92 - fp37;
LIBINT2_REALTYPE fp35;
fp35 = fp70 * fp36;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_y[vi] * fp52;
LIBINT2_REALTYPE fp34;
fp34 = fp38 + fp35;
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_bra[vi] * fp34;
LIBINT2_REALTYPE fp39;
fp39 = fp41 - fp40;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_bra[vi] * fp39;
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
LIBINT2_REALTYPE fp10;
fp10 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_x[vi] * fp83;
LIBINT2_REALTYPE fp55;
fp55 = inteval->two_alpha0_bra[vi] * fp54;
LIBINT2_REALTYPE fp9;
fp9 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp8;
fp8 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_bra[vi] * fp50;
LIBINT2_REALTYPE fp7;
fp7 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_x[vi] * fp80;
LIBINT2_REALTYPE fp60;
fp60 = fp65 + fp61;
LIBINT2_REALTYPE fp90;
fp90 = inteval->two_alpha0_bra[vi] * fp60;
LIBINT2_REALTYPE fp88;
fp88 = fp90 - fp89;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_z[vi] * fp88;
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_bra[vi] * fp56;
LIBINT2_REALTYPE fp6;
fp6 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp5;
fp5 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp4;
fp4 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_y[vi] * fp88;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_bra[vi] * fp58;
LIBINT2_REALTYPE fp3;
fp3 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp2;
fp2 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp1;
fp1 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp97;
fp97 = inteval->two_alpha0_bra[vi] * fp93;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * fp97;
LIBINT2_REALTYPE fp73;
fp73 = 2.0000000000000000e+00 * fp93;
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp69;
fp69 = inteval->roz[vi] * fp87;
LIBINT2_REALTYPE fp68;
fp68 = fp93 - fp69;
LIBINT2_REALTYPE fp67;
fp67 = fp70 * fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_x[vi] * fp60;
LIBINT2_REALTYPE fp66;
fp66 = fp71 + fp67;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha0_bra[vi] * fp66;
LIBINT2_REALTYPE fp72;
fp72 = fp74 - fp73;
LIBINT2_REALTYPE fp77;
fp77 = inteval->two_alpha0_bra[vi] * fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp77 - fp76;
LIBINT2_REALTYPE fp0;
fp0 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 98 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
