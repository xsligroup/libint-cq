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
void _kineticderiv2_S_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp30;
fp30 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp149 * fp115;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PB_z[vi] * fp115;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PA_z[vi] * fp111;
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
LIBINT2_REALTYPE fp12;
fp12 = fp29 * fp112;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp145 * fp131;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp12;
LIBINT2_REALTYPE fp129;
fp129 = fp149 * fp131;
LIBINT2_REALTYPE fp127;
fp127 = inteval->PB_y[vi] * fp131;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PA_y[vi] * fp127;
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
LIBINT2_REALTYPE fp19;
fp19 = fp29 * fp128;
LIBINT2_REALTYPE fp85;
fp85 = fp145 * fp19;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp115;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp145;
LIBINT2_REALTYPE fp132;
fp132 = inteval->PB_x[vi] * fp145;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_x[vi] * fp132;
LIBINT2_REALTYPE fp139;
fp139 = fp140 + fp148;
LIBINT2_REALTYPE fp24;
fp24 = fp29 * fp139;
LIBINT2_REALTYPE fp87;
fp87 = fp24 * fp131;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp115;
LIBINT2_REALTYPE fp83;
fp83 = fp86 + fp84;
LIBINT2_REALTYPE fp80;
fp80 = fp83 + fp81;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * fp80;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp27 * fp112;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PA_z[vi] * fp115;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PA_z[vi] * fp110;
LIBINT2_REALTYPE fp105;
fp105 = fp106 + fp113;
LIBINT2_REALTYPE fp143;
fp143 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp143 * fp105;
LIBINT2_REALTYPE fp137;
fp137 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp137 * fp110;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_z[vi] * fp105;
LIBINT2_REALTYPE fp100;
fp100 = fp101 + fp108;
LIBINT2_REALTYPE fp104;
fp104 = inteval->PB_z[vi] * fp100;
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
LIBINT2_REALTYPE fp8;
fp8 = fp29 * fp102;
LIBINT2_REALTYPE fp6;
fp6 = fp8 - fp7;
LIBINT2_REALTYPE fp32;
fp32 = fp82 * fp6;
LIBINT2_REALTYPE fp34;
fp34 = fp85 * fp105;
LIBINT2_REALTYPE fp35;
fp35 = fp87 * fp105;
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_bra[vi] * fp31;
LIBINT2_REALTYPE fp36;
fp36 = fp37 - fp97;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_bra[vi] * fp36;
LIBINT2_REALTYPE fp5;
fp5 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp22;
fp22 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp22 * fp111;
LIBINT2_REALTYPE fp109;
fp109 = inteval->PB_z[vi] * fp105;
LIBINT2_REALTYPE fp107;
fp107 = fp109 + fp108;
LIBINT2_REALTYPE fp11;
fp11 = fp29 * fp107;
LIBINT2_REALTYPE fp9;
fp9 = fp11 - fp10;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PA_y[vi] * fp131;
LIBINT2_REALTYPE fp41;
fp41 = fp145 * fp126;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp9;
LIBINT2_REALTYPE fp17;
fp17 = fp22 * fp127;
LIBINT2_REALTYPE fp124;
fp124 = fp137 * fp126;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_y[vi] * fp126;
LIBINT2_REALTYPE fp121;
fp121 = fp122 + fp129;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PB_y[vi] * fp121;
LIBINT2_REALTYPE fp123;
fp123 = fp125 + fp124;
LIBINT2_REALTYPE fp18;
fp18 = fp29 * fp123;
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
LIBINT2_REALTYPE fp44;
fp44 = fp145 * fp16;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp110;
LIBINT2_REALTYPE fp46;
fp46 = fp24 * fp126;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp110;
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_bra[vi] * fp39;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha0_bra[vi] * fp47;
LIBINT2_REALTYPE fp4;
fp4 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp51;
fp51 = fp145 * fp121;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp12;
LIBINT2_REALTYPE fp14;
fp14 = fp27 * fp128;
LIBINT2_REALTYPE fp119;
fp119 = fp143 * fp121;
LIBINT2_REALTYPE fp117;
fp117 = inteval->PA_y[vi] * fp121;
LIBINT2_REALTYPE fp116;
fp116 = fp117 + fp124;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PB_y[vi] * fp116;
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
LIBINT2_REALTYPE fp15;
fp15 = fp29 * fp118;
LIBINT2_REALTYPE fp13;
fp13 = fp15 - fp14;
LIBINT2_REALTYPE fp54;
fp54 = fp145 * fp13;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp115;
LIBINT2_REALTYPE fp56;
fp56 = fp24 * fp121;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp115;
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
LIBINT2_REALTYPE fp58;
fp58 = inteval->two_alpha0_bra[vi] * fp49;
LIBINT2_REALTYPE fp57;
fp57 = fp58 - fp97;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_bra[vi] * fp57;
LIBINT2_REALTYPE fp3;
fp3 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp146;
fp146 = inteval->PA_x[vi] * fp145;
LIBINT2_REALTYPE fp62;
fp62 = fp146 * fp131;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp9;
LIBINT2_REALTYPE fp65;
fp65 = fp146 * fp19;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp110;
LIBINT2_REALTYPE fp21;
fp21 = fp22 * fp132;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp146;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PA_x[vi] * fp146;
LIBINT2_REALTYPE fp147;
fp147 = fp150 + fp148;
LIBINT2_REALTYPE fp138;
fp138 = inteval->PB_x[vi] * fp147;
LIBINT2_REALTYPE fp135;
fp135 = fp138 + fp136;
LIBINT2_REALTYPE fp23;
fp23 = fp29 * fp135;
LIBINT2_REALTYPE fp20;
fp20 = fp23 - fp21;
LIBINT2_REALTYPE fp67;
fp67 = fp20 * fp131;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp110;
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_bra[vi] * fp60;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_bra[vi] * fp68;
LIBINT2_REALTYPE fp2;
fp2 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp72;
fp72 = fp146 * fp126;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp12;
LIBINT2_REALTYPE fp75;
fp75 = fp146 * fp16;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp115;
LIBINT2_REALTYPE fp77;
fp77 = fp20 * fp126;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp115;
LIBINT2_REALTYPE fp73;
fp73 = fp76 + fp74;
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_bra[vi] * fp70;
LIBINT2_REALTYPE fp79;
fp79 = inteval->two_alpha0_bra[vi] * fp78;
LIBINT2_REALTYPE fp1;
fp1 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp90;
fp90 = fp147 * fp131;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp12;
LIBINT2_REALTYPE fp93;
fp93 = fp147 * fp19;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp115;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp147;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PA_x[vi] * fp147;
LIBINT2_REALTYPE fp133;
fp133 = fp134 + fp136;
LIBINT2_REALTYPE fp144;
fp144 = inteval->PB_x[vi] * fp133;
LIBINT2_REALTYPE fp141;
fp141 = fp144 + fp142;
LIBINT2_REALTYPE fp28;
fp28 = fp29 * fp141;
LIBINT2_REALTYPE fp25;
fp25 = fp28 - fp26;
LIBINT2_REALTYPE fp95;
fp95 = fp25 * fp131;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp115;
LIBINT2_REALTYPE fp91;
fp91 = fp94 + fp92;
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_bra[vi] * fp88;
LIBINT2_REALTYPE fp96;
fp96 = fp98 - fp97;
LIBINT2_REALTYPE fp99;
fp99 = inteval->two_alpha0_bra[vi] * fp96;
LIBINT2_REALTYPE fp0;
fp0 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 151 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
