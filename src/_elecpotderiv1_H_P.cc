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
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100p.h>
#include <_elecpotderiv1_H_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_H_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,315)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_H_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+630)*1+lsi)*1]), &(inteval->stack[((hsi*28+266)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+567)*1+lsi)*1]), &(inteval->stack[((hsi*28+217)*1+lsi)*1]), &(inteval->stack[((hsi*21+245)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+504)*1+lsi)*1]), &(inteval->stack[((hsi*28+168)*1+lsi)*1]), &(inteval->stack[((hsi*21+196)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+441)*1+lsi)*1]), &(inteval->stack[((hsi*28+119)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+378)*1+lsi)*1]), &(inteval->stack[((hsi*28+70)*1+lsi)*1]), &(inteval->stack[((hsi*21+98)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+315)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*63+315)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*63+378)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*63+441)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*63+504)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*63+567)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*63+630)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
