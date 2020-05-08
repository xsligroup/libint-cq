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
#include <CR_aB_X5__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k001__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k010__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k100__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _overlapderiv1_H_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*54+4536)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*54+4590)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*54+4644)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k001__0___Ab__up_(inteval, &(stack[((hsi*756+4698)*1+lsi)*1]), &(stack[((hsi*54+4644)*1+lsi)*1]), &(stack[((hsi*54+4590)*1+lsi)*1]), &(stack[((hsi*54+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+3780)*1+lsi)*1]),&(stack[((hsi*756+4698)*1+lsi)*1]),756);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k010__0___Ab__up_(inteval, &(stack[((hsi*756+5454)*1+lsi)*1]), &(stack[((hsi*54+4644)*1+lsi)*1]), &(stack[((hsi*54+4590)*1+lsi)*1]), &(stack[((hsi*54+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+3024)*1+lsi)*1]),&(stack[((hsi*756+5454)*1+lsi)*1]),756);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k100__0___Ab__up_(inteval, &(stack[((hsi*756+6210)*1+lsi)*1]), &(stack[((hsi*54+4644)*1+lsi)*1]), &(stack[((hsi*54+4590)*1+lsi)*1]), &(stack[((hsi*54+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+2268)*1+lsi)*1]),&(stack[((hsi*756+6210)*1+lsi)*1]),756);
CR_aB_Z6__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*56+4536)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*56+4592)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*56+6966)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*756+7022)*1+lsi)*1]), &(stack[((hsi*56+6966)*1+lsi)*1]), &(stack[((hsi*56+4592)*1+lsi)*1]), &(stack[((hsi*56+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+1512)*1+lsi)*1]),&(stack[((hsi*756+7022)*1+lsi)*1]),756);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*756+7778)*1+lsi)*1]), &(stack[((hsi*56+6966)*1+lsi)*1]), &(stack[((hsi*56+4592)*1+lsi)*1]), &(stack[((hsi*56+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+756)*1+lsi)*1]),&(stack[((hsi*756+7778)*1+lsi)*1]),756);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*756+8534)*1+lsi)*1]), &(stack[((hsi*56+6966)*1+lsi)*1]), &(stack[((hsi*56+4592)*1+lsi)*1]), &(stack[((hsi*56+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+0)*1+lsi)*1]),&(stack[((hsi*756+8534)*1+lsi)*1]),756);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4536 */
}

#ifdef __cplusplus
};
#endif
