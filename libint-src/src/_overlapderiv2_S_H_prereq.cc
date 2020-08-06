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
#include <CR_aB_X0__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_.h>
#include <CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_s002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_s011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_s020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_s101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_s110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_s200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_S_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z0__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*8+441)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*8+449)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*8+457)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_(inteval, &(stack[((hsi*21+465)*1+lsi)*1]), &(stack[((hsi*8+457)*1+lsi)*1]), &(stack[((hsi*8+449)*1+lsi)*1]), &(stack[((hsi*8+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+420)*1+lsi)*1]),&(stack[((hsi*21+465)*1+lsi)*1]),21);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_(inteval, &(stack[((hsi*21+486)*1+lsi)*1]), &(stack[((hsi*8+457)*1+lsi)*1]), &(stack[((hsi*8+449)*1+lsi)*1]), &(stack[((hsi*8+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+399)*1+lsi)*1]),&(stack[((hsi*21+486)*1+lsi)*1]),21);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_(inteval, &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*8+457)*1+lsi)*1]), &(stack[((hsi*8+449)*1+lsi)*1]), &(stack[((hsi*8+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+378)*1+lsi)*1]),&(stack[((hsi*21+507)*1+lsi)*1]),21);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_(inteval, &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*8+457)*1+lsi)*1]), &(stack[((hsi*8+449)*1+lsi)*1]), &(stack[((hsi*8+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+357)*1+lsi)*1]),&(stack[((hsi*21+528)*1+lsi)*1]),21);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_(inteval, &(stack[((hsi*21+549)*1+lsi)*1]), &(stack[((hsi*8+457)*1+lsi)*1]), &(stack[((hsi*8+449)*1+lsi)*1]), &(stack[((hsi*8+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+336)*1+lsi)*1]),&(stack[((hsi*21+549)*1+lsi)*1]),21);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_(inteval, &(stack[((hsi*21+570)*1+lsi)*1]), &(stack[((hsi*8+457)*1+lsi)*1]), &(stack[((hsi*8+449)*1+lsi)*1]), &(stack[((hsi*8+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+315)*1+lsi)*1]),&(stack[((hsi*21+570)*1+lsi)*1]),21);
CR_aB_Z1__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*14+441)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*14+591)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*14+605)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*21+619)*1+lsi)*1]), &(stack[((hsi*14+605)*1+lsi)*1]), &(stack[((hsi*14+591)*1+lsi)*1]), &(stack[((hsi*14+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+294)*1+lsi)*1]),&(stack[((hsi*21+619)*1+lsi)*1]),21);
CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*21+640)*1+lsi)*1]), &(stack[((hsi*14+605)*1+lsi)*1]), &(stack[((hsi*14+591)*1+lsi)*1]), &(stack[((hsi*14+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+273)*1+lsi)*1]),&(stack[((hsi*21+640)*1+lsi)*1]),21);
CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*21+661)*1+lsi)*1]), &(stack[((hsi*14+605)*1+lsi)*1]), &(stack[((hsi*14+591)*1+lsi)*1]), &(stack[((hsi*14+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+252)*1+lsi)*1]),&(stack[((hsi*21+661)*1+lsi)*1]),21);
CR_aB_Z2__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*18+682)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*18+700)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*18+718)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*21+736)*1+lsi)*1]), &(stack[((hsi*18+718)*1+lsi)*1]), &(stack[((hsi*18+700)*1+lsi)*1]), &(stack[((hsi*18+682)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+231)*1+lsi)*1]),&(stack[((hsi*21+736)*1+lsi)*1]),21);
CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*21+757)*1+lsi)*1]), &(stack[((hsi*14+605)*1+lsi)*1]), &(stack[((hsi*14+591)*1+lsi)*1]), &(stack[((hsi*14+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+210)*1+lsi)*1]),&(stack[((hsi*21+757)*1+lsi)*1]),21);
CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*21+778)*1+lsi)*1]), &(stack[((hsi*14+605)*1+lsi)*1]), &(stack[((hsi*14+591)*1+lsi)*1]), &(stack[((hsi*14+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+189)*1+lsi)*1]),&(stack[((hsi*21+778)*1+lsi)*1]),21);
CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*21+799)*1+lsi)*1]), &(stack[((hsi*14+605)*1+lsi)*1]), &(stack[((hsi*14+591)*1+lsi)*1]), &(stack[((hsi*14+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+168)*1+lsi)*1]),&(stack[((hsi*21+799)*1+lsi)*1]),21);
CR_aB_s011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*21+820)*1+lsi)*1]), &(stack[((hsi*18+718)*1+lsi)*1]), &(stack[((hsi*18+700)*1+lsi)*1]), &(stack[((hsi*18+682)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+147)*1+lsi)*1]),&(stack[((hsi*21+820)*1+lsi)*1]),21);
CR_aB_s020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*21+841)*1+lsi)*1]), &(stack[((hsi*18+718)*1+lsi)*1]), &(stack[((hsi*18+700)*1+lsi)*1]), &(stack[((hsi*18+682)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+126)*1+lsi)*1]),&(stack[((hsi*21+841)*1+lsi)*1]),21);
CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*21+862)*1+lsi)*1]), &(stack[((hsi*14+605)*1+lsi)*1]), &(stack[((hsi*14+591)*1+lsi)*1]), &(stack[((hsi*14+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+105)*1+lsi)*1]),&(stack[((hsi*21+862)*1+lsi)*1]),21);
CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*21+883)*1+lsi)*1]), &(stack[((hsi*14+605)*1+lsi)*1]), &(stack[((hsi*14+591)*1+lsi)*1]), &(stack[((hsi*14+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+84)*1+lsi)*1]),&(stack[((hsi*21+883)*1+lsi)*1]),21);
CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*21+904)*1+lsi)*1]), &(stack[((hsi*14+605)*1+lsi)*1]), &(stack[((hsi*14+591)*1+lsi)*1]), &(stack[((hsi*14+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+63)*1+lsi)*1]),&(stack[((hsi*21+904)*1+lsi)*1]),21);
CR_aB_s101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*21+591)*1+lsi)*1]), &(stack[((hsi*18+718)*1+lsi)*1]), &(stack[((hsi*18+700)*1+lsi)*1]), &(stack[((hsi*18+682)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+42)*1+lsi)*1]),&(stack[((hsi*21+591)*1+lsi)*1]),21);
CR_aB_s110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*18+718)*1+lsi)*1]), &(stack[((hsi*18+700)*1+lsi)*1]), &(stack[((hsi*18+682)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+21)*1+lsi)*1]),&(stack[((hsi*21+441)*1+lsi)*1]),21);
CR_aB_s200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*21+925)*1+lsi)*1]), &(stack[((hsi*18+718)*1+lsi)*1]), &(stack[((hsi*18+700)*1+lsi)*1]), &(stack[((hsi*18+682)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+0)*1+lsi)*1]),&(stack[((hsi*21+925)*1+lsi)*1]),21);
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
