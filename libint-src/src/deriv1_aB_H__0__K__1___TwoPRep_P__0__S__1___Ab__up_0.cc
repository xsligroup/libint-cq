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
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100p.h>
#include <deriv1_aB_H__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_H__0__K__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16632)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*2268+27972)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11592)*1+lsi)*1]), &(inteval->stack[((hsi*756+14364)*1+lsi)*1]), &(inteval->stack[((hsi*756+15876)*1+lsi)*1]),36);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*2268+25704)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6300)*1+lsi)*1]), &(inteval->stack[((hsi*756+9072)*1+lsi)*1]), &(inteval->stack[((hsi*756+15876)*1+lsi)*1]),36);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*2268+23436)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1008)*1+lsi)*1]), &(inteval->stack[((hsi*756+3780)*1+lsi)*1]), &(inteval->stack[((hsi*756+15876)*1+lsi)*1]),36);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*2268+21168)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10584)*1+lsi)*1]), &(inteval->stack[((hsi*756+13608)*1+lsi)*1]), &(inteval->stack[((hsi*756+15876)*1+lsi)*1]),36);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*2268+18900)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5292)*1+lsi)*1]), &(inteval->stack[((hsi*756+8316)*1+lsi)*1]), &(inteval->stack[((hsi*756+15876)*1+lsi)*1]),36);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*2268+16632)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+3024)*1+lsi)*1]), &(inteval->stack[((hsi*756+15876)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+41580)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12600)*1+lsi)*1]), &(inteval->stack[((hsi*756+15120)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+39312)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7308)*1+lsi)*1]), &(inteval->stack[((hsi*756+9828)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+37044)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2016)*1+lsi)*1]), &(inteval->stack[((hsi*756+4536)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+43848)*1+lsi)*1]), &(inteval->stack[((hsi*756+13608)*1+lsi)*1]), &(inteval->stack[((hsi*756+14364)*1+lsi)*1]), &(inteval->stack[((hsi*756+15120)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+44604)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10584)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11592)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12600)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+34776)*1+lsi)*1]), &(inteval->stack[((hsi*1008+44604)*1+lsi)*1]), &(inteval->stack[((hsi*756+43848)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+45612)*1+lsi)*1]), &(inteval->stack[((hsi*756+8316)*1+lsi)*1]), &(inteval->stack[((hsi*756+9072)*1+lsi)*1]), &(inteval->stack[((hsi*756+9828)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+46368)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5292)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6300)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7308)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+32508)*1+lsi)*1]), &(inteval->stack[((hsi*1008+46368)*1+lsi)*1]), &(inteval->stack[((hsi*756+45612)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+47376)*1+lsi)*1]), &(inteval->stack[((hsi*756+3024)*1+lsi)*1]), &(inteval->stack[((hsi*756+3780)*1+lsi)*1]), &(inteval->stack[((hsi*756+4536)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+48132)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2016)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+30240)*1+lsi)*1]), &(inteval->stack[((hsi*1008+48132)*1+lsi)*1]), &(inteval->stack[((hsi*756+47376)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2268+16632)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2268+18900)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2268+21168)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2268+23436)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2268+25704)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2268+27972)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2268+30240)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2268+32508)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2268+34776)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2268+37044)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2268+39312)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2268+41580)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
