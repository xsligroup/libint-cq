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
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_P__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__K__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1224)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+3168)*1+lsi)*1]), &(inteval->stack[((hsi*135+981)*1+lsi)*1]), &(inteval->stack[((hsi*108+1116)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+3492)*1+lsi)*1]), &(inteval->stack[((hsi*165+816)*1+lsi)*1]), &(inteval->stack[((hsi*135+981)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+3897)*1+lsi)*1]), &(inteval->stack[((hsi*405+3492)*1+lsi)*1]), &(inteval->stack[((hsi*324+3168)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+3168)*1+lsi)*1]), &(inteval->stack[((hsi*270+330)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+4545)*1+lsi)*1]), &(inteval->stack[((hsi*330+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+330)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+5355)*1+lsi)*1]), &(inteval->stack[((hsi*810+4545)*1+lsi)*1]), &(inteval->stack[((hsi*648+3168)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1944+1224)*1+lsi)*1]), &(inteval->stack[((hsi*1296+5355)*1+lsi)*1]), &(inteval->stack[((hsi*648+3897)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1944+1224)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
