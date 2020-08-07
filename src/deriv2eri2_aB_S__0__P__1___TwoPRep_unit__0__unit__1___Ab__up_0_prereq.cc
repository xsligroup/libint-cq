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
void deriv2eri2_aB_S__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp96;
fp96 = 1.0000000000000000e+00 * fp54;
LIBINT2_REALTYPE fp68;
fp68 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp68 * fp42;
LIBINT2_REALTYPE fp61;
fp61 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp60;
fp60 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp61;
LIBINT2_REALTYPE fp62;
fp62 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp62 * fp60;
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * fp72;
LIBINT2_REALTYPE fp23;
fp23 = fp24 + fp59;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WQ_z[vi] * fp23;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
LIBINT2_REALTYPE fp97;
fp97 = inteval->two_alpha0_bra[vi] * fp18;
LIBINT2_REALTYPE fp95;
fp95 = fp97 - fp96;
LIBINT2_REALTYPE fp21;
fp21 = inteval->two_alpha0_bra[vi] * fp95;
LIBINT2_REALTYPE fp17;
fp17 = fp21;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp93;
fp93 = 1.0000000000000000e+00 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp89;
fp89 = inteval->two_alpha0_bra[vi] * fp23;
LIBINT2_REALTYPE fp88;
fp88 = fp89 - fp93;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WQ_y[vi] * fp88;
LIBINT2_REALTYPE fp22;
fp22 = inteval->two_alpha0_bra[vi] * fp98;
LIBINT2_REALTYPE fp16;
fp16 = fp22;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->WQ_x[vi] * fp88;
LIBINT2_REALTYPE fp25;
fp25 = inteval->two_alpha0_bra[vi] * fp99;
LIBINT2_REALTYPE fp15;
fp15 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_z[vi] * fp45;
LIBINT2_REALTYPE fp73;
fp73 = fp74 + fp82;
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_y[vi] * fp73;
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha0_bra[vi] * fp26;
LIBINT2_REALTYPE fp27;
fp27 = inteval->two_alpha0_bra[vi] * fp100;
LIBINT2_REALTYPE fp14;
fp14 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_y[vi] * fp47;
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp82;
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_z[vi] * fp76;
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_bra[vi] * fp28;
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha0_bra[vi] * fp101;
LIBINT2_REALTYPE fp13;
fp13 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_y[vi] * fp50;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * fp71;
LIBINT2_REALTYPE fp102;
fp102 = inteval->two_alpha0_bra[vi] * fp85;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha0_bra[vi] * fp102;
LIBINT2_REALTYPE fp12;
fp12 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_y[vi] * fp75;
LIBINT2_REALTYPE fp36;
fp36 = fp37 + fp59;
LIBINT2_REALTYPE fp91;
fp91 = inteval->two_alpha0_bra[vi] * fp36;
LIBINT2_REALTYPE fp90;
fp90 = fp91 - fp93;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WQ_z[vi] * fp90;
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_bra[vi] * fp103;
LIBINT2_REALTYPE fp11;
fp11 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp105;
fp105 = 1.0000000000000000e+00 * fp56;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp68 * fp51;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WQ_y[vi] * fp36;
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
LIBINT2_REALTYPE fp106;
fp106 = inteval->two_alpha0_bra[vi] * fp32;
LIBINT2_REALTYPE fp104;
fp104 = fp106 - fp105;
LIBINT2_REALTYPE fp35;
fp35 = inteval->two_alpha0_bra[vi] * fp104;
LIBINT2_REALTYPE fp10;
fp10 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp107;
fp107 = inteval->WQ_x[vi] * fp90;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_bra[vi] * fp107;
LIBINT2_REALTYPE fp9;
fp9 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_x[vi] * fp73;
LIBINT2_REALTYPE fp108;
fp108 = inteval->two_alpha0_bra[vi] * fp39;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_bra[vi] * fp108;
LIBINT2_REALTYPE fp8;
fp8 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_x[vi] * fp47;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * fp79;
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha0_bra[vi] * fp86;
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_bra[vi] * fp109;
LIBINT2_REALTYPE fp7;
fp7 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_x[vi] * fp50;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * fp81;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_bra[vi] * fp43;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_bra[vi] * fp110;
LIBINT2_REALTYPE fp6;
fp6 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_x[vi] * fp45;
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_y[vi] * fp78;
LIBINT2_REALTYPE fp111;
fp111 = inteval->two_alpha0_bra[vi] * fp87;
LIBINT2_REALTYPE fp46;
fp46 = inteval->two_alpha0_bra[vi] * fp111;
LIBINT2_REALTYPE fp5;
fp5 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_x[vi] * fp76;
LIBINT2_REALTYPE fp112;
fp112 = inteval->two_alpha0_bra[vi] * fp48;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_bra[vi] * fp112;
LIBINT2_REALTYPE fp4;
fp4 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_y[vi] * fp81;
LIBINT2_REALTYPE fp113;
fp113 = inteval->two_alpha0_bra[vi] * fp52;
LIBINT2_REALTYPE fp53;
fp53 = inteval->two_alpha0_bra[vi] * fp113;
LIBINT2_REALTYPE fp3;
fp3 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_x[vi] * fp80;
LIBINT2_REALTYPE fp58;
fp58 = fp63 + fp59;
LIBINT2_REALTYPE fp94;
fp94 = inteval->two_alpha0_bra[vi] * fp58;
LIBINT2_REALTYPE fp92;
fp92 = fp94 - fp93;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_z[vi] * fp92;
LIBINT2_REALTYPE fp55;
fp55 = inteval->two_alpha0_bra[vi] * fp114;
LIBINT2_REALTYPE fp2;
fp2 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp115;
fp115 = inteval->WQ_y[vi] * fp92;
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_bra[vi] * fp115;
LIBINT2_REALTYPE fp1;
fp1 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * fp65;
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp64;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_x[vi] * fp58;
LIBINT2_REALTYPE fp66;
fp66 = fp69 + fp67;
LIBINT2_REALTYPE fp118;
fp118 = inteval->two_alpha0_bra[vi] * fp66;
LIBINT2_REALTYPE fp116;
fp116 = fp118 - fp117;
LIBINT2_REALTYPE fp70;
fp70 = inteval->two_alpha0_bra[vi] * fp116;
LIBINT2_REALTYPE fp0;
fp0 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 119 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
