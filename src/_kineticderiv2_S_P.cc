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
#include <_kineticderiv2_S_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_S_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,18)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_kineticderiv2_S_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp18;
fp18 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+17)*1+lsi)*1];
inteval->stack[((hsi*3+44)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp0;
fp0 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+44)*1+lsi)*1];
inteval->stack[((hsi*3+62)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp19;
fp19 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+16)*1+lsi)*1];
inteval->stack[((hsi*3+43)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp1;
fp1 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+43)*1+lsi)*1];
inteval->stack[((hsi*3+61)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp20;
fp20 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+15)*1+lsi)*1];
inteval->stack[((hsi*3+42)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp2;
fp2 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+42)*1+lsi)*1];
inteval->stack[((hsi*3+60)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp21;
fp21 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+14)*1+lsi)*1];
inteval->stack[((hsi*3+41)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp3;
fp3 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+41)*1+lsi)*1];
inteval->stack[((hsi*3+59)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp22;
fp22 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+13)*1+lsi)*1];
inteval->stack[((hsi*3+40)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp4;
fp4 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+40)*1+lsi)*1];
inteval->stack[((hsi*3+58)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp23;
fp23 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+12)*1+lsi)*1];
inteval->stack[((hsi*3+39)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp5;
fp5 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+39)*1+lsi)*1];
inteval->stack[((hsi*3+57)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp24;
fp24 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+11)*1+lsi)*1];
inteval->stack[((hsi*3+32)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp6;
fp6 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+32)*1+lsi)*1];
inteval->stack[((hsi*3+56)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp25;
fp25 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+10)*1+lsi)*1];
inteval->stack[((hsi*3+31)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp7;
fp7 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+31)*1+lsi)*1];
inteval->stack[((hsi*3+55)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp26;
fp26 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+9)*1+lsi)*1];
inteval->stack[((hsi*3+30)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp8;
fp8 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+30)*1+lsi)*1];
inteval->stack[((hsi*3+54)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp27;
fp27 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+8)*1+lsi)*1];
inteval->stack[((hsi*3+38)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp9;
fp9 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+38)*1+lsi)*1];
inteval->stack[((hsi*3+53)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp28;
fp28 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+7)*1+lsi)*1];
inteval->stack[((hsi*3+37)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp10;
fp10 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+37)*1+lsi)*1];
inteval->stack[((hsi*3+52)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp29;
fp29 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+6)*1+lsi)*1];
inteval->stack[((hsi*3+36)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp11;
fp11 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+36)*1+lsi)*1];
inteval->stack[((hsi*3+51)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp30;
fp30 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+5)*1+lsi)*1];
inteval->stack[((hsi*3+29)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp12;
fp12 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+29)*1+lsi)*1];
inteval->stack[((hsi*3+50)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp31;
fp31 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+4)*1+lsi)*1];
inteval->stack[((hsi*3+28)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp13;
fp13 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+28)*1+lsi)*1];
inteval->stack[((hsi*3+49)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp32;
fp32 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+3)*1+lsi)*1];
inteval->stack[((hsi*3+27)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp14;
fp14 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+27)*1+lsi)*1];
inteval->stack[((hsi*3+48)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp33;
fp33 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+2)*1+lsi)*1];
inteval->stack[((hsi*3+20)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp15;
fp15 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+20)*1+lsi)*1];
inteval->stack[((hsi*3+47)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp34;
fp34 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+1)*1+lsi)*1];
inteval->stack[((hsi*3+19)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp16;
fp16 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+19)*1+lsi)*1];
inteval->stack[((hsi*3+46)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp35;
fp35 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+0)*1+lsi)*1];
inteval->stack[((hsi*3+18)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp17;
fp17 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+18)*1+lsi)*1];
inteval->stack[((hsi*3+45)*1+lsi)*1] = fp17;
inteval->stack[((hsi*3+35)*1+lsi)*1] = fp21;
inteval->stack[((hsi*3+34)*1+lsi)*1] = fp22;
inteval->stack[((hsi*3+33)*1+lsi)*1] = fp23;
inteval->stack[((hsi*3+26)*1+lsi)*1] = fp27;
inteval->stack[((hsi*3+25)*1+lsi)*1] = fp28;
inteval->stack[((hsi*3+24)*1+lsi)*1] = fp29;
inteval->stack[((hsi*3+23)*1+lsi)*1] = fp30;
inteval->stack[((hsi*3+22)*1+lsi)*1] = fp31;
inteval->stack[((hsi*3+21)*1+lsi)*1] = fp32;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3+3)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3+6)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3+18)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3+21)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3+24)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3+9)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3+12)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3+27)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3+30)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3+33)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3+15)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*3+36)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*3+39)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*3+42)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*3+45)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*3+48)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*3+51)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*3+54)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*3+57)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*3+60)*1+lsi)*1]);
/** Number of flops = 36 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
