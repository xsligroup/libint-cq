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
#include <CR_aB_X4__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p002__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p011__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p020__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p101__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p110__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p200__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_.h>
#include <CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_.h>
#include <CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_.h>
#include <CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_G_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*20+945)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*20+965)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*20+985)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p002__0___Ab__up_(inteval, &(stack[((hsi*45+1005)*1+lsi)*1]), &(stack[((hsi*20+985)*1+lsi)*1]), &(stack[((hsi*20+965)*1+lsi)*1]), &(stack[((hsi*20+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+900)*1+lsi)*1]),&(stack[((hsi*45+1005)*1+lsi)*1]),45);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p011__0___Ab__up_(inteval, &(stack[((hsi*45+1050)*1+lsi)*1]), &(stack[((hsi*20+985)*1+lsi)*1]), &(stack[((hsi*20+965)*1+lsi)*1]), &(stack[((hsi*20+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+855)*1+lsi)*1]),&(stack[((hsi*45+1050)*1+lsi)*1]),45);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p020__0___Ab__up_(inteval, &(stack[((hsi*45+1095)*1+lsi)*1]), &(stack[((hsi*20+985)*1+lsi)*1]), &(stack[((hsi*20+965)*1+lsi)*1]), &(stack[((hsi*20+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+810)*1+lsi)*1]),&(stack[((hsi*45+1095)*1+lsi)*1]),45);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p101__0___Ab__up_(inteval, &(stack[((hsi*45+1140)*1+lsi)*1]), &(stack[((hsi*20+985)*1+lsi)*1]), &(stack[((hsi*20+965)*1+lsi)*1]), &(stack[((hsi*20+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+765)*1+lsi)*1]),&(stack[((hsi*45+1140)*1+lsi)*1]),45);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p110__0___Ab__up_(inteval, &(stack[((hsi*45+1185)*1+lsi)*1]), &(stack[((hsi*20+985)*1+lsi)*1]), &(stack[((hsi*20+965)*1+lsi)*1]), &(stack[((hsi*20+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+720)*1+lsi)*1]),&(stack[((hsi*45+1185)*1+lsi)*1]),45);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p200__0___Ab__up_(inteval, &(stack[((hsi*45+1230)*1+lsi)*1]), &(stack[((hsi*20+985)*1+lsi)*1]), &(stack[((hsi*20+965)*1+lsi)*1]), &(stack[((hsi*20+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+675)*1+lsi)*1]),&(stack[((hsi*45+1230)*1+lsi)*1]),45);
CR_aB_Z5__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*18+945)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*18+963)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*18+981)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_(inteval, &(stack[((hsi*45+1275)*1+lsi)*1]), &(stack[((hsi*18+981)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+630)*1+lsi)*1]),&(stack[((hsi*45+1275)*1+lsi)*1]),45);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(inteval, &(stack[((hsi*45+1320)*1+lsi)*1]), &(stack[((hsi*18+981)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+585)*1+lsi)*1]),&(stack[((hsi*45+1320)*1+lsi)*1]),45);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_(inteval, &(stack[((hsi*45+1365)*1+lsi)*1]), &(stack[((hsi*18+981)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+540)*1+lsi)*1]),&(stack[((hsi*45+1365)*1+lsi)*1]),45);
CR_aB_Z6__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*14+1410)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*14+1424)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*14+1438)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*45+1452)*1+lsi)*1]), &(stack[((hsi*14+1438)*1+lsi)*1]), &(stack[((hsi*14+1424)*1+lsi)*1]), &(stack[((hsi*14+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+495)*1+lsi)*1]),&(stack[((hsi*45+1452)*1+lsi)*1]),45);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_(inteval, &(stack[((hsi*45+1497)*1+lsi)*1]), &(stack[((hsi*18+981)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+450)*1+lsi)*1]),&(stack[((hsi*45+1497)*1+lsi)*1]),45);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(inteval, &(stack[((hsi*45+1542)*1+lsi)*1]), &(stack[((hsi*18+981)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+405)*1+lsi)*1]),&(stack[((hsi*45+1542)*1+lsi)*1]),45);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_(inteval, &(stack[((hsi*45+1587)*1+lsi)*1]), &(stack[((hsi*18+981)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+360)*1+lsi)*1]),&(stack[((hsi*45+1587)*1+lsi)*1]),45);
CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*45+1632)*1+lsi)*1]), &(stack[((hsi*14+1438)*1+lsi)*1]), &(stack[((hsi*14+1424)*1+lsi)*1]), &(stack[((hsi*14+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+315)*1+lsi)*1]),&(stack[((hsi*45+1632)*1+lsi)*1]),45);
CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*45+1677)*1+lsi)*1]), &(stack[((hsi*14+1438)*1+lsi)*1]), &(stack[((hsi*14+1424)*1+lsi)*1]), &(stack[((hsi*14+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+270)*1+lsi)*1]),&(stack[((hsi*45+1677)*1+lsi)*1]),45);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p001__0___Ab__up_(inteval, &(stack[((hsi*45+1722)*1+lsi)*1]), &(stack[((hsi*18+981)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+225)*1+lsi)*1]),&(stack[((hsi*45+1722)*1+lsi)*1]),45);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(inteval, &(stack[((hsi*45+1767)*1+lsi)*1]), &(stack[((hsi*18+981)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+180)*1+lsi)*1]),&(stack[((hsi*45+1767)*1+lsi)*1]),45);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p100__0___Ab__up_(inteval, &(stack[((hsi*45+1812)*1+lsi)*1]), &(stack[((hsi*18+981)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+135)*1+lsi)*1]),&(stack[((hsi*45+1812)*1+lsi)*1]),45);
CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*45+945)*1+lsi)*1]), &(stack[((hsi*14+1438)*1+lsi)*1]), &(stack[((hsi*14+1424)*1+lsi)*1]), &(stack[((hsi*14+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+90)*1+lsi)*1]),&(stack[((hsi*45+945)*1+lsi)*1]),45);
CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*45+1857)*1+lsi)*1]), &(stack[((hsi*14+1438)*1+lsi)*1]), &(stack[((hsi*14+1424)*1+lsi)*1]), &(stack[((hsi*14+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+45)*1+lsi)*1]),&(stack[((hsi*45+1857)*1+lsi)*1]),45);
CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(inteval, &(stack[((hsi*45+1902)*1+lsi)*1]), &(stack[((hsi*14+1438)*1+lsi)*1]), &(stack[((hsi*14+1424)*1+lsi)*1]), &(stack[((hsi*14+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+1902)*1+lsi)*1]),45);
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
