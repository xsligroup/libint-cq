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
#include <CR_aB_X6__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_s002__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_s011__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_s020__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_s101__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_s110__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_s200__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_s001__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_s010__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_s100__0___Ab__up_.h>
#include <CR_aB_h002__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_s001__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_s010__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_s100__0___Ab__up_.h>
#include <CR_aB_h011__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_h020__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_s001__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_s010__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_s100__0___Ab__up_.h>
#include <CR_aB_h101__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_h110__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_h200__0___Kinetic_s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_H_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*28+441)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*28+469)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*28+497)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___Kinetic_s002__0___Ab__up_(inteval, &(stack[((hsi*21+525)*1+lsi)*1]), &(stack[((hsi*28+497)*1+lsi)*1]), &(stack[((hsi*28+469)*1+lsi)*1]), &(stack[((hsi*28+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+420)*1+lsi)*1]),&(stack[((hsi*21+525)*1+lsi)*1]),21);
CR_aB_h__0___Kinetic_s011__0___Ab__up_(inteval, &(stack[((hsi*21+546)*1+lsi)*1]), &(stack[((hsi*28+497)*1+lsi)*1]), &(stack[((hsi*28+469)*1+lsi)*1]), &(stack[((hsi*28+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+399)*1+lsi)*1]),&(stack[((hsi*21+546)*1+lsi)*1]),21);
CR_aB_h__0___Kinetic_s020__0___Ab__up_(inteval, &(stack[((hsi*21+567)*1+lsi)*1]), &(stack[((hsi*28+497)*1+lsi)*1]), &(stack[((hsi*28+469)*1+lsi)*1]), &(stack[((hsi*28+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+378)*1+lsi)*1]),&(stack[((hsi*21+567)*1+lsi)*1]),21);
CR_aB_h__0___Kinetic_s101__0___Ab__up_(inteval, &(stack[((hsi*21+588)*1+lsi)*1]), &(stack[((hsi*28+497)*1+lsi)*1]), &(stack[((hsi*28+469)*1+lsi)*1]), &(stack[((hsi*28+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+357)*1+lsi)*1]),&(stack[((hsi*21+588)*1+lsi)*1]),21);
CR_aB_h__0___Kinetic_s110__0___Ab__up_(inteval, &(stack[((hsi*21+609)*1+lsi)*1]), &(stack[((hsi*28+497)*1+lsi)*1]), &(stack[((hsi*28+469)*1+lsi)*1]), &(stack[((hsi*28+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+336)*1+lsi)*1]),&(stack[((hsi*21+609)*1+lsi)*1]),21);
CR_aB_h__0___Kinetic_s200__0___Ab__up_(inteval, &(stack[((hsi*21+630)*1+lsi)*1]), &(stack[((hsi*28+497)*1+lsi)*1]), &(stack[((hsi*28+469)*1+lsi)*1]), &(stack[((hsi*28+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+315)*1+lsi)*1]),&(stack[((hsi*21+630)*1+lsi)*1]),21);
CR_aB_Z7__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*24+441)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*24+465)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*24+489)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___Kinetic_s001__0___Ab__up_(inteval, &(stack[((hsi*21+651)*1+lsi)*1]), &(stack[((hsi*24+489)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+294)*1+lsi)*1]),&(stack[((hsi*21+651)*1+lsi)*1]),21);
CR_aB_h001__0___Kinetic_s010__0___Ab__up_(inteval, &(stack[((hsi*21+672)*1+lsi)*1]), &(stack[((hsi*24+489)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+273)*1+lsi)*1]),&(stack[((hsi*21+672)*1+lsi)*1]),21);
CR_aB_h001__0___Kinetic_s100__0___Ab__up_(inteval, &(stack[((hsi*21+693)*1+lsi)*1]), &(stack[((hsi*24+489)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+252)*1+lsi)*1]),&(stack[((hsi*21+693)*1+lsi)*1]),21);
CR_aB_Z8__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*18+714)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*18+732)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*18+750)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h002__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*21+768)*1+lsi)*1]), &(stack[((hsi*18+750)*1+lsi)*1]), &(stack[((hsi*18+732)*1+lsi)*1]), &(stack[((hsi*18+714)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+231)*1+lsi)*1]),&(stack[((hsi*21+768)*1+lsi)*1]),21);
CR_aB_h010__0___Kinetic_s001__0___Ab__up_(inteval, &(stack[((hsi*21+789)*1+lsi)*1]), &(stack[((hsi*24+489)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+210)*1+lsi)*1]),&(stack[((hsi*21+789)*1+lsi)*1]),21);
CR_aB_h010__0___Kinetic_s010__0___Ab__up_(inteval, &(stack[((hsi*21+810)*1+lsi)*1]), &(stack[((hsi*24+489)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+189)*1+lsi)*1]),&(stack[((hsi*21+810)*1+lsi)*1]),21);
CR_aB_h010__0___Kinetic_s100__0___Ab__up_(inteval, &(stack[((hsi*21+831)*1+lsi)*1]), &(stack[((hsi*24+489)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+168)*1+lsi)*1]),&(stack[((hsi*21+831)*1+lsi)*1]),21);
CR_aB_h011__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*21+852)*1+lsi)*1]), &(stack[((hsi*18+750)*1+lsi)*1]), &(stack[((hsi*18+732)*1+lsi)*1]), &(stack[((hsi*18+714)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+147)*1+lsi)*1]),&(stack[((hsi*21+852)*1+lsi)*1]),21);
CR_aB_h020__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*21+873)*1+lsi)*1]), &(stack[((hsi*18+750)*1+lsi)*1]), &(stack[((hsi*18+732)*1+lsi)*1]), &(stack[((hsi*18+714)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+126)*1+lsi)*1]),&(stack[((hsi*21+873)*1+lsi)*1]),21);
CR_aB_h100__0___Kinetic_s001__0___Ab__up_(inteval, &(stack[((hsi*21+894)*1+lsi)*1]), &(stack[((hsi*24+489)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+105)*1+lsi)*1]),&(stack[((hsi*21+894)*1+lsi)*1]),21);
CR_aB_h100__0___Kinetic_s010__0___Ab__up_(inteval, &(stack[((hsi*21+915)*1+lsi)*1]), &(stack[((hsi*24+489)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+84)*1+lsi)*1]),&(stack[((hsi*21+915)*1+lsi)*1]),21);
CR_aB_h100__0___Kinetic_s100__0___Ab__up_(inteval, &(stack[((hsi*21+936)*1+lsi)*1]), &(stack[((hsi*24+489)*1+lsi)*1]), &(stack[((hsi*24+465)*1+lsi)*1]), &(stack[((hsi*24+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+63)*1+lsi)*1]),&(stack[((hsi*21+936)*1+lsi)*1]),21);
CR_aB_h101__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*18+750)*1+lsi)*1]), &(stack[((hsi*18+732)*1+lsi)*1]), &(stack[((hsi*18+714)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+42)*1+lsi)*1]),&(stack[((hsi*21+441)*1+lsi)*1]),21);
CR_aB_h110__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*21+462)*1+lsi)*1]), &(stack[((hsi*18+750)*1+lsi)*1]), &(stack[((hsi*18+732)*1+lsi)*1]), &(stack[((hsi*18+714)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+21)*1+lsi)*1]),&(stack[((hsi*21+462)*1+lsi)*1]),21);
CR_aB_h200__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*21+483)*1+lsi)*1]), &(stack[((hsi*18+750)*1+lsi)*1]), &(stack[((hsi*18+732)*1+lsi)*1]), &(stack[((hsi*18+714)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+0)*1+lsi)*1]),&(stack[((hsi*21+483)*1+lsi)*1]),21);
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
