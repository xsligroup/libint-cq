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
#include <HRRPart0ket0bra0hp001.h>
#include <HRRPart0ket0bra0hp010.h>
#include <HRRPart0ket0bra0hp100.h>
#include <HRRPart0ket0bra0h001p.h>
#include <HRRPart0ket0bra0h010p.h>
#include <HRRPart0ket0bra0h100p.h>
#include <_elecpotderiv1_P_H_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_P_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,315)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_P_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0h001p(inteval, &(inteval->stack[((hsi*63+630)*1+lsi)*1]), &(inteval->stack[((hsi*28+161)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p(inteval, &(inteval->stack[((hsi*63+567)*1+lsi)*1]), &(inteval->stack[((hsi*28+133)*1+lsi)*1]), &(inteval->stack[((hsi*21+273)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p(inteval, &(inteval->stack[((hsi*63+504)*1+lsi)*1]), &(inteval->stack[((hsi*28+105)*1+lsi)*1]), &(inteval->stack[((hsi*21+252)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart0ket0bra0hp001(inteval, &(inteval->stack[((hsi*63+441)*1+lsi)*1]), &(inteval->stack[((hsi*28+77)*1+lsi)*1]), &(inteval->stack[((hsi*21+231)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart0ket0bra0hp010(inteval, &(inteval->stack[((hsi*63+378)*1+lsi)*1]), &(inteval->stack[((hsi*28+49)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart0ket0bra0hp100(inteval, &(inteval->stack[((hsi*63+315)*1+lsi)*1]), &(inteval->stack[((hsi*28+21)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
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
#endif
