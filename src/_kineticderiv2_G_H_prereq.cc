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
#include <CR_aB_X5__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_h002__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_h011__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_h020__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_h101__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_h110__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_h200__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_g002__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_g011__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_g020__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_g101__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_g110__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_g200__0___Kinetic_h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_G_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*54+6615)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*54+6669)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*54+6723)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___Kinetic_h002__0___Ab__up_(inteval, &(stack[((hsi*315+6777)*1+lsi)*1]), &(stack[((hsi*54+6723)*1+lsi)*1]), &(stack[((hsi*54+6669)*1+lsi)*1]), &(stack[((hsi*54+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+6300)*1+lsi)*1]),&(stack[((hsi*315+6777)*1+lsi)*1]),315);
CR_aB_g__0___Kinetic_h011__0___Ab__up_(inteval, &(stack[((hsi*315+7092)*1+lsi)*1]), &(stack[((hsi*54+6723)*1+lsi)*1]), &(stack[((hsi*54+6669)*1+lsi)*1]), &(stack[((hsi*54+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5985)*1+lsi)*1]),&(stack[((hsi*315+7092)*1+lsi)*1]),315);
CR_aB_g__0___Kinetic_h020__0___Ab__up_(inteval, &(stack[((hsi*315+7407)*1+lsi)*1]), &(stack[((hsi*54+6723)*1+lsi)*1]), &(stack[((hsi*54+6669)*1+lsi)*1]), &(stack[((hsi*54+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5670)*1+lsi)*1]),&(stack[((hsi*315+7407)*1+lsi)*1]),315);
CR_aB_g__0___Kinetic_h101__0___Ab__up_(inteval, &(stack[((hsi*315+7722)*1+lsi)*1]), &(stack[((hsi*54+6723)*1+lsi)*1]), &(stack[((hsi*54+6669)*1+lsi)*1]), &(stack[((hsi*54+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5355)*1+lsi)*1]),&(stack[((hsi*315+7722)*1+lsi)*1]),315);
CR_aB_g__0___Kinetic_h110__0___Ab__up_(inteval, &(stack[((hsi*315+8037)*1+lsi)*1]), &(stack[((hsi*54+6723)*1+lsi)*1]), &(stack[((hsi*54+6669)*1+lsi)*1]), &(stack[((hsi*54+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5040)*1+lsi)*1]),&(stack[((hsi*315+8037)*1+lsi)*1]),315);
CR_aB_g__0___Kinetic_h200__0___Ab__up_(inteval, &(stack[((hsi*315+8352)*1+lsi)*1]), &(stack[((hsi*54+6723)*1+lsi)*1]), &(stack[((hsi*54+6669)*1+lsi)*1]), &(stack[((hsi*54+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+4725)*1+lsi)*1]),&(stack[((hsi*315+8352)*1+lsi)*1]),315);
CR_aB_Z6__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*56+6615)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*56+6671)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*56+8667)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*315+8723)*1+lsi)*1]), &(stack[((hsi*56+8667)*1+lsi)*1]), &(stack[((hsi*56+6671)*1+lsi)*1]), &(stack[((hsi*56+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+4410)*1+lsi)*1]),&(stack[((hsi*315+8723)*1+lsi)*1]),315);
CR_aB_g001__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*315+9038)*1+lsi)*1]), &(stack[((hsi*56+8667)*1+lsi)*1]), &(stack[((hsi*56+6671)*1+lsi)*1]), &(stack[((hsi*56+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+4095)*1+lsi)*1]),&(stack[((hsi*315+9038)*1+lsi)*1]),315);
CR_aB_g001__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*315+9353)*1+lsi)*1]), &(stack[((hsi*56+8667)*1+lsi)*1]), &(stack[((hsi*56+6671)*1+lsi)*1]), &(stack[((hsi*56+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+3780)*1+lsi)*1]),&(stack[((hsi*315+9353)*1+lsi)*1]),315);
CR_aB_Z7__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*56+9668)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*56+9724)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*56+9780)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*315+9836)*1+lsi)*1]), &(stack[((hsi*56+9780)*1+lsi)*1]), &(stack[((hsi*56+9724)*1+lsi)*1]), &(stack[((hsi*56+9668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+3465)*1+lsi)*1]),&(stack[((hsi*315+9836)*1+lsi)*1]),315);
CR_aB_g010__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*315+10151)*1+lsi)*1]), &(stack[((hsi*56+8667)*1+lsi)*1]), &(stack[((hsi*56+6671)*1+lsi)*1]), &(stack[((hsi*56+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+3150)*1+lsi)*1]),&(stack[((hsi*315+10151)*1+lsi)*1]),315);
CR_aB_g010__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*315+10466)*1+lsi)*1]), &(stack[((hsi*56+8667)*1+lsi)*1]), &(stack[((hsi*56+6671)*1+lsi)*1]), &(stack[((hsi*56+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+2835)*1+lsi)*1]),&(stack[((hsi*315+10466)*1+lsi)*1]),315);
CR_aB_g010__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*315+10781)*1+lsi)*1]), &(stack[((hsi*56+8667)*1+lsi)*1]), &(stack[((hsi*56+6671)*1+lsi)*1]), &(stack[((hsi*56+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+2520)*1+lsi)*1]),&(stack[((hsi*315+10781)*1+lsi)*1]),315);
CR_aB_g011__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*315+11096)*1+lsi)*1]), &(stack[((hsi*56+9780)*1+lsi)*1]), &(stack[((hsi*56+9724)*1+lsi)*1]), &(stack[((hsi*56+9668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+2205)*1+lsi)*1]),&(stack[((hsi*315+11096)*1+lsi)*1]),315);
CR_aB_g020__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*315+11411)*1+lsi)*1]), &(stack[((hsi*56+9780)*1+lsi)*1]), &(stack[((hsi*56+9724)*1+lsi)*1]), &(stack[((hsi*56+9668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+1890)*1+lsi)*1]),&(stack[((hsi*315+11411)*1+lsi)*1]),315);
CR_aB_g100__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*315+11726)*1+lsi)*1]), &(stack[((hsi*56+8667)*1+lsi)*1]), &(stack[((hsi*56+6671)*1+lsi)*1]), &(stack[((hsi*56+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+1575)*1+lsi)*1]),&(stack[((hsi*315+11726)*1+lsi)*1]),315);
CR_aB_g100__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*315+12041)*1+lsi)*1]), &(stack[((hsi*56+8667)*1+lsi)*1]), &(stack[((hsi*56+6671)*1+lsi)*1]), &(stack[((hsi*56+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+1260)*1+lsi)*1]),&(stack[((hsi*315+12041)*1+lsi)*1]),315);
CR_aB_g100__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*315+12356)*1+lsi)*1]), &(stack[((hsi*56+8667)*1+lsi)*1]), &(stack[((hsi*56+6671)*1+lsi)*1]), &(stack[((hsi*56+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+945)*1+lsi)*1]),&(stack[((hsi*315+12356)*1+lsi)*1]),315);
CR_aB_g101__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*315+12671)*1+lsi)*1]), &(stack[((hsi*56+9780)*1+lsi)*1]), &(stack[((hsi*56+9724)*1+lsi)*1]), &(stack[((hsi*56+9668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+630)*1+lsi)*1]),&(stack[((hsi*315+12671)*1+lsi)*1]),315);
CR_aB_g110__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*315+12986)*1+lsi)*1]), &(stack[((hsi*56+9780)*1+lsi)*1]), &(stack[((hsi*56+9724)*1+lsi)*1]), &(stack[((hsi*56+9668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+315)*1+lsi)*1]),&(stack[((hsi*315+12986)*1+lsi)*1]),315);
CR_aB_g200__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*315+13301)*1+lsi)*1]), &(stack[((hsi*56+9780)*1+lsi)*1]), &(stack[((hsi*56+9724)*1+lsi)*1]), &(stack[((hsi*56+9668)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+0)*1+lsi)*1]),&(stack[((hsi*315+13301)*1+lsi)*1]),315);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 6615 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
