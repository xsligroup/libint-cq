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
#include <_kineticderiv2_D_S_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_D_S(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,36)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_kineticderiv2_D_S_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp36;
fp36 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+35)*1+lsi)*1];
inteval->stack[((hsi*6+89)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp0;
fp0 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+89)*1+lsi)*1];
inteval->stack[((hsi*6+125)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp37;
fp37 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+34)*1+lsi)*1];
inteval->stack[((hsi*6+88)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp1;
fp1 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+88)*1+lsi)*1];
inteval->stack[((hsi*6+124)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp38;
fp38 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+33)*1+lsi)*1];
inteval->stack[((hsi*6+87)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp2;
fp2 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+87)*1+lsi)*1];
inteval->stack[((hsi*6+123)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp39;
fp39 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+32)*1+lsi)*1];
inteval->stack[((hsi*6+86)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp3;
fp3 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+86)*1+lsi)*1];
inteval->stack[((hsi*6+122)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp40;
fp40 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+31)*1+lsi)*1];
inteval->stack[((hsi*6+85)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp4;
fp4 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+85)*1+lsi)*1];
inteval->stack[((hsi*6+121)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp41;
fp41 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+30)*1+lsi)*1];
inteval->stack[((hsi*6+84)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp5;
fp5 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+84)*1+lsi)*1];
inteval->stack[((hsi*6+120)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp42;
fp42 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+29)*1+lsi)*1];
inteval->stack[((hsi*6+83)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp6;
fp6 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+83)*1+lsi)*1];
inteval->stack[((hsi*6+119)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp43;
fp43 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+28)*1+lsi)*1];
inteval->stack[((hsi*6+82)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp7;
fp7 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+82)*1+lsi)*1];
inteval->stack[((hsi*6+118)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp44;
fp44 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+27)*1+lsi)*1];
inteval->stack[((hsi*6+81)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp8;
fp8 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+81)*1+lsi)*1];
inteval->stack[((hsi*6+117)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp45;
fp45 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+26)*1+lsi)*1];
inteval->stack[((hsi*6+80)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp9;
fp9 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+80)*1+lsi)*1];
inteval->stack[((hsi*6+116)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp46;
fp46 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+25)*1+lsi)*1];
inteval->stack[((hsi*6+79)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp10;
fp10 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+79)*1+lsi)*1];
inteval->stack[((hsi*6+115)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp47;
fp47 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+24)*1+lsi)*1];
inteval->stack[((hsi*6+78)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp11;
fp11 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+78)*1+lsi)*1];
inteval->stack[((hsi*6+114)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp48;
fp48 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+23)*1+lsi)*1];
inteval->stack[((hsi*6+65)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp12;
fp12 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+65)*1+lsi)*1];
inteval->stack[((hsi*6+113)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp49;
fp49 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+22)*1+lsi)*1];
inteval->stack[((hsi*6+64)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp13;
fp13 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+64)*1+lsi)*1];
inteval->stack[((hsi*6+112)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp50;
fp50 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+21)*1+lsi)*1];
inteval->stack[((hsi*6+63)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp14;
fp14 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+63)*1+lsi)*1];
inteval->stack[((hsi*6+111)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp51;
fp51 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+20)*1+lsi)*1];
inteval->stack[((hsi*6+62)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp15;
fp15 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+62)*1+lsi)*1];
inteval->stack[((hsi*6+110)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp52;
fp52 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+19)*1+lsi)*1];
inteval->stack[((hsi*6+61)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp16;
fp16 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+61)*1+lsi)*1];
inteval->stack[((hsi*6+109)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp53;
fp53 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+18)*1+lsi)*1];
inteval->stack[((hsi*6+60)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp17;
fp17 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+60)*1+lsi)*1];
inteval->stack[((hsi*6+108)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp54;
fp54 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+17)*1+lsi)*1];
inteval->stack[((hsi*6+77)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp18;
fp18 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+77)*1+lsi)*1];
inteval->stack[((hsi*6+107)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp55;
fp55 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+16)*1+lsi)*1];
inteval->stack[((hsi*6+76)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp19;
fp19 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+76)*1+lsi)*1];
inteval->stack[((hsi*6+106)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp56;
fp56 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+15)*1+lsi)*1];
inteval->stack[((hsi*6+75)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp20;
fp20 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+75)*1+lsi)*1];
inteval->stack[((hsi*6+105)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp57;
fp57 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+14)*1+lsi)*1];
inteval->stack[((hsi*6+74)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp21;
fp21 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+74)*1+lsi)*1];
inteval->stack[((hsi*6+104)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp58;
fp58 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+13)*1+lsi)*1];
inteval->stack[((hsi*6+73)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp22;
fp22 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+73)*1+lsi)*1];
inteval->stack[((hsi*6+103)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp59;
fp59 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+12)*1+lsi)*1];
inteval->stack[((hsi*6+72)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp23;
fp23 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+72)*1+lsi)*1];
inteval->stack[((hsi*6+102)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp60;
fp60 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+11)*1+lsi)*1];
inteval->stack[((hsi*6+59)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp24;
fp24 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+59)*1+lsi)*1];
inteval->stack[((hsi*6+101)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp61;
fp61 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+10)*1+lsi)*1];
inteval->stack[((hsi*6+58)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp25;
fp25 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+58)*1+lsi)*1];
inteval->stack[((hsi*6+100)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp62;
fp62 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+9)*1+lsi)*1];
inteval->stack[((hsi*6+57)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp26;
fp26 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+57)*1+lsi)*1];
inteval->stack[((hsi*6+99)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp63;
fp63 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+8)*1+lsi)*1];
inteval->stack[((hsi*6+56)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp27;
fp27 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+56)*1+lsi)*1];
inteval->stack[((hsi*6+98)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp64;
fp64 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+7)*1+lsi)*1];
inteval->stack[((hsi*6+55)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp28;
fp28 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+55)*1+lsi)*1];
inteval->stack[((hsi*6+97)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp65;
fp65 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+6)*1+lsi)*1];
inteval->stack[((hsi*6+54)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp29;
fp29 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+54)*1+lsi)*1];
inteval->stack[((hsi*6+96)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp66;
fp66 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+5)*1+lsi)*1];
inteval->stack[((hsi*6+41)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp30;
fp30 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+41)*1+lsi)*1];
inteval->stack[((hsi*6+95)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp67;
fp67 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+4)*1+lsi)*1];
inteval->stack[((hsi*6+40)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp31;
fp31 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+40)*1+lsi)*1];
inteval->stack[((hsi*6+94)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp68;
fp68 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+3)*1+lsi)*1];
inteval->stack[((hsi*6+39)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp32;
fp32 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+39)*1+lsi)*1];
inteval->stack[((hsi*6+93)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp69;
fp69 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+2)*1+lsi)*1];
inteval->stack[((hsi*6+38)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp33;
fp33 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+38)*1+lsi)*1];
inteval->stack[((hsi*6+92)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp70;
fp70 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+1)*1+lsi)*1];
inteval->stack[((hsi*6+37)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp34;
fp34 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+37)*1+lsi)*1];
inteval->stack[((hsi*6+91)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp71;
fp71 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+0)*1+lsi)*1];
inteval->stack[((hsi*6+36)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp35;
fp35 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+36)*1+lsi)*1];
inteval->stack[((hsi*6+90)*1+lsi)*1] = fp35;
inteval->stack[((hsi*6+71)*1+lsi)*1] = fp42;
inteval->stack[((hsi*6+70)*1+lsi)*1] = fp43;
inteval->stack[((hsi*6+69)*1+lsi)*1] = fp44;
inteval->stack[((hsi*6+68)*1+lsi)*1] = fp45;
inteval->stack[((hsi*6+67)*1+lsi)*1] = fp46;
inteval->stack[((hsi*6+66)*1+lsi)*1] = fp47;
inteval->stack[((hsi*6+53)*1+lsi)*1] = fp54;
inteval->stack[((hsi*6+52)*1+lsi)*1] = fp55;
inteval->stack[((hsi*6+51)*1+lsi)*1] = fp56;
inteval->stack[((hsi*6+50)*1+lsi)*1] = fp57;
inteval->stack[((hsi*6+49)*1+lsi)*1] = fp58;
inteval->stack[((hsi*6+48)*1+lsi)*1] = fp59;
inteval->stack[((hsi*6+47)*1+lsi)*1] = fp60;
inteval->stack[((hsi*6+46)*1+lsi)*1] = fp61;
inteval->stack[((hsi*6+45)*1+lsi)*1] = fp62;
inteval->stack[((hsi*6+44)*1+lsi)*1] = fp63;
inteval->stack[((hsi*6+43)*1+lsi)*1] = fp64;
inteval->stack[((hsi*6+42)*1+lsi)*1] = fp65;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*6+6)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*6+12)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*6+36)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*6+42)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*6+48)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*6+18)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*6+24)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*6+54)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*6+60)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*6+66)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*6+30)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*6+72)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*6+78)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*6+84)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*6+90)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*6+96)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*6+102)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*6+108)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*6+114)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*6+120)*1+lsi)*1]);
/** Number of flops = 72 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
