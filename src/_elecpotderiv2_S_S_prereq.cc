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
void _elecpotderiv2_S_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp167;
fp167 = 1.0000000000000000e+00 * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp118;
fp118 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp119;
fp119 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp119 * fp118;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp83;
fp83 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp83 - fp82;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PC_z[vi] * fp81;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp86;
fp86 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PB_z[vi] * fp84;
LIBINT2_REALTYPE fp109;
fp109 = fp111 - fp110;
LIBINT2_REALTYPE fp108;
fp108 = fp109 + fp117;
LIBINT2_REALTYPE fp160;
fp160 = inteval->two_alpha0_ket[vi] * fp108;
LIBINT2_REALTYPE fp159;
fp159 = fp160 - fp167;
LIBINT2_REALTYPE fp21;
fp21 = inteval->two_alpha0_ket[vi] * fp159;
LIBINT2_REALTYPE fp20;
fp20 = fp21;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp92;
fp92 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp154;
fp154 = inteval->PC_z[vi] * fp90;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp95;
fp95 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp95 - fp94;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PB_z[vi] * fp93;
LIBINT2_REALTYPE fp35;
fp35 = fp36 - fp154;
LIBINT2_REALTYPE fp161;
fp161 = inteval->two_alpha0_ket[vi] * fp35;
LIBINT2_REALTYPE fp22;
fp22 = inteval->two_alpha0_ket[vi] * fp161;
LIBINT2_REALTYPE fp19;
fp19 = fp22;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp114;
fp114 = inteval->PC_y[vi] * fp90;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PB_y[vi] * fp93;
LIBINT2_REALTYPE fp113;
fp113 = fp115 - fp114;
LIBINT2_REALTYPE fp112;
fp112 = fp113 + fp117;
LIBINT2_REALTYPE fp163;
fp163 = inteval->two_alpha0_ket[vi] * fp112;
LIBINT2_REALTYPE fp162;
fp162 = fp163 - fp167;
LIBINT2_REALTYPE fp23;
fp23 = inteval->two_alpha0_ket[vi] * fp162;
LIBINT2_REALTYPE fp18;
fp18 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp101;
fp101 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp101 - fp100;
LIBINT2_REALTYPE fp157;
fp157 = inteval->PC_z[vi] * fp99;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp104;
fp104 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PB_z[vi] * fp102;
LIBINT2_REALTYPE fp49;
fp49 = fp50 - fp157;
LIBINT2_REALTYPE fp164;
fp164 = inteval->two_alpha0_ket[vi] * fp49;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha0_ket[vi] * fp164;
LIBINT2_REALTYPE fp17;
fp17 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->PC_y[vi] * fp99;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PB_y[vi] * fp102;
LIBINT2_REALTYPE fp52;
fp52 = fp53 - fp127;
LIBINT2_REALTYPE fp165;
fp165 = inteval->two_alpha0_ket[vi] * fp52;
LIBINT2_REALTYPE fp25;
fp25 = inteval->two_alpha0_ket[vi] * fp165;
LIBINT2_REALTYPE fp16;
fp16 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->PC_x[vi] * fp99;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PB_x[vi] * fp102;
LIBINT2_REALTYPE fp120;
fp120 = fp122 - fp121;
LIBINT2_REALTYPE fp116;
fp116 = fp120 + fp117;
LIBINT2_REALTYPE fp168;
fp168 = inteval->two_alpha0_ket[vi] * fp116;
LIBINT2_REALTYPE fp166;
fp166 = fp168 - fp167;
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_ket[vi] * fp166;
LIBINT2_REALTYPE fp15;
fp15 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp89;
fp89 = inteval->PA_z[vi] * fp84;
LIBINT2_REALTYPE fp88;
fp88 = fp89 - fp110;
LIBINT2_REALTYPE fp87;
fp87 = fp88 + fp117;
LIBINT2_REALTYPE fp132;
fp132 = inteval->two_alpha0_ket[vi] * fp87;
LIBINT2_REALTYPE fp27;
fp27 = inteval->two_alpha0_bra[vi] * fp132;
LIBINT2_REALTYPE fp14;
fp14 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp155;
fp155 = inteval->PA_z[vi] * fp93;
LIBINT2_REALTYPE fp153;
fp153 = fp155 - fp154;
LIBINT2_REALTYPE fp135;
fp135 = inteval->two_alpha0_ket[vi] * fp153;
LIBINT2_REALTYPE fp28;
fp28 = inteval->two_alpha0_bra[vi] * fp135;
LIBINT2_REALTYPE fp13;
fp13 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp158;
fp158 = inteval->PA_z[vi] * fp102;
LIBINT2_REALTYPE fp156;
fp156 = fp158 - fp157;
LIBINT2_REALTYPE fp138;
fp138 = inteval->two_alpha0_ket[vi] * fp156;
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha0_bra[vi] * fp138;
LIBINT2_REALTYPE fp12;
fp12 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp57 - fp82;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PC_z[vi] * fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 - fp85;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PA_z[vi] * fp58;
LIBINT2_REALTYPE fp31;
fp31 = fp33 - fp32;
LIBINT2_REALTYPE fp30;
fp30 = fp31 + fp117;
LIBINT2_REALTYPE fp142;
fp142 = inteval->two_alpha0_bra[vi] * fp30;
LIBINT2_REALTYPE fp141;
fp141 = fp142 - fp167;
LIBINT2_REALTYPE fp34;
fp34 = inteval->two_alpha0_bra[vi] * fp141;
LIBINT2_REALTYPE fp11;
fp11 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp151;
fp151 = inteval->PC_y[vi] * fp81;
LIBINT2_REALTYPE fp152;
fp152 = inteval->PA_y[vi] * fp84;
LIBINT2_REALTYPE fp150;
fp150 = fp152 - fp151;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha0_ket[vi] * fp150;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_bra[vi] * fp133;
LIBINT2_REALTYPE fp10;
fp10 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp98;
fp98 = inteval->PA_y[vi] * fp93;
LIBINT2_REALTYPE fp97;
fp97 = fp98 - fp114;
LIBINT2_REALTYPE fp96;
fp96 = fp97 + fp117;
LIBINT2_REALTYPE fp136;
fp136 = inteval->two_alpha0_ket[vi] * fp96;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_bra[vi] * fp136;
LIBINT2_REALTYPE fp9;
fp9 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp128;
fp128 = inteval->PA_y[vi] * fp102;
LIBINT2_REALTYPE fp126;
fp126 = fp128 - fp127;
LIBINT2_REALTYPE fp139;
fp139 = inteval->two_alpha0_ket[vi] * fp126;
LIBINT2_REALTYPE fp39;
fp39 = inteval->two_alpha0_bra[vi] * fp139;
LIBINT2_REALTYPE fp8;
fp8 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp65;
fp65 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 - fp91;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PC_z[vi] * fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp67 - fp94;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PA_z[vi] * fp66;
LIBINT2_REALTYPE fp40;
fp40 = fp42 - fp41;
LIBINT2_REALTYPE fp143;
fp143 = inteval->two_alpha0_bra[vi] * fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha0_bra[vi] * fp143;
LIBINT2_REALTYPE fp7;
fp7 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp46;
fp46 = inteval->PC_y[vi] * fp64;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_y[vi] * fp66;
LIBINT2_REALTYPE fp45;
fp45 = fp47 - fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp45 + fp117;
LIBINT2_REALTYPE fp145;
fp145 = inteval->two_alpha0_bra[vi] * fp44;
LIBINT2_REALTYPE fp144;
fp144 = fp145 - fp167;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha0_bra[vi] * fp144;
LIBINT2_REALTYPE fp6;
fp6 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp124;
fp124 = inteval->PC_x[vi] * fp81;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PA_x[vi] * fp84;
LIBINT2_REALTYPE fp123;
fp123 = fp125 - fp124;
LIBINT2_REALTYPE fp134;
fp134 = inteval->two_alpha0_ket[vi] * fp123;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_bra[vi] * fp134;
LIBINT2_REALTYPE fp5;
fp5 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp130;
fp130 = inteval->PC_x[vi] * fp90;
LIBINT2_REALTYPE fp131;
fp131 = inteval->PA_x[vi] * fp93;
LIBINT2_REALTYPE fp129;
fp129 = fp131 - fp130;
LIBINT2_REALTYPE fp137;
fp137 = inteval->two_alpha0_ket[vi] * fp129;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_bra[vi] * fp137;
LIBINT2_REALTYPE fp4;
fp4 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_x[vi] * fp102;
LIBINT2_REALTYPE fp106;
fp106 = fp107 - fp121;
LIBINT2_REALTYPE fp105;
fp105 = fp106 + fp117;
LIBINT2_REALTYPE fp140;
fp140 = inteval->two_alpha0_ket[vi] * fp105;
LIBINT2_REALTYPE fp55;
fp55 = inteval->two_alpha0_bra[vi] * fp140;
LIBINT2_REALTYPE fp3;
fp3 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 - fp100;
LIBINT2_REALTYPE fp61;
fp61 = inteval->PC_z[vi] * fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp75 - fp103;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PA_z[vi] * fp74;
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
LIBINT2_REALTYPE fp146;
fp146 = inteval->two_alpha0_bra[vi] * fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha0_bra[vi] * fp146;
LIBINT2_REALTYPE fp2;
fp2 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->PC_y[vi] * fp72;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PA_y[vi] * fp74;
LIBINT2_REALTYPE fp68;
fp68 = fp70 - fp69;
LIBINT2_REALTYPE fp147;
fp147 = inteval->two_alpha0_bra[vi] * fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_bra[vi] * fp147;
LIBINT2_REALTYPE fp1;
fp1 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp78;
fp78 = inteval->PC_x[vi] * fp72;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_x[vi] * fp74;
LIBINT2_REALTYPE fp77;
fp77 = fp79 - fp78;
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp117;
LIBINT2_REALTYPE fp149;
fp149 = inteval->two_alpha0_bra[vi] * fp76;
LIBINT2_REALTYPE fp148;
fp148 = fp149 - fp167;
LIBINT2_REALTYPE fp80;
fp80 = inteval->two_alpha0_bra[vi] * fp148;
LIBINT2_REALTYPE fp0;
fp0 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 169 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
