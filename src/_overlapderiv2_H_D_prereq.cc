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
#include <CR_aB_X5__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d002__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d011__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d020__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d101__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d110__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d200__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_.h>
#include <CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_.h>
#include <CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_.h>
#include <CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_H_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*30+2646)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*30+2676)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*30+2706)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d002__0___Ab__up_(inteval, &(stack[((hsi*126+2736)*1+lsi)*1]), &(stack[((hsi*30+2706)*1+lsi)*1]), &(stack[((hsi*30+2676)*1+lsi)*1]), &(stack[((hsi*30+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2520)*1+lsi)*1]),&(stack[((hsi*126+2736)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d011__0___Ab__up_(inteval, &(stack[((hsi*126+2862)*1+lsi)*1]), &(stack[((hsi*30+2706)*1+lsi)*1]), &(stack[((hsi*30+2676)*1+lsi)*1]), &(stack[((hsi*30+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2394)*1+lsi)*1]),&(stack[((hsi*126+2862)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d020__0___Ab__up_(inteval, &(stack[((hsi*126+2988)*1+lsi)*1]), &(stack[((hsi*30+2706)*1+lsi)*1]), &(stack[((hsi*30+2676)*1+lsi)*1]), &(stack[((hsi*30+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2268)*1+lsi)*1]),&(stack[((hsi*126+2988)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d101__0___Ab__up_(inteval, &(stack[((hsi*126+3114)*1+lsi)*1]), &(stack[((hsi*30+2706)*1+lsi)*1]), &(stack[((hsi*30+2676)*1+lsi)*1]), &(stack[((hsi*30+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2142)*1+lsi)*1]),&(stack[((hsi*126+3114)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d110__0___Ab__up_(inteval, &(stack[((hsi*126+3240)*1+lsi)*1]), &(stack[((hsi*30+2706)*1+lsi)*1]), &(stack[((hsi*30+2676)*1+lsi)*1]), &(stack[((hsi*30+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2016)*1+lsi)*1]),&(stack[((hsi*126+3240)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d200__0___Ab__up_(inteval, &(stack[((hsi*126+3366)*1+lsi)*1]), &(stack[((hsi*30+2706)*1+lsi)*1]), &(stack[((hsi*30+2676)*1+lsi)*1]), &(stack[((hsi*30+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1890)*1+lsi)*1]),&(stack[((hsi*126+3366)*1+lsi)*1]),126);
CR_aB_Z6__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*28+2646)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*28+2674)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*28+2702)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_(inteval, &(stack[((hsi*126+3492)*1+lsi)*1]), &(stack[((hsi*28+2702)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1764)*1+lsi)*1]),&(stack[((hsi*126+3492)*1+lsi)*1]),126);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_(inteval, &(stack[((hsi*126+3618)*1+lsi)*1]), &(stack[((hsi*28+2702)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1638)*1+lsi)*1]),&(stack[((hsi*126+3618)*1+lsi)*1]),126);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_(inteval, &(stack[((hsi*126+3744)*1+lsi)*1]), &(stack[((hsi*28+2702)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1512)*1+lsi)*1]),&(stack[((hsi*126+3744)*1+lsi)*1]),126);
CR_aB_Z7__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*24+3870)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*24+3894)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*24+3918)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+3942)*1+lsi)*1]), &(stack[((hsi*24+3918)*1+lsi)*1]), &(stack[((hsi*24+3894)*1+lsi)*1]), &(stack[((hsi*24+3870)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1386)*1+lsi)*1]),&(stack[((hsi*126+3942)*1+lsi)*1]),126);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_(inteval, &(stack[((hsi*126+4068)*1+lsi)*1]), &(stack[((hsi*28+2702)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1260)*1+lsi)*1]),&(stack[((hsi*126+4068)*1+lsi)*1]),126);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_(inteval, &(stack[((hsi*126+4194)*1+lsi)*1]), &(stack[((hsi*28+2702)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1134)*1+lsi)*1]),&(stack[((hsi*126+4194)*1+lsi)*1]),126);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_(inteval, &(stack[((hsi*126+4320)*1+lsi)*1]), &(stack[((hsi*28+2702)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1008)*1+lsi)*1]),&(stack[((hsi*126+4320)*1+lsi)*1]),126);
CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+4446)*1+lsi)*1]), &(stack[((hsi*24+3918)*1+lsi)*1]), &(stack[((hsi*24+3894)*1+lsi)*1]), &(stack[((hsi*24+3870)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+882)*1+lsi)*1]),&(stack[((hsi*126+4446)*1+lsi)*1]),126);
CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+4572)*1+lsi)*1]), &(stack[((hsi*24+3918)*1+lsi)*1]), &(stack[((hsi*24+3894)*1+lsi)*1]), &(stack[((hsi*24+3870)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+756)*1+lsi)*1]),&(stack[((hsi*126+4572)*1+lsi)*1]),126);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_(inteval, &(stack[((hsi*126+4698)*1+lsi)*1]), &(stack[((hsi*28+2702)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+630)*1+lsi)*1]),&(stack[((hsi*126+4698)*1+lsi)*1]),126);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_(inteval, &(stack[((hsi*126+4824)*1+lsi)*1]), &(stack[((hsi*28+2702)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+504)*1+lsi)*1]),&(stack[((hsi*126+4824)*1+lsi)*1]),126);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_(inteval, &(stack[((hsi*126+4950)*1+lsi)*1]), &(stack[((hsi*28+2702)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+378)*1+lsi)*1]),&(stack[((hsi*126+4950)*1+lsi)*1]),126);
CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+5076)*1+lsi)*1]), &(stack[((hsi*24+3918)*1+lsi)*1]), &(stack[((hsi*24+3894)*1+lsi)*1]), &(stack[((hsi*24+3870)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+252)*1+lsi)*1]),&(stack[((hsi*126+5076)*1+lsi)*1]),126);
CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+5202)*1+lsi)*1]), &(stack[((hsi*24+3918)*1+lsi)*1]), &(stack[((hsi*24+3894)*1+lsi)*1]), &(stack[((hsi*24+3870)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+126)*1+lsi)*1]),&(stack[((hsi*126+5202)*1+lsi)*1]),126);
CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+5328)*1+lsi)*1]), &(stack[((hsi*24+3918)*1+lsi)*1]), &(stack[((hsi*24+3894)*1+lsi)*1]), &(stack[((hsi*24+3870)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+0)*1+lsi)*1]),&(stack[((hsi*126+5328)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2646 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
