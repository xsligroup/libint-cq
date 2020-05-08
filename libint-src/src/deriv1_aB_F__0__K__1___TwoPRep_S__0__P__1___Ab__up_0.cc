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
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_F__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__K__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7650)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1080+19530)*1+lsi)*1]), &(inteval->stack[((hsi*450+6840)*1+lsi)*1]), &(inteval->stack[((hsi*360+7290)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1080+18450)*1+lsi)*1]), &(inteval->stack[((hsi*450+6030)*1+lsi)*1]), &(inteval->stack[((hsi*360+6480)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1080+17370)*1+lsi)*1]), &(inteval->stack[((hsi*450+5220)*1+lsi)*1]), &(inteval->stack[((hsi*360+5670)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+20610)*1+lsi)*1]), &(inteval->stack[((hsi*360+2430)*1+lsi)*1]), &(inteval->stack[((hsi*360+4860)*1+lsi)*1]), &(inteval->stack[((hsi*360+7290)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+20970)*1+lsi)*1]), &(inteval->stack[((hsi*450+1980)*1+lsi)*1]), &(inteval->stack[((hsi*450+4410)*1+lsi)*1]), &(inteval->stack[((hsi*450+6840)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1080+16290)*1+lsi)*1]), &(inteval->stack[((hsi*450+20970)*1+lsi)*1]), &(inteval->stack[((hsi*360+20610)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+21420)*1+lsi)*1]), &(inteval->stack[((hsi*360+1620)*1+lsi)*1]), &(inteval->stack[((hsi*360+4050)*1+lsi)*1]), &(inteval->stack[((hsi*360+6480)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+21780)*1+lsi)*1]), &(inteval->stack[((hsi*450+1170)*1+lsi)*1]), &(inteval->stack[((hsi*450+3600)*1+lsi)*1]), &(inteval->stack[((hsi*450+6030)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1080+15210)*1+lsi)*1]), &(inteval->stack[((hsi*450+21780)*1+lsi)*1]), &(inteval->stack[((hsi*360+21420)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+22230)*1+lsi)*1]), &(inteval->stack[((hsi*360+810)*1+lsi)*1]), &(inteval->stack[((hsi*360+3240)*1+lsi)*1]), &(inteval->stack[((hsi*360+5670)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+22590)*1+lsi)*1]), &(inteval->stack[((hsi*450+360)*1+lsi)*1]), &(inteval->stack[((hsi*450+2790)*1+lsi)*1]), &(inteval->stack[((hsi*450+5220)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1080+14130)*1+lsi)*1]), &(inteval->stack[((hsi*450+22590)*1+lsi)*1]), &(inteval->stack[((hsi*360+22230)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+13050)*1+lsi)*1]), &(inteval->stack[((hsi*450+4410)*1+lsi)*1]), &(inteval->stack[((hsi*360+4860)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+11970)*1+lsi)*1]), &(inteval->stack[((hsi*450+3600)*1+lsi)*1]), &(inteval->stack[((hsi*360+4050)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+10890)*1+lsi)*1]), &(inteval->stack[((hsi*450+2790)*1+lsi)*1]), &(inteval->stack[((hsi*360+3240)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+9810)*1+lsi)*1]), &(inteval->stack[((hsi*450+1980)*1+lsi)*1]), &(inteval->stack[((hsi*360+2430)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+8730)*1+lsi)*1]), &(inteval->stack[((hsi*450+1170)*1+lsi)*1]), &(inteval->stack[((hsi*360+1620)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+7650)*1+lsi)*1]), &(inteval->stack[((hsi*450+360)*1+lsi)*1]), &(inteval->stack[((hsi*360+810)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1080+7650)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1080+8730)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1080+9810)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1080+10890)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1080+11970)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1080+13050)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1080+14130)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1080+15210)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1080+16290)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1080+17370)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1080+18450)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1080+19530)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
