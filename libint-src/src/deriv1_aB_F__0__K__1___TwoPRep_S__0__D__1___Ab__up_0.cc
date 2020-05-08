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
#include <CR_DerivGaussP1InBra_aB_F__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kd001.h>
#include <HRRPart1bra0ket0kd010.h>
#include <HRRPart1bra0ket0kd100.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001d.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010d.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100d.h>
#include <HRRPart1bra0ket0k100p.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0lp001.h>
#include <HRRPart1bra0ket0lp010.h>
#include <HRRPart1bra0ket0lp100.h>
#include <HRRPart1bra0ket0l001p.h>
#include <HRRPart1bra0ket0l010p.h>
#include <HRRPart1bra0ket0l100p.h>
#include <deriv1_aB_F__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,13050)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+38970)*1+lsi)*1]), &(inteval->stack[((hsi*450+8160)*1+lsi)*1]), &(inteval->stack[((hsi*360+9610)*1+lsi)*1]),10);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1080+40050)*1+lsi)*1]), &(inteval->stack[((hsi*450+12240)*1+lsi)*1]), &(inteval->stack[((hsi*360+12690)*1+lsi)*1]), &(inteval->stack[((hsi*360+9610)*1+lsi)*1]),10);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*1350+41130)*1+lsi)*1]), &(inteval->stack[((hsi*550+11690)*1+lsi)*1]), &(inteval->stack[((hsi*450+12240)*1+lsi)*1]), &(inteval->stack[((hsi*450+8160)*1+lsi)*1]),10);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*2160+36810)*1+lsi)*1]), &(inteval->stack[((hsi*1350+41130)*1+lsi)*1]), &(inteval->stack[((hsi*1080+40050)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38970)*1+lsi)*1]),10);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1080+42480)*1+lsi)*1]), &(inteval->stack[((hsi*450+10880)*1+lsi)*1]), &(inteval->stack[((hsi*360+11330)*1+lsi)*1]), &(inteval->stack[((hsi*360+9610)*1+lsi)*1]),10);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*1350+43560)*1+lsi)*1]), &(inteval->stack[((hsi*550+10330)*1+lsi)*1]), &(inteval->stack[((hsi*450+10880)*1+lsi)*1]), &(inteval->stack[((hsi*450+8160)*1+lsi)*1]),10);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*2160+34650)*1+lsi)*1]), &(inteval->stack[((hsi*1350+43560)*1+lsi)*1]), &(inteval->stack[((hsi*1080+42480)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38970)*1+lsi)*1]),10);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1080+44910)*1+lsi)*1]), &(inteval->stack[((hsi*450+9160)*1+lsi)*1]), &(inteval->stack[((hsi*360+9970)*1+lsi)*1]), &(inteval->stack[((hsi*360+9610)*1+lsi)*1]),10);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*1350+45990)*1+lsi)*1]), &(inteval->stack[((hsi*550+8610)*1+lsi)*1]), &(inteval->stack[((hsi*450+9160)*1+lsi)*1]), &(inteval->stack[((hsi*450+8160)*1+lsi)*1]),10);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*2160+32490)*1+lsi)*1]), &(inteval->stack[((hsi*1350+45990)*1+lsi)*1]), &(inteval->stack[((hsi*1080+44910)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38970)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+47340)*1+lsi)*1]), &(inteval->stack[((hsi*450+3270)*1+lsi)*1]), &(inteval->stack[((hsi*450+7350)*1+lsi)*1]), &(inteval->stack[((hsi*450+12240)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+12240)*1+lsi)*1]), &(inteval->stack[((hsi*360+3720)*1+lsi)*1]), &(inteval->stack[((hsi*360+7800)*1+lsi)*1]), &(inteval->stack[((hsi*360+12690)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1080+47790)*1+lsi)*1]), &(inteval->stack[((hsi*450+47340)*1+lsi)*1]), &(inteval->stack[((hsi*360+12240)*1+lsi)*1]), &(inteval->stack[((hsi*360+9610)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*550+12240)*1+lsi)*1]), &(inteval->stack[((hsi*550+2720)*1+lsi)*1]), &(inteval->stack[((hsi*550+6800)*1+lsi)*1]), &(inteval->stack[((hsi*550+11690)*1+lsi)*1]));
HRRPart1bra0ket0l001p(inteval, &(inteval->stack[((hsi*1350+48870)*1+lsi)*1]), &(inteval->stack[((hsi*550+12240)*1+lsi)*1]), &(inteval->stack[((hsi*450+47340)*1+lsi)*1]), &(inteval->stack[((hsi*450+8160)*1+lsi)*1]),10);
HRRPart1bra0ket0k001d(inteval, &(inteval->stack[((hsi*2160+30330)*1+lsi)*1]), &(inteval->stack[((hsi*1350+48870)*1+lsi)*1]), &(inteval->stack[((hsi*1080+47790)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38970)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+47340)*1+lsi)*1]), &(inteval->stack[((hsi*450+1910)*1+lsi)*1]), &(inteval->stack[((hsi*450+5990)*1+lsi)*1]), &(inteval->stack[((hsi*450+10880)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+11690)*1+lsi)*1]), &(inteval->stack[((hsi*360+2360)*1+lsi)*1]), &(inteval->stack[((hsi*360+6440)*1+lsi)*1]), &(inteval->stack[((hsi*360+11330)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1080+50220)*1+lsi)*1]), &(inteval->stack[((hsi*450+47340)*1+lsi)*1]), &(inteval->stack[((hsi*360+11690)*1+lsi)*1]), &(inteval->stack[((hsi*360+9610)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*550+10880)*1+lsi)*1]), &(inteval->stack[((hsi*550+1360)*1+lsi)*1]), &(inteval->stack[((hsi*550+5440)*1+lsi)*1]), &(inteval->stack[((hsi*550+10330)*1+lsi)*1]));
HRRPart1bra0ket0l010p(inteval, &(inteval->stack[((hsi*1350+11430)*1+lsi)*1]), &(inteval->stack[((hsi*550+10880)*1+lsi)*1]), &(inteval->stack[((hsi*450+47340)*1+lsi)*1]), &(inteval->stack[((hsi*450+8160)*1+lsi)*1]),10);
HRRPart1bra0ket0k010d(inteval, &(inteval->stack[((hsi*2160+28170)*1+lsi)*1]), &(inteval->stack[((hsi*1350+11430)*1+lsi)*1]), &(inteval->stack[((hsi*1080+50220)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38970)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+47340)*1+lsi)*1]), &(inteval->stack[((hsi*450+550)*1+lsi)*1]), &(inteval->stack[((hsi*450+4630)*1+lsi)*1]), &(inteval->stack[((hsi*450+9160)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+10330)*1+lsi)*1]), &(inteval->stack[((hsi*360+1000)*1+lsi)*1]), &(inteval->stack[((hsi*360+5080)*1+lsi)*1]), &(inteval->stack[((hsi*360+9970)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1080+51300)*1+lsi)*1]), &(inteval->stack[((hsi*450+47340)*1+lsi)*1]), &(inteval->stack[((hsi*360+10330)*1+lsi)*1]), &(inteval->stack[((hsi*360+9610)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*550+9160)*1+lsi)*1]), &(inteval->stack[((hsi*550+0)*1+lsi)*1]), &(inteval->stack[((hsi*550+4080)*1+lsi)*1]), &(inteval->stack[((hsi*550+8610)*1+lsi)*1]));
HRRPart1bra0ket0l100p(inteval, &(inteval->stack[((hsi*1350+9710)*1+lsi)*1]), &(inteval->stack[((hsi*550+9160)*1+lsi)*1]), &(inteval->stack[((hsi*450+47340)*1+lsi)*1]), &(inteval->stack[((hsi*450+8160)*1+lsi)*1]),10);
HRRPart1bra0ket0k100d(inteval, &(inteval->stack[((hsi*2160+26010)*1+lsi)*1]), &(inteval->stack[((hsi*1350+9710)*1+lsi)*1]), &(inteval->stack[((hsi*1080+51300)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38970)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+8160)*1+lsi)*1]), &(inteval->stack[((hsi*450+7350)*1+lsi)*1]), &(inteval->stack[((hsi*360+7800)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+52380)*1+lsi)*1]), &(inteval->stack[((hsi*550+6800)*1+lsi)*1]), &(inteval->stack[((hsi*450+7350)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+23850)*1+lsi)*1]), &(inteval->stack[((hsi*1350+52380)*1+lsi)*1]), &(inteval->stack[((hsi*1080+8160)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+6800)*1+lsi)*1]), &(inteval->stack[((hsi*450+5990)*1+lsi)*1]), &(inteval->stack[((hsi*360+6440)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+53730)*1+lsi)*1]), &(inteval->stack[((hsi*550+5440)*1+lsi)*1]), &(inteval->stack[((hsi*450+5990)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+21690)*1+lsi)*1]), &(inteval->stack[((hsi*1350+53730)*1+lsi)*1]), &(inteval->stack[((hsi*1080+6800)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+5440)*1+lsi)*1]), &(inteval->stack[((hsi*450+4630)*1+lsi)*1]), &(inteval->stack[((hsi*360+5080)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+55080)*1+lsi)*1]), &(inteval->stack[((hsi*550+4080)*1+lsi)*1]), &(inteval->stack[((hsi*450+4630)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+19530)*1+lsi)*1]), &(inteval->stack[((hsi*1350+55080)*1+lsi)*1]), &(inteval->stack[((hsi*1080+5440)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+4080)*1+lsi)*1]), &(inteval->stack[((hsi*450+3270)*1+lsi)*1]), &(inteval->stack[((hsi*360+3720)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+56430)*1+lsi)*1]), &(inteval->stack[((hsi*550+2720)*1+lsi)*1]), &(inteval->stack[((hsi*450+3270)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+17370)*1+lsi)*1]), &(inteval->stack[((hsi*1350+56430)*1+lsi)*1]), &(inteval->stack[((hsi*1080+4080)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+2720)*1+lsi)*1]), &(inteval->stack[((hsi*450+1910)*1+lsi)*1]), &(inteval->stack[((hsi*360+2360)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+57780)*1+lsi)*1]), &(inteval->stack[((hsi*550+1360)*1+lsi)*1]), &(inteval->stack[((hsi*450+1910)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+15210)*1+lsi)*1]), &(inteval->stack[((hsi*1350+57780)*1+lsi)*1]), &(inteval->stack[((hsi*1080+2720)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+1360)*1+lsi)*1]), &(inteval->stack[((hsi*450+550)*1+lsi)*1]), &(inteval->stack[((hsi*360+1000)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+59130)*1+lsi)*1]), &(inteval->stack[((hsi*550+0)*1+lsi)*1]), &(inteval->stack[((hsi*450+550)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+13050)*1+lsi)*1]), &(inteval->stack[((hsi*1350+59130)*1+lsi)*1]), &(inteval->stack[((hsi*1080+1360)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2160+13050)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2160+15210)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2160+17370)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2160+19530)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2160+21690)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2160+23850)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2160+26010)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2160+28170)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2160+30330)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2160+32490)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2160+34650)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2160+36810)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
