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
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart0bra0ket0pp001.h>
#include <HRRPart0bra0ket0pp010.h>
#include <HRRPart0bra0ket0pp100.h>
#include <HRRPart0bra0ket0p001p.h>
#include <HRRPart0bra0ket0p010p.h>
#include <HRRPart0bra0ket0p100p.h>
#include <deriv1_aB_P__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_P__0__I__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2352)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*252+3612)*1+lsi)*1]), &(inteval->stack[((hsi*168+1680)*1+lsi)*1]), &(inteval->stack[((hsi*84+2100)*1+lsi)*1]), &(inteval->stack[((hsi*84+2268)*1+lsi)*1]),28);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*252+3360)*1+lsi)*1]), &(inteval->stack[((hsi*168+924)*1+lsi)*1]), &(inteval->stack[((hsi*84+1344)*1+lsi)*1]), &(inteval->stack[((hsi*84+2268)*1+lsi)*1]),28);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*252+3108)*1+lsi)*1]), &(inteval->stack[((hsi*168+168)*1+lsi)*1]), &(inteval->stack[((hsi*84+588)*1+lsi)*1]), &(inteval->stack[((hsi*84+2268)*1+lsi)*1]),28);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*252+2856)*1+lsi)*1]), &(inteval->stack[((hsi*168+1512)*1+lsi)*1]), &(inteval->stack[((hsi*84+2016)*1+lsi)*1]), &(inteval->stack[((hsi*84+2268)*1+lsi)*1]),28);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*252+2604)*1+lsi)*1]), &(inteval->stack[((hsi*168+756)*1+lsi)*1]), &(inteval->stack[((hsi*84+1260)*1+lsi)*1]), &(inteval->stack[((hsi*84+2268)*1+lsi)*1]),28);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*252+2352)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]), &(inteval->stack[((hsi*84+504)*1+lsi)*1]), &(inteval->stack[((hsi*84+2268)*1+lsi)*1]),28);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*252+5124)*1+lsi)*1]), &(inteval->stack[((hsi*168+1848)*1+lsi)*1]), &(inteval->stack[((hsi*84+2184)*1+lsi)*1]),28);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*252+4872)*1+lsi)*1]), &(inteval->stack[((hsi*168+1092)*1+lsi)*1]), &(inteval->stack[((hsi*84+1428)*1+lsi)*1]),28);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*252+4620)*1+lsi)*1]), &(inteval->stack[((hsi*168+336)*1+lsi)*1]), &(inteval->stack[((hsi*84+672)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+5376)*1+lsi)*1]), &(inteval->stack[((hsi*84+2016)*1+lsi)*1]), &(inteval->stack[((hsi*84+2100)*1+lsi)*1]), &(inteval->stack[((hsi*84+2184)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+5460)*1+lsi)*1]), &(inteval->stack[((hsi*168+1512)*1+lsi)*1]), &(inteval->stack[((hsi*168+1680)*1+lsi)*1]), &(inteval->stack[((hsi*168+1848)*1+lsi)*1]));
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*252+4368)*1+lsi)*1]), &(inteval->stack[((hsi*168+5460)*1+lsi)*1]), &(inteval->stack[((hsi*84+5376)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+5628)*1+lsi)*1]), &(inteval->stack[((hsi*84+1260)*1+lsi)*1]), &(inteval->stack[((hsi*84+1344)*1+lsi)*1]), &(inteval->stack[((hsi*84+1428)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+5712)*1+lsi)*1]), &(inteval->stack[((hsi*168+756)*1+lsi)*1]), &(inteval->stack[((hsi*168+924)*1+lsi)*1]), &(inteval->stack[((hsi*168+1092)*1+lsi)*1]));
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*252+4116)*1+lsi)*1]), &(inteval->stack[((hsi*168+5712)*1+lsi)*1]), &(inteval->stack[((hsi*84+5628)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+5880)*1+lsi)*1]), &(inteval->stack[((hsi*84+504)*1+lsi)*1]), &(inteval->stack[((hsi*84+588)*1+lsi)*1]), &(inteval->stack[((hsi*84+672)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+5964)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]), &(inteval->stack[((hsi*168+168)*1+lsi)*1]), &(inteval->stack[((hsi*168+336)*1+lsi)*1]));
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*252+3864)*1+lsi)*1]), &(inteval->stack[((hsi*168+5964)*1+lsi)*1]), &(inteval->stack[((hsi*84+5880)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*252+2352)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*252+2604)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*252+2856)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*252+3108)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*252+3360)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*252+3612)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*252+3864)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*252+4116)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*252+4368)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*252+4620)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*252+4872)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*252+5124)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
