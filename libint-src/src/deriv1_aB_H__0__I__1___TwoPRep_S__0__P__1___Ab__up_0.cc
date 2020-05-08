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
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_H__0__I__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_H__0__I__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12684)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__I__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1764+32088)*1+lsi)*1]), &(inteval->stack[((hsi*756+11340)*1+lsi)*1]), &(inteval->stack[((hsi*588+12096)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1764+30324)*1+lsi)*1]), &(inteval->stack[((hsi*756+9996)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1764+28560)*1+lsi)*1]), &(inteval->stack[((hsi*756+8652)*1+lsi)*1]), &(inteval->stack[((hsi*588+9408)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+33852)*1+lsi)*1]), &(inteval->stack[((hsi*588+4032)*1+lsi)*1]), &(inteval->stack[((hsi*588+8064)*1+lsi)*1]), &(inteval->stack[((hsi*588+12096)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+34440)*1+lsi)*1]), &(inteval->stack[((hsi*756+3276)*1+lsi)*1]), &(inteval->stack[((hsi*756+7308)*1+lsi)*1]), &(inteval->stack[((hsi*756+11340)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1764+26796)*1+lsi)*1]), &(inteval->stack[((hsi*756+34440)*1+lsi)*1]), &(inteval->stack[((hsi*588+33852)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+35196)*1+lsi)*1]), &(inteval->stack[((hsi*588+2688)*1+lsi)*1]), &(inteval->stack[((hsi*588+6720)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+35784)*1+lsi)*1]), &(inteval->stack[((hsi*756+1932)*1+lsi)*1]), &(inteval->stack[((hsi*756+5964)*1+lsi)*1]), &(inteval->stack[((hsi*756+9996)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1764+25032)*1+lsi)*1]), &(inteval->stack[((hsi*756+35784)*1+lsi)*1]), &(inteval->stack[((hsi*588+35196)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+36540)*1+lsi)*1]), &(inteval->stack[((hsi*588+1344)*1+lsi)*1]), &(inteval->stack[((hsi*588+5376)*1+lsi)*1]), &(inteval->stack[((hsi*588+9408)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+37128)*1+lsi)*1]), &(inteval->stack[((hsi*756+588)*1+lsi)*1]), &(inteval->stack[((hsi*756+4620)*1+lsi)*1]), &(inteval->stack[((hsi*756+8652)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1764+23268)*1+lsi)*1]), &(inteval->stack[((hsi*756+37128)*1+lsi)*1]), &(inteval->stack[((hsi*588+36540)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+21504)*1+lsi)*1]), &(inteval->stack[((hsi*756+7308)*1+lsi)*1]), &(inteval->stack[((hsi*588+8064)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+19740)*1+lsi)*1]), &(inteval->stack[((hsi*756+5964)*1+lsi)*1]), &(inteval->stack[((hsi*588+6720)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+17976)*1+lsi)*1]), &(inteval->stack[((hsi*756+4620)*1+lsi)*1]), &(inteval->stack[((hsi*588+5376)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+16212)*1+lsi)*1]), &(inteval->stack[((hsi*756+3276)*1+lsi)*1]), &(inteval->stack[((hsi*588+4032)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+14448)*1+lsi)*1]), &(inteval->stack[((hsi*756+1932)*1+lsi)*1]), &(inteval->stack[((hsi*588+2688)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+12684)*1+lsi)*1]), &(inteval->stack[((hsi*756+588)*1+lsi)*1]), &(inteval->stack[((hsi*588+1344)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1764+12684)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1764+14448)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1764+16212)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1764+17976)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1764+19740)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1764+21504)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1764+23268)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1764+25032)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1764+26796)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1764+28560)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1764+30324)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1764+32088)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
