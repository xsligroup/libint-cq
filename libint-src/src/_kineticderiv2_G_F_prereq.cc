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
#include <CR_aB_X5__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_f002__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_f011__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_f020__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_f101__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_f110__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_f200__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_f001__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_f010__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_f100__0___Ab__up_.h>
#include <CR_aB_g002__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_f001__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_f010__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_f100__0___Ab__up_.h>
#include <CR_aB_g011__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_g020__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_f001__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_f010__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_f100__0___Ab__up_.h>
#include <CR_aB_g101__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_g110__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_g200__0___Kinetic_f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_G_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*42+3150)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*42+3192)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*42+3234)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___Kinetic_f002__0___Ab__up_(inteval, &(stack[((hsi*150+3276)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+3000)*1+lsi)*1]),&(stack[((hsi*150+3276)*1+lsi)*1]),150);
CR_aB_g__0___Kinetic_f011__0___Ab__up_(inteval, &(stack[((hsi*150+3426)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2850)*1+lsi)*1]),&(stack[((hsi*150+3426)*1+lsi)*1]),150);
CR_aB_g__0___Kinetic_f020__0___Ab__up_(inteval, &(stack[((hsi*150+3576)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2700)*1+lsi)*1]),&(stack[((hsi*150+3576)*1+lsi)*1]),150);
CR_aB_g__0___Kinetic_f101__0___Ab__up_(inteval, &(stack[((hsi*150+3726)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2550)*1+lsi)*1]),&(stack[((hsi*150+3726)*1+lsi)*1]),150);
CR_aB_g__0___Kinetic_f110__0___Ab__up_(inteval, &(stack[((hsi*150+3876)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2400)*1+lsi)*1]),&(stack[((hsi*150+3876)*1+lsi)*1]),150);
CR_aB_g__0___Kinetic_f200__0___Ab__up_(inteval, &(stack[((hsi*150+4026)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2250)*1+lsi)*1]),&(stack[((hsi*150+4026)*1+lsi)*1]),150);
CR_aB_Z6__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*42+3150)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*42+3192)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*42+3234)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___Kinetic_f001__0___Ab__up_(inteval, &(stack[((hsi*150+4176)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+2100)*1+lsi)*1]),&(stack[((hsi*150+4176)*1+lsi)*1]),150);
CR_aB_g001__0___Kinetic_f010__0___Ab__up_(inteval, &(stack[((hsi*150+4326)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1950)*1+lsi)*1]),&(stack[((hsi*150+4326)*1+lsi)*1]),150);
CR_aB_g001__0___Kinetic_f100__0___Ab__up_(inteval, &(stack[((hsi*150+4476)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1800)*1+lsi)*1]),&(stack[((hsi*150+4476)*1+lsi)*1]),150);
CR_aB_Z7__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*40+4626)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*40+4666)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*40+4706)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*150+4746)*1+lsi)*1]), &(stack[((hsi*40+4706)*1+lsi)*1]), &(stack[((hsi*40+4666)*1+lsi)*1]), &(stack[((hsi*40+4626)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1650)*1+lsi)*1]),&(stack[((hsi*150+4746)*1+lsi)*1]),150);
CR_aB_g010__0___Kinetic_f001__0___Ab__up_(inteval, &(stack[((hsi*150+4896)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1500)*1+lsi)*1]),&(stack[((hsi*150+4896)*1+lsi)*1]),150);
CR_aB_g010__0___Kinetic_f010__0___Ab__up_(inteval, &(stack[((hsi*150+5046)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1350)*1+lsi)*1]),&(stack[((hsi*150+5046)*1+lsi)*1]),150);
CR_aB_g010__0___Kinetic_f100__0___Ab__up_(inteval, &(stack[((hsi*150+5196)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1200)*1+lsi)*1]),&(stack[((hsi*150+5196)*1+lsi)*1]),150);
CR_aB_g011__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*150+5346)*1+lsi)*1]), &(stack[((hsi*40+4706)*1+lsi)*1]), &(stack[((hsi*40+4666)*1+lsi)*1]), &(stack[((hsi*40+4626)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+1050)*1+lsi)*1]),&(stack[((hsi*150+5346)*1+lsi)*1]),150);
CR_aB_g020__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*150+5496)*1+lsi)*1]), &(stack[((hsi*40+4706)*1+lsi)*1]), &(stack[((hsi*40+4666)*1+lsi)*1]), &(stack[((hsi*40+4626)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+900)*1+lsi)*1]),&(stack[((hsi*150+5496)*1+lsi)*1]),150);
CR_aB_g100__0___Kinetic_f001__0___Ab__up_(inteval, &(stack[((hsi*150+5646)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+750)*1+lsi)*1]),&(stack[((hsi*150+5646)*1+lsi)*1]),150);
CR_aB_g100__0___Kinetic_f010__0___Ab__up_(inteval, &(stack[((hsi*150+5796)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+600)*1+lsi)*1]),&(stack[((hsi*150+5796)*1+lsi)*1]),150);
CR_aB_g100__0___Kinetic_f100__0___Ab__up_(inteval, &(stack[((hsi*150+5946)*1+lsi)*1]), &(stack[((hsi*42+3234)*1+lsi)*1]), &(stack[((hsi*42+3192)*1+lsi)*1]), &(stack[((hsi*42+3150)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+450)*1+lsi)*1]),&(stack[((hsi*150+5946)*1+lsi)*1]),150);
CR_aB_g101__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*150+6096)*1+lsi)*1]), &(stack[((hsi*40+4706)*1+lsi)*1]), &(stack[((hsi*40+4666)*1+lsi)*1]), &(stack[((hsi*40+4626)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+300)*1+lsi)*1]),&(stack[((hsi*150+6096)*1+lsi)*1]),150);
CR_aB_g110__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*150+6246)*1+lsi)*1]), &(stack[((hsi*40+4706)*1+lsi)*1]), &(stack[((hsi*40+4666)*1+lsi)*1]), &(stack[((hsi*40+4626)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+150)*1+lsi)*1]),&(stack[((hsi*150+6246)*1+lsi)*1]),150);
CR_aB_g200__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*150+6396)*1+lsi)*1]), &(stack[((hsi*40+4706)*1+lsi)*1]), &(stack[((hsi*40+4666)*1+lsi)*1]), &(stack[((hsi*40+4626)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+0)*1+lsi)*1]),&(stack[((hsi*150+6396)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3150 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
