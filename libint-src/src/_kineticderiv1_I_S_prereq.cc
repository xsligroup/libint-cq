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
#include <CR_aB_X7__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_i__0___Kinetic_s001__0___Ab__up_.h>
#include <CR_aB_i__0___Kinetic_s010__0___Ab__up_.h>
#include <CR_aB_i__0___Kinetic_s100__0___Ab__up_.h>
#include <CR_aB_i001__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_i010__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_i100__0___Kinetic_s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_I_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*24+168)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*24+192)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*24+216)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___Kinetic_s001__0___Ab__up_(inteval, &(stack[((hsi*28+240)*1+lsi)*1]), &(stack[((hsi*24+216)*1+lsi)*1]), &(stack[((hsi*24+192)*1+lsi)*1]), &(stack[((hsi*24+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+140)*1+lsi)*1]),&(stack[((hsi*28+240)*1+lsi)*1]),28);
CR_aB_i__0___Kinetic_s010__0___Ab__up_(inteval, &(stack[((hsi*28+268)*1+lsi)*1]), &(stack[((hsi*24+216)*1+lsi)*1]), &(stack[((hsi*24+192)*1+lsi)*1]), &(stack[((hsi*24+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+112)*1+lsi)*1]),&(stack[((hsi*28+268)*1+lsi)*1]),28);
CR_aB_i__0___Kinetic_s100__0___Ab__up_(inteval, &(stack[((hsi*28+296)*1+lsi)*1]), &(stack[((hsi*24+216)*1+lsi)*1]), &(stack[((hsi*24+192)*1+lsi)*1]), &(stack[((hsi*24+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+84)*1+lsi)*1]),&(stack[((hsi*28+296)*1+lsi)*1]),28);
CR_aB_Z8__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*18+168)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*18+186)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*18+204)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i001__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*28+324)*1+lsi)*1]), &(stack[((hsi*18+204)*1+lsi)*1]), &(stack[((hsi*18+186)*1+lsi)*1]), &(stack[((hsi*18+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+56)*1+lsi)*1]),&(stack[((hsi*28+324)*1+lsi)*1]),28);
CR_aB_i010__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*28+352)*1+lsi)*1]), &(stack[((hsi*18+204)*1+lsi)*1]), &(stack[((hsi*18+186)*1+lsi)*1]), &(stack[((hsi*18+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+28)*1+lsi)*1]),&(stack[((hsi*28+352)*1+lsi)*1]),28);
CR_aB_i100__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*28+380)*1+lsi)*1]), &(stack[((hsi*18+204)*1+lsi)*1]), &(stack[((hsi*18+186)*1+lsi)*1]), &(stack[((hsi*18+168)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+380)*1+lsi)*1]),28);
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
