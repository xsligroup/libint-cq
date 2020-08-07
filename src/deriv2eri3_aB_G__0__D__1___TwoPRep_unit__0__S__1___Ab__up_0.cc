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
#include <CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_unit__0__S001__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_unit__0__S010__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_unit__0__S100__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D002__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_unit__0__S001__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_unit__0__S010__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_unit__0__S100__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D011__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D020__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_unit__0__S001__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_unit__0__S010__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_unit__0__S100__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D101__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D110__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D200__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G001__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G001__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G001__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G010__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G010__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G010__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G100__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G100__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G100__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <deriv2eri3_aB_G__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv2eri3_aB_G__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1890)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv2eri3_aB_G__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_unit__0__S010__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3870)*1+lsi)*1]), &(inteval->stack[((hsi*90+1170)*1+lsi)*1]), &(inteval->stack[((hsi*90+1710)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_unit__0__S100__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3780)*1+lsi)*1]), &(inteval->stack[((hsi*90+1080)*1+lsi)*1]), &(inteval->stack[((hsi*90+1530)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_unit__0__S001__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3960)*1+lsi)*1]), &(inteval->stack[((hsi*90+1260)*1+lsi)*1]), &(inteval->stack[((hsi*90+1800)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G001__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2610)*1+lsi)*1]), &(inteval->stack[((hsi*90+990)*1+lsi)*1]), &(inteval->stack[((hsi*90+1260)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D002__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3690)*1+lsi)*1]), &(inteval->stack[((hsi*90+2610)*1+lsi)*1]), &(inteval->stack[((hsi*90+3960)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_unit__0__S100__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3420)*1+lsi)*1]), &(inteval->stack[((hsi*90+720)*1+lsi)*1]), &(inteval->stack[((hsi*90+1440)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_unit__0__S001__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3600)*1+lsi)*1]), &(inteval->stack[((hsi*90+900)*1+lsi)*1]), &(inteval->stack[((hsi*90+1710)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G001__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2520)*1+lsi)*1]), &(inteval->stack[((hsi*90+630)*1+lsi)*1]), &(inteval->stack[((hsi*90+1170)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D011__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3330)*1+lsi)*1]), &(inteval->stack[((hsi*90+2520)*1+lsi)*1]), &(inteval->stack[((hsi*90+3600)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_unit__0__S010__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3510)*1+lsi)*1]), &(inteval->stack[((hsi*90+810)*1+lsi)*1]), &(inteval->stack[((hsi*90+1620)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G010__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2250)*1+lsi)*1]), &(inteval->stack[((hsi*90+540)*1+lsi)*1]), &(inteval->stack[((hsi*90+810)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D020__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3240)*1+lsi)*1]), &(inteval->stack[((hsi*90+2250)*1+lsi)*1]), &(inteval->stack[((hsi*90+3510)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_unit__0__S001__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3150)*1+lsi)*1]), &(inteval->stack[((hsi*90+450)*1+lsi)*1]), &(inteval->stack[((hsi*90+1530)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G001__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2430)*1+lsi)*1]), &(inteval->stack[((hsi*90+180)*1+lsi)*1]), &(inteval->stack[((hsi*90+1080)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D101__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2880)*1+lsi)*1]), &(inteval->stack[((hsi*90+2430)*1+lsi)*1]), &(inteval->stack[((hsi*90+3150)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_unit__0__S010__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3060)*1+lsi)*1]), &(inteval->stack[((hsi*90+360)*1+lsi)*1]), &(inteval->stack[((hsi*90+1440)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G010__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2160)*1+lsi)*1]), &(inteval->stack[((hsi*90+90)*1+lsi)*1]), &(inteval->stack[((hsi*90+720)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D110__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2790)*1+lsi)*1]), &(inteval->stack[((hsi*90+2160)*1+lsi)*1]), &(inteval->stack[((hsi*90+3060)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_unit__0__S100__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2970)*1+lsi)*1]), &(inteval->stack[((hsi*90+270)*1+lsi)*1]), &(inteval->stack[((hsi*90+1350)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G100__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+1890)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+270)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D200__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2700)*1+lsi)*1]), &(inteval->stack[((hsi*90+1890)*1+lsi)*1]), &(inteval->stack[((hsi*90+2970)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G010__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2340)*1+lsi)*1]), &(inteval->stack[((hsi*90+630)*1+lsi)*1]), &(inteval->stack[((hsi*90+900)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G100__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2070)*1+lsi)*1]), &(inteval->stack[((hsi*90+180)*1+lsi)*1]), &(inteval->stack[((hsi*90+450)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G100__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+1980)*1+lsi)*1]), &(inteval->stack[((hsi*90+90)*1+lsi)*1]), &(inteval->stack[((hsi*90+360)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*90+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*90+90)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*90+180)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*90+1890)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*90+1980)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*90+2070)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*90+270)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*90+360)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*90+450)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*90+540)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*90+630)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*90+2160)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*90+2250)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*90+2340)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*90+720)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*90+810)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*90+900)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*90+990)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*90+2430)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*90+2520)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*90+2610)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*90+1080)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*90+1170)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*90+1260)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*90+2700)*1+lsi)*1]);
inteval->targets[25] = &(inteval->stack[((hsi*90+2790)*1+lsi)*1]);
inteval->targets[26] = &(inteval->stack[((hsi*90+2880)*1+lsi)*1]);
inteval->targets[27] = &(inteval->stack[((hsi*90+2970)*1+lsi)*1]);
inteval->targets[28] = &(inteval->stack[((hsi*90+3060)*1+lsi)*1]);
inteval->targets[29] = &(inteval->stack[((hsi*90+3150)*1+lsi)*1]);
inteval->targets[30] = &(inteval->stack[((hsi*90+3240)*1+lsi)*1]);
inteval->targets[31] = &(inteval->stack[((hsi*90+3330)*1+lsi)*1]);
inteval->targets[32] = &(inteval->stack[((hsi*90+3420)*1+lsi)*1]);
inteval->targets[33] = &(inteval->stack[((hsi*90+3510)*1+lsi)*1]);
inteval->targets[34] = &(inteval->stack[((hsi*90+3600)*1+lsi)*1]);
inteval->targets[35] = &(inteval->stack[((hsi*90+3690)*1+lsi)*1]);
inteval->targets[36] = &(inteval->stack[((hsi*90+3780)*1+lsi)*1]);
inteval->targets[37] = &(inteval->stack[((hsi*90+3870)*1+lsi)*1]);
inteval->targets[38] = &(inteval->stack[((hsi*90+3960)*1+lsi)*1]);
inteval->targets[39] = &(inteval->stack[((hsi*90+1350)*1+lsi)*1]);
inteval->targets[40] = &(inteval->stack[((hsi*90+1440)*1+lsi)*1]);
inteval->targets[41] = &(inteval->stack[((hsi*90+1530)*1+lsi)*1]);
inteval->targets[42] = &(inteval->stack[((hsi*90+1620)*1+lsi)*1]);
inteval->targets[43] = &(inteval->stack[((hsi*90+1710)*1+lsi)*1]);
inteval->targets[44] = &(inteval->stack[((hsi*90+1800)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
