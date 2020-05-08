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
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kd001.h>
#include <HRRPart1bra0ket0kd010.h>
#include <HRRPart1bra0ket0kd100.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001d.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010d.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100d.h>
#include <HRRPart1bra0ket0k100p.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0lp001.h>
#include <HRRPart1bra0ket0lp010.h>
#include <HRRPart1bra0ket0lp100.h>
#include <HRRPart1bra0ket0l001p.h>
#include <HRRPart1bra0ket0l010p.h>
#include <HRRPart1bra0ket0l100p.h>
#include <deriv1_aB_I__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_I__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,36540)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_I__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+109116)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22848)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26908)*1+lsi)*1]),28);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3024+112140)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34272)*1+lsi)*1]), &(inteval->stack[((hsi*1008+35532)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26908)*1+lsi)*1]),28);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*3780+115164)*1+lsi)*1]), &(inteval->stack[((hsi*1540+32732)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34272)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22848)*1+lsi)*1]),28);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*6048+103068)*1+lsi)*1]), &(inteval->stack[((hsi*3780+115164)*1+lsi)*1]), &(inteval->stack[((hsi*3024+112140)*1+lsi)*1]), &(inteval->stack[((hsi*3024+109116)*1+lsi)*1]),28);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3024+118944)*1+lsi)*1]), &(inteval->stack[((hsi*1260+30464)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31724)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26908)*1+lsi)*1]),28);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*3780+121968)*1+lsi)*1]), &(inteval->stack[((hsi*1540+28924)*1+lsi)*1]), &(inteval->stack[((hsi*1260+30464)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22848)*1+lsi)*1]),28);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*6048+97020)*1+lsi)*1]), &(inteval->stack[((hsi*3780+121968)*1+lsi)*1]), &(inteval->stack[((hsi*3024+118944)*1+lsi)*1]), &(inteval->stack[((hsi*3024+109116)*1+lsi)*1]),28);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3024+125748)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25648)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27916)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26908)*1+lsi)*1]),28);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*3780+128772)*1+lsi)*1]), &(inteval->stack[((hsi*1540+24108)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25648)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22848)*1+lsi)*1]),28);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*6048+90972)*1+lsi)*1]), &(inteval->stack[((hsi*3780+128772)*1+lsi)*1]), &(inteval->stack[((hsi*3024+125748)*1+lsi)*1]), &(inteval->stack[((hsi*3024+109116)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9156)*1+lsi)*1]), &(inteval->stack[((hsi*1260+20580)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34272)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+34272)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10416)*1+lsi)*1]), &(inteval->stack[((hsi*1008+21840)*1+lsi)*1]), &(inteval->stack[((hsi*1008+35532)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3024+133812)*1+lsi)*1]), &(inteval->stack[((hsi*1260+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1008+34272)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26908)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1540+34272)*1+lsi)*1]), &(inteval->stack[((hsi*1540+7616)*1+lsi)*1]), &(inteval->stack[((hsi*1540+19040)*1+lsi)*1]), &(inteval->stack[((hsi*1540+32732)*1+lsi)*1]));
HRRPart1bra0ket0l001p(inteval, &(inteval->stack[((hsi*3780+136836)*1+lsi)*1]), &(inteval->stack[((hsi*1540+34272)*1+lsi)*1]), &(inteval->stack[((hsi*1260+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22848)*1+lsi)*1]),28);
HRRPart1bra0ket0k001d(inteval, &(inteval->stack[((hsi*6048+84924)*1+lsi)*1]), &(inteval->stack[((hsi*3780+136836)*1+lsi)*1]), &(inteval->stack[((hsi*3024+133812)*1+lsi)*1]), &(inteval->stack[((hsi*3024+109116)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5348)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16772)*1+lsi)*1]), &(inteval->stack[((hsi*1260+30464)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+32732)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6608)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18032)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31724)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3024+140616)*1+lsi)*1]), &(inteval->stack[((hsi*1260+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32732)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26908)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1540+30464)*1+lsi)*1]), &(inteval->stack[((hsi*1540+3808)*1+lsi)*1]), &(inteval->stack[((hsi*1540+15232)*1+lsi)*1]), &(inteval->stack[((hsi*1540+28924)*1+lsi)*1]));
HRRPart1bra0ket0l010p(inteval, &(inteval->stack[((hsi*3780+32004)*1+lsi)*1]), &(inteval->stack[((hsi*1540+30464)*1+lsi)*1]), &(inteval->stack[((hsi*1260+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22848)*1+lsi)*1]),28);
HRRPart1bra0ket0k010d(inteval, &(inteval->stack[((hsi*6048+78876)*1+lsi)*1]), &(inteval->stack[((hsi*3780+32004)*1+lsi)*1]), &(inteval->stack[((hsi*3024+140616)*1+lsi)*1]), &(inteval->stack[((hsi*3024+109116)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1540)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12964)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25648)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+28924)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14224)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27916)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3024+143640)*1+lsi)*1]), &(inteval->stack[((hsi*1260+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1008+28924)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26908)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1540+25648)*1+lsi)*1]), &(inteval->stack[((hsi*1540+0)*1+lsi)*1]), &(inteval->stack[((hsi*1540+11424)*1+lsi)*1]), &(inteval->stack[((hsi*1540+24108)*1+lsi)*1]));
HRRPart1bra0ket0l100p(inteval, &(inteval->stack[((hsi*3780+27188)*1+lsi)*1]), &(inteval->stack[((hsi*1540+25648)*1+lsi)*1]), &(inteval->stack[((hsi*1260+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22848)*1+lsi)*1]),28);
HRRPart1bra0ket0k100d(inteval, &(inteval->stack[((hsi*6048+72828)*1+lsi)*1]), &(inteval->stack[((hsi*3780+27188)*1+lsi)*1]), &(inteval->stack[((hsi*3024+143640)*1+lsi)*1]), &(inteval->stack[((hsi*3024+109116)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+22848)*1+lsi)*1]), &(inteval->stack[((hsi*1260+20580)*1+lsi)*1]), &(inteval->stack[((hsi*1008+21840)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+146664)*1+lsi)*1]), &(inteval->stack[((hsi*1540+19040)*1+lsi)*1]), &(inteval->stack[((hsi*1260+20580)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+66780)*1+lsi)*1]), &(inteval->stack[((hsi*3780+146664)*1+lsi)*1]), &(inteval->stack[((hsi*3024+22848)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+19040)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16772)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18032)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+150444)*1+lsi)*1]), &(inteval->stack[((hsi*1540+15232)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16772)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+60732)*1+lsi)*1]), &(inteval->stack[((hsi*3780+150444)*1+lsi)*1]), &(inteval->stack[((hsi*3024+19040)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+15232)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12964)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14224)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+154224)*1+lsi)*1]), &(inteval->stack[((hsi*1540+11424)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12964)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+54684)*1+lsi)*1]), &(inteval->stack[((hsi*3780+154224)*1+lsi)*1]), &(inteval->stack[((hsi*3024+15232)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+11424)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9156)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10416)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+158004)*1+lsi)*1]), &(inteval->stack[((hsi*1540+7616)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9156)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+48636)*1+lsi)*1]), &(inteval->stack[((hsi*3780+158004)*1+lsi)*1]), &(inteval->stack[((hsi*3024+11424)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+7616)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5348)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6608)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+161784)*1+lsi)*1]), &(inteval->stack[((hsi*1540+3808)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5348)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+42588)*1+lsi)*1]), &(inteval->stack[((hsi*3780+161784)*1+lsi)*1]), &(inteval->stack[((hsi*3024+7616)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+3808)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1540)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+165564)*1+lsi)*1]), &(inteval->stack[((hsi*1540+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1540)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+36540)*1+lsi)*1]), &(inteval->stack[((hsi*3780+165564)*1+lsi)*1]), &(inteval->stack[((hsi*3024+3808)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6048+36540)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*6048+42588)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*6048+48636)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*6048+54684)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*6048+60732)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*6048+66780)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*6048+72828)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*6048+78876)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*6048+84924)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*6048+90972)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*6048+97020)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*6048+103068)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
