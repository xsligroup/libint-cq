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
#include <CR_aB_X1__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_.h>
#include <CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_p002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_p011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_p020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_p101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_p110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_p200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_P_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*16+1323)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*16+1339)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*16+1355)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_(inteval, &(stack[((hsi*63+1371)*1+lsi)*1]), &(stack[((hsi*16+1355)*1+lsi)*1]), &(stack[((hsi*16+1339)*1+lsi)*1]), &(stack[((hsi*16+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1260)*1+lsi)*1]),&(stack[((hsi*63+1371)*1+lsi)*1]),63);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_(inteval, &(stack[((hsi*63+1434)*1+lsi)*1]), &(stack[((hsi*16+1355)*1+lsi)*1]), &(stack[((hsi*16+1339)*1+lsi)*1]), &(stack[((hsi*16+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1197)*1+lsi)*1]),&(stack[((hsi*63+1434)*1+lsi)*1]),63);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_(inteval, &(stack[((hsi*63+1497)*1+lsi)*1]), &(stack[((hsi*16+1355)*1+lsi)*1]), &(stack[((hsi*16+1339)*1+lsi)*1]), &(stack[((hsi*16+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1134)*1+lsi)*1]),&(stack[((hsi*63+1497)*1+lsi)*1]),63);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_(inteval, &(stack[((hsi*63+1560)*1+lsi)*1]), &(stack[((hsi*16+1355)*1+lsi)*1]), &(stack[((hsi*16+1339)*1+lsi)*1]), &(stack[((hsi*16+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1071)*1+lsi)*1]),&(stack[((hsi*63+1560)*1+lsi)*1]),63);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_(inteval, &(stack[((hsi*63+1623)*1+lsi)*1]), &(stack[((hsi*16+1355)*1+lsi)*1]), &(stack[((hsi*16+1339)*1+lsi)*1]), &(stack[((hsi*16+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1008)*1+lsi)*1]),&(stack[((hsi*63+1623)*1+lsi)*1]),63);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_(inteval, &(stack[((hsi*63+1686)*1+lsi)*1]), &(stack[((hsi*16+1355)*1+lsi)*1]), &(stack[((hsi*16+1339)*1+lsi)*1]), &(stack[((hsi*16+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+945)*1+lsi)*1]),&(stack[((hsi*63+1686)*1+lsi)*1]),63);
CR_aB_Z2__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*21+1323)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*21+1344)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*21+1749)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*63+1770)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+882)*1+lsi)*1]),&(stack[((hsi*63+1770)*1+lsi)*1]),63);
CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*63+1833)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+819)*1+lsi)*1]),&(stack[((hsi*63+1833)*1+lsi)*1]),63);
CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*63+1896)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+756)*1+lsi)*1]),&(stack[((hsi*63+1896)*1+lsi)*1]),63);
CR_aB_Z3__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*24+1959)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*24+1983)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*24+2007)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*63+2031)*1+lsi)*1]), &(stack[((hsi*24+2007)*1+lsi)*1]), &(stack[((hsi*24+1983)*1+lsi)*1]), &(stack[((hsi*24+1959)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+693)*1+lsi)*1]),&(stack[((hsi*63+2031)*1+lsi)*1]),63);
CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*63+2094)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+630)*1+lsi)*1]),&(stack[((hsi*63+2094)*1+lsi)*1]),63);
CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*63+2157)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+567)*1+lsi)*1]),&(stack[((hsi*63+2157)*1+lsi)*1]),63);
CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*63+2220)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+504)*1+lsi)*1]),&(stack[((hsi*63+2220)*1+lsi)*1]),63);
CR_aB_p011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*63+2283)*1+lsi)*1]), &(stack[((hsi*24+2007)*1+lsi)*1]), &(stack[((hsi*24+1983)*1+lsi)*1]), &(stack[((hsi*24+1959)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+441)*1+lsi)*1]),&(stack[((hsi*63+2283)*1+lsi)*1]),63);
CR_aB_p020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*63+2346)*1+lsi)*1]), &(stack[((hsi*24+2007)*1+lsi)*1]), &(stack[((hsi*24+1983)*1+lsi)*1]), &(stack[((hsi*24+1959)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+378)*1+lsi)*1]),&(stack[((hsi*63+2346)*1+lsi)*1]),63);
CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*63+2409)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+315)*1+lsi)*1]),&(stack[((hsi*63+2409)*1+lsi)*1]),63);
CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*63+2472)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+252)*1+lsi)*1]),&(stack[((hsi*63+2472)*1+lsi)*1]),63);
CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*63+2535)*1+lsi)*1]), &(stack[((hsi*21+1749)*1+lsi)*1]), &(stack[((hsi*21+1344)*1+lsi)*1]), &(stack[((hsi*21+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+189)*1+lsi)*1]),&(stack[((hsi*63+2535)*1+lsi)*1]),63);
CR_aB_p101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*63+2598)*1+lsi)*1]), &(stack[((hsi*24+2007)*1+lsi)*1]), &(stack[((hsi*24+1983)*1+lsi)*1]), &(stack[((hsi*24+1959)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+126)*1+lsi)*1]),&(stack[((hsi*63+2598)*1+lsi)*1]),63);
CR_aB_p110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*63+2661)*1+lsi)*1]), &(stack[((hsi*24+2007)*1+lsi)*1]), &(stack[((hsi*24+1983)*1+lsi)*1]), &(stack[((hsi*24+1959)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+63)*1+lsi)*1]),&(stack[((hsi*63+2661)*1+lsi)*1]),63);
CR_aB_p200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*63+2724)*1+lsi)*1]), &(stack[((hsi*24+2007)*1+lsi)*1]), &(stack[((hsi*24+1983)*1+lsi)*1]), &(stack[((hsi*24+1959)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+0)*1+lsi)*1]),&(stack[((hsi*63+2724)*1+lsi)*1]),63);
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
