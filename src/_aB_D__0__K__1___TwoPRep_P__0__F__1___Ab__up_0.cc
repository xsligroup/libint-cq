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
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_D__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__K__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3232)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+9712)*1+lsi)*1]), &(inteval->stack[((hsi*330+2416)*1+lsi)*1]), &(inteval->stack[((hsi*270+2746)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+10522)*1+lsi)*1]), &(inteval->stack[((hsi*270+2746)*1+lsi)*1]), &(inteval->stack[((hsi*216+3016)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+11170)*1+lsi)*1]), &(inteval->stack[((hsi*810+9712)*1+lsi)*1]), &(inteval->stack[((hsi*648+10522)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+12466)*1+lsi)*1]), &(inteval->stack[((hsi*396+2020)*1+lsi)*1]), &(inteval->stack[((hsi*330+2416)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+13456)*1+lsi)*1]), &(inteval->stack[((hsi*990+12466)*1+lsi)*1]), &(inteval->stack[((hsi*810+9712)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+15076)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13456)*1+lsi)*1]), &(inteval->stack[((hsi*1296+11170)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+9712)*1+lsi)*1]), &(inteval->stack[((hsi*550+660)*1+lsi)*1]), &(inteval->stack[((hsi*450+1210)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+11062)*1+lsi)*1]), &(inteval->stack[((hsi*450+1210)*1+lsi)*1]), &(inteval->stack[((hsi*360+1660)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+12142)*1+lsi)*1]), &(inteval->stack[((hsi*1350+9712)*1+lsi)*1]), &(inteval->stack[((hsi*1080+11062)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+1210)*1+lsi)*1]), &(inteval->stack[((hsi*660+0)*1+lsi)*1]), &(inteval->stack[((hsi*550+660)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+17236)*1+lsi)*1]), &(inteval->stack[((hsi*1650+1210)*1+lsi)*1]), &(inteval->stack[((hsi*1350+9712)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+19936)*1+lsi)*1]), &(inteval->stack[((hsi*2700+17236)*1+lsi)*1]), &(inteval->stack[((hsi*2160+12142)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*6480+3232)*1+lsi)*1]), &(inteval->stack[((hsi*3600+19936)*1+lsi)*1]), &(inteval->stack[((hsi*2160+15076)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6480+3232)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
