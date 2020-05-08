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
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_F__0__H__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__H__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9219)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__H__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+24339)*1+lsi)*1]), &(inteval->stack[((hsi*315+8694)*1+lsi)*1]), &(inteval->stack[((hsi*210+9009)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+24969)*1+lsi)*1]), &(inteval->stack[((hsi*441+8253)*1+lsi)*1]), &(inteval->stack[((hsi*315+8694)*1+lsi)*1]),21);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+23079)*1+lsi)*1]), &(inteval->stack[((hsi*945+24969)*1+lsi)*1]), &(inteval->stack[((hsi*630+24339)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+25914)*1+lsi)*1]), &(inteval->stack[((hsi*315+7728)*1+lsi)*1]), &(inteval->stack[((hsi*210+8043)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+26544)*1+lsi)*1]), &(inteval->stack[((hsi*441+7287)*1+lsi)*1]), &(inteval->stack[((hsi*315+7728)*1+lsi)*1]),21);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+21819)*1+lsi)*1]), &(inteval->stack[((hsi*945+26544)*1+lsi)*1]), &(inteval->stack[((hsi*630+25914)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+27489)*1+lsi)*1]), &(inteval->stack[((hsi*315+6762)*1+lsi)*1]), &(inteval->stack[((hsi*210+7077)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+28119)*1+lsi)*1]), &(inteval->stack[((hsi*441+6321)*1+lsi)*1]), &(inteval->stack[((hsi*315+6762)*1+lsi)*1]),21);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+20559)*1+lsi)*1]), &(inteval->stack[((hsi*945+28119)*1+lsi)*1]), &(inteval->stack[((hsi*630+27489)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+29064)*1+lsi)*1]), &(inteval->stack[((hsi*315+2898)*1+lsi)*1]), &(inteval->stack[((hsi*315+5796)*1+lsi)*1]), &(inteval->stack[((hsi*315+8694)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+8694)*1+lsi)*1]), &(inteval->stack[((hsi*210+3213)*1+lsi)*1]), &(inteval->stack[((hsi*210+6111)*1+lsi)*1]), &(inteval->stack[((hsi*210+9009)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+29379)*1+lsi)*1]), &(inteval->stack[((hsi*315+29064)*1+lsi)*1]), &(inteval->stack[((hsi*210+8694)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+8694)*1+lsi)*1]), &(inteval->stack[((hsi*441+2457)*1+lsi)*1]), &(inteval->stack[((hsi*441+5355)*1+lsi)*1]), &(inteval->stack[((hsi*441+8253)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+30009)*1+lsi)*1]), &(inteval->stack[((hsi*441+8694)*1+lsi)*1]), &(inteval->stack[((hsi*315+29064)*1+lsi)*1]),21);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+19299)*1+lsi)*1]), &(inteval->stack[((hsi*945+30009)*1+lsi)*1]), &(inteval->stack[((hsi*630+29379)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+29064)*1+lsi)*1]), &(inteval->stack[((hsi*315+1932)*1+lsi)*1]), &(inteval->stack[((hsi*315+4830)*1+lsi)*1]), &(inteval->stack[((hsi*315+7728)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+8253)*1+lsi)*1]), &(inteval->stack[((hsi*210+2247)*1+lsi)*1]), &(inteval->stack[((hsi*210+5145)*1+lsi)*1]), &(inteval->stack[((hsi*210+8043)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+8463)*1+lsi)*1]), &(inteval->stack[((hsi*315+29064)*1+lsi)*1]), &(inteval->stack[((hsi*210+8253)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+7728)*1+lsi)*1]), &(inteval->stack[((hsi*441+1491)*1+lsi)*1]), &(inteval->stack[((hsi*441+4389)*1+lsi)*1]), &(inteval->stack[((hsi*441+7287)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+30954)*1+lsi)*1]), &(inteval->stack[((hsi*441+7728)*1+lsi)*1]), &(inteval->stack[((hsi*315+29064)*1+lsi)*1]),21);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+18039)*1+lsi)*1]), &(inteval->stack[((hsi*945+30954)*1+lsi)*1]), &(inteval->stack[((hsi*630+8463)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+29064)*1+lsi)*1]), &(inteval->stack[((hsi*315+441)*1+lsi)*1]), &(inteval->stack[((hsi*315+3864)*1+lsi)*1]), &(inteval->stack[((hsi*315+6762)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+7287)*1+lsi)*1]), &(inteval->stack[((hsi*210+1071)*1+lsi)*1]), &(inteval->stack[((hsi*210+4179)*1+lsi)*1]), &(inteval->stack[((hsi*210+7077)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+7497)*1+lsi)*1]), &(inteval->stack[((hsi*315+29064)*1+lsi)*1]), &(inteval->stack[((hsi*210+7287)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+6762)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]), &(inteval->stack[((hsi*441+3423)*1+lsi)*1]), &(inteval->stack[((hsi*441+6321)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+31899)*1+lsi)*1]), &(inteval->stack[((hsi*441+6762)*1+lsi)*1]), &(inteval->stack[((hsi*315+29064)*1+lsi)*1]),21);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+16779)*1+lsi)*1]), &(inteval->stack[((hsi*945+31899)*1+lsi)*1]), &(inteval->stack[((hsi*630+7497)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+6321)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]), &(inteval->stack[((hsi*210+1281)*1+lsi)*1]),21);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*630+32844)*1+lsi)*1]), &(inteval->stack[((hsi*315+5796)*1+lsi)*1]), &(inteval->stack[((hsi*210+6111)*1+lsi)*1]), &(inteval->stack[((hsi*210+1281)*1+lsi)*1]),21);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+33474)*1+lsi)*1]), &(inteval->stack[((hsi*441+5355)*1+lsi)*1]), &(inteval->stack[((hsi*315+5796)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart0bra0ket0fd001(inteval, &(inteval->stack[((hsi*1260+15519)*1+lsi)*1]), &(inteval->stack[((hsi*945+33474)*1+lsi)*1]), &(inteval->stack[((hsi*630+32844)*1+lsi)*1]), &(inteval->stack[((hsi*630+6321)*1+lsi)*1]),21);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*630+5355)*1+lsi)*1]), &(inteval->stack[((hsi*315+4830)*1+lsi)*1]), &(inteval->stack[((hsi*210+5145)*1+lsi)*1]), &(inteval->stack[((hsi*210+1281)*1+lsi)*1]),21);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+34419)*1+lsi)*1]), &(inteval->stack[((hsi*441+4389)*1+lsi)*1]), &(inteval->stack[((hsi*315+4830)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart0bra0ket0fd010(inteval, &(inteval->stack[((hsi*1260+14259)*1+lsi)*1]), &(inteval->stack[((hsi*945+34419)*1+lsi)*1]), &(inteval->stack[((hsi*630+5355)*1+lsi)*1]), &(inteval->stack[((hsi*630+6321)*1+lsi)*1]),21);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*630+4389)*1+lsi)*1]), &(inteval->stack[((hsi*315+3864)*1+lsi)*1]), &(inteval->stack[((hsi*210+4179)*1+lsi)*1]), &(inteval->stack[((hsi*210+1281)*1+lsi)*1]),21);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+35364)*1+lsi)*1]), &(inteval->stack[((hsi*441+3423)*1+lsi)*1]), &(inteval->stack[((hsi*315+3864)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart0bra0ket0fd100(inteval, &(inteval->stack[((hsi*1260+12999)*1+lsi)*1]), &(inteval->stack[((hsi*945+35364)*1+lsi)*1]), &(inteval->stack[((hsi*630+4389)*1+lsi)*1]), &(inteval->stack[((hsi*630+6321)*1+lsi)*1]),21);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*630+3423)*1+lsi)*1]), &(inteval->stack[((hsi*315+2898)*1+lsi)*1]), &(inteval->stack[((hsi*210+3213)*1+lsi)*1]), &(inteval->stack[((hsi*210+1281)*1+lsi)*1]),21);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*945+36309)*1+lsi)*1]), &(inteval->stack[((hsi*441+2457)*1+lsi)*1]), &(inteval->stack[((hsi*315+2898)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart0bra0ket0f001d(inteval, &(inteval->stack[((hsi*1260+11739)*1+lsi)*1]), &(inteval->stack[((hsi*945+36309)*1+lsi)*1]), &(inteval->stack[((hsi*630+3423)*1+lsi)*1]), &(inteval->stack[((hsi*630+6321)*1+lsi)*1]),21);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*630+2457)*1+lsi)*1]), &(inteval->stack[((hsi*315+1932)*1+lsi)*1]), &(inteval->stack[((hsi*210+2247)*1+lsi)*1]), &(inteval->stack[((hsi*210+1281)*1+lsi)*1]),21);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*945+37254)*1+lsi)*1]), &(inteval->stack[((hsi*441+1491)*1+lsi)*1]), &(inteval->stack[((hsi*315+1932)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart0bra0ket0f010d(inteval, &(inteval->stack[((hsi*1260+10479)*1+lsi)*1]), &(inteval->stack[((hsi*945+37254)*1+lsi)*1]), &(inteval->stack[((hsi*630+2457)*1+lsi)*1]), &(inteval->stack[((hsi*630+6321)*1+lsi)*1]),21);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*630+1491)*1+lsi)*1]), &(inteval->stack[((hsi*315+441)*1+lsi)*1]), &(inteval->stack[((hsi*210+1071)*1+lsi)*1]), &(inteval->stack[((hsi*210+1281)*1+lsi)*1]),21);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*945+38199)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+441)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart0bra0ket0f100d(inteval, &(inteval->stack[((hsi*1260+9219)*1+lsi)*1]), &(inteval->stack[((hsi*945+38199)*1+lsi)*1]), &(inteval->stack[((hsi*630+1491)*1+lsi)*1]), &(inteval->stack[((hsi*630+6321)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1260+9219)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1260+10479)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1260+11739)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1260+12999)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1260+14259)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1260+15519)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1260+16779)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1260+18039)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1260+19299)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1260+20559)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1260+21819)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1260+23079)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
