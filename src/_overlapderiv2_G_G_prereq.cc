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
#include <CR_aB_X4__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_G_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*35+4725)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*35+4760)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*35+4795)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_(inteval, &(stack[((hsi*225+4830)*1+lsi)*1]), &(stack[((hsi*35+4795)*1+lsi)*1]), &(stack[((hsi*35+4760)*1+lsi)*1]), &(stack[((hsi*35+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+4500)*1+lsi)*1]),&(stack[((hsi*225+4830)*1+lsi)*1]),225);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_(inteval, &(stack[((hsi*225+5055)*1+lsi)*1]), &(stack[((hsi*35+4795)*1+lsi)*1]), &(stack[((hsi*35+4760)*1+lsi)*1]), &(stack[((hsi*35+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+4275)*1+lsi)*1]),&(stack[((hsi*225+5055)*1+lsi)*1]),225);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_(inteval, &(stack[((hsi*225+5280)*1+lsi)*1]), &(stack[((hsi*35+4795)*1+lsi)*1]), &(stack[((hsi*35+4760)*1+lsi)*1]), &(stack[((hsi*35+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+4050)*1+lsi)*1]),&(stack[((hsi*225+5280)*1+lsi)*1]),225);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_(inteval, &(stack[((hsi*225+5505)*1+lsi)*1]), &(stack[((hsi*35+4795)*1+lsi)*1]), &(stack[((hsi*35+4760)*1+lsi)*1]), &(stack[((hsi*35+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+3825)*1+lsi)*1]),&(stack[((hsi*225+5505)*1+lsi)*1]),225);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_(inteval, &(stack[((hsi*225+5730)*1+lsi)*1]), &(stack[((hsi*35+4795)*1+lsi)*1]), &(stack[((hsi*35+4760)*1+lsi)*1]), &(stack[((hsi*35+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+3600)*1+lsi)*1]),&(stack[((hsi*225+5730)*1+lsi)*1]),225);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_(inteval, &(stack[((hsi*225+5955)*1+lsi)*1]), &(stack[((hsi*35+4795)*1+lsi)*1]), &(stack[((hsi*35+4760)*1+lsi)*1]), &(stack[((hsi*35+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+3375)*1+lsi)*1]),&(stack[((hsi*225+5955)*1+lsi)*1]),225);
CR_aB_Z5__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*36+4725)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*36+4761)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*36+6180)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*225+6216)*1+lsi)*1]), &(stack[((hsi*36+6180)*1+lsi)*1]), &(stack[((hsi*36+4761)*1+lsi)*1]), &(stack[((hsi*36+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+3150)*1+lsi)*1]),&(stack[((hsi*225+6216)*1+lsi)*1]),225);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*225+6441)*1+lsi)*1]), &(stack[((hsi*36+6180)*1+lsi)*1]), &(stack[((hsi*36+4761)*1+lsi)*1]), &(stack[((hsi*36+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2925)*1+lsi)*1]),&(stack[((hsi*225+6441)*1+lsi)*1]),225);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*225+6666)*1+lsi)*1]), &(stack[((hsi*36+6180)*1+lsi)*1]), &(stack[((hsi*36+4761)*1+lsi)*1]), &(stack[((hsi*36+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2700)*1+lsi)*1]),&(stack[((hsi*225+6666)*1+lsi)*1]),225);
CR_aB_Z6__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*35+6891)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*35+6926)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*35+6961)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*225+6996)*1+lsi)*1]), &(stack[((hsi*35+6961)*1+lsi)*1]), &(stack[((hsi*35+6926)*1+lsi)*1]), &(stack[((hsi*35+6891)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2475)*1+lsi)*1]),&(stack[((hsi*225+6996)*1+lsi)*1]),225);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*225+7221)*1+lsi)*1]), &(stack[((hsi*36+6180)*1+lsi)*1]), &(stack[((hsi*36+4761)*1+lsi)*1]), &(stack[((hsi*36+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2250)*1+lsi)*1]),&(stack[((hsi*225+7221)*1+lsi)*1]),225);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*225+7446)*1+lsi)*1]), &(stack[((hsi*36+6180)*1+lsi)*1]), &(stack[((hsi*36+4761)*1+lsi)*1]), &(stack[((hsi*36+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+2025)*1+lsi)*1]),&(stack[((hsi*225+7446)*1+lsi)*1]),225);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*225+7671)*1+lsi)*1]), &(stack[((hsi*36+6180)*1+lsi)*1]), &(stack[((hsi*36+4761)*1+lsi)*1]), &(stack[((hsi*36+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+1800)*1+lsi)*1]),&(stack[((hsi*225+7671)*1+lsi)*1]),225);
CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*225+7896)*1+lsi)*1]), &(stack[((hsi*35+6961)*1+lsi)*1]), &(stack[((hsi*35+6926)*1+lsi)*1]), &(stack[((hsi*35+6891)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+1575)*1+lsi)*1]),&(stack[((hsi*225+7896)*1+lsi)*1]),225);
CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*225+8121)*1+lsi)*1]), &(stack[((hsi*35+6961)*1+lsi)*1]), &(stack[((hsi*35+6926)*1+lsi)*1]), &(stack[((hsi*35+6891)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+1350)*1+lsi)*1]),&(stack[((hsi*225+8121)*1+lsi)*1]),225);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*225+8346)*1+lsi)*1]), &(stack[((hsi*36+6180)*1+lsi)*1]), &(stack[((hsi*36+4761)*1+lsi)*1]), &(stack[((hsi*36+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+1125)*1+lsi)*1]),&(stack[((hsi*225+8346)*1+lsi)*1]),225);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*225+8571)*1+lsi)*1]), &(stack[((hsi*36+6180)*1+lsi)*1]), &(stack[((hsi*36+4761)*1+lsi)*1]), &(stack[((hsi*36+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+900)*1+lsi)*1]),&(stack[((hsi*225+8571)*1+lsi)*1]),225);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*225+8796)*1+lsi)*1]), &(stack[((hsi*36+6180)*1+lsi)*1]), &(stack[((hsi*36+4761)*1+lsi)*1]), &(stack[((hsi*36+4725)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+675)*1+lsi)*1]),&(stack[((hsi*225+8796)*1+lsi)*1]),225);
CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*225+9021)*1+lsi)*1]), &(stack[((hsi*35+6961)*1+lsi)*1]), &(stack[((hsi*35+6926)*1+lsi)*1]), &(stack[((hsi*35+6891)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+450)*1+lsi)*1]),&(stack[((hsi*225+9021)*1+lsi)*1]),225);
CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*225+9246)*1+lsi)*1]), &(stack[((hsi*35+6961)*1+lsi)*1]), &(stack[((hsi*35+6926)*1+lsi)*1]), &(stack[((hsi*35+6891)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+225)*1+lsi)*1]),&(stack[((hsi*225+9246)*1+lsi)*1]),225);
CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*225+9471)*1+lsi)*1]), &(stack[((hsi*35+6961)*1+lsi)*1]), &(stack[((hsi*35+6926)*1+lsi)*1]), &(stack[((hsi*35+6891)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+0)*1+lsi)*1]),&(stack[((hsi*225+9471)*1+lsi)*1]),225);
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
