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
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_G__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_G__0__K__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,28215)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1620+86535)*1+lsi)*1]), &(inteval->stack[((hsi*675+27000)*1+lsi)*1]), &(inteval->stack[((hsi*540+27675)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),15);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*2268+88155)*1+lsi)*1]), &(inteval->stack[((hsi*945+25299)*1+lsi)*1]), &(inteval->stack[((hsi*756+26244)*1+lsi)*1]), &(inteval->stack[((hsi*756+18711)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4860+81675)*1+lsi)*1]), &(inteval->stack[((hsi*2268+88155)*1+lsi)*1]), &(inteval->stack[((hsi*1620+86535)*1+lsi)*1]),108);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1620+90423)*1+lsi)*1]), &(inteval->stack[((hsi*675+24084)*1+lsi)*1]), &(inteval->stack[((hsi*540+24759)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),15);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*2268+92043)*1+lsi)*1]), &(inteval->stack[((hsi*945+22383)*1+lsi)*1]), &(inteval->stack[((hsi*756+23328)*1+lsi)*1]), &(inteval->stack[((hsi*756+18711)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4860+76815)*1+lsi)*1]), &(inteval->stack[((hsi*2268+92043)*1+lsi)*1]), &(inteval->stack[((hsi*1620+90423)*1+lsi)*1]),108);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1620+94311)*1+lsi)*1]), &(inteval->stack[((hsi*675+21168)*1+lsi)*1]), &(inteval->stack[((hsi*540+21843)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),15);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*2268+95931)*1+lsi)*1]), &(inteval->stack[((hsi*945+19467)*1+lsi)*1]), &(inteval->stack[((hsi*756+20412)*1+lsi)*1]), &(inteval->stack[((hsi*756+18711)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4860+71955)*1+lsi)*1]), &(inteval->stack[((hsi*2268+95931)*1+lsi)*1]), &(inteval->stack[((hsi*1620+94311)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+98199)*1+lsi)*1]), &(inteval->stack[((hsi*540+9423)*1+lsi)*1]), &(inteval->stack[((hsi*540+18171)*1+lsi)*1]), &(inteval->stack[((hsi*540+27675)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+98739)*1+lsi)*1]), &(inteval->stack[((hsi*675+7992)*1+lsi)*1]), &(inteval->stack[((hsi*675+16740)*1+lsi)*1]), &(inteval->stack[((hsi*675+27000)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1620+99414)*1+lsi)*1]), &(inteval->stack[((hsi*675+98739)*1+lsi)*1]), &(inteval->stack[((hsi*540+98199)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+27000)*1+lsi)*1]), &(inteval->stack[((hsi*756+8667)*1+lsi)*1]), &(inteval->stack[((hsi*756+17415)*1+lsi)*1]), &(inteval->stack[((hsi*756+26244)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+98199)*1+lsi)*1]), &(inteval->stack[((hsi*945+7047)*1+lsi)*1]), &(inteval->stack[((hsi*945+15795)*1+lsi)*1]), &(inteval->stack[((hsi*945+25299)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*2268+101034)*1+lsi)*1]), &(inteval->stack[((hsi*945+98199)*1+lsi)*1]), &(inteval->stack[((hsi*756+27000)*1+lsi)*1]), &(inteval->stack[((hsi*756+18711)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4860+67095)*1+lsi)*1]), &(inteval->stack[((hsi*2268+101034)*1+lsi)*1]), &(inteval->stack[((hsi*1620+99414)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+25299)*1+lsi)*1]), &(inteval->stack[((hsi*540+6507)*1+lsi)*1]), &(inteval->stack[((hsi*540+15255)*1+lsi)*1]), &(inteval->stack[((hsi*540+24759)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+25839)*1+lsi)*1]), &(inteval->stack[((hsi*675+5076)*1+lsi)*1]), &(inteval->stack[((hsi*675+13824)*1+lsi)*1]), &(inteval->stack[((hsi*675+24084)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1620+26514)*1+lsi)*1]), &(inteval->stack[((hsi*675+25839)*1+lsi)*1]), &(inteval->stack[((hsi*540+25299)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+24084)*1+lsi)*1]), &(inteval->stack[((hsi*756+5751)*1+lsi)*1]), &(inteval->stack[((hsi*756+14499)*1+lsi)*1]), &(inteval->stack[((hsi*756+23328)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+24840)*1+lsi)*1]), &(inteval->stack[((hsi*945+4131)*1+lsi)*1]), &(inteval->stack[((hsi*945+12879)*1+lsi)*1]), &(inteval->stack[((hsi*945+22383)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*2268+103302)*1+lsi)*1]), &(inteval->stack[((hsi*945+24840)*1+lsi)*1]), &(inteval->stack[((hsi*756+24084)*1+lsi)*1]), &(inteval->stack[((hsi*756+18711)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4860+62235)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103302)*1+lsi)*1]), &(inteval->stack[((hsi*1620+26514)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+22383)*1+lsi)*1]), &(inteval->stack[((hsi*540+3051)*1+lsi)*1]), &(inteval->stack[((hsi*540+12339)*1+lsi)*1]), &(inteval->stack[((hsi*540+21843)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+22923)*1+lsi)*1]), &(inteval->stack[((hsi*675+945)*1+lsi)*1]), &(inteval->stack[((hsi*675+10908)*1+lsi)*1]), &(inteval->stack[((hsi*675+21168)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1620+23598)*1+lsi)*1]), &(inteval->stack[((hsi*675+22923)*1+lsi)*1]), &(inteval->stack[((hsi*540+22383)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+21168)*1+lsi)*1]), &(inteval->stack[((hsi*756+2295)*1+lsi)*1]), &(inteval->stack[((hsi*756+11583)*1+lsi)*1]), &(inteval->stack[((hsi*756+20412)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+21924)*1+lsi)*1]), &(inteval->stack[((hsi*945+0)*1+lsi)*1]), &(inteval->stack[((hsi*945+9963)*1+lsi)*1]), &(inteval->stack[((hsi*945+19467)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*2268+105570)*1+lsi)*1]), &(inteval->stack[((hsi*945+21924)*1+lsi)*1]), &(inteval->stack[((hsi*756+21168)*1+lsi)*1]), &(inteval->stack[((hsi*756+18711)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4860+57375)*1+lsi)*1]), &(inteval->stack[((hsi*2268+105570)*1+lsi)*1]), &(inteval->stack[((hsi*1620+23598)*1+lsi)*1]),108);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*1620+18711)*1+lsi)*1]), &(inteval->stack[((hsi*756+17415)*1+lsi)*1]), &(inteval->stack[((hsi*540+18171)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),36);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*2025+20331)*1+lsi)*1]), &(inteval->stack[((hsi*945+15795)*1+lsi)*1]), &(inteval->stack[((hsi*675+16740)*1+lsi)*1]), &(inteval->stack[((hsi*675+1620)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+52515)*1+lsi)*1]), &(inteval->stack[((hsi*2025+20331)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18711)*1+lsi)*1]),45);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*1620+15795)*1+lsi)*1]), &(inteval->stack[((hsi*756+14499)*1+lsi)*1]), &(inteval->stack[((hsi*540+15255)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),36);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*2025+107838)*1+lsi)*1]), &(inteval->stack[((hsi*945+12879)*1+lsi)*1]), &(inteval->stack[((hsi*675+13824)*1+lsi)*1]), &(inteval->stack[((hsi*675+1620)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+47655)*1+lsi)*1]), &(inteval->stack[((hsi*2025+107838)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15795)*1+lsi)*1]),45);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*1620+12879)*1+lsi)*1]), &(inteval->stack[((hsi*756+11583)*1+lsi)*1]), &(inteval->stack[((hsi*540+12339)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),36);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*2025+109863)*1+lsi)*1]), &(inteval->stack[((hsi*945+9963)*1+lsi)*1]), &(inteval->stack[((hsi*675+10908)*1+lsi)*1]), &(inteval->stack[((hsi*675+1620)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+42795)*1+lsi)*1]), &(inteval->stack[((hsi*2025+109863)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12879)*1+lsi)*1]),45);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*1620+9963)*1+lsi)*1]), &(inteval->stack[((hsi*756+8667)*1+lsi)*1]), &(inteval->stack[((hsi*540+9423)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),36);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*2025+111888)*1+lsi)*1]), &(inteval->stack[((hsi*945+7047)*1+lsi)*1]), &(inteval->stack[((hsi*675+7992)*1+lsi)*1]), &(inteval->stack[((hsi*675+1620)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+37935)*1+lsi)*1]), &(inteval->stack[((hsi*2025+111888)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9963)*1+lsi)*1]),45);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*1620+7047)*1+lsi)*1]), &(inteval->stack[((hsi*756+5751)*1+lsi)*1]), &(inteval->stack[((hsi*540+6507)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),36);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*2025+113913)*1+lsi)*1]), &(inteval->stack[((hsi*945+4131)*1+lsi)*1]), &(inteval->stack[((hsi*675+5076)*1+lsi)*1]), &(inteval->stack[((hsi*675+1620)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+33075)*1+lsi)*1]), &(inteval->stack[((hsi*2025+113913)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7047)*1+lsi)*1]),45);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*1620+4131)*1+lsi)*1]), &(inteval->stack[((hsi*756+2295)*1+lsi)*1]), &(inteval->stack[((hsi*540+3051)*1+lsi)*1]), &(inteval->stack[((hsi*540+3591)*1+lsi)*1]),36);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*2025+115938)*1+lsi)*1]), &(inteval->stack[((hsi*945+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+945)*1+lsi)*1]), &(inteval->stack[((hsi*675+1620)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+28215)*1+lsi)*1]), &(inteval->stack[((hsi*2025+115938)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4131)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4860+28215)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*4860+33075)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*4860+37935)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*4860+42795)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*4860+47655)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*4860+52515)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*4860+57375)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*4860+62235)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*4860+67095)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*4860+71955)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*4860+76815)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*4860+81675)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
