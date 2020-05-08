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
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <deriv1_aB_F__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__I__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6580)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*840+10780)*1+lsi)*1]), &(inteval->stack[((hsi*420+4620)*1+lsi)*1]), &(inteval->stack[((hsi*280+5740)*1+lsi)*1]), &(inteval->stack[((hsi*280+6300)*1+lsi)*1]),28);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*840+9940)*1+lsi)*1]), &(inteval->stack[((hsi*420+2520)*1+lsi)*1]), &(inteval->stack[((hsi*280+3640)*1+lsi)*1]), &(inteval->stack[((hsi*280+6300)*1+lsi)*1]),28);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*840+9100)*1+lsi)*1]), &(inteval->stack[((hsi*420+420)*1+lsi)*1]), &(inteval->stack[((hsi*280+1540)*1+lsi)*1]), &(inteval->stack[((hsi*280+6300)*1+lsi)*1]),28);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*840+8260)*1+lsi)*1]), &(inteval->stack[((hsi*420+4200)*1+lsi)*1]), &(inteval->stack[((hsi*280+5460)*1+lsi)*1]), &(inteval->stack[((hsi*280+6300)*1+lsi)*1]),28);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*840+7420)*1+lsi)*1]), &(inteval->stack[((hsi*420+2100)*1+lsi)*1]), &(inteval->stack[((hsi*280+3360)*1+lsi)*1]), &(inteval->stack[((hsi*280+6300)*1+lsi)*1]),28);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*840+6580)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+1260)*1+lsi)*1]), &(inteval->stack[((hsi*280+6300)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+15820)*1+lsi)*1]), &(inteval->stack[((hsi*420+5040)*1+lsi)*1]), &(inteval->stack[((hsi*280+6020)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+14980)*1+lsi)*1]), &(inteval->stack[((hsi*420+2940)*1+lsi)*1]), &(inteval->stack[((hsi*280+3920)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+14140)*1+lsi)*1]), &(inteval->stack[((hsi*420+840)*1+lsi)*1]), &(inteval->stack[((hsi*280+1820)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+16660)*1+lsi)*1]), &(inteval->stack[((hsi*280+5460)*1+lsi)*1]), &(inteval->stack[((hsi*280+5740)*1+lsi)*1]), &(inteval->stack[((hsi*280+6020)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+16940)*1+lsi)*1]), &(inteval->stack[((hsi*420+4200)*1+lsi)*1]), &(inteval->stack[((hsi*420+4620)*1+lsi)*1]), &(inteval->stack[((hsi*420+5040)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+13300)*1+lsi)*1]), &(inteval->stack[((hsi*420+16940)*1+lsi)*1]), &(inteval->stack[((hsi*280+16660)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+17360)*1+lsi)*1]), &(inteval->stack[((hsi*280+3360)*1+lsi)*1]), &(inteval->stack[((hsi*280+3640)*1+lsi)*1]), &(inteval->stack[((hsi*280+3920)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+17640)*1+lsi)*1]), &(inteval->stack[((hsi*420+2100)*1+lsi)*1]), &(inteval->stack[((hsi*420+2520)*1+lsi)*1]), &(inteval->stack[((hsi*420+2940)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+12460)*1+lsi)*1]), &(inteval->stack[((hsi*420+17640)*1+lsi)*1]), &(inteval->stack[((hsi*280+17360)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+18060)*1+lsi)*1]), &(inteval->stack[((hsi*280+1260)*1+lsi)*1]), &(inteval->stack[((hsi*280+1540)*1+lsi)*1]), &(inteval->stack[((hsi*280+1820)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+18340)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+420)*1+lsi)*1]), &(inteval->stack[((hsi*420+840)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+11620)*1+lsi)*1]), &(inteval->stack[((hsi*420+18340)*1+lsi)*1]), &(inteval->stack[((hsi*280+18060)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*840+6580)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*840+7420)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*840+8260)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*840+9100)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*840+9940)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*840+10780)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*840+11620)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*840+12460)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*840+13300)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*840+14140)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*840+14980)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*840+15820)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
