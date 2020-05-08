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
#include <CR_aB_X5__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_G_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*42+1350)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*42+1392)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*42+1434)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*225+1476)*1+lsi)*1]), &(stack[((hsi*42+1434)*1+lsi)*1]), &(stack[((hsi*42+1392)*1+lsi)*1]), &(stack[((hsi*42+1350)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+1125)*1+lsi)*1]),&(stack[((hsi*225+1476)*1+lsi)*1]),225);
CR_aB_g__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*225+1701)*1+lsi)*1]), &(stack[((hsi*42+1434)*1+lsi)*1]), &(stack[((hsi*42+1392)*1+lsi)*1]), &(stack[((hsi*42+1350)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+900)*1+lsi)*1]),&(stack[((hsi*225+1701)*1+lsi)*1]),225);
CR_aB_g__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*225+1926)*1+lsi)*1]), &(stack[((hsi*42+1434)*1+lsi)*1]), &(stack[((hsi*42+1392)*1+lsi)*1]), &(stack[((hsi*42+1350)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+675)*1+lsi)*1]),&(stack[((hsi*225+1926)*1+lsi)*1]),225);
CR_aB_Z6__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*42+1350)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*42+1392)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*42+1434)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*225+2151)*1+lsi)*1]), &(stack[((hsi*42+1434)*1+lsi)*1]), &(stack[((hsi*42+1392)*1+lsi)*1]), &(stack[((hsi*42+1350)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+450)*1+lsi)*1]),&(stack[((hsi*225+2151)*1+lsi)*1]),225);
CR_aB_g010__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*225+2376)*1+lsi)*1]), &(stack[((hsi*42+1434)*1+lsi)*1]), &(stack[((hsi*42+1392)*1+lsi)*1]), &(stack[((hsi*42+1350)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+225)*1+lsi)*1]),&(stack[((hsi*225+2376)*1+lsi)*1]),225);
CR_aB_g100__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*225+2601)*1+lsi)*1]), &(stack[((hsi*42+1434)*1+lsi)*1]), &(stack[((hsi*42+1392)*1+lsi)*1]), &(stack[((hsi*42+1350)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*225+0)*1+lsi)*1]),&(stack[((hsi*225+2601)*1+lsi)*1]),225);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1350 */
}

#ifdef __cplusplus
};
#endif
