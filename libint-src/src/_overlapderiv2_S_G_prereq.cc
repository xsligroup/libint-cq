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
#include <CR_aB_X0__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_.h>
#include <CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_s002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_s011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_s020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_s101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_s110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_s200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_S_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z0__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*7+315)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*7+322)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*7+329)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_(inteval, &(stack[((hsi*15+336)*1+lsi)*1]), &(stack[((hsi*7+329)*1+lsi)*1]), &(stack[((hsi*7+322)*1+lsi)*1]), &(stack[((hsi*7+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+300)*1+lsi)*1]),&(stack[((hsi*15+336)*1+lsi)*1]),15);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_(inteval, &(stack[((hsi*15+351)*1+lsi)*1]), &(stack[((hsi*7+329)*1+lsi)*1]), &(stack[((hsi*7+322)*1+lsi)*1]), &(stack[((hsi*7+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+285)*1+lsi)*1]),&(stack[((hsi*15+351)*1+lsi)*1]),15);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_(inteval, &(stack[((hsi*15+366)*1+lsi)*1]), &(stack[((hsi*7+329)*1+lsi)*1]), &(stack[((hsi*7+322)*1+lsi)*1]), &(stack[((hsi*7+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+270)*1+lsi)*1]),&(stack[((hsi*15+366)*1+lsi)*1]),15);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_(inteval, &(stack[((hsi*15+381)*1+lsi)*1]), &(stack[((hsi*7+329)*1+lsi)*1]), &(stack[((hsi*7+322)*1+lsi)*1]), &(stack[((hsi*7+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+255)*1+lsi)*1]),&(stack[((hsi*15+381)*1+lsi)*1]),15);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_(inteval, &(stack[((hsi*15+396)*1+lsi)*1]), &(stack[((hsi*7+329)*1+lsi)*1]), &(stack[((hsi*7+322)*1+lsi)*1]), &(stack[((hsi*7+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+240)*1+lsi)*1]),&(stack[((hsi*15+396)*1+lsi)*1]),15);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_(inteval, &(stack[((hsi*15+411)*1+lsi)*1]), &(stack[((hsi*7+329)*1+lsi)*1]), &(stack[((hsi*7+322)*1+lsi)*1]), &(stack[((hsi*7+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+225)*1+lsi)*1]),&(stack[((hsi*15+411)*1+lsi)*1]),15);
CR_aB_Z1__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*12+315)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*12+426)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*12+438)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*15+450)*1+lsi)*1]), &(stack[((hsi*12+438)*1+lsi)*1]), &(stack[((hsi*12+426)*1+lsi)*1]), &(stack[((hsi*12+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+210)*1+lsi)*1]),&(stack[((hsi*15+450)*1+lsi)*1]),15);
CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*15+465)*1+lsi)*1]), &(stack[((hsi*12+438)*1+lsi)*1]), &(stack[((hsi*12+426)*1+lsi)*1]), &(stack[((hsi*12+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+195)*1+lsi)*1]),&(stack[((hsi*15+465)*1+lsi)*1]),15);
CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*15+480)*1+lsi)*1]), &(stack[((hsi*12+438)*1+lsi)*1]), &(stack[((hsi*12+426)*1+lsi)*1]), &(stack[((hsi*12+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+180)*1+lsi)*1]),&(stack[((hsi*15+480)*1+lsi)*1]),15);
CR_aB_Z2__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*15+495)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*15+510)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*15+525)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*15+540)*1+lsi)*1]), &(stack[((hsi*15+525)*1+lsi)*1]), &(stack[((hsi*15+510)*1+lsi)*1]), &(stack[((hsi*15+495)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+165)*1+lsi)*1]),&(stack[((hsi*15+540)*1+lsi)*1]),15);
CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*15+555)*1+lsi)*1]), &(stack[((hsi*12+438)*1+lsi)*1]), &(stack[((hsi*12+426)*1+lsi)*1]), &(stack[((hsi*12+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+150)*1+lsi)*1]),&(stack[((hsi*15+555)*1+lsi)*1]),15);
CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*15+570)*1+lsi)*1]), &(stack[((hsi*12+438)*1+lsi)*1]), &(stack[((hsi*12+426)*1+lsi)*1]), &(stack[((hsi*12+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+135)*1+lsi)*1]),&(stack[((hsi*15+570)*1+lsi)*1]),15);
CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*15+585)*1+lsi)*1]), &(stack[((hsi*12+438)*1+lsi)*1]), &(stack[((hsi*12+426)*1+lsi)*1]), &(stack[((hsi*12+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+120)*1+lsi)*1]),&(stack[((hsi*15+585)*1+lsi)*1]),15);
CR_aB_s011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*15+600)*1+lsi)*1]), &(stack[((hsi*15+525)*1+lsi)*1]), &(stack[((hsi*15+510)*1+lsi)*1]), &(stack[((hsi*15+495)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+105)*1+lsi)*1]),&(stack[((hsi*15+600)*1+lsi)*1]),15);
CR_aB_s020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*15+615)*1+lsi)*1]), &(stack[((hsi*15+525)*1+lsi)*1]), &(stack[((hsi*15+510)*1+lsi)*1]), &(stack[((hsi*15+495)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+90)*1+lsi)*1]),&(stack[((hsi*15+615)*1+lsi)*1]),15);
CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*15+630)*1+lsi)*1]), &(stack[((hsi*12+438)*1+lsi)*1]), &(stack[((hsi*12+426)*1+lsi)*1]), &(stack[((hsi*12+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+75)*1+lsi)*1]),&(stack[((hsi*15+630)*1+lsi)*1]),15);
CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*15+645)*1+lsi)*1]), &(stack[((hsi*12+438)*1+lsi)*1]), &(stack[((hsi*12+426)*1+lsi)*1]), &(stack[((hsi*12+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+60)*1+lsi)*1]),&(stack[((hsi*15+645)*1+lsi)*1]),15);
CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*15+660)*1+lsi)*1]), &(stack[((hsi*12+438)*1+lsi)*1]), &(stack[((hsi*12+426)*1+lsi)*1]), &(stack[((hsi*12+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+45)*1+lsi)*1]),&(stack[((hsi*15+660)*1+lsi)*1]),15);
CR_aB_s101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*15+426)*1+lsi)*1]), &(stack[((hsi*15+525)*1+lsi)*1]), &(stack[((hsi*15+510)*1+lsi)*1]), &(stack[((hsi*15+495)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+30)*1+lsi)*1]),&(stack[((hsi*15+426)*1+lsi)*1]),15);
CR_aB_s110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*15+315)*1+lsi)*1]), &(stack[((hsi*15+525)*1+lsi)*1]), &(stack[((hsi*15+510)*1+lsi)*1]), &(stack[((hsi*15+495)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+15)*1+lsi)*1]),&(stack[((hsi*15+315)*1+lsi)*1]),15);
CR_aB_s200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*15+675)*1+lsi)*1]), &(stack[((hsi*15+525)*1+lsi)*1]), &(stack[((hsi*15+510)*1+lsi)*1]), &(stack[((hsi*15+495)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+675)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 315 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
