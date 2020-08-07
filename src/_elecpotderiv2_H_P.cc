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
#include <HRRPart0bra0ket0hp002.h>
#include <HRRPart0bra0ket0hp011.h>
#include <HRRPart0bra0ket0hp020.h>
#include <HRRPart0bra0ket0hp101.h>
#include <HRRPart0bra0ket0hp110.h>
#include <HRRPart0bra0ket0hp200.h>
#include <HRRPart0bra0ket0h001p001.h>
#include <HRRPart0bra0ket0h001p010.h>
#include <HRRPart0bra0ket0h001p100.h>
#include <HRRPart0bra0ket0h002p.h>
#include <HRRPart0bra0ket0h010p001.h>
#include <HRRPart0bra0ket0h010p010.h>
#include <HRRPart0bra0ket0h010p100.h>
#include <HRRPart0bra0ket0h011p.h>
#include <HRRPart0bra0ket0h020p.h>
#include <HRRPart0bra0ket0h100p001.h>
#include <HRRPart0bra0ket0h100p010.h>
#include <HRRPart0bra0ket0h100p100.h>
#include <HRRPart0bra0ket0h101p.h>
#include <HRRPart0bra0ket0h110p.h>
#include <HRRPart0bra0ket0h200p.h>
#include <_elecpotderiv2_H_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv2_H_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1155)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv2_H_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp002(inteval, &(inteval->stack[((hsi*63+2415)*1+lsi)*1]), &(inteval->stack[((hsi*28+1106)*1+lsi)*1]), &(inteval->stack[((hsi*21+1134)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]),1);
HRRPart0bra0ket0hp011(inteval, &(inteval->stack[((hsi*63+2352)*1+lsi)*1]), &(inteval->stack[((hsi*28+1057)*1+lsi)*1]), &(inteval->stack[((hsi*21+1085)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*21+329)*1+lsi)*1]),1);
HRRPart0bra0ket0hp020(inteval, &(inteval->stack[((hsi*63+2289)*1+lsi)*1]), &(inteval->stack[((hsi*28+1008)*1+lsi)*1]), &(inteval->stack[((hsi*21+1036)*1+lsi)*1]), &(inteval->stack[((hsi*21+329)*1+lsi)*1]),1);
HRRPart0bra0ket0hp101(inteval, &(inteval->stack[((hsi*63+2226)*1+lsi)*1]), &(inteval->stack[((hsi*28+959)*1+lsi)*1]), &(inteval->stack[((hsi*21+987)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*21+259)*1+lsi)*1]),1);
HRRPart0bra0ket0hp110(inteval, &(inteval->stack[((hsi*63+2163)*1+lsi)*1]), &(inteval->stack[((hsi*28+910)*1+lsi)*1]), &(inteval->stack[((hsi*21+938)*1+lsi)*1]), &(inteval->stack[((hsi*21+329)*1+lsi)*1]), &(inteval->stack[((hsi*21+259)*1+lsi)*1]),1);
HRRPart0bra0ket0hp200(inteval, &(inteval->stack[((hsi*63+2100)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]), &(inteval->stack[((hsi*21+889)*1+lsi)*1]), &(inteval->stack[((hsi*21+259)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p001(inteval, &(inteval->stack[((hsi*63+2037)*1+lsi)*1]), &(inteval->stack[((hsi*28+812)*1+lsi)*1]), &(inteval->stack[((hsi*21+840)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p010(inteval, &(inteval->stack[((hsi*63+1974)*1+lsi)*1]), &(inteval->stack[((hsi*28+763)*1+lsi)*1]), &(inteval->stack[((hsi*21+791)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*21+329)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p100(inteval, &(inteval->stack[((hsi*63+1911)*1+lsi)*1]), &(inteval->stack[((hsi*28+714)*1+lsi)*1]), &(inteval->stack[((hsi*21+742)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*21+259)*1+lsi)*1]),1);
HRRPart0bra0ket0h002p(inteval, &(inteval->stack[((hsi*63+1848)*1+lsi)*1]), &(inteval->stack[((hsi*28+665)*1+lsi)*1]), &(inteval->stack[((hsi*21+693)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p001(inteval, &(inteval->stack[((hsi*63+1785)*1+lsi)*1]), &(inteval->stack[((hsi*28+616)*1+lsi)*1]), &(inteval->stack[((hsi*21+644)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*21+119)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p010(inteval, &(inteval->stack[((hsi*63+1722)*1+lsi)*1]), &(inteval->stack[((hsi*28+567)*1+lsi)*1]), &(inteval->stack[((hsi*21+595)*1+lsi)*1]), &(inteval->stack[((hsi*21+329)*1+lsi)*1]), &(inteval->stack[((hsi*21+119)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p100(inteval, &(inteval->stack[((hsi*63+1659)*1+lsi)*1]), &(inteval->stack[((hsi*28+518)*1+lsi)*1]), &(inteval->stack[((hsi*21+546)*1+lsi)*1]), &(inteval->stack[((hsi*21+119)*1+lsi)*1]), &(inteval->stack[((hsi*21+259)*1+lsi)*1]),1);
HRRPart0bra0ket0h011p(inteval, &(inteval->stack[((hsi*63+1596)*1+lsi)*1]), &(inteval->stack[((hsi*28+469)*1+lsi)*1]), &(inteval->stack[((hsi*21+497)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*21+119)*1+lsi)*1]),1);
HRRPart0bra0ket0h020p(inteval, &(inteval->stack[((hsi*63+1533)*1+lsi)*1]), &(inteval->stack[((hsi*28+420)*1+lsi)*1]), &(inteval->stack[((hsi*21+448)*1+lsi)*1]), &(inteval->stack[((hsi*21+119)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p001(inteval, &(inteval->stack[((hsi*63+1470)*1+lsi)*1]), &(inteval->stack[((hsi*28+350)*1+lsi)*1]), &(inteval->stack[((hsi*21+378)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p010(inteval, &(inteval->stack[((hsi*63+1407)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]), &(inteval->stack[((hsi*21+308)*1+lsi)*1]), &(inteval->stack[((hsi*21+329)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p100(inteval, &(inteval->stack[((hsi*63+1344)*1+lsi)*1]), &(inteval->stack[((hsi*28+210)*1+lsi)*1]), &(inteval->stack[((hsi*21+238)*1+lsi)*1]), &(inteval->stack[((hsi*21+259)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0h101p(inteval, &(inteval->stack[((hsi*63+1281)*1+lsi)*1]), &(inteval->stack[((hsi*28+140)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0h110p(inteval, &(inteval->stack[((hsi*63+1218)*1+lsi)*1]), &(inteval->stack[((hsi*28+70)*1+lsi)*1]), &(inteval->stack[((hsi*21+98)*1+lsi)*1]), &(inteval->stack[((hsi*21+119)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
HRRPart0bra0ket0h200p(inteval, &(inteval->stack[((hsi*63+1155)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*21+49)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*63+1155)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*63+1218)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*63+1281)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*63+1344)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*63+1407)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*63+1470)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*63+1533)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*63+1596)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*63+1659)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*63+1722)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*63+1785)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*63+1848)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*63+1911)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*63+1974)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*63+2037)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*63+2100)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*63+2163)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*63+2226)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*63+2289)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*63+2352)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*63+2415)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
