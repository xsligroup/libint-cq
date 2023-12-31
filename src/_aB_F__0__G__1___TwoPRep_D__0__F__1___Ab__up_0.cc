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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_F__0__G__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__G__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__G__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+13600)*1+lsi)*1]), &(inteval->stack[((hsi*420+2640)*1+lsi)*1]), &(inteval->stack[((hsi*315+3060)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+14545)*1+lsi)*1]), &(inteval->stack[((hsi*315+3060)*1+lsi)*1]), &(inteval->stack[((hsi*225+3375)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+15220)*1+lsi)*1]), &(inteval->stack[((hsi*945+13600)*1+lsi)*1]), &(inteval->stack[((hsi*675+14545)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+16570)*1+lsi)*1]), &(inteval->stack[((hsi*540+2100)*1+lsi)*1]), &(inteval->stack[((hsi*420+2640)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+17830)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16570)*1+lsi)*1]), &(inteval->stack[((hsi*945+13600)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+19720)*1+lsi)*1]), &(inteval->stack[((hsi*1890+17830)*1+lsi)*1]), &(inteval->stack[((hsi*1350+15220)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+13600)*1+lsi)*1]), &(inteval->stack[((hsi*280+3960)*1+lsi)*1]), &(inteval->stack[((hsi*210+4240)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+14230)*1+lsi)*1]), &(inteval->stack[((hsi*210+4240)*1+lsi)*1]), &(inteval->stack[((hsi*150+4450)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+14680)*1+lsi)*1]), &(inteval->stack[((hsi*630+13600)*1+lsi)*1]), &(inteval->stack[((hsi*450+14230)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+15580)*1+lsi)*1]), &(inteval->stack[((hsi*360+3600)*1+lsi)*1]), &(inteval->stack[((hsi*280+3960)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+16420)*1+lsi)*1]), &(inteval->stack[((hsi*840+15580)*1+lsi)*1]), &(inteval->stack[((hsi*630+13600)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+2100)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16420)*1+lsi)*1]), &(inteval->stack[((hsi*900+14680)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*4500+13600)*1+lsi)*1]), &(inteval->stack[((hsi*2250+19720)*1+lsi)*1]), &(inteval->stack[((hsi*1500+2100)*1+lsi)*1]),150);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+2100)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]), &(inteval->stack[((hsi*441+1344)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+18100)*1+lsi)*1]), &(inteval->stack[((hsi*441+1344)*1+lsi)*1]), &(inteval->stack[((hsi*315+1785)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+21970)*1+lsi)*1]), &(inteval->stack[((hsi*1323+2100)*1+lsi)*1]), &(inteval->stack[((hsi*945+18100)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+23860)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+25624)*1+lsi)*1]), &(inteval->stack[((hsi*1764+23860)*1+lsi)*1]), &(inteval->stack[((hsi*1323+2100)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+0)*1+lsi)*1]), &(inteval->stack[((hsi*2646+25624)*1+lsi)*1]), &(inteval->stack[((hsi*1890+21970)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*6750+21970)*1+lsi)*1]), &(inteval->stack[((hsi*3150+0)*1+lsi)*1]), &(inteval->stack[((hsi*2250+19720)*1+lsi)*1]),150);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*9000+4600)*1+lsi)*1]), &(inteval->stack[((hsi*6750+21970)*1+lsi)*1]), &(inteval->stack[((hsi*4500+13600)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*9000+4600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
