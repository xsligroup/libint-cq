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
extern "C" {
#endif
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp17 * fp10;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp5;
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * fp85;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp17 * fp11;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp5;
LIBINT2_REALTYPE fp140;
fp140 = inteval->two_alpha0_ket[vi] * fp87;
LIBINT2_REALTYPE fp138;
fp138 = fp140 - fp139;
target[((hsi*21+1)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp17 * fp12;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp4;
LIBINT2_REALTYPE fp137;
fp137 = inteval->two_alpha0_ket[vi] * fp83;
target[((hsi*21+2)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp16 * fp12;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp5;
LIBINT2_REALTYPE fp135;
fp135 = 2.0000000000000000e+00 * fp79;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp16 * fp9;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp5;
LIBINT2_REALTYPE fp136;
fp136 = inteval->two_alpha0_ket[vi] * fp81;
LIBINT2_REALTYPE fp134;
fp134 = fp136 - fp135;
target[((hsi*21+3)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp76;
fp76 = fp16 * fp10;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp4;
LIBINT2_REALTYPE fp132;
fp132 = 1.0000000000000000e+00 * fp75;
LIBINT2_REALTYPE fp78;
fp78 = fp16 * fp11;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp4;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha0_ket[vi] * fp77;
LIBINT2_REALTYPE fp131;
fp131 = fp133 - fp132;
target[((hsi*21+4)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp16 * fp12;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp3;
LIBINT2_REALTYPE fp130;
fp130 = inteval->two_alpha0_ket[vi] * fp73;
target[((hsi*21+5)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp15 * fp11;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp5;
LIBINT2_REALTYPE fp128;
fp128 = 3.0000000000000000e+00 * fp69;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp15 * fp8;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp5;
LIBINT2_REALTYPE fp129;
fp129 = inteval->two_alpha0_ket[vi] * fp71;
LIBINT2_REALTYPE fp127;
fp127 = fp129 - fp128;
target[((hsi*21+6)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp66;
fp66 = fp15 * fp12;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp4;
LIBINT2_REALTYPE fp125;
fp125 = 2.0000000000000000e+00 * fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp15 * fp9;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp4;
LIBINT2_REALTYPE fp126;
fp126 = inteval->two_alpha0_ket[vi] * fp67;
LIBINT2_REALTYPE fp124;
fp124 = fp126 - fp125;
target[((hsi*21+7)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp62;
fp62 = fp15 * fp10;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp3;
LIBINT2_REALTYPE fp122;
fp122 = 1.0000000000000000e+00 * fp61;
LIBINT2_REALTYPE fp64;
fp64 = fp15 * fp11;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp3;
LIBINT2_REALTYPE fp123;
fp123 = inteval->two_alpha0_ket[vi] * fp63;
LIBINT2_REALTYPE fp121;
fp121 = fp123 - fp122;
target[((hsi*21+8)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp15 * fp12;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp2;
LIBINT2_REALTYPE fp120;
fp120 = inteval->two_alpha0_ket[vi] * fp59;
target[((hsi*21+9)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp18 * fp12;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp5;
LIBINT2_REALTYPE fp141;
fp141 = inteval->two_alpha0_ket[vi] * fp89;
target[((hsi*21+0)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp14 * fp11;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp4;
LIBINT2_REALTYPE fp115;
fp115 = 3.0000000000000000e+00 * fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp14 * fp8;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp4;
LIBINT2_REALTYPE fp116;
fp116 = inteval->two_alpha0_ket[vi] * fp53;
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
target[((hsi*21+11)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp48;
fp48 = fp14 * fp12;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp3;
LIBINT2_REALTYPE fp112;
fp112 = 2.0000000000000000e+00 * fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp14 * fp9;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp3;
LIBINT2_REALTYPE fp113;
fp113 = inteval->two_alpha0_ket[vi] * fp49;
LIBINT2_REALTYPE fp111;
fp111 = fp113 - fp112;
target[((hsi*21+12)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp44;
fp44 = fp14 * fp10;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp2;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * fp43;
LIBINT2_REALTYPE fp46;
fp46 = fp14 * fp11;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp2;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_ket[vi] * fp45;
LIBINT2_REALTYPE fp108;
fp108 = fp110 - fp109;
target[((hsi*21+13)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp14 * fp12;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp1;
LIBINT2_REALTYPE fp107;
fp107 = inteval->two_alpha0_ket[vi] * fp41;
target[((hsi*21+14)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp13 * fp8;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp5;
LIBINT2_REALTYPE fp105;
fp105 = 5.0000000000000000e+00 * fp37;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*7+6)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp13 * fp6;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp5;
LIBINT2_REALTYPE fp106;
fp106 = inteval->two_alpha0_ket[vi] * fp39;
LIBINT2_REALTYPE fp104;
fp104 = fp106 - fp105;
target[((hsi*21+15)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp34;
fp34 = fp13 * fp9;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp4;
LIBINT2_REALTYPE fp102;
fp102 = 4.0000000000000000e+00 * fp33;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp13 * fp7;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp4;
LIBINT2_REALTYPE fp103;
fp103 = inteval->two_alpha0_ket[vi] * fp35;
LIBINT2_REALTYPE fp101;
fp101 = fp103 - fp102;
target[((hsi*21+16)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp30;
fp30 = fp13 * fp11;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp3;
LIBINT2_REALTYPE fp99;
fp99 = 3.0000000000000000e+00 * fp29;
LIBINT2_REALTYPE fp32;
fp32 = fp13 * fp8;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp3;
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha0_ket[vi] * fp31;
LIBINT2_REALTYPE fp98;
fp98 = fp100 - fp99;
target[((hsi*21+17)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp26;
fp26 = fp13 * fp12;
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp2;
LIBINT2_REALTYPE fp96;
fp96 = 2.0000000000000000e+00 * fp25;
LIBINT2_REALTYPE fp28;
fp28 = fp13 * fp9;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp2;
LIBINT2_REALTYPE fp97;
fp97 = inteval->two_alpha0_ket[vi] * fp27;
LIBINT2_REALTYPE fp95;
fp95 = fp97 - fp96;
target[((hsi*21+18)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp22;
fp22 = fp13 * fp10;
LIBINT2_REALTYPE fp21;
fp21 = fp22 * fp1;
LIBINT2_REALTYPE fp93;
fp93 = 1.0000000000000000e+00 * fp21;
LIBINT2_REALTYPE fp24;
fp24 = fp13 * fp11;
LIBINT2_REALTYPE fp23;
fp23 = fp24 * fp1;
LIBINT2_REALTYPE fp94;
fp94 = inteval->two_alpha0_ket[vi] * fp23;
LIBINT2_REALTYPE fp92;
fp92 = fp94 - fp93;
target[((hsi*21+19)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp13 * fp12;
LIBINT2_REALTYPE fp19;
fp19 = fp20 * fp0;
LIBINT2_REALTYPE fp91;
fp91 = inteval->two_alpha0_ket[vi] * fp19;
target[((hsi*21+20)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp56;
fp56 = fp14 * fp9;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp5;
LIBINT2_REALTYPE fp118;
fp118 = 4.0000000000000000e+00 * fp55;
LIBINT2_REALTYPE fp58;
fp58 = fp14 * fp7;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp5;
LIBINT2_REALTYPE fp119;
fp119 = inteval->two_alpha0_ket[vi] * fp57;
LIBINT2_REALTYPE fp117;
fp117 = fp119 - fp118;
target[((hsi*21+10)*1+lsi)*1] = fp117;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 142 */
}

#ifdef __cplusplus
};
#endif
