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
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0id001.h>
#include <HRRPart1bra0ket0id010.h>
#include <HRRPart1bra0ket0id100.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001d.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010d.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100d.h>
#include <HRRPart1bra0ket0i100p.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_F__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10450)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+30610)*1+lsi)*1]), &(inteval->stack[((hsi*360+6540)*1+lsi)*1]), &(inteval->stack[((hsi*280+7710)*1+lsi)*1]),10);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*840+31450)*1+lsi)*1]), &(inteval->stack[((hsi*360+9810)*1+lsi)*1]), &(inteval->stack[((hsi*280+10170)*1+lsi)*1]), &(inteval->stack[((hsi*280+7710)*1+lsi)*1]),10);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1080+32290)*1+lsi)*1]), &(inteval->stack[((hsi*450+9360)*1+lsi)*1]), &(inteval->stack[((hsi*360+9810)*1+lsi)*1]), &(inteval->stack[((hsi*360+6540)*1+lsi)*1]),10);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*1680+28930)*1+lsi)*1]), &(inteval->stack[((hsi*1080+32290)*1+lsi)*1]), &(inteval->stack[((hsi*840+31450)*1+lsi)*1]), &(inteval->stack[((hsi*840+30610)*1+lsi)*1]),10);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*840+33370)*1+lsi)*1]), &(inteval->stack[((hsi*360+8720)*1+lsi)*1]), &(inteval->stack[((hsi*280+9080)*1+lsi)*1]), &(inteval->stack[((hsi*280+7710)*1+lsi)*1]),10);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1080+34210)*1+lsi)*1]), &(inteval->stack[((hsi*450+8270)*1+lsi)*1]), &(inteval->stack[((hsi*360+8720)*1+lsi)*1]), &(inteval->stack[((hsi*360+6540)*1+lsi)*1]),10);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*1680+27250)*1+lsi)*1]), &(inteval->stack[((hsi*1080+34210)*1+lsi)*1]), &(inteval->stack[((hsi*840+33370)*1+lsi)*1]), &(inteval->stack[((hsi*840+30610)*1+lsi)*1]),10);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*840+35290)*1+lsi)*1]), &(inteval->stack[((hsi*360+7350)*1+lsi)*1]), &(inteval->stack[((hsi*280+7990)*1+lsi)*1]), &(inteval->stack[((hsi*280+7710)*1+lsi)*1]),10);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1080+36130)*1+lsi)*1]), &(inteval->stack[((hsi*450+6900)*1+lsi)*1]), &(inteval->stack[((hsi*360+7350)*1+lsi)*1]), &(inteval->stack[((hsi*360+6540)*1+lsi)*1]),10);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*1680+25570)*1+lsi)*1]), &(inteval->stack[((hsi*1080+36130)*1+lsi)*1]), &(inteval->stack[((hsi*840+35290)*1+lsi)*1]), &(inteval->stack[((hsi*840+30610)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+37210)*1+lsi)*1]), &(inteval->stack[((hsi*360+2630)*1+lsi)*1]), &(inteval->stack[((hsi*360+5900)*1+lsi)*1]), &(inteval->stack[((hsi*360+9810)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+9810)*1+lsi)*1]), &(inteval->stack[((hsi*280+2990)*1+lsi)*1]), &(inteval->stack[((hsi*280+6260)*1+lsi)*1]), &(inteval->stack[((hsi*280+10170)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*840+37570)*1+lsi)*1]), &(inteval->stack[((hsi*360+37210)*1+lsi)*1]), &(inteval->stack[((hsi*280+9810)*1+lsi)*1]), &(inteval->stack[((hsi*280+7710)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+9810)*1+lsi)*1]), &(inteval->stack[((hsi*450+2180)*1+lsi)*1]), &(inteval->stack[((hsi*450+5450)*1+lsi)*1]), &(inteval->stack[((hsi*450+9360)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1080+38410)*1+lsi)*1]), &(inteval->stack[((hsi*450+9810)*1+lsi)*1]), &(inteval->stack[((hsi*360+37210)*1+lsi)*1]), &(inteval->stack[((hsi*360+6540)*1+lsi)*1]),10);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*1680+23890)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38410)*1+lsi)*1]), &(inteval->stack[((hsi*840+37570)*1+lsi)*1]), &(inteval->stack[((hsi*840+30610)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+37210)*1+lsi)*1]), &(inteval->stack[((hsi*360+1540)*1+lsi)*1]), &(inteval->stack[((hsi*360+4810)*1+lsi)*1]), &(inteval->stack[((hsi*360+8720)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+9360)*1+lsi)*1]), &(inteval->stack[((hsi*280+1900)*1+lsi)*1]), &(inteval->stack[((hsi*280+5170)*1+lsi)*1]), &(inteval->stack[((hsi*280+9080)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*840+39490)*1+lsi)*1]), &(inteval->stack[((hsi*360+37210)*1+lsi)*1]), &(inteval->stack[((hsi*280+9360)*1+lsi)*1]), &(inteval->stack[((hsi*280+7710)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+8720)*1+lsi)*1]), &(inteval->stack[((hsi*450+1090)*1+lsi)*1]), &(inteval->stack[((hsi*450+4360)*1+lsi)*1]), &(inteval->stack[((hsi*450+8270)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1080+9170)*1+lsi)*1]), &(inteval->stack[((hsi*450+8720)*1+lsi)*1]), &(inteval->stack[((hsi*360+37210)*1+lsi)*1]), &(inteval->stack[((hsi*360+6540)*1+lsi)*1]),10);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*1680+22210)*1+lsi)*1]), &(inteval->stack[((hsi*1080+9170)*1+lsi)*1]), &(inteval->stack[((hsi*840+39490)*1+lsi)*1]), &(inteval->stack[((hsi*840+30610)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+37210)*1+lsi)*1]), &(inteval->stack[((hsi*360+450)*1+lsi)*1]), &(inteval->stack[((hsi*360+3720)*1+lsi)*1]), &(inteval->stack[((hsi*360+7350)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+8270)*1+lsi)*1]), &(inteval->stack[((hsi*280+810)*1+lsi)*1]), &(inteval->stack[((hsi*280+4080)*1+lsi)*1]), &(inteval->stack[((hsi*280+7990)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*840+40330)*1+lsi)*1]), &(inteval->stack[((hsi*360+37210)*1+lsi)*1]), &(inteval->stack[((hsi*280+8270)*1+lsi)*1]), &(inteval->stack[((hsi*280+7710)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+7350)*1+lsi)*1]), &(inteval->stack[((hsi*450+0)*1+lsi)*1]), &(inteval->stack[((hsi*450+3270)*1+lsi)*1]), &(inteval->stack[((hsi*450+6900)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1080+7800)*1+lsi)*1]), &(inteval->stack[((hsi*450+7350)*1+lsi)*1]), &(inteval->stack[((hsi*360+37210)*1+lsi)*1]), &(inteval->stack[((hsi*360+6540)*1+lsi)*1]),10);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*1680+20530)*1+lsi)*1]), &(inteval->stack[((hsi*1080+7800)*1+lsi)*1]), &(inteval->stack[((hsi*840+40330)*1+lsi)*1]), &(inteval->stack[((hsi*840+30610)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+6540)*1+lsi)*1]), &(inteval->stack[((hsi*360+5900)*1+lsi)*1]), &(inteval->stack[((hsi*280+6260)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+41170)*1+lsi)*1]), &(inteval->stack[((hsi*450+5450)*1+lsi)*1]), &(inteval->stack[((hsi*360+5900)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+18850)*1+lsi)*1]), &(inteval->stack[((hsi*1080+41170)*1+lsi)*1]), &(inteval->stack[((hsi*840+6540)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+5450)*1+lsi)*1]), &(inteval->stack[((hsi*360+4810)*1+lsi)*1]), &(inteval->stack[((hsi*280+5170)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+42250)*1+lsi)*1]), &(inteval->stack[((hsi*450+4360)*1+lsi)*1]), &(inteval->stack[((hsi*360+4810)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+17170)*1+lsi)*1]), &(inteval->stack[((hsi*1080+42250)*1+lsi)*1]), &(inteval->stack[((hsi*840+5450)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+4360)*1+lsi)*1]), &(inteval->stack[((hsi*360+3720)*1+lsi)*1]), &(inteval->stack[((hsi*280+4080)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+43330)*1+lsi)*1]), &(inteval->stack[((hsi*450+3270)*1+lsi)*1]), &(inteval->stack[((hsi*360+3720)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+15490)*1+lsi)*1]), &(inteval->stack[((hsi*1080+43330)*1+lsi)*1]), &(inteval->stack[((hsi*840+4360)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+3270)*1+lsi)*1]), &(inteval->stack[((hsi*360+2630)*1+lsi)*1]), &(inteval->stack[((hsi*280+2990)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+44410)*1+lsi)*1]), &(inteval->stack[((hsi*450+2180)*1+lsi)*1]), &(inteval->stack[((hsi*360+2630)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+13810)*1+lsi)*1]), &(inteval->stack[((hsi*1080+44410)*1+lsi)*1]), &(inteval->stack[((hsi*840+3270)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+2180)*1+lsi)*1]), &(inteval->stack[((hsi*360+1540)*1+lsi)*1]), &(inteval->stack[((hsi*280+1900)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+45490)*1+lsi)*1]), &(inteval->stack[((hsi*450+1090)*1+lsi)*1]), &(inteval->stack[((hsi*360+1540)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+12130)*1+lsi)*1]), &(inteval->stack[((hsi*1080+45490)*1+lsi)*1]), &(inteval->stack[((hsi*840+2180)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+1090)*1+lsi)*1]), &(inteval->stack[((hsi*360+450)*1+lsi)*1]), &(inteval->stack[((hsi*280+810)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+46570)*1+lsi)*1]), &(inteval->stack[((hsi*450+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+450)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+10450)*1+lsi)*1]), &(inteval->stack[((hsi*1080+46570)*1+lsi)*1]), &(inteval->stack[((hsi*840+1090)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1680+10450)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1680+12130)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1680+13810)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1680+15490)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1680+17170)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1680+18850)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1680+20530)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1680+22210)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1680+23890)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1680+25570)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1680+27250)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1680+28930)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
