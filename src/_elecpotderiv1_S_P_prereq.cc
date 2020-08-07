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
void _elecpotderiv1_S_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp98;
fp98 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp99;
fp99 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp99 * fp98;
LIBINT2_REALTYPE fp58;
fp58 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp59;
fp59 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp59 - fp58;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PC_z[vi] * fp57;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp42;
fp42 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp42 - fp41;
LIBINT2_REALTYPE fp30;
fp30 = inteval->PB_z[vi] * fp40;
LIBINT2_REALTYPE fp29;
fp29 = fp30 - fp72;
LIBINT2_REALTYPE fp28;
fp28 = fp29 + fp97;
LIBINT2_REALTYPE fp19;
fp19 = inteval->two_alpha0_ket[vi] * fp28;
LIBINT2_REALTYPE fp18;
fp18 = fp19 - fp26;
LIBINT2_REALTYPE fp17;
fp17 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp61;
fp61 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp62;
fp62 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PC_z[vi] * fp60;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp46;
fp46 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PB_z[vi] * fp44;
LIBINT2_REALTYPE fp66;
fp66 = fp67 - fp78;
LIBINT2_REALTYPE fp20;
fp20 = inteval->two_alpha0_ket[vi] * fp66;
LIBINT2_REALTYPE fp16;
fp16 = fp20;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp64;
fp64 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp65;
fp65 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp65 - fp64;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PC_z[vi] * fp63;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp52 - fp51;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PB_z[vi] * fp50;
LIBINT2_REALTYPE fp68;
fp68 = fp69 - fp88;
LIBINT2_REALTYPE fp23;
fp23 = inteval->two_alpha0_ket[vi] * fp68;
LIBINT2_REALTYPE fp15;
fp15 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp14;
fp14 = fp20;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp82;
fp82 = inteval->PC_y[vi] * fp60;
LIBINT2_REALTYPE fp37;
fp37 = inteval->PB_y[vi] * fp44;
LIBINT2_REALTYPE fp36;
fp36 = fp37 - fp82;
LIBINT2_REALTYPE fp35;
fp35 = fp36 + fp97;
LIBINT2_REALTYPE fp22;
fp22 = inteval->two_alpha0_ket[vi] * fp35;
LIBINT2_REALTYPE fp21;
fp21 = fp22 - fp26;
LIBINT2_REALTYPE fp13;
fp13 = fp21;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->PC_y[vi] * fp63;
LIBINT2_REALTYPE fp48;
fp48 = inteval->PB_y[vi] * fp50;
LIBINT2_REALTYPE fp47;
fp47 = fp48 - fp94;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha0_ket[vi] * fp47;
LIBINT2_REALTYPE fp12;
fp12 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp11;
fp11 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp10;
fp10 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp101;
fp101 = inteval->PC_x[vi] * fp63;
LIBINT2_REALTYPE fp55;
fp55 = inteval->PB_x[vi] * fp50;
LIBINT2_REALTYPE fp54;
fp54 = fp55 - fp101;
LIBINT2_REALTYPE fp53;
fp53 = fp54 + fp97;
LIBINT2_REALTYPE fp27;
fp27 = inteval->two_alpha0_ket[vi] * fp53;
LIBINT2_REALTYPE fp25;
fp25 = fp27 - fp26;
LIBINT2_REALTYPE fp9;
fp9 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_z[vi] * fp40;
LIBINT2_REALTYPE fp71;
fp71 = fp73 - fp72;
LIBINT2_REALTYPE fp70;
fp70 = fp71 + fp97;
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_bra[vi] * fp70;
LIBINT2_REALTYPE fp8;
fp8 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_z[vi] * fp44;
LIBINT2_REALTYPE fp77;
fp77 = fp79 - fp78;
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha0_bra[vi] * fp77;
LIBINT2_REALTYPE fp7;
fp7 = fp32;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp89;
fp89 = inteval->PA_z[vi] * fp50;
LIBINT2_REALTYPE fp87;
fp87 = fp89 - fp88;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha0_bra[vi] * fp87;
LIBINT2_REALTYPE fp6;
fp6 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_y[vi] * fp57;
LIBINT2_REALTYPE fp76;
fp76 = inteval->PA_y[vi] * fp40;
LIBINT2_REALTYPE fp74;
fp74 = fp76 - fp75;
LIBINT2_REALTYPE fp34;
fp34 = inteval->two_alpha0_bra[vi] * fp74;
LIBINT2_REALTYPE fp5;
fp5 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp83;
fp83 = inteval->PA_y[vi] * fp44;
LIBINT2_REALTYPE fp81;
fp81 = fp83 - fp82;
LIBINT2_REALTYPE fp80;
fp80 = fp81 + fp97;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_bra[vi] * fp80;
LIBINT2_REALTYPE fp4;
fp4 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp95;
fp95 = inteval->PA_y[vi] * fp50;
LIBINT2_REALTYPE fp93;
fp93 = fp95 - fp94;
LIBINT2_REALTYPE fp39;
fp39 = inteval->two_alpha0_bra[vi] * fp93;
LIBINT2_REALTYPE fp3;
fp3 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp85;
fp85 = inteval->PC_x[vi] * fp57;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PA_x[vi] * fp40;
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha0_bra[vi] * fp84;
LIBINT2_REALTYPE fp2;
fp2 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_x[vi] * fp60;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_x[vi] * fp44;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_bra[vi] * fp90;
LIBINT2_REALTYPE fp1;
fp1 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp102;
fp102 = inteval->PA_x[vi] * fp50;
LIBINT2_REALTYPE fp100;
fp100 = fp102 - fp101;
LIBINT2_REALTYPE fp96;
fp96 = fp100 + fp97;
LIBINT2_REALTYPE fp56;
fp56 = inteval->two_alpha0_bra[vi] * fp96;
LIBINT2_REALTYPE fp0;
fp0 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 103 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
