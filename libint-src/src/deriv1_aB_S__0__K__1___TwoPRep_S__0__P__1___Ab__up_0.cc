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
#include <CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_S__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_S__0__K__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,765)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_S__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+1953)*1+lsi)*1]), &(inteval->stack[((hsi*45+684)*1+lsi)*1]), &(inteval->stack[((hsi*36+729)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]),1);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+1845)*1+lsi)*1]), &(inteval->stack[((hsi*45+603)*1+lsi)*1]), &(inteval->stack[((hsi*36+648)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]),1);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+1737)*1+lsi)*1]), &(inteval->stack[((hsi*45+522)*1+lsi)*1]), &(inteval->stack[((hsi*36+567)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+2061)*1+lsi)*1]), &(inteval->stack[((hsi*36+243)*1+lsi)*1]), &(inteval->stack[((hsi*36+486)*1+lsi)*1]), &(inteval->stack[((hsi*36+729)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2097)*1+lsi)*1]), &(inteval->stack[((hsi*45+198)*1+lsi)*1]), &(inteval->stack[((hsi*45+441)*1+lsi)*1]), &(inteval->stack[((hsi*45+684)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+1629)*1+lsi)*1]), &(inteval->stack[((hsi*45+2097)*1+lsi)*1]), &(inteval->stack[((hsi*36+2061)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+2142)*1+lsi)*1]), &(inteval->stack[((hsi*36+162)*1+lsi)*1]), &(inteval->stack[((hsi*36+405)*1+lsi)*1]), &(inteval->stack[((hsi*36+648)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2178)*1+lsi)*1]), &(inteval->stack[((hsi*45+117)*1+lsi)*1]), &(inteval->stack[((hsi*45+360)*1+lsi)*1]), &(inteval->stack[((hsi*45+603)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+1521)*1+lsi)*1]), &(inteval->stack[((hsi*45+2178)*1+lsi)*1]), &(inteval->stack[((hsi*36+2142)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+2223)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]), &(inteval->stack[((hsi*36+324)*1+lsi)*1]), &(inteval->stack[((hsi*36+567)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2259)*1+lsi)*1]), &(inteval->stack[((hsi*45+36)*1+lsi)*1]), &(inteval->stack[((hsi*45+279)*1+lsi)*1]), &(inteval->stack[((hsi*45+522)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+1413)*1+lsi)*1]), &(inteval->stack[((hsi*45+2259)*1+lsi)*1]), &(inteval->stack[((hsi*36+2223)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1305)*1+lsi)*1]), &(inteval->stack[((hsi*45+441)*1+lsi)*1]), &(inteval->stack[((hsi*36+486)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1197)*1+lsi)*1]), &(inteval->stack[((hsi*45+360)*1+lsi)*1]), &(inteval->stack[((hsi*36+405)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1089)*1+lsi)*1]), &(inteval->stack[((hsi*45+279)*1+lsi)*1]), &(inteval->stack[((hsi*36+324)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+981)*1+lsi)*1]), &(inteval->stack[((hsi*45+198)*1+lsi)*1]), &(inteval->stack[((hsi*36+243)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+873)*1+lsi)*1]), &(inteval->stack[((hsi*45+117)*1+lsi)*1]), &(inteval->stack[((hsi*36+162)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+765)*1+lsi)*1]), &(inteval->stack[((hsi*45+36)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*108+765)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*108+873)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*108+981)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*108+1089)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*108+1197)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*108+1305)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*108+1413)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*108+1521)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*108+1629)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*108+1737)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*108+1845)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*108+1953)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
