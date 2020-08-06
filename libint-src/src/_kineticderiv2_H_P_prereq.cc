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
#include <CR_aB_X6__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_p002__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_p011__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_p020__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_p101__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_p110__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_p200__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_p001__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_p010__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_p100__0___Ab__up_.h>
#include <CR_aB_h002__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_p001__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_p010__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_p100__0___Ab__up_.h>
#include <CR_aB_h011__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_h020__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_p001__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_p010__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_p100__0___Ab__up_.h>
#include <CR_aB_h101__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_h110__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_h200__0___Kinetic_p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_H_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*35+1323)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*35+1358)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*35+1393)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___Kinetic_p002__0___Ab__up_(inteval, &(stack[((hsi*63+1428)*1+lsi)*1]), &(stack[((hsi*35+1393)*1+lsi)*1]), &(stack[((hsi*35+1358)*1+lsi)*1]), &(stack[((hsi*35+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1260)*1+lsi)*1]),&(stack[((hsi*63+1428)*1+lsi)*1]),63);
CR_aB_h__0___Kinetic_p011__0___Ab__up_(inteval, &(stack[((hsi*63+1491)*1+lsi)*1]), &(stack[((hsi*35+1393)*1+lsi)*1]), &(stack[((hsi*35+1358)*1+lsi)*1]), &(stack[((hsi*35+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1197)*1+lsi)*1]),&(stack[((hsi*63+1491)*1+lsi)*1]),63);
CR_aB_h__0___Kinetic_p020__0___Ab__up_(inteval, &(stack[((hsi*63+1554)*1+lsi)*1]), &(stack[((hsi*35+1393)*1+lsi)*1]), &(stack[((hsi*35+1358)*1+lsi)*1]), &(stack[((hsi*35+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1134)*1+lsi)*1]),&(stack[((hsi*63+1554)*1+lsi)*1]),63);
CR_aB_h__0___Kinetic_p101__0___Ab__up_(inteval, &(stack[((hsi*63+1617)*1+lsi)*1]), &(stack[((hsi*35+1393)*1+lsi)*1]), &(stack[((hsi*35+1358)*1+lsi)*1]), &(stack[((hsi*35+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1071)*1+lsi)*1]),&(stack[((hsi*63+1617)*1+lsi)*1]),63);
CR_aB_h__0___Kinetic_p110__0___Ab__up_(inteval, &(stack[((hsi*63+1680)*1+lsi)*1]), &(stack[((hsi*35+1393)*1+lsi)*1]), &(stack[((hsi*35+1358)*1+lsi)*1]), &(stack[((hsi*35+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+1008)*1+lsi)*1]),&(stack[((hsi*63+1680)*1+lsi)*1]),63);
CR_aB_h__0___Kinetic_p200__0___Ab__up_(inteval, &(stack[((hsi*63+1743)*1+lsi)*1]), &(stack[((hsi*35+1393)*1+lsi)*1]), &(stack[((hsi*35+1358)*1+lsi)*1]), &(stack[((hsi*35+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+945)*1+lsi)*1]),&(stack[((hsi*63+1743)*1+lsi)*1]),63);
CR_aB_Z7__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*32+1323)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*32+1355)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*32+1387)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___Kinetic_p001__0___Ab__up_(inteval, &(stack[((hsi*63+1806)*1+lsi)*1]), &(stack[((hsi*32+1387)*1+lsi)*1]), &(stack[((hsi*32+1355)*1+lsi)*1]), &(stack[((hsi*32+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+882)*1+lsi)*1]),&(stack[((hsi*63+1806)*1+lsi)*1]),63);
CR_aB_h001__0___Kinetic_p010__0___Ab__up_(inteval, &(stack[((hsi*63+1869)*1+lsi)*1]), &(stack[((hsi*32+1387)*1+lsi)*1]), &(stack[((hsi*32+1355)*1+lsi)*1]), &(stack[((hsi*32+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+819)*1+lsi)*1]),&(stack[((hsi*63+1869)*1+lsi)*1]),63);
CR_aB_h001__0___Kinetic_p100__0___Ab__up_(inteval, &(stack[((hsi*63+1932)*1+lsi)*1]), &(stack[((hsi*32+1387)*1+lsi)*1]), &(stack[((hsi*32+1355)*1+lsi)*1]), &(stack[((hsi*32+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+756)*1+lsi)*1]),&(stack[((hsi*63+1932)*1+lsi)*1]),63);
CR_aB_Z8__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*27+1995)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*27+2022)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*27+2049)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h002__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*63+2076)*1+lsi)*1]), &(stack[((hsi*27+2049)*1+lsi)*1]), &(stack[((hsi*27+2022)*1+lsi)*1]), &(stack[((hsi*27+1995)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+693)*1+lsi)*1]),&(stack[((hsi*63+2076)*1+lsi)*1]),63);
CR_aB_h010__0___Kinetic_p001__0___Ab__up_(inteval, &(stack[((hsi*63+2139)*1+lsi)*1]), &(stack[((hsi*32+1387)*1+lsi)*1]), &(stack[((hsi*32+1355)*1+lsi)*1]), &(stack[((hsi*32+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+630)*1+lsi)*1]),&(stack[((hsi*63+2139)*1+lsi)*1]),63);
CR_aB_h010__0___Kinetic_p010__0___Ab__up_(inteval, &(stack[((hsi*63+2202)*1+lsi)*1]), &(stack[((hsi*32+1387)*1+lsi)*1]), &(stack[((hsi*32+1355)*1+lsi)*1]), &(stack[((hsi*32+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+567)*1+lsi)*1]),&(stack[((hsi*63+2202)*1+lsi)*1]),63);
CR_aB_h010__0___Kinetic_p100__0___Ab__up_(inteval, &(stack[((hsi*63+2265)*1+lsi)*1]), &(stack[((hsi*32+1387)*1+lsi)*1]), &(stack[((hsi*32+1355)*1+lsi)*1]), &(stack[((hsi*32+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+504)*1+lsi)*1]),&(stack[((hsi*63+2265)*1+lsi)*1]),63);
CR_aB_h011__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*63+2328)*1+lsi)*1]), &(stack[((hsi*27+2049)*1+lsi)*1]), &(stack[((hsi*27+2022)*1+lsi)*1]), &(stack[((hsi*27+1995)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+441)*1+lsi)*1]),&(stack[((hsi*63+2328)*1+lsi)*1]),63);
CR_aB_h020__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*63+2391)*1+lsi)*1]), &(stack[((hsi*27+2049)*1+lsi)*1]), &(stack[((hsi*27+2022)*1+lsi)*1]), &(stack[((hsi*27+1995)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+378)*1+lsi)*1]),&(stack[((hsi*63+2391)*1+lsi)*1]),63);
CR_aB_h100__0___Kinetic_p001__0___Ab__up_(inteval, &(stack[((hsi*63+2454)*1+lsi)*1]), &(stack[((hsi*32+1387)*1+lsi)*1]), &(stack[((hsi*32+1355)*1+lsi)*1]), &(stack[((hsi*32+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+315)*1+lsi)*1]),&(stack[((hsi*63+2454)*1+lsi)*1]),63);
CR_aB_h100__0___Kinetic_p010__0___Ab__up_(inteval, &(stack[((hsi*63+2517)*1+lsi)*1]), &(stack[((hsi*32+1387)*1+lsi)*1]), &(stack[((hsi*32+1355)*1+lsi)*1]), &(stack[((hsi*32+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+252)*1+lsi)*1]),&(stack[((hsi*63+2517)*1+lsi)*1]),63);
CR_aB_h100__0___Kinetic_p100__0___Ab__up_(inteval, &(stack[((hsi*63+2580)*1+lsi)*1]), &(stack[((hsi*32+1387)*1+lsi)*1]), &(stack[((hsi*32+1355)*1+lsi)*1]), &(stack[((hsi*32+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+189)*1+lsi)*1]),&(stack[((hsi*63+2580)*1+lsi)*1]),63);
CR_aB_h101__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*63+1323)*1+lsi)*1]), &(stack[((hsi*27+2049)*1+lsi)*1]), &(stack[((hsi*27+2022)*1+lsi)*1]), &(stack[((hsi*27+1995)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+126)*1+lsi)*1]),&(stack[((hsi*63+1323)*1+lsi)*1]),63);
CR_aB_h110__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*63+2643)*1+lsi)*1]), &(stack[((hsi*27+2049)*1+lsi)*1]), &(stack[((hsi*27+2022)*1+lsi)*1]), &(stack[((hsi*27+1995)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+63)*1+lsi)*1]),&(stack[((hsi*63+2643)*1+lsi)*1]),63);
CR_aB_h200__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*63+2706)*1+lsi)*1]), &(stack[((hsi*27+2049)*1+lsi)*1]), &(stack[((hsi*27+2022)*1+lsi)*1]), &(stack[((hsi*27+1995)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*63+0)*1+lsi)*1]),&(stack[((hsi*63+2706)*1+lsi)*1]),63);
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
