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
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <eri3_aB_K__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_K__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2664)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_K__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+6264)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]), &(inteval->stack[((hsi*540+1764)*1+lsi)*1]),36);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+7884)*1+lsi)*1]), &(inteval->stack[((hsi*540+1764)*1+lsi)*1]), &(inteval->stack[((hsi*360+2304)*1+lsi)*1]),36);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+8964)*1+lsi)*1]), &(inteval->stack[((hsi*1620+6264)*1+lsi)*1]), &(inteval->stack[((hsi*1080+7884)*1+lsi)*1]),36);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+11124)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]),36);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+13392)*1+lsi)*1]), &(inteval->stack[((hsi*2268+11124)*1+lsi)*1]), &(inteval->stack[((hsi*1620+6264)*1+lsi)*1]),36);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*3600+2664)*1+lsi)*1]), &(inteval->stack[((hsi*3240+13392)*1+lsi)*1]), &(inteval->stack[((hsi*2160+8964)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3600+2664)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
