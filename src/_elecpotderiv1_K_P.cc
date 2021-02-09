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
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100p.h>
#include <_elecpotderiv1_K_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_K_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,522)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_K_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+1062)*1+lsi)*1]), &(inteval->stack[((hsi*45+441)*1+lsi)*1]), &(inteval->stack[((hsi*36+486)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+954)*1+lsi)*1]), &(inteval->stack[((hsi*45+360)*1+lsi)*1]), &(inteval->stack[((hsi*36+405)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+846)*1+lsi)*1]), &(inteval->stack[((hsi*45+279)*1+lsi)*1]), &(inteval->stack[((hsi*36+324)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+738)*1+lsi)*1]), &(inteval->stack[((hsi*45+198)*1+lsi)*1]), &(inteval->stack[((hsi*36+243)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+630)*1+lsi)*1]), &(inteval->stack[((hsi*45+117)*1+lsi)*1]), &(inteval->stack[((hsi*36+162)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+522)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*108+522)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*108+630)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*108+738)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*108+846)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*108+954)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*108+1062)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
