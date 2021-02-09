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
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_H__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_H__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,21945)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+64281)*1+lsi)*1]), &(inteval->stack[((hsi*756+13734)*1+lsi)*1]), &(inteval->stack[((hsi*588+16191)*1+lsi)*1]),21);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1764+66045)*1+lsi)*1]), &(inteval->stack[((hsi*756+20601)*1+lsi)*1]), &(inteval->stack[((hsi*588+21357)*1+lsi)*1]), &(inteval->stack[((hsi*588+16191)*1+lsi)*1]),21);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*2268+67809)*1+lsi)*1]), &(inteval->stack[((hsi*945+19656)*1+lsi)*1]), &(inteval->stack[((hsi*756+20601)*1+lsi)*1]), &(inteval->stack[((hsi*756+13734)*1+lsi)*1]),21);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*3528+60753)*1+lsi)*1]), &(inteval->stack[((hsi*2268+67809)*1+lsi)*1]), &(inteval->stack[((hsi*1764+66045)*1+lsi)*1]), &(inteval->stack[((hsi*1764+64281)*1+lsi)*1]),21);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1764+70077)*1+lsi)*1]), &(inteval->stack[((hsi*756+18312)*1+lsi)*1]), &(inteval->stack[((hsi*588+19068)*1+lsi)*1]), &(inteval->stack[((hsi*588+16191)*1+lsi)*1]),21);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*2268+71841)*1+lsi)*1]), &(inteval->stack[((hsi*945+17367)*1+lsi)*1]), &(inteval->stack[((hsi*756+18312)*1+lsi)*1]), &(inteval->stack[((hsi*756+13734)*1+lsi)*1]),21);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*3528+57225)*1+lsi)*1]), &(inteval->stack[((hsi*2268+71841)*1+lsi)*1]), &(inteval->stack[((hsi*1764+70077)*1+lsi)*1]), &(inteval->stack[((hsi*1764+64281)*1+lsi)*1]),21);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1764+74109)*1+lsi)*1]), &(inteval->stack[((hsi*756+15435)*1+lsi)*1]), &(inteval->stack[((hsi*588+16779)*1+lsi)*1]), &(inteval->stack[((hsi*588+16191)*1+lsi)*1]),21);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*2268+75873)*1+lsi)*1]), &(inteval->stack[((hsi*945+14490)*1+lsi)*1]), &(inteval->stack[((hsi*756+15435)*1+lsi)*1]), &(inteval->stack[((hsi*756+13734)*1+lsi)*1]),21);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*3528+53697)*1+lsi)*1]), &(inteval->stack[((hsi*2268+75873)*1+lsi)*1]), &(inteval->stack[((hsi*1764+74109)*1+lsi)*1]), &(inteval->stack[((hsi*1764+64281)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+78141)*1+lsi)*1]), &(inteval->stack[((hsi*756+5523)*1+lsi)*1]), &(inteval->stack[((hsi*756+12390)*1+lsi)*1]), &(inteval->stack[((hsi*756+20601)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+20601)*1+lsi)*1]), &(inteval->stack[((hsi*588+6279)*1+lsi)*1]), &(inteval->stack[((hsi*588+13146)*1+lsi)*1]), &(inteval->stack[((hsi*588+21357)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1764+78897)*1+lsi)*1]), &(inteval->stack[((hsi*756+78141)*1+lsi)*1]), &(inteval->stack[((hsi*588+20601)*1+lsi)*1]), &(inteval->stack[((hsi*588+16191)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+20601)*1+lsi)*1]), &(inteval->stack[((hsi*945+4578)*1+lsi)*1]), &(inteval->stack[((hsi*945+11445)*1+lsi)*1]), &(inteval->stack[((hsi*945+19656)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*2268+80661)*1+lsi)*1]), &(inteval->stack[((hsi*945+20601)*1+lsi)*1]), &(inteval->stack[((hsi*756+78141)*1+lsi)*1]), &(inteval->stack[((hsi*756+13734)*1+lsi)*1]),21);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*3528+50169)*1+lsi)*1]), &(inteval->stack[((hsi*2268+80661)*1+lsi)*1]), &(inteval->stack[((hsi*1764+78897)*1+lsi)*1]), &(inteval->stack[((hsi*1764+64281)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+78141)*1+lsi)*1]), &(inteval->stack[((hsi*756+3234)*1+lsi)*1]), &(inteval->stack[((hsi*756+10101)*1+lsi)*1]), &(inteval->stack[((hsi*756+18312)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+19656)*1+lsi)*1]), &(inteval->stack[((hsi*588+3990)*1+lsi)*1]), &(inteval->stack[((hsi*588+10857)*1+lsi)*1]), &(inteval->stack[((hsi*588+19068)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1764+82929)*1+lsi)*1]), &(inteval->stack[((hsi*756+78141)*1+lsi)*1]), &(inteval->stack[((hsi*588+19656)*1+lsi)*1]), &(inteval->stack[((hsi*588+16191)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+18312)*1+lsi)*1]), &(inteval->stack[((hsi*945+2289)*1+lsi)*1]), &(inteval->stack[((hsi*945+9156)*1+lsi)*1]), &(inteval->stack[((hsi*945+17367)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*2268+19257)*1+lsi)*1]), &(inteval->stack[((hsi*945+18312)*1+lsi)*1]), &(inteval->stack[((hsi*756+78141)*1+lsi)*1]), &(inteval->stack[((hsi*756+13734)*1+lsi)*1]),21);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*3528+46641)*1+lsi)*1]), &(inteval->stack[((hsi*2268+19257)*1+lsi)*1]), &(inteval->stack[((hsi*1764+82929)*1+lsi)*1]), &(inteval->stack[((hsi*1764+64281)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+78141)*1+lsi)*1]), &(inteval->stack[((hsi*756+945)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]), &(inteval->stack[((hsi*756+15435)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+17367)*1+lsi)*1]), &(inteval->stack[((hsi*588+1701)*1+lsi)*1]), &(inteval->stack[((hsi*588+8568)*1+lsi)*1]), &(inteval->stack[((hsi*588+16779)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1764+84693)*1+lsi)*1]), &(inteval->stack[((hsi*756+78141)*1+lsi)*1]), &(inteval->stack[((hsi*588+17367)*1+lsi)*1]), &(inteval->stack[((hsi*588+16191)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+15435)*1+lsi)*1]), &(inteval->stack[((hsi*945+0)*1+lsi)*1]), &(inteval->stack[((hsi*945+6867)*1+lsi)*1]), &(inteval->stack[((hsi*945+14490)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*2268+16380)*1+lsi)*1]), &(inteval->stack[((hsi*945+15435)*1+lsi)*1]), &(inteval->stack[((hsi*756+78141)*1+lsi)*1]), &(inteval->stack[((hsi*756+13734)*1+lsi)*1]),21);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*3528+43113)*1+lsi)*1]), &(inteval->stack[((hsi*2268+16380)*1+lsi)*1]), &(inteval->stack[((hsi*1764+84693)*1+lsi)*1]), &(inteval->stack[((hsi*1764+64281)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+13734)*1+lsi)*1]), &(inteval->stack[((hsi*756+12390)*1+lsi)*1]), &(inteval->stack[((hsi*588+13146)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+86457)*1+lsi)*1]), &(inteval->stack[((hsi*945+11445)*1+lsi)*1]), &(inteval->stack[((hsi*756+12390)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+39585)*1+lsi)*1]), &(inteval->stack[((hsi*2268+86457)*1+lsi)*1]), &(inteval->stack[((hsi*1764+13734)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+11445)*1+lsi)*1]), &(inteval->stack[((hsi*756+10101)*1+lsi)*1]), &(inteval->stack[((hsi*588+10857)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+88725)*1+lsi)*1]), &(inteval->stack[((hsi*945+9156)*1+lsi)*1]), &(inteval->stack[((hsi*756+10101)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+36057)*1+lsi)*1]), &(inteval->stack[((hsi*2268+88725)*1+lsi)*1]), &(inteval->stack[((hsi*1764+11445)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+9156)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]), &(inteval->stack[((hsi*588+8568)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+90993)*1+lsi)*1]), &(inteval->stack[((hsi*945+6867)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+32529)*1+lsi)*1]), &(inteval->stack[((hsi*2268+90993)*1+lsi)*1]), &(inteval->stack[((hsi*1764+9156)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+6867)*1+lsi)*1]), &(inteval->stack[((hsi*756+5523)*1+lsi)*1]), &(inteval->stack[((hsi*588+6279)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+93261)*1+lsi)*1]), &(inteval->stack[((hsi*945+4578)*1+lsi)*1]), &(inteval->stack[((hsi*756+5523)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+29001)*1+lsi)*1]), &(inteval->stack[((hsi*2268+93261)*1+lsi)*1]), &(inteval->stack[((hsi*1764+6867)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+4578)*1+lsi)*1]), &(inteval->stack[((hsi*756+3234)*1+lsi)*1]), &(inteval->stack[((hsi*588+3990)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+95529)*1+lsi)*1]), &(inteval->stack[((hsi*945+2289)*1+lsi)*1]), &(inteval->stack[((hsi*756+3234)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+25473)*1+lsi)*1]), &(inteval->stack[((hsi*2268+95529)*1+lsi)*1]), &(inteval->stack[((hsi*1764+4578)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+2289)*1+lsi)*1]), &(inteval->stack[((hsi*756+945)*1+lsi)*1]), &(inteval->stack[((hsi*588+1701)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+97797)*1+lsi)*1]), &(inteval->stack[((hsi*945+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+945)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+21945)*1+lsi)*1]), &(inteval->stack[((hsi*2268+97797)*1+lsi)*1]), &(inteval->stack[((hsi*1764+2289)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3528+21945)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3528+25473)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3528+29001)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3528+32529)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3528+36057)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3528+39585)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3528+43113)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3528+46641)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3528+50169)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3528+53697)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3528+57225)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3528+60753)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
