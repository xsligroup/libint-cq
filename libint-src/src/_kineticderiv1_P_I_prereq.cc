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
#include <CR_aB_X2__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_i001__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_i010__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_i100__0___Ab__up_.h>
#include <CR_aB_p001__0___Kinetic_i__0___Ab__up_.h>
#include <CR_aB_p010__0___Kinetic_i__0___Ab__up_.h>
#include <CR_aB_p100__0___Kinetic_i__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_P_I_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z2__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*27+504)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*27+531)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*27+558)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___Kinetic_i001__0___Ab__up_(inteval, &(stack[((hsi*84+585)*1+lsi)*1]), &(stack[((hsi*27+558)*1+lsi)*1]), &(stack[((hsi*27+531)*1+lsi)*1]), &(stack[((hsi*27+504)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+420)*1+lsi)*1]),&(stack[((hsi*84+585)*1+lsi)*1]),84);
CR_aB_p__0___Kinetic_i010__0___Ab__up_(inteval, &(stack[((hsi*84+669)*1+lsi)*1]), &(stack[((hsi*27+558)*1+lsi)*1]), &(stack[((hsi*27+531)*1+lsi)*1]), &(stack[((hsi*27+504)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+336)*1+lsi)*1]),&(stack[((hsi*84+669)*1+lsi)*1]),84);
CR_aB_p__0___Kinetic_i100__0___Ab__up_(inteval, &(stack[((hsi*84+753)*1+lsi)*1]), &(stack[((hsi*27+558)*1+lsi)*1]), &(stack[((hsi*27+531)*1+lsi)*1]), &(stack[((hsi*27+504)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+252)*1+lsi)*1]),&(stack[((hsi*84+753)*1+lsi)*1]),84);
CR_aB_Z3__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*32+504)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*32+536)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*32+837)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p001__0___Kinetic_i__0___Ab__up_(inteval, &(stack[((hsi*84+869)*1+lsi)*1]), &(stack[((hsi*32+837)*1+lsi)*1]), &(stack[((hsi*32+536)*1+lsi)*1]), &(stack[((hsi*32+504)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+168)*1+lsi)*1]),&(stack[((hsi*84+869)*1+lsi)*1]),84);
CR_aB_p010__0___Kinetic_i__0___Ab__up_(inteval, &(stack[((hsi*84+953)*1+lsi)*1]), &(stack[((hsi*32+837)*1+lsi)*1]), &(stack[((hsi*32+536)*1+lsi)*1]), &(stack[((hsi*32+504)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+84)*1+lsi)*1]),&(stack[((hsi*84+953)*1+lsi)*1]),84);
CR_aB_p100__0___Kinetic_i__0___Ab__up_(inteval, &(stack[((hsi*84+1037)*1+lsi)*1]), &(stack[((hsi*32+837)*1+lsi)*1]), &(stack[((hsi*32+536)*1+lsi)*1]), &(stack[((hsi*32+504)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*84+0)*1+lsi)*1]),&(stack[((hsi*84+1037)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 504 */
}

#ifdef __cplusplus
};
#endif
