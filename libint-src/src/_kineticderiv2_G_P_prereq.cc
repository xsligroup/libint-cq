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
#include <CR_aB_X5__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_p002__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_p011__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_p020__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_p101__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_p110__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_p200__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_p001__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_p010__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_p100__0___Ab__up_.h>
#include <CR_aB_g002__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_p001__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_p010__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_p100__0___Ab__up_.h>
#include <CR_aB_g011__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_g020__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_p001__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_p010__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_p100__0___Ab__up_.h>
#include <CR_aB_g101__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_g110__0___Kinetic_p__0___Ab__up_.h>
#include <CR_aB_g200__0___Kinetic_p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_G_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*30+945)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*30+975)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*30+1005)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___Kinetic_p002__0___Ab__up_(inteval, &(stack[((hsi*45+1035)*1+lsi)*1]), &(stack[((hsi*30+1005)*1+lsi)*1]), &(stack[((hsi*30+975)*1+lsi)*1]), &(stack[((hsi*30+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+900)*1+lsi)*1]),&(stack[((hsi*45+1035)*1+lsi)*1]),45);
CR_aB_g__0___Kinetic_p011__0___Ab__up_(inteval, &(stack[((hsi*45+1080)*1+lsi)*1]), &(stack[((hsi*30+1005)*1+lsi)*1]), &(stack[((hsi*30+975)*1+lsi)*1]), &(stack[((hsi*30+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+855)*1+lsi)*1]),&(stack[((hsi*45+1080)*1+lsi)*1]),45);
CR_aB_g__0___Kinetic_p020__0___Ab__up_(inteval, &(stack[((hsi*45+1125)*1+lsi)*1]), &(stack[((hsi*30+1005)*1+lsi)*1]), &(stack[((hsi*30+975)*1+lsi)*1]), &(stack[((hsi*30+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+810)*1+lsi)*1]),&(stack[((hsi*45+1125)*1+lsi)*1]),45);
CR_aB_g__0___Kinetic_p101__0___Ab__up_(inteval, &(stack[((hsi*45+1170)*1+lsi)*1]), &(stack[((hsi*30+1005)*1+lsi)*1]), &(stack[((hsi*30+975)*1+lsi)*1]), &(stack[((hsi*30+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+765)*1+lsi)*1]),&(stack[((hsi*45+1170)*1+lsi)*1]),45);
CR_aB_g__0___Kinetic_p110__0___Ab__up_(inteval, &(stack[((hsi*45+1215)*1+lsi)*1]), &(stack[((hsi*30+1005)*1+lsi)*1]), &(stack[((hsi*30+975)*1+lsi)*1]), &(stack[((hsi*30+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+720)*1+lsi)*1]),&(stack[((hsi*45+1215)*1+lsi)*1]),45);
CR_aB_g__0___Kinetic_p200__0___Ab__up_(inteval, &(stack[((hsi*45+1260)*1+lsi)*1]), &(stack[((hsi*30+1005)*1+lsi)*1]), &(stack[((hsi*30+975)*1+lsi)*1]), &(stack[((hsi*30+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+675)*1+lsi)*1]),&(stack[((hsi*45+1260)*1+lsi)*1]),45);
CR_aB_Z6__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*28+945)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*28+973)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*28+1001)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___Kinetic_p001__0___Ab__up_(inteval, &(stack[((hsi*45+1305)*1+lsi)*1]), &(stack[((hsi*28+1001)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+630)*1+lsi)*1]),&(stack[((hsi*45+1305)*1+lsi)*1]),45);
CR_aB_g001__0___Kinetic_p010__0___Ab__up_(inteval, &(stack[((hsi*45+1350)*1+lsi)*1]), &(stack[((hsi*28+1001)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+585)*1+lsi)*1]),&(stack[((hsi*45+1350)*1+lsi)*1]),45);
CR_aB_g001__0___Kinetic_p100__0___Ab__up_(inteval, &(stack[((hsi*45+1395)*1+lsi)*1]), &(stack[((hsi*28+1001)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+540)*1+lsi)*1]),&(stack[((hsi*45+1395)*1+lsi)*1]),45);
CR_aB_Z7__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*24+1440)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*24+1464)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*24+1488)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*45+1512)*1+lsi)*1]), &(stack[((hsi*24+1488)*1+lsi)*1]), &(stack[((hsi*24+1464)*1+lsi)*1]), &(stack[((hsi*24+1440)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+495)*1+lsi)*1]),&(stack[((hsi*45+1512)*1+lsi)*1]),45);
CR_aB_g010__0___Kinetic_p001__0___Ab__up_(inteval, &(stack[((hsi*45+1557)*1+lsi)*1]), &(stack[((hsi*28+1001)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+450)*1+lsi)*1]),&(stack[((hsi*45+1557)*1+lsi)*1]),45);
CR_aB_g010__0___Kinetic_p010__0___Ab__up_(inteval, &(stack[((hsi*45+1602)*1+lsi)*1]), &(stack[((hsi*28+1001)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+405)*1+lsi)*1]),&(stack[((hsi*45+1602)*1+lsi)*1]),45);
CR_aB_g010__0___Kinetic_p100__0___Ab__up_(inteval, &(stack[((hsi*45+1647)*1+lsi)*1]), &(stack[((hsi*28+1001)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+360)*1+lsi)*1]),&(stack[((hsi*45+1647)*1+lsi)*1]),45);
CR_aB_g011__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*45+1692)*1+lsi)*1]), &(stack[((hsi*24+1488)*1+lsi)*1]), &(stack[((hsi*24+1464)*1+lsi)*1]), &(stack[((hsi*24+1440)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+315)*1+lsi)*1]),&(stack[((hsi*45+1692)*1+lsi)*1]),45);
CR_aB_g020__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*45+1737)*1+lsi)*1]), &(stack[((hsi*24+1488)*1+lsi)*1]), &(stack[((hsi*24+1464)*1+lsi)*1]), &(stack[((hsi*24+1440)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+270)*1+lsi)*1]),&(stack[((hsi*45+1737)*1+lsi)*1]),45);
CR_aB_g100__0___Kinetic_p001__0___Ab__up_(inteval, &(stack[((hsi*45+1782)*1+lsi)*1]), &(stack[((hsi*28+1001)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+225)*1+lsi)*1]),&(stack[((hsi*45+1782)*1+lsi)*1]),45);
CR_aB_g100__0___Kinetic_p010__0___Ab__up_(inteval, &(stack[((hsi*45+1827)*1+lsi)*1]), &(stack[((hsi*28+1001)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+180)*1+lsi)*1]),&(stack[((hsi*45+1827)*1+lsi)*1]),45);
CR_aB_g100__0___Kinetic_p100__0___Ab__up_(inteval, &(stack[((hsi*45+1872)*1+lsi)*1]), &(stack[((hsi*28+1001)*1+lsi)*1]), &(stack[((hsi*28+973)*1+lsi)*1]), &(stack[((hsi*28+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+135)*1+lsi)*1]),&(stack[((hsi*45+1872)*1+lsi)*1]),45);
CR_aB_g101__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*45+945)*1+lsi)*1]), &(stack[((hsi*24+1488)*1+lsi)*1]), &(stack[((hsi*24+1464)*1+lsi)*1]), &(stack[((hsi*24+1440)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+90)*1+lsi)*1]),&(stack[((hsi*45+945)*1+lsi)*1]),45);
CR_aB_g110__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*45+990)*1+lsi)*1]), &(stack[((hsi*24+1488)*1+lsi)*1]), &(stack[((hsi*24+1464)*1+lsi)*1]), &(stack[((hsi*24+1440)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+45)*1+lsi)*1]),&(stack[((hsi*45+990)*1+lsi)*1]),45);
CR_aB_g200__0___Kinetic_p__0___Ab__up_(inteval, &(stack[((hsi*45+1917)*1+lsi)*1]), &(stack[((hsi*24+1488)*1+lsi)*1]), &(stack[((hsi*24+1464)*1+lsi)*1]), &(stack[((hsi*24+1440)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+1917)*1+lsi)*1]),45);
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
