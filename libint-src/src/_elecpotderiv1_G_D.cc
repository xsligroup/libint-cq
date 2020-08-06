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
#include <HRRPart0bra0ket0gd001.h>
#include <HRRPart0bra0ket0gd010.h>
#include <HRRPart0bra0ket0gd100.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001d.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010d.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100d.h>
#include <HRRPart0bra0ket0g100p.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100p.h>
#include <_elecpotderiv1_G_D_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_G_D(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,420)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_G_D_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+960)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+1005)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]), &(inteval->stack[((hsi*15+405)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+1050)*1+lsi)*1]), &(inteval->stack[((hsi*28+356)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0gd001(inteval, &(inteval->stack[((hsi*90+870)*1+lsi)*1]), &(inteval->stack[((hsi*63+1050)*1+lsi)*1]), &(inteval->stack[((hsi*45+1005)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+356)*1+lsi)*1]), &(inteval->stack[((hsi*21+320)*1+lsi)*1]), &(inteval->stack[((hsi*15+341)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+1113)*1+lsi)*1]), &(inteval->stack[((hsi*28+292)*1+lsi)*1]), &(inteval->stack[((hsi*21+320)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0gd010(inteval, &(inteval->stack[((hsi*90+780)*1+lsi)*1]), &(inteval->stack[((hsi*63+1113)*1+lsi)*1]), &(inteval->stack[((hsi*45+356)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+292)*1+lsi)*1]), &(inteval->stack[((hsi*21+256)*1+lsi)*1]), &(inteval->stack[((hsi*15+277)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+1176)*1+lsi)*1]), &(inteval->stack[((hsi*28+228)*1+lsi)*1]), &(inteval->stack[((hsi*21+256)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0gd100(inteval, &(inteval->stack[((hsi*90+690)*1+lsi)*1]), &(inteval->stack[((hsi*63+1176)*1+lsi)*1]), &(inteval->stack[((hsi*45+292)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*45+228)*1+lsi)*1]), &(inteval->stack[((hsi*21+192)*1+lsi)*1]), &(inteval->stack[((hsi*15+213)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+1239)*1+lsi)*1]), &(inteval->stack[((hsi*28+164)*1+lsi)*1]), &(inteval->stack[((hsi*21+192)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d(inteval, &(inteval->stack[((hsi*90+600)*1+lsi)*1]), &(inteval->stack[((hsi*63+1239)*1+lsi)*1]), &(inteval->stack[((hsi*45+228)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*45+164)*1+lsi)*1]), &(inteval->stack[((hsi*21+128)*1+lsi)*1]), &(inteval->stack[((hsi*15+149)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+1302)*1+lsi)*1]), &(inteval->stack[((hsi*28+100)*1+lsi)*1]), &(inteval->stack[((hsi*21+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d(inteval, &(inteval->stack[((hsi*90+510)*1+lsi)*1]), &(inteval->stack[((hsi*63+1302)*1+lsi)*1]), &(inteval->stack[((hsi*45+164)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*45+100)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*15+70)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+1365)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d(inteval, &(inteval->stack[((hsi*90+420)*1+lsi)*1]), &(inteval->stack[((hsi*63+1365)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*90+420)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*90+510)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*90+600)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*90+690)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*90+780)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*90+870)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
