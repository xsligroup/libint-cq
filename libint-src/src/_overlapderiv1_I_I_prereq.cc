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
#include <CR_aB_X6__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i001__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i010__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i100__0___Ab__up_.h>
#include <CR_aB_i001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <CR_aB_i010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <CR_aB_i100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _overlapderiv1_I_I_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*56+4704)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*56+4760)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*56+4816)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i001__0___Ab__up_(inteval, &(stack[((hsi*784+4872)*1+lsi)*1]), &(stack[((hsi*56+4816)*1+lsi)*1]), &(stack[((hsi*56+4760)*1+lsi)*1]), &(stack[((hsi*56+4704)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+3920)*1+lsi)*1]),&(stack[((hsi*784+4872)*1+lsi)*1]),784);
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i010__0___Ab__up_(inteval, &(stack[((hsi*784+5656)*1+lsi)*1]), &(stack[((hsi*56+4816)*1+lsi)*1]), &(stack[((hsi*56+4760)*1+lsi)*1]), &(stack[((hsi*56+4704)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+3136)*1+lsi)*1]),&(stack[((hsi*784+5656)*1+lsi)*1]),784);
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i100__0___Ab__up_(inteval, &(stack[((hsi*784+6440)*1+lsi)*1]), &(stack[((hsi*56+4816)*1+lsi)*1]), &(stack[((hsi*56+4760)*1+lsi)*1]), &(stack[((hsi*56+4704)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+2352)*1+lsi)*1]),&(stack[((hsi*784+6440)*1+lsi)*1]),784);
CR_aB_Z7__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*56+4704)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*56+4760)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*56+4816)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*784+7224)*1+lsi)*1]), &(stack[((hsi*56+4816)*1+lsi)*1]), &(stack[((hsi*56+4760)*1+lsi)*1]), &(stack[((hsi*56+4704)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+1568)*1+lsi)*1]),&(stack[((hsi*784+7224)*1+lsi)*1]),784);
CR_aB_i010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*784+8008)*1+lsi)*1]), &(stack[((hsi*56+4816)*1+lsi)*1]), &(stack[((hsi*56+4760)*1+lsi)*1]), &(stack[((hsi*56+4704)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+784)*1+lsi)*1]),&(stack[((hsi*784+8008)*1+lsi)*1]),784);
CR_aB_i100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*784+8792)*1+lsi)*1]), &(stack[((hsi*56+4816)*1+lsi)*1]), &(stack[((hsi*56+4760)*1+lsi)*1]), &(stack[((hsi*56+4704)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*784+0)*1+lsi)*1]),&(stack[((hsi*784+8792)*1+lsi)*1]),784);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4704 */
}

#ifdef __cplusplus
};
#endif