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
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0ki.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_K__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void eri3_aB_K__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,17136)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_K__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+53424)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12240)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14220)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+58284)*1+lsi)*1]), &(inteval->stack[((hsi*2376+9864)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12240)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+64224)*1+lsi)*1]), &(inteval->stack[((hsi*5940+58284)*1+lsi)*1]), &(inteval->stack[((hsi*4860+53424)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+73944)*1+lsi)*1]), &(inteval->stack[((hsi*2808+7056)*1+lsi)*1]), &(inteval->stack[((hsi*2376+9864)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+81072)*1+lsi)*1]), &(inteval->stack[((hsi*7128+73944)*1+lsi)*1]), &(inteval->stack[((hsi*5940+58284)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+92952)*1+lsi)*1]), &(inteval->stack[((hsi*11880+81072)*1+lsi)*1]), &(inteval->stack[((hsi*9720+64224)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+109152)*1+lsi)*1]), &(inteval->stack[((hsi*3276+3780)*1+lsi)*1]), &(inteval->stack[((hsi*2808+7056)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+117576)*1+lsi)*1]), &(inteval->stack[((hsi*8424+109152)*1+lsi)*1]), &(inteval->stack[((hsi*7128+73944)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+131832)*1+lsi)*1]), &(inteval->stack[((hsi*14256+117576)*1+lsi)*1]), &(inteval->stack[((hsi*11880+81072)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+151632)*1+lsi)*1]), &(inteval->stack[((hsi*19800+131832)*1+lsi)*1]), &(inteval->stack[((hsi*16200+92952)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+73944)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14220)*1+lsi)*1]), &(inteval->stack[((hsi*1296+15840)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+77832)*1+lsi)*1]), &(inteval->stack[((hsi*4860+53424)*1+lsi)*1]), &(inteval->stack[((hsi*3888+73944)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+175932)*1+lsi)*1]), &(inteval->stack[((hsi*9720+64224)*1+lsi)*1]), &(inteval->stack[((hsi*7776+77832)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+53424)*1+lsi)*1]), &(inteval->stack[((hsi*16200+92952)*1+lsi)*1]), &(inteval->stack[((hsi*12960+175932)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+72864)*1+lsi)*1]), &(inteval->stack[((hsi*24300+151632)*1+lsi)*1]), &(inteval->stack[((hsi*19440+53424)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+53424)*1+lsi)*1]), &(inteval->stack[((hsi*3780+0)*1+lsi)*1]), &(inteval->stack[((hsi*3276+3780)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+0)*1+lsi)*1]), &(inteval->stack[((hsi*9828+53424)*1+lsi)*1]), &(inteval->stack[((hsi*8424+109152)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+175932)*1+lsi)*1]), &(inteval->stack[((hsi*16848+0)*1+lsi)*1]), &(inteval->stack[((hsi*14256+117576)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+100080)*1+lsi)*1]), &(inteval->stack[((hsi*23760+175932)*1+lsi)*1]), &(inteval->stack[((hsi*19800+131832)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+175932)*1+lsi)*1]), &(inteval->stack[((hsi*29700+100080)*1+lsi)*1]), &(inteval->stack[((hsi*24300+151632)*1+lsi)*1]),36);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*36288+17136)*1+lsi)*1]), &(inteval->stack[((hsi*34020+175932)*1+lsi)*1]), &(inteval->stack[((hsi*27216+72864)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*36288+17136)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
