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
#include <CR_aB_X4__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f002__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f011__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f020__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f101__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f110__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f200__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_.h>
#include <CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_.h>
#include <CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_.h>
#include <CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_G_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*30+3150)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*30+3180)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*30+3210)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f002__0___Ab__up_(inteval, &(stack[((hsi*150+3240)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+3000)*1+lsi)*1]),&(stack[((hsi*150+3240)*1+lsi)*1]),150);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f011__0___Ab__up_(inteval, &(stack[((hsi*150+3390)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2850)*1+lsi)*1]),&(stack[((hsi*150+3390)*1+lsi)*1]),150);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f020__0___Ab__up_(inteval, &(stack[((hsi*150+3540)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2700)*1+lsi)*1]),&(stack[((hsi*150+3540)*1+lsi)*1]),150);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f101__0___Ab__up_(inteval, &(stack[((hsi*150+3690)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2550)*1+lsi)*1]),&(stack[((hsi*150+3690)*1+lsi)*1]),150);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f110__0___Ab__up_(inteval, &(stack[((hsi*150+3840)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2400)*1+lsi)*1]),&(stack[((hsi*150+3840)*1+lsi)*1]),150);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f200__0___Ab__up_(inteval, &(stack[((hsi*150+3990)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2250)*1+lsi)*1]),&(stack[((hsi*150+3990)*1+lsi)*1]),150);
CR_aB_Z5__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*30+3150)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*30+3180)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*30+3210)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_(inteval, &(stack[((hsi*150+4140)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2100)*1+lsi)*1]),&(stack[((hsi*150+4140)*1+lsi)*1]),150);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_(inteval, &(stack[((hsi*150+4290)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1950)*1+lsi)*1]),&(stack[((hsi*150+4290)*1+lsi)*1]),150);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_(inteval, &(stack[((hsi*150+4440)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1800)*1+lsi)*1]),&(stack[((hsi*150+4440)*1+lsi)*1]),150);
CR_aB_Z6__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*28+4590)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*28+4618)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*28+4646)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*150+4674)*1+lsi)*1]), &(stack[((hsi*28+4646)*1+lsi)*1]), &(stack[((hsi*28+4618)*1+lsi)*1]), &(stack[((hsi*28+4590)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1650)*1+lsi)*1]),&(stack[((hsi*150+4674)*1+lsi)*1]),150);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_(inteval, &(stack[((hsi*150+4824)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1500)*1+lsi)*1]),&(stack[((hsi*150+4824)*1+lsi)*1]),150);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_(inteval, &(stack[((hsi*150+4974)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1350)*1+lsi)*1]),&(stack[((hsi*150+4974)*1+lsi)*1]),150);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_(inteval, &(stack[((hsi*150+5124)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1200)*1+lsi)*1]),&(stack[((hsi*150+5124)*1+lsi)*1]),150);
CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*150+5274)*1+lsi)*1]), &(stack[((hsi*28+4646)*1+lsi)*1]), &(stack[((hsi*28+4618)*1+lsi)*1]), &(stack[((hsi*28+4590)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1050)*1+lsi)*1]),&(stack[((hsi*150+5274)*1+lsi)*1]),150);
CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*150+5424)*1+lsi)*1]), &(stack[((hsi*28+4646)*1+lsi)*1]), &(stack[((hsi*28+4618)*1+lsi)*1]), &(stack[((hsi*28+4590)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+900)*1+lsi)*1]),&(stack[((hsi*150+5424)*1+lsi)*1]),150);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_(inteval, &(stack[((hsi*150+5574)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+750)*1+lsi)*1]),&(stack[((hsi*150+5574)*1+lsi)*1]),150);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_(inteval, &(stack[((hsi*150+5724)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+600)*1+lsi)*1]),&(stack[((hsi*150+5724)*1+lsi)*1]),150);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_(inteval, &(stack[((hsi*150+5874)*1+lsi)*1]), &(stack[((hsi*30+3210)*1+lsi)*1]), &(stack[((hsi*30+3180)*1+lsi)*1]), &(stack[((hsi*30+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+450)*1+lsi)*1]),&(stack[((hsi*150+5874)*1+lsi)*1]),150);
CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*150+6024)*1+lsi)*1]), &(stack[((hsi*28+4646)*1+lsi)*1]), &(stack[((hsi*28+4618)*1+lsi)*1]), &(stack[((hsi*28+4590)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+300)*1+lsi)*1]),&(stack[((hsi*150+6024)*1+lsi)*1]),150);
CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*150+6174)*1+lsi)*1]), &(stack[((hsi*28+4646)*1+lsi)*1]), &(stack[((hsi*28+4618)*1+lsi)*1]), &(stack[((hsi*28+4590)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+150)*1+lsi)*1]),&(stack[((hsi*150+6174)*1+lsi)*1]),150);
CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*150+6324)*1+lsi)*1]), &(stack[((hsi*28+4646)*1+lsi)*1]), &(stack[((hsi*28+4618)*1+lsi)*1]), &(stack[((hsi*28+4590)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+0)*1+lsi)*1]),&(stack[((hsi*150+6324)*1+lsi)*1]),150);
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
