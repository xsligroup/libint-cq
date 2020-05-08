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
#include <CR_aB_X6__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_s001__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_s010__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_s100__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_H_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*21+126)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*21+147)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*21+168)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___Kinetic_s001__0___Ab__up_(inteval, &(stack[((hsi*21+189)*1+lsi)*1]), &(stack[((hsi*21+168)*1+lsi)*1]), &(stack[((hsi*21+147)*1+lsi)*1]), &(stack[((hsi*21+126)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+105)*1+lsi)*1]),&(stack[((hsi*21+189)*1+lsi)*1]),21);
CR_aB_h__0___Kinetic_s010__0___Ab__up_(inteval, &(stack[((hsi*21+210)*1+lsi)*1]), &(stack[((hsi*21+168)*1+lsi)*1]), &(stack[((hsi*21+147)*1+lsi)*1]), &(stack[((hsi*21+126)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+84)*1+lsi)*1]),&(stack[((hsi*21+210)*1+lsi)*1]),21);
CR_aB_h__0___Kinetic_s100__0___Ab__up_(inteval, &(stack[((hsi*21+231)*1+lsi)*1]), &(stack[((hsi*21+168)*1+lsi)*1]), &(stack[((hsi*21+147)*1+lsi)*1]), &(stack[((hsi*21+126)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+63)*1+lsi)*1]),&(stack[((hsi*21+231)*1+lsi)*1]),21);
CR_aB_Z7__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*16+126)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*16+142)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*16+158)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*21+252)*1+lsi)*1]), &(stack[((hsi*16+158)*1+lsi)*1]), &(stack[((hsi*16+142)*1+lsi)*1]), &(stack[((hsi*16+126)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+42)*1+lsi)*1]),&(stack[((hsi*21+252)*1+lsi)*1]),21);
CR_aB_h010__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*21+273)*1+lsi)*1]), &(stack[((hsi*16+158)*1+lsi)*1]), &(stack[((hsi*16+142)*1+lsi)*1]), &(stack[((hsi*16+126)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+21)*1+lsi)*1]),&(stack[((hsi*21+273)*1+lsi)*1]),21);
CR_aB_h100__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*21+294)*1+lsi)*1]), &(stack[((hsi*16+158)*1+lsi)*1]), &(stack[((hsi*16+142)*1+lsi)*1]), &(stack[((hsi*16+126)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+0)*1+lsi)*1]),&(stack[((hsi*21+294)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 126 */
}

#ifdef __cplusplus
};
#endif
