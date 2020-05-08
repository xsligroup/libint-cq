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
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100p.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_D__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_D__0__K__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12510)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*648+35838)*1+lsi)*1]), &(inteval->stack[((hsi*360+10062)*1+lsi)*1]), &(inteval->stack[((hsi*216+11808)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),36);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*810+36486)*1+lsi)*1]), &(inteval->stack[((hsi*450+8802)*1+lsi)*1]), &(inteval->stack[((hsi*270+11052)*1+lsi)*1]), &(inteval->stack[((hsi*270+12240)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1944+22230)*1+lsi)*1]), &(inteval->stack[((hsi*810+36486)*1+lsi)*1]), &(inteval->stack[((hsi*648+35838)*1+lsi)*1]),18);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*648+37296)*1+lsi)*1]), &(inteval->stack[((hsi*360+6174)*1+lsi)*1]), &(inteval->stack[((hsi*216+7920)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),36);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*810+37944)*1+lsi)*1]), &(inteval->stack[((hsi*450+4914)*1+lsi)*1]), &(inteval->stack[((hsi*270+7164)*1+lsi)*1]), &(inteval->stack[((hsi*270+12240)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1944+20286)*1+lsi)*1]), &(inteval->stack[((hsi*810+37944)*1+lsi)*1]), &(inteval->stack[((hsi*648+37296)*1+lsi)*1]),18);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*648+38754)*1+lsi)*1]), &(inteval->stack[((hsi*360+2070)*1+lsi)*1]), &(inteval->stack[((hsi*216+4032)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),36);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*810+39402)*1+lsi)*1]), &(inteval->stack[((hsi*450+810)*1+lsi)*1]), &(inteval->stack[((hsi*270+3276)*1+lsi)*1]), &(inteval->stack[((hsi*270+12240)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1944+18342)*1+lsi)*1]), &(inteval->stack[((hsi*810+39402)*1+lsi)*1]), &(inteval->stack[((hsi*648+38754)*1+lsi)*1]),18);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*648+40212)*1+lsi)*1]), &(inteval->stack[((hsi*360+9702)*1+lsi)*1]), &(inteval->stack[((hsi*216+11592)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),36);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*810+40860)*1+lsi)*1]), &(inteval->stack[((hsi*450+8352)*1+lsi)*1]), &(inteval->stack[((hsi*270+10782)*1+lsi)*1]), &(inteval->stack[((hsi*270+12240)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1944+16398)*1+lsi)*1]), &(inteval->stack[((hsi*810+40860)*1+lsi)*1]), &(inteval->stack[((hsi*648+40212)*1+lsi)*1]),18);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*648+41670)*1+lsi)*1]), &(inteval->stack[((hsi*360+5814)*1+lsi)*1]), &(inteval->stack[((hsi*216+7704)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),36);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*810+42318)*1+lsi)*1]), &(inteval->stack[((hsi*450+4464)*1+lsi)*1]), &(inteval->stack[((hsi*270+6894)*1+lsi)*1]), &(inteval->stack[((hsi*270+12240)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1944+14454)*1+lsi)*1]), &(inteval->stack[((hsi*810+42318)*1+lsi)*1]), &(inteval->stack[((hsi*648+41670)*1+lsi)*1]),18);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*648+43128)*1+lsi)*1]), &(inteval->stack[((hsi*360+1710)*1+lsi)*1]), &(inteval->stack[((hsi*216+3816)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),36);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*810+43776)*1+lsi)*1]), &(inteval->stack[((hsi*450+360)*1+lsi)*1]), &(inteval->stack[((hsi*270+3006)*1+lsi)*1]), &(inteval->stack[((hsi*270+12240)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1944+12510)*1+lsi)*1]), &(inteval->stack[((hsi*810+43776)*1+lsi)*1]), &(inteval->stack[((hsi*648+43128)*1+lsi)*1]),18);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*648+44586)*1+lsi)*1]), &(inteval->stack[((hsi*270+11322)*1+lsi)*1]), &(inteval->stack[((hsi*216+12024)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),6);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1080+45234)*1+lsi)*1]), &(inteval->stack[((hsi*450+9252)*1+lsi)*1]), &(inteval->stack[((hsi*360+10422)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1944+33894)*1+lsi)*1]), &(inteval->stack[((hsi*1080+45234)*1+lsi)*1]), &(inteval->stack[((hsi*648+44586)*1+lsi)*1]),108);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*648+46314)*1+lsi)*1]), &(inteval->stack[((hsi*270+7434)*1+lsi)*1]), &(inteval->stack[((hsi*216+8136)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),6);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1080+46962)*1+lsi)*1]), &(inteval->stack[((hsi*450+5364)*1+lsi)*1]), &(inteval->stack[((hsi*360+6534)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1944+31950)*1+lsi)*1]), &(inteval->stack[((hsi*1080+46962)*1+lsi)*1]), &(inteval->stack[((hsi*648+46314)*1+lsi)*1]),108);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*648+48042)*1+lsi)*1]), &(inteval->stack[((hsi*270+3546)*1+lsi)*1]), &(inteval->stack[((hsi*216+4248)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),6);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1080+48690)*1+lsi)*1]), &(inteval->stack[((hsi*450+1260)*1+lsi)*1]), &(inteval->stack[((hsi*360+2430)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1944+30006)*1+lsi)*1]), &(inteval->stack[((hsi*1080+48690)*1+lsi)*1]), &(inteval->stack[((hsi*648+48042)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+12240)*1+lsi)*1]), &(inteval->stack[((hsi*216+11592)*1+lsi)*1]), &(inteval->stack[((hsi*216+11808)*1+lsi)*1]), &(inteval->stack[((hsi*216+12024)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+11592)*1+lsi)*1]), &(inteval->stack[((hsi*270+10782)*1+lsi)*1]), &(inteval->stack[((hsi*270+11052)*1+lsi)*1]), &(inteval->stack[((hsi*270+11322)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*648+10782)*1+lsi)*1]), &(inteval->stack[((hsi*270+11592)*1+lsi)*1]), &(inteval->stack[((hsi*216+12240)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+11430)*1+lsi)*1]), &(inteval->stack[((hsi*360+9702)*1+lsi)*1]), &(inteval->stack[((hsi*360+10062)*1+lsi)*1]), &(inteval->stack[((hsi*360+10422)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+9702)*1+lsi)*1]), &(inteval->stack[((hsi*450+8352)*1+lsi)*1]), &(inteval->stack[((hsi*450+8802)*1+lsi)*1]), &(inteval->stack[((hsi*450+9252)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1080+8352)*1+lsi)*1]), &(inteval->stack[((hsi*450+9702)*1+lsi)*1]), &(inteval->stack[((hsi*360+11430)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1944+28062)*1+lsi)*1]), &(inteval->stack[((hsi*1080+8352)*1+lsi)*1]), &(inteval->stack[((hsi*648+10782)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+9432)*1+lsi)*1]), &(inteval->stack[((hsi*216+7704)*1+lsi)*1]), &(inteval->stack[((hsi*216+7920)*1+lsi)*1]), &(inteval->stack[((hsi*216+8136)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+9648)*1+lsi)*1]), &(inteval->stack[((hsi*270+6894)*1+lsi)*1]), &(inteval->stack[((hsi*270+7164)*1+lsi)*1]), &(inteval->stack[((hsi*270+7434)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*648+6894)*1+lsi)*1]), &(inteval->stack[((hsi*270+9648)*1+lsi)*1]), &(inteval->stack[((hsi*216+9432)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+9432)*1+lsi)*1]), &(inteval->stack[((hsi*360+5814)*1+lsi)*1]), &(inteval->stack[((hsi*360+6174)*1+lsi)*1]), &(inteval->stack[((hsi*360+6534)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+11430)*1+lsi)*1]), &(inteval->stack[((hsi*450+4464)*1+lsi)*1]), &(inteval->stack[((hsi*450+4914)*1+lsi)*1]), &(inteval->stack[((hsi*450+5364)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1080+4464)*1+lsi)*1]), &(inteval->stack[((hsi*450+11430)*1+lsi)*1]), &(inteval->stack[((hsi*360+9432)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1944+26118)*1+lsi)*1]), &(inteval->stack[((hsi*1080+4464)*1+lsi)*1]), &(inteval->stack[((hsi*648+6894)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+5544)*1+lsi)*1]), &(inteval->stack[((hsi*216+3816)*1+lsi)*1]), &(inteval->stack[((hsi*216+4032)*1+lsi)*1]), &(inteval->stack[((hsi*216+4248)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+9432)*1+lsi)*1]), &(inteval->stack[((hsi*270+3006)*1+lsi)*1]), &(inteval->stack[((hsi*270+3276)*1+lsi)*1]), &(inteval->stack[((hsi*270+3546)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*648+3006)*1+lsi)*1]), &(inteval->stack[((hsi*270+9432)*1+lsi)*1]), &(inteval->stack[((hsi*216+5544)*1+lsi)*1]), &(inteval->stack[((hsi*216+2790)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+9432)*1+lsi)*1]), &(inteval->stack[((hsi*360+1710)*1+lsi)*1]), &(inteval->stack[((hsi*360+2070)*1+lsi)*1]), &(inteval->stack[((hsi*360+2430)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+5544)*1+lsi)*1]), &(inteval->stack[((hsi*450+360)*1+lsi)*1]), &(inteval->stack[((hsi*450+810)*1+lsi)*1]), &(inteval->stack[((hsi*450+1260)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1080+11430)*1+lsi)*1]), &(inteval->stack[((hsi*450+5544)*1+lsi)*1]), &(inteval->stack[((hsi*360+9432)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1944+24174)*1+lsi)*1]), &(inteval->stack[((hsi*1080+11430)*1+lsi)*1]), &(inteval->stack[((hsi*648+3006)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1944+12510)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1944+14454)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1944+16398)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1944+18342)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1944+20286)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1944+22230)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1944+24174)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1944+26118)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1944+28062)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1944+30006)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1944+31950)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1944+33894)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
