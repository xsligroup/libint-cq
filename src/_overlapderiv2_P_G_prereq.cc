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
#include <CR_aB_X1__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_.h>
#include <CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_.h>
#include <CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_p002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_p011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_p020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_p101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_p110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_p200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_P_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*14+945)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*14+959)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*14+973)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_(inteval, &(stack[((hsi*45+987)*1+lsi)*1]), &(stack[((hsi*14+973)*1+lsi)*1]), &(stack[((hsi*14+959)*1+lsi)*1]), &(stack[((hsi*14+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+900)*1+lsi)*1]),&(stack[((hsi*45+987)*1+lsi)*1]),45);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_(inteval, &(stack[((hsi*45+1032)*1+lsi)*1]), &(stack[((hsi*14+973)*1+lsi)*1]), &(stack[((hsi*14+959)*1+lsi)*1]), &(stack[((hsi*14+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+855)*1+lsi)*1]),&(stack[((hsi*45+1032)*1+lsi)*1]),45);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_(inteval, &(stack[((hsi*45+1077)*1+lsi)*1]), &(stack[((hsi*14+973)*1+lsi)*1]), &(stack[((hsi*14+959)*1+lsi)*1]), &(stack[((hsi*14+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+810)*1+lsi)*1]),&(stack[((hsi*45+1077)*1+lsi)*1]),45);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_(inteval, &(stack[((hsi*45+1122)*1+lsi)*1]), &(stack[((hsi*14+973)*1+lsi)*1]), &(stack[((hsi*14+959)*1+lsi)*1]), &(stack[((hsi*14+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+765)*1+lsi)*1]),&(stack[((hsi*45+1122)*1+lsi)*1]),45);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_(inteval, &(stack[((hsi*45+1167)*1+lsi)*1]), &(stack[((hsi*14+973)*1+lsi)*1]), &(stack[((hsi*14+959)*1+lsi)*1]), &(stack[((hsi*14+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+720)*1+lsi)*1]),&(stack[((hsi*45+1167)*1+lsi)*1]),45);
CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_(inteval, &(stack[((hsi*45+1212)*1+lsi)*1]), &(stack[((hsi*14+973)*1+lsi)*1]), &(stack[((hsi*14+959)*1+lsi)*1]), &(stack[((hsi*14+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+675)*1+lsi)*1]),&(stack[((hsi*45+1212)*1+lsi)*1]),45);
CR_aB_Z2__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*18+945)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*18+963)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*18+1257)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*45+1275)*1+lsi)*1]), &(stack[((hsi*18+1257)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+630)*1+lsi)*1]),&(stack[((hsi*45+1275)*1+lsi)*1]),45);
CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*45+1320)*1+lsi)*1]), &(stack[((hsi*18+1257)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+585)*1+lsi)*1]),&(stack[((hsi*45+1320)*1+lsi)*1]),45);
CR_aB_p001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*45+1365)*1+lsi)*1]), &(stack[((hsi*18+1257)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+540)*1+lsi)*1]),&(stack[((hsi*45+1365)*1+lsi)*1]),45);
CR_aB_Z3__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*20+1410)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*20+1430)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*20+1450)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*45+1470)*1+lsi)*1]), &(stack[((hsi*20+1450)*1+lsi)*1]), &(stack[((hsi*20+1430)*1+lsi)*1]), &(stack[((hsi*20+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+495)*1+lsi)*1]),&(stack[((hsi*45+1470)*1+lsi)*1]),45);
CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*45+1515)*1+lsi)*1]), &(stack[((hsi*18+1257)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+450)*1+lsi)*1]),&(stack[((hsi*45+1515)*1+lsi)*1]),45);
CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*45+1560)*1+lsi)*1]), &(stack[((hsi*18+1257)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+405)*1+lsi)*1]),&(stack[((hsi*45+1560)*1+lsi)*1]),45);
CR_aB_p010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*45+1605)*1+lsi)*1]), &(stack[((hsi*18+1257)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+360)*1+lsi)*1]),&(stack[((hsi*45+1605)*1+lsi)*1]),45);
CR_aB_p011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*45+1650)*1+lsi)*1]), &(stack[((hsi*20+1450)*1+lsi)*1]), &(stack[((hsi*20+1430)*1+lsi)*1]), &(stack[((hsi*20+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+315)*1+lsi)*1]),&(stack[((hsi*45+1650)*1+lsi)*1]),45);
CR_aB_p020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*45+1695)*1+lsi)*1]), &(stack[((hsi*20+1450)*1+lsi)*1]), &(stack[((hsi*20+1430)*1+lsi)*1]), &(stack[((hsi*20+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+270)*1+lsi)*1]),&(stack[((hsi*45+1695)*1+lsi)*1]),45);
CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*45+1740)*1+lsi)*1]), &(stack[((hsi*18+1257)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+225)*1+lsi)*1]),&(stack[((hsi*45+1740)*1+lsi)*1]),45);
CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*45+1785)*1+lsi)*1]), &(stack[((hsi*18+1257)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+180)*1+lsi)*1]),&(stack[((hsi*45+1785)*1+lsi)*1]),45);
CR_aB_p100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*45+1830)*1+lsi)*1]), &(stack[((hsi*18+1257)*1+lsi)*1]), &(stack[((hsi*18+963)*1+lsi)*1]), &(stack[((hsi*18+945)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+135)*1+lsi)*1]),&(stack[((hsi*45+1830)*1+lsi)*1]),45);
CR_aB_p101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*45+1875)*1+lsi)*1]), &(stack[((hsi*20+1450)*1+lsi)*1]), &(stack[((hsi*20+1430)*1+lsi)*1]), &(stack[((hsi*20+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+90)*1+lsi)*1]),&(stack[((hsi*45+1875)*1+lsi)*1]),45);
CR_aB_p110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*45+1920)*1+lsi)*1]), &(stack[((hsi*20+1450)*1+lsi)*1]), &(stack[((hsi*20+1430)*1+lsi)*1]), &(stack[((hsi*20+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+45)*1+lsi)*1]),&(stack[((hsi*45+1920)*1+lsi)*1]),45);
CR_aB_p200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*45+1965)*1+lsi)*1]), &(stack[((hsi*20+1450)*1+lsi)*1]), &(stack[((hsi*20+1430)*1+lsi)*1]), &(stack[((hsi*20+1410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+1965)*1+lsi)*1]),45);
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
