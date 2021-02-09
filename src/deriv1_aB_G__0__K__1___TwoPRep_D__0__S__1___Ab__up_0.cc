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
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gd001.h>
#include <HRRPart0bra0ket0gd010.h>
#include <HRRPart0bra0ket0gd100.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001d.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010d.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100d.h>
#include <HRRPart0bra0ket0g100p.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100p.h>
#include <deriv1_aB_G__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__K__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,22032)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+60912)*1+lsi)*1]), &(inteval->stack[((hsi*756+20736)*1+lsi)*1]), &(inteval->stack[((hsi*540+21492)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+62532)*1+lsi)*1]), &(inteval->stack[((hsi*1008+19728)*1+lsi)*1]), &(inteval->stack[((hsi*756+20736)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+57672)*1+lsi)*1]), &(inteval->stack[((hsi*2268+62532)*1+lsi)*1]), &(inteval->stack[((hsi*1620+60912)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+64800)*1+lsi)*1]), &(inteval->stack[((hsi*756+18432)*1+lsi)*1]), &(inteval->stack[((hsi*540+19188)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+66420)*1+lsi)*1]), &(inteval->stack[((hsi*1008+17424)*1+lsi)*1]), &(inteval->stack[((hsi*756+18432)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+54432)*1+lsi)*1]), &(inteval->stack[((hsi*2268+66420)*1+lsi)*1]), &(inteval->stack[((hsi*1620+64800)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+68688)*1+lsi)*1]), &(inteval->stack[((hsi*756+16128)*1+lsi)*1]), &(inteval->stack[((hsi*540+16884)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+70308)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15120)*1+lsi)*1]), &(inteval->stack[((hsi*756+16128)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+51192)*1+lsi)*1]), &(inteval->stack[((hsi*2268+70308)*1+lsi)*1]), &(inteval->stack[((hsi*1620+68688)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+72576)*1+lsi)*1]), &(inteval->stack[((hsi*756+6912)*1+lsi)*1]), &(inteval->stack[((hsi*756+13824)*1+lsi)*1]), &(inteval->stack[((hsi*756+20736)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+20736)*1+lsi)*1]), &(inteval->stack[((hsi*540+7668)*1+lsi)*1]), &(inteval->stack[((hsi*540+14580)*1+lsi)*1]), &(inteval->stack[((hsi*540+21492)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+73332)*1+lsi)*1]), &(inteval->stack[((hsi*756+72576)*1+lsi)*1]), &(inteval->stack[((hsi*540+20736)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+20736)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5904)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12816)*1+lsi)*1]), &(inteval->stack[((hsi*1008+19728)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+74952)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20736)*1+lsi)*1]), &(inteval->stack[((hsi*756+72576)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+47952)*1+lsi)*1]), &(inteval->stack[((hsi*2268+74952)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73332)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+72576)*1+lsi)*1]), &(inteval->stack[((hsi*756+4608)*1+lsi)*1]), &(inteval->stack[((hsi*756+11520)*1+lsi)*1]), &(inteval->stack[((hsi*756+18432)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+19728)*1+lsi)*1]), &(inteval->stack[((hsi*540+5364)*1+lsi)*1]), &(inteval->stack[((hsi*540+12276)*1+lsi)*1]), &(inteval->stack[((hsi*540+19188)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+20268)*1+lsi)*1]), &(inteval->stack[((hsi*756+72576)*1+lsi)*1]), &(inteval->stack[((hsi*540+19728)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+18432)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3600)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10512)*1+lsi)*1]), &(inteval->stack[((hsi*1008+17424)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+77220)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18432)*1+lsi)*1]), &(inteval->stack[((hsi*756+72576)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+44712)*1+lsi)*1]), &(inteval->stack[((hsi*2268+77220)*1+lsi)*1]), &(inteval->stack[((hsi*1620+20268)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+72576)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]), &(inteval->stack[((hsi*756+9216)*1+lsi)*1]), &(inteval->stack[((hsi*756+16128)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+17424)*1+lsi)*1]), &(inteval->stack[((hsi*540+2520)*1+lsi)*1]), &(inteval->stack[((hsi*540+9972)*1+lsi)*1]), &(inteval->stack[((hsi*540+16884)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+17964)*1+lsi)*1]), &(inteval->stack[((hsi*756+72576)*1+lsi)*1]), &(inteval->stack[((hsi*540+17424)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+16128)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8208)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15120)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+79488)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16128)*1+lsi)*1]), &(inteval->stack[((hsi*756+72576)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+41472)*1+lsi)*1]), &(inteval->stack[((hsi*2268+79488)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17964)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+15120)*1+lsi)*1]), &(inteval->stack[((hsi*756+1764)*1+lsi)*1]), &(inteval->stack[((hsi*540+3060)*1+lsi)*1]),36);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*1620+81756)*1+lsi)*1]), &(inteval->stack[((hsi*756+13824)*1+lsi)*1]), &(inteval->stack[((hsi*540+14580)*1+lsi)*1]), &(inteval->stack[((hsi*540+3060)*1+lsi)*1]),36);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*2268+83376)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12816)*1+lsi)*1]), &(inteval->stack[((hsi*756+13824)*1+lsi)*1]), &(inteval->stack[((hsi*756+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0gd001(inteval, &(inteval->stack[((hsi*3240+38232)*1+lsi)*1]), &(inteval->stack[((hsi*2268+83376)*1+lsi)*1]), &(inteval->stack[((hsi*1620+81756)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15120)*1+lsi)*1]),36);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*1620+12816)*1+lsi)*1]), &(inteval->stack[((hsi*756+11520)*1+lsi)*1]), &(inteval->stack[((hsi*540+12276)*1+lsi)*1]), &(inteval->stack[((hsi*540+3060)*1+lsi)*1]),36);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*2268+85644)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10512)*1+lsi)*1]), &(inteval->stack[((hsi*756+11520)*1+lsi)*1]), &(inteval->stack[((hsi*756+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0gd010(inteval, &(inteval->stack[((hsi*3240+34992)*1+lsi)*1]), &(inteval->stack[((hsi*2268+85644)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12816)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15120)*1+lsi)*1]),36);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*1620+10512)*1+lsi)*1]), &(inteval->stack[((hsi*756+9216)*1+lsi)*1]), &(inteval->stack[((hsi*540+9972)*1+lsi)*1]), &(inteval->stack[((hsi*540+3060)*1+lsi)*1]),36);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*2268+87912)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8208)*1+lsi)*1]), &(inteval->stack[((hsi*756+9216)*1+lsi)*1]), &(inteval->stack[((hsi*756+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0gd100(inteval, &(inteval->stack[((hsi*3240+31752)*1+lsi)*1]), &(inteval->stack[((hsi*2268+87912)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10512)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15120)*1+lsi)*1]),36);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*1620+8208)*1+lsi)*1]), &(inteval->stack[((hsi*756+6912)*1+lsi)*1]), &(inteval->stack[((hsi*540+7668)*1+lsi)*1]), &(inteval->stack[((hsi*540+3060)*1+lsi)*1]),36);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*2268+90180)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5904)*1+lsi)*1]), &(inteval->stack[((hsi*756+6912)*1+lsi)*1]), &(inteval->stack[((hsi*756+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0g001d(inteval, &(inteval->stack[((hsi*3240+28512)*1+lsi)*1]), &(inteval->stack[((hsi*2268+90180)*1+lsi)*1]), &(inteval->stack[((hsi*1620+8208)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15120)*1+lsi)*1]),36);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*1620+5904)*1+lsi)*1]), &(inteval->stack[((hsi*756+4608)*1+lsi)*1]), &(inteval->stack[((hsi*540+5364)*1+lsi)*1]), &(inteval->stack[((hsi*540+3060)*1+lsi)*1]),36);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*2268+92448)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3600)*1+lsi)*1]), &(inteval->stack[((hsi*756+4608)*1+lsi)*1]), &(inteval->stack[((hsi*756+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0g010d(inteval, &(inteval->stack[((hsi*3240+25272)*1+lsi)*1]), &(inteval->stack[((hsi*2268+92448)*1+lsi)*1]), &(inteval->stack[((hsi*1620+5904)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15120)*1+lsi)*1]),36);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*1620+3600)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]), &(inteval->stack[((hsi*540+2520)*1+lsi)*1]), &(inteval->stack[((hsi*540+3060)*1+lsi)*1]),36);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*2268+94716)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]), &(inteval->stack[((hsi*756+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0g100d(inteval, &(inteval->stack[((hsi*3240+22032)*1+lsi)*1]), &(inteval->stack[((hsi*2268+94716)*1+lsi)*1]), &(inteval->stack[((hsi*1620+3600)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15120)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3240+22032)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3240+25272)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3240+28512)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3240+31752)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3240+34992)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3240+38232)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3240+41472)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3240+44712)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3240+47952)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3240+51192)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3240+54432)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3240+57672)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
