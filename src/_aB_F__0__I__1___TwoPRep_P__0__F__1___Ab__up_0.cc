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
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_F__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__I__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+12500)*1+lsi)*1]), &(inteval->stack[((hsi*450+3010)*1+lsi)*1]), &(inteval->stack[((hsi*360+3460)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+13580)*1+lsi)*1]), &(inteval->stack[((hsi*360+3460)*1+lsi)*1]), &(inteval->stack[((hsi*280+3820)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+14420)*1+lsi)*1]), &(inteval->stack[((hsi*1080+12500)*1+lsi)*1]), &(inteval->stack[((hsi*840+13580)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+16100)*1+lsi)*1]), &(inteval->stack[((hsi*550+2460)*1+lsi)*1]), &(inteval->stack[((hsi*450+3010)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+17450)*1+lsi)*1]), &(inteval->stack[((hsi*1350+16100)*1+lsi)*1]), &(inteval->stack[((hsi*1080+12500)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+19610)*1+lsi)*1]), &(inteval->stack[((hsi*2160+17450)*1+lsi)*1]), &(inteval->stack[((hsi*1680+14420)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+12500)*1+lsi)*1]), &(inteval->stack[((hsi*675+825)*1+lsi)*1]), &(inteval->stack[((hsi*540+1500)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+14120)*1+lsi)*1]), &(inteval->stack[((hsi*540+1500)*1+lsi)*1]), &(inteval->stack[((hsi*420+2040)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+15380)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14120)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+1500)*1+lsi)*1]), &(inteval->stack[((hsi*825+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+825)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+22410)*1+lsi)*1]), &(inteval->stack[((hsi*2025+1500)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12500)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*4200+25650)*1+lsi)*1]), &(inteval->stack[((hsi*3240+22410)*1+lsi)*1]), &(inteval->stack[((hsi*2520+15380)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*8400+4100)*1+lsi)*1]), &(inteval->stack[((hsi*4200+25650)*1+lsi)*1]), &(inteval->stack[((hsi*2800+19610)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8400+4100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
