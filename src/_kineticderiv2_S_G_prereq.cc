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
#include <CR_aB_s__0___Kinetic_g002__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_g011__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_g020__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_g101__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_g110__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_g200__0___Ab__up_.h>
#include <CR_aB_s001__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_s001__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_s001__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_s002__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_s010__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_s010__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_s010__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_s011__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_s020__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_s100__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_s100__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_s100__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_s101__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_s110__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_s200__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_S_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*16+315)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*16+331)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*16+347)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___Kinetic_g002__0___Ab__up_(inteval, &(stack[((hsi*15+363)*1+lsi)*1]), &(stack[((hsi*16+347)*1+lsi)*1]), &(stack[((hsi*16+331)*1+lsi)*1]), &(stack[((hsi*16+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+300)*1+lsi)*1]),&(stack[((hsi*15+363)*1+lsi)*1]),15);
CR_aB_s__0___Kinetic_g011__0___Ab__up_(inteval, &(stack[((hsi*15+378)*1+lsi)*1]), &(stack[((hsi*16+347)*1+lsi)*1]), &(stack[((hsi*16+331)*1+lsi)*1]), &(stack[((hsi*16+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+285)*1+lsi)*1]),&(stack[((hsi*15+378)*1+lsi)*1]),15);
CR_aB_s__0___Kinetic_g020__0___Ab__up_(inteval, &(stack[((hsi*15+393)*1+lsi)*1]), &(stack[((hsi*16+347)*1+lsi)*1]), &(stack[((hsi*16+331)*1+lsi)*1]), &(stack[((hsi*16+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+270)*1+lsi)*1]),&(stack[((hsi*15+393)*1+lsi)*1]),15);
CR_aB_s__0___Kinetic_g101__0___Ab__up_(inteval, &(stack[((hsi*15+408)*1+lsi)*1]), &(stack[((hsi*16+347)*1+lsi)*1]), &(stack[((hsi*16+331)*1+lsi)*1]), &(stack[((hsi*16+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+255)*1+lsi)*1]),&(stack[((hsi*15+408)*1+lsi)*1]),15);
CR_aB_s__0___Kinetic_g110__0___Ab__up_(inteval, &(stack[((hsi*15+423)*1+lsi)*1]), &(stack[((hsi*16+347)*1+lsi)*1]), &(stack[((hsi*16+331)*1+lsi)*1]), &(stack[((hsi*16+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+240)*1+lsi)*1]),&(stack[((hsi*15+423)*1+lsi)*1]),15);
CR_aB_s__0___Kinetic_g200__0___Ab__up_(inteval, &(stack[((hsi*15+438)*1+lsi)*1]), &(stack[((hsi*16+347)*1+lsi)*1]), &(stack[((hsi*16+331)*1+lsi)*1]), &(stack[((hsi*16+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+225)*1+lsi)*1]),&(stack[((hsi*15+438)*1+lsi)*1]),15);
CR_aB_Z2__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*21+315)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*21+336)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*21+453)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s001__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*15+474)*1+lsi)*1]), &(stack[((hsi*21+453)*1+lsi)*1]), &(stack[((hsi*21+336)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+210)*1+lsi)*1]),&(stack[((hsi*15+474)*1+lsi)*1]),15);
CR_aB_s001__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*15+489)*1+lsi)*1]), &(stack[((hsi*21+453)*1+lsi)*1]), &(stack[((hsi*21+336)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+195)*1+lsi)*1]),&(stack[((hsi*15+489)*1+lsi)*1]),15);
CR_aB_s001__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*15+504)*1+lsi)*1]), &(stack[((hsi*21+453)*1+lsi)*1]), &(stack[((hsi*21+336)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+180)*1+lsi)*1]),&(stack[((hsi*15+504)*1+lsi)*1]),15);
CR_aB_Z3__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*24+519)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*24+543)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*24+567)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s002__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*15+591)*1+lsi)*1]), &(stack[((hsi*24+567)*1+lsi)*1]), &(stack[((hsi*24+543)*1+lsi)*1]), &(stack[((hsi*24+519)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+165)*1+lsi)*1]),&(stack[((hsi*15+591)*1+lsi)*1]),15);
CR_aB_s010__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*15+606)*1+lsi)*1]), &(stack[((hsi*21+453)*1+lsi)*1]), &(stack[((hsi*21+336)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+150)*1+lsi)*1]),&(stack[((hsi*15+606)*1+lsi)*1]),15);
CR_aB_s010__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*15+621)*1+lsi)*1]), &(stack[((hsi*21+453)*1+lsi)*1]), &(stack[((hsi*21+336)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+135)*1+lsi)*1]),&(stack[((hsi*15+621)*1+lsi)*1]),15);
CR_aB_s010__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*15+636)*1+lsi)*1]), &(stack[((hsi*21+453)*1+lsi)*1]), &(stack[((hsi*21+336)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+120)*1+lsi)*1]),&(stack[((hsi*15+636)*1+lsi)*1]),15);
CR_aB_s011__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*15+651)*1+lsi)*1]), &(stack[((hsi*24+567)*1+lsi)*1]), &(stack[((hsi*24+543)*1+lsi)*1]), &(stack[((hsi*24+519)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+105)*1+lsi)*1]),&(stack[((hsi*15+651)*1+lsi)*1]),15);
CR_aB_s020__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*15+666)*1+lsi)*1]), &(stack[((hsi*24+567)*1+lsi)*1]), &(stack[((hsi*24+543)*1+lsi)*1]), &(stack[((hsi*24+519)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+90)*1+lsi)*1]),&(stack[((hsi*15+666)*1+lsi)*1]),15);
CR_aB_s100__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*15+681)*1+lsi)*1]), &(stack[((hsi*21+453)*1+lsi)*1]), &(stack[((hsi*21+336)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+75)*1+lsi)*1]),&(stack[((hsi*15+681)*1+lsi)*1]),15);
CR_aB_s100__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*15+696)*1+lsi)*1]), &(stack[((hsi*21+453)*1+lsi)*1]), &(stack[((hsi*21+336)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+60)*1+lsi)*1]),&(stack[((hsi*15+696)*1+lsi)*1]),15);
CR_aB_s100__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*15+711)*1+lsi)*1]), &(stack[((hsi*21+453)*1+lsi)*1]), &(stack[((hsi*21+336)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+45)*1+lsi)*1]),&(stack[((hsi*15+711)*1+lsi)*1]),15);
CR_aB_s101__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*15+315)*1+lsi)*1]), &(stack[((hsi*24+567)*1+lsi)*1]), &(stack[((hsi*24+543)*1+lsi)*1]), &(stack[((hsi*24+519)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+30)*1+lsi)*1]),&(stack[((hsi*15+315)*1+lsi)*1]),15);
CR_aB_s110__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*15+330)*1+lsi)*1]), &(stack[((hsi*24+567)*1+lsi)*1]), &(stack[((hsi*24+543)*1+lsi)*1]), &(stack[((hsi*24+519)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+15)*1+lsi)*1]),&(stack[((hsi*15+330)*1+lsi)*1]),15);
CR_aB_s200__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*15+453)*1+lsi)*1]), &(stack[((hsi*24+567)*1+lsi)*1]), &(stack[((hsi*24+543)*1+lsi)*1]), &(stack[((hsi*24+519)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+453)*1+lsi)*1]),15);
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
