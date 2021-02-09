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
#include <CR_aB_X7__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_.h>
#include <CR_aB_k001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_k010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_k100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv1_K_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*24+648)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*24+672)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*24+696)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_(inteval, &(stack[((hsi*108+720)*1+lsi)*1]), &(stack[((hsi*24+696)*1+lsi)*1]), &(stack[((hsi*24+672)*1+lsi)*1]), &(stack[((hsi*24+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+540)*1+lsi)*1]),&(stack[((hsi*108+720)*1+lsi)*1]),108);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(inteval, &(stack[((hsi*108+828)*1+lsi)*1]), &(stack[((hsi*24+696)*1+lsi)*1]), &(stack[((hsi*24+672)*1+lsi)*1]), &(stack[((hsi*24+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+432)*1+lsi)*1]),&(stack[((hsi*108+828)*1+lsi)*1]),108);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_(inteval, &(stack[((hsi*108+936)*1+lsi)*1]), &(stack[((hsi*24+696)*1+lsi)*1]), &(stack[((hsi*24+672)*1+lsi)*1]), &(stack[((hsi*24+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+324)*1+lsi)*1]),&(stack[((hsi*108+936)*1+lsi)*1]),108);
CR_aB_Z8__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*18+648)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*18+666)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*18+684)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1044)*1+lsi)*1]), &(stack[((hsi*18+684)*1+lsi)*1]), &(stack[((hsi*18+666)*1+lsi)*1]), &(stack[((hsi*18+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+216)*1+lsi)*1]),&(stack[((hsi*108+1044)*1+lsi)*1]),108);
CR_aB_k010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1152)*1+lsi)*1]), &(stack[((hsi*18+684)*1+lsi)*1]), &(stack[((hsi*18+666)*1+lsi)*1]), &(stack[((hsi*18+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+108)*1+lsi)*1]),&(stack[((hsi*108+1152)*1+lsi)*1]),108);
CR_aB_k100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*108+1260)*1+lsi)*1]), &(stack[((hsi*18+684)*1+lsi)*1]), &(stack[((hsi*18+666)*1+lsi)*1]), &(stack[((hsi*18+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+0)*1+lsi)*1]),&(stack[((hsi*108+1260)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 648 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
