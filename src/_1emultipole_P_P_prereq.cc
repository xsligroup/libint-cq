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
void _1emultipole_P_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + fp57;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + fp65;
LIBINT2_REALTYPE fp158;
fp158 = fp108 * fp97;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PB_z[vi] * fp46;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PA_z[vi] * fp45;
LIBINT2_REALTYPE fp41;
fp41 = fp43 + fp42;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp41;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_z[vi] * fp80;
LIBINT2_REALTYPE fp62;
fp62 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp62 * fp45;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PB_z[vi] * fp45;
LIBINT2_REALTYPE fp39;
fp39 = fp40 + fp42;
LIBINT2_REALTYPE fp38;
fp38 = inteval->PA_z[vi] * fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp36;
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp112;
fp112 = fp158 * fp71;
LIBINT2_REALTYPE fp35;
fp35 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_z[vi] * fp46;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + fp44;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_z[vi] * fp81;
LIBINT2_REALTYPE fp73;
fp73 = fp80 + fp74;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PB_y[vi] * fp57;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + fp56;
LIBINT2_REALTYPE fp160;
fp160 = fp108 * fp96;
LIBINT2_REALTYPE fp113;
fp113 = fp160 * fp73;
LIBINT2_REALTYPE fp34;
fp34 = fp113;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->PB_x[vi] * fp65;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp162;
fp162 = fp109 * fp97;
LIBINT2_REALTYPE fp114;
fp114 = fp162 * fp73;
LIBINT2_REALTYPE fp33;
fp33 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + fp45;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_z[vi] * fp82;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp76;
fp76 = fp75 + fp77;
LIBINT2_REALTYPE fp55;
fp55 = inteval->PA_y[vi] * fp57;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + fp55;
LIBINT2_REALTYPE fp164;
fp164 = fp108 * fp95;
LIBINT2_REALTYPE fp115;
fp115 = fp164 * fp76;
LIBINT2_REALTYPE fp32;
fp32 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_z[vi] * fp83;
LIBINT2_REALTYPE fp78;
fp78 = fp82 + fp79;
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PA_y[vi] * fp56;
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + fp52;
LIBINT2_REALTYPE fp166;
fp166 = fp108 * fp94;
LIBINT2_REALTYPE fp116;
fp116 = fp166 * fp78;
LIBINT2_REALTYPE fp31;
fp31 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp168;
fp168 = fp109 * fp95;
LIBINT2_REALTYPE fp117;
fp117 = fp168 * fp78;
LIBINT2_REALTYPE fp30;
fp30 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp64;
fp64 = inteval->PA_x[vi] * fp65;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + fp64;
LIBINT2_REALTYPE fp170;
fp170 = fp110 * fp97;
LIBINT2_REALTYPE fp118;
fp118 = fp170 * fp76;
LIBINT2_REALTYPE fp29;
fp29 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp172;
fp172 = fp110 * fp96;
LIBINT2_REALTYPE fp119;
fp119 = fp172 * fp78;
LIBINT2_REALTYPE fp28;
fp28 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PA_x[vi] * fp66;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + fp67;
LIBINT2_REALTYPE fp174;
fp174 = fp111 * fp97;
LIBINT2_REALTYPE fp120;
fp120 = fp174 * fp78;
LIBINT2_REALTYPE fp27;
fp27 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_y[vi] * fp97;
LIBINT2_REALTYPE fp92;
fp92 = fp96 + fp93;
LIBINT2_REALTYPE fp122;
fp122 = fp108 * fp92;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp80;
LIBINT2_REALTYPE fp26;
fp26 = fp121;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->BO_y[vi] * fp96;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PB_y[vi] * fp56;
LIBINT2_REALTYPE fp50;
fp50 = fp51 + fp53;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + fp50;
LIBINT2_REALTYPE fp90;
fp90 = fp89 + fp91;
LIBINT2_REALTYPE fp124;
fp124 = fp108 * fp90;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp81;
LIBINT2_REALTYPE fp25;
fp25 = fp123;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp126;
fp126 = fp109 * fp92;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp81;
LIBINT2_REALTYPE fp24;
fp24 = fp125;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp88;
fp88 = inteval->BO_y[vi] * fp95;
LIBINT2_REALTYPE fp87;
fp87 = fp94 + fp88;
LIBINT2_REALTYPE fp128;
fp128 = fp108 * fp87;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp82;
LIBINT2_REALTYPE fp23;
fp23 = fp127;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_y[vi] * fp94;
LIBINT2_REALTYPE fp48;
fp48 = fp62 * fp56;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PA_y[vi] * fp50;
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + fp47;
LIBINT2_REALTYPE fp85;
fp85 = fp84 + fp86;
LIBINT2_REALTYPE fp130;
fp130 = fp108 * fp85;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp83;
LIBINT2_REALTYPE fp22;
fp22 = fp129;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp132;
fp132 = fp109 * fp87;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp83;
LIBINT2_REALTYPE fp21;
fp21 = fp131;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp134;
fp134 = fp110 * fp92;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp82;
LIBINT2_REALTYPE fp20;
fp20 = fp133;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp136;
fp136 = fp110 * fp90;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp83;
LIBINT2_REALTYPE fp19;
fp19 = fp135;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp138;
fp138 = fp111 * fp92;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp83;
LIBINT2_REALTYPE fp18;
fp18 = fp137;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_x[vi] * fp108;
LIBINT2_REALTYPE fp98;
fp98 = fp109 + fp99;
LIBINT2_REALTYPE fp140;
fp140 = fp98 * fp97;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp80;
LIBINT2_REALTYPE fp17;
fp17 = fp139;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp142;
fp142 = fp98 * fp96;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp81;
LIBINT2_REALTYPE fp16;
fp16 = fp141;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_x[vi] * fp109;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PB_x[vi] * fp66;
LIBINT2_REALTYPE fp58;
fp58 = fp59 + fp68;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp58;
LIBINT2_REALTYPE fp101;
fp101 = fp100 + fp102;
LIBINT2_REALTYPE fp144;
fp144 = fp101 * fp97;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp81;
LIBINT2_REALTYPE fp15;
fp15 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp146;
fp146 = fp98 * fp95;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp82;
LIBINT2_REALTYPE fp14;
fp14 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp148;
fp148 = fp98 * fp94;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp83;
LIBINT2_REALTYPE fp13;
fp13 = fp147;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp150;
fp150 = fp101 * fp95;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp83;
LIBINT2_REALTYPE fp12;
fp12 = fp149;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_x[vi] * fp110;
LIBINT2_REALTYPE fp103;
fp103 = fp111 + fp104;
LIBINT2_REALTYPE fp152;
fp152 = fp103 * fp97;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp82;
LIBINT2_REALTYPE fp11;
fp11 = fp151;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp154;
fp154 = fp103 * fp96;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp83;
LIBINT2_REALTYPE fp10;
fp10 = fp153;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_x[vi] * fp111;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp66;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_x[vi] * fp58;
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + fp60;
LIBINT2_REALTYPE fp106;
fp106 = fp105 + fp107;
LIBINT2_REALTYPE fp156;
fp156 = fp106 * fp97;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp83;
LIBINT2_REALTYPE fp9;
fp9 = fp155;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp80;
LIBINT2_REALTYPE fp8;
fp8 = fp157;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp81;
LIBINT2_REALTYPE fp7;
fp7 = fp159;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp81;
LIBINT2_REALTYPE fp6;
fp6 = fp161;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp82;
LIBINT2_REALTYPE fp5;
fp5 = fp163;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp83;
LIBINT2_REALTYPE fp4;
fp4 = fp165;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp83;
LIBINT2_REALTYPE fp3;
fp3 = fp167;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp82;
LIBINT2_REALTYPE fp2;
fp2 = fp169;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp83;
LIBINT2_REALTYPE fp1;
fp1 = fp171;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp83;
LIBINT2_REALTYPE fp0;
fp0 = fp173;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 175 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
