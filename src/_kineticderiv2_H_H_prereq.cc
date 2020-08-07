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
#include <CR_aB_X6__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_h002__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_h011__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_h020__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_h101__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_h110__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_h200__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_h002__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_h011__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_h020__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_h101__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_h110__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_h200__0___Kinetic_h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_H_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*63+9261)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*63+9324)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*63+9387)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___Kinetic_h002__0___Ab__up_(inteval, &(stack[((hsi*441+9450)*1+lsi)*1]), &(stack[((hsi*63+9387)*1+lsi)*1]), &(stack[((hsi*63+9324)*1+lsi)*1]), &(stack[((hsi*63+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+8820)*1+lsi)*1]),&(stack[((hsi*441+9450)*1+lsi)*1]),441);
CR_aB_h__0___Kinetic_h011__0___Ab__up_(inteval, &(stack[((hsi*441+9891)*1+lsi)*1]), &(stack[((hsi*63+9387)*1+lsi)*1]), &(stack[((hsi*63+9324)*1+lsi)*1]), &(stack[((hsi*63+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+8379)*1+lsi)*1]),&(stack[((hsi*441+9891)*1+lsi)*1]),441);
CR_aB_h__0___Kinetic_h020__0___Ab__up_(inteval, &(stack[((hsi*441+10332)*1+lsi)*1]), &(stack[((hsi*63+9387)*1+lsi)*1]), &(stack[((hsi*63+9324)*1+lsi)*1]), &(stack[((hsi*63+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+7938)*1+lsi)*1]),&(stack[((hsi*441+10332)*1+lsi)*1]),441);
CR_aB_h__0___Kinetic_h101__0___Ab__up_(inteval, &(stack[((hsi*441+10773)*1+lsi)*1]), &(stack[((hsi*63+9387)*1+lsi)*1]), &(stack[((hsi*63+9324)*1+lsi)*1]), &(stack[((hsi*63+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+7497)*1+lsi)*1]),&(stack[((hsi*441+10773)*1+lsi)*1]),441);
CR_aB_h__0___Kinetic_h110__0___Ab__up_(inteval, &(stack[((hsi*441+11214)*1+lsi)*1]), &(stack[((hsi*63+9387)*1+lsi)*1]), &(stack[((hsi*63+9324)*1+lsi)*1]), &(stack[((hsi*63+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+7056)*1+lsi)*1]),&(stack[((hsi*441+11214)*1+lsi)*1]),441);
CR_aB_h__0___Kinetic_h200__0___Ab__up_(inteval, &(stack[((hsi*441+11655)*1+lsi)*1]), &(stack[((hsi*63+9387)*1+lsi)*1]), &(stack[((hsi*63+9324)*1+lsi)*1]), &(stack[((hsi*63+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+6615)*1+lsi)*1]),&(stack[((hsi*441+11655)*1+lsi)*1]),441);
CR_aB_Z7__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*64+9261)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*64+9325)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*64+12096)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*441+12160)*1+lsi)*1]), &(stack[((hsi*64+12096)*1+lsi)*1]), &(stack[((hsi*64+9325)*1+lsi)*1]), &(stack[((hsi*64+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+6174)*1+lsi)*1]),&(stack[((hsi*441+12160)*1+lsi)*1]),441);
CR_aB_h001__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*441+12601)*1+lsi)*1]), &(stack[((hsi*64+12096)*1+lsi)*1]), &(stack[((hsi*64+9325)*1+lsi)*1]), &(stack[((hsi*64+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+5733)*1+lsi)*1]),&(stack[((hsi*441+12601)*1+lsi)*1]),441);
CR_aB_h001__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*441+13042)*1+lsi)*1]), &(stack[((hsi*64+12096)*1+lsi)*1]), &(stack[((hsi*64+9325)*1+lsi)*1]), &(stack[((hsi*64+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+5292)*1+lsi)*1]),&(stack[((hsi*441+13042)*1+lsi)*1]),441);
CR_aB_Z8__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*63+13483)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*63+13546)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*63+13609)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h002__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*441+13672)*1+lsi)*1]), &(stack[((hsi*63+13609)*1+lsi)*1]), &(stack[((hsi*63+13546)*1+lsi)*1]), &(stack[((hsi*63+13483)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+4851)*1+lsi)*1]),&(stack[((hsi*441+13672)*1+lsi)*1]),441);
CR_aB_h010__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*441+14113)*1+lsi)*1]), &(stack[((hsi*64+12096)*1+lsi)*1]), &(stack[((hsi*64+9325)*1+lsi)*1]), &(stack[((hsi*64+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+4410)*1+lsi)*1]),&(stack[((hsi*441+14113)*1+lsi)*1]),441);
CR_aB_h010__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*441+14554)*1+lsi)*1]), &(stack[((hsi*64+12096)*1+lsi)*1]), &(stack[((hsi*64+9325)*1+lsi)*1]), &(stack[((hsi*64+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+3969)*1+lsi)*1]),&(stack[((hsi*441+14554)*1+lsi)*1]),441);
CR_aB_h010__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*441+14995)*1+lsi)*1]), &(stack[((hsi*64+12096)*1+lsi)*1]), &(stack[((hsi*64+9325)*1+lsi)*1]), &(stack[((hsi*64+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+3528)*1+lsi)*1]),&(stack[((hsi*441+14995)*1+lsi)*1]),441);
CR_aB_h011__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*441+15436)*1+lsi)*1]), &(stack[((hsi*63+13609)*1+lsi)*1]), &(stack[((hsi*63+13546)*1+lsi)*1]), &(stack[((hsi*63+13483)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+3087)*1+lsi)*1]),&(stack[((hsi*441+15436)*1+lsi)*1]),441);
CR_aB_h020__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*441+15877)*1+lsi)*1]), &(stack[((hsi*63+13609)*1+lsi)*1]), &(stack[((hsi*63+13546)*1+lsi)*1]), &(stack[((hsi*63+13483)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+2646)*1+lsi)*1]),&(stack[((hsi*441+15877)*1+lsi)*1]),441);
CR_aB_h100__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*441+16318)*1+lsi)*1]), &(stack[((hsi*64+12096)*1+lsi)*1]), &(stack[((hsi*64+9325)*1+lsi)*1]), &(stack[((hsi*64+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+2205)*1+lsi)*1]),&(stack[((hsi*441+16318)*1+lsi)*1]),441);
CR_aB_h100__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*441+16759)*1+lsi)*1]), &(stack[((hsi*64+12096)*1+lsi)*1]), &(stack[((hsi*64+9325)*1+lsi)*1]), &(stack[((hsi*64+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+1764)*1+lsi)*1]),&(stack[((hsi*441+16759)*1+lsi)*1]),441);
CR_aB_h100__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*441+17200)*1+lsi)*1]), &(stack[((hsi*64+12096)*1+lsi)*1]), &(stack[((hsi*64+9325)*1+lsi)*1]), &(stack[((hsi*64+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+1323)*1+lsi)*1]),&(stack[((hsi*441+17200)*1+lsi)*1]),441);
CR_aB_h101__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*441+17641)*1+lsi)*1]), &(stack[((hsi*63+13609)*1+lsi)*1]), &(stack[((hsi*63+13546)*1+lsi)*1]), &(stack[((hsi*63+13483)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+882)*1+lsi)*1]),&(stack[((hsi*441+17641)*1+lsi)*1]),441);
CR_aB_h110__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*441+18082)*1+lsi)*1]), &(stack[((hsi*63+13609)*1+lsi)*1]), &(stack[((hsi*63+13546)*1+lsi)*1]), &(stack[((hsi*63+13483)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+441)*1+lsi)*1]),&(stack[((hsi*441+18082)*1+lsi)*1]),441);
CR_aB_h200__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*441+18523)*1+lsi)*1]), &(stack[((hsi*63+13609)*1+lsi)*1]), &(stack[((hsi*63+13546)*1+lsi)*1]), &(stack[((hsi*63+13483)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+0)*1+lsi)*1]),&(stack[((hsi*441+18523)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 9261 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
