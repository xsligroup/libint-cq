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
void eri2_aB_F__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp131;
fp131 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp130;
fp130 = inteval->roz[vi] * fp120;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp121 - fp130;
LIBINT2_REALTYPE fp128;
fp128 = fp131 * fp129;
LIBINT2_REALTYPE fp137;
fp137 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp125;
fp125 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp124;
fp124 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi] - fp125;
LIBINT2_REALTYPE fp123;
fp123 = fp137 * fp124;
LIBINT2_REALTYPE fp149;
fp149 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp126;
fp126 = inteval->WP_x[vi] * fp149;
LIBINT2_REALTYPE fp122;
fp122 = fp126 + fp123;
LIBINT2_REALTYPE fp132;
fp132 = inteval->WP_x[vi] * fp122;
LIBINT2_REALTYPE fp127;
fp127 = fp132 + fp128;
LIBINT2_REALTYPE fp119;
fp119 = inteval->WQ_y[vi] * fp127;
LIBINT2_REALTYPE fp1;
fp1 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp117;
fp117 = inteval->WQ_z[vi] * fp127;
LIBINT2_REALTYPE fp2;
fp2 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp141;
fp141 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp120;
LIBINT2_REALTYPE fp142;
fp142 = inteval->WQ_x[vi] * fp122;
LIBINT2_REALTYPE fp139;
fp139 = fp142 + fp140;
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_y[vi] * fp139;
LIBINT2_REALTYPE fp3;
fp3 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp112;
fp112 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp136;
fp136 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp135;
fp135 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp136;
LIBINT2_REALTYPE fp134;
fp134 = fp137 * fp135;
LIBINT2_REALTYPE fp138;
fp138 = inteval->WP_x[vi] * fp120;
LIBINT2_REALTYPE fp133;
fp133 = fp138 + fp134;
LIBINT2_REALTYPE fp108;
fp108 = fp112 * fp133;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_y[vi] * fp122;
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_y[vi] * fp118;
LIBINT2_REALTYPE fp107;
fp107 = fp109 + fp108;
LIBINT2_REALTYPE fp4;
fp4 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp116;
fp116 = inteval->WQ_z[vi] * fp122;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_y[vi] * fp116;
LIBINT2_REALTYPE fp5;
fp5 = fp105;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_z[vi] * fp139;
LIBINT2_REALTYPE fp6;
fp6 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_z[vi] * fp118;
LIBINT2_REALTYPE fp7;
fp7 = fp103;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_z[vi] * fp116;
LIBINT2_REALTYPE fp101;
fp101 = fp102 + fp108;
LIBINT2_REALTYPE fp8;
fp8 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_y[vi] * fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp95 + fp134;
LIBINT2_REALTYPE fp98;
fp98 = fp112 * fp94;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_y[vi] * fp148;
LIBINT2_REALTYPE fp92;
fp92 = fp93 + fp123;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_x[vi] * fp92;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_x[vi] * fp96;
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp9;
fp9 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp88;
fp88 = fp141 * fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_y[vi] * fp92;
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_x[vi] * fp87;
LIBINT2_REALTYPE fp10;
fp10 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_z[vi] * fp92;
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_x[vi] * fp83;
LIBINT2_REALTYPE fp11;
fp11 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp111;
fp111 = fp112 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_x[vi] * fp81;
LIBINT2_REALTYPE fp110;
fp110 = fp113 + fp111;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_y[vi] * fp110;
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_z[vi] * fp114;
LIBINT2_REALTYPE fp12;
fp12 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp79;
fp79 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_y[vi] * fp79;
LIBINT2_REALTYPE fp85;
fp85 = fp86 + fp111;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_x[vi] * fp85;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_z[vi] * fp106;
LIBINT2_REALTYPE fp13;
fp13 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_z[vi] * fp75;
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp111;
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_x[vi] * fp76;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_y[vi] * fp100;
LIBINT2_REALTYPE fp14;
fp14 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp145;
fp145 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp133;
LIBINT2_REALTYPE fp146;
fp146 = inteval->WQ_x[vi] * fp127;
LIBINT2_REALTYPE fp143;
fp143 = fp146 + fp144;
LIBINT2_REALTYPE fp0;
fp0 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(fp0),1);
LIBINT2_REALTYPE fp147;
fp147 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_z[vi] * fp147;
LIBINT2_REALTYPE fp67;
fp67 = fp68 + fp123;
LIBINT2_REALTYPE fp64;
fp64 = inteval->WQ_y[vi] * fp67;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_x[vi] * fp64;
LIBINT2_REALTYPE fp16;
fp16 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp141 * fp66;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_z[vi] * fp67;
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_x[vi] * fp60;
LIBINT2_REALTYPE fp17;
fp17 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->roz[vi] * fp91;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp53 - fp57;
LIBINT2_REALTYPE fp55;
fp55 = fp131 * fp56;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_y[vi] * fp92;
LIBINT2_REALTYPE fp54;
fp54 = fp58 + fp55;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WQ_x[vi] * fp54;
LIBINT2_REALTYPE fp18;
fp18 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp51;
fp51 = fp145 * fp94;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_y[vi] * fp54;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp19;
fp19 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->WQ_z[vi] * fp54;
LIBINT2_REALTYPE fp20;
fp20 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_z[vi] * fp96;
LIBINT2_REALTYPE fp21;
fp21 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * fp87;
LIBINT2_REALTYPE fp22;
fp22 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * fp83;
LIBINT2_REALTYPE fp45;
fp45 = fp46 + fp98;
LIBINT2_REALTYPE fp23;
fp23 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp71;
fp71 = inteval->WQ_x[vi] * fp67;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_y[vi] * fp71;
LIBINT2_REALTYPE fp24;
fp24 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_z[vi] * fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp70 + fp134;
LIBINT2_REALTYPE fp73;
fp73 = fp112 * fp69;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_y[vi] * fp64;
LIBINT2_REALTYPE fp42;
fp42 = fp43 + fp73;
LIBINT2_REALTYPE fp25;
fp25 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_y[vi] * fp60;
LIBINT2_REALTYPE fp26;
fp26 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp38;
fp38 = inteval->roz[vi] * fp66;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp34 - fp38;
LIBINT2_REALTYPE fp36;
fp36 = fp131 * fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_z[vi] * fp67;
LIBINT2_REALTYPE fp35;
fp35 = fp39 + fp36;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WQ_x[vi] * fp35;
LIBINT2_REALTYPE fp27;
fp27 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_y[vi] * fp35;
LIBINT2_REALTYPE fp28;
fp28 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp31;
fp31 = fp145 * fp69;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_z[vi] * fp35;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp29;
fp29 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_x[vi] * fp71;
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
LIBINT2_REALTYPE fp15;
fp15 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+15)*1+lsi)*1]),&(fp15),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 150 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
