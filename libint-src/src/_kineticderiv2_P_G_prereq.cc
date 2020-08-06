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
#include <CR_aB_X2__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_g002__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_g011__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_g020__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_g101__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_g110__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_g200__0___Ab__up_.h>
#include <CR_aB_p001__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_p001__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_p001__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_p002__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_p010__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_p010__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_p010__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_p011__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_p020__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_p100__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_p100__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_p100__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_p101__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_p110__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_p200__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_P_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z2__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*24+945)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*24+969)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*24+993)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___Kinetic_g002__0___Ab__up_(inteval, &(stack[((hsi*45+1017)*1+lsi)*1]), &(stack[((hsi*24+993)*1+lsi)*1]), &(stack[((hsi*24+969)*1+lsi)*1]), &(stack[((hsi*24+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+900)*1+lsi)*1]),&(stack[((hsi*45+1017)*1+lsi)*1]),45);
CR_aB_p__0___Kinetic_g011__0___Ab__up_(inteval, &(stack[((hsi*45+1062)*1+lsi)*1]), &(stack[((hsi*24+993)*1+lsi)*1]), &(stack[((hsi*24+969)*1+lsi)*1]), &(stack[((hsi*24+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+855)*1+lsi)*1]),&(stack[((hsi*45+1062)*1+lsi)*1]),45);
CR_aB_p__0___Kinetic_g020__0___Ab__up_(inteval, &(stack[((hsi*45+1107)*1+lsi)*1]), &(stack[((hsi*24+993)*1+lsi)*1]), &(stack[((hsi*24+969)*1+lsi)*1]), &(stack[((hsi*24+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+810)*1+lsi)*1]),&(stack[((hsi*45+1107)*1+lsi)*1]),45);
CR_aB_p__0___Kinetic_g101__0___Ab__up_(inteval, &(stack[((hsi*45+1152)*1+lsi)*1]), &(stack[((hsi*24+993)*1+lsi)*1]), &(stack[((hsi*24+969)*1+lsi)*1]), &(stack[((hsi*24+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+765)*1+lsi)*1]),&(stack[((hsi*45+1152)*1+lsi)*1]),45);
CR_aB_p__0___Kinetic_g110__0___Ab__up_(inteval, &(stack[((hsi*45+1197)*1+lsi)*1]), &(stack[((hsi*24+993)*1+lsi)*1]), &(stack[((hsi*24+969)*1+lsi)*1]), &(stack[((hsi*24+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+720)*1+lsi)*1]),&(stack[((hsi*45+1197)*1+lsi)*1]),45);
CR_aB_p__0___Kinetic_g200__0___Ab__up_(inteval, &(stack[((hsi*45+1242)*1+lsi)*1]), &(stack[((hsi*24+993)*1+lsi)*1]), &(stack[((hsi*24+969)*1+lsi)*1]), &(stack[((hsi*24+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+675)*1+lsi)*1]),&(stack[((hsi*45+1242)*1+lsi)*1]),45);
CR_aB_Z3__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*28+945)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*28+973)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*28+1287)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p001__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*45+1315)*1+lsi)*1]), &(stack[((hsi*28+1287)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+630)*1+lsi)*1]),&(stack[((hsi*45+1315)*1+lsi)*1]),45);
CR_aB_p001__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*45+1360)*1+lsi)*1]), &(stack[((hsi*28+1287)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+585)*1+lsi)*1]),&(stack[((hsi*45+1360)*1+lsi)*1]),45);
CR_aB_p001__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*45+1405)*1+lsi)*1]), &(stack[((hsi*28+1287)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+540)*1+lsi)*1]),&(stack[((hsi*45+1405)*1+lsi)*1]),45);
CR_aB_Z4__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*30+1450)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*30+1480)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*30+1510)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p002__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*45+1540)*1+lsi)*1]), &(stack[((hsi*30+1510)*1+lsi)*1]), &(stack[((hsi*30+1480)*1+lsi)*1]), &(stack[((hsi*30+1450)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+495)*1+lsi)*1]),&(stack[((hsi*45+1540)*1+lsi)*1]),45);
CR_aB_p010__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*45+1585)*1+lsi)*1]), &(stack[((hsi*28+1287)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+450)*1+lsi)*1]),&(stack[((hsi*45+1585)*1+lsi)*1]),45);
CR_aB_p010__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*45+1630)*1+lsi)*1]), &(stack[((hsi*28+1287)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+405)*1+lsi)*1]),&(stack[((hsi*45+1630)*1+lsi)*1]),45);
CR_aB_p010__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*45+1675)*1+lsi)*1]), &(stack[((hsi*28+1287)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+360)*1+lsi)*1]),&(stack[((hsi*45+1675)*1+lsi)*1]),45);
CR_aB_p011__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*45+1720)*1+lsi)*1]), &(stack[((hsi*30+1510)*1+lsi)*1]), &(stack[((hsi*30+1480)*1+lsi)*1]), &(stack[((hsi*30+1450)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+315)*1+lsi)*1]),&(stack[((hsi*45+1720)*1+lsi)*1]),45);
CR_aB_p020__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*45+1765)*1+lsi)*1]), &(stack[((hsi*30+1510)*1+lsi)*1]), &(stack[((hsi*30+1480)*1+lsi)*1]), &(stack[((hsi*30+1450)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+270)*1+lsi)*1]),&(stack[((hsi*45+1765)*1+lsi)*1]),45);
CR_aB_p100__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*45+1810)*1+lsi)*1]), &(stack[((hsi*28+1287)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+225)*1+lsi)*1]),&(stack[((hsi*45+1810)*1+lsi)*1]),45);
CR_aB_p100__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*45+1855)*1+lsi)*1]), &(stack[((hsi*28+1287)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+180)*1+lsi)*1]),&(stack[((hsi*45+1855)*1+lsi)*1]),45);
CR_aB_p100__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*45+1900)*1+lsi)*1]), &(stack[((hsi*28+1287)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+135)*1+lsi)*1]),&(stack[((hsi*45+1900)*1+lsi)*1]),45);
CR_aB_p101__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*45+945)*1+lsi)*1]), &(stack[((hsi*30+1510)*1+lsi)*1]), &(stack[((hsi*30+1480)*1+lsi)*1]), &(stack[((hsi*30+1450)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+90)*1+lsi)*1]),&(stack[((hsi*45+945)*1+lsi)*1]),45);
CR_aB_p110__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*45+1945)*1+lsi)*1]), &(stack[((hsi*30+1510)*1+lsi)*1]), &(stack[((hsi*30+1480)*1+lsi)*1]), &(stack[((hsi*30+1450)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+45)*1+lsi)*1]),&(stack[((hsi*45+1945)*1+lsi)*1]),45);
CR_aB_p200__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*45+1990)*1+lsi)*1]), &(stack[((hsi*30+1510)*1+lsi)*1]), &(stack[((hsi*30+1480)*1+lsi)*1]), &(stack[((hsi*30+1450)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+1990)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 945 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
