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
#include <CR_aB_X1__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_h002__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_h011__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_h020__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_h101__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_h110__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_h200__0___Ab__up_.h>
#include <CR_aB_s001__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_s001__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_s001__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_s002__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_s010__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_s010__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_s010__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_s011__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_s020__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_s100__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_s100__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_s100__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_s101__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_s110__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_s200__0___Kinetic_h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_S_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*18+441)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*18+459)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*18+477)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___Kinetic_h002__0___Ab__up_(inteval, &(stack[((hsi*21+495)*1+lsi)*1]), &(stack[((hsi*18+477)*1+lsi)*1]), &(stack[((hsi*18+459)*1+lsi)*1]), &(stack[((hsi*18+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+420)*1+lsi)*1]),&(stack[((hsi*21+495)*1+lsi)*1]),21);
CR_aB_s__0___Kinetic_h011__0___Ab__up_(inteval, &(stack[((hsi*21+516)*1+lsi)*1]), &(stack[((hsi*18+477)*1+lsi)*1]), &(stack[((hsi*18+459)*1+lsi)*1]), &(stack[((hsi*18+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+399)*1+lsi)*1]),&(stack[((hsi*21+516)*1+lsi)*1]),21);
CR_aB_s__0___Kinetic_h020__0___Ab__up_(inteval, &(stack[((hsi*21+537)*1+lsi)*1]), &(stack[((hsi*18+477)*1+lsi)*1]), &(stack[((hsi*18+459)*1+lsi)*1]), &(stack[((hsi*18+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+378)*1+lsi)*1]),&(stack[((hsi*21+537)*1+lsi)*1]),21);
CR_aB_s__0___Kinetic_h101__0___Ab__up_(inteval, &(stack[((hsi*21+558)*1+lsi)*1]), &(stack[((hsi*18+477)*1+lsi)*1]), &(stack[((hsi*18+459)*1+lsi)*1]), &(stack[((hsi*18+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+357)*1+lsi)*1]),&(stack[((hsi*21+558)*1+lsi)*1]),21);
CR_aB_s__0___Kinetic_h110__0___Ab__up_(inteval, &(stack[((hsi*21+579)*1+lsi)*1]), &(stack[((hsi*18+477)*1+lsi)*1]), &(stack[((hsi*18+459)*1+lsi)*1]), &(stack[((hsi*18+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+336)*1+lsi)*1]),&(stack[((hsi*21+579)*1+lsi)*1]),21);
CR_aB_s__0___Kinetic_h200__0___Ab__up_(inteval, &(stack[((hsi*21+600)*1+lsi)*1]), &(stack[((hsi*18+477)*1+lsi)*1]), &(stack[((hsi*18+459)*1+lsi)*1]), &(stack[((hsi*18+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+315)*1+lsi)*1]),&(stack[((hsi*21+600)*1+lsi)*1]),21);
CR_aB_Z2__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*24+441)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*24+465)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*24+621)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s001__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*21+645)*1+lsi)*1]), &(stack[((hsi*24+621)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+294)*1+lsi)*1]),&(stack[((hsi*21+645)*1+lsi)*1]),21);
CR_aB_s001__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*21+666)*1+lsi)*1]), &(stack[((hsi*24+621)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+273)*1+lsi)*1]),&(stack[((hsi*21+666)*1+lsi)*1]),21);
CR_aB_s001__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*21+687)*1+lsi)*1]), &(stack[((hsi*24+621)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+252)*1+lsi)*1]),&(stack[((hsi*21+687)*1+lsi)*1]),21);
CR_aB_Z3__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*28+708)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*28+736)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*28+764)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s002__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*21+792)*1+lsi)*1]), &(stack[((hsi*28+764)*1+lsi)*1]), &(stack[((hsi*28+736)*1+lsi)*1]), &(stack[((hsi*28+708)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+231)*1+lsi)*1]),&(stack[((hsi*21+792)*1+lsi)*1]),21);
CR_aB_s010__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*21+813)*1+lsi)*1]), &(stack[((hsi*24+621)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+210)*1+lsi)*1]),&(stack[((hsi*21+813)*1+lsi)*1]),21);
CR_aB_s010__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*21+834)*1+lsi)*1]), &(stack[((hsi*24+621)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+189)*1+lsi)*1]),&(stack[((hsi*21+834)*1+lsi)*1]),21);
CR_aB_s010__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*21+855)*1+lsi)*1]), &(stack[((hsi*24+621)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+168)*1+lsi)*1]),&(stack[((hsi*21+855)*1+lsi)*1]),21);
CR_aB_s011__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*21+876)*1+lsi)*1]), &(stack[((hsi*28+764)*1+lsi)*1]), &(stack[((hsi*28+736)*1+lsi)*1]), &(stack[((hsi*28+708)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+147)*1+lsi)*1]),&(stack[((hsi*21+876)*1+lsi)*1]),21);
CR_aB_s020__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*21+897)*1+lsi)*1]), &(stack[((hsi*28+764)*1+lsi)*1]), &(stack[((hsi*28+736)*1+lsi)*1]), &(stack[((hsi*28+708)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+126)*1+lsi)*1]),&(stack[((hsi*21+897)*1+lsi)*1]),21);
CR_aB_s100__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*21+918)*1+lsi)*1]), &(stack[((hsi*24+621)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+105)*1+lsi)*1]),&(stack[((hsi*21+918)*1+lsi)*1]),21);
CR_aB_s100__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*21+939)*1+lsi)*1]), &(stack[((hsi*24+621)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+84)*1+lsi)*1]),&(stack[((hsi*21+939)*1+lsi)*1]),21);
CR_aB_s100__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*21+960)*1+lsi)*1]), &(stack[((hsi*24+621)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+63)*1+lsi)*1]),&(stack[((hsi*21+960)*1+lsi)*1]),21);
CR_aB_s101__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*28+764)*1+lsi)*1]), &(stack[((hsi*28+736)*1+lsi)*1]), &(stack[((hsi*28+708)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+42)*1+lsi)*1]),&(stack[((hsi*21+441)*1+lsi)*1]),21);
CR_aB_s110__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*21+462)*1+lsi)*1]), &(stack[((hsi*28+764)*1+lsi)*1]), &(stack[((hsi*28+736)*1+lsi)*1]), &(stack[((hsi*28+708)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+21)*1+lsi)*1]),&(stack[((hsi*21+462)*1+lsi)*1]),21);
CR_aB_s200__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*21+621)*1+lsi)*1]), &(stack[((hsi*28+764)*1+lsi)*1]), &(stack[((hsi*28+736)*1+lsi)*1]), &(stack[((hsi*28+708)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+0)*1+lsi)*1]),&(stack[((hsi*21+621)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 441 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
