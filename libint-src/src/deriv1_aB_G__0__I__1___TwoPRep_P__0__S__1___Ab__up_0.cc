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
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <deriv1_aB_G__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_G__0__I__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9492)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+15792)*1+lsi)*1]), &(inteval->stack[((hsi*588+6636)*1+lsi)*1]), &(inteval->stack[((hsi*420+8232)*1+lsi)*1]), &(inteval->stack[((hsi*420+9072)*1+lsi)*1]),28);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+14532)*1+lsi)*1]), &(inteval->stack[((hsi*588+3612)*1+lsi)*1]), &(inteval->stack[((hsi*420+5208)*1+lsi)*1]), &(inteval->stack[((hsi*420+9072)*1+lsi)*1]),28);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+13272)*1+lsi)*1]), &(inteval->stack[((hsi*588+588)*1+lsi)*1]), &(inteval->stack[((hsi*420+2184)*1+lsi)*1]), &(inteval->stack[((hsi*420+9072)*1+lsi)*1]),28);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*1260+12012)*1+lsi)*1]), &(inteval->stack[((hsi*588+6048)*1+lsi)*1]), &(inteval->stack[((hsi*420+7812)*1+lsi)*1]), &(inteval->stack[((hsi*420+9072)*1+lsi)*1]),28);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*1260+10752)*1+lsi)*1]), &(inteval->stack[((hsi*588+3024)*1+lsi)*1]), &(inteval->stack[((hsi*420+4788)*1+lsi)*1]), &(inteval->stack[((hsi*420+9072)*1+lsi)*1]),28);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*1260+9492)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+1764)*1+lsi)*1]), &(inteval->stack[((hsi*420+9072)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+23352)*1+lsi)*1]), &(inteval->stack[((hsi*588+7224)*1+lsi)*1]), &(inteval->stack[((hsi*420+8652)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+22092)*1+lsi)*1]), &(inteval->stack[((hsi*588+4200)*1+lsi)*1]), &(inteval->stack[((hsi*420+5628)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+20832)*1+lsi)*1]), &(inteval->stack[((hsi*588+1176)*1+lsi)*1]), &(inteval->stack[((hsi*420+2604)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+24612)*1+lsi)*1]), &(inteval->stack[((hsi*420+7812)*1+lsi)*1]), &(inteval->stack[((hsi*420+8232)*1+lsi)*1]), &(inteval->stack[((hsi*420+8652)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+25032)*1+lsi)*1]), &(inteval->stack[((hsi*588+6048)*1+lsi)*1]), &(inteval->stack[((hsi*588+6636)*1+lsi)*1]), &(inteval->stack[((hsi*588+7224)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+19572)*1+lsi)*1]), &(inteval->stack[((hsi*588+25032)*1+lsi)*1]), &(inteval->stack[((hsi*420+24612)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+25620)*1+lsi)*1]), &(inteval->stack[((hsi*420+4788)*1+lsi)*1]), &(inteval->stack[((hsi*420+5208)*1+lsi)*1]), &(inteval->stack[((hsi*420+5628)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+26040)*1+lsi)*1]), &(inteval->stack[((hsi*588+3024)*1+lsi)*1]), &(inteval->stack[((hsi*588+3612)*1+lsi)*1]), &(inteval->stack[((hsi*588+4200)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+18312)*1+lsi)*1]), &(inteval->stack[((hsi*588+26040)*1+lsi)*1]), &(inteval->stack[((hsi*420+25620)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+26628)*1+lsi)*1]), &(inteval->stack[((hsi*420+1764)*1+lsi)*1]), &(inteval->stack[((hsi*420+2184)*1+lsi)*1]), &(inteval->stack[((hsi*420+2604)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+27048)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+588)*1+lsi)*1]), &(inteval->stack[((hsi*588+1176)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+17052)*1+lsi)*1]), &(inteval->stack[((hsi*588+27048)*1+lsi)*1]), &(inteval->stack[((hsi*420+26628)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1260+9492)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1260+10752)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1260+12012)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1260+13272)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1260+14532)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1260+15792)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1260+17052)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1260+18312)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1260+19572)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1260+20832)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1260+22092)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1260+23352)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
