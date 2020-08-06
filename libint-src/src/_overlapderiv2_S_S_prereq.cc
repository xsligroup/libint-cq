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
void _overlapderiv2_S_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + fp30;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp149;
fp149 = fp68 * fp63;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp57;
LIBINT2_REALTYPE fp153;
fp153 = 1.0000000000000000e+00 * fp148;
LIBINT2_REALTYPE fp50;
fp50 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp50 * fp30;
LIBINT2_REALTYPE fp28;
fp28 = inteval->PB_z[vi] * fp30;
LIBINT2_REALTYPE fp22;
fp22 = inteval->PB_z[vi] * fp28;
LIBINT2_REALTYPE fp21;
fp21 = fp22 + fp26;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + fp21;
LIBINT2_REALTYPE fp70;
fp70 = fp149 * fp52;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_ket[vi] * fp70;
LIBINT2_REALTYPE fp71;
fp71 = fp72 - fp153;
LIBINT2_REALTYPE fp73;
fp73 = inteval->two_alpha0_ket[vi] * fp71;
LIBINT2_REALTYPE fp20;
fp20 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp38;
fp38 = inteval->PB_y[vi] * fp40;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp98;
fp98 = fp68 * fp61;
LIBINT2_REALTYPE fp74;
fp74 = fp98 * fp55;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_ket[vi] * fp74;
LIBINT2_REALTYPE fp76;
fp76 = inteval->two_alpha0_ket[vi] * fp75;
LIBINT2_REALTYPE fp19;
fp19 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp36;
fp36 = fp50 * fp40;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PB_y[vi] * fp38;
LIBINT2_REALTYPE fp31;
fp31 = fp32 + fp36;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp31;
LIBINT2_REALTYPE fp78;
fp78 = fp68 * fp58;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp57;
LIBINT2_REALTYPE fp80;
fp80 = inteval->two_alpha0_ket[vi] * fp77;
LIBINT2_REALTYPE fp79;
fp79 = fp80 - fp153;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_ket[vi] * fp79;
LIBINT2_REALTYPE fp18;
fp18 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp43;
fp43 = inteval->PB_x[vi] * fp46;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + fp43;
LIBINT2_REALTYPE fp102;
fp102 = fp65 * fp63;
LIBINT2_REALTYPE fp82;
fp82 = fp102 * fp55;
LIBINT2_REALTYPE fp83;
fp83 = inteval->two_alpha0_ket[vi] * fp82;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_ket[vi] * fp83;
LIBINT2_REALTYPE fp17;
fp17 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp86;
fp86 = fp65 * fp61;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp57;
LIBINT2_REALTYPE fp87;
fp87 = inteval->two_alpha0_ket[vi] * fp85;
LIBINT2_REALTYPE fp88;
fp88 = inteval->two_alpha0_ket[vi] * fp87;
LIBINT2_REALTYPE fp16;
fp16 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp46;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PB_x[vi] * fp43;
LIBINT2_REALTYPE fp41;
fp41 = fp42 + fp49;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + fp41;
LIBINT2_REALTYPE fp90;
fp90 = fp64 * fp63;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp57;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_ket[vi] * fp89;
LIBINT2_REALTYPE fp91;
fp91 = fp92 - fp153;
LIBINT2_REALTYPE fp93;
fp93 = inteval->two_alpha0_ket[vi] * fp91;
LIBINT2_REALTYPE fp15;
fp15 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp24;
fp24 = inteval->PA_z[vi] * fp28;
LIBINT2_REALTYPE fp23;
fp23 = fp24 + fp26;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + fp23;
LIBINT2_REALTYPE fp94;
fp94 = fp149 * fp53;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_ket[vi] * fp94;
LIBINT2_REALTYPE fp96;
fp96 = inteval->two_alpha0_bra[vi] * fp95;
LIBINT2_REALTYPE fp14;
fp14 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * fp30;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + fp29;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp56;
LIBINT2_REALTYPE fp99;
fp99 = inteval->two_alpha0_ket[vi] * fp97;
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha0_bra[vi] * fp99;
LIBINT2_REALTYPE fp13;
fp13 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp56;
LIBINT2_REALTYPE fp103;
fp103 = inteval->two_alpha0_ket[vi] * fp101;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_bra[vi] * fp103;
LIBINT2_REALTYPE fp12;
fp12 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_z[vi] * fp29;
LIBINT2_REALTYPE fp25;
fp25 = fp27 + fp26;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + fp25;
LIBINT2_REALTYPE fp105;
fp105 = fp149 * fp54;
LIBINT2_REALTYPE fp107;
fp107 = inteval->two_alpha0_bra[vi] * fp105;
LIBINT2_REALTYPE fp106;
fp106 = fp107 - fp153;
LIBINT2_REALTYPE fp108;
fp108 = inteval->two_alpha0_bra[vi] * fp106;
LIBINT2_REALTYPE fp11;
fp11 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_y[vi] * fp40;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp121;
fp121 = fp68 * fp62;
LIBINT2_REALTYPE fp109;
fp109 = fp121 * fp55;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_ket[vi] * fp109;
LIBINT2_REALTYPE fp111;
fp111 = inteval->two_alpha0_bra[vi] * fp110;
LIBINT2_REALTYPE fp10;
fp10 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_y[vi] * fp38;
LIBINT2_REALTYPE fp33;
fp33 = fp34 + fp36;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp113;
fp113 = fp68 * fp59;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp57;
LIBINT2_REALTYPE fp114;
fp114 = inteval->two_alpha0_ket[vi] * fp112;
LIBINT2_REALTYPE fp115;
fp115 = inteval->two_alpha0_bra[vi] * fp114;
LIBINT2_REALTYPE fp9;
fp9 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp117;
fp117 = fp65 * fp62;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp57;
LIBINT2_REALTYPE fp118;
fp118 = inteval->two_alpha0_ket[vi] * fp116;
LIBINT2_REALTYPE fp119;
fp119 = inteval->two_alpha0_bra[vi] * fp118;
LIBINT2_REALTYPE fp8;
fp8 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp56;
LIBINT2_REALTYPE fp122;
fp122 = inteval->two_alpha0_bra[vi] * fp120;
LIBINT2_REALTYPE fp123;
fp123 = inteval->two_alpha0_bra[vi] * fp122;
LIBINT2_REALTYPE fp7;
fp7 = fp123;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp37;
fp37 = inteval->PA_y[vi] * fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + fp35;
LIBINT2_REALTYPE fp125;
fp125 = fp68 * fp60;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp57;
LIBINT2_REALTYPE fp127;
fp127 = inteval->two_alpha0_bra[vi] * fp124;
LIBINT2_REALTYPE fp126;
fp126 = fp127 - fp153;
LIBINT2_REALTYPE fp128;
fp128 = inteval->two_alpha0_bra[vi] * fp126;
LIBINT2_REALTYPE fp6;
fp6 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_x[vi] * fp46;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + fp47;
LIBINT2_REALTYPE fp141;
fp141 = fp67 * fp63;
LIBINT2_REALTYPE fp129;
fp129 = fp141 * fp55;
LIBINT2_REALTYPE fp130;
fp130 = inteval->two_alpha0_ket[vi] * fp129;
LIBINT2_REALTYPE fp131;
fp131 = inteval->two_alpha0_bra[vi] * fp130;
LIBINT2_REALTYPE fp5;
fp5 = fp131;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp133;
fp133 = fp67 * fp61;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp57;
LIBINT2_REALTYPE fp134;
fp134 = inteval->two_alpha0_ket[vi] * fp132;
LIBINT2_REALTYPE fp135;
fp135 = inteval->two_alpha0_bra[vi] * fp134;
LIBINT2_REALTYPE fp4;
fp4 = fp135;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_x[vi] * fp43;
LIBINT2_REALTYPE fp44;
fp44 = fp45 + fp49;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + fp44;
LIBINT2_REALTYPE fp137;
fp137 = fp66 * fp63;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp57;
LIBINT2_REALTYPE fp138;
fp138 = inteval->two_alpha0_ket[vi] * fp136;
LIBINT2_REALTYPE fp139;
fp139 = inteval->two_alpha0_bra[vi] * fp138;
LIBINT2_REALTYPE fp3;
fp3 = fp139;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp56;
LIBINT2_REALTYPE fp142;
fp142 = inteval->two_alpha0_bra[vi] * fp140;
LIBINT2_REALTYPE fp143;
fp143 = inteval->two_alpha0_bra[vi] * fp142;
LIBINT2_REALTYPE fp2;
fp2 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp145;
fp145 = fp67 * fp62;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp57;
LIBINT2_REALTYPE fp146;
fp146 = inteval->two_alpha0_bra[vi] * fp144;
LIBINT2_REALTYPE fp147;
fp147 = inteval->two_alpha0_bra[vi] * fp146;
LIBINT2_REALTYPE fp1;
fp1 = fp147;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp51;
fp51 = inteval->PA_x[vi] * fp47;
LIBINT2_REALTYPE fp48;
fp48 = fp51 + fp49;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + fp48;
LIBINT2_REALTYPE fp151;
fp151 = fp69 * fp63;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp57;
LIBINT2_REALTYPE fp154;
fp154 = inteval->two_alpha0_bra[vi] * fp150;
LIBINT2_REALTYPE fp152;
fp152 = fp154 - fp153;
LIBINT2_REALTYPE fp155;
fp155 = inteval->two_alpha0_bra[vi] * fp152;
LIBINT2_REALTYPE fp0;
fp0 = fp155;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 156 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
