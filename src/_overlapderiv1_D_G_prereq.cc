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
#include <CR_aB_X2__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_d001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_d010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_d100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv1_D_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z2__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*18+540)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*18+558)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*18+576)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*90+594)*1+lsi)*1]), &(stack[((hsi*18+576)*1+lsi)*1]), &(stack[((hsi*18+558)*1+lsi)*1]), &(stack[((hsi*18+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+450)*1+lsi)*1]),&(stack[((hsi*90+594)*1+lsi)*1]),90);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*90+684)*1+lsi)*1]), &(stack[((hsi*18+576)*1+lsi)*1]), &(stack[((hsi*18+558)*1+lsi)*1]), &(stack[((hsi*18+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+360)*1+lsi)*1]),&(stack[((hsi*90+684)*1+lsi)*1]),90);
CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*90+774)*1+lsi)*1]), &(stack[((hsi*18+576)*1+lsi)*1]), &(stack[((hsi*18+558)*1+lsi)*1]), &(stack[((hsi*18+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+270)*1+lsi)*1]),&(stack[((hsi*90+774)*1+lsi)*1]),90);
CR_aB_Z3__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*20+540)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*20+560)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*20+864)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*90+884)*1+lsi)*1]), &(stack[((hsi*20+864)*1+lsi)*1]), &(stack[((hsi*20+560)*1+lsi)*1]), &(stack[((hsi*20+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+180)*1+lsi)*1]),&(stack[((hsi*90+884)*1+lsi)*1]),90);
CR_aB_d010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*90+974)*1+lsi)*1]), &(stack[((hsi*20+864)*1+lsi)*1]), &(stack[((hsi*20+560)*1+lsi)*1]), &(stack[((hsi*20+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+90)*1+lsi)*1]),&(stack[((hsi*90+974)*1+lsi)*1]),90);
CR_aB_d100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*90+1064)*1+lsi)*1]), &(stack[((hsi*20+864)*1+lsi)*1]), &(stack[((hsi*20+560)*1+lsi)*1]), &(stack[((hsi*20+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+0)*1+lsi)*1]),&(stack[((hsi*90+1064)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 540 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
