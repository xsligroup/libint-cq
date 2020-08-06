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
#include <CR_aB_X5__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p002__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p011__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p020__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p101__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p110__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p200__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_.h>
#include <CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_.h>
#include <CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_.h>
#include <CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_H_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*24+1323)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*24+1347)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*24+1371)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p002__0___Ab__up_(inteval, &(stack[((hsi*63+1395)*1+lsi)*1]), &(stack[((hsi*24+1371)*1+lsi)*1]), &(stack[((hsi*24+1347)*1+lsi)*1]), &(stack[((hsi*24+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1260)*1+lsi)*1]),&(stack[((hsi*63+1395)*1+lsi)*1]),63);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p011__0___Ab__up_(inteval, &(stack[((hsi*63+1458)*1+lsi)*1]), &(stack[((hsi*24+1371)*1+lsi)*1]), &(stack[((hsi*24+1347)*1+lsi)*1]), &(stack[((hsi*24+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1197)*1+lsi)*1]),&(stack[((hsi*63+1458)*1+lsi)*1]),63);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p020__0___Ab__up_(inteval, &(stack[((hsi*63+1521)*1+lsi)*1]), &(stack[((hsi*24+1371)*1+lsi)*1]), &(stack[((hsi*24+1347)*1+lsi)*1]), &(stack[((hsi*24+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1134)*1+lsi)*1]),&(stack[((hsi*63+1521)*1+lsi)*1]),63);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p101__0___Ab__up_(inteval, &(stack[((hsi*63+1584)*1+lsi)*1]), &(stack[((hsi*24+1371)*1+lsi)*1]), &(stack[((hsi*24+1347)*1+lsi)*1]), &(stack[((hsi*24+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1071)*1+lsi)*1]),&(stack[((hsi*63+1584)*1+lsi)*1]),63);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p110__0___Ab__up_(inteval, &(stack[((hsi*63+1647)*1+lsi)*1]), &(stack[((hsi*24+1371)*1+lsi)*1]), &(stack[((hsi*24+1347)*1+lsi)*1]), &(stack[((hsi*24+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1008)*1+lsi)*1]),&(stack[((hsi*63+1647)*1+lsi)*1]),63);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p200__0___Ab__up_(inteval, &(stack[((hsi*63+1710)*1+lsi)*1]), &(stack[((hsi*24+1371)*1+lsi)*1]), &(stack[((hsi*24+1347)*1+lsi)*1]), &(stack[((hsi*24+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+945)*1+lsi)*1]),&(stack[((hsi*63+1710)*1+lsi)*1]),63);
CR_aB_Z6__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*21+1323)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*21+1344)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*21+1365)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_(inteval, &(stack[((hsi*63+1773)*1+lsi)*1]), &(stack[((hsi*21+1365)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+882)*1+lsi)*1]),&(stack[((hsi*63+1773)*1+lsi)*1]),63);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(inteval, &(stack[((hsi*63+1836)*1+lsi)*1]), &(stack[((hsi*21+1365)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+819)*1+lsi)*1]),&(stack[((hsi*63+1836)*1+lsi)*1]),63);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_(inteval, &(stack[((hsi*63+1899)*1+lsi)*1]), &(stack[((hsi*21+1365)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+756)*1+lsi)*1]),&(stack[((hsi*63+1899)*1+lsi)*1]),63);
CR_aB_Z7__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*16+1962)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*16+1978)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*16+1994)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*63+2010)*1+lsi)*1]), &(stack[((hsi*16+1994)*1+lsi)*1]), &(stack[((hsi*16+1978)*1+lsi)*1]), &(stack[((hsi*16+1962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+693)*1+lsi)*1]),&(stack[((hsi*63+2010)*1+lsi)*1]),63);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_(inteval, &(stack[((hsi*63+2073)*1+lsi)*1]), &(stack[((hsi*21+1365)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+630)*1+lsi)*1]),&(stack[((hsi*63+2073)*1+lsi)*1]),63);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(inteval, &(stack[((hsi*63+2136)*1+lsi)*1]), &(stack[((hsi*21+1365)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+567)*1+lsi)*1]),&(stack[((hsi*63+2136)*1+lsi)*1]),63);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_(inteval, &(stack[((hsi*63+2199)*1+lsi)*1]), &(stack[((hsi*21+1365)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+504)*1+lsi)*1]),&(stack[((hsi*63+2199)*1+lsi)*1]),63);
CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*63+2262)*1+lsi)*1]), &(stack[((hsi*16+1994)*1+lsi)*1]), &(stack[((hsi*16+1978)*1+lsi)*1]), &(stack[((hsi*16+1962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+441)*1+lsi)*1]),&(stack[((hsi*63+2262)*1+lsi)*1]),63);
CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*63+2325)*1+lsi)*1]), &(stack[((hsi*16+1994)*1+lsi)*1]), &(stack[((hsi*16+1978)*1+lsi)*1]), &(stack[((hsi*16+1962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+378)*1+lsi)*1]),&(stack[((hsi*63+2325)*1+lsi)*1]),63);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_(inteval, &(stack[((hsi*63+2388)*1+lsi)*1]), &(stack[((hsi*21+1365)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+315)*1+lsi)*1]),&(stack[((hsi*63+2388)*1+lsi)*1]),63);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(inteval, &(stack[((hsi*63+2451)*1+lsi)*1]), &(stack[((hsi*21+1365)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+252)*1+lsi)*1]),&(stack[((hsi*63+2451)*1+lsi)*1]),63);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_(inteval, &(stack[((hsi*63+2514)*1+lsi)*1]), &(stack[((hsi*21+1365)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+189)*1+lsi)*1]),&(stack[((hsi*63+2514)*1+lsi)*1]),63);
CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*63+1323)*1+lsi)*1]), &(stack[((hsi*16+1994)*1+lsi)*1]), &(stack[((hsi*16+1978)*1+lsi)*1]), &(stack[((hsi*16+1962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+126)*1+lsi)*1]),&(stack[((hsi*63+1323)*1+lsi)*1]),63);
CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*63+2577)*1+lsi)*1]), &(stack[((hsi*16+1994)*1+lsi)*1]), &(stack[((hsi*16+1978)*1+lsi)*1]), &(stack[((hsi*16+1962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+63)*1+lsi)*1]),&(stack[((hsi*63+2577)*1+lsi)*1]),63);
CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*63+2640)*1+lsi)*1]), &(stack[((hsi*16+1994)*1+lsi)*1]), &(stack[((hsi*16+1978)*1+lsi)*1]), &(stack[((hsi*16+1962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+0)*1+lsi)*1]),&(stack[((hsi*63+2640)*1+lsi)*1]),63);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1323 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
