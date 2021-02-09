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
#include <CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_I__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_I__0__H__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,22792)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_I__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+65128)*1+lsi)*1]), &(inteval->stack[((hsi*784+14280)*1+lsi)*1]), &(inteval->stack[((hsi*588+16856)*1+lsi)*1]),28);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+66892)*1+lsi)*1]), &(inteval->stack[((hsi*784+21420)*1+lsi)*1]), &(inteval->stack[((hsi*588+22204)*1+lsi)*1]), &(inteval->stack[((hsi*588+16856)*1+lsi)*1]),28);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+68656)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20412)*1+lsi)*1]), &(inteval->stack[((hsi*784+21420)*1+lsi)*1]), &(inteval->stack[((hsi*784+14280)*1+lsi)*1]),28);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*3528+61600)*1+lsi)*1]), &(inteval->stack[((hsi*2352+68656)*1+lsi)*1]), &(inteval->stack[((hsi*1764+66892)*1+lsi)*1]), &(inteval->stack[((hsi*1764+65128)*1+lsi)*1]),28);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+71008)*1+lsi)*1]), &(inteval->stack[((hsi*784+19040)*1+lsi)*1]), &(inteval->stack[((hsi*588+19824)*1+lsi)*1]), &(inteval->stack[((hsi*588+16856)*1+lsi)*1]),28);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+72772)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18032)*1+lsi)*1]), &(inteval->stack[((hsi*784+19040)*1+lsi)*1]), &(inteval->stack[((hsi*784+14280)*1+lsi)*1]),28);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*3528+58072)*1+lsi)*1]), &(inteval->stack[((hsi*2352+72772)*1+lsi)*1]), &(inteval->stack[((hsi*1764+71008)*1+lsi)*1]), &(inteval->stack[((hsi*1764+65128)*1+lsi)*1]),28);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+75124)*1+lsi)*1]), &(inteval->stack[((hsi*784+16072)*1+lsi)*1]), &(inteval->stack[((hsi*588+17444)*1+lsi)*1]), &(inteval->stack[((hsi*588+16856)*1+lsi)*1]),28);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+76888)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15064)*1+lsi)*1]), &(inteval->stack[((hsi*784+16072)*1+lsi)*1]), &(inteval->stack[((hsi*784+14280)*1+lsi)*1]),28);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*3528+54544)*1+lsi)*1]), &(inteval->stack[((hsi*2352+76888)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75124)*1+lsi)*1]), &(inteval->stack[((hsi*1764+65128)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+79240)*1+lsi)*1]), &(inteval->stack[((hsi*784+5768)*1+lsi)*1]), &(inteval->stack[((hsi*784+12908)*1+lsi)*1]), &(inteval->stack[((hsi*784+21420)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+21420)*1+lsi)*1]), &(inteval->stack[((hsi*588+6552)*1+lsi)*1]), &(inteval->stack[((hsi*588+13692)*1+lsi)*1]), &(inteval->stack[((hsi*588+22204)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1764+80024)*1+lsi)*1]), &(inteval->stack[((hsi*784+79240)*1+lsi)*1]), &(inteval->stack[((hsi*588+21420)*1+lsi)*1]), &(inteval->stack[((hsi*588+16856)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+21420)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4760)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11900)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20412)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*2352+81788)*1+lsi)*1]), &(inteval->stack[((hsi*1008+21420)*1+lsi)*1]), &(inteval->stack[((hsi*784+79240)*1+lsi)*1]), &(inteval->stack[((hsi*784+14280)*1+lsi)*1]),28);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*3528+51016)*1+lsi)*1]), &(inteval->stack[((hsi*2352+81788)*1+lsi)*1]), &(inteval->stack[((hsi*1764+80024)*1+lsi)*1]), &(inteval->stack[((hsi*1764+65128)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+79240)*1+lsi)*1]), &(inteval->stack[((hsi*784+3388)*1+lsi)*1]), &(inteval->stack[((hsi*784+10528)*1+lsi)*1]), &(inteval->stack[((hsi*784+19040)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+20412)*1+lsi)*1]), &(inteval->stack[((hsi*588+4172)*1+lsi)*1]), &(inteval->stack[((hsi*588+11312)*1+lsi)*1]), &(inteval->stack[((hsi*588+19824)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1764+21000)*1+lsi)*1]), &(inteval->stack[((hsi*784+79240)*1+lsi)*1]), &(inteval->stack[((hsi*588+20412)*1+lsi)*1]), &(inteval->stack[((hsi*588+16856)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+19040)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2380)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9520)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18032)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*2352+84140)*1+lsi)*1]), &(inteval->stack[((hsi*1008+19040)*1+lsi)*1]), &(inteval->stack[((hsi*784+79240)*1+lsi)*1]), &(inteval->stack[((hsi*784+14280)*1+lsi)*1]),28);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*3528+47488)*1+lsi)*1]), &(inteval->stack[((hsi*2352+84140)*1+lsi)*1]), &(inteval->stack[((hsi*1764+21000)*1+lsi)*1]), &(inteval->stack[((hsi*1764+65128)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+79240)*1+lsi)*1]), &(inteval->stack[((hsi*784+1008)*1+lsi)*1]), &(inteval->stack[((hsi*784+8148)*1+lsi)*1]), &(inteval->stack[((hsi*784+16072)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+18032)*1+lsi)*1]), &(inteval->stack[((hsi*588+1792)*1+lsi)*1]), &(inteval->stack[((hsi*588+8932)*1+lsi)*1]), &(inteval->stack[((hsi*588+17444)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1764+18620)*1+lsi)*1]), &(inteval->stack[((hsi*784+79240)*1+lsi)*1]), &(inteval->stack[((hsi*588+18032)*1+lsi)*1]), &(inteval->stack[((hsi*588+16856)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+16072)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7140)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15064)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*2352+86492)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16072)*1+lsi)*1]), &(inteval->stack[((hsi*784+79240)*1+lsi)*1]), &(inteval->stack[((hsi*784+14280)*1+lsi)*1]),28);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*3528+43960)*1+lsi)*1]), &(inteval->stack[((hsi*2352+86492)*1+lsi)*1]), &(inteval->stack[((hsi*1764+18620)*1+lsi)*1]), &(inteval->stack[((hsi*1764+65128)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+14280)*1+lsi)*1]), &(inteval->stack[((hsi*784+12908)*1+lsi)*1]), &(inteval->stack[((hsi*588+13692)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+16044)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11900)*1+lsi)*1]), &(inteval->stack[((hsi*784+12908)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+40432)*1+lsi)*1]), &(inteval->stack[((hsi*2352+16044)*1+lsi)*1]), &(inteval->stack[((hsi*1764+14280)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+11900)*1+lsi)*1]), &(inteval->stack[((hsi*784+10528)*1+lsi)*1]), &(inteval->stack[((hsi*588+11312)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+88844)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9520)*1+lsi)*1]), &(inteval->stack[((hsi*784+10528)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+36904)*1+lsi)*1]), &(inteval->stack[((hsi*2352+88844)*1+lsi)*1]), &(inteval->stack[((hsi*1764+11900)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+9520)*1+lsi)*1]), &(inteval->stack[((hsi*784+8148)*1+lsi)*1]), &(inteval->stack[((hsi*588+8932)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+91196)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7140)*1+lsi)*1]), &(inteval->stack[((hsi*784+8148)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+33376)*1+lsi)*1]), &(inteval->stack[((hsi*2352+91196)*1+lsi)*1]), &(inteval->stack[((hsi*1764+9520)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+7140)*1+lsi)*1]), &(inteval->stack[((hsi*784+5768)*1+lsi)*1]), &(inteval->stack[((hsi*588+6552)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+93548)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4760)*1+lsi)*1]), &(inteval->stack[((hsi*784+5768)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+29848)*1+lsi)*1]), &(inteval->stack[((hsi*2352+93548)*1+lsi)*1]), &(inteval->stack[((hsi*1764+7140)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+4760)*1+lsi)*1]), &(inteval->stack[((hsi*784+3388)*1+lsi)*1]), &(inteval->stack[((hsi*588+4172)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+95900)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2380)*1+lsi)*1]), &(inteval->stack[((hsi*784+3388)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+26320)*1+lsi)*1]), &(inteval->stack[((hsi*2352+95900)*1+lsi)*1]), &(inteval->stack[((hsi*1764+4760)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+2380)*1+lsi)*1]), &(inteval->stack[((hsi*784+1008)*1+lsi)*1]), &(inteval->stack[((hsi*588+1792)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+98252)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*784+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+22792)*1+lsi)*1]), &(inteval->stack[((hsi*2352+98252)*1+lsi)*1]), &(inteval->stack[((hsi*1764+2380)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3528+22792)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3528+26320)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3528+29848)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3528+33376)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3528+36904)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3528+40432)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3528+43960)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3528+47488)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3528+51016)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3528+54544)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3528+58072)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3528+61600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
