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
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fd001.h>
#include <HRRPart0bra0ket0fd010.h>
#include <HRRPart0bra0ket0fd100.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001d.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010d.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100d.h>
#include <HRRPart0bra0ket0f100p.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <deriv1_aB_F__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__K__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15804)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+41724)*1+lsi)*1]), &(inteval->stack[((hsi*540+14904)*1+lsi)*1]), &(inteval->stack[((hsi*360+15444)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+42804)*1+lsi)*1]), &(inteval->stack[((hsi*756+14148)*1+lsi)*1]), &(inteval->stack[((hsi*540+14904)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+39564)*1+lsi)*1]), &(inteval->stack[((hsi*1620+42804)*1+lsi)*1]), &(inteval->stack[((hsi*1080+41724)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+44424)*1+lsi)*1]), &(inteval->stack[((hsi*540+13248)*1+lsi)*1]), &(inteval->stack[((hsi*360+13788)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+45504)*1+lsi)*1]), &(inteval->stack[((hsi*756+12492)*1+lsi)*1]), &(inteval->stack[((hsi*540+13248)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+37404)*1+lsi)*1]), &(inteval->stack[((hsi*1620+45504)*1+lsi)*1]), &(inteval->stack[((hsi*1080+44424)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+47124)*1+lsi)*1]), &(inteval->stack[((hsi*540+11592)*1+lsi)*1]), &(inteval->stack[((hsi*360+12132)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+48204)*1+lsi)*1]), &(inteval->stack[((hsi*756+10836)*1+lsi)*1]), &(inteval->stack[((hsi*540+11592)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+35244)*1+lsi)*1]), &(inteval->stack[((hsi*1620+48204)*1+lsi)*1]), &(inteval->stack[((hsi*1080+47124)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+49824)*1+lsi)*1]), &(inteval->stack[((hsi*540+4968)*1+lsi)*1]), &(inteval->stack[((hsi*540+9936)*1+lsi)*1]), &(inteval->stack[((hsi*540+14904)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+14904)*1+lsi)*1]), &(inteval->stack[((hsi*360+5508)*1+lsi)*1]), &(inteval->stack[((hsi*360+10476)*1+lsi)*1]), &(inteval->stack[((hsi*360+15444)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+50364)*1+lsi)*1]), &(inteval->stack[((hsi*540+49824)*1+lsi)*1]), &(inteval->stack[((hsi*360+14904)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+14904)*1+lsi)*1]), &(inteval->stack[((hsi*756+4212)*1+lsi)*1]), &(inteval->stack[((hsi*756+9180)*1+lsi)*1]), &(inteval->stack[((hsi*756+14148)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+51444)*1+lsi)*1]), &(inteval->stack[((hsi*756+14904)*1+lsi)*1]), &(inteval->stack[((hsi*540+49824)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+33084)*1+lsi)*1]), &(inteval->stack[((hsi*1620+51444)*1+lsi)*1]), &(inteval->stack[((hsi*1080+50364)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+49824)*1+lsi)*1]), &(inteval->stack[((hsi*540+3312)*1+lsi)*1]), &(inteval->stack[((hsi*540+8280)*1+lsi)*1]), &(inteval->stack[((hsi*540+13248)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+14148)*1+lsi)*1]), &(inteval->stack[((hsi*360+3852)*1+lsi)*1]), &(inteval->stack[((hsi*360+8820)*1+lsi)*1]), &(inteval->stack[((hsi*360+13788)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+14508)*1+lsi)*1]), &(inteval->stack[((hsi*540+49824)*1+lsi)*1]), &(inteval->stack[((hsi*360+14148)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+13248)*1+lsi)*1]), &(inteval->stack[((hsi*756+2556)*1+lsi)*1]), &(inteval->stack[((hsi*756+7524)*1+lsi)*1]), &(inteval->stack[((hsi*756+12492)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+53064)*1+lsi)*1]), &(inteval->stack[((hsi*756+13248)*1+lsi)*1]), &(inteval->stack[((hsi*540+49824)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+30924)*1+lsi)*1]), &(inteval->stack[((hsi*1620+53064)*1+lsi)*1]), &(inteval->stack[((hsi*1080+14508)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+49824)*1+lsi)*1]), &(inteval->stack[((hsi*540+756)*1+lsi)*1]), &(inteval->stack[((hsi*540+6624)*1+lsi)*1]), &(inteval->stack[((hsi*540+11592)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+12492)*1+lsi)*1]), &(inteval->stack[((hsi*360+1836)*1+lsi)*1]), &(inteval->stack[((hsi*360+7164)*1+lsi)*1]), &(inteval->stack[((hsi*360+12132)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+12852)*1+lsi)*1]), &(inteval->stack[((hsi*540+49824)*1+lsi)*1]), &(inteval->stack[((hsi*360+12492)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+11592)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+5868)*1+lsi)*1]), &(inteval->stack[((hsi*756+10836)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+54684)*1+lsi)*1]), &(inteval->stack[((hsi*756+11592)*1+lsi)*1]), &(inteval->stack[((hsi*540+49824)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+28764)*1+lsi)*1]), &(inteval->stack[((hsi*1620+54684)*1+lsi)*1]), &(inteval->stack[((hsi*1080+12852)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+10836)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]), &(inteval->stack[((hsi*360+2196)*1+lsi)*1]),36);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*1080+56304)*1+lsi)*1]), &(inteval->stack[((hsi*540+9936)*1+lsi)*1]), &(inteval->stack[((hsi*360+10476)*1+lsi)*1]), &(inteval->stack[((hsi*360+2196)*1+lsi)*1]),36);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*1620+57384)*1+lsi)*1]), &(inteval->stack[((hsi*756+9180)*1+lsi)*1]), &(inteval->stack[((hsi*540+9936)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart0bra0ket0fd001(inteval, &(inteval->stack[((hsi*2160+26604)*1+lsi)*1]), &(inteval->stack[((hsi*1620+57384)*1+lsi)*1]), &(inteval->stack[((hsi*1080+56304)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10836)*1+lsi)*1]),36);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*1080+9180)*1+lsi)*1]), &(inteval->stack[((hsi*540+8280)*1+lsi)*1]), &(inteval->stack[((hsi*360+8820)*1+lsi)*1]), &(inteval->stack[((hsi*360+2196)*1+lsi)*1]),36);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*1620+59004)*1+lsi)*1]), &(inteval->stack[((hsi*756+7524)*1+lsi)*1]), &(inteval->stack[((hsi*540+8280)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart0bra0ket0fd010(inteval, &(inteval->stack[((hsi*2160+24444)*1+lsi)*1]), &(inteval->stack[((hsi*1620+59004)*1+lsi)*1]), &(inteval->stack[((hsi*1080+9180)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10836)*1+lsi)*1]),36);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*1080+7524)*1+lsi)*1]), &(inteval->stack[((hsi*540+6624)*1+lsi)*1]), &(inteval->stack[((hsi*360+7164)*1+lsi)*1]), &(inteval->stack[((hsi*360+2196)*1+lsi)*1]),36);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*1620+60624)*1+lsi)*1]), &(inteval->stack[((hsi*756+5868)*1+lsi)*1]), &(inteval->stack[((hsi*540+6624)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart0bra0ket0fd100(inteval, &(inteval->stack[((hsi*2160+22284)*1+lsi)*1]), &(inteval->stack[((hsi*1620+60624)*1+lsi)*1]), &(inteval->stack[((hsi*1080+7524)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10836)*1+lsi)*1]),36);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*1080+5868)*1+lsi)*1]), &(inteval->stack[((hsi*540+4968)*1+lsi)*1]), &(inteval->stack[((hsi*360+5508)*1+lsi)*1]), &(inteval->stack[((hsi*360+2196)*1+lsi)*1]),36);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*1620+62244)*1+lsi)*1]), &(inteval->stack[((hsi*756+4212)*1+lsi)*1]), &(inteval->stack[((hsi*540+4968)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart0bra0ket0f001d(inteval, &(inteval->stack[((hsi*2160+20124)*1+lsi)*1]), &(inteval->stack[((hsi*1620+62244)*1+lsi)*1]), &(inteval->stack[((hsi*1080+5868)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10836)*1+lsi)*1]),36);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*1080+4212)*1+lsi)*1]), &(inteval->stack[((hsi*540+3312)*1+lsi)*1]), &(inteval->stack[((hsi*360+3852)*1+lsi)*1]), &(inteval->stack[((hsi*360+2196)*1+lsi)*1]),36);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*1620+63864)*1+lsi)*1]), &(inteval->stack[((hsi*756+2556)*1+lsi)*1]), &(inteval->stack[((hsi*540+3312)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart0bra0ket0f010d(inteval, &(inteval->stack[((hsi*2160+17964)*1+lsi)*1]), &(inteval->stack[((hsi*1620+63864)*1+lsi)*1]), &(inteval->stack[((hsi*1080+4212)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10836)*1+lsi)*1]),36);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*1080+2556)*1+lsi)*1]), &(inteval->stack[((hsi*540+756)*1+lsi)*1]), &(inteval->stack[((hsi*360+1836)*1+lsi)*1]), &(inteval->stack[((hsi*360+2196)*1+lsi)*1]),36);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*1620+65484)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+756)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart0bra0ket0f100d(inteval, &(inteval->stack[((hsi*2160+15804)*1+lsi)*1]), &(inteval->stack[((hsi*1620+65484)*1+lsi)*1]), &(inteval->stack[((hsi*1080+2556)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10836)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2160+15804)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2160+17964)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2160+20124)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2160+22284)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2160+24444)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2160+26604)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2160+28764)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2160+30924)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2160+33084)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2160+35244)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2160+37404)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2160+39564)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
