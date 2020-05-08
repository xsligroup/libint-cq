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
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_H__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_H__0__K__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16065)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*2268+41013)*1+lsi)*1]), &(inteval->stack[((hsi*945+14364)*1+lsi)*1]), &(inteval->stack[((hsi*756+15309)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]),21);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*2268+38745)*1+lsi)*1]), &(inteval->stack[((hsi*945+12663)*1+lsi)*1]), &(inteval->stack[((hsi*756+13608)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]),21);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*2268+36477)*1+lsi)*1]), &(inteval->stack[((hsi*945+10962)*1+lsi)*1]), &(inteval->stack[((hsi*756+11907)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+43281)*1+lsi)*1]), &(inteval->stack[((hsi*756+5103)*1+lsi)*1]), &(inteval->stack[((hsi*756+10206)*1+lsi)*1]), &(inteval->stack[((hsi*756+15309)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+44037)*1+lsi)*1]), &(inteval->stack[((hsi*945+4158)*1+lsi)*1]), &(inteval->stack[((hsi*945+9261)*1+lsi)*1]), &(inteval->stack[((hsi*945+14364)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*2268+34209)*1+lsi)*1]), &(inteval->stack[((hsi*945+44037)*1+lsi)*1]), &(inteval->stack[((hsi*756+43281)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+44982)*1+lsi)*1]), &(inteval->stack[((hsi*756+3402)*1+lsi)*1]), &(inteval->stack[((hsi*756+8505)*1+lsi)*1]), &(inteval->stack[((hsi*756+13608)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+45738)*1+lsi)*1]), &(inteval->stack[((hsi*945+2457)*1+lsi)*1]), &(inteval->stack[((hsi*945+7560)*1+lsi)*1]), &(inteval->stack[((hsi*945+12663)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*2268+31941)*1+lsi)*1]), &(inteval->stack[((hsi*945+45738)*1+lsi)*1]), &(inteval->stack[((hsi*756+44982)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+46683)*1+lsi)*1]), &(inteval->stack[((hsi*756+1701)*1+lsi)*1]), &(inteval->stack[((hsi*756+6804)*1+lsi)*1]), &(inteval->stack[((hsi*756+11907)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+47439)*1+lsi)*1]), &(inteval->stack[((hsi*945+756)*1+lsi)*1]), &(inteval->stack[((hsi*945+5859)*1+lsi)*1]), &(inteval->stack[((hsi*945+10962)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*2268+29673)*1+lsi)*1]), &(inteval->stack[((hsi*945+47439)*1+lsi)*1]), &(inteval->stack[((hsi*756+46683)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+27405)*1+lsi)*1]), &(inteval->stack[((hsi*945+9261)*1+lsi)*1]), &(inteval->stack[((hsi*756+10206)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+25137)*1+lsi)*1]), &(inteval->stack[((hsi*945+7560)*1+lsi)*1]), &(inteval->stack[((hsi*756+8505)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+22869)*1+lsi)*1]), &(inteval->stack[((hsi*945+5859)*1+lsi)*1]), &(inteval->stack[((hsi*756+6804)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+20601)*1+lsi)*1]), &(inteval->stack[((hsi*945+4158)*1+lsi)*1]), &(inteval->stack[((hsi*756+5103)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+18333)*1+lsi)*1]), &(inteval->stack[((hsi*945+2457)*1+lsi)*1]), &(inteval->stack[((hsi*756+3402)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+16065)*1+lsi)*1]), &(inteval->stack[((hsi*945+756)*1+lsi)*1]), &(inteval->stack[((hsi*756+1701)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2268+16065)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2268+18333)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2268+20601)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2268+22869)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2268+25137)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2268+27405)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2268+29673)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2268+31941)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2268+34209)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2268+36477)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2268+38745)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2268+41013)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
