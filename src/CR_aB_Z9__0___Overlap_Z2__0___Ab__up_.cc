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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_Z9__0___Overlap_Z2__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*30+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp157;
fp157 = inteval->PB_z[vi] * target[((hsi*30+0)*1+lsi)*1];
target[((hsi*30+1)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp152;
fp152 = inteval->PA_z[vi] * target[((hsi*30+0)*1+lsi)*1];
target[((hsi*30+3)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp150;
fp150 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * target[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_z[vi] * target[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
target[((hsi*30+4)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp142;
fp142 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * target[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_z[vi] * target[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp143 + fp141;
target[((hsi*30+6)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp135;
fp135 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp134;
fp134 = fp135 * target[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp137;
fp137 = fp138 * target[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->PA_z[vi] * target[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp139 + fp137;
LIBINT2_REALTYPE fp133;
fp133 = fp136 + fp134;
target[((hsi*30+7)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp124;
fp124 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp123;
fp123 = fp124 * target[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->PA_z[vi] * target[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp125 + fp123;
target[((hsi*30+9)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * target[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp119;
fp119 = fp120 * target[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->PA_z[vi] * target[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp121 + fp119;
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
target[((hsi*30+10)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp106;
fp106 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp106 * target[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_z[vi] * target[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp107 + fp105;
target[((hsi*30+12)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp99;
fp99 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * target[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp102 * target[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_z[vi] * target[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp103 + fp101;
LIBINT2_REALTYPE fp97;
fp97 = fp100 + fp98;
target[((hsi*30+13)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp80;
fp80 = fp81 * target[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp84 * target[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->PA_z[vi] * target[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp85 + fp83;
LIBINT2_REALTYPE fp79;
fp79 = fp82 + fp80;
target[((hsi*30+16)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp70;
fp70 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * target[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp88 * target[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->PA_z[vi] * target[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp89 + fp87;
target[((hsi*30+15)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_z[vi] * target[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp71 + fp69;
target[((hsi*30+18)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp62;
fp62 = fp63 * target[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp66 * target[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_z[vi] * target[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp67 + fp65;
LIBINT2_REALTYPE fp61;
fp61 = fp64 + fp62;
target[((hsi*30+19)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp52;
fp52 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * target[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * target[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp53 + fp51;
target[((hsi*30+21)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp45 * target[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * target[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->PA_z[vi] * target[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp49 + fp47;
LIBINT2_REALTYPE fp43;
fp43 = fp46 + fp44;
target[((hsi*30+22)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp154;
fp154 = fp155 * target[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = inteval->PB_z[vi] * target[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp156 + fp154;
target[((hsi*30+2)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp146;
fp146 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * target[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->PA_z[vi] * target[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp147 + fp145;
target[((hsi*30+5)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp27 * target[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_z[vi] * target[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
LIBINT2_REALTYPE fp25;
fp25 = fp28 + fp26;
target[((hsi*30+25)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp128;
fp128 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * target[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp130;
fp130 = fp131 * target[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = inteval->PA_z[vi] * target[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp132 + fp130;
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
target[((hsi*30+8)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp34;
fp34 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * target[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * target[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp35 + fp33;
target[((hsi*30+24)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp38;
fp38 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * target[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * target[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * target[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * target[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->PA_z[vi] * target[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp114 + fp112;
LIBINT2_REALTYPE fp108;
fp108 = fp111 + fp109;
target[((hsi*30+11)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp77;
fp77 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * target[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * target[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * target[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->PA_z[vi] * target[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp96 + fp94;
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
target[((hsi*30+14)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PA_z[vi] * target[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp78 + fp76;
LIBINT2_REALTYPE fp72;
fp72 = fp75 + fp73;
target[((hsi*30+17)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp41;
fp41 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * target[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * target[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * target[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->PA_z[vi] * target[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp60 + fp58;
LIBINT2_REALTYPE fp54;
fp54 = fp57 + fp55;
target[((hsi*30+20)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PA_z[vi] * target[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
target[((hsi*30+23)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp20;
fp20 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * target[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->PA_z[vi] * target[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
LIBINT2_REALTYPE fp18;
fp18 = fp21 + fp19;
target[((hsi*30+26)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * target[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*30+27)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_z[vi] * target[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*30+28)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_z[vi] * target[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp6 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 158 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
