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
#include <CR_aB_X2__0___Overlap_X9__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y9__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z9__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_k001__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_k010__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_k100__0___Ab__up_.h>
#include <CR_aB_p001__0___Kinetic_k__0___Ab__up_.h>
#include <CR_aB_p010__0___Kinetic_k__0___Ab__up_.h>
#include <CR_aB_p100__0___Kinetic_k__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv1_P_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z2__0___Overlap_Z9__0___Ab__up_(inteval, &(stack[((hsi*30+648)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y9__0___Ab__up_(inteval, &(stack[((hsi*30+678)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X9__0___Ab__up_(inteval, &(stack[((hsi*30+708)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___Kinetic_k001__0___Ab__up_(inteval, &(stack[((hsi*108+738)*1+lsi)*1]), &(stack[((hsi*30+708)*1+lsi)*1]), &(stack[((hsi*30+678)*1+lsi)*1]), &(stack[((hsi*30+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+540)*1+lsi)*1]),&(stack[((hsi*108+738)*1+lsi)*1]),108);
CR_aB_p__0___Kinetic_k010__0___Ab__up_(inteval, &(stack[((hsi*108+846)*1+lsi)*1]), &(stack[((hsi*30+708)*1+lsi)*1]), &(stack[((hsi*30+678)*1+lsi)*1]), &(stack[((hsi*30+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+432)*1+lsi)*1]),&(stack[((hsi*108+846)*1+lsi)*1]),108);
CR_aB_p__0___Kinetic_k100__0___Ab__up_(inteval, &(stack[((hsi*108+954)*1+lsi)*1]), &(stack[((hsi*30+708)*1+lsi)*1]), &(stack[((hsi*30+678)*1+lsi)*1]), &(stack[((hsi*30+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+324)*1+lsi)*1]),&(stack[((hsi*108+954)*1+lsi)*1]),108);
CR_aB_Z3__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*36+648)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*36+684)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*36+1062)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p001__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*108+1098)*1+lsi)*1]), &(stack[((hsi*36+1062)*1+lsi)*1]), &(stack[((hsi*36+684)*1+lsi)*1]), &(stack[((hsi*36+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+216)*1+lsi)*1]),&(stack[((hsi*108+1098)*1+lsi)*1]),108);
CR_aB_p010__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*108+1206)*1+lsi)*1]), &(stack[((hsi*36+1062)*1+lsi)*1]), &(stack[((hsi*36+684)*1+lsi)*1]), &(stack[((hsi*36+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+108)*1+lsi)*1]),&(stack[((hsi*108+1206)*1+lsi)*1]),108);
CR_aB_p100__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*108+1314)*1+lsi)*1]), &(stack[((hsi*36+1062)*1+lsi)*1]), &(stack[((hsi*36+684)*1+lsi)*1]), &(stack[((hsi*36+648)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*108+0)*1+lsi)*1]),&(stack[((hsi*108+1314)*1+lsi)*1]),108);
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
