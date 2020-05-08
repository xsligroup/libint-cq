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
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_D__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__G__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1024)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+2644)*1+lsi)*1]), &(inteval->stack[((hsi*126+808)*1+lsi)*1]), &(inteval->stack[((hsi*90+934)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+2914)*1+lsi)*1]), &(inteval->stack[((hsi*168+640)*1+lsi)*1]), &(inteval->stack[((hsi*126+808)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+3292)*1+lsi)*1]), &(inteval->stack[((hsi*378+2914)*1+lsi)*1]), &(inteval->stack[((hsi*270+2644)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+2644)*1+lsi)*1]), &(inteval->stack[((hsi*210+280)*1+lsi)*1]), &(inteval->stack[((hsi*150+490)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+3832)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+280)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+0)*1+lsi)*1]), &(inteval->stack[((hsi*630+3832)*1+lsi)*1]), &(inteval->stack[((hsi*450+2644)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1620+1024)*1+lsi)*1]), &(inteval->stack[((hsi*900+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+3292)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1620+1024)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
