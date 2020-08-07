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
#include <CR_aB_X5__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_g002__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_g011__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_g020__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_g101__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_g110__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_g200__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_g002__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_g011__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_g020__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_g101__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_g110__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_g200__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_G_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*48+4725)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*48+4773)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*48+4821)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___Kinetic_g002__0___Ab__up_(inteval, &(stack[((hsi*225+4869)*1+lsi)*1]), &(stack[((hsi*48+4821)*1+lsi)*1]), &(stack[((hsi*48+4773)*1+lsi)*1]), &(stack[((hsi*48+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+4500)*1+lsi)*1]),&(stack[((hsi*225+4869)*1+lsi)*1]),225);
CR_aB_g__0___Kinetic_g011__0___Ab__up_(inteval, &(stack[((hsi*225+5094)*1+lsi)*1]), &(stack[((hsi*48+4821)*1+lsi)*1]), &(stack[((hsi*48+4773)*1+lsi)*1]), &(stack[((hsi*48+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+4275)*1+lsi)*1]),&(stack[((hsi*225+5094)*1+lsi)*1]),225);
CR_aB_g__0___Kinetic_g020__0___Ab__up_(inteval, &(stack[((hsi*225+5319)*1+lsi)*1]), &(stack[((hsi*48+4821)*1+lsi)*1]), &(stack[((hsi*48+4773)*1+lsi)*1]), &(stack[((hsi*48+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+4050)*1+lsi)*1]),&(stack[((hsi*225+5319)*1+lsi)*1]),225);
CR_aB_g__0___Kinetic_g101__0___Ab__up_(inteval, &(stack[((hsi*225+5544)*1+lsi)*1]), &(stack[((hsi*48+4821)*1+lsi)*1]), &(stack[((hsi*48+4773)*1+lsi)*1]), &(stack[((hsi*48+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+3825)*1+lsi)*1]),&(stack[((hsi*225+5544)*1+lsi)*1]),225);
CR_aB_g__0___Kinetic_g110__0___Ab__up_(inteval, &(stack[((hsi*225+5769)*1+lsi)*1]), &(stack[((hsi*48+4821)*1+lsi)*1]), &(stack[((hsi*48+4773)*1+lsi)*1]), &(stack[((hsi*48+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+3600)*1+lsi)*1]),&(stack[((hsi*225+5769)*1+lsi)*1]),225);
CR_aB_g__0___Kinetic_g200__0___Ab__up_(inteval, &(stack[((hsi*225+5994)*1+lsi)*1]), &(stack[((hsi*48+4821)*1+lsi)*1]), &(stack[((hsi*48+4773)*1+lsi)*1]), &(stack[((hsi*48+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+3375)*1+lsi)*1]),&(stack[((hsi*225+5994)*1+lsi)*1]),225);
CR_aB_Z6__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*49+4725)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*49+4774)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*49+6219)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*225+6268)*1+lsi)*1]), &(stack[((hsi*49+6219)*1+lsi)*1]), &(stack[((hsi*49+4774)*1+lsi)*1]), &(stack[((hsi*49+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+3150)*1+lsi)*1]),&(stack[((hsi*225+6268)*1+lsi)*1]),225);
CR_aB_g001__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*225+6493)*1+lsi)*1]), &(stack[((hsi*49+6219)*1+lsi)*1]), &(stack[((hsi*49+4774)*1+lsi)*1]), &(stack[((hsi*49+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2925)*1+lsi)*1]),&(stack[((hsi*225+6493)*1+lsi)*1]),225);
CR_aB_g001__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*225+6718)*1+lsi)*1]), &(stack[((hsi*49+6219)*1+lsi)*1]), &(stack[((hsi*49+4774)*1+lsi)*1]), &(stack[((hsi*49+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2700)*1+lsi)*1]),&(stack[((hsi*225+6718)*1+lsi)*1]),225);
CR_aB_Z7__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*48+6943)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*48+6991)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*48+7039)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*225+7087)*1+lsi)*1]), &(stack[((hsi*48+7039)*1+lsi)*1]), &(stack[((hsi*48+6991)*1+lsi)*1]), &(stack[((hsi*48+6943)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2475)*1+lsi)*1]),&(stack[((hsi*225+7087)*1+lsi)*1]),225);
CR_aB_g010__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*225+7312)*1+lsi)*1]), &(stack[((hsi*49+6219)*1+lsi)*1]), &(stack[((hsi*49+4774)*1+lsi)*1]), &(stack[((hsi*49+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2250)*1+lsi)*1]),&(stack[((hsi*225+7312)*1+lsi)*1]),225);
CR_aB_g010__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*225+7537)*1+lsi)*1]), &(stack[((hsi*49+6219)*1+lsi)*1]), &(stack[((hsi*49+4774)*1+lsi)*1]), &(stack[((hsi*49+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2025)*1+lsi)*1]),&(stack[((hsi*225+7537)*1+lsi)*1]),225);
CR_aB_g010__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*225+7762)*1+lsi)*1]), &(stack[((hsi*49+6219)*1+lsi)*1]), &(stack[((hsi*49+4774)*1+lsi)*1]), &(stack[((hsi*49+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+1800)*1+lsi)*1]),&(stack[((hsi*225+7762)*1+lsi)*1]),225);
CR_aB_g011__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*225+7987)*1+lsi)*1]), &(stack[((hsi*48+7039)*1+lsi)*1]), &(stack[((hsi*48+6991)*1+lsi)*1]), &(stack[((hsi*48+6943)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+1575)*1+lsi)*1]),&(stack[((hsi*225+7987)*1+lsi)*1]),225);
CR_aB_g020__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*225+8212)*1+lsi)*1]), &(stack[((hsi*48+7039)*1+lsi)*1]), &(stack[((hsi*48+6991)*1+lsi)*1]), &(stack[((hsi*48+6943)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+1350)*1+lsi)*1]),&(stack[((hsi*225+8212)*1+lsi)*1]),225);
CR_aB_g100__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*225+8437)*1+lsi)*1]), &(stack[((hsi*49+6219)*1+lsi)*1]), &(stack[((hsi*49+4774)*1+lsi)*1]), &(stack[((hsi*49+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+1125)*1+lsi)*1]),&(stack[((hsi*225+8437)*1+lsi)*1]),225);
CR_aB_g100__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*225+8662)*1+lsi)*1]), &(stack[((hsi*49+6219)*1+lsi)*1]), &(stack[((hsi*49+4774)*1+lsi)*1]), &(stack[((hsi*49+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+900)*1+lsi)*1]),&(stack[((hsi*225+8662)*1+lsi)*1]),225);
CR_aB_g100__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*225+8887)*1+lsi)*1]), &(stack[((hsi*49+6219)*1+lsi)*1]), &(stack[((hsi*49+4774)*1+lsi)*1]), &(stack[((hsi*49+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+675)*1+lsi)*1]),&(stack[((hsi*225+8887)*1+lsi)*1]),225);
CR_aB_g101__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*225+9112)*1+lsi)*1]), &(stack[((hsi*48+7039)*1+lsi)*1]), &(stack[((hsi*48+6991)*1+lsi)*1]), &(stack[((hsi*48+6943)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+450)*1+lsi)*1]),&(stack[((hsi*225+9112)*1+lsi)*1]),225);
CR_aB_g110__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*225+9337)*1+lsi)*1]), &(stack[((hsi*48+7039)*1+lsi)*1]), &(stack[((hsi*48+6991)*1+lsi)*1]), &(stack[((hsi*48+6943)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+225)*1+lsi)*1]),&(stack[((hsi*225+9337)*1+lsi)*1]),225);
CR_aB_g200__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*225+9562)*1+lsi)*1]), &(stack[((hsi*48+7039)*1+lsi)*1]), &(stack[((hsi*48+6991)*1+lsi)*1]), &(stack[((hsi*48+6943)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+0)*1+lsi)*1]),&(stack[((hsi*225+9562)*1+lsi)*1]),225);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4725 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
