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
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100p.h>
#include <deriv1_aB_D__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_D__0__K__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*648+8640)*1+lsi)*1]), &(inteval->stack[((hsi*360+3816)*1+lsi)*1]), &(inteval->stack[((hsi*216+4752)*1+lsi)*1]), &(inteval->stack[((hsi*216+5184)*1+lsi)*1]),36);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*648+7992)*1+lsi)*1]), &(inteval->stack[((hsi*360+2088)*1+lsi)*1]), &(inteval->stack[((hsi*216+3024)*1+lsi)*1]), &(inteval->stack[((hsi*216+5184)*1+lsi)*1]),36);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*648+7344)*1+lsi)*1]), &(inteval->stack[((hsi*360+360)*1+lsi)*1]), &(inteval->stack[((hsi*216+1296)*1+lsi)*1]), &(inteval->stack[((hsi*216+5184)*1+lsi)*1]),36);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*648+6696)*1+lsi)*1]), &(inteval->stack[((hsi*360+3456)*1+lsi)*1]), &(inteval->stack[((hsi*216+4536)*1+lsi)*1]), &(inteval->stack[((hsi*216+5184)*1+lsi)*1]),36);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*648+6048)*1+lsi)*1]), &(inteval->stack[((hsi*360+1728)*1+lsi)*1]), &(inteval->stack[((hsi*216+2808)*1+lsi)*1]), &(inteval->stack[((hsi*216+5184)*1+lsi)*1]),36);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*648+5400)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*216+1080)*1+lsi)*1]), &(inteval->stack[((hsi*216+5184)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+12528)*1+lsi)*1]), &(inteval->stack[((hsi*360+4176)*1+lsi)*1]), &(inteval->stack[((hsi*216+4968)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+11880)*1+lsi)*1]), &(inteval->stack[((hsi*360+2448)*1+lsi)*1]), &(inteval->stack[((hsi*216+3240)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+11232)*1+lsi)*1]), &(inteval->stack[((hsi*360+720)*1+lsi)*1]), &(inteval->stack[((hsi*216+1512)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+13176)*1+lsi)*1]), &(inteval->stack[((hsi*216+4536)*1+lsi)*1]), &(inteval->stack[((hsi*216+4752)*1+lsi)*1]), &(inteval->stack[((hsi*216+4968)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+13392)*1+lsi)*1]), &(inteval->stack[((hsi*360+3456)*1+lsi)*1]), &(inteval->stack[((hsi*360+3816)*1+lsi)*1]), &(inteval->stack[((hsi*360+4176)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+10584)*1+lsi)*1]), &(inteval->stack[((hsi*360+13392)*1+lsi)*1]), &(inteval->stack[((hsi*216+13176)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+13752)*1+lsi)*1]), &(inteval->stack[((hsi*216+2808)*1+lsi)*1]), &(inteval->stack[((hsi*216+3024)*1+lsi)*1]), &(inteval->stack[((hsi*216+3240)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+13968)*1+lsi)*1]), &(inteval->stack[((hsi*360+1728)*1+lsi)*1]), &(inteval->stack[((hsi*360+2088)*1+lsi)*1]), &(inteval->stack[((hsi*360+2448)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+9936)*1+lsi)*1]), &(inteval->stack[((hsi*360+13968)*1+lsi)*1]), &(inteval->stack[((hsi*216+13752)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+14328)*1+lsi)*1]), &(inteval->stack[((hsi*216+1080)*1+lsi)*1]), &(inteval->stack[((hsi*216+1296)*1+lsi)*1]), &(inteval->stack[((hsi*216+1512)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+14544)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+360)*1+lsi)*1]), &(inteval->stack[((hsi*360+720)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+9288)*1+lsi)*1]), &(inteval->stack[((hsi*360+14544)*1+lsi)*1]), &(inteval->stack[((hsi*216+14328)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*648+5400)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*648+6048)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*648+6696)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*648+7344)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*648+7992)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*648+8640)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*648+9288)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*648+9936)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*648+10584)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*648+11232)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*648+11880)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*648+12528)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
