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
void OSVRRElecPotInKet_aB_f__0___ElecPot_p__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PC_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->PB_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp120 - fp119;
target[((hsi*30+1)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp116;
fp116 = inteval->PC_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->PB_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp117 - fp116;
target[((hsi*30+2)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp111;
fp111 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = src2[((hsi*6+1)*1+lsi)*1] - src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp111 * fp110;
LIBINT2_REALTYPE fp113;
fp113 = inteval->PC_x[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->PB_x[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp114 - fp113;
LIBINT2_REALTYPE fp108;
fp108 = fp112 + fp109;
target[((hsi*30+3)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp123;
fp123 = src2[((hsi*6+0)*1+lsi)*1] - src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PC_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->PB_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp107 - fp106;
LIBINT2_REALTYPE fp103;
fp103 = fp105 + fp104;
target[((hsi*30+4)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PC_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->PB_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp102 - fp101;
target[((hsi*30+5)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp96;
fp96 = src2[((hsi*6+2)*1+lsi)*1] - src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp111 * fp96;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PC_x[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->PB_x[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp99 - fp98;
LIBINT2_REALTYPE fp94;
fp94 = fp97 + fp95;
target[((hsi*30+6)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PC_y[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->PB_y[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp93 - fp92;
target[((hsi*30+7)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->PC_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->PB_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp90 - fp89;
LIBINT2_REALTYPE fp87;
fp87 = fp88 + fp104;
target[((hsi*30+8)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp83;
fp83 = src2[((hsi*6+3)*1+lsi)*1] - src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PC_x[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->PB_x[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*30+9)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PC_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->PB_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp80 - fp79;
LIBINT2_REALTYPE fp77;
fp77 = fp78 + fp109;
target[((hsi*30+10)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->PB_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp76 - fp75;
target[((hsi*30+11)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp70;
fp70 = src2[((hsi*6+4)*1+lsi)*1] - src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PC_x[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PB_x[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp73 - fp72;
LIBINT2_REALTYPE fp68;
fp68 = fp71 + fp69;
target[((hsi*30+12)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp96;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PC_y[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->PB_y[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp67 - fp66;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
target[((hsi*30+13)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp61;
fp61 = inteval->PC_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->PB_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*30+14)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp124;
fp124 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp122;
fp122 = fp124 * fp123;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PC_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->PB_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp127 - fp126;
LIBINT2_REALTYPE fp121;
fp121 = fp125 + fp122;
target[((hsi*30+0)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PC_y[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->PB_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp51 - fp50;
target[((hsi*30+16)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PC_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->PB_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp48 - fp47;
LIBINT2_REALTYPE fp45;
fp45 = fp46 + fp95;
target[((hsi*30+17)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PC_x[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->PB_x[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
target[((hsi*30+18)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp38;
fp38 = fp124 * fp83;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PC_y[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PB_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 - fp40;
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
target[((hsi*30+19)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PC_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->PB_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp36 - fp35;
target[((hsi*30+20)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PC_x[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->PB_x[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp33 - fp32;
target[((hsi*30+21)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp27;
fp27 = fp111 * fp70;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PC_y[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->PB_y[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp30 - fp29;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*30+22)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PC_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->PB_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 - fp24;
LIBINT2_REALTYPE fp22;
fp22 = fp23 + fp82;
target[((hsi*30+23)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PC_x[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->PB_x[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 - fp20;
target[((hsi*30+24)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp54;
fp54 = src2[((hsi*6+5)*1+lsi)*1] - src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PC_y[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->PB_y[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
LIBINT2_REALTYPE fp15;
fp15 = fp16 + fp53;
target[((hsi*30+25)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = inteval->PC_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->PB_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp14 - fp13;
LIBINT2_REALTYPE fp11;
fp11 = fp12 + fp27;
target[((hsi*30+26)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PC_x[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->PB_x[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 - fp9;
target[((hsi*30+27)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp6;
fp6 = inteval->PC_y[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->PB_y[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 - fp6;
target[((hsi*30+28)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = fp124 * fp54;
LIBINT2_REALTYPE fp3;
fp3 = inteval->PC_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->PB_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 - fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PC_x[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->PB_x[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
target[((hsi*30+15)*1+lsi)*1] = fp52;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 128 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
