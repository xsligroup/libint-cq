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
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_F__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__H__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8140)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+23260)*1+lsi)*1]), &(inteval->stack[((hsi*280+5100)*1+lsi)*1]), &(inteval->stack[((hsi*210+6020)*1+lsi)*1]),10);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+23890)*1+lsi)*1]), &(inteval->stack[((hsi*280+7650)*1+lsi)*1]), &(inteval->stack[((hsi*210+7930)*1+lsi)*1]), &(inteval->stack[((hsi*210+6020)*1+lsi)*1]),10);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*840+24520)*1+lsi)*1]), &(inteval->stack[((hsi*360+7290)*1+lsi)*1]), &(inteval->stack[((hsi*280+7650)*1+lsi)*1]), &(inteval->stack[((hsi*280+5100)*1+lsi)*1]),10);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1260+22000)*1+lsi)*1]), &(inteval->stack[((hsi*840+24520)*1+lsi)*1]), &(inteval->stack[((hsi*630+23890)*1+lsi)*1]), &(inteval->stack[((hsi*630+23260)*1+lsi)*1]),10);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+25360)*1+lsi)*1]), &(inteval->stack[((hsi*280+6800)*1+lsi)*1]), &(inteval->stack[((hsi*210+7080)*1+lsi)*1]), &(inteval->stack[((hsi*210+6020)*1+lsi)*1]),10);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*840+25990)*1+lsi)*1]), &(inteval->stack[((hsi*360+6440)*1+lsi)*1]), &(inteval->stack[((hsi*280+6800)*1+lsi)*1]), &(inteval->stack[((hsi*280+5100)*1+lsi)*1]),10);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1260+20740)*1+lsi)*1]), &(inteval->stack[((hsi*840+25990)*1+lsi)*1]), &(inteval->stack[((hsi*630+25360)*1+lsi)*1]), &(inteval->stack[((hsi*630+23260)*1+lsi)*1]),10);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+26830)*1+lsi)*1]), &(inteval->stack[((hsi*280+5740)*1+lsi)*1]), &(inteval->stack[((hsi*210+6230)*1+lsi)*1]), &(inteval->stack[((hsi*210+6020)*1+lsi)*1]),10);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*840+27460)*1+lsi)*1]), &(inteval->stack[((hsi*360+5380)*1+lsi)*1]), &(inteval->stack[((hsi*280+5740)*1+lsi)*1]), &(inteval->stack[((hsi*280+5100)*1+lsi)*1]),10);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1260+19480)*1+lsi)*1]), &(inteval->stack[((hsi*840+27460)*1+lsi)*1]), &(inteval->stack[((hsi*630+26830)*1+lsi)*1]), &(inteval->stack[((hsi*630+23260)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+28300)*1+lsi)*1]), &(inteval->stack[((hsi*280+2060)*1+lsi)*1]), &(inteval->stack[((hsi*280+4610)*1+lsi)*1]), &(inteval->stack[((hsi*280+7650)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+7650)*1+lsi)*1]), &(inteval->stack[((hsi*210+2340)*1+lsi)*1]), &(inteval->stack[((hsi*210+4890)*1+lsi)*1]), &(inteval->stack[((hsi*210+7930)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*630+28580)*1+lsi)*1]), &(inteval->stack[((hsi*280+28300)*1+lsi)*1]), &(inteval->stack[((hsi*210+7650)*1+lsi)*1]), &(inteval->stack[((hsi*210+6020)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+7650)*1+lsi)*1]), &(inteval->stack[((hsi*360+1700)*1+lsi)*1]), &(inteval->stack[((hsi*360+4250)*1+lsi)*1]), &(inteval->stack[((hsi*360+7290)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*840+29210)*1+lsi)*1]), &(inteval->stack[((hsi*360+7650)*1+lsi)*1]), &(inteval->stack[((hsi*280+28300)*1+lsi)*1]), &(inteval->stack[((hsi*280+5100)*1+lsi)*1]),10);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*1260+18220)*1+lsi)*1]), &(inteval->stack[((hsi*840+29210)*1+lsi)*1]), &(inteval->stack[((hsi*630+28580)*1+lsi)*1]), &(inteval->stack[((hsi*630+23260)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+28300)*1+lsi)*1]), &(inteval->stack[((hsi*280+1210)*1+lsi)*1]), &(inteval->stack[((hsi*280+3760)*1+lsi)*1]), &(inteval->stack[((hsi*280+6800)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+7290)*1+lsi)*1]), &(inteval->stack[((hsi*210+1490)*1+lsi)*1]), &(inteval->stack[((hsi*210+4040)*1+lsi)*1]), &(inteval->stack[((hsi*210+7080)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*630+7500)*1+lsi)*1]), &(inteval->stack[((hsi*280+28300)*1+lsi)*1]), &(inteval->stack[((hsi*210+7290)*1+lsi)*1]), &(inteval->stack[((hsi*210+6020)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+6800)*1+lsi)*1]), &(inteval->stack[((hsi*360+850)*1+lsi)*1]), &(inteval->stack[((hsi*360+3400)*1+lsi)*1]), &(inteval->stack[((hsi*360+6440)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*840+30050)*1+lsi)*1]), &(inteval->stack[((hsi*360+6800)*1+lsi)*1]), &(inteval->stack[((hsi*280+28300)*1+lsi)*1]), &(inteval->stack[((hsi*280+5100)*1+lsi)*1]),10);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*1260+16960)*1+lsi)*1]), &(inteval->stack[((hsi*840+30050)*1+lsi)*1]), &(inteval->stack[((hsi*630+7500)*1+lsi)*1]), &(inteval->stack[((hsi*630+23260)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+28300)*1+lsi)*1]), &(inteval->stack[((hsi*280+360)*1+lsi)*1]), &(inteval->stack[((hsi*280+2910)*1+lsi)*1]), &(inteval->stack[((hsi*280+5740)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+6440)*1+lsi)*1]), &(inteval->stack[((hsi*210+640)*1+lsi)*1]), &(inteval->stack[((hsi*210+3190)*1+lsi)*1]), &(inteval->stack[((hsi*210+6230)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*630+6650)*1+lsi)*1]), &(inteval->stack[((hsi*280+28300)*1+lsi)*1]), &(inteval->stack[((hsi*210+6440)*1+lsi)*1]), &(inteval->stack[((hsi*210+6020)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+5740)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+2550)*1+lsi)*1]), &(inteval->stack[((hsi*360+5380)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*840+30890)*1+lsi)*1]), &(inteval->stack[((hsi*360+5740)*1+lsi)*1]), &(inteval->stack[((hsi*280+28300)*1+lsi)*1]), &(inteval->stack[((hsi*280+5100)*1+lsi)*1]),10);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*1260+15700)*1+lsi)*1]), &(inteval->stack[((hsi*840+30890)*1+lsi)*1]), &(inteval->stack[((hsi*630+6650)*1+lsi)*1]), &(inteval->stack[((hsi*630+23260)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+5100)*1+lsi)*1]), &(inteval->stack[((hsi*280+4610)*1+lsi)*1]), &(inteval->stack[((hsi*210+4890)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+5730)*1+lsi)*1]), &(inteval->stack[((hsi*360+4250)*1+lsi)*1]), &(inteval->stack[((hsi*280+4610)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+14440)*1+lsi)*1]), &(inteval->stack[((hsi*840+5730)*1+lsi)*1]), &(inteval->stack[((hsi*630+5100)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+4250)*1+lsi)*1]), &(inteval->stack[((hsi*280+3760)*1+lsi)*1]), &(inteval->stack[((hsi*210+4040)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+31730)*1+lsi)*1]), &(inteval->stack[((hsi*360+3400)*1+lsi)*1]), &(inteval->stack[((hsi*280+3760)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+13180)*1+lsi)*1]), &(inteval->stack[((hsi*840+31730)*1+lsi)*1]), &(inteval->stack[((hsi*630+4250)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+3400)*1+lsi)*1]), &(inteval->stack[((hsi*280+2910)*1+lsi)*1]), &(inteval->stack[((hsi*210+3190)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+32570)*1+lsi)*1]), &(inteval->stack[((hsi*360+2550)*1+lsi)*1]), &(inteval->stack[((hsi*280+2910)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+11920)*1+lsi)*1]), &(inteval->stack[((hsi*840+32570)*1+lsi)*1]), &(inteval->stack[((hsi*630+3400)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+2550)*1+lsi)*1]), &(inteval->stack[((hsi*280+2060)*1+lsi)*1]), &(inteval->stack[((hsi*210+2340)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+33410)*1+lsi)*1]), &(inteval->stack[((hsi*360+1700)*1+lsi)*1]), &(inteval->stack[((hsi*280+2060)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+10660)*1+lsi)*1]), &(inteval->stack[((hsi*840+33410)*1+lsi)*1]), &(inteval->stack[((hsi*630+2550)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+1700)*1+lsi)*1]), &(inteval->stack[((hsi*280+1210)*1+lsi)*1]), &(inteval->stack[((hsi*210+1490)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+34250)*1+lsi)*1]), &(inteval->stack[((hsi*360+850)*1+lsi)*1]), &(inteval->stack[((hsi*280+1210)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+9400)*1+lsi)*1]), &(inteval->stack[((hsi*840+34250)*1+lsi)*1]), &(inteval->stack[((hsi*630+1700)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+850)*1+lsi)*1]), &(inteval->stack[((hsi*280+360)*1+lsi)*1]), &(inteval->stack[((hsi*210+640)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+35090)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+360)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+8140)*1+lsi)*1]), &(inteval->stack[((hsi*840+35090)*1+lsi)*1]), &(inteval->stack[((hsi*630+850)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1260+8140)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1260+9400)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1260+10660)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1260+11920)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1260+13180)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1260+14440)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1260+15700)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1260+16960)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1260+18220)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1260+19480)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1260+20740)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1260+22000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
