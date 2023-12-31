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
#include <CR_aB_d__0___Kinetic_i001__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_i010__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_i100__0___Ab__up_.h>
#include <CR_aB_d001__0___Kinetic_i__0___Ab__up_.h>
#include <CR_aB_d010__0___Kinetic_i__0___Ab__up_.h>
#include <CR_aB_d100__0___Kinetic_i__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv1_D_I_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*36+1008)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*36+1044)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*36+1080)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___Kinetic_i001__0___Ab__up_(inteval, &(stack[((hsi*168+1116)*1+lsi)*1]), &(stack[((hsi*36+1080)*1+lsi)*1]), &(stack[((hsi*36+1044)*1+lsi)*1]), &(stack[((hsi*36+1008)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*168+840)*1+lsi)*1]),&(stack[((hsi*168+1116)*1+lsi)*1]),168);
CR_aB_d__0___Kinetic_i010__0___Ab__up_(inteval, &(stack[((hsi*168+1284)*1+lsi)*1]), &(stack[((hsi*36+1080)*1+lsi)*1]), &(stack[((hsi*36+1044)*1+lsi)*1]), &(stack[((hsi*36+1008)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*168+672)*1+lsi)*1]),&(stack[((hsi*168+1284)*1+lsi)*1]),168);
CR_aB_d__0___Kinetic_i100__0___Ab__up_(inteval, &(stack[((hsi*168+1452)*1+lsi)*1]), &(stack[((hsi*36+1080)*1+lsi)*1]), &(stack[((hsi*36+1044)*1+lsi)*1]), &(stack[((hsi*36+1008)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*168+504)*1+lsi)*1]),&(stack[((hsi*168+1452)*1+lsi)*1]),168);
CR_aB_Z4__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*40+1008)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*40+1048)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*40+1620)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d001__0___Kinetic_i__0___Ab__up_(inteval, &(stack[((hsi*168+1660)*1+lsi)*1]), &(stack[((hsi*40+1620)*1+lsi)*1]), &(stack[((hsi*40+1048)*1+lsi)*1]), &(stack[((hsi*40+1008)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*168+336)*1+lsi)*1]),&(stack[((hsi*168+1660)*1+lsi)*1]),168);
CR_aB_d010__0___Kinetic_i__0___Ab__up_(inteval, &(stack[((hsi*168+1828)*1+lsi)*1]), &(stack[((hsi*40+1620)*1+lsi)*1]), &(stack[((hsi*40+1048)*1+lsi)*1]), &(stack[((hsi*40+1008)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*168+168)*1+lsi)*1]),&(stack[((hsi*168+1828)*1+lsi)*1]),168);
CR_aB_d100__0___Kinetic_i__0___Ab__up_(inteval, &(stack[((hsi*168+1996)*1+lsi)*1]), &(stack[((hsi*40+1620)*1+lsi)*1]), &(stack[((hsi*40+1048)*1+lsi)*1]), &(stack[((hsi*40+1008)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*168+0)*1+lsi)*1]),&(stack[((hsi*168+1996)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1008 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
