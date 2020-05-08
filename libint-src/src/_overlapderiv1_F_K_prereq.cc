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
#include <CR_aB_X3__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k001__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k010__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k100__0___Ab__up_.h>
#include <CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _overlapderiv1_F_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*36+2160)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*36+2196)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*36+2232)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k001__0___Ab__up_(inteval, &(stack[((hsi*360+2268)*1+lsi)*1]), &(stack[((hsi*36+2232)*1+lsi)*1]), &(stack[((hsi*36+2196)*1+lsi)*1]), &(stack[((hsi*36+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+1800)*1+lsi)*1]),&(stack[((hsi*360+2268)*1+lsi)*1]),360);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k010__0___Ab__up_(inteval, &(stack[((hsi*360+2628)*1+lsi)*1]), &(stack[((hsi*36+2232)*1+lsi)*1]), &(stack[((hsi*36+2196)*1+lsi)*1]), &(stack[((hsi*36+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+1440)*1+lsi)*1]),&(stack[((hsi*360+2628)*1+lsi)*1]),360);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k100__0___Ab__up_(inteval, &(stack[((hsi*360+2988)*1+lsi)*1]), &(stack[((hsi*36+2232)*1+lsi)*1]), &(stack[((hsi*36+2196)*1+lsi)*1]), &(stack[((hsi*36+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+1080)*1+lsi)*1]),&(stack[((hsi*360+2988)*1+lsi)*1]),360);
CR_aB_Z4__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*40+2160)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*40+2200)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*40+3348)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*360+3388)*1+lsi)*1]), &(stack[((hsi*40+3348)*1+lsi)*1]), &(stack[((hsi*40+2200)*1+lsi)*1]), &(stack[((hsi*40+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+720)*1+lsi)*1]),&(stack[((hsi*360+3388)*1+lsi)*1]),360);
CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*360+3748)*1+lsi)*1]), &(stack[((hsi*40+3348)*1+lsi)*1]), &(stack[((hsi*40+2200)*1+lsi)*1]), &(stack[((hsi*40+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+360)*1+lsi)*1]),&(stack[((hsi*360+3748)*1+lsi)*1]),360);
CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__k__0___Ab__up_(inteval, &(stack[((hsi*360+4108)*1+lsi)*1]), &(stack[((hsi*40+3348)*1+lsi)*1]), &(stack[((hsi*40+2200)*1+lsi)*1]), &(stack[((hsi*40+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+0)*1+lsi)*1]),&(stack[((hsi*360+4108)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2160 */
}

#ifdef __cplusplus
};
#endif
