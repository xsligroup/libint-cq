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
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001d.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010d.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100d.h>
#include <HRRPart1bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_H__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_H__0__H__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,17094)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+48846)*1+lsi)*1]), &(inteval->stack[((hsi*588+10710)*1+lsi)*1]), &(inteval->stack[((hsi*441+12642)*1+lsi)*1]),21);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+50169)*1+lsi)*1]), &(inteval->stack[((hsi*588+16065)*1+lsi)*1]), &(inteval->stack[((hsi*441+16653)*1+lsi)*1]), &(inteval->stack[((hsi*441+12642)*1+lsi)*1]),21);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1764+51492)*1+lsi)*1]), &(inteval->stack[((hsi*756+15309)*1+lsi)*1]), &(inteval->stack[((hsi*588+16065)*1+lsi)*1]), &(inteval->stack[((hsi*588+10710)*1+lsi)*1]),21);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*2646+46200)*1+lsi)*1]), &(inteval->stack[((hsi*1764+51492)*1+lsi)*1]), &(inteval->stack[((hsi*1323+50169)*1+lsi)*1]), &(inteval->stack[((hsi*1323+48846)*1+lsi)*1]),21);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+53256)*1+lsi)*1]), &(inteval->stack[((hsi*588+14280)*1+lsi)*1]), &(inteval->stack[((hsi*441+14868)*1+lsi)*1]), &(inteval->stack[((hsi*441+12642)*1+lsi)*1]),21);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1764+54579)*1+lsi)*1]), &(inteval->stack[((hsi*756+13524)*1+lsi)*1]), &(inteval->stack[((hsi*588+14280)*1+lsi)*1]), &(inteval->stack[((hsi*588+10710)*1+lsi)*1]),21);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*2646+43554)*1+lsi)*1]), &(inteval->stack[((hsi*1764+54579)*1+lsi)*1]), &(inteval->stack[((hsi*1323+53256)*1+lsi)*1]), &(inteval->stack[((hsi*1323+48846)*1+lsi)*1]),21);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+56343)*1+lsi)*1]), &(inteval->stack[((hsi*588+12054)*1+lsi)*1]), &(inteval->stack[((hsi*441+13083)*1+lsi)*1]), &(inteval->stack[((hsi*441+12642)*1+lsi)*1]),21);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1764+57666)*1+lsi)*1]), &(inteval->stack[((hsi*756+11298)*1+lsi)*1]), &(inteval->stack[((hsi*588+12054)*1+lsi)*1]), &(inteval->stack[((hsi*588+10710)*1+lsi)*1]),21);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*2646+40908)*1+lsi)*1]), &(inteval->stack[((hsi*1764+57666)*1+lsi)*1]), &(inteval->stack[((hsi*1323+56343)*1+lsi)*1]), &(inteval->stack[((hsi*1323+48846)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+59430)*1+lsi)*1]), &(inteval->stack[((hsi*588+4326)*1+lsi)*1]), &(inteval->stack[((hsi*588+9681)*1+lsi)*1]), &(inteval->stack[((hsi*588+16065)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+16065)*1+lsi)*1]), &(inteval->stack[((hsi*441+4914)*1+lsi)*1]), &(inteval->stack[((hsi*441+10269)*1+lsi)*1]), &(inteval->stack[((hsi*441+16653)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1323+60018)*1+lsi)*1]), &(inteval->stack[((hsi*588+59430)*1+lsi)*1]), &(inteval->stack[((hsi*441+16065)*1+lsi)*1]), &(inteval->stack[((hsi*441+12642)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+16065)*1+lsi)*1]), &(inteval->stack[((hsi*756+3570)*1+lsi)*1]), &(inteval->stack[((hsi*756+8925)*1+lsi)*1]), &(inteval->stack[((hsi*756+15309)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1764+61341)*1+lsi)*1]), &(inteval->stack[((hsi*756+16065)*1+lsi)*1]), &(inteval->stack[((hsi*588+59430)*1+lsi)*1]), &(inteval->stack[((hsi*588+10710)*1+lsi)*1]),21);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*2646+38262)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61341)*1+lsi)*1]), &(inteval->stack[((hsi*1323+60018)*1+lsi)*1]), &(inteval->stack[((hsi*1323+48846)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+59430)*1+lsi)*1]), &(inteval->stack[((hsi*588+2541)*1+lsi)*1]), &(inteval->stack[((hsi*588+7896)*1+lsi)*1]), &(inteval->stack[((hsi*588+14280)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+15309)*1+lsi)*1]), &(inteval->stack[((hsi*441+3129)*1+lsi)*1]), &(inteval->stack[((hsi*441+8484)*1+lsi)*1]), &(inteval->stack[((hsi*441+14868)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1323+15750)*1+lsi)*1]), &(inteval->stack[((hsi*588+59430)*1+lsi)*1]), &(inteval->stack[((hsi*441+15309)*1+lsi)*1]), &(inteval->stack[((hsi*441+12642)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+14280)*1+lsi)*1]), &(inteval->stack[((hsi*756+1785)*1+lsi)*1]), &(inteval->stack[((hsi*756+7140)*1+lsi)*1]), &(inteval->stack[((hsi*756+13524)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1764+63105)*1+lsi)*1]), &(inteval->stack[((hsi*756+14280)*1+lsi)*1]), &(inteval->stack[((hsi*588+59430)*1+lsi)*1]), &(inteval->stack[((hsi*588+10710)*1+lsi)*1]),21);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*2646+35616)*1+lsi)*1]), &(inteval->stack[((hsi*1764+63105)*1+lsi)*1]), &(inteval->stack[((hsi*1323+15750)*1+lsi)*1]), &(inteval->stack[((hsi*1323+48846)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+59430)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]), &(inteval->stack[((hsi*588+6111)*1+lsi)*1]), &(inteval->stack[((hsi*588+12054)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+13524)*1+lsi)*1]), &(inteval->stack[((hsi*441+1344)*1+lsi)*1]), &(inteval->stack[((hsi*441+6699)*1+lsi)*1]), &(inteval->stack[((hsi*441+13083)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1323+13965)*1+lsi)*1]), &(inteval->stack[((hsi*588+59430)*1+lsi)*1]), &(inteval->stack[((hsi*441+13524)*1+lsi)*1]), &(inteval->stack[((hsi*441+12642)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+12054)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+5355)*1+lsi)*1]), &(inteval->stack[((hsi*756+11298)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1764+64869)*1+lsi)*1]), &(inteval->stack[((hsi*756+12054)*1+lsi)*1]), &(inteval->stack[((hsi*588+59430)*1+lsi)*1]), &(inteval->stack[((hsi*588+10710)*1+lsi)*1]),21);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*2646+32970)*1+lsi)*1]), &(inteval->stack[((hsi*1764+64869)*1+lsi)*1]), &(inteval->stack[((hsi*1323+13965)*1+lsi)*1]), &(inteval->stack[((hsi*1323+48846)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+10710)*1+lsi)*1]), &(inteval->stack[((hsi*588+9681)*1+lsi)*1]), &(inteval->stack[((hsi*441+10269)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+12033)*1+lsi)*1]), &(inteval->stack[((hsi*756+8925)*1+lsi)*1]), &(inteval->stack[((hsi*588+9681)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+30324)*1+lsi)*1]), &(inteval->stack[((hsi*1764+12033)*1+lsi)*1]), &(inteval->stack[((hsi*1323+10710)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+8925)*1+lsi)*1]), &(inteval->stack[((hsi*588+7896)*1+lsi)*1]), &(inteval->stack[((hsi*441+8484)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+66633)*1+lsi)*1]), &(inteval->stack[((hsi*756+7140)*1+lsi)*1]), &(inteval->stack[((hsi*588+7896)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+27678)*1+lsi)*1]), &(inteval->stack[((hsi*1764+66633)*1+lsi)*1]), &(inteval->stack[((hsi*1323+8925)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+7140)*1+lsi)*1]), &(inteval->stack[((hsi*588+6111)*1+lsi)*1]), &(inteval->stack[((hsi*441+6699)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+68397)*1+lsi)*1]), &(inteval->stack[((hsi*756+5355)*1+lsi)*1]), &(inteval->stack[((hsi*588+6111)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+25032)*1+lsi)*1]), &(inteval->stack[((hsi*1764+68397)*1+lsi)*1]), &(inteval->stack[((hsi*1323+7140)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+5355)*1+lsi)*1]), &(inteval->stack[((hsi*588+4326)*1+lsi)*1]), &(inteval->stack[((hsi*441+4914)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+70161)*1+lsi)*1]), &(inteval->stack[((hsi*756+3570)*1+lsi)*1]), &(inteval->stack[((hsi*588+4326)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+22386)*1+lsi)*1]), &(inteval->stack[((hsi*1764+70161)*1+lsi)*1]), &(inteval->stack[((hsi*1323+5355)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+3570)*1+lsi)*1]), &(inteval->stack[((hsi*588+2541)*1+lsi)*1]), &(inteval->stack[((hsi*441+3129)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+71925)*1+lsi)*1]), &(inteval->stack[((hsi*756+1785)*1+lsi)*1]), &(inteval->stack[((hsi*588+2541)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+19740)*1+lsi)*1]), &(inteval->stack[((hsi*1764+71925)*1+lsi)*1]), &(inteval->stack[((hsi*1323+3570)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+1785)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]), &(inteval->stack[((hsi*441+1344)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+73689)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+17094)*1+lsi)*1]), &(inteval->stack[((hsi*1764+73689)*1+lsi)*1]), &(inteval->stack[((hsi*1323+1785)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2646+17094)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2646+19740)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2646+22386)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2646+25032)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2646+27678)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2646+30324)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2646+32970)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2646+35616)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2646+38262)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2646+40908)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2646+43554)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2646+46200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
