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
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_F__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__I__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2300)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+6500)*1+lsi)*1]), &(inteval->stack[((hsi*450+1210)*1+lsi)*1]), &(inteval->stack[((hsi*360+1660)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+7580)*1+lsi)*1]), &(inteval->stack[((hsi*550+660)*1+lsi)*1]), &(inteval->stack[((hsi*450+1210)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+8930)*1+lsi)*1]), &(inteval->stack[((hsi*1350+7580)*1+lsi)*1]), &(inteval->stack[((hsi*1080+6500)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+11090)*1+lsi)*1]), &(inteval->stack[((hsi*360+1660)*1+lsi)*1]), &(inteval->stack[((hsi*280+2020)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+11930)*1+lsi)*1]), &(inteval->stack[((hsi*1080+6500)*1+lsi)*1]), &(inteval->stack[((hsi*840+11090)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+13610)*1+lsi)*1]), &(inteval->stack[((hsi*2160+8930)*1+lsi)*1]), &(inteval->stack[((hsi*1680+11930)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+11090)*1+lsi)*1]), &(inteval->stack[((hsi*660+0)*1+lsi)*1]), &(inteval->stack[((hsi*550+660)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+16410)*1+lsi)*1]), &(inteval->stack[((hsi*1650+11090)*1+lsi)*1]), &(inteval->stack[((hsi*1350+7580)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+19110)*1+lsi)*1]), &(inteval->stack[((hsi*2700+16410)*1+lsi)*1]), &(inteval->stack[((hsi*2160+8930)*1+lsi)*1]),10);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*4200+2300)*1+lsi)*1]), &(inteval->stack[((hsi*3600+19110)*1+lsi)*1]), &(inteval->stack[((hsi*2800+13610)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4200+2300)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
