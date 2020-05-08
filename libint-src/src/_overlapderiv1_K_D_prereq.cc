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
#include <CR_aB_X7__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_.h>
#include <CR_aB_k001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_k100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _overlapderiv1_K_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*32+1296)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*32+1328)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*32+1360)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_(inteval, &(stack[((hsi*216+1392)*1+lsi)*1]), &(stack[((hsi*32+1360)*1+lsi)*1]), &(stack[((hsi*32+1328)*1+lsi)*1]), &(stack[((hsi*32+1296)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+1080)*1+lsi)*1]),&(stack[((hsi*216+1392)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_(inteval, &(stack[((hsi*216+1608)*1+lsi)*1]), &(stack[((hsi*32+1360)*1+lsi)*1]), &(stack[((hsi*32+1328)*1+lsi)*1]), &(stack[((hsi*32+1296)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+864)*1+lsi)*1]),&(stack[((hsi*216+1608)*1+lsi)*1]),216);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_(inteval, &(stack[((hsi*216+1824)*1+lsi)*1]), &(stack[((hsi*32+1360)*1+lsi)*1]), &(stack[((hsi*32+1328)*1+lsi)*1]), &(stack[((hsi*32+1296)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+648)*1+lsi)*1]),&(stack[((hsi*216+1824)*1+lsi)*1]),216);
CR_aB_Z8__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*27+1296)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*27+1323)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*27+1350)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+2040)*1+lsi)*1]), &(stack[((hsi*27+1350)*1+lsi)*1]), &(stack[((hsi*27+1323)*1+lsi)*1]), &(stack[((hsi*27+1296)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+432)*1+lsi)*1]),&(stack[((hsi*216+2040)*1+lsi)*1]),216);
CR_aB_k010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+2256)*1+lsi)*1]), &(stack[((hsi*27+1350)*1+lsi)*1]), &(stack[((hsi*27+1323)*1+lsi)*1]), &(stack[((hsi*27+1296)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+216)*1+lsi)*1]),&(stack[((hsi*216+2256)*1+lsi)*1]),216);
CR_aB_k100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*216+2472)*1+lsi)*1]), &(stack[((hsi*27+1350)*1+lsi)*1]), &(stack[((hsi*27+1323)*1+lsi)*1]), &(stack[((hsi*27+1296)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*216+0)*1+lsi)*1]),&(stack[((hsi*216+2472)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1296 */
}

#ifdef __cplusplus
};
#endif
