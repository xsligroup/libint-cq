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
#include <CR_aB_X7__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i001__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i010__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i100__0___Ab__up_.h>
#include <CR_aB_k001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <CR_aB_k010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <CR_aB_k100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv1_K_I_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*64+6048)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*64+6112)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*64+6176)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i001__0___Ab__up_(inteval, &(stack[((hsi*1008+6240)*1+lsi)*1]), &(stack[((hsi*64+6176)*1+lsi)*1]), &(stack[((hsi*64+6112)*1+lsi)*1]), &(stack[((hsi*64+6048)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1008+5040)*1+lsi)*1]),&(stack[((hsi*1008+6240)*1+lsi)*1]),1008);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i010__0___Ab__up_(inteval, &(stack[((hsi*1008+7248)*1+lsi)*1]), &(stack[((hsi*64+6176)*1+lsi)*1]), &(stack[((hsi*64+6112)*1+lsi)*1]), &(stack[((hsi*64+6048)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1008+4032)*1+lsi)*1]),&(stack[((hsi*1008+7248)*1+lsi)*1]),1008);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i100__0___Ab__up_(inteval, &(stack[((hsi*1008+8256)*1+lsi)*1]), &(stack[((hsi*64+6176)*1+lsi)*1]), &(stack[((hsi*64+6112)*1+lsi)*1]), &(stack[((hsi*64+6048)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1008+3024)*1+lsi)*1]),&(stack[((hsi*1008+8256)*1+lsi)*1]),1008);
CR_aB_Z8__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*63+6048)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*63+6111)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*63+6174)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*1008+9264)*1+lsi)*1]), &(stack[((hsi*63+6174)*1+lsi)*1]), &(stack[((hsi*63+6111)*1+lsi)*1]), &(stack[((hsi*63+6048)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1008+2016)*1+lsi)*1]),&(stack[((hsi*1008+9264)*1+lsi)*1]),1008);
CR_aB_k010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*1008+10272)*1+lsi)*1]), &(stack[((hsi*63+6174)*1+lsi)*1]), &(stack[((hsi*63+6111)*1+lsi)*1]), &(stack[((hsi*63+6048)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1008+1008)*1+lsi)*1]),&(stack[((hsi*1008+10272)*1+lsi)*1]),1008);
CR_aB_k100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*1008+11280)*1+lsi)*1]), &(stack[((hsi*63+6174)*1+lsi)*1]), &(stack[((hsi*63+6111)*1+lsi)*1]), &(stack[((hsi*63+6048)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1008+0)*1+lsi)*1]),&(stack[((hsi*1008+11280)*1+lsi)*1]),1008);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 6048 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
