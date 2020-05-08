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
void CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp18 * fp12;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp5;
LIBINT2_REALTYPE fp114;
fp114 = inteval->two_alpha0_bra[vi] * fp60;
target[((hsi*36+17)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp18 * fp11;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp6;
LIBINT2_REALTYPE fp115;
fp115 = inteval->two_alpha0_bra[vi] * fp62;
target[((hsi*36+16)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp18 * fp10;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp7;
LIBINT2_REALTYPE fp116;
fp116 = inteval->two_alpha0_bra[vi] * fp64;
target[((hsi*36+15)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src0[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp19 * fp15;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp3;
LIBINT2_REALTYPE fp117;
fp117 = inteval->two_alpha0_bra[vi] * fp66;
target[((hsi*36+14)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp19 * fp14;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp4;
LIBINT2_REALTYPE fp118;
fp118 = inteval->two_alpha0_bra[vi] * fp68;
target[((hsi*36+13)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp19 * fp13;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp5;
LIBINT2_REALTYPE fp119;
fp119 = inteval->two_alpha0_bra[vi] * fp70;
target[((hsi*36+12)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp73;
fp73 = fp19 * fp12;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp6;
LIBINT2_REALTYPE fp120;
fp120 = inteval->two_alpha0_bra[vi] * fp72;
target[((hsi*36+11)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp75;
fp75 = fp19 * fp11;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp7;
LIBINT2_REALTYPE fp121;
fp121 = inteval->two_alpha0_bra[vi] * fp74;
target[((hsi*36+10)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp23 * fp15;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp7;
LIBINT2_REALTYPE fp131;
fp131 = inteval->two_alpha0_bra[vi] * fp94;
target[((hsi*36+0)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src0[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp20 * fp14;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp5;
LIBINT2_REALTYPE fp123;
fp123 = inteval->two_alpha0_bra[vi] * fp78;
target[((hsi*36+8)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp81;
fp81 = fp20 * fp13;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp6;
LIBINT2_REALTYPE fp124;
fp124 = inteval->two_alpha0_bra[vi] * fp80;
target[((hsi*36+7)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp83;
fp83 = fp20 * fp12;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp7;
LIBINT2_REALTYPE fp125;
fp125 = inteval->two_alpha0_bra[vi] * fp82;
target[((hsi*36+6)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src0[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp21 * fp15;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp5;
LIBINT2_REALTYPE fp126;
fp126 = inteval->two_alpha0_bra[vi] * fp84;
target[((hsi*36+5)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp87;
fp87 = fp21 * fp14;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp6;
LIBINT2_REALTYPE fp127;
fp127 = inteval->two_alpha0_bra[vi] * fp86;
target[((hsi*36+4)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp89;
fp89 = fp21 * fp13;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp7;
LIBINT2_REALTYPE fp128;
fp128 = inteval->two_alpha0_bra[vi] * fp88;
target[((hsi*36+3)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src0[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp22 * fp15;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp6;
LIBINT2_REALTYPE fp129;
fp129 = inteval->two_alpha0_bra[vi] * fp90;
target[((hsi*36+2)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp93;
fp93 = fp22 * fp14;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp7;
LIBINT2_REALTYPE fp130;
fp130 = inteval->two_alpha0_bra[vi] * fp92;
target[((hsi*36+1)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp77;
fp77 = fp20 * fp15;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp4;
LIBINT2_REALTYPE fp122;
fp122 = inteval->two_alpha0_bra[vi] * fp76;
target[((hsi*36+9)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp16 * fp15;
LIBINT2_REALTYPE fp24;
fp24 = fp25 * fp0;
LIBINT2_REALTYPE fp96;
fp96 = inteval->two_alpha0_bra[vi] * fp24;
target[((hsi*36+35)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp16 * fp14;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp1;
LIBINT2_REALTYPE fp97;
fp97 = inteval->two_alpha0_bra[vi] * fp26;
target[((hsi*36+34)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp16 * fp13;
LIBINT2_REALTYPE fp28;
fp28 = fp29 * fp2;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_bra[vi] * fp28;
target[((hsi*36+33)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp31;
fp31 = fp16 * fp12;
LIBINT2_REALTYPE fp30;
fp30 = fp31 * fp3;
LIBINT2_REALTYPE fp99;
fp99 = inteval->two_alpha0_bra[vi] * fp30;
target[((hsi*36+32)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp33;
fp33 = fp16 * fp11;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp4;
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha0_bra[vi] * fp32;
target[((hsi*36+31)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp35;
fp35 = fp16 * fp10;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp5;
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_bra[vi] * fp34;
target[((hsi*36+30)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp16 * fp9;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp6;
LIBINT2_REALTYPE fp102;
fp102 = inteval->two_alpha0_bra[vi] * fp36;
target[((hsi*36+29)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*16+15)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp16 * fp8;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp7;
LIBINT2_REALTYPE fp103;
fp103 = inteval->two_alpha0_bra[vi] * fp38;
target[((hsi*36+28)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp59;
fp59 = fp18 * fp13;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp4;
LIBINT2_REALTYPE fp113;
fp113 = inteval->two_alpha0_bra[vi] * fp58;
target[((hsi*36+18)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp17 * fp14;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp2;
LIBINT2_REALTYPE fp105;
fp105 = inteval->two_alpha0_bra[vi] * fp42;
target[((hsi*36+26)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp45;
fp45 = fp17 * fp13;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp3;
LIBINT2_REALTYPE fp106;
fp106 = inteval->two_alpha0_bra[vi] * fp44;
target[((hsi*36+25)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp47;
fp47 = fp17 * fp12;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp4;
LIBINT2_REALTYPE fp107;
fp107 = inteval->two_alpha0_bra[vi] * fp46;
target[((hsi*36+24)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp49;
fp49 = fp17 * fp11;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp5;
LIBINT2_REALTYPE fp108;
fp108 = inteval->two_alpha0_bra[vi] * fp48;
target[((hsi*36+23)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp51;
fp51 = fp17 * fp10;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp6;
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha0_bra[vi] * fp50;
target[((hsi*36+22)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp53;
fp53 = fp17 * fp9;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp7;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_bra[vi] * fp52;
target[((hsi*36+21)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp55;
fp55 = fp18 * fp15;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp2;
LIBINT2_REALTYPE fp111;
fp111 = inteval->two_alpha0_bra[vi] * fp54;
target[((hsi*36+20)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp57;
fp57 = fp18 * fp14;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp3;
LIBINT2_REALTYPE fp112;
fp112 = inteval->two_alpha0_bra[vi] * fp56;
target[((hsi*36+19)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp41;
fp41 = fp17 * fp15;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp1;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_bra[vi] * fp40;
target[((hsi*36+27)*1+lsi)*1] = fp104;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 132 */
}

#ifdef __cplusplus
};
#endif
