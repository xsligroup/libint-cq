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
#include <CR_aB_X4__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_f__0___Kinetic_i001__0___Ab__up_.h>
#include <CR_aB_f__0___Kinetic_i010__0___Ab__up_.h>
#include <CR_aB_f__0___Kinetic_i100__0___Ab__up_.h>
#include <CR_aB_f001__0___Kinetic_i__0___Ab__up_.h>
#include <CR_aB_f010__0___Kinetic_i__0___Ab__up_.h>
#include <CR_aB_f100__0___Kinetic_i__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_F_I_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*45+1680)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*45+1725)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*45+1770)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___Kinetic_i001__0___Ab__up_(inteval, &(stack[((hsi*280+1815)*1+lsi)*1]), &(stack[((hsi*45+1770)*1+lsi)*1]), &(stack[((hsi*45+1725)*1+lsi)*1]), &(stack[((hsi*45+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+1400)*1+lsi)*1]),&(stack[((hsi*280+1815)*1+lsi)*1]),280);
CR_aB_f__0___Kinetic_i010__0___Ab__up_(inteval, &(stack[((hsi*280+2095)*1+lsi)*1]), &(stack[((hsi*45+1770)*1+lsi)*1]), &(stack[((hsi*45+1725)*1+lsi)*1]), &(stack[((hsi*45+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+1120)*1+lsi)*1]),&(stack[((hsi*280+2095)*1+lsi)*1]),280);
CR_aB_f__0___Kinetic_i100__0___Ab__up_(inteval, &(stack[((hsi*280+2375)*1+lsi)*1]), &(stack[((hsi*45+1770)*1+lsi)*1]), &(stack[((hsi*45+1725)*1+lsi)*1]), &(stack[((hsi*45+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+840)*1+lsi)*1]),&(stack[((hsi*280+2375)*1+lsi)*1]),280);
CR_aB_Z5__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*48+1680)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*48+1728)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*48+2655)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f001__0___Kinetic_i__0___Ab__up_(inteval, &(stack[((hsi*280+2703)*1+lsi)*1]), &(stack[((hsi*48+2655)*1+lsi)*1]), &(stack[((hsi*48+1728)*1+lsi)*1]), &(stack[((hsi*48+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+560)*1+lsi)*1]),&(stack[((hsi*280+2703)*1+lsi)*1]),280);
CR_aB_f010__0___Kinetic_i__0___Ab__up_(inteval, &(stack[((hsi*280+2983)*1+lsi)*1]), &(stack[((hsi*48+2655)*1+lsi)*1]), &(stack[((hsi*48+1728)*1+lsi)*1]), &(stack[((hsi*48+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+280)*1+lsi)*1]),&(stack[((hsi*280+2983)*1+lsi)*1]),280);
CR_aB_f100__0___Kinetic_i__0___Ab__up_(inteval, &(stack[((hsi*280+3263)*1+lsi)*1]), &(stack[((hsi*48+2655)*1+lsi)*1]), &(stack[((hsi*48+1728)*1+lsi)*1]), &(stack[((hsi*48+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+0)*1+lsi)*1]),&(stack[((hsi*280+3263)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1680 */
}

#ifdef __cplusplus
};
#endif
