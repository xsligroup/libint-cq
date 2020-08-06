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
#include <deriv2eri3_aB_S__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv2eri3_aB_S__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,21)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv2eri3_aB_S__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+14)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp1 - inteval->stack[((hsi*1+20)*1+lsi)*1];
inteval->stack[((hsi*1+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+13)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 - inteval->stack[((hsi*1+19)*1+lsi)*1];
inteval->stack[((hsi*1+43)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp15;
fp15 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+12)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp15 - inteval->stack[((hsi*1+17)*1+lsi)*1];
inteval->stack[((hsi*1+42)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp31;
fp31 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+11)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp31 - inteval->stack[((hsi*1+14)*1+lsi)*1];
inteval->stack[((hsi*1+29)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp3;
fp3 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+29)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp3 - inteval->stack[((hsi*1+44)*1+lsi)*1];
inteval->stack[((hsi*1+41)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp7;
fp7 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+10)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 - inteval->stack[((hsi*1+19)*1+lsi)*1];
inteval->stack[((hsi*1+40)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp11;
fp11 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+9)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp11 - inteval->stack[((hsi*1+18)*1+lsi)*1];
inteval->stack[((hsi*1+39)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp21;
fp21 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+8)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp21 - inteval->stack[((hsi*1+16)*1+lsi)*1];
inteval->stack[((hsi*1+38)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp35;
fp35 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+7)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp35 - inteval->stack[((hsi*1+13)*1+lsi)*1];
inteval->stack[((hsi*1+28)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp9;
fp9 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+28)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp9 - inteval->stack[((hsi*1+40)*1+lsi)*1];
inteval->stack[((hsi*1+37)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp37;
fp37 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+6)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp37 - inteval->stack[((hsi*1+9)*1+lsi)*1];
inteval->stack[((hsi*1+25)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp13;
fp13 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+25)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 - inteval->stack[((hsi*1+39)*1+lsi)*1];
inteval->stack[((hsi*1+36)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp17;
fp17 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+5)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 - inteval->stack[((hsi*1+17)*1+lsi)*1];
inteval->stack[((hsi*1+35)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp23;
fp23 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+4)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp23 - inteval->stack[((hsi*1+16)*1+lsi)*1];
inteval->stack[((hsi*1+34)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp27;
fp27 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+3)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp27 - inteval->stack[((hsi*1+15)*1+lsi)*1];
inteval->stack[((hsi*1+33)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp40;
fp40 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+2)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp40 - inteval->stack[((hsi*1+12)*1+lsi)*1];
inteval->stack[((hsi*1+27)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp19;
fp19 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+27)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp19 - inteval->stack[((hsi*1+35)*1+lsi)*1];
inteval->stack[((hsi*1+32)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp42;
fp42 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+1)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp42 - inteval->stack[((hsi*1+8)*1+lsi)*1];
inteval->stack[((hsi*1+24)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp25;
fp25 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+24)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp25 - inteval->stack[((hsi*1+34)*1+lsi)*1];
inteval->stack[((hsi*1+31)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp44;
fp44 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp44 - inteval->stack[((hsi*1+3)*1+lsi)*1];
inteval->stack[((hsi*1+21)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp29;
fp29 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+21)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp29 - inteval->stack[((hsi*1+33)*1+lsi)*1];
inteval->stack[((hsi*1+30)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp34;
fp34 = fp35 - inteval->stack[((hsi*1+10)*1+lsi)*1];
inteval->stack[((hsi*1+26)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp39;
fp39 = fp40 - inteval->stack[((hsi*1+5)*1+lsi)*1];
inteval->stack[((hsi*1+23)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp41;
fp41 = fp42 - inteval->stack[((hsi*1+4)*1+lsi)*1];
inteval->stack[((hsi*1+22)*1+lsi)*1] = fp41;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1+1)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1+2)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1+21)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1+22)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1+23)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1+3)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1+4)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1+5)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1+6)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1+7)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1+24)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*1+25)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*1+26)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*1+8)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*1+9)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*1+10)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*1+11)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*1+27)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*1+28)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*1+29)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*1+12)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*1+13)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*1+14)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*1+30)*1+lsi)*1]);
inteval->targets[25] = &(inteval->stack[((hsi*1+31)*1+lsi)*1]);
inteval->targets[26] = &(inteval->stack[((hsi*1+32)*1+lsi)*1]);
inteval->targets[27] = &(inteval->stack[((hsi*1+33)*1+lsi)*1]);
inteval->targets[28] = &(inteval->stack[((hsi*1+34)*1+lsi)*1]);
inteval->targets[29] = &(inteval->stack[((hsi*1+35)*1+lsi)*1]);
inteval->targets[30] = &(inteval->stack[((hsi*1+36)*1+lsi)*1]);
inteval->targets[31] = &(inteval->stack[((hsi*1+37)*1+lsi)*1]);
inteval->targets[32] = &(inteval->stack[((hsi*1+38)*1+lsi)*1]);
inteval->targets[33] = &(inteval->stack[((hsi*1+39)*1+lsi)*1]);
inteval->targets[34] = &(inteval->stack[((hsi*1+40)*1+lsi)*1]);
inteval->targets[35] = &(inteval->stack[((hsi*1+41)*1+lsi)*1]);
inteval->targets[36] = &(inteval->stack[((hsi*1+42)*1+lsi)*1]);
inteval->targets[37] = &(inteval->stack[((hsi*1+43)*1+lsi)*1]);
inteval->targets[38] = &(inteval->stack[((hsi*1+44)*1+lsi)*1]);
inteval->targets[39] = &(inteval->stack[((hsi*1+15)*1+lsi)*1]);
inteval->targets[40] = &(inteval->stack[((hsi*1+16)*1+lsi)*1]);
inteval->targets[41] = &(inteval->stack[((hsi*1+17)*1+lsi)*1]);
inteval->targets[42] = &(inteval->stack[((hsi*1+18)*1+lsi)*1]);
inteval->targets[43] = &(inteval->stack[((hsi*1+19)*1+lsi)*1]);
inteval->targets[44] = &(inteval->stack[((hsi*1+20)*1+lsi)*1]);
/** Number of flops = 45 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
