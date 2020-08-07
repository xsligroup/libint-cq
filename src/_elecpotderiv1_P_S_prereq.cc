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
void _elecpotderiv1_P_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp107;
fp107 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp108;
fp108 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp108 * fp107;
LIBINT2_REALTYPE fp83;
fp83 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp19;
fp19 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 - fp83;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PC_z[vi] * fp18;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp21;
fp21 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp21 - fp86;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = fp25 - fp24;
LIBINT2_REALTYPE fp22;
fp22 = fp23 + fp106;
LIBINT2_REALTYPE fp60;
fp60 = inteval->two_alpha0_ket[vi] * fp22;
LIBINT2_REALTYPE fp17;
fp17 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->PC_y[vi] * fp18;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PA_y[vi] * fp20;
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
LIBINT2_REALTYPE fp61;
fp61 = inteval->two_alpha0_ket[vi] * fp48;
LIBINT2_REALTYPE fp16;
fp16 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp55;
fp55 = inteval->PC_x[vi] * fp18;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PA_x[vi] * fp20;
LIBINT2_REALTYPE fp54;
fp54 = fp56 - fp55;
LIBINT2_REALTYPE fp62;
fp62 = inteval->two_alpha0_ket[vi] * fp54;
LIBINT2_REALTYPE fp15;
fp15 = fp62;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp90;
fp90 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp27 - fp90;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PC_z[vi] * fp26;
LIBINT2_REALTYPE fp93;
fp93 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 - fp93;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * fp28;
LIBINT2_REALTYPE fp51;
fp51 = fp53 - fp52;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha0_ket[vi] * fp51;
LIBINT2_REALTYPE fp14;
fp14 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp32;
fp32 = inteval->PC_y[vi] * fp26;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PA_y[vi] * fp28;
LIBINT2_REALTYPE fp31;
fp31 = fp33 - fp32;
LIBINT2_REALTYPE fp30;
fp30 = fp31 + fp106;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_ket[vi] * fp30;
LIBINT2_REALTYPE fp13;
fp13 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp58;
fp58 = inteval->PC_x[vi] * fp26;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_x[vi] * fp28;
LIBINT2_REALTYPE fp57;
fp57 = fp59 - fp58;
LIBINT2_REALTYPE fp65;
fp65 = inteval->two_alpha0_ket[vi] * fp57;
LIBINT2_REALTYPE fp12;
fp12 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp35;
fp35 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 - fp100;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PC_z[vi] * fp34;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp37;
fp37 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 - fp103;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_z[vi] * fp36;
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_ket[vi] * fp42;
LIBINT2_REALTYPE fp11;
fp11 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp46;
fp46 = inteval->PC_y[vi] * fp34;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_y[vi] * fp36;
LIBINT2_REALTYPE fp45;
fp45 = fp47 - fp46;
LIBINT2_REALTYPE fp67;
fp67 = inteval->two_alpha0_ket[vi] * fp45;
LIBINT2_REALTYPE fp10;
fp10 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp40;
fp40 = inteval->PC_x[vi] * fp34;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_x[vi] * fp36;
LIBINT2_REALTYPE fp39;
fp39 = fp41 - fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp39 + fp106;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_ket[vi] * fp38;
LIBINT2_REALTYPE fp9;
fp9 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp84;
fp84 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp84 - fp83;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PC_z[vi] * fp82;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp87 - fp86;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PA_z[vi] * fp85;
LIBINT2_REALTYPE fp70;
fp70 = fp72 - fp71;
LIBINT2_REALTYPE fp69;
fp69 = fp70 + fp106;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha0_bra[vi] * fp69;
LIBINT2_REALTYPE fp73;
fp73 = fp74 - fp113;
LIBINT2_REALTYPE fp8;
fp8 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp91 - fp90;
LIBINT2_REALTYPE fp116;
fp116 = inteval->PC_z[vi] * fp89;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp94 - fp93;
LIBINT2_REALTYPE fp117;
fp117 = inteval->PA_z[vi] * fp92;
LIBINT2_REALTYPE fp115;
fp115 = fp117 - fp116;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_bra[vi] * fp115;
LIBINT2_REALTYPE fp7;
fp7 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp101 - fp100;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PC_z[vi] * fp99;
LIBINT2_REALTYPE fp104;
fp104 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PA_z[vi] * fp102;
LIBINT2_REALTYPE fp118;
fp118 = fp120 - fp119;
LIBINT2_REALTYPE fp88;
fp88 = inteval->two_alpha0_bra[vi] * fp118;
LIBINT2_REALTYPE fp6;
fp6 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp5;
fp5 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp78;
fp78 = inteval->PC_y[vi] * fp89;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_y[vi] * fp92;
LIBINT2_REALTYPE fp77;
fp77 = fp79 - fp78;
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp106;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_bra[vi] * fp76;
LIBINT2_REALTYPE fp80;
fp80 = fp81 - fp113;
LIBINT2_REALTYPE fp4;
fp4 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp96;
fp96 = inteval->PC_y[vi] * fp99;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PA_y[vi] * fp102;
LIBINT2_REALTYPE fp95;
fp95 = fp97 - fp96;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_bra[vi] * fp95;
LIBINT2_REALTYPE fp3;
fp3 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp2;
fp2 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp1;
fp1 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp110;
fp110 = inteval->PC_x[vi] * fp99;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PA_x[vi] * fp102;
LIBINT2_REALTYPE fp109;
fp109 = fp111 - fp110;
LIBINT2_REALTYPE fp105;
fp105 = fp109 + fp106;
LIBINT2_REALTYPE fp114;
fp114 = inteval->two_alpha0_bra[vi] * fp105;
LIBINT2_REALTYPE fp112;
fp112 = fp114 - fp113;
LIBINT2_REALTYPE fp0;
fp0 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 121 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
