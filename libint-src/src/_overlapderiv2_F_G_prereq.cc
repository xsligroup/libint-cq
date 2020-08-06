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
#include <CR_aB_X3__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_.h>
#include <CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_f002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_f011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_f020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_f101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_f110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_f200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_F_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*28+3150)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*28+3178)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*28+3206)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_(inteval, &(stack[((hsi*150+3234)*1+lsi)*1]), &(stack[((hsi*28+3206)*1+lsi)*1]), &(stack[((hsi*28+3178)*1+lsi)*1]), &(stack[((hsi*28+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+3000)*1+lsi)*1]),&(stack[((hsi*150+3234)*1+lsi)*1]),150);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_(inteval, &(stack[((hsi*150+3384)*1+lsi)*1]), &(stack[((hsi*28+3206)*1+lsi)*1]), &(stack[((hsi*28+3178)*1+lsi)*1]), &(stack[((hsi*28+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2850)*1+lsi)*1]),&(stack[((hsi*150+3384)*1+lsi)*1]),150);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_(inteval, &(stack[((hsi*150+3534)*1+lsi)*1]), &(stack[((hsi*28+3206)*1+lsi)*1]), &(stack[((hsi*28+3178)*1+lsi)*1]), &(stack[((hsi*28+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2700)*1+lsi)*1]),&(stack[((hsi*150+3534)*1+lsi)*1]),150);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_(inteval, &(stack[((hsi*150+3684)*1+lsi)*1]), &(stack[((hsi*28+3206)*1+lsi)*1]), &(stack[((hsi*28+3178)*1+lsi)*1]), &(stack[((hsi*28+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2550)*1+lsi)*1]),&(stack[((hsi*150+3684)*1+lsi)*1]),150);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_(inteval, &(stack[((hsi*150+3834)*1+lsi)*1]), &(stack[((hsi*28+3206)*1+lsi)*1]), &(stack[((hsi*28+3178)*1+lsi)*1]), &(stack[((hsi*28+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2400)*1+lsi)*1]),&(stack[((hsi*150+3834)*1+lsi)*1]),150);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_(inteval, &(stack[((hsi*150+3984)*1+lsi)*1]), &(stack[((hsi*28+3206)*1+lsi)*1]), &(stack[((hsi*28+3178)*1+lsi)*1]), &(stack[((hsi*28+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2250)*1+lsi)*1]),&(stack[((hsi*150+3984)*1+lsi)*1]),150);
CR_aB_Z4__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*30+3150)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*30+3180)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*30+4134)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*150+4164)*1+lsi)*1]), &(stack[((hsi*30+4134)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2100)*1+lsi)*1]),&(stack[((hsi*150+4164)*1+lsi)*1]),150);
CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*150+4314)*1+lsi)*1]), &(stack[((hsi*30+4134)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1950)*1+lsi)*1]),&(stack[((hsi*150+4314)*1+lsi)*1]),150);
CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*150+4464)*1+lsi)*1]), &(stack[((hsi*30+4134)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1800)*1+lsi)*1]),&(stack[((hsi*150+4464)*1+lsi)*1]),150);
CR_aB_Z5__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*30+4614)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*30+4644)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*30+4674)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*150+4704)*1+lsi)*1]), &(stack[((hsi*30+4674)*1+lsi)*1]), &(stack[((hsi*30+4644)*1+lsi)*1]), &(stack[((hsi*30+4614)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1650)*1+lsi)*1]),&(stack[((hsi*150+4704)*1+lsi)*1]),150);
CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*150+4854)*1+lsi)*1]), &(stack[((hsi*30+4134)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1500)*1+lsi)*1]),&(stack[((hsi*150+4854)*1+lsi)*1]),150);
CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*150+5004)*1+lsi)*1]), &(stack[((hsi*30+4134)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1350)*1+lsi)*1]),&(stack[((hsi*150+5004)*1+lsi)*1]),150);
CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*150+5154)*1+lsi)*1]), &(stack[((hsi*30+4134)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1200)*1+lsi)*1]),&(stack[((hsi*150+5154)*1+lsi)*1]),150);
CR_aB_f011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*150+5304)*1+lsi)*1]), &(stack[((hsi*30+4674)*1+lsi)*1]), &(stack[((hsi*30+4644)*1+lsi)*1]), &(stack[((hsi*30+4614)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1050)*1+lsi)*1]),&(stack[((hsi*150+5304)*1+lsi)*1]),150);
CR_aB_f020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*150+5454)*1+lsi)*1]), &(stack[((hsi*30+4674)*1+lsi)*1]), &(stack[((hsi*30+4644)*1+lsi)*1]), &(stack[((hsi*30+4614)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+900)*1+lsi)*1]),&(stack[((hsi*150+5454)*1+lsi)*1]),150);
CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*150+5604)*1+lsi)*1]), &(stack[((hsi*30+4134)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+750)*1+lsi)*1]),&(stack[((hsi*150+5604)*1+lsi)*1]),150);
CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*150+5754)*1+lsi)*1]), &(stack[((hsi*30+4134)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+600)*1+lsi)*1]),&(stack[((hsi*150+5754)*1+lsi)*1]),150);
CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*150+5904)*1+lsi)*1]), &(stack[((hsi*30+4134)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+450)*1+lsi)*1]),&(stack[((hsi*150+5904)*1+lsi)*1]),150);
CR_aB_f101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*150+6054)*1+lsi)*1]), &(stack[((hsi*30+4674)*1+lsi)*1]), &(stack[((hsi*30+4644)*1+lsi)*1]), &(stack[((hsi*30+4614)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+300)*1+lsi)*1]),&(stack[((hsi*150+6054)*1+lsi)*1]),150);
CR_aB_f110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*150+6204)*1+lsi)*1]), &(stack[((hsi*30+4674)*1+lsi)*1]), &(stack[((hsi*30+4644)*1+lsi)*1]), &(stack[((hsi*30+4614)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+150)*1+lsi)*1]),&(stack[((hsi*150+6204)*1+lsi)*1]),150);
CR_aB_f200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*150+6354)*1+lsi)*1]), &(stack[((hsi*30+4674)*1+lsi)*1]), &(stack[((hsi*30+4644)*1+lsi)*1]), &(stack[((hsi*30+4614)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+0)*1+lsi)*1]),&(stack[((hsi*150+6354)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3150 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
