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
void CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_x[vi] * fp78;
LIBINT2_REALTYPE fp80;
fp80 = fp77 + fp81;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_x[vi] * fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp78 + fp83;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_x[vi] * fp82;
LIBINT2_REALTYPE fp86;
fp86 = fp80 + fp87;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_x[vi] * fp67;
LIBINT2_REALTYPE fp68;
fp68 = fp79 + fp69;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_x[vi] * fp68;
LIBINT2_REALTYPE fp70;
fp70 = fp82 + fp71;
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_x[vi] * fp70;
LIBINT2_REALTYPE fp72;
fp72 = fp86 + fp73;
LIBINT2_REALTYPE fp147;
fp147 = fp72 * fp14;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp7;
target[((hsi*30+1)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp72 * fp15;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp6;
target[((hsi*30+2)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_x[vi] * fp60;
LIBINT2_REALTYPE fp61;
fp61 = fp67 + fp62;
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_x[vi] * fp61;
LIBINT2_REALTYPE fp63;
fp63 = fp68 + fp64;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_x[vi] * fp63;
LIBINT2_REALTYPE fp65;
fp65 = fp70 + fp66;
LIBINT2_REALTYPE fp143;
fp143 = fp65 * fp13;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp7;
target[((hsi*30+3)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = fp65 * fp14;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp6;
target[((hsi*30+4)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp65 * fp15;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp5;
target[((hsi*30+5)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_x[vi] * fp53;
LIBINT2_REALTYPE fp54;
fp54 = fp60 + fp55;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_x[vi] * fp54;
LIBINT2_REALTYPE fp56;
fp56 = fp61 + fp57;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp58;
fp58 = fp63 + fp59;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp58 * fp12;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp7;
target[((hsi*30+6)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp135;
fp135 = fp58 * fp13;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp6;
target[((hsi*30+7)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp133;
fp133 = fp58 * fp14;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp5;
target[((hsi*30+8)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp58 * fp15;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp4;
target[((hsi*30+9)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_x[vi] * fp41;
LIBINT2_REALTYPE fp43;
fp43 = fp40 + fp44;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_x[vi] * fp42;
LIBINT2_REALTYPE fp45;
fp45 = fp41 + fp46;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_x[vi] * fp45;
LIBINT2_REALTYPE fp49;
fp49 = fp43 + fp50;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_x[vi] * fp49;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_x[vi] * fp43;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_x[vi] * fp40;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp37 + fp39;
LIBINT2_REALTYPE fp47;
fp47 = fp38 + fp48;
LIBINT2_REALTYPE fp51;
fp51 = fp47 + fp52;
LIBINT2_REALTYPE fp129;
fp129 = fp51 * fp11;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp7;
target[((hsi*30+10)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_x[vi] * fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp42 + fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_x[vi] * fp31;
LIBINT2_REALTYPE fp33;
fp33 = fp45 + fp34;
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_x[vi] * fp33;
LIBINT2_REALTYPE fp35;
fp35 = fp49 + fp36;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp35 * fp10;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp7;
target[((hsi*30+11)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp125;
fp125 = fp35 * fp11;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp6;
target[((hsi*30+12)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_x[vi] * fp23;
LIBINT2_REALTYPE fp24;
fp24 = fp30 + fp25;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_x[vi] * fp24;
LIBINT2_REALTYPE fp26;
fp26 = fp31 + fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_x[vi] * fp26;
LIBINT2_REALTYPE fp28;
fp28 = fp33 + fp29;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp28 * fp9;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp7;
target[((hsi*30+13)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp121;
fp121 = fp28 * fp10;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp6;
target[((hsi*30+14)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp86;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp80;
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_x[vi] * fp77;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*14+13)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp74 + fp76;
LIBINT2_REALTYPE fp84;
fp84 = fp75 + fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp84 + fp89;
LIBINT2_REALTYPE fp149;
fp149 = fp88 * fp15;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp7;
target[((hsi*30+0)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_x[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp23 + fp18;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_x[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = fp24 + fp20;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_x[vi] * fp19;
LIBINT2_REALTYPE fp21;
fp21 = fp26 + fp22;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp21 * fp8;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp7;
target[((hsi*30+16)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp115;
fp115 = fp21 * fp9;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp6;
target[((hsi*30+17)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = fp21 * fp10;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp5;
target[((hsi*30+18)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = fp21 * fp11;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp4;
target[((hsi*30+19)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp51 * fp15;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp3;
target[((hsi*30+20)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp107;
fp107 = fp35 * fp14;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp3;
target[((hsi*30+21)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp35 * fp15;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp2;
target[((hsi*30+22)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = fp28 * fp13;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp3;
target[((hsi*30+23)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp101;
fp101 = fp28 * fp14;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp2;
target[((hsi*30+24)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp28 * fp15;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp1;
target[((hsi*30+25)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp97;
fp97 = fp21 * fp12;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp3;
target[((hsi*30+26)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = fp21 * fp13;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp2;
target[((hsi*30+27)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp93;
fp93 = fp21 * fp14;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp1;
target[((hsi*30+28)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp21 * fp15;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp0;
target[((hsi*30+29)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp119;
fp119 = fp28 * fp11;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp5;
target[((hsi*30+15)*1+lsi)*1] = fp118;
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
