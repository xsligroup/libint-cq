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
#include <CR_aB_X4__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_f__0___Kinetic_k001__0___Ab__up_.h>
#include <CR_aB_f__0___Kinetic_k010__0___Ab__up_.h>
#include <CR_aB_f__0___Kinetic_k100__0___Ab__up_.h>
#include <CR_aB_f001__0___Kinetic_k__0___Ab__up_.h>
#include <CR_aB_f010__0___Kinetic_k__0___Ab__up_.h>
#include <CR_aB_f100__0___Kinetic_k__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_F_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*50+2160)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*50+2210)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*50+2260)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___Kinetic_k001__0___Ab__up_(inteval, &(stack[((hsi*360+2310)*1+lsi)*1]), &(stack[((hsi*50+2260)*1+lsi)*1]), &(stack[((hsi*50+2210)*1+lsi)*1]), &(stack[((hsi*50+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+1800)*1+lsi)*1]),&(stack[((hsi*360+2310)*1+lsi)*1]),360);
CR_aB_f__0___Kinetic_k010__0___Ab__up_(inteval, &(stack[((hsi*360+2670)*1+lsi)*1]), &(stack[((hsi*50+2260)*1+lsi)*1]), &(stack[((hsi*50+2210)*1+lsi)*1]), &(stack[((hsi*50+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+1440)*1+lsi)*1]),&(stack[((hsi*360+2670)*1+lsi)*1]),360);
CR_aB_f__0___Kinetic_k100__0___Ab__up_(inteval, &(stack[((hsi*360+3030)*1+lsi)*1]), &(stack[((hsi*50+2260)*1+lsi)*1]), &(stack[((hsi*50+2210)*1+lsi)*1]), &(stack[((hsi*50+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+1080)*1+lsi)*1]),&(stack[((hsi*360+3030)*1+lsi)*1]),360);
CR_aB_Z5__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*54+2160)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*54+2214)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*54+3390)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f001__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*360+3444)*1+lsi)*1]), &(stack[((hsi*54+3390)*1+lsi)*1]), &(stack[((hsi*54+2214)*1+lsi)*1]), &(stack[((hsi*54+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+720)*1+lsi)*1]),&(stack[((hsi*360+3444)*1+lsi)*1]),360);
CR_aB_f010__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*360+3804)*1+lsi)*1]), &(stack[((hsi*54+3390)*1+lsi)*1]), &(stack[((hsi*54+2214)*1+lsi)*1]), &(stack[((hsi*54+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+360)*1+lsi)*1]),&(stack[((hsi*360+3804)*1+lsi)*1]),360);
CR_aB_f100__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*360+4164)*1+lsi)*1]), &(stack[((hsi*54+3390)*1+lsi)*1]), &(stack[((hsi*54+2214)*1+lsi)*1]), &(stack[((hsi*54+2160)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*360+0)*1+lsi)*1]),&(stack[((hsi*360+4164)*1+lsi)*1]),360);
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
