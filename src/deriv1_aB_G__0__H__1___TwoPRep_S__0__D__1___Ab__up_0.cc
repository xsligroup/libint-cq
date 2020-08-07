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
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001d.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010d.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100d.h>
#include <HRRPart1bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_G__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__H__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12210)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+34890)*1+lsi)*1]), &(inteval->stack[((hsi*420+7650)*1+lsi)*1]), &(inteval->stack[((hsi*315+9030)*1+lsi)*1]),15);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+35835)*1+lsi)*1]), &(inteval->stack[((hsi*420+11475)*1+lsi)*1]), &(inteval->stack[((hsi*315+11895)*1+lsi)*1]), &(inteval->stack[((hsi*315+9030)*1+lsi)*1]),15);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1260+36780)*1+lsi)*1]), &(inteval->stack[((hsi*540+10935)*1+lsi)*1]), &(inteval->stack[((hsi*420+11475)*1+lsi)*1]), &(inteval->stack[((hsi*420+7650)*1+lsi)*1]),15);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1890+33000)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36780)*1+lsi)*1]), &(inteval->stack[((hsi*945+35835)*1+lsi)*1]), &(inteval->stack[((hsi*945+34890)*1+lsi)*1]),15);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+38040)*1+lsi)*1]), &(inteval->stack[((hsi*420+10200)*1+lsi)*1]), &(inteval->stack[((hsi*315+10620)*1+lsi)*1]), &(inteval->stack[((hsi*315+9030)*1+lsi)*1]),15);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1260+38985)*1+lsi)*1]), &(inteval->stack[((hsi*540+9660)*1+lsi)*1]), &(inteval->stack[((hsi*420+10200)*1+lsi)*1]), &(inteval->stack[((hsi*420+7650)*1+lsi)*1]),15);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1890+31110)*1+lsi)*1]), &(inteval->stack[((hsi*1260+38985)*1+lsi)*1]), &(inteval->stack[((hsi*945+38040)*1+lsi)*1]), &(inteval->stack[((hsi*945+34890)*1+lsi)*1]),15);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+40245)*1+lsi)*1]), &(inteval->stack[((hsi*420+8610)*1+lsi)*1]), &(inteval->stack[((hsi*315+9345)*1+lsi)*1]), &(inteval->stack[((hsi*315+9030)*1+lsi)*1]),15);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1260+41190)*1+lsi)*1]), &(inteval->stack[((hsi*540+8070)*1+lsi)*1]), &(inteval->stack[((hsi*420+8610)*1+lsi)*1]), &(inteval->stack[((hsi*420+7650)*1+lsi)*1]),15);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1890+29220)*1+lsi)*1]), &(inteval->stack[((hsi*1260+41190)*1+lsi)*1]), &(inteval->stack[((hsi*945+40245)*1+lsi)*1]), &(inteval->stack[((hsi*945+34890)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+42450)*1+lsi)*1]), &(inteval->stack[((hsi*420+3090)*1+lsi)*1]), &(inteval->stack[((hsi*420+6915)*1+lsi)*1]), &(inteval->stack[((hsi*420+11475)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+11475)*1+lsi)*1]), &(inteval->stack[((hsi*315+3510)*1+lsi)*1]), &(inteval->stack[((hsi*315+7335)*1+lsi)*1]), &(inteval->stack[((hsi*315+11895)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*945+42870)*1+lsi)*1]), &(inteval->stack[((hsi*420+42450)*1+lsi)*1]), &(inteval->stack[((hsi*315+11475)*1+lsi)*1]), &(inteval->stack[((hsi*315+9030)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+11475)*1+lsi)*1]), &(inteval->stack[((hsi*540+2550)*1+lsi)*1]), &(inteval->stack[((hsi*540+6375)*1+lsi)*1]), &(inteval->stack[((hsi*540+10935)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1260+43815)*1+lsi)*1]), &(inteval->stack[((hsi*540+11475)*1+lsi)*1]), &(inteval->stack[((hsi*420+42450)*1+lsi)*1]), &(inteval->stack[((hsi*420+7650)*1+lsi)*1]),15);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*1890+27330)*1+lsi)*1]), &(inteval->stack[((hsi*1260+43815)*1+lsi)*1]), &(inteval->stack[((hsi*945+42870)*1+lsi)*1]), &(inteval->stack[((hsi*945+34890)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+42450)*1+lsi)*1]), &(inteval->stack[((hsi*420+1815)*1+lsi)*1]), &(inteval->stack[((hsi*420+5640)*1+lsi)*1]), &(inteval->stack[((hsi*420+10200)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+10935)*1+lsi)*1]), &(inteval->stack[((hsi*315+2235)*1+lsi)*1]), &(inteval->stack[((hsi*315+6060)*1+lsi)*1]), &(inteval->stack[((hsi*315+10620)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*945+11250)*1+lsi)*1]), &(inteval->stack[((hsi*420+42450)*1+lsi)*1]), &(inteval->stack[((hsi*315+10935)*1+lsi)*1]), &(inteval->stack[((hsi*315+9030)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+10200)*1+lsi)*1]), &(inteval->stack[((hsi*540+1275)*1+lsi)*1]), &(inteval->stack[((hsi*540+5100)*1+lsi)*1]), &(inteval->stack[((hsi*540+9660)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1260+45075)*1+lsi)*1]), &(inteval->stack[((hsi*540+10200)*1+lsi)*1]), &(inteval->stack[((hsi*420+42450)*1+lsi)*1]), &(inteval->stack[((hsi*420+7650)*1+lsi)*1]),15);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*1890+25440)*1+lsi)*1]), &(inteval->stack[((hsi*1260+45075)*1+lsi)*1]), &(inteval->stack[((hsi*945+11250)*1+lsi)*1]), &(inteval->stack[((hsi*945+34890)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+42450)*1+lsi)*1]), &(inteval->stack[((hsi*420+540)*1+lsi)*1]), &(inteval->stack[((hsi*420+4365)*1+lsi)*1]), &(inteval->stack[((hsi*420+8610)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+9660)*1+lsi)*1]), &(inteval->stack[((hsi*315+960)*1+lsi)*1]), &(inteval->stack[((hsi*315+4785)*1+lsi)*1]), &(inteval->stack[((hsi*315+9345)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*945+9975)*1+lsi)*1]), &(inteval->stack[((hsi*420+42450)*1+lsi)*1]), &(inteval->stack[((hsi*315+9660)*1+lsi)*1]), &(inteval->stack[((hsi*315+9030)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+8610)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+3825)*1+lsi)*1]), &(inteval->stack[((hsi*540+8070)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1260+46335)*1+lsi)*1]), &(inteval->stack[((hsi*540+8610)*1+lsi)*1]), &(inteval->stack[((hsi*420+42450)*1+lsi)*1]), &(inteval->stack[((hsi*420+7650)*1+lsi)*1]),15);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*1890+23550)*1+lsi)*1]), &(inteval->stack[((hsi*1260+46335)*1+lsi)*1]), &(inteval->stack[((hsi*945+9975)*1+lsi)*1]), &(inteval->stack[((hsi*945+34890)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+7650)*1+lsi)*1]), &(inteval->stack[((hsi*420+6915)*1+lsi)*1]), &(inteval->stack[((hsi*315+7335)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+8595)*1+lsi)*1]), &(inteval->stack[((hsi*540+6375)*1+lsi)*1]), &(inteval->stack[((hsi*420+6915)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+21660)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8595)*1+lsi)*1]), &(inteval->stack[((hsi*945+7650)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+6375)*1+lsi)*1]), &(inteval->stack[((hsi*420+5640)*1+lsi)*1]), &(inteval->stack[((hsi*315+6060)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+47595)*1+lsi)*1]), &(inteval->stack[((hsi*540+5100)*1+lsi)*1]), &(inteval->stack[((hsi*420+5640)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+19770)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47595)*1+lsi)*1]), &(inteval->stack[((hsi*945+6375)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+5100)*1+lsi)*1]), &(inteval->stack[((hsi*420+4365)*1+lsi)*1]), &(inteval->stack[((hsi*315+4785)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+48855)*1+lsi)*1]), &(inteval->stack[((hsi*540+3825)*1+lsi)*1]), &(inteval->stack[((hsi*420+4365)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+17880)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48855)*1+lsi)*1]), &(inteval->stack[((hsi*945+5100)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+3825)*1+lsi)*1]), &(inteval->stack[((hsi*420+3090)*1+lsi)*1]), &(inteval->stack[((hsi*315+3510)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+50115)*1+lsi)*1]), &(inteval->stack[((hsi*540+2550)*1+lsi)*1]), &(inteval->stack[((hsi*420+3090)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+15990)*1+lsi)*1]), &(inteval->stack[((hsi*1260+50115)*1+lsi)*1]), &(inteval->stack[((hsi*945+3825)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+2550)*1+lsi)*1]), &(inteval->stack[((hsi*420+1815)*1+lsi)*1]), &(inteval->stack[((hsi*315+2235)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+51375)*1+lsi)*1]), &(inteval->stack[((hsi*540+1275)*1+lsi)*1]), &(inteval->stack[((hsi*420+1815)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+14100)*1+lsi)*1]), &(inteval->stack[((hsi*1260+51375)*1+lsi)*1]), &(inteval->stack[((hsi*945+2550)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+1275)*1+lsi)*1]), &(inteval->stack[((hsi*420+540)*1+lsi)*1]), &(inteval->stack[((hsi*315+960)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+52635)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+540)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+12210)*1+lsi)*1]), &(inteval->stack[((hsi*1260+52635)*1+lsi)*1]), &(inteval->stack[((hsi*945+1275)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1890+12210)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1890+14100)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1890+15990)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1890+17880)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1890+19770)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1890+21660)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1890+23550)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1890+25440)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1890+27330)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1890+29220)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1890+31110)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1890+33000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
