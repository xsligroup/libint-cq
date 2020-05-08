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
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_I__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_I__0__K__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,21420)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_I__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3024+54684)*1+lsi)*1]), &(inteval->stack[((hsi*1260+19152)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20412)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3024+51660)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16884)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18144)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3024+48636)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14616)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15876)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+57708)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6804)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13608)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20412)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+58716)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5544)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12348)*1+lsi)*1]), &(inteval->stack[((hsi*1260+19152)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3024+45612)*1+lsi)*1]), &(inteval->stack[((hsi*1260+58716)*1+lsi)*1]), &(inteval->stack[((hsi*1008+57708)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+59976)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4536)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11340)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18144)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+60984)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3276)*1+lsi)*1]), &(inteval->stack[((hsi*1260+10080)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16884)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3024+42588)*1+lsi)*1]), &(inteval->stack[((hsi*1260+60984)*1+lsi)*1]), &(inteval->stack[((hsi*1008+59976)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+62244)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2268)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9072)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15876)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+63252)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7812)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14616)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3024+39564)*1+lsi)*1]), &(inteval->stack[((hsi*1260+63252)*1+lsi)*1]), &(inteval->stack[((hsi*1008+62244)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+36540)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12348)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13608)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+33516)*1+lsi)*1]), &(inteval->stack[((hsi*1260+10080)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11340)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+30492)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7812)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9072)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+27468)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5544)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6804)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+24444)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3276)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4536)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+21420)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2268)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3024+21420)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3024+24444)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3024+27468)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3024+30492)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3024+33516)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3024+36540)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3024+39564)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3024+42588)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3024+45612)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3024+48636)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3024+51660)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3024+54684)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
