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
#include <CR_aB_X8__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X9__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y9__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z9__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_k__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_k__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_k__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_k001__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_k010__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_k100__0___Kinetic_h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv1_K_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z8__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*72+4536)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*72+4608)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*72+4680)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*756+4752)*1+lsi)*1]), &(stack[((hsi*72+4680)*1+lsi)*1]), &(stack[((hsi*72+4608)*1+lsi)*1]), &(stack[((hsi*72+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+3780)*1+lsi)*1]),&(stack[((hsi*756+4752)*1+lsi)*1]),756);
CR_aB_k__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*756+5508)*1+lsi)*1]), &(stack[((hsi*72+4680)*1+lsi)*1]), &(stack[((hsi*72+4608)*1+lsi)*1]), &(stack[((hsi*72+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+3024)*1+lsi)*1]),&(stack[((hsi*756+5508)*1+lsi)*1]),756);
CR_aB_k__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*756+6264)*1+lsi)*1]), &(stack[((hsi*72+4680)*1+lsi)*1]), &(stack[((hsi*72+4608)*1+lsi)*1]), &(stack[((hsi*72+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+2268)*1+lsi)*1]),&(stack[((hsi*756+6264)*1+lsi)*1]),756);
CR_aB_Z9__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*70+4536)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y9__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*70+4606)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X9__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*70+4676)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k001__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*756+7020)*1+lsi)*1]), &(stack[((hsi*70+4676)*1+lsi)*1]), &(stack[((hsi*70+4606)*1+lsi)*1]), &(stack[((hsi*70+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+1512)*1+lsi)*1]),&(stack[((hsi*756+7020)*1+lsi)*1]),756);
CR_aB_k010__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*756+7776)*1+lsi)*1]), &(stack[((hsi*70+4676)*1+lsi)*1]), &(stack[((hsi*70+4606)*1+lsi)*1]), &(stack[((hsi*70+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+756)*1+lsi)*1]),&(stack[((hsi*756+7776)*1+lsi)*1]),756);
CR_aB_k100__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*756+8532)*1+lsi)*1]), &(stack[((hsi*70+4676)*1+lsi)*1]), &(stack[((hsi*70+4606)*1+lsi)*1]), &(stack[((hsi*70+4536)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*756+0)*1+lsi)*1]),&(stack[((hsi*756+8532)*1+lsi)*1]),756);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4536 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
