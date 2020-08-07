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
#include <CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001d.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010d.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100d.h>
#include <HRRPart1bra0ket0g100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_H__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_H__0__G__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12852)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+35532)*1+lsi)*1]), &(inteval->stack[((hsi*441+8064)*1+lsi)*1]), &(inteval->stack[((hsi*315+9534)*1+lsi)*1]),21);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+36477)*1+lsi)*1]), &(inteval->stack[((hsi*441+12096)*1+lsi)*1]), &(inteval->stack[((hsi*315+12537)*1+lsi)*1]), &(inteval->stack[((hsi*315+9534)*1+lsi)*1]),21);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+37422)*1+lsi)*1]), &(inteval->stack[((hsi*588+11508)*1+lsi)*1]), &(inteval->stack[((hsi*441+12096)*1+lsi)*1]), &(inteval->stack[((hsi*441+8064)*1+lsi)*1]),21);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1890+33642)*1+lsi)*1]), &(inteval->stack[((hsi*1323+37422)*1+lsi)*1]), &(inteval->stack[((hsi*945+36477)*1+lsi)*1]), &(inteval->stack[((hsi*945+35532)*1+lsi)*1]),21);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+38745)*1+lsi)*1]), &(inteval->stack[((hsi*441+10752)*1+lsi)*1]), &(inteval->stack[((hsi*315+11193)*1+lsi)*1]), &(inteval->stack[((hsi*315+9534)*1+lsi)*1]),21);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+39690)*1+lsi)*1]), &(inteval->stack[((hsi*588+10164)*1+lsi)*1]), &(inteval->stack[((hsi*441+10752)*1+lsi)*1]), &(inteval->stack[((hsi*441+8064)*1+lsi)*1]),21);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1890+31752)*1+lsi)*1]), &(inteval->stack[((hsi*1323+39690)*1+lsi)*1]), &(inteval->stack[((hsi*945+38745)*1+lsi)*1]), &(inteval->stack[((hsi*945+35532)*1+lsi)*1]),21);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+41013)*1+lsi)*1]), &(inteval->stack[((hsi*441+9093)*1+lsi)*1]), &(inteval->stack[((hsi*315+9849)*1+lsi)*1]), &(inteval->stack[((hsi*315+9534)*1+lsi)*1]),21);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+41958)*1+lsi)*1]), &(inteval->stack[((hsi*588+8505)*1+lsi)*1]), &(inteval->stack[((hsi*441+9093)*1+lsi)*1]), &(inteval->stack[((hsi*441+8064)*1+lsi)*1]),21);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1890+29862)*1+lsi)*1]), &(inteval->stack[((hsi*1323+41958)*1+lsi)*1]), &(inteval->stack[((hsi*945+41013)*1+lsi)*1]), &(inteval->stack[((hsi*945+35532)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+43281)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]), &(inteval->stack[((hsi*441+7308)*1+lsi)*1]), &(inteval->stack[((hsi*441+12096)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+12096)*1+lsi)*1]), &(inteval->stack[((hsi*315+3717)*1+lsi)*1]), &(inteval->stack[((hsi*315+7749)*1+lsi)*1]), &(inteval->stack[((hsi*315+12537)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*945+43722)*1+lsi)*1]), &(inteval->stack[((hsi*441+43281)*1+lsi)*1]), &(inteval->stack[((hsi*315+12096)*1+lsi)*1]), &(inteval->stack[((hsi*315+9534)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+12096)*1+lsi)*1]), &(inteval->stack[((hsi*588+2688)*1+lsi)*1]), &(inteval->stack[((hsi*588+6720)*1+lsi)*1]), &(inteval->stack[((hsi*588+11508)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1323+44667)*1+lsi)*1]), &(inteval->stack[((hsi*588+12096)*1+lsi)*1]), &(inteval->stack[((hsi*441+43281)*1+lsi)*1]), &(inteval->stack[((hsi*441+8064)*1+lsi)*1]),21);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*1890+27972)*1+lsi)*1]), &(inteval->stack[((hsi*1323+44667)*1+lsi)*1]), &(inteval->stack[((hsi*945+43722)*1+lsi)*1]), &(inteval->stack[((hsi*945+35532)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+43281)*1+lsi)*1]), &(inteval->stack[((hsi*441+1932)*1+lsi)*1]), &(inteval->stack[((hsi*441+5964)*1+lsi)*1]), &(inteval->stack[((hsi*441+10752)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+11508)*1+lsi)*1]), &(inteval->stack[((hsi*315+2373)*1+lsi)*1]), &(inteval->stack[((hsi*315+6405)*1+lsi)*1]), &(inteval->stack[((hsi*315+11193)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*945+11823)*1+lsi)*1]), &(inteval->stack[((hsi*441+43281)*1+lsi)*1]), &(inteval->stack[((hsi*315+11508)*1+lsi)*1]), &(inteval->stack[((hsi*315+9534)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+10752)*1+lsi)*1]), &(inteval->stack[((hsi*588+1344)*1+lsi)*1]), &(inteval->stack[((hsi*588+5376)*1+lsi)*1]), &(inteval->stack[((hsi*588+10164)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1323+45990)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]), &(inteval->stack[((hsi*441+43281)*1+lsi)*1]), &(inteval->stack[((hsi*441+8064)*1+lsi)*1]),21);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*1890+26082)*1+lsi)*1]), &(inteval->stack[((hsi*1323+45990)*1+lsi)*1]), &(inteval->stack[((hsi*945+11823)*1+lsi)*1]), &(inteval->stack[((hsi*945+35532)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+43281)*1+lsi)*1]), &(inteval->stack[((hsi*441+588)*1+lsi)*1]), &(inteval->stack[((hsi*441+4620)*1+lsi)*1]), &(inteval->stack[((hsi*441+9093)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+10164)*1+lsi)*1]), &(inteval->stack[((hsi*315+1029)*1+lsi)*1]), &(inteval->stack[((hsi*315+5061)*1+lsi)*1]), &(inteval->stack[((hsi*315+9849)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*945+10479)*1+lsi)*1]), &(inteval->stack[((hsi*441+43281)*1+lsi)*1]), &(inteval->stack[((hsi*315+10164)*1+lsi)*1]), &(inteval->stack[((hsi*315+9534)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+9093)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+4032)*1+lsi)*1]), &(inteval->stack[((hsi*588+8505)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1323+47313)*1+lsi)*1]), &(inteval->stack[((hsi*588+9093)*1+lsi)*1]), &(inteval->stack[((hsi*441+43281)*1+lsi)*1]), &(inteval->stack[((hsi*441+8064)*1+lsi)*1]),21);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*1890+24192)*1+lsi)*1]), &(inteval->stack[((hsi*1323+47313)*1+lsi)*1]), &(inteval->stack[((hsi*945+10479)*1+lsi)*1]), &(inteval->stack[((hsi*945+35532)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+8064)*1+lsi)*1]), &(inteval->stack[((hsi*441+7308)*1+lsi)*1]), &(inteval->stack[((hsi*315+7749)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+9009)*1+lsi)*1]), &(inteval->stack[((hsi*588+6720)*1+lsi)*1]), &(inteval->stack[((hsi*441+7308)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+22302)*1+lsi)*1]), &(inteval->stack[((hsi*1323+9009)*1+lsi)*1]), &(inteval->stack[((hsi*945+8064)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+6720)*1+lsi)*1]), &(inteval->stack[((hsi*441+5964)*1+lsi)*1]), &(inteval->stack[((hsi*315+6405)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+48636)*1+lsi)*1]), &(inteval->stack[((hsi*588+5376)*1+lsi)*1]), &(inteval->stack[((hsi*441+5964)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+20412)*1+lsi)*1]), &(inteval->stack[((hsi*1323+48636)*1+lsi)*1]), &(inteval->stack[((hsi*945+6720)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+5376)*1+lsi)*1]), &(inteval->stack[((hsi*441+4620)*1+lsi)*1]), &(inteval->stack[((hsi*315+5061)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+49959)*1+lsi)*1]), &(inteval->stack[((hsi*588+4032)*1+lsi)*1]), &(inteval->stack[((hsi*441+4620)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+18522)*1+lsi)*1]), &(inteval->stack[((hsi*1323+49959)*1+lsi)*1]), &(inteval->stack[((hsi*945+5376)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+4032)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]), &(inteval->stack[((hsi*315+3717)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+51282)*1+lsi)*1]), &(inteval->stack[((hsi*588+2688)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+16632)*1+lsi)*1]), &(inteval->stack[((hsi*1323+51282)*1+lsi)*1]), &(inteval->stack[((hsi*945+4032)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+2688)*1+lsi)*1]), &(inteval->stack[((hsi*441+1932)*1+lsi)*1]), &(inteval->stack[((hsi*315+2373)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+52605)*1+lsi)*1]), &(inteval->stack[((hsi*588+1344)*1+lsi)*1]), &(inteval->stack[((hsi*441+1932)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+14742)*1+lsi)*1]), &(inteval->stack[((hsi*1323+52605)*1+lsi)*1]), &(inteval->stack[((hsi*945+2688)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+1344)*1+lsi)*1]), &(inteval->stack[((hsi*441+588)*1+lsi)*1]), &(inteval->stack[((hsi*315+1029)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+53928)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*441+588)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+12852)*1+lsi)*1]), &(inteval->stack[((hsi*1323+53928)*1+lsi)*1]), &(inteval->stack[((hsi*945+1344)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1890+12852)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1890+14742)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1890+16632)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1890+18522)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1890+20412)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1890+22302)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1890+24192)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1890+26082)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1890+27972)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1890+29862)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1890+31752)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1890+33642)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
