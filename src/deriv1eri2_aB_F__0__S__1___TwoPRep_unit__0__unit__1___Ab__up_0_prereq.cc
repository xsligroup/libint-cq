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
void deriv1eri2_aB_F__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp144;
fp144 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp143;
fp143 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp142;
fp142 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp143;
LIBINT2_REALTYPE fp141;
fp141 = fp144 * fp142;
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_z[vi] * fp165;
LIBINT2_REALTYPE fp98;
fp98 = fp99 + fp141;
LIBINT2_REALTYPE fp36;
fp36 = 3.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp150;
fp150 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp134;
fp134 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp135;
LIBINT2_REALTYPE fp133;
fp133 = fp144 * fp134;
LIBINT2_REALTYPE fp155;
fp155 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_z[vi] * fp155;
LIBINT2_REALTYPE fp96;
fp96 = fp97 + fp133;
LIBINT2_REALTYPE fp33;
fp33 = inteval->roz[vi] * fp96;
LIBINT2_REALTYPE fp32;
fp32 = fp98 - fp33;
LIBINT2_REALTYPE fp31;
fp31 = fp150 * fp32;
LIBINT2_REALTYPE fp130;
fp130 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp77;
fp77 = inteval->roz[vi] * fp155;
LIBINT2_REALTYPE fp76;
fp76 = fp165 - fp77;
LIBINT2_REALTYPE fp75;
fp75 = fp130 * fp76;
LIBINT2_REALTYPE fp124;
fp124 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp123;
fp123 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi] - fp124;
LIBINT2_REALTYPE fp122;
fp122 = fp144 * fp123;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_z[vi] * fp156;
LIBINT2_REALTYPE fp81;
fp81 = fp82 + fp122;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_z[vi] * fp81;
LIBINT2_REALTYPE fp74;
fp74 = fp78 + fp75;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * fp74;
LIBINT2_REALTYPE fp30;
fp30 = fp34 + fp31;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_bra[vi] * fp30;
LIBINT2_REALTYPE fp35;
fp35 = fp37 - fp36;
LIBINT2_REALTYPE fp29;
fp29 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp42;
fp42 = 2.0000000000000000e+00 * fp165;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha0_bra[vi] * fp74;
LIBINT2_REALTYPE fp41;
fp41 = fp43 - fp42;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_y[vi] * fp41;
LIBINT2_REALTYPE fp28;
fp28 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp166;
fp166 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * fp166;
LIBINT2_REALTYPE fp109;
fp109 = fp110 + fp141;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * fp109;
LIBINT2_REALTYPE fp158;
fp158 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp108;
fp108 = inteval->WP_y[vi] * fp158;
LIBINT2_REALTYPE fp107;
fp107 = fp108 + fp133;
LIBINT2_REALTYPE fp60;
fp60 = inteval->roz[vi] * fp107;
LIBINT2_REALTYPE fp59;
fp59 = fp109 - fp60;
LIBINT2_REALTYPE fp51;
fp51 = fp144 * fp59;
LIBINT2_REALTYPE fp157;
fp157 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_y[vi] * fp157;
LIBINT2_REALTYPE fp87;
fp87 = fp88 + fp122;
LIBINT2_REALTYPE fp174;
fp174 = inteval->WP_z[vi] * fp87;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_z[vi] * fp174;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_bra[vi] * fp50;
LIBINT2_REALTYPE fp39;
fp39 = fp54 - fp115;
LIBINT2_REALTYPE fp27;
fp27 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp92;
fp92 = inteval->roz[vi] * fp158;
LIBINT2_REALTYPE fp91;
fp91 = fp166 - fp92;
LIBINT2_REALTYPE fp90;
fp90 = fp130 * fp91;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_y[vi] * fp87;
LIBINT2_REALTYPE fp89;
fp89 = fp93 + fp90;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * fp89;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_bra[vi] * fp55;
LIBINT2_REALTYPE fp26;
fp26 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_x[vi] * fp41;
LIBINT2_REALTYPE fp25;
fp25 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_bra[vi] * fp81;
LIBINT2_REALTYPE fp161;
fp161 = fp162 - fp168;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WP_x[vi] * fp161;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_y[vi] * fp171;
LIBINT2_REALTYPE fp24;
fp24 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp176;
fp176 = inteval->WP_x[vi] * fp87;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * fp176;
LIBINT2_REALTYPE fp86;
fp86 = inteval->two_alpha0_bra[vi] * fp85;
LIBINT2_REALTYPE fp23;
fp23 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp170;
fp170 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_x[vi] * fp170;
LIBINT2_REALTYPE fp140;
fp140 = fp145 + fp141;
LIBINT2_REALTYPE fp72;
fp72 = 1.0000000000000000e+00 * fp140;
LIBINT2_REALTYPE fp160;
fp160 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp136;
fp136 = inteval->WP_x[vi] * fp160;
LIBINT2_REALTYPE fp132;
fp132 = fp136 + fp133;
LIBINT2_REALTYPE fp149;
fp149 = inteval->roz[vi] * fp132;
LIBINT2_REALTYPE fp148;
fp148 = fp140 - fp149;
LIBINT2_REALTYPE fp112;
fp112 = fp144 * fp148;
LIBINT2_REALTYPE fp159;
fp159 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_x[vi] * fp159;
LIBINT2_REALTYPE fp121;
fp121 = fp125 + fp122;
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_z[vi] * fp121;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_z[vi] * fp177;
LIBINT2_REALTYPE fp100;
fp100 = fp101 + fp112;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_bra[vi] * fp100;
LIBINT2_REALTYPE fp46;
fp46 = fp104 - fp72;
LIBINT2_REALTYPE fp22;
fp22 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp178;
fp178 = inteval->WP_y[vi] * fp121;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_z[vi] * fp178;
LIBINT2_REALTYPE fp70;
fp70 = inteval->two_alpha0_bra[vi] * fp105;
LIBINT2_REALTYPE fp21;
fp21 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp129;
fp129 = inteval->roz[vi] * fp160;
LIBINT2_REALTYPE fp128;
fp128 = fp170 - fp129;
LIBINT2_REALTYPE fp127;
fp127 = fp130 * fp128;
LIBINT2_REALTYPE fp131;
fp131 = inteval->WP_x[vi] * fp121;
LIBINT2_REALTYPE fp126;
fp126 = fp131 + fp127;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WP_z[vi] * fp126;
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_bra[vi] * fp117;
LIBINT2_REALTYPE fp20;
fp20 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_y[vi] * fp74;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_bra[vi] * fp48;
LIBINT2_REALTYPE fp19;
fp19 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp53;
fp53 = fp54 - fp103;
LIBINT2_REALTYPE fp18;
fp18 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp67;
fp67 = 2.0000000000000000e+00 * fp166;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_bra[vi] * fp89;
LIBINT2_REALTYPE fp66;
fp66 = fp68 - fp67;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_z[vi] * fp66;
LIBINT2_REALTYPE fp17;
fp17 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp63;
fp63 = 3.0000000000000000e+00 * fp109;
LIBINT2_REALTYPE fp58;
fp58 = fp150 * fp59;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_y[vi] * fp89;
LIBINT2_REALTYPE fp57;
fp57 = fp61 + fp58;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_bra[vi] * fp57;
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
LIBINT2_REALTYPE fp16;
fp16 = fp62;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp175;
fp175 = inteval->WP_x[vi] * fp81;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_y[vi] * fp175;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_bra[vi] * fp83;
LIBINT2_REALTYPE fp15;
fp15 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp164;
fp164 = inteval->two_alpha0_bra[vi] * fp87;
LIBINT2_REALTYPE fp163;
fp163 = fp164 - fp168;
LIBINT2_REALTYPE fp172;
fp172 = inteval->WP_x[vi] * fp163;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_z[vi] * fp172;
LIBINT2_REALTYPE fp14;
fp14 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_x[vi] * fp66;
LIBINT2_REALTYPE fp13;
fp13 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp12;
fp12 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_y[vi] * fp178;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp116;
fp116 = inteval->two_alpha0_bra[vi] * fp111;
LIBINT2_REALTYPE fp71;
fp71 = fp116 - fp72;
LIBINT2_REALTYPE fp11;
fp11 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp119;
fp119 = inteval->WP_y[vi] * fp126;
LIBINT2_REALTYPE fp73;
fp73 = inteval->two_alpha0_bra[vi] * fp119;
LIBINT2_REALTYPE fp10;
fp10 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_x[vi] * fp74;
LIBINT2_REALTYPE fp80;
fp80 = inteval->two_alpha0_bra[vi] * fp79;
LIBINT2_REALTYPE fp9;
fp9 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp8;
fp8 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp7;
fp7 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_x[vi] * fp89;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_bra[vi] * fp94;
LIBINT2_REALTYPE fp6;
fp6 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
LIBINT2_REALTYPE fp5;
fp5 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp169;
fp169 = inteval->two_alpha0_bra[vi] * fp121;
LIBINT2_REALTYPE fp167;
fp167 = fp169 - fp168;
LIBINT2_REALTYPE fp173;
fp173 = inteval->WP_y[vi] * fp167;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_z[vi] * fp173;
LIBINT2_REALTYPE fp4;
fp4 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
LIBINT2_REALTYPE fp3;
fp3 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp138;
fp138 = 2.0000000000000000e+00 * fp170;
LIBINT2_REALTYPE fp139;
fp139 = inteval->two_alpha0_bra[vi] * fp126;
LIBINT2_REALTYPE fp137;
fp137 = fp139 - fp138;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_z[vi] * fp137;
LIBINT2_REALTYPE fp2;
fp2 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_y[vi] * fp137;
LIBINT2_REALTYPE fp1;
fp1 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp153;
fp153 = 3.0000000000000000e+00 * fp140;
LIBINT2_REALTYPE fp147;
fp147 = fp150 * fp148;
LIBINT2_REALTYPE fp151;
fp151 = inteval->WP_x[vi] * fp126;
LIBINT2_REALTYPE fp146;
fp146 = fp151 + fp147;
LIBINT2_REALTYPE fp154;
fp154 = inteval->two_alpha0_bra[vi] * fp146;
LIBINT2_REALTYPE fp152;
fp152 = fp154 - fp153;
LIBINT2_REALTYPE fp0;
fp0 = fp152;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 179 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
