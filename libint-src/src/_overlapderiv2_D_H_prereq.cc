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
#include <CR_aB_X2__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_.h>
#include <CR_aB_d001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_d001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_d001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_d002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_d010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_d010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_d010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_d011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_d020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_d100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_d100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_d100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_d101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_d110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_d200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_D_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z2__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*24+2646)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*24+2670)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*24+2694)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_(inteval, &(stack[((hsi*126+2718)*1+lsi)*1]), &(stack[((hsi*24+2694)*1+lsi)*1]), &(stack[((hsi*24+2670)*1+lsi)*1]), &(stack[((hsi*24+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2520)*1+lsi)*1]),&(stack[((hsi*126+2718)*1+lsi)*1]),126);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_(inteval, &(stack[((hsi*126+2844)*1+lsi)*1]), &(stack[((hsi*24+2694)*1+lsi)*1]), &(stack[((hsi*24+2670)*1+lsi)*1]), &(stack[((hsi*24+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2394)*1+lsi)*1]),&(stack[((hsi*126+2844)*1+lsi)*1]),126);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_(inteval, &(stack[((hsi*126+2970)*1+lsi)*1]), &(stack[((hsi*24+2694)*1+lsi)*1]), &(stack[((hsi*24+2670)*1+lsi)*1]), &(stack[((hsi*24+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2268)*1+lsi)*1]),&(stack[((hsi*126+2970)*1+lsi)*1]),126);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_(inteval, &(stack[((hsi*126+3096)*1+lsi)*1]), &(stack[((hsi*24+2694)*1+lsi)*1]), &(stack[((hsi*24+2670)*1+lsi)*1]), &(stack[((hsi*24+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2142)*1+lsi)*1]),&(stack[((hsi*126+3096)*1+lsi)*1]),126);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_(inteval, &(stack[((hsi*126+3222)*1+lsi)*1]), &(stack[((hsi*24+2694)*1+lsi)*1]), &(stack[((hsi*24+2670)*1+lsi)*1]), &(stack[((hsi*24+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2016)*1+lsi)*1]),&(stack[((hsi*126+3222)*1+lsi)*1]),126);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_(inteval, &(stack[((hsi*126+3348)*1+lsi)*1]), &(stack[((hsi*24+2694)*1+lsi)*1]), &(stack[((hsi*24+2670)*1+lsi)*1]), &(stack[((hsi*24+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1890)*1+lsi)*1]),&(stack[((hsi*126+3348)*1+lsi)*1]),126);
CR_aB_Z3__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*28+2646)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*28+2674)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*28+3474)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*126+3502)*1+lsi)*1]), &(stack[((hsi*28+3474)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1764)*1+lsi)*1]),&(stack[((hsi*126+3502)*1+lsi)*1]),126);
CR_aB_d001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*126+3628)*1+lsi)*1]), &(stack[((hsi*28+3474)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1638)*1+lsi)*1]),&(stack[((hsi*126+3628)*1+lsi)*1]),126);
CR_aB_d001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*126+3754)*1+lsi)*1]), &(stack[((hsi*28+3474)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1512)*1+lsi)*1]),&(stack[((hsi*126+3754)*1+lsi)*1]),126);
CR_aB_Z4__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*30+3880)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*30+3910)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*30+3940)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*126+3970)*1+lsi)*1]), &(stack[((hsi*30+3940)*1+lsi)*1]), &(stack[((hsi*30+3910)*1+lsi)*1]), &(stack[((hsi*30+3880)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1386)*1+lsi)*1]),&(stack[((hsi*126+3970)*1+lsi)*1]),126);
CR_aB_d010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*126+4096)*1+lsi)*1]), &(stack[((hsi*28+3474)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1260)*1+lsi)*1]),&(stack[((hsi*126+4096)*1+lsi)*1]),126);
CR_aB_d010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*126+4222)*1+lsi)*1]), &(stack[((hsi*28+3474)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1134)*1+lsi)*1]),&(stack[((hsi*126+4222)*1+lsi)*1]),126);
CR_aB_d010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*126+4348)*1+lsi)*1]), &(stack[((hsi*28+3474)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1008)*1+lsi)*1]),&(stack[((hsi*126+4348)*1+lsi)*1]),126);
CR_aB_d011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*126+4474)*1+lsi)*1]), &(stack[((hsi*30+3940)*1+lsi)*1]), &(stack[((hsi*30+3910)*1+lsi)*1]), &(stack[((hsi*30+3880)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+882)*1+lsi)*1]),&(stack[((hsi*126+4474)*1+lsi)*1]),126);
CR_aB_d020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*126+4600)*1+lsi)*1]), &(stack[((hsi*30+3940)*1+lsi)*1]), &(stack[((hsi*30+3910)*1+lsi)*1]), &(stack[((hsi*30+3880)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+756)*1+lsi)*1]),&(stack[((hsi*126+4600)*1+lsi)*1]),126);
CR_aB_d100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*126+4726)*1+lsi)*1]), &(stack[((hsi*28+3474)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+630)*1+lsi)*1]),&(stack[((hsi*126+4726)*1+lsi)*1]),126);
CR_aB_d100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*126+4852)*1+lsi)*1]), &(stack[((hsi*28+3474)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+504)*1+lsi)*1]),&(stack[((hsi*126+4852)*1+lsi)*1]),126);
CR_aB_d100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*126+4978)*1+lsi)*1]), &(stack[((hsi*28+3474)*1+lsi)*1]), &(stack[((hsi*28+2674)*1+lsi)*1]), &(stack[((hsi*28+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+378)*1+lsi)*1]),&(stack[((hsi*126+4978)*1+lsi)*1]),126);
CR_aB_d101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*126+5104)*1+lsi)*1]), &(stack[((hsi*30+3940)*1+lsi)*1]), &(stack[((hsi*30+3910)*1+lsi)*1]), &(stack[((hsi*30+3880)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+252)*1+lsi)*1]),&(stack[((hsi*126+5104)*1+lsi)*1]),126);
CR_aB_d110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*126+5230)*1+lsi)*1]), &(stack[((hsi*30+3940)*1+lsi)*1]), &(stack[((hsi*30+3910)*1+lsi)*1]), &(stack[((hsi*30+3880)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+126)*1+lsi)*1]),&(stack[((hsi*126+5230)*1+lsi)*1]),126);
CR_aB_d200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*126+5356)*1+lsi)*1]), &(stack[((hsi*30+3940)*1+lsi)*1]), &(stack[((hsi*30+3910)*1+lsi)*1]), &(stack[((hsi*30+3880)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+0)*1+lsi)*1]),&(stack[((hsi*126+5356)*1+lsi)*1]),126);
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
