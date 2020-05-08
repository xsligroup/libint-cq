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
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_G__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_G__0__H__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,17052)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+51072)*1+lsi)*1]), &(inteval->stack[((hsi*420+16317)*1+lsi)*1]), &(inteval->stack[((hsi*315+16737)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),15);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+52017)*1+lsi)*1]), &(inteval->stack[((hsi*588+15288)*1+lsi)*1]), &(inteval->stack[((hsi*441+15876)*1+lsi)*1]), &(inteval->stack[((hsi*441+11319)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2835+48237)*1+lsi)*1]), &(inteval->stack[((hsi*1323+52017)*1+lsi)*1]), &(inteval->stack[((hsi*945+51072)*1+lsi)*1]),63);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+53340)*1+lsi)*1]), &(inteval->stack[((hsi*420+14553)*1+lsi)*1]), &(inteval->stack[((hsi*315+14973)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),15);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+54285)*1+lsi)*1]), &(inteval->stack[((hsi*588+13524)*1+lsi)*1]), &(inteval->stack[((hsi*441+14112)*1+lsi)*1]), &(inteval->stack[((hsi*441+11319)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2835+45402)*1+lsi)*1]), &(inteval->stack[((hsi*1323+54285)*1+lsi)*1]), &(inteval->stack[((hsi*945+53340)*1+lsi)*1]),63);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+55608)*1+lsi)*1]), &(inteval->stack[((hsi*420+12789)*1+lsi)*1]), &(inteval->stack[((hsi*315+13209)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),15);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+56553)*1+lsi)*1]), &(inteval->stack[((hsi*588+11760)*1+lsi)*1]), &(inteval->stack[((hsi*441+12348)*1+lsi)*1]), &(inteval->stack[((hsi*441+11319)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2835+42567)*1+lsi)*1]), &(inteval->stack[((hsi*1323+56553)*1+lsi)*1]), &(inteval->stack[((hsi*945+55608)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+57876)*1+lsi)*1]), &(inteval->stack[((hsi*315+5712)*1+lsi)*1]), &(inteval->stack[((hsi*315+11004)*1+lsi)*1]), &(inteval->stack[((hsi*315+16737)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+58191)*1+lsi)*1]), &(inteval->stack[((hsi*420+4851)*1+lsi)*1]), &(inteval->stack[((hsi*420+10143)*1+lsi)*1]), &(inteval->stack[((hsi*420+16317)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*945+58611)*1+lsi)*1]), &(inteval->stack[((hsi*420+58191)*1+lsi)*1]), &(inteval->stack[((hsi*315+57876)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+16317)*1+lsi)*1]), &(inteval->stack[((hsi*441+5271)*1+lsi)*1]), &(inteval->stack[((hsi*441+10563)*1+lsi)*1]), &(inteval->stack[((hsi*441+15876)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+57876)*1+lsi)*1]), &(inteval->stack[((hsi*588+4263)*1+lsi)*1]), &(inteval->stack[((hsi*588+9555)*1+lsi)*1]), &(inteval->stack[((hsi*588+15288)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1323+59556)*1+lsi)*1]), &(inteval->stack[((hsi*588+57876)*1+lsi)*1]), &(inteval->stack[((hsi*441+16317)*1+lsi)*1]), &(inteval->stack[((hsi*441+11319)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2835+39732)*1+lsi)*1]), &(inteval->stack[((hsi*1323+59556)*1+lsi)*1]), &(inteval->stack[((hsi*945+58611)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+15288)*1+lsi)*1]), &(inteval->stack[((hsi*315+3948)*1+lsi)*1]), &(inteval->stack[((hsi*315+9240)*1+lsi)*1]), &(inteval->stack[((hsi*315+14973)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+15603)*1+lsi)*1]), &(inteval->stack[((hsi*420+3087)*1+lsi)*1]), &(inteval->stack[((hsi*420+8379)*1+lsi)*1]), &(inteval->stack[((hsi*420+14553)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*945+16023)*1+lsi)*1]), &(inteval->stack[((hsi*420+15603)*1+lsi)*1]), &(inteval->stack[((hsi*315+15288)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+14553)*1+lsi)*1]), &(inteval->stack[((hsi*441+3507)*1+lsi)*1]), &(inteval->stack[((hsi*441+8799)*1+lsi)*1]), &(inteval->stack[((hsi*441+14112)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+14994)*1+lsi)*1]), &(inteval->stack[((hsi*588+2499)*1+lsi)*1]), &(inteval->stack[((hsi*588+7791)*1+lsi)*1]), &(inteval->stack[((hsi*588+13524)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1323+60879)*1+lsi)*1]), &(inteval->stack[((hsi*588+14994)*1+lsi)*1]), &(inteval->stack[((hsi*441+14553)*1+lsi)*1]), &(inteval->stack[((hsi*441+11319)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2835+36897)*1+lsi)*1]), &(inteval->stack[((hsi*1323+60879)*1+lsi)*1]), &(inteval->stack[((hsi*945+16023)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+13524)*1+lsi)*1]), &(inteval->stack[((hsi*315+1869)*1+lsi)*1]), &(inteval->stack[((hsi*315+7476)*1+lsi)*1]), &(inteval->stack[((hsi*315+13209)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+13839)*1+lsi)*1]), &(inteval->stack[((hsi*420+588)*1+lsi)*1]), &(inteval->stack[((hsi*420+6615)*1+lsi)*1]), &(inteval->stack[((hsi*420+12789)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*945+14259)*1+lsi)*1]), &(inteval->stack[((hsi*420+13839)*1+lsi)*1]), &(inteval->stack[((hsi*315+13524)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+12789)*1+lsi)*1]), &(inteval->stack[((hsi*441+1428)*1+lsi)*1]), &(inteval->stack[((hsi*441+7035)*1+lsi)*1]), &(inteval->stack[((hsi*441+12348)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+13230)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+6027)*1+lsi)*1]), &(inteval->stack[((hsi*588+11760)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1323+62202)*1+lsi)*1]), &(inteval->stack[((hsi*588+13230)*1+lsi)*1]), &(inteval->stack[((hsi*441+12789)*1+lsi)*1]), &(inteval->stack[((hsi*441+11319)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2835+34062)*1+lsi)*1]), &(inteval->stack[((hsi*1323+62202)*1+lsi)*1]), &(inteval->stack[((hsi*945+14259)*1+lsi)*1]),63);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+11319)*1+lsi)*1]), &(inteval->stack[((hsi*441+10563)*1+lsi)*1]), &(inteval->stack[((hsi*315+11004)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),21);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+12264)*1+lsi)*1]), &(inteval->stack[((hsi*588+9555)*1+lsi)*1]), &(inteval->stack[((hsi*420+10143)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+31227)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12264)*1+lsi)*1]), &(inteval->stack[((hsi*945+11319)*1+lsi)*1]),45);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+9555)*1+lsi)*1]), &(inteval->stack[((hsi*441+8799)*1+lsi)*1]), &(inteval->stack[((hsi*315+9240)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),21);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+63525)*1+lsi)*1]), &(inteval->stack[((hsi*588+7791)*1+lsi)*1]), &(inteval->stack[((hsi*420+8379)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+28392)*1+lsi)*1]), &(inteval->stack[((hsi*1260+63525)*1+lsi)*1]), &(inteval->stack[((hsi*945+9555)*1+lsi)*1]),45);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+7791)*1+lsi)*1]), &(inteval->stack[((hsi*441+7035)*1+lsi)*1]), &(inteval->stack[((hsi*315+7476)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),21);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+64785)*1+lsi)*1]), &(inteval->stack[((hsi*588+6027)*1+lsi)*1]), &(inteval->stack[((hsi*420+6615)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+25557)*1+lsi)*1]), &(inteval->stack[((hsi*1260+64785)*1+lsi)*1]), &(inteval->stack[((hsi*945+7791)*1+lsi)*1]),45);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*945+6027)*1+lsi)*1]), &(inteval->stack[((hsi*441+5271)*1+lsi)*1]), &(inteval->stack[((hsi*315+5712)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),21);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*1260+66045)*1+lsi)*1]), &(inteval->stack[((hsi*588+4263)*1+lsi)*1]), &(inteval->stack[((hsi*420+4851)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+22722)*1+lsi)*1]), &(inteval->stack[((hsi*1260+66045)*1+lsi)*1]), &(inteval->stack[((hsi*945+6027)*1+lsi)*1]),45);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*945+4263)*1+lsi)*1]), &(inteval->stack[((hsi*441+3507)*1+lsi)*1]), &(inteval->stack[((hsi*315+3948)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),21);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*1260+67305)*1+lsi)*1]), &(inteval->stack[((hsi*588+2499)*1+lsi)*1]), &(inteval->stack[((hsi*420+3087)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+19887)*1+lsi)*1]), &(inteval->stack[((hsi*1260+67305)*1+lsi)*1]), &(inteval->stack[((hsi*945+4263)*1+lsi)*1]),45);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*945+2499)*1+lsi)*1]), &(inteval->stack[((hsi*441+1428)*1+lsi)*1]), &(inteval->stack[((hsi*315+1869)*1+lsi)*1]), &(inteval->stack[((hsi*315+2184)*1+lsi)*1]),21);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*1260+68565)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+588)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+17052)*1+lsi)*1]), &(inteval->stack[((hsi*1260+68565)*1+lsi)*1]), &(inteval->stack[((hsi*945+2499)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2835+17052)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2835+19887)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2835+22722)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2835+25557)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2835+28392)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2835+31227)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2835+34062)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2835+36897)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2835+39732)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2835+42567)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2835+45402)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2835+48237)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
