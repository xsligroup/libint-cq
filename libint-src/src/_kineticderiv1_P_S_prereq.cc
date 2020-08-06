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
void _kineticderiv1_P_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp33;
fp33 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp146;
fp146 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp146 * fp112;
LIBINT2_REALTYPE fp108;
fp108 = inteval->PB_z[vi] * fp112;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PA_z[vi] * fp108;
LIBINT2_REALTYPE fp109;
fp109 = fp111 + fp110;
LIBINT2_REALTYPE fp15;
fp15 = fp32 * fp109;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp80;
fp80 = fp142 * fp128;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp15;
LIBINT2_REALTYPE fp126;
fp126 = fp146 * fp128;
LIBINT2_REALTYPE fp124;
fp124 = inteval->PB_y[vi] * fp128;
LIBINT2_REALTYPE fp127;
fp127 = inteval->PA_y[vi] * fp124;
LIBINT2_REALTYPE fp125;
fp125 = fp127 + fp126;
LIBINT2_REALTYPE fp22;
fp22 = fp32 * fp125;
LIBINT2_REALTYPE fp83;
fp83 = fp142 * fp22;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp112;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp142;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PB_x[vi] * fp142;
LIBINT2_REALTYPE fp137;
fp137 = inteval->PA_x[vi] * fp129;
LIBINT2_REALTYPE fp136;
fp136 = fp137 + fp145;
LIBINT2_REALTYPE fp27;
fp27 = fp32 * fp136;
LIBINT2_REALTYPE fp85;
fp85 = fp27 * fp128;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp112;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * fp78;
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp30 * fp109;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_z[vi] * fp112;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_z[vi] * fp107;
LIBINT2_REALTYPE fp102;
fp102 = fp103 + fp110;
LIBINT2_REALTYPE fp140;
fp140 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp140 * fp102;
LIBINT2_REALTYPE fp134;
fp134 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp134 * fp107;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PA_z[vi] * fp102;
LIBINT2_REALTYPE fp97;
fp97 = fp98 + fp105;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PB_z[vi] * fp97;
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp11;
fp11 = fp32 * fp99;
LIBINT2_REALTYPE fp9;
fp9 = fp11 - fp10;
LIBINT2_REALTYPE fp35;
fp35 = fp80 * fp9;
LIBINT2_REALTYPE fp37;
fp37 = fp83 * fp102;
LIBINT2_REALTYPE fp38;
fp38 = fp85 * fp102;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_bra[vi] * fp34;
LIBINT2_REALTYPE fp39;
fp39 = fp40 - fp95;
LIBINT2_REALTYPE fp8;
fp8 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp25;
fp25 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp25 * fp108;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PB_z[vi] * fp102;
LIBINT2_REALTYPE fp104;
fp104 = fp106 + fp105;
LIBINT2_REALTYPE fp14;
fp14 = fp32 * fp104;
LIBINT2_REALTYPE fp12;
fp12 = fp14 - fp13;
LIBINT2_REALTYPE fp123;
fp123 = inteval->PA_y[vi] * fp128;
LIBINT2_REALTYPE fp43;
fp43 = fp142 * fp123;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp12;
LIBINT2_REALTYPE fp20;
fp20 = fp25 * fp124;
LIBINT2_REALTYPE fp121;
fp121 = fp134 * fp123;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PA_y[vi] * fp123;
LIBINT2_REALTYPE fp118;
fp118 = fp119 + fp126;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PB_y[vi] * fp118;
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
LIBINT2_REALTYPE fp21;
fp21 = fp32 * fp120;
LIBINT2_REALTYPE fp19;
fp19 = fp21 - fp20;
LIBINT2_REALTYPE fp46;
fp46 = fp142 * fp19;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp107;
LIBINT2_REALTYPE fp48;
fp48 = fp27 * fp123;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp107;
LIBINT2_REALTYPE fp44;
fp44 = fp47 + fp45;
LIBINT2_REALTYPE fp41;
fp41 = fp44 + fp42;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_bra[vi] * fp41;
LIBINT2_REALTYPE fp7;
fp7 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_x[vi] * fp142;
LIBINT2_REALTYPE fp62;
fp62 = fp143 * fp128;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp12;
LIBINT2_REALTYPE fp65;
fp65 = fp143 * fp22;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp107;
LIBINT2_REALTYPE fp24;
fp24 = fp25 * fp129;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp143;
LIBINT2_REALTYPE fp147;
fp147 = inteval->PA_x[vi] * fp143;
LIBINT2_REALTYPE fp144;
fp144 = fp147 + fp145;
LIBINT2_REALTYPE fp135;
fp135 = inteval->PB_x[vi] * fp144;
LIBINT2_REALTYPE fp132;
fp132 = fp135 + fp133;
LIBINT2_REALTYPE fp26;
fp26 = fp32 * fp132;
LIBINT2_REALTYPE fp23;
fp23 = fp26 - fp24;
LIBINT2_REALTYPE fp67;
fp67 = fp23 * fp128;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp107;
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_bra[vi] * fp60;
LIBINT2_REALTYPE fp6;
fp6 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp5;
fp5 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp52;
fp52 = fp142 * fp118;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp15;
LIBINT2_REALTYPE fp17;
fp17 = fp30 * fp125;
LIBINT2_REALTYPE fp116;
fp116 = fp140 * fp118;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PA_y[vi] * fp118;
LIBINT2_REALTYPE fp113;
fp113 = fp114 + fp121;
LIBINT2_REALTYPE fp117;
fp117 = inteval->PB_y[vi] * fp113;
LIBINT2_REALTYPE fp115;
fp115 = fp117 + fp116;
LIBINT2_REALTYPE fp18;
fp18 = fp32 * fp115;
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
LIBINT2_REALTYPE fp55;
fp55 = fp142 * fp16;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp112;
LIBINT2_REALTYPE fp57;
fp57 = fp27 * fp118;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp112;
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
LIBINT2_REALTYPE fp50;
fp50 = fp53 + fp51;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_bra[vi] * fp50;
LIBINT2_REALTYPE fp58;
fp58 = fp59 - fp95;
LIBINT2_REALTYPE fp4;
fp4 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp71;
fp71 = fp143 * fp123;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp15;
LIBINT2_REALTYPE fp74;
fp74 = fp143 * fp19;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp112;
LIBINT2_REALTYPE fp76;
fp76 = fp23 * fp123;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp112;
LIBINT2_REALTYPE fp72;
fp72 = fp75 + fp73;
LIBINT2_REALTYPE fp69;
fp69 = fp72 + fp70;
LIBINT2_REALTYPE fp77;
fp77 = inteval->two_alpha0_bra[vi] * fp69;
LIBINT2_REALTYPE fp3;
fp3 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp2;
fp2 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp1;
fp1 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp88;
fp88 = fp144 * fp128;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp15;
LIBINT2_REALTYPE fp91;
fp91 = fp144 * fp22;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp112;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp144;
LIBINT2_REALTYPE fp131;
fp131 = inteval->PA_x[vi] * fp144;
LIBINT2_REALTYPE fp130;
fp130 = fp131 + fp133;
LIBINT2_REALTYPE fp141;
fp141 = inteval->PB_x[vi] * fp130;
LIBINT2_REALTYPE fp138;
fp138 = fp141 + fp139;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp138;
LIBINT2_REALTYPE fp28;
fp28 = fp31 - fp29;
LIBINT2_REALTYPE fp93;
fp93 = fp28 * fp128;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp112;
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
LIBINT2_REALTYPE fp86;
fp86 = fp89 + fp87;
LIBINT2_REALTYPE fp96;
fp96 = inteval->two_alpha0_bra[vi] * fp86;
LIBINT2_REALTYPE fp94;
fp94 = fp96 - fp95;
LIBINT2_REALTYPE fp0;
fp0 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 148 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
