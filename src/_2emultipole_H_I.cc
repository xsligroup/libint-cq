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
#include <_2emultipole_H_I_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _2emultipole_H_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5880)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_2emultipole_H_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*588+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*588+588)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*588+1176)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*588+1764)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*588+2352)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*588+2940)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*588+3528)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*588+4116)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*588+4704)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*588+5292)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
