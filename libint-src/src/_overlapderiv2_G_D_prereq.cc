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
#include <CR_aB_X4__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d002__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d011__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d020__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d101__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d110__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d200__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_.h>
#include <CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_.h>
#include <CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_.h>
#include <CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_G_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*25+1890)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*25+1915)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*25+1940)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d002__0___Ab__up_(inteval, &(stack[((hsi*90+1965)*1+lsi)*1]), &(stack[((hsi*25+1940)*1+lsi)*1]), &(stack[((hsi*25+1915)*1+lsi)*1]), &(stack[((hsi*25+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1800)*1+lsi)*1]),&(stack[((hsi*90+1965)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d011__0___Ab__up_(inteval, &(stack[((hsi*90+2055)*1+lsi)*1]), &(stack[((hsi*25+1940)*1+lsi)*1]), &(stack[((hsi*25+1915)*1+lsi)*1]), &(stack[((hsi*25+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1710)*1+lsi)*1]),&(stack[((hsi*90+2055)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d020__0___Ab__up_(inteval, &(stack[((hsi*90+2145)*1+lsi)*1]), &(stack[((hsi*25+1940)*1+lsi)*1]), &(stack[((hsi*25+1915)*1+lsi)*1]), &(stack[((hsi*25+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1620)*1+lsi)*1]),&(stack[((hsi*90+2145)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d101__0___Ab__up_(inteval, &(stack[((hsi*90+2235)*1+lsi)*1]), &(stack[((hsi*25+1940)*1+lsi)*1]), &(stack[((hsi*25+1915)*1+lsi)*1]), &(stack[((hsi*25+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1530)*1+lsi)*1]),&(stack[((hsi*90+2235)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d110__0___Ab__up_(inteval, &(stack[((hsi*90+2325)*1+lsi)*1]), &(stack[((hsi*25+1940)*1+lsi)*1]), &(stack[((hsi*25+1915)*1+lsi)*1]), &(stack[((hsi*25+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1440)*1+lsi)*1]),&(stack[((hsi*90+2325)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d200__0___Ab__up_(inteval, &(stack[((hsi*90+2415)*1+lsi)*1]), &(stack[((hsi*25+1940)*1+lsi)*1]), &(stack[((hsi*25+1915)*1+lsi)*1]), &(stack[((hsi*25+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1350)*1+lsi)*1]),&(stack[((hsi*90+2415)*1+lsi)*1]),90);
CR_aB_Z5__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*24+1890)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*24+1914)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*24+1938)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_(inteval, &(stack[((hsi*90+2505)*1+lsi)*1]), &(stack[((hsi*24+1938)*1+lsi)*1]), &(stack[((hsi*24+1914)*1+lsi)*1]), &(stack[((hsi*24+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1260)*1+lsi)*1]),&(stack[((hsi*90+2505)*1+lsi)*1]),90);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_(inteval, &(stack[((hsi*90+2595)*1+lsi)*1]), &(stack[((hsi*24+1938)*1+lsi)*1]), &(stack[((hsi*24+1914)*1+lsi)*1]), &(stack[((hsi*24+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1170)*1+lsi)*1]),&(stack[((hsi*90+2595)*1+lsi)*1]),90);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_(inteval, &(stack[((hsi*90+2685)*1+lsi)*1]), &(stack[((hsi*24+1938)*1+lsi)*1]), &(stack[((hsi*24+1914)*1+lsi)*1]), &(stack[((hsi*24+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1080)*1+lsi)*1]),&(stack[((hsi*90+2685)*1+lsi)*1]),90);
CR_aB_Z6__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*21+2775)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*21+2796)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*21+2817)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2838)*1+lsi)*1]), &(stack[((hsi*21+2817)*1+lsi)*1]), &(stack[((hsi*21+2796)*1+lsi)*1]), &(stack[((hsi*21+2775)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+990)*1+lsi)*1]),&(stack[((hsi*90+2838)*1+lsi)*1]),90);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_(inteval, &(stack[((hsi*90+2928)*1+lsi)*1]), &(stack[((hsi*24+1938)*1+lsi)*1]), &(stack[((hsi*24+1914)*1+lsi)*1]), &(stack[((hsi*24+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+900)*1+lsi)*1]),&(stack[((hsi*90+2928)*1+lsi)*1]),90);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_(inteval, &(stack[((hsi*90+3018)*1+lsi)*1]), &(stack[((hsi*24+1938)*1+lsi)*1]), &(stack[((hsi*24+1914)*1+lsi)*1]), &(stack[((hsi*24+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+810)*1+lsi)*1]),&(stack[((hsi*90+3018)*1+lsi)*1]),90);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_(inteval, &(stack[((hsi*90+3108)*1+lsi)*1]), &(stack[((hsi*24+1938)*1+lsi)*1]), &(stack[((hsi*24+1914)*1+lsi)*1]), &(stack[((hsi*24+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+720)*1+lsi)*1]),&(stack[((hsi*90+3108)*1+lsi)*1]),90);
CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3198)*1+lsi)*1]), &(stack[((hsi*21+2817)*1+lsi)*1]), &(stack[((hsi*21+2796)*1+lsi)*1]), &(stack[((hsi*21+2775)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+630)*1+lsi)*1]),&(stack[((hsi*90+3198)*1+lsi)*1]),90);
CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3288)*1+lsi)*1]), &(stack[((hsi*21+2817)*1+lsi)*1]), &(stack[((hsi*21+2796)*1+lsi)*1]), &(stack[((hsi*21+2775)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+540)*1+lsi)*1]),&(stack[((hsi*90+3288)*1+lsi)*1]),90);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d001__0___Ab__up_(inteval, &(stack[((hsi*90+3378)*1+lsi)*1]), &(stack[((hsi*24+1938)*1+lsi)*1]), &(stack[((hsi*24+1914)*1+lsi)*1]), &(stack[((hsi*24+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+450)*1+lsi)*1]),&(stack[((hsi*90+3378)*1+lsi)*1]),90);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_(inteval, &(stack[((hsi*90+3468)*1+lsi)*1]), &(stack[((hsi*24+1938)*1+lsi)*1]), &(stack[((hsi*24+1914)*1+lsi)*1]), &(stack[((hsi*24+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+360)*1+lsi)*1]),&(stack[((hsi*90+3468)*1+lsi)*1]),90);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d100__0___Ab__up_(inteval, &(stack[((hsi*90+3558)*1+lsi)*1]), &(stack[((hsi*24+1938)*1+lsi)*1]), &(stack[((hsi*24+1914)*1+lsi)*1]), &(stack[((hsi*24+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+270)*1+lsi)*1]),&(stack[((hsi*90+3558)*1+lsi)*1]),90);
CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3648)*1+lsi)*1]), &(stack[((hsi*21+2817)*1+lsi)*1]), &(stack[((hsi*21+2796)*1+lsi)*1]), &(stack[((hsi*21+2775)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+180)*1+lsi)*1]),&(stack[((hsi*90+3648)*1+lsi)*1]),90);
CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3738)*1+lsi)*1]), &(stack[((hsi*21+2817)*1+lsi)*1]), &(stack[((hsi*21+2796)*1+lsi)*1]), &(stack[((hsi*21+2775)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+90)*1+lsi)*1]),&(stack[((hsi*90+3738)*1+lsi)*1]),90);
CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3828)*1+lsi)*1]), &(stack[((hsi*21+2817)*1+lsi)*1]), &(stack[((hsi*21+2796)*1+lsi)*1]), &(stack[((hsi*21+2775)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+0)*1+lsi)*1]),&(stack[((hsi*90+3828)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1890 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
