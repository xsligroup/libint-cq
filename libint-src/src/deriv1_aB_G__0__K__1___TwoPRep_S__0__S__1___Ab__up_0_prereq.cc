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
#include <CR_DerivGaussP0InBra_aB_g001__0__k__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_g010__0__k__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_g100__0__k__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0__k__1___TwoPRep_s001__0__s__1___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0__k__1___TwoPRep_s010__0__s__1___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0__k__1___TwoPRep_s100__0__s__1___Ab__up_0.h>
#include <CR_DerivGaussP1InKet_aB_g__0__k__1___TwoPRep_s__0__s001__1___Ab__up_0.h>
#include <CR_DerivGaussP1InKet_aB_g__0__k__1___TwoPRep_s__0__s010__1___Ab__up_0.h>
#include <CR_DerivGaussP1InKet_aB_g__0__k__1___TwoPRep_s__0__s100__1___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0kp.h>
#include <OSVRRP0InBra_aB_d__0__g__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_d__0__h__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_d__0__i__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_d__0__k__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_d__0__l__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_f__0__h__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_f__0__i__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_f__0__k__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_f__0__l__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_g__0__i__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_g__0__k__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_g__0__l__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_h__0__k__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_p__0__f__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_p__0__g__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_p__0__h__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_p__0__i__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_p__0__k__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP0InBra_aB_p__0__l__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP1InBra_aB_s__0__h__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP1InBra_aB_s__0__i__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP1InBra_aB_s__0__k__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP1InBra_aB_s__0__l__1___TwoPRep_s__0__s__1___Ab__up_0.h>
#include <OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_G__0__K__1___TwoPRep_S__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4860)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_6[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_7[vi]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4863)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_6[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+4866)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_6[vi]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4872)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_7[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_8[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+4875)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]), &(stack[((hsi*3+4872)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_6[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_7[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+4881)*1+lsi)*1]), &(stack[((hsi*6+4866)*1+lsi)*1]), &(stack[((hsi*6+4875)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4891)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+4894)*1+lsi)*1]), &(stack[((hsi*3+4891)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+4900)*1+lsi)*1]), &(stack[((hsi*6+4894)*1+lsi)*1]), &(stack[((hsi*6+4866)*1+lsi)*1]), &(stack[((hsi*3+4891)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*15+4910)*1+lsi)*1]), &(stack[((hsi*10+4900)*1+lsi)*1]), &(stack[((hsi*10+4881)*1+lsi)*1]), &(stack[((hsi*6+4894)*1+lsi)*1]), &(stack[((hsi*6+4866)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4863)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+4925)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(stack[((hsi*3+4891)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+4931)*1+lsi)*1]), &(stack[((hsi*6+4925)*1+lsi)*1]), &(stack[((hsi*6+4894)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(stack[((hsi*3+4891)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*15+4941)*1+lsi)*1]), &(stack[((hsi*10+4931)*1+lsi)*1]), &(stack[((hsi*10+4900)*1+lsi)*1]), &(stack[((hsi*6+4925)*1+lsi)*1]), &(stack[((hsi*6+4894)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*21+4956)*1+lsi)*1]), &(stack[((hsi*15+4941)*1+lsi)*1]), &(stack[((hsi*15+4910)*1+lsi)*1]), &(stack[((hsi*10+4931)*1+lsi)*1]), &(stack[((hsi*10+4900)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4891)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_8[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_9[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+4894)*1+lsi)*1]), &(stack[((hsi*3+4872)*1+lsi)*1]), &(stack[((hsi*3+4891)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_7[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_8[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+4977)*1+lsi)*1]), &(stack[((hsi*6+4875)*1+lsi)*1]), &(stack[((hsi*6+4894)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]), &(stack[((hsi*3+4872)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*15+4987)*1+lsi)*1]), &(stack[((hsi*10+4881)*1+lsi)*1]), &(stack[((hsi*10+4977)*1+lsi)*1]), &(stack[((hsi*6+4866)*1+lsi)*1]), &(stack[((hsi*6+4875)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*21+5002)*1+lsi)*1]), &(stack[((hsi*15+4910)*1+lsi)*1]), &(stack[((hsi*15+4987)*1+lsi)*1]), &(stack[((hsi*10+4900)*1+lsi)*1]), &(stack[((hsi*10+4881)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*28+5023)*1+lsi)*1]), &(stack[((hsi*21+4956)*1+lsi)*1]), &(stack[((hsi*21+5002)*1+lsi)*1]), &(stack[((hsi*15+4941)*1+lsi)*1]), &(stack[((hsi*15+4910)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4860)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+5051)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+5057)*1+lsi)*1]), &(stack[((hsi*6+5051)*1+lsi)*1]), &(stack[((hsi*6+4925)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*15+5067)*1+lsi)*1]), &(stack[((hsi*10+5057)*1+lsi)*1]), &(stack[((hsi*10+4931)*1+lsi)*1]), &(stack[((hsi*6+5051)*1+lsi)*1]), &(stack[((hsi*6+4925)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*21+5082)*1+lsi)*1]), &(stack[((hsi*15+5067)*1+lsi)*1]), &(stack[((hsi*15+4941)*1+lsi)*1]), &(stack[((hsi*10+5057)*1+lsi)*1]), &(stack[((hsi*10+4931)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*28+5103)*1+lsi)*1]), &(stack[((hsi*21+5082)*1+lsi)*1]), &(stack[((hsi*21+4956)*1+lsi)*1]), &(stack[((hsi*15+5067)*1+lsi)*1]), &(stack[((hsi*15+4941)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*36+5131)*1+lsi)*1]), &(stack[((hsi*28+5103)*1+lsi)*1]), &(stack[((hsi*28+5023)*1+lsi)*1]), &(stack[((hsi*21+5082)*1+lsi)*1]), &(stack[((hsi*21+4956)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4863)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+4925)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+4931)*1+lsi)*1]), &(stack[((hsi*6+4925)*1+lsi)*1]), &(stack[((hsi*6+5051)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*15+5167)*1+lsi)*1]), &(stack[((hsi*10+4931)*1+lsi)*1]), &(stack[((hsi*10+5057)*1+lsi)*1]), &(stack[((hsi*6+4925)*1+lsi)*1]), &(stack[((hsi*6+5051)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*21+5182)*1+lsi)*1]), &(stack[((hsi*15+5167)*1+lsi)*1]), &(stack[((hsi*15+5067)*1+lsi)*1]), &(stack[((hsi*10+4931)*1+lsi)*1]), &(stack[((hsi*10+5057)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*28+5203)*1+lsi)*1]), &(stack[((hsi*21+5182)*1+lsi)*1]), &(stack[((hsi*21+5082)*1+lsi)*1]), &(stack[((hsi*15+5167)*1+lsi)*1]), &(stack[((hsi*15+5067)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*36+5231)*1+lsi)*1]), &(stack[((hsi*28+5203)*1+lsi)*1]), &(stack[((hsi*28+5103)*1+lsi)*1]), &(stack[((hsi*21+5182)*1+lsi)*1]), &(stack[((hsi*21+5082)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*84+5267)*1+lsi)*1]), &(stack[((hsi*28+5103)*1+lsi)*1]), &(stack[((hsi*28+5023)*1+lsi)*1]), &(stack[((hsi*21+4956)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4860)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_9[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_10[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+5051)*1+lsi)*1]), &(stack[((hsi*3+4891)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_8[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_9[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+5057)*1+lsi)*1]), &(stack[((hsi*6+4894)*1+lsi)*1]), &(stack[((hsi*6+5051)*1+lsi)*1]), &(stack[((hsi*3+4872)*1+lsi)*1]), &(stack[((hsi*3+4891)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*15+5067)*1+lsi)*1]), &(stack[((hsi*10+4977)*1+lsi)*1]), &(stack[((hsi*10+5057)*1+lsi)*1]), &(stack[((hsi*6+4875)*1+lsi)*1]), &(stack[((hsi*6+4894)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*21+5351)*1+lsi)*1]), &(stack[((hsi*15+4987)*1+lsi)*1]), &(stack[((hsi*15+5067)*1+lsi)*1]), &(stack[((hsi*10+4881)*1+lsi)*1]), &(stack[((hsi*10+4977)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*28+5372)*1+lsi)*1]), &(stack[((hsi*21+5002)*1+lsi)*1]), &(stack[((hsi*21+5351)*1+lsi)*1]), &(stack[((hsi*15+4910)*1+lsi)*1]), &(stack[((hsi*15+4987)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*36+5400)*1+lsi)*1]), &(stack[((hsi*28+5023)*1+lsi)*1]), &(stack[((hsi*28+5372)*1+lsi)*1]), &(stack[((hsi*21+4956)*1+lsi)*1]), &(stack[((hsi*21+5002)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*108+5436)*1+lsi)*1]), &(stack[((hsi*36+5131)*1+lsi)*1]), &(stack[((hsi*36+5400)*1+lsi)*1]), &(stack[((hsi*28+5023)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*108+5544)*1+lsi)*1]), &(stack[((hsi*36+5231)*1+lsi)*1]), &(stack[((hsi*36+5131)*1+lsi)*1]), &(stack[((hsi*28+5103)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*216+5652)*1+lsi)*1]), &(stack[((hsi*108+5544)*1+lsi)*1]), &(stack[((hsi*108+5436)*1+lsi)*1]), &(stack[((hsi*36+5231)*1+lsi)*1]), &(stack[((hsi*36+5131)*1+lsi)*1]), &(stack[((hsi*84+5267)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*63+5868)*1+lsi)*1]), &(stack[((hsi*21+5082)*1+lsi)*1]), &(stack[((hsi*21+4956)*1+lsi)*1]), &(stack[((hsi*15+4941)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*84+5931)*1+lsi)*1]), &(stack[((hsi*28+5203)*1+lsi)*1]), &(stack[((hsi*28+5103)*1+lsi)*1]), &(stack[((hsi*21+5082)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*168+6015)*1+lsi)*1]), &(stack[((hsi*84+5931)*1+lsi)*1]), &(stack[((hsi*84+5267)*1+lsi)*1]), &(stack[((hsi*28+5203)*1+lsi)*1]), &(stack[((hsi*28+5103)*1+lsi)*1]), &(stack[((hsi*63+5868)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4872)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+4875)*1+lsi)*1]), &(stack[((hsi*3+4872)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+6183)*1+lsi)*1]), &(stack[((hsi*6+4875)*1+lsi)*1]), &(stack[((hsi*6+4925)*1+lsi)*1]), &(stack[((hsi*3+4872)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*15+6193)*1+lsi)*1]), &(stack[((hsi*10+6183)*1+lsi)*1]), &(stack[((hsi*10+4931)*1+lsi)*1]), &(stack[((hsi*6+4875)*1+lsi)*1]), &(stack[((hsi*6+4925)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*21+6208)*1+lsi)*1]), &(stack[((hsi*15+6193)*1+lsi)*1]), &(stack[((hsi*15+5167)*1+lsi)*1]), &(stack[((hsi*10+6183)*1+lsi)*1]), &(stack[((hsi*10+4931)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*28+6229)*1+lsi)*1]), &(stack[((hsi*21+6208)*1+lsi)*1]), &(stack[((hsi*21+5182)*1+lsi)*1]), &(stack[((hsi*15+6193)*1+lsi)*1]), &(stack[((hsi*15+5167)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*36+6257)*1+lsi)*1]), &(stack[((hsi*28+6229)*1+lsi)*1]), &(stack[((hsi*28+5203)*1+lsi)*1]), &(stack[((hsi*21+6208)*1+lsi)*1]), &(stack[((hsi*21+5182)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*108+6293)*1+lsi)*1]), &(stack[((hsi*36+6257)*1+lsi)*1]), &(stack[((hsi*36+5231)*1+lsi)*1]), &(stack[((hsi*28+5203)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*216+6401)*1+lsi)*1]), &(stack[((hsi*108+6293)*1+lsi)*1]), &(stack[((hsi*108+5544)*1+lsi)*1]), &(stack[((hsi*36+6257)*1+lsi)*1]), &(stack[((hsi*36+5231)*1+lsi)*1]), &(stack[((hsi*84+5931)*1+lsi)*1]));
OSVRRP0InBra_aB_f__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*360+6617)*1+lsi)*1]), &(stack[((hsi*216+6401)*1+lsi)*1]), &(stack[((hsi*216+5652)*1+lsi)*1]), &(stack[((hsi*108+6293)*1+lsi)*1]), &(stack[((hsi*108+5544)*1+lsi)*1]), &(stack[((hsi*168+6015)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*63+6293)*1+lsi)*1]), &(stack[((hsi*21+4956)*1+lsi)*1]), &(stack[((hsi*21+5002)*1+lsi)*1]), &(stack[((hsi*15+4910)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*84+6977)*1+lsi)*1]), &(stack[((hsi*28+5023)*1+lsi)*1]), &(stack[((hsi*28+5372)*1+lsi)*1]), &(stack[((hsi*21+5002)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*168+7061)*1+lsi)*1]), &(stack[((hsi*84+5267)*1+lsi)*1]), &(stack[((hsi*84+6977)*1+lsi)*1]), &(stack[((hsi*28+5103)*1+lsi)*1]), &(stack[((hsi*28+5023)*1+lsi)*1]), &(stack[((hsi*63+6293)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+4863)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_10[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_11[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+6183)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_9[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_10[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+6356)*1+lsi)*1]), &(stack[((hsi*6+5051)*1+lsi)*1]), &(stack[((hsi*6+6183)*1+lsi)*1]), &(stack[((hsi*3+4891)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*15+6189)*1+lsi)*1]), &(stack[((hsi*10+5057)*1+lsi)*1]), &(stack[((hsi*10+6356)*1+lsi)*1]), &(stack[((hsi*6+4894)*1+lsi)*1]), &(stack[((hsi*6+5051)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*21+5167)*1+lsi)*1]), &(stack[((hsi*15+5067)*1+lsi)*1]), &(stack[((hsi*15+6189)*1+lsi)*1]), &(stack[((hsi*10+4977)*1+lsi)*1]), &(stack[((hsi*10+5057)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*28+6366)*1+lsi)*1]), &(stack[((hsi*21+5351)*1+lsi)*1]), &(stack[((hsi*21+5167)*1+lsi)*1]), &(stack[((hsi*15+4987)*1+lsi)*1]), &(stack[((hsi*15+5067)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*36+7229)*1+lsi)*1]), &(stack[((hsi*28+5372)*1+lsi)*1]), &(stack[((hsi*28+6366)*1+lsi)*1]), &(stack[((hsi*21+5002)*1+lsi)*1]), &(stack[((hsi*21+5351)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*108+7265)*1+lsi)*1]), &(stack[((hsi*36+5400)*1+lsi)*1]), &(stack[((hsi*36+7229)*1+lsi)*1]), &(stack[((hsi*28+5372)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*216+7373)*1+lsi)*1]), &(stack[((hsi*108+5436)*1+lsi)*1]), &(stack[((hsi*108+7265)*1+lsi)*1]), &(stack[((hsi*36+5131)*1+lsi)*1]), &(stack[((hsi*36+5400)*1+lsi)*1]), &(stack[((hsi*84+6977)*1+lsi)*1]));
OSVRRP0InBra_aB_f__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*360+7589)*1+lsi)*1]), &(stack[((hsi*216+5652)*1+lsi)*1]), &(stack[((hsi*216+7373)*1+lsi)*1]), &(stack[((hsi*108+5544)*1+lsi)*1]), &(stack[((hsi*108+5436)*1+lsi)*1]), &(stack[((hsi*168+7061)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*45+7949)*1+lsi)*1]), &(stack[((hsi*15+4941)*1+lsi)*1]), &(stack[((hsi*15+4910)*1+lsi)*1]), &(stack[((hsi*10+4900)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*126+7994)*1+lsi)*1]), &(stack[((hsi*63+5868)*1+lsi)*1]), &(stack[((hsi*63+6293)*1+lsi)*1]), &(stack[((hsi*21+5082)*1+lsi)*1]), &(stack[((hsi*21+4956)*1+lsi)*1]), &(stack[((hsi*45+7949)*1+lsi)*1]));
OSVRRP0InBra_aB_f__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*280+8120)*1+lsi)*1]), &(stack[((hsi*168+6015)*1+lsi)*1]), &(stack[((hsi*168+7061)*1+lsi)*1]), &(stack[((hsi*84+5931)*1+lsi)*1]), &(stack[((hsi*84+5267)*1+lsi)*1]), &(stack[((hsi*126+7994)*1+lsi)*1]));
OSVRRP0InBra_aB_g__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*540+8400)*1+lsi)*1]), &(stack[((hsi*360+6617)*1+lsi)*1]), &(stack[((hsi*360+7589)*1+lsi)*1]), &(stack[((hsi*216+6401)*1+lsi)*1]), &(stack[((hsi*216+5652)*1+lsi)*1]), &(stack[((hsi*280+8120)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*45+6394)*1+lsi)*1]), &(stack[((hsi*36+5131)*1+lsi)*1]), &(stack[((hsi*36+5400)*1+lsi)*1]), &(stack[((hsi*28+5103)*1+lsi)*1]), &(stack[((hsi*28+5023)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*45+6439)*1+lsi)*1]), &(stack[((hsi*36+5231)*1+lsi)*1]), &(stack[((hsi*36+5131)*1+lsi)*1]), &(stack[((hsi*28+5203)*1+lsi)*1]), &(stack[((hsi*28+5103)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*135+8940)*1+lsi)*1]), &(stack[((hsi*45+6439)*1+lsi)*1]), &(stack[((hsi*45+6394)*1+lsi)*1]), &(stack[((hsi*36+5131)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*45+6484)*1+lsi)*1]), &(stack[((hsi*36+5400)*1+lsi)*1]), &(stack[((hsi*36+7229)*1+lsi)*1]), &(stack[((hsi*28+5023)*1+lsi)*1]), &(stack[((hsi*28+5372)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*135+9075)*1+lsi)*1]), &(stack[((hsi*45+6394)*1+lsi)*1]), &(stack[((hsi*45+6484)*1+lsi)*1]), &(stack[((hsi*36+5400)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*270+9210)*1+lsi)*1]), &(stack[((hsi*135+8940)*1+lsi)*1]), &(stack[((hsi*135+9075)*1+lsi)*1]), &(stack[((hsi*45+6439)*1+lsi)*1]), &(stack[((hsi*45+6394)*1+lsi)*1]), &(stack[((hsi*108+5436)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*45+6529)*1+lsi)*1]), &(stack[((hsi*36+6257)*1+lsi)*1]), &(stack[((hsi*36+5231)*1+lsi)*1]), &(stack[((hsi*28+6229)*1+lsi)*1]), &(stack[((hsi*28+5203)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*135+9480)*1+lsi)*1]), &(stack[((hsi*45+6529)*1+lsi)*1]), &(stack[((hsi*45+6439)*1+lsi)*1]), &(stack[((hsi*36+5231)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*270+9615)*1+lsi)*1]), &(stack[((hsi*135+9480)*1+lsi)*1]), &(stack[((hsi*135+8940)*1+lsi)*1]), &(stack[((hsi*45+6529)*1+lsi)*1]), &(stack[((hsi*45+6439)*1+lsi)*1]), &(stack[((hsi*108+5544)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*3+5544)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_11[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_12[vi]));
OSVRRP1InBra_aB_s__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*6+5547)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]), &(stack[((hsi*3+5544)*1+lsi)*1]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_10[vi]), &(inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_11[vi]));
OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*10+4977)*1+lsi)*1]), &(stack[((hsi*6+6183)*1+lsi)*1]), &(stack[((hsi*6+5547)*1+lsi)*1]), &(stack[((hsi*3+4860)*1+lsi)*1]), &(stack[((hsi*3+4863)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*15+5544)*1+lsi)*1]), &(stack[((hsi*10+6356)*1+lsi)*1]), &(stack[((hsi*10+4977)*1+lsi)*1]), &(stack[((hsi*6+5051)*1+lsi)*1]), &(stack[((hsi*6+6183)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*21+5559)*1+lsi)*1]), &(stack[((hsi*15+6189)*1+lsi)*1]), &(stack[((hsi*15+5544)*1+lsi)*1]), &(stack[((hsi*10+5057)*1+lsi)*1]), &(stack[((hsi*10+6356)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*28+6204)*1+lsi)*1]), &(stack[((hsi*21+5167)*1+lsi)*1]), &(stack[((hsi*21+5559)*1+lsi)*1]), &(stack[((hsi*15+5067)*1+lsi)*1]), &(stack[((hsi*15+6189)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*36+5051)*1+lsi)*1]), &(stack[((hsi*28+6366)*1+lsi)*1]), &(stack[((hsi*28+6204)*1+lsi)*1]), &(stack[((hsi*21+5351)*1+lsi)*1]), &(stack[((hsi*21+5167)*1+lsi)*1]));
OSVRRP1InBra_aB_s__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*45+6439)*1+lsi)*1]), &(stack[((hsi*36+7229)*1+lsi)*1]), &(stack[((hsi*36+5051)*1+lsi)*1]), &(stack[((hsi*28+5372)*1+lsi)*1]), &(stack[((hsi*28+6366)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*135+5087)*1+lsi)*1]), &(stack[((hsi*45+6484)*1+lsi)*1]), &(stack[((hsi*45+6439)*1+lsi)*1]), &(stack[((hsi*36+7229)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*270+9885)*1+lsi)*1]), &(stack[((hsi*135+9075)*1+lsi)*1]), &(stack[((hsi*135+5087)*1+lsi)*1]), &(stack[((hsi*45+6394)*1+lsi)*1]), &(stack[((hsi*45+6484)*1+lsi)*1]), &(stack[((hsi*108+7265)*1+lsi)*1]));
OSVRRP0InBra_aB_f__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*450+10155)*1+lsi)*1]), &(stack[((hsi*270+9210)*1+lsi)*1]), &(stack[((hsi*270+9885)*1+lsi)*1]), &(stack[((hsi*135+8940)*1+lsi)*1]), &(stack[((hsi*135+9075)*1+lsi)*1]), &(stack[((hsi*216+7373)*1+lsi)*1]));
OSVRRP0InBra_aB_f__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*450+10605)*1+lsi)*1]), &(stack[((hsi*270+9615)*1+lsi)*1]), &(stack[((hsi*270+9210)*1+lsi)*1]), &(stack[((hsi*135+9480)*1+lsi)*1]), &(stack[((hsi*135+8940)*1+lsi)*1]), &(stack[((hsi*216+5652)*1+lsi)*1]));
OSVRRP0InBra_aB_g__0__l__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*675+11055)*1+lsi)*1]), &(stack[((hsi*450+10605)*1+lsi)*1]), &(stack[((hsi*450+10155)*1+lsi)*1]), &(stack[((hsi*270+9615)*1+lsi)*1]), &(stack[((hsi*270+9210)*1+lsi)*1]), &(stack[((hsi*360+7589)*1+lsi)*1]));
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+8940)*1+lsi)*1]), &(stack[((hsi*675+11055)*1+lsi)*1]), &(stack[((hsi*540+8400)*1+lsi)*1]),15);
CR_DerivGaussP1InKet_aB_g__0__k__1___TwoPRep_s__0__s001__1___Ab__up_0(inteval, &(stack[((hsi*540+10560)*1+lsi)*1]), &(stack[((hsi*1620+8940)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+4320)*1+lsi)*1]),&(stack[((hsi*540+10560)*1+lsi)*1]),540);
CR_DerivGaussP1InKet_aB_g__0__k__1___TwoPRep_s__0__s010__1___Ab__up_0(inteval, &(stack[((hsi*540+11100)*1+lsi)*1]), &(stack[((hsi*1620+8940)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+3780)*1+lsi)*1]),&(stack[((hsi*540+11100)*1+lsi)*1]),540);
CR_DerivGaussP1InKet_aB_g__0__k__1___TwoPRep_s__0__s100__1___Ab__up_0(inteval, &(stack[((hsi*540+11640)*1+lsi)*1]), &(stack[((hsi*1620+8940)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+3240)*1+lsi)*1]),&(stack[((hsi*540+11640)*1+lsi)*1]),540);
OSVRRP0InBra_aB_p__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*45+8940)*1+lsi)*1]), &(stack[((hsi*15+4910)*1+lsi)*1]), &(stack[((hsi*15+4987)*1+lsi)*1]), &(stack[((hsi*10+4881)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*63+8985)*1+lsi)*1]), &(stack[((hsi*21+5002)*1+lsi)*1]), &(stack[((hsi*21+5351)*1+lsi)*1]), &(stack[((hsi*15+4987)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*126+9048)*1+lsi)*1]), &(stack[((hsi*63+6293)*1+lsi)*1]), &(stack[((hsi*63+8985)*1+lsi)*1]), &(stack[((hsi*21+4956)*1+lsi)*1]), &(stack[((hsi*21+5002)*1+lsi)*1]), &(stack[((hsi*45+8940)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*84+5931)*1+lsi)*1]), &(stack[((hsi*28+5372)*1+lsi)*1]), &(stack[((hsi*28+6366)*1+lsi)*1]), &(stack[((hsi*21+5351)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*168+9174)*1+lsi)*1]), &(stack[((hsi*84+6977)*1+lsi)*1]), &(stack[((hsi*84+5931)*1+lsi)*1]), &(stack[((hsi*28+5023)*1+lsi)*1]), &(stack[((hsi*28+5372)*1+lsi)*1]), &(stack[((hsi*63+8985)*1+lsi)*1]));
OSVRRP0InBra_aB_f__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*280+9342)*1+lsi)*1]), &(stack[((hsi*168+7061)*1+lsi)*1]), &(stack[((hsi*168+9174)*1+lsi)*1]), &(stack[((hsi*84+5267)*1+lsi)*1]), &(stack[((hsi*84+6977)*1+lsi)*1]), &(stack[((hsi*126+9048)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*30+9622)*1+lsi)*1]), &(stack[((hsi*10+4900)*1+lsi)*1]), &(stack[((hsi*10+4881)*1+lsi)*1]), &(stack[((hsi*6+4866)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*90+9652)*1+lsi)*1]), &(stack[((hsi*45+7949)*1+lsi)*1]), &(stack[((hsi*45+8940)*1+lsi)*1]), &(stack[((hsi*15+4941)*1+lsi)*1]), &(stack[((hsi*15+4910)*1+lsi)*1]), &(stack[((hsi*30+9622)*1+lsi)*1]));
OSVRRP0InBra_aB_f__0__h__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*210+9742)*1+lsi)*1]), &(stack[((hsi*126+7994)*1+lsi)*1]), &(stack[((hsi*126+9048)*1+lsi)*1]), &(stack[((hsi*63+5868)*1+lsi)*1]), &(stack[((hsi*63+6293)*1+lsi)*1]), &(stack[((hsi*90+9652)*1+lsi)*1]));
OSVRRP0InBra_aB_g__0__i__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*420+9952)*1+lsi)*1]), &(stack[((hsi*280+8120)*1+lsi)*1]), &(stack[((hsi*280+9342)*1+lsi)*1]), &(stack[((hsi*168+6015)*1+lsi)*1]), &(stack[((hsi*168+7061)*1+lsi)*1]), &(stack[((hsi*210+9742)*1+lsi)*1]));
OSVRRP0InBra_aB_p__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*108+5544)*1+lsi)*1]), &(stack[((hsi*36+7229)*1+lsi)*1]), &(stack[((hsi*36+5051)*1+lsi)*1]), &(stack[((hsi*28+6366)*1+lsi)*1]));
OSVRRP0InBra_aB_d__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*216+6015)*1+lsi)*1]), &(stack[((hsi*108+7265)*1+lsi)*1]), &(stack[((hsi*108+5544)*1+lsi)*1]), &(stack[((hsi*36+5400)*1+lsi)*1]), &(stack[((hsi*36+7229)*1+lsi)*1]), &(stack[((hsi*84+5931)*1+lsi)*1]));
OSVRRP0InBra_aB_f__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*360+4860)*1+lsi)*1]), &(stack[((hsi*216+7373)*1+lsi)*1]), &(stack[((hsi*216+6015)*1+lsi)*1]), &(stack[((hsi*108+5436)*1+lsi)*1]), &(stack[((hsi*108+7265)*1+lsi)*1]), &(stack[((hsi*168+9174)*1+lsi)*1]));
OSVRRP0InBra_aB_g__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*540+5868)*1+lsi)*1]), &(stack[((hsi*360+7589)*1+lsi)*1]), &(stack[((hsi*360+4860)*1+lsi)*1]), &(stack[((hsi*216+5652)*1+lsi)*1]), &(stack[((hsi*216+7373)*1+lsi)*1]), &(stack[((hsi*280+9342)*1+lsi)*1]));
OSVRRP0InBra_aB_h__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*756+8940)*1+lsi)*1]), &(stack[((hsi*540+8400)*1+lsi)*1]), &(stack[((hsi*540+5868)*1+lsi)*1]), &(stack[((hsi*360+6617)*1+lsi)*1]), &(stack[((hsi*360+7589)*1+lsi)*1]), &(stack[((hsi*420+9952)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*1620+4860)*1+lsi)*1]), &(stack[((hsi*756+8940)*1+lsi)*1]), &(stack[((hsi*540+8400)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_g__0__k__1___TwoPRep_s001__0__s__1___Ab__up_0(inteval, &(stack[((hsi*540+6977)*1+lsi)*1]), &(stack[((hsi*1620+4860)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+2700)*1+lsi)*1]),&(stack[((hsi*540+6977)*1+lsi)*1]),540);
CR_DerivGaussP0InKet_aB_g__0__k__1___TwoPRep_s010__0__s__1___Ab__up_0(inteval, &(stack[((hsi*540+7517)*1+lsi)*1]), &(stack[((hsi*1620+4860)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+2160)*1+lsi)*1]),&(stack[((hsi*540+7517)*1+lsi)*1]),540);
CR_DerivGaussP0InKet_aB_g__0__k__1___TwoPRep_s100__0__s__1___Ab__up_0(inteval, &(stack[((hsi*540+8057)*1+lsi)*1]), &(stack[((hsi*1620+4860)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+1620)*1+lsi)*1]),&(stack[((hsi*540+8057)*1+lsi)*1]),540);
CR_DerivGaussP0InBra_aB_g001__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*540+4860)*1+lsi)*1]), &(stack[((hsi*756+8940)*1+lsi)*1]), &(stack[((hsi*360+6617)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+1080)*1+lsi)*1]),&(stack[((hsi*540+4860)*1+lsi)*1]),540);
CR_DerivGaussP0InBra_aB_g010__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*540+5400)*1+lsi)*1]), &(stack[((hsi*756+8940)*1+lsi)*1]), &(stack[((hsi*360+6617)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+540)*1+lsi)*1]),&(stack[((hsi*540+5400)*1+lsi)*1]),540);
CR_DerivGaussP0InBra_aB_g100__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(inteval, &(stack[((hsi*540+9696)*1+lsi)*1]), &(stack[((hsi*756+8940)*1+lsi)*1]), &(stack[((hsi*360+6617)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+0)*1+lsi)*1]),&(stack[((hsi*540+9696)*1+lsi)*1]),540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4860 */
}

#ifdef __cplusplus
};
#endif
