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
#include <CR_aB_X7__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_i__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_i__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_i__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_i001__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_i010__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_i100__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv1_I_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*56+2520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*56+2576)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*56+2632)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*420+2688)*1+lsi)*1]), &(stack[((hsi*56+2632)*1+lsi)*1]), &(stack[((hsi*56+2576)*1+lsi)*1]), &(stack[((hsi*56+2520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*420+2100)*1+lsi)*1]),&(stack[((hsi*420+2688)*1+lsi)*1]),420);
CR_aB_i__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*420+3108)*1+lsi)*1]), &(stack[((hsi*56+2632)*1+lsi)*1]), &(stack[((hsi*56+2576)*1+lsi)*1]), &(stack[((hsi*56+2520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*420+1680)*1+lsi)*1]),&(stack[((hsi*420+3108)*1+lsi)*1]),420);
CR_aB_i__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*420+3528)*1+lsi)*1]), &(stack[((hsi*56+2632)*1+lsi)*1]), &(stack[((hsi*56+2576)*1+lsi)*1]), &(stack[((hsi*56+2520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*420+1260)*1+lsi)*1]),&(stack[((hsi*420+3528)*1+lsi)*1]),420);
CR_aB_Z8__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*54+2520)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*54+2574)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*54+2628)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i001__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*420+3948)*1+lsi)*1]), &(stack[((hsi*54+2628)*1+lsi)*1]), &(stack[((hsi*54+2574)*1+lsi)*1]), &(stack[((hsi*54+2520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*420+840)*1+lsi)*1]),&(stack[((hsi*420+3948)*1+lsi)*1]),420);
CR_aB_i010__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*420+4368)*1+lsi)*1]), &(stack[((hsi*54+2628)*1+lsi)*1]), &(stack[((hsi*54+2574)*1+lsi)*1]), &(stack[((hsi*54+2520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*420+420)*1+lsi)*1]),&(stack[((hsi*420+4368)*1+lsi)*1]),420);
CR_aB_i100__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*420+4788)*1+lsi)*1]), &(stack[((hsi*54+2628)*1+lsi)*1]), &(stack[((hsi*54+2574)*1+lsi)*1]), &(stack[((hsi*54+2520)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*420+0)*1+lsi)*1]),&(stack[((hsi*420+4788)*1+lsi)*1]),420);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2520 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
