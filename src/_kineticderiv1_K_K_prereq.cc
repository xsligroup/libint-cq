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
#include <CR_aB_X8__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_k__0___Kinetic_k001__0___Ab__up_.h>
#include <CR_aB_k__0___Kinetic_k010__0___Ab__up_.h>
#include <CR_aB_k__0___Kinetic_k100__0___Ab__up_.h>
#include <CR_aB_k001__0___Kinetic_k__0___Ab__up_.h>
#include <CR_aB_k010__0___Kinetic_k__0___Ab__up_.h>
#include <CR_aB_k100__0___Kinetic_k__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv1_K_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z8__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*90+7776)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*90+7866)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*90+7956)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___Kinetic_k001__0___Ab__up_(inteval, &(stack[((hsi*1296+8046)*1+lsi)*1]), &(stack[((hsi*90+7956)*1+lsi)*1]), &(stack[((hsi*90+7866)*1+lsi)*1]), &(stack[((hsi*90+7776)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1296+6480)*1+lsi)*1]),&(stack[((hsi*1296+8046)*1+lsi)*1]),1296);
CR_aB_k__0___Kinetic_k010__0___Ab__up_(inteval, &(stack[((hsi*1296+9342)*1+lsi)*1]), &(stack[((hsi*90+7956)*1+lsi)*1]), &(stack[((hsi*90+7866)*1+lsi)*1]), &(stack[((hsi*90+7776)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1296+5184)*1+lsi)*1]),&(stack[((hsi*1296+9342)*1+lsi)*1]),1296);
CR_aB_k__0___Kinetic_k100__0___Ab__up_(inteval, &(stack[((hsi*1296+10638)*1+lsi)*1]), &(stack[((hsi*90+7956)*1+lsi)*1]), &(stack[((hsi*90+7866)*1+lsi)*1]), &(stack[((hsi*90+7776)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1296+3888)*1+lsi)*1]),&(stack[((hsi*1296+10638)*1+lsi)*1]),1296);
CR_aB_Z9__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*90+7776)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*90+7866)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*90+7956)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k001__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*1296+11934)*1+lsi)*1]), &(stack[((hsi*90+7956)*1+lsi)*1]), &(stack[((hsi*90+7866)*1+lsi)*1]), &(stack[((hsi*90+7776)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1296+2592)*1+lsi)*1]),&(stack[((hsi*1296+11934)*1+lsi)*1]),1296);
CR_aB_k010__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*1296+13230)*1+lsi)*1]), &(stack[((hsi*90+7956)*1+lsi)*1]), &(stack[((hsi*90+7866)*1+lsi)*1]), &(stack[((hsi*90+7776)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1296+1296)*1+lsi)*1]),&(stack[((hsi*1296+13230)*1+lsi)*1]),1296);
CR_aB_k100__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*1296+14526)*1+lsi)*1]), &(stack[((hsi*90+7956)*1+lsi)*1]), &(stack[((hsi*90+7866)*1+lsi)*1]), &(stack[((hsi*90+7776)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1296+0)*1+lsi)*1]),&(stack[((hsi*1296+14526)*1+lsi)*1]),1296);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 7776 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
