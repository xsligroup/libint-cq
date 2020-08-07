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
void _overlapderiv1_P_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + fp37;
LIBINT2_REALTYPE fp99;
fp99 = fp56 * fp52;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp41 * fp25;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PB_z[vi] * fp25;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PA_z[vi] * fp20;
LIBINT2_REALTYPE fp18;
fp18 = fp19 + fp22;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp58;
fp58 = fp99 * fp43;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_ket[vi] * fp58;
LIBINT2_REALTYPE fp17;
fp17 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + fp20;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PA_y[vi] * fp33;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + fp32;
LIBINT2_REALTYPE fp86;
fp86 = fp56 * fp51;
LIBINT2_REALTYPE fp60;
fp60 = fp86 * fp44;
LIBINT2_REALTYPE fp61;
fp61 = inteval->two_alpha0_ket[vi] * fp60;
LIBINT2_REALTYPE fp16;
fp16 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp38;
fp38 = inteval->PA_x[vi] * fp37;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp93;
fp93 = fp55 * fp52;
LIBINT2_REALTYPE fp62;
fp62 = fp93 * fp44;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha0_ket[vi] * fp62;
LIBINT2_REALTYPE fp15;
fp15 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp24;
fp24 = inteval->PA_z[vi] * fp25;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + fp24;
LIBINT2_REALTYPE fp28;
fp28 = inteval->PB_y[vi] * fp33;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp65;
fp65 = fp56 * fp49;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp46;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_ket[vi] * fp64;
LIBINT2_REALTYPE fp14;
fp14 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + fp25;
LIBINT2_REALTYPE fp30;
fp30 = fp41 * fp33;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_y[vi] * fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + fp30;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + fp26;
LIBINT2_REALTYPE fp68;
fp68 = fp56 * fp48;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp47;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_ket[vi] * fp67;
LIBINT2_REALTYPE fp13;
fp13 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp71;
fp71 = fp55 * fp49;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp47;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_ket[vi] * fp70;
LIBINT2_REALTYPE fp12;
fp12 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp34;
fp34 = inteval->PB_x[vi] * fp37;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp74;
fp74 = fp53 * fp52;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp46;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_ket[vi] * fp73;
LIBINT2_REALTYPE fp11;
fp11 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp77;
fp77 = fp53 * fp51;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp47;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_ket[vi] * fp76;
LIBINT2_REALTYPE fp10;
fp10 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp37;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PA_x[vi] * fp34;
LIBINT2_REALTYPE fp35;
fp35 = fp36 + fp40;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + fp35;
LIBINT2_REALTYPE fp80;
fp80 = fp54 * fp52;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp47;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_ket[vi] * fp79;
LIBINT2_REALTYPE fp9;
fp9 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp47;
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * fp24;
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + fp21;
LIBINT2_REALTYPE fp82;
fp82 = fp99 * fp45;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_bra[vi] * fp82;
LIBINT2_REALTYPE fp83;
fp83 = fp84 - fp103;
LIBINT2_REALTYPE fp8;
fp8 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp46;
LIBINT2_REALTYPE fp87;
fp87 = inteval->two_alpha0_bra[vi] * fp85;
LIBINT2_REALTYPE fp7;
fp7 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp46;
LIBINT2_REALTYPE fp94;
fp94 = inteval->two_alpha0_bra[vi] * fp92;
LIBINT2_REALTYPE fp6;
fp6 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp5;
fp5 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_y[vi] * fp32;
LIBINT2_REALTYPE fp29;
fp29 = fp31 + fp30;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + fp29;
LIBINT2_REALTYPE fp89;
fp89 = fp56 * fp50;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp47;
LIBINT2_REALTYPE fp91;
fp91 = inteval->two_alpha0_bra[vi] * fp88;
LIBINT2_REALTYPE fp90;
fp90 = fp91 - fp103;
LIBINT2_REALTYPE fp4;
fp4 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp96;
fp96 = fp55 * fp51;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp47;
LIBINT2_REALTYPE fp97;
fp97 = inteval->two_alpha0_bra[vi] * fp95;
LIBINT2_REALTYPE fp3;
fp3 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp2;
fp2 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp1;
fp1 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp42;
fp42 = inteval->PA_x[vi] * fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp101;
fp101 = fp57 * fp52;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp47;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_bra[vi] * fp100;
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
LIBINT2_REALTYPE fp0;
fp0 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 105 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
