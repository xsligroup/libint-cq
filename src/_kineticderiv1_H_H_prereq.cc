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
#include <CR_aB_X6__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv1_H_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*56+2646)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*56+2702)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*56+2758)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*441+2814)*1+lsi)*1]), &(stack[((hsi*56+2758)*1+lsi)*1]), &(stack[((hsi*56+2702)*1+lsi)*1]), &(stack[((hsi*56+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+2205)*1+lsi)*1]),&(stack[((hsi*441+2814)*1+lsi)*1]),441);
CR_aB_h__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*441+3255)*1+lsi)*1]), &(stack[((hsi*56+2758)*1+lsi)*1]), &(stack[((hsi*56+2702)*1+lsi)*1]), &(stack[((hsi*56+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+1764)*1+lsi)*1]),&(stack[((hsi*441+3255)*1+lsi)*1]),441);
CR_aB_h__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*441+3696)*1+lsi)*1]), &(stack[((hsi*56+2758)*1+lsi)*1]), &(stack[((hsi*56+2702)*1+lsi)*1]), &(stack[((hsi*56+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+1323)*1+lsi)*1]),&(stack[((hsi*441+3696)*1+lsi)*1]),441);
CR_aB_Z7__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*56+2646)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*56+2702)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*56+2758)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*441+4137)*1+lsi)*1]), &(stack[((hsi*56+2758)*1+lsi)*1]), &(stack[((hsi*56+2702)*1+lsi)*1]), &(stack[((hsi*56+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+882)*1+lsi)*1]),&(stack[((hsi*441+4137)*1+lsi)*1]),441);
CR_aB_h010__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*441+4578)*1+lsi)*1]), &(stack[((hsi*56+2758)*1+lsi)*1]), &(stack[((hsi*56+2702)*1+lsi)*1]), &(stack[((hsi*56+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+441)*1+lsi)*1]),&(stack[((hsi*441+4578)*1+lsi)*1]),441);
CR_aB_h100__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*441+5019)*1+lsi)*1]), &(stack[((hsi*56+2758)*1+lsi)*1]), &(stack[((hsi*56+2702)*1+lsi)*1]), &(stack[((hsi*56+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+0)*1+lsi)*1]),&(stack[((hsi*441+5019)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2646 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
