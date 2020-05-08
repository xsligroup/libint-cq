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
#include <CR_aB_X6__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s001__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s010__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s100__0___Ab__up_.h>
#include <CR_aB_i001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_i100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _overlapderiv1_I_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*14+168)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*14+182)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*14+196)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s001__0___Ab__up_(inteval, &(stack[((hsi*28+210)*1+lsi)*1]), &(stack[((hsi*14+196)*1+lsi)*1]), &(stack[((hsi*14+182)*1+lsi)*1]), &(stack[((hsi*14+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+140)*1+lsi)*1]),&(stack[((hsi*28+210)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s010__0___Ab__up_(inteval, &(stack[((hsi*28+238)*1+lsi)*1]), &(stack[((hsi*14+196)*1+lsi)*1]), &(stack[((hsi*14+182)*1+lsi)*1]), &(stack[((hsi*14+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+112)*1+lsi)*1]),&(stack[((hsi*28+238)*1+lsi)*1]),28);
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s100__0___Ab__up_(inteval, &(stack[((hsi*28+266)*1+lsi)*1]), &(stack[((hsi*14+196)*1+lsi)*1]), &(stack[((hsi*14+182)*1+lsi)*1]), &(stack[((hsi*14+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+84)*1+lsi)*1]),&(stack[((hsi*28+266)*1+lsi)*1]),28);
CR_aB_Z7__0___Overlap_Z0__0___Ab__up_(inteval, &(stack[((hsi*8+168)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y0__0___Ab__up_(inteval, &(stack[((hsi*8+176)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X0__0___Ab__up_(inteval, &(stack[((hsi*8+184)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+294)*1+lsi)*1]), &(stack[((hsi*8+184)*1+lsi)*1]), &(stack[((hsi*8+176)*1+lsi)*1]), &(stack[((hsi*8+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+56)*1+lsi)*1]),&(stack[((hsi*28+294)*1+lsi)*1]),28);
CR_aB_i010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+322)*1+lsi)*1]), &(stack[((hsi*8+184)*1+lsi)*1]), &(stack[((hsi*8+176)*1+lsi)*1]), &(stack[((hsi*8+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+28)*1+lsi)*1]),&(stack[((hsi*28+322)*1+lsi)*1]),28);
CR_aB_i100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(stack[((hsi*28+350)*1+lsi)*1]), &(stack[((hsi*8+184)*1+lsi)*1]), &(stack[((hsi*8+176)*1+lsi)*1]), &(stack[((hsi*8+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+350)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 168 */
}

#ifdef __cplusplus
};
#endif
