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
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5994)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+16794)*1+lsi)*1]), &(inteval->stack[((hsi*756+4338)*1+lsi)*1]), &(inteval->stack[((hsi*540+5094)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+18414)*1+lsi)*1]), &(inteval->stack[((hsi*540+5094)*1+lsi)*1]), &(inteval->stack[((hsi*360+5634)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+19494)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16794)*1+lsi)*1]), &(inteval->stack[((hsi*1080+18414)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+21654)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3330)*1+lsi)*1]), &(inteval->stack[((hsi*756+4338)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+23922)*1+lsi)*1]), &(inteval->stack[((hsi*2268+21654)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16794)*1+lsi)*1]),36);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*3600+27162)*1+lsi)*1]), &(inteval->stack[((hsi*3240+23922)*1+lsi)*1]), &(inteval->stack[((hsi*2160+19494)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+16794)*1+lsi)*1]), &(inteval->stack[((hsi*945+1260)*1+lsi)*1]), &(inteval->stack[((hsi*675+2205)*1+lsi)*1]),45);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+18819)*1+lsi)*1]), &(inteval->stack[((hsi*675+2205)*1+lsi)*1]), &(inteval->stack[((hsi*450+2880)*1+lsi)*1]),45);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2700+20169)*1+lsi)*1]), &(inteval->stack[((hsi*2025+16794)*1+lsi)*1]), &(inteval->stack[((hsi*1350+18819)*1+lsi)*1]),45);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+22869)*1+lsi)*1]), &(inteval->stack[((hsi*1260+0)*1+lsi)*1]), &(inteval->stack[((hsi*945+1260)*1+lsi)*1]),45);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4050+0)*1+lsi)*1]), &(inteval->stack[((hsi*2835+22869)*1+lsi)*1]), &(inteval->stack[((hsi*2025+16794)*1+lsi)*1]),45);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*4500+30762)*1+lsi)*1]), &(inteval->stack[((hsi*4050+0)*1+lsi)*1]), &(inteval->stack[((hsi*2700+20169)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*10800+5994)*1+lsi)*1]), &(inteval->stack[((hsi*4500+30762)*1+lsi)*1]), &(inteval->stack[((hsi*3600+27162)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10800+5994)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
