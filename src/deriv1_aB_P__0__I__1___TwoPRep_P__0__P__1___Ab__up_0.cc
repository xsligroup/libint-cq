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
#include <CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart0bra0ket0pp001.h>
#include <HRRPart0bra0ket0pp010.h>
#include <HRRPart0bra0ket0pp100.h>
#include <HRRPart0bra0ket0p001p.h>
#include <HRRPart0bra0ket0p010p.h>
#include <HRRPart0bra0ket0p100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_P__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__I__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5544)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*252+14616)*1+lsi)*1]), &(inteval->stack[((hsi*168+4524)*1+lsi)*1]), &(inteval->stack[((hsi*84+5268)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),28);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*324+14868)*1+lsi)*1]), &(inteval->stack[((hsi*216+3924)*1+lsi)*1]), &(inteval->stack[((hsi*108+4968)*1+lsi)*1]), &(inteval->stack[((hsi*108+5436)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+9324)*1+lsi)*1]), &(inteval->stack[((hsi*324+14868)*1+lsi)*1]), &(inteval->stack[((hsi*252+14616)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*252+15192)*1+lsi)*1]), &(inteval->stack[((hsi*168+2796)*1+lsi)*1]), &(inteval->stack[((hsi*84+3540)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),28);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*324+15444)*1+lsi)*1]), &(inteval->stack[((hsi*216+2196)*1+lsi)*1]), &(inteval->stack[((hsi*108+3240)*1+lsi)*1]), &(inteval->stack[((hsi*108+5436)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+8568)*1+lsi)*1]), &(inteval->stack[((hsi*324+15444)*1+lsi)*1]), &(inteval->stack[((hsi*252+15192)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*252+15768)*1+lsi)*1]), &(inteval->stack[((hsi*168+984)*1+lsi)*1]), &(inteval->stack[((hsi*84+1812)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),28);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*324+16020)*1+lsi)*1]), &(inteval->stack[((hsi*216+384)*1+lsi)*1]), &(inteval->stack[((hsi*108+1512)*1+lsi)*1]), &(inteval->stack[((hsi*108+5436)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+7812)*1+lsi)*1]), &(inteval->stack[((hsi*324+16020)*1+lsi)*1]), &(inteval->stack[((hsi*252+15768)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*252+16344)*1+lsi)*1]), &(inteval->stack[((hsi*168+4356)*1+lsi)*1]), &(inteval->stack[((hsi*84+5184)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),28);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*324+16596)*1+lsi)*1]), &(inteval->stack[((hsi*216+3708)*1+lsi)*1]), &(inteval->stack[((hsi*108+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+5436)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+7056)*1+lsi)*1]), &(inteval->stack[((hsi*324+16596)*1+lsi)*1]), &(inteval->stack[((hsi*252+16344)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*252+16920)*1+lsi)*1]), &(inteval->stack[((hsi*168+2628)*1+lsi)*1]), &(inteval->stack[((hsi*84+3456)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),28);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*324+17172)*1+lsi)*1]), &(inteval->stack[((hsi*216+1980)*1+lsi)*1]), &(inteval->stack[((hsi*108+3132)*1+lsi)*1]), &(inteval->stack[((hsi*108+5436)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+6300)*1+lsi)*1]), &(inteval->stack[((hsi*324+17172)*1+lsi)*1]), &(inteval->stack[((hsi*252+16920)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*252+17496)*1+lsi)*1]), &(inteval->stack[((hsi*168+816)*1+lsi)*1]), &(inteval->stack[((hsi*84+1728)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),28);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*324+17748)*1+lsi)*1]), &(inteval->stack[((hsi*216+168)*1+lsi)*1]), &(inteval->stack[((hsi*108+1404)*1+lsi)*1]), &(inteval->stack[((hsi*108+5436)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+5544)*1+lsi)*1]), &(inteval->stack[((hsi*324+17748)*1+lsi)*1]), &(inteval->stack[((hsi*252+17496)*1+lsi)*1]),9);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*252+18072)*1+lsi)*1]), &(inteval->stack[((hsi*108+5076)*1+lsi)*1]), &(inteval->stack[((hsi*84+5352)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),3);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+18324)*1+lsi)*1]), &(inteval->stack[((hsi*216+4140)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*756+13860)*1+lsi)*1]), &(inteval->stack[((hsi*504+18324)*1+lsi)*1]), &(inteval->stack[((hsi*252+18072)*1+lsi)*1]),84);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*252+18828)*1+lsi)*1]), &(inteval->stack[((hsi*108+3348)*1+lsi)*1]), &(inteval->stack[((hsi*84+3624)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),3);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+19080)*1+lsi)*1]), &(inteval->stack[((hsi*216+2412)*1+lsi)*1]), &(inteval->stack[((hsi*168+2964)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*756+13104)*1+lsi)*1]), &(inteval->stack[((hsi*504+19080)*1+lsi)*1]), &(inteval->stack[((hsi*252+18828)*1+lsi)*1]),84);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*252+19584)*1+lsi)*1]), &(inteval->stack[((hsi*108+1620)*1+lsi)*1]), &(inteval->stack[((hsi*84+1896)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),3);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+19836)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]), &(inteval->stack[((hsi*168+1152)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*756+12348)*1+lsi)*1]), &(inteval->stack[((hsi*504+19836)*1+lsi)*1]), &(inteval->stack[((hsi*252+19584)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+5436)*1+lsi)*1]), &(inteval->stack[((hsi*84+5184)*1+lsi)*1]), &(inteval->stack[((hsi*84+5268)*1+lsi)*1]), &(inteval->stack[((hsi*84+5352)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+5184)*1+lsi)*1]), &(inteval->stack[((hsi*108+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+4968)*1+lsi)*1]), &(inteval->stack[((hsi*108+5076)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*252+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+5184)*1+lsi)*1]), &(inteval->stack[((hsi*84+5436)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+5112)*1+lsi)*1]), &(inteval->stack[((hsi*168+4356)*1+lsi)*1]), &(inteval->stack[((hsi*168+4524)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+4356)*1+lsi)*1]), &(inteval->stack[((hsi*216+3708)*1+lsi)*1]), &(inteval->stack[((hsi*216+3924)*1+lsi)*1]), &(inteval->stack[((hsi*216+4140)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*504+3708)*1+lsi)*1]), &(inteval->stack[((hsi*216+4356)*1+lsi)*1]), &(inteval->stack[((hsi*168+5112)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*756+11592)*1+lsi)*1]), &(inteval->stack[((hsi*504+3708)*1+lsi)*1]), &(inteval->stack[((hsi*252+4860)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+4212)*1+lsi)*1]), &(inteval->stack[((hsi*84+3456)*1+lsi)*1]), &(inteval->stack[((hsi*84+3540)*1+lsi)*1]), &(inteval->stack[((hsi*84+3624)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+4296)*1+lsi)*1]), &(inteval->stack[((hsi*108+3132)*1+lsi)*1]), &(inteval->stack[((hsi*108+3240)*1+lsi)*1]), &(inteval->stack[((hsi*108+3348)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*252+3132)*1+lsi)*1]), &(inteval->stack[((hsi*108+4296)*1+lsi)*1]), &(inteval->stack[((hsi*84+4212)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+4212)*1+lsi)*1]), &(inteval->stack[((hsi*168+2628)*1+lsi)*1]), &(inteval->stack[((hsi*168+2796)*1+lsi)*1]), &(inteval->stack[((hsi*168+2964)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+2628)*1+lsi)*1]), &(inteval->stack[((hsi*216+1980)*1+lsi)*1]), &(inteval->stack[((hsi*216+2196)*1+lsi)*1]), &(inteval->stack[((hsi*216+2412)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*504+1980)*1+lsi)*1]), &(inteval->stack[((hsi*216+2628)*1+lsi)*1]), &(inteval->stack[((hsi*168+4212)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*756+10836)*1+lsi)*1]), &(inteval->stack[((hsi*504+1980)*1+lsi)*1]), &(inteval->stack[((hsi*252+3132)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+2484)*1+lsi)*1]), &(inteval->stack[((hsi*84+1728)*1+lsi)*1]), &(inteval->stack[((hsi*84+1812)*1+lsi)*1]), &(inteval->stack[((hsi*84+1896)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+4212)*1+lsi)*1]), &(inteval->stack[((hsi*108+1404)*1+lsi)*1]), &(inteval->stack[((hsi*108+1512)*1+lsi)*1]), &(inteval->stack[((hsi*108+1620)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*252+1404)*1+lsi)*1]), &(inteval->stack[((hsi*108+4212)*1+lsi)*1]), &(inteval->stack[((hsi*84+2484)*1+lsi)*1]), &(inteval->stack[((hsi*84+1320)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+4212)*1+lsi)*1]), &(inteval->stack[((hsi*168+816)*1+lsi)*1]), &(inteval->stack[((hsi*168+984)*1+lsi)*1]), &(inteval->stack[((hsi*168+1152)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+2484)*1+lsi)*1]), &(inteval->stack[((hsi*216+168)*1+lsi)*1]), &(inteval->stack[((hsi*216+384)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*504+168)*1+lsi)*1]), &(inteval->stack[((hsi*216+2484)*1+lsi)*1]), &(inteval->stack[((hsi*168+4212)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*756+10080)*1+lsi)*1]), &(inteval->stack[((hsi*504+168)*1+lsi)*1]), &(inteval->stack[((hsi*252+1404)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*756+5544)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*756+6300)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*756+7056)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*756+7812)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*756+8568)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*756+9324)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*756+10080)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*756+10836)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*756+11592)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*756+12348)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*756+13104)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*756+13860)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
