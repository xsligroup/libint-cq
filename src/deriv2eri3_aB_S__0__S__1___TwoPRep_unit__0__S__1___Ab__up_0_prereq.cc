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
void deriv2eri3_aB_S__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp44;
fp44 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp45;
fp45 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp45 + fp44;
LIBINT2_REALTYPE fp183;
fp183 = inteval->CD_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp182;
fp182 = fp43 + fp183;
LIBINT2_REALTYPE fp26;
fp26 = inteval->CD_z[vi] * fp182;
LIBINT2_REALTYPE fp171;
fp171 = inteval->CD_z[vi] * fp43;
LIBINT2_REALTYPE fp66;
fp66 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp65;
fp65 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp66;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp67 * fp65;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp91;
fp91 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WQ_z[vi] * fp89;
LIBINT2_REALTYPE fp24;
fp24 = inteval->QC_z[vi] * fp43;
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
LIBINT2_REALTYPE fp21;
fp21 = fp22 + fp64;
LIBINT2_REALTYPE fp170;
fp170 = fp21 + fp171;
LIBINT2_REALTYPE fp25;
fp25 = fp170 + fp26;
LIBINT2_REALTYPE fp28;
fp28 = inteval->two_alpha1_ket[vi] * fp25;
LIBINT2_REALTYPE fp27;
fp27 = fp28 - fp168;
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha1_ket[vi] * fp27;
LIBINT2_REALTYPE fp20;
fp20 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp52;
fp52 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp185;
fp185 = inteval->CD_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp184;
fp184 = fp50 + fp185;
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_z[vi] * fp184;
LIBINT2_REALTYPE fp173;
fp173 = inteval->CD_y[vi] * fp43;
LIBINT2_REALTYPE fp94;
fp94 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp95;
fp95 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp95 + fp94;
LIBINT2_REALTYPE fp113;
fp113 = inteval->WQ_z[vi] * fp93;
LIBINT2_REALTYPE fp114;
fp114 = inteval->QC_z[vi] * fp50;
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
LIBINT2_REALTYPE fp172;
fp172 = fp112 + fp173;
LIBINT2_REALTYPE fp30;
fp30 = fp172 + fp31;
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha1_ket[vi] * fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha1_ket[vi] * fp32;
LIBINT2_REALTYPE fp19;
fp19 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_y[vi] * fp184;
LIBINT2_REALTYPE fp175;
fp175 = inteval->CD_y[vi] * fp50;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_y[vi] * fp93;
LIBINT2_REALTYPE fp37;
fp37 = inteval->QC_y[vi] * fp50;
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
LIBINT2_REALTYPE fp34;
fp34 = fp35 + fp64;
LIBINT2_REALTYPE fp174;
fp174 = fp34 + fp175;
LIBINT2_REALTYPE fp38;
fp38 = fp174 + fp39;
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha1_ket[vi] * fp38;
LIBINT2_REALTYPE fp40;
fp40 = fp41 - fp168;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha1_ket[vi] * fp40;
LIBINT2_REALTYPE fp18;
fp18 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp61;
fp61 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp62;
fp62 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp187;
fp187 = inteval->CD_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp186;
fp186 = fp60 + fp187;
LIBINT2_REALTYPE fp47;
fp47 = inteval->CD_z[vi] * fp186;
LIBINT2_REALTYPE fp177;
fp177 = inteval->CD_x[vi] * fp43;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp99;
fp99 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp116;
fp116 = inteval->WQ_z[vi] * fp97;
LIBINT2_REALTYPE fp117;
fp117 = inteval->QC_z[vi] * fp60;
LIBINT2_REALTYPE fp115;
fp115 = fp117 + fp116;
LIBINT2_REALTYPE fp176;
fp176 = fp115 + fp177;
LIBINT2_REALTYPE fp46;
fp46 = fp176 + fp47;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha1_ket[vi] * fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha1_ket[vi] * fp48;
LIBINT2_REALTYPE fp17;
fp17 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_y[vi] * fp186;
LIBINT2_REALTYPE fp179;
fp179 = inteval->CD_x[vi] * fp50;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_y[vi] * fp97;
LIBINT2_REALTYPE fp55;
fp55 = inteval->QC_y[vi] * fp60;
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
LIBINT2_REALTYPE fp178;
fp178 = fp53 + fp179;
LIBINT2_REALTYPE fp56;
fp56 = fp178 + fp57;
LIBINT2_REALTYPE fp58;
fp58 = inteval->two_alpha1_ket[vi] * fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha1_ket[vi] * fp58;
LIBINT2_REALTYPE fp16;
fp16 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp72;
fp72 = inteval->CD_x[vi] * fp186;
LIBINT2_REALTYPE fp181;
fp181 = inteval->CD_x[vi] * fp60;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_x[vi] * fp97;
LIBINT2_REALTYPE fp70;
fp70 = inteval->QC_x[vi] * fp60;
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
LIBINT2_REALTYPE fp63;
fp63 = fp68 + fp64;
LIBINT2_REALTYPE fp180;
fp180 = fp63 + fp181;
LIBINT2_REALTYPE fp71;
fp71 = fp180 + fp72;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha1_ket[vi] * fp71;
LIBINT2_REALTYPE fp73;
fp73 = fp74 - fp168;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha1_ket[vi] * fp73;
LIBINT2_REALTYPE fp15;
fp15 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp119;
fp119 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp131;
fp131 = inteval->CD_z[vi] * fp119;
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_z[vi] * fp89;
LIBINT2_REALTYPE fp122;
fp122 = fp123 + fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp122 + fp131;
LIBINT2_REALTYPE fp132;
fp132 = inteval->two_alpha1_ket[vi] * fp130;
LIBINT2_REALTYPE fp76;
fp76 = inteval->two_alpha0_bra[vi] * fp132;
LIBINT2_REALTYPE fp14;
fp14 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp146;
fp146 = inteval->CD_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp93 + fp146;
LIBINT2_REALTYPE fp139;
fp139 = inteval->WP_z[vi] * fp145;
LIBINT2_REALTYPE fp140;
fp140 = inteval->two_alpha1_ket[vi] * fp139;
LIBINT2_REALTYPE fp77;
fp77 = inteval->two_alpha0_bra[vi] * fp140;
LIBINT2_REALTYPE fp13;
fp13 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp155;
fp155 = inteval->CD_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp154;
fp154 = fp97 + fp155;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_z[vi] * fp154;
LIBINT2_REALTYPE fp149;
fp149 = inteval->two_alpha1_ket[vi] * fp148;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_bra[vi] * fp149;
LIBINT2_REALTYPE fp12;
fp12 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp106;
fp106 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp105;
fp105 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp106;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp107 * fp105;
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_z[vi] * fp110;
LIBINT2_REALTYPE fp79;
fp79 = fp80 + fp104;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_bra[vi] * fp79;
LIBINT2_REALTYPE fp157;
fp157 = fp158 - fp168;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_bra[vi] * fp157;
LIBINT2_REALTYPE fp11;
fp11 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp137;
fp137 = inteval->CD_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp136;
fp136 = fp89 + fp137;
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_y[vi] * fp136;
LIBINT2_REALTYPE fp134;
fp134 = inteval->two_alpha1_ket[vi] * fp133;
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_bra[vi] * fp134;
LIBINT2_REALTYPE fp10;
fp10 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp142;
fp142 = inteval->CD_y[vi] * fp120;
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_y[vi] * fp93;
LIBINT2_REALTYPE fp124;
fp124 = fp125 + fp127;
LIBINT2_REALTYPE fp141;
fp141 = fp124 + fp142;
LIBINT2_REALTYPE fp143;
fp143 = inteval->two_alpha1_ket[vi] * fp141;
LIBINT2_REALTYPE fp83;
fp83 = inteval->two_alpha0_bra[vi] * fp143;
LIBINT2_REALTYPE fp9;
fp9 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp150;
fp150 = inteval->WP_y[vi] * fp154;
LIBINT2_REALTYPE fp151;
fp151 = inteval->two_alpha1_ket[vi] * fp150;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_bra[vi] * fp151;
LIBINT2_REALTYPE fp8;
fp8 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp159;
fp159 = inteval->WP_z[vi] * fp111;
LIBINT2_REALTYPE fp160;
fp160 = inteval->two_alpha0_bra[vi] * fp159;
LIBINT2_REALTYPE fp85;
fp85 = inteval->two_alpha0_bra[vi] * fp160;
LIBINT2_REALTYPE fp7;
fp7 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_y[vi] * fp111;
LIBINT2_REALTYPE fp86;
fp86 = fp87 + fp104;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_bra[vi] * fp86;
LIBINT2_REALTYPE fp161;
fp161 = fp162 - fp168;
LIBINT2_REALTYPE fp88;
fp88 = inteval->two_alpha0_bra[vi] * fp161;
LIBINT2_REALTYPE fp6;
fp6 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp135;
fp135 = inteval->WP_x[vi] * fp136;
LIBINT2_REALTYPE fp138;
fp138 = inteval->two_alpha1_ket[vi] * fp135;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_bra[vi] * fp138;
LIBINT2_REALTYPE fp5;
fp5 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp144;
fp144 = inteval->WP_x[vi] * fp145;
LIBINT2_REALTYPE fp147;
fp147 = inteval->two_alpha1_ket[vi] * fp144;
LIBINT2_REALTYPE fp96;
fp96 = inteval->two_alpha0_bra[vi] * fp147;
LIBINT2_REALTYPE fp4;
fp4 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_x[vi] * fp121;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WP_x[vi] * fp97;
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
LIBINT2_REALTYPE fp152;
fp152 = fp126 + fp153;
LIBINT2_REALTYPE fp156;
fp156 = inteval->two_alpha1_ket[vi] * fp152;
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha0_bra[vi] * fp156;
LIBINT2_REALTYPE fp3;
fp3 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp163;
fp163 = inteval->WP_z[vi] * fp118;
LIBINT2_REALTYPE fp164;
fp164 = inteval->two_alpha0_bra[vi] * fp163;
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_bra[vi] * fp164;
LIBINT2_REALTYPE fp2;
fp2 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_y[vi] * fp118;
LIBINT2_REALTYPE fp166;
fp166 = inteval->two_alpha0_bra[vi] * fp165;
LIBINT2_REALTYPE fp102;
fp102 = inteval->two_alpha0_bra[vi] * fp166;
LIBINT2_REALTYPE fp1;
fp1 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp108;
fp108 = inteval->WP_x[vi] * fp118;
LIBINT2_REALTYPE fp103;
fp103 = fp108 + fp104;
LIBINT2_REALTYPE fp169;
fp169 = inteval->two_alpha0_bra[vi] * fp103;
LIBINT2_REALTYPE fp167;
fp167 = fp169 - fp168;
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha0_bra[vi] * fp167;
LIBINT2_REALTYPE fp0;
fp0 = fp109;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 188 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
