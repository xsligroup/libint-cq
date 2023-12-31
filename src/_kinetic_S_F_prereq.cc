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
void _kinetic_S_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp40;
fp40 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp140;
fp140 = inteval->PB_z[vi] * fp144;
LIBINT2_REALTYPE fp189;
fp189 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp137;
fp137 = fp189 * fp140;
LIBINT2_REALTYPE fp185;
fp185 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp185 * fp144;
LIBINT2_REALTYPE fp135;
fp135 = inteval->PB_z[vi] * fp140;
LIBINT2_REALTYPE fp134;
fp134 = fp135 + fp142;
LIBINT2_REALTYPE fp138;
fp138 = inteval->PA_z[vi] * fp134;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
LIBINT2_REALTYPE fp11;
fp11 = fp40 * fp136;
LIBINT2_REALTYPE fp43;
fp43 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp130;
fp130 = inteval->PB_z[vi] * fp134;
LIBINT2_REALTYPE fp129;
fp129 = fp130 + fp137;
LIBINT2_REALTYPE fp179;
fp179 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp179 * fp129;
LIBINT2_REALTYPE fp173;
fp173 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp173 * fp134;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PB_z[vi] * fp129;
LIBINT2_REALTYPE fp124;
fp124 = fp125 + fp132;
LIBINT2_REALTYPE fp128;
fp128 = inteval->PA_z[vi] * fp124;
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
LIBINT2_REALTYPE fp12;
fp12 = fp42 * fp126;
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp181 * fp165;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp10;
LIBINT2_REALTYPE fp163;
fp163 = fp185 * fp165;
LIBINT2_REALTYPE fp161;
fp161 = inteval->PB_y[vi] * fp165;
LIBINT2_REALTYPE fp164;
fp164 = inteval->PA_y[vi] * fp161;
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
LIBINT2_REALTYPE fp29;
fp29 = fp42 * fp162;
LIBINT2_REALTYPE fp49;
fp49 = fp181 * fp29;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp129;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp181;
LIBINT2_REALTYPE fp182;
fp182 = inteval->PB_x[vi] * fp181;
LIBINT2_REALTYPE fp168;
fp168 = inteval->PA_x[vi] * fp182;
LIBINT2_REALTYPE fp167;
fp167 = fp168 + fp184;
LIBINT2_REALTYPE fp30;
fp30 = fp42 * fp167;
LIBINT2_REALTYPE fp51;
fp51 = fp30 * fp165;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp129;
LIBINT2_REALTYPE fp47;
fp47 = fp50 + fp48;
LIBINT2_REALTYPE fp44;
fp44 = fp47 + fp45;
LIBINT2_REALTYPE fp9;
fp9 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_z[vi] * fp140;
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp14;
fp14 = fp36 * fp141;
LIBINT2_REALTYPE fp133;
fp133 = inteval->PA_z[vi] * fp129;
LIBINT2_REALTYPE fp131;
fp131 = fp133 + fp132;
LIBINT2_REALTYPE fp15;
fp15 = fp42 * fp131;
LIBINT2_REALTYPE fp13;
fp13 = fp15 - fp14;
LIBINT2_REALTYPE fp54;
fp54 = fp181 * fp161;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp13;
LIBINT2_REALTYPE fp160;
fp160 = inteval->PA_y[vi] * fp165;
LIBINT2_REALTYPE fp27;
fp27 = fp43 * fp160;
LIBINT2_REALTYPE fp158;
fp158 = fp189 * fp161;
LIBINT2_REALTYPE fp156;
fp156 = inteval->PB_y[vi] * fp161;
LIBINT2_REALTYPE fp155;
fp155 = fp156 + fp163;
LIBINT2_REALTYPE fp159;
fp159 = inteval->PA_y[vi] * fp155;
LIBINT2_REALTYPE fp157;
fp157 = fp159 + fp158;
LIBINT2_REALTYPE fp28;
fp28 = fp42 * fp157;
LIBINT2_REALTYPE fp26;
fp26 = fp28 - fp27;
LIBINT2_REALTYPE fp57;
fp57 = fp181 * fp26;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp134;
LIBINT2_REALTYPE fp59;
fp59 = fp30 * fp161;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp134;
LIBINT2_REALTYPE fp55;
fp55 = fp58 + fp56;
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
LIBINT2_REALTYPE fp8;
fp8 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp139;
fp139 = inteval->PA_z[vi] * fp144;
LIBINT2_REALTYPE fp17;
fp17 = fp43 * fp139;
LIBINT2_REALTYPE fp18;
fp18 = fp42 * fp136;
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
LIBINT2_REALTYPE fp62;
fp62 = fp181 * fp155;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp16;
LIBINT2_REALTYPE fp24;
fp24 = fp36 * fp162;
LIBINT2_REALTYPE fp153;
fp153 = fp173 * fp155;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PB_y[vi] * fp155;
LIBINT2_REALTYPE fp150;
fp150 = fp151 + fp158;
LIBINT2_REALTYPE fp154;
fp154 = inteval->PA_y[vi] * fp150;
LIBINT2_REALTYPE fp152;
fp152 = fp154 + fp153;
LIBINT2_REALTYPE fp25;
fp25 = fp42 * fp152;
LIBINT2_REALTYPE fp23;
fp23 = fp25 - fp24;
LIBINT2_REALTYPE fp65;
fp65 = fp181 * fp23;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp140;
LIBINT2_REALTYPE fp67;
fp67 = fp30 * fp155;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp140;
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
LIBINT2_REALTYPE fp7;
fp7 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp19;
fp19 = fp42 * fp141;
LIBINT2_REALTYPE fp70;
fp70 = fp181 * fp150;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp19;
LIBINT2_REALTYPE fp21;
fp21 = fp40 * fp157;
LIBINT2_REALTYPE fp148;
fp148 = fp179 * fp150;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PB_y[vi] * fp150;
LIBINT2_REALTYPE fp145;
fp145 = fp146 + fp153;
LIBINT2_REALTYPE fp149;
fp149 = inteval->PA_y[vi] * fp145;
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
LIBINT2_REALTYPE fp22;
fp22 = fp42 * fp147;
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
LIBINT2_REALTYPE fp73;
fp73 = fp181 * fp20;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp144;
LIBINT2_REALTYPE fp75;
fp75 = fp30 * fp150;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp144;
LIBINT2_REALTYPE fp71;
fp71 = fp74 + fp72;
LIBINT2_REALTYPE fp68;
fp68 = fp71 + fp69;
LIBINT2_REALTYPE fp6;
fp6 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp78;
fp78 = fp182 * fp165;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp13;
LIBINT2_REALTYPE fp81;
fp81 = fp182 * fp29;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp134;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PA_x[vi] * fp181;
LIBINT2_REALTYPE fp32;
fp32 = fp43 * fp166;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp182;
LIBINT2_REALTYPE fp186;
fp186 = inteval->PB_x[vi] * fp182;
LIBINT2_REALTYPE fp183;
fp183 = fp186 + fp184;
LIBINT2_REALTYPE fp176;
fp176 = inteval->PA_x[vi] * fp183;
LIBINT2_REALTYPE fp175;
fp175 = fp176 + fp188;
LIBINT2_REALTYPE fp33;
fp33 = fp42 * fp175;
LIBINT2_REALTYPE fp31;
fp31 = fp33 - fp32;
LIBINT2_REALTYPE fp83;
fp83 = fp31 * fp165;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp134;
LIBINT2_REALTYPE fp79;
fp79 = fp82 + fp80;
LIBINT2_REALTYPE fp76;
fp76 = fp79 + fp77;
LIBINT2_REALTYPE fp5;
fp5 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp86;
fp86 = fp182 * fp161;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp16;
LIBINT2_REALTYPE fp89;
fp89 = fp182 * fp26;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp140;
LIBINT2_REALTYPE fp91;
fp91 = fp31 * fp161;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp140;
LIBINT2_REALTYPE fp87;
fp87 = fp90 + fp88;
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
LIBINT2_REALTYPE fp4;
fp4 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp94;
fp94 = fp182 * fp155;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp19;
LIBINT2_REALTYPE fp97;
fp97 = fp182 * fp23;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp144;
LIBINT2_REALTYPE fp99;
fp99 = fp31 * fp155;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp144;
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
LIBINT2_REALTYPE fp3;
fp3 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp102;
fp102 = fp183 * fp165;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp16;
LIBINT2_REALTYPE fp105;
fp105 = fp183 * fp29;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp140;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp167;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp183;
LIBINT2_REALTYPE fp190;
fp190 = inteval->PB_x[vi] * fp183;
LIBINT2_REALTYPE fp187;
fp187 = fp190 + fp188;
LIBINT2_REALTYPE fp170;
fp170 = inteval->PA_x[vi] * fp187;
LIBINT2_REALTYPE fp169;
fp169 = fp170 + fp172;
LIBINT2_REALTYPE fp37;
fp37 = fp42 * fp169;
LIBINT2_REALTYPE fp34;
fp34 = fp37 - fp35;
LIBINT2_REALTYPE fp107;
fp107 = fp34 * fp165;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp140;
LIBINT2_REALTYPE fp103;
fp103 = fp106 + fp104;
LIBINT2_REALTYPE fp100;
fp100 = fp103 + fp101;
LIBINT2_REALTYPE fp2;
fp2 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp110;
fp110 = fp183 * fp161;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp19;
LIBINT2_REALTYPE fp113;
fp113 = fp183 * fp26;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp144;
LIBINT2_REALTYPE fp115;
fp115 = fp34 * fp161;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp144;
LIBINT2_REALTYPE fp111;
fp111 = fp114 + fp112;
LIBINT2_REALTYPE fp108;
fp108 = fp111 + fp109;
LIBINT2_REALTYPE fp1;
fp1 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp118;
fp118 = fp187 * fp165;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp19;
LIBINT2_REALTYPE fp121;
fp121 = fp187 * fp29;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp144;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp175;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp187;
LIBINT2_REALTYPE fp174;
fp174 = inteval->PB_x[vi] * fp187;
LIBINT2_REALTYPE fp171;
fp171 = fp174 + fp172;
LIBINT2_REALTYPE fp180;
fp180 = inteval->PA_x[vi] * fp171;
LIBINT2_REALTYPE fp177;
fp177 = fp180 + fp178;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp177;
LIBINT2_REALTYPE fp38;
fp38 = fp41 - fp39;
LIBINT2_REALTYPE fp123;
fp123 = fp38 * fp165;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp144;
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
LIBINT2_REALTYPE fp0;
fp0 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 191 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
