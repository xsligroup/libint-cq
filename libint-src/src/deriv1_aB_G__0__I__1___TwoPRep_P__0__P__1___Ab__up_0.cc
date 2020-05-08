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
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_G__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_G__0__I__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,22284)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1260+67644)*1+lsi)*1]), &(inteval->stack[((hsi*540+21324)*1+lsi)*1]), &(inteval->stack[((hsi*420+21864)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),15);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1764+68904)*1+lsi)*1]), &(inteval->stack[((hsi*756+19980)*1+lsi)*1]), &(inteval->stack[((hsi*588+20736)*1+lsi)*1]), &(inteval->stack[((hsi*588+14784)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3780+63864)*1+lsi)*1]), &(inteval->stack[((hsi*1764+68904)*1+lsi)*1]), &(inteval->stack[((hsi*1260+67644)*1+lsi)*1]),84);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1260+70668)*1+lsi)*1]), &(inteval->stack[((hsi*540+19020)*1+lsi)*1]), &(inteval->stack[((hsi*420+19560)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),15);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1764+71928)*1+lsi)*1]), &(inteval->stack[((hsi*756+17676)*1+lsi)*1]), &(inteval->stack[((hsi*588+18432)*1+lsi)*1]), &(inteval->stack[((hsi*588+14784)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3780+60084)*1+lsi)*1]), &(inteval->stack[((hsi*1764+71928)*1+lsi)*1]), &(inteval->stack[((hsi*1260+70668)*1+lsi)*1]),84);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1260+73692)*1+lsi)*1]), &(inteval->stack[((hsi*540+16716)*1+lsi)*1]), &(inteval->stack[((hsi*420+17256)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),15);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1764+74952)*1+lsi)*1]), &(inteval->stack[((hsi*756+15372)*1+lsi)*1]), &(inteval->stack[((hsi*588+16128)*1+lsi)*1]), &(inteval->stack[((hsi*588+14784)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3780+56304)*1+lsi)*1]), &(inteval->stack[((hsi*1764+74952)*1+lsi)*1]), &(inteval->stack[((hsi*1260+73692)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+76716)*1+lsi)*1]), &(inteval->stack[((hsi*420+7452)*1+lsi)*1]), &(inteval->stack[((hsi*420+14364)*1+lsi)*1]), &(inteval->stack[((hsi*420+21864)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+77136)*1+lsi)*1]), &(inteval->stack[((hsi*540+6324)*1+lsi)*1]), &(inteval->stack[((hsi*540+13236)*1+lsi)*1]), &(inteval->stack[((hsi*540+21324)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1260+77676)*1+lsi)*1]), &(inteval->stack[((hsi*540+77136)*1+lsi)*1]), &(inteval->stack[((hsi*420+76716)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+21324)*1+lsi)*1]), &(inteval->stack[((hsi*588+6864)*1+lsi)*1]), &(inteval->stack[((hsi*588+13776)*1+lsi)*1]), &(inteval->stack[((hsi*588+20736)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+76716)*1+lsi)*1]), &(inteval->stack[((hsi*756+5568)*1+lsi)*1]), &(inteval->stack[((hsi*756+12480)*1+lsi)*1]), &(inteval->stack[((hsi*756+19980)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1764+78936)*1+lsi)*1]), &(inteval->stack[((hsi*756+76716)*1+lsi)*1]), &(inteval->stack[((hsi*588+21324)*1+lsi)*1]), &(inteval->stack[((hsi*588+14784)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3780+52524)*1+lsi)*1]), &(inteval->stack[((hsi*1764+78936)*1+lsi)*1]), &(inteval->stack[((hsi*1260+77676)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+19980)*1+lsi)*1]), &(inteval->stack[((hsi*420+5148)*1+lsi)*1]), &(inteval->stack[((hsi*420+12060)*1+lsi)*1]), &(inteval->stack[((hsi*420+19560)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+20400)*1+lsi)*1]), &(inteval->stack[((hsi*540+4020)*1+lsi)*1]), &(inteval->stack[((hsi*540+10932)*1+lsi)*1]), &(inteval->stack[((hsi*540+19020)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1260+20940)*1+lsi)*1]), &(inteval->stack[((hsi*540+20400)*1+lsi)*1]), &(inteval->stack[((hsi*420+19980)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+19020)*1+lsi)*1]), &(inteval->stack[((hsi*588+4560)*1+lsi)*1]), &(inteval->stack[((hsi*588+11472)*1+lsi)*1]), &(inteval->stack[((hsi*588+18432)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+19608)*1+lsi)*1]), &(inteval->stack[((hsi*756+3264)*1+lsi)*1]), &(inteval->stack[((hsi*756+10176)*1+lsi)*1]), &(inteval->stack[((hsi*756+17676)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1764+80700)*1+lsi)*1]), &(inteval->stack[((hsi*756+19608)*1+lsi)*1]), &(inteval->stack[((hsi*588+19020)*1+lsi)*1]), &(inteval->stack[((hsi*588+14784)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3780+48744)*1+lsi)*1]), &(inteval->stack[((hsi*1764+80700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+20940)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+17676)*1+lsi)*1]), &(inteval->stack[((hsi*420+2424)*1+lsi)*1]), &(inteval->stack[((hsi*420+9756)*1+lsi)*1]), &(inteval->stack[((hsi*420+17256)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+18096)*1+lsi)*1]), &(inteval->stack[((hsi*540+756)*1+lsi)*1]), &(inteval->stack[((hsi*540+8628)*1+lsi)*1]), &(inteval->stack[((hsi*540+16716)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1260+18636)*1+lsi)*1]), &(inteval->stack[((hsi*540+18096)*1+lsi)*1]), &(inteval->stack[((hsi*420+17676)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+16716)*1+lsi)*1]), &(inteval->stack[((hsi*588+1836)*1+lsi)*1]), &(inteval->stack[((hsi*588+9168)*1+lsi)*1]), &(inteval->stack[((hsi*588+16128)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+17304)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+7872)*1+lsi)*1]), &(inteval->stack[((hsi*756+15372)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1764+82464)*1+lsi)*1]), &(inteval->stack[((hsi*756+17304)*1+lsi)*1]), &(inteval->stack[((hsi*588+16716)*1+lsi)*1]), &(inteval->stack[((hsi*588+14784)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3780+44964)*1+lsi)*1]), &(inteval->stack[((hsi*1764+82464)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18636)*1+lsi)*1]),84);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+14784)*1+lsi)*1]), &(inteval->stack[((hsi*588+13776)*1+lsi)*1]), &(inteval->stack[((hsi*420+14364)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),28);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*1620+16044)*1+lsi)*1]), &(inteval->stack[((hsi*756+12480)*1+lsi)*1]), &(inteval->stack[((hsi*540+13236)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+41184)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16044)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14784)*1+lsi)*1]),45);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+12480)*1+lsi)*1]), &(inteval->stack[((hsi*588+11472)*1+lsi)*1]), &(inteval->stack[((hsi*420+12060)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),28);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*1620+84228)*1+lsi)*1]), &(inteval->stack[((hsi*756+10176)*1+lsi)*1]), &(inteval->stack[((hsi*540+10932)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+37404)*1+lsi)*1]), &(inteval->stack[((hsi*1620+84228)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12480)*1+lsi)*1]),45);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+10176)*1+lsi)*1]), &(inteval->stack[((hsi*588+9168)*1+lsi)*1]), &(inteval->stack[((hsi*420+9756)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),28);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*1620+85848)*1+lsi)*1]), &(inteval->stack[((hsi*756+7872)*1+lsi)*1]), &(inteval->stack[((hsi*540+8628)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+33624)*1+lsi)*1]), &(inteval->stack[((hsi*1620+85848)*1+lsi)*1]), &(inteval->stack[((hsi*1260+10176)*1+lsi)*1]),45);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*1260+7872)*1+lsi)*1]), &(inteval->stack[((hsi*588+6864)*1+lsi)*1]), &(inteval->stack[((hsi*420+7452)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),28);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*1620+87468)*1+lsi)*1]), &(inteval->stack[((hsi*756+5568)*1+lsi)*1]), &(inteval->stack[((hsi*540+6324)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+29844)*1+lsi)*1]), &(inteval->stack[((hsi*1620+87468)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7872)*1+lsi)*1]),45);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*1260+5568)*1+lsi)*1]), &(inteval->stack[((hsi*588+4560)*1+lsi)*1]), &(inteval->stack[((hsi*420+5148)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),28);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*1620+89088)*1+lsi)*1]), &(inteval->stack[((hsi*756+3264)*1+lsi)*1]), &(inteval->stack[((hsi*540+4020)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+26064)*1+lsi)*1]), &(inteval->stack[((hsi*1620+89088)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5568)*1+lsi)*1]),45);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*1260+3264)*1+lsi)*1]), &(inteval->stack[((hsi*588+1836)*1+lsi)*1]), &(inteval->stack[((hsi*420+2424)*1+lsi)*1]), &(inteval->stack[((hsi*420+2844)*1+lsi)*1]),28);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*1620+90708)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+756)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+22284)*1+lsi)*1]), &(inteval->stack[((hsi*1620+90708)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3264)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3780+22284)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3780+26064)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3780+29844)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3780+33624)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3780+37404)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3780+41184)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3780+44964)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3780+48744)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3780+52524)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3780+56304)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3780+60084)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3780+63864)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
