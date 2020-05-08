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
#include <CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_D__0__I__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_D__0__I__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3624)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__I__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+9168)*1+lsi)*1]), &(inteval->stack[((hsi*216+3240)*1+lsi)*1]), &(inteval->stack[((hsi*168+3456)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+8664)*1+lsi)*1]), &(inteval->stack[((hsi*216+2856)*1+lsi)*1]), &(inteval->stack[((hsi*168+3072)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+8160)*1+lsi)*1]), &(inteval->stack[((hsi*216+2472)*1+lsi)*1]), &(inteval->stack[((hsi*168+2688)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+9672)*1+lsi)*1]), &(inteval->stack[((hsi*168+1152)*1+lsi)*1]), &(inteval->stack[((hsi*168+2304)*1+lsi)*1]), &(inteval->stack[((hsi*168+3456)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+9840)*1+lsi)*1]), &(inteval->stack[((hsi*216+936)*1+lsi)*1]), &(inteval->stack[((hsi*216+2088)*1+lsi)*1]), &(inteval->stack[((hsi*216+3240)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*504+7656)*1+lsi)*1]), &(inteval->stack[((hsi*216+9840)*1+lsi)*1]), &(inteval->stack[((hsi*168+9672)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+10056)*1+lsi)*1]), &(inteval->stack[((hsi*168+768)*1+lsi)*1]), &(inteval->stack[((hsi*168+1920)*1+lsi)*1]), &(inteval->stack[((hsi*168+3072)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+10224)*1+lsi)*1]), &(inteval->stack[((hsi*216+552)*1+lsi)*1]), &(inteval->stack[((hsi*216+1704)*1+lsi)*1]), &(inteval->stack[((hsi*216+2856)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*504+7152)*1+lsi)*1]), &(inteval->stack[((hsi*216+10224)*1+lsi)*1]), &(inteval->stack[((hsi*168+10056)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+10440)*1+lsi)*1]), &(inteval->stack[((hsi*168+384)*1+lsi)*1]), &(inteval->stack[((hsi*168+1536)*1+lsi)*1]), &(inteval->stack[((hsi*168+2688)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+10608)*1+lsi)*1]), &(inteval->stack[((hsi*216+168)*1+lsi)*1]), &(inteval->stack[((hsi*216+1320)*1+lsi)*1]), &(inteval->stack[((hsi*216+2472)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*504+6648)*1+lsi)*1]), &(inteval->stack[((hsi*216+10608)*1+lsi)*1]), &(inteval->stack[((hsi*168+10440)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+6144)*1+lsi)*1]), &(inteval->stack[((hsi*216+2088)*1+lsi)*1]), &(inteval->stack[((hsi*168+2304)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+5640)*1+lsi)*1]), &(inteval->stack[((hsi*216+1704)*1+lsi)*1]), &(inteval->stack[((hsi*168+1920)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+5136)*1+lsi)*1]), &(inteval->stack[((hsi*216+1320)*1+lsi)*1]), &(inteval->stack[((hsi*168+1536)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+4632)*1+lsi)*1]), &(inteval->stack[((hsi*216+936)*1+lsi)*1]), &(inteval->stack[((hsi*168+1152)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+4128)*1+lsi)*1]), &(inteval->stack[((hsi*216+552)*1+lsi)*1]), &(inteval->stack[((hsi*168+768)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+3624)*1+lsi)*1]), &(inteval->stack[((hsi*216+168)*1+lsi)*1]), &(inteval->stack[((hsi*168+384)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*504+3624)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*504+4128)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*504+4632)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*504+5136)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*504+5640)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*504+6144)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*504+6648)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*504+7152)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*504+7656)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*504+8160)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*504+8664)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*504+9168)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
