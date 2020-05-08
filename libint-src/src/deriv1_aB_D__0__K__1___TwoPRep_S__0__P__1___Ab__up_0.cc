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
#include <CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_D__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_D__0__K__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4590)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*648+11718)*1+lsi)*1]), &(inteval->stack[((hsi*270+4104)*1+lsi)*1]), &(inteval->stack[((hsi*216+4374)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*648+11070)*1+lsi)*1]), &(inteval->stack[((hsi*270+3618)*1+lsi)*1]), &(inteval->stack[((hsi*216+3888)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*648+10422)*1+lsi)*1]), &(inteval->stack[((hsi*270+3132)*1+lsi)*1]), &(inteval->stack[((hsi*216+3402)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+12366)*1+lsi)*1]), &(inteval->stack[((hsi*216+1458)*1+lsi)*1]), &(inteval->stack[((hsi*216+2916)*1+lsi)*1]), &(inteval->stack[((hsi*216+4374)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+12582)*1+lsi)*1]), &(inteval->stack[((hsi*270+1188)*1+lsi)*1]), &(inteval->stack[((hsi*270+2646)*1+lsi)*1]), &(inteval->stack[((hsi*270+4104)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*648+9774)*1+lsi)*1]), &(inteval->stack[((hsi*270+12582)*1+lsi)*1]), &(inteval->stack[((hsi*216+12366)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+12852)*1+lsi)*1]), &(inteval->stack[((hsi*216+972)*1+lsi)*1]), &(inteval->stack[((hsi*216+2430)*1+lsi)*1]), &(inteval->stack[((hsi*216+3888)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+13068)*1+lsi)*1]), &(inteval->stack[((hsi*270+702)*1+lsi)*1]), &(inteval->stack[((hsi*270+2160)*1+lsi)*1]), &(inteval->stack[((hsi*270+3618)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*648+9126)*1+lsi)*1]), &(inteval->stack[((hsi*270+13068)*1+lsi)*1]), &(inteval->stack[((hsi*216+12852)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+13338)*1+lsi)*1]), &(inteval->stack[((hsi*216+486)*1+lsi)*1]), &(inteval->stack[((hsi*216+1944)*1+lsi)*1]), &(inteval->stack[((hsi*216+3402)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+13554)*1+lsi)*1]), &(inteval->stack[((hsi*270+216)*1+lsi)*1]), &(inteval->stack[((hsi*270+1674)*1+lsi)*1]), &(inteval->stack[((hsi*270+3132)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*648+8478)*1+lsi)*1]), &(inteval->stack[((hsi*270+13554)*1+lsi)*1]), &(inteval->stack[((hsi*216+13338)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+7830)*1+lsi)*1]), &(inteval->stack[((hsi*270+2646)*1+lsi)*1]), &(inteval->stack[((hsi*216+2916)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+7182)*1+lsi)*1]), &(inteval->stack[((hsi*270+2160)*1+lsi)*1]), &(inteval->stack[((hsi*216+2430)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+6534)*1+lsi)*1]), &(inteval->stack[((hsi*270+1674)*1+lsi)*1]), &(inteval->stack[((hsi*216+1944)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+5886)*1+lsi)*1]), &(inteval->stack[((hsi*270+1188)*1+lsi)*1]), &(inteval->stack[((hsi*216+1458)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+5238)*1+lsi)*1]), &(inteval->stack[((hsi*270+702)*1+lsi)*1]), &(inteval->stack[((hsi*216+972)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+4590)*1+lsi)*1]), &(inteval->stack[((hsi*270+216)*1+lsi)*1]), &(inteval->stack[((hsi*216+486)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*648+4590)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*648+5238)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*648+5886)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*648+6534)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*648+7182)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*648+7830)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*648+8478)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*648+9126)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*648+9774)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*648+10422)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*648+11070)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*648+11718)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
