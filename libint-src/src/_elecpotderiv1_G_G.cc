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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gd001.h>
#include <HRRPart0bra0ket0gd010.h>
#include <HRRPart0bra0ket0gd100.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gf001.h>
#include <HRRPart0bra0ket0gf010.h>
#include <HRRPart0bra0ket0gf100.h>
#include <HRRPart0bra0ket0gg001.h>
#include <HRRPart0bra0ket0gg010.h>
#include <HRRPart0bra0ket0gg100.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001d.h>
#include <HRRPart0bra0ket0g001f.h>
#include <HRRPart0bra0ket0g001g.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010d.h>
#include <HRRPart0bra0ket0g010f.h>
#include <HRRPart0bra0ket0g010g.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100d.h>
#include <HRRPart0bra0ket0g100f.h>
#include <HRRPart0bra0ket0g100g.h>
#include <HRRPart0bra0ket0g100p.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hd001.h>
#include <HRRPart0bra0ket0hd010.h>
#include <HRRPart0bra0ket0hd100.h>
#include <HRRPart0bra0ket0hf001.h>
#include <HRRPart0bra0ket0hf010.h>
#include <HRRPart0bra0ket0hf100.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001d.h>
#include <HRRPart0bra0ket0h001f.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010d.h>
#include <HRRPart0bra0ket0h010f.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100d.h>
#include <HRRPart0bra0ket0h100f.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0id001.h>
#include <HRRPart0bra0ket0id010.h>
#include <HRRPart0bra0ket0id100.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001d.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010d.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100d.h>
#include <HRRPart0bra0ket0i100p.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100p.h>
#include <_elecpotderiv1_G_G_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_G_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,970)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_G_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2320)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2383)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]), &(inteval->stack[((hsi*15+230)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2428)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]), &(inteval->stack[((hsi*45+2383)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2518)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2602)*1+lsi)*1]), &(inteval->stack[((hsi*84+2518)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+2728)*1+lsi)*1]), &(inteval->stack[((hsi*126+2602)*1+lsi)*1]), &(inteval->stack[((hsi*90+2428)*1+lsi)*1]),1);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*28+906)*1+lsi)*1]), &(inteval->stack[((hsi*21+934)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*36+870)*1+lsi)*1]), &(inteval->stack[((hsi*28+906)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]),1);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+3151)*1+lsi)*1]), &(inteval->stack[((hsi*21+934)*1+lsi)*1]), &(inteval->stack[((hsi*15+955)*1+lsi)*1]), &(inteval->stack[((hsi*15+230)*1+lsi)*1]),1);
HRRPart0bra0ket0gd001(inteval, &(inteval->stack[((hsi*90+3196)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*45+3151)*1+lsi)*1]), &(inteval->stack[((hsi*45+2383)*1+lsi)*1]),1);
HRRPart0bra0ket0gf001(inteval, &(inteval->stack[((hsi*150+3286)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*90+3196)*1+lsi)*1]), &(inteval->stack[((hsi*90+2428)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+3151)*1+lsi)*1]), &(inteval->stack[((hsi*45+825)*1+lsi)*1]), &(inteval->stack[((hsi*36+870)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0id001(inteval, &(inteval->stack[((hsi*168+3436)*1+lsi)*1]), &(inteval->stack[((hsi*108+3151)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*84+2518)*1+lsi)*1]),1);
HRRPart0bra0ket0hf001(inteval, &(inteval->stack[((hsi*210+3604)*1+lsi)*1]), &(inteval->stack[((hsi*168+3436)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*126+2602)*1+lsi)*1]),1);
HRRPart0bra0ket0gg001(inteval, &(inteval->stack[((hsi*225+2095)*1+lsi)*1]), &(inteval->stack[((hsi*210+3604)*1+lsi)*1]), &(inteval->stack[((hsi*150+3286)*1+lsi)*1]), &(inteval->stack[((hsi*150+2728)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*28+761)*1+lsi)*1]), &(inteval->stack[((hsi*21+789)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*36+725)*1+lsi)*1]), &(inteval->stack[((hsi*28+761)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]),1);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+3436)*1+lsi)*1]), &(inteval->stack[((hsi*21+789)*1+lsi)*1]), &(inteval->stack[((hsi*15+810)*1+lsi)*1]), &(inteval->stack[((hsi*15+230)*1+lsi)*1]),1);
HRRPart0bra0ket0gd010(inteval, &(inteval->stack[((hsi*90+761)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*45+3436)*1+lsi)*1]), &(inteval->stack[((hsi*45+2383)*1+lsi)*1]),1);
HRRPart0bra0ket0gf010(inteval, &(inteval->stack[((hsi*150+3436)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*90+761)*1+lsi)*1]), &(inteval->stack[((hsi*90+2428)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+761)*1+lsi)*1]), &(inteval->stack[((hsi*45+680)*1+lsi)*1]), &(inteval->stack[((hsi*36+725)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0id010(inteval, &(inteval->stack[((hsi*168+3814)*1+lsi)*1]), &(inteval->stack[((hsi*108+761)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*84+2518)*1+lsi)*1]),1);
HRRPart0bra0ket0hf010(inteval, &(inteval->stack[((hsi*210+680)*1+lsi)*1]), &(inteval->stack[((hsi*168+3814)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*126+2602)*1+lsi)*1]),1);
HRRPart0bra0ket0gg010(inteval, &(inteval->stack[((hsi*225+1870)*1+lsi)*1]), &(inteval->stack[((hsi*210+680)*1+lsi)*1]), &(inteval->stack[((hsi*150+3436)*1+lsi)*1]), &(inteval->stack[((hsi*150+2728)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*28+616)*1+lsi)*1]), &(inteval->stack[((hsi*21+644)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*36+580)*1+lsi)*1]), &(inteval->stack[((hsi*28+616)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]),1);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+3151)*1+lsi)*1]), &(inteval->stack[((hsi*21+644)*1+lsi)*1]), &(inteval->stack[((hsi*15+665)*1+lsi)*1]), &(inteval->stack[((hsi*15+230)*1+lsi)*1]),1);
HRRPart0bra0ket0gd100(inteval, &(inteval->stack[((hsi*90+3196)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*45+3151)*1+lsi)*1]), &(inteval->stack[((hsi*45+2383)*1+lsi)*1]),1);
HRRPart0bra0ket0gf100(inteval, &(inteval->stack[((hsi*150+3814)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*90+3196)*1+lsi)*1]), &(inteval->stack[((hsi*90+2428)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+3151)*1+lsi)*1]), &(inteval->stack[((hsi*45+535)*1+lsi)*1]), &(inteval->stack[((hsi*36+580)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0id100(inteval, &(inteval->stack[((hsi*168+3964)*1+lsi)*1]), &(inteval->stack[((hsi*108+3151)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*84+2518)*1+lsi)*1]),1);
HRRPart0bra0ket0hf100(inteval, &(inteval->stack[((hsi*210+4132)*1+lsi)*1]), &(inteval->stack[((hsi*168+3964)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*126+2602)*1+lsi)*1]),1);
HRRPart0bra0ket0gg100(inteval, &(inteval->stack[((hsi*225+1645)*1+lsi)*1]), &(inteval->stack[((hsi*210+4132)*1+lsi)*1]), &(inteval->stack[((hsi*150+3814)*1+lsi)*1]), &(inteval->stack[((hsi*150+2728)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*28+471)*1+lsi)*1]), &(inteval->stack[((hsi*21+499)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*36+435)*1+lsi)*1]), &(inteval->stack[((hsi*28+471)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*45+3964)*1+lsi)*1]), &(inteval->stack[((hsi*21+499)*1+lsi)*1]), &(inteval->stack[((hsi*15+520)*1+lsi)*1]), &(inteval->stack[((hsi*15+230)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d(inteval, &(inteval->stack[((hsi*90+471)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*45+3964)*1+lsi)*1]), &(inteval->stack[((hsi*45+2383)*1+lsi)*1]),1);
HRRPart0bra0ket0g001f(inteval, &(inteval->stack[((hsi*150+3964)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*90+471)*1+lsi)*1]), &(inteval->stack[((hsi*90+2428)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+471)*1+lsi)*1]), &(inteval->stack[((hsi*45+390)*1+lsi)*1]), &(inteval->stack[((hsi*36+435)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d(inteval, &(inteval->stack[((hsi*168+4342)*1+lsi)*1]), &(inteval->stack[((hsi*108+471)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*84+2518)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f(inteval, &(inteval->stack[((hsi*210+390)*1+lsi)*1]), &(inteval->stack[((hsi*168+4342)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*126+2602)*1+lsi)*1]),1);
HRRPart0bra0ket0g001g(inteval, &(inteval->stack[((hsi*225+1420)*1+lsi)*1]), &(inteval->stack[((hsi*210+390)*1+lsi)*1]), &(inteval->stack[((hsi*150+3964)*1+lsi)*1]), &(inteval->stack[((hsi*150+2728)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*28+326)*1+lsi)*1]), &(inteval->stack[((hsi*21+354)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*36+290)*1+lsi)*1]), &(inteval->stack[((hsi*28+326)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*45+3151)*1+lsi)*1]), &(inteval->stack[((hsi*21+354)*1+lsi)*1]), &(inteval->stack[((hsi*15+375)*1+lsi)*1]), &(inteval->stack[((hsi*15+230)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d(inteval, &(inteval->stack[((hsi*90+3196)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*45+3151)*1+lsi)*1]), &(inteval->stack[((hsi*45+2383)*1+lsi)*1]),1);
HRRPart0bra0ket0g010f(inteval, &(inteval->stack[((hsi*150+4342)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*90+3196)*1+lsi)*1]), &(inteval->stack[((hsi*90+2428)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+3151)*1+lsi)*1]), &(inteval->stack[((hsi*45+245)*1+lsi)*1]), &(inteval->stack[((hsi*36+290)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d(inteval, &(inteval->stack[((hsi*168+4492)*1+lsi)*1]), &(inteval->stack[((hsi*108+3151)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*84+2518)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f(inteval, &(inteval->stack[((hsi*210+4660)*1+lsi)*1]), &(inteval->stack[((hsi*168+4492)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*126+2602)*1+lsi)*1]),1);
HRRPart0bra0ket0g010g(inteval, &(inteval->stack[((hsi*225+1195)*1+lsi)*1]), &(inteval->stack[((hsi*210+4660)*1+lsi)*1]), &(inteval->stack[((hsi*150+4342)*1+lsi)*1]), &(inteval->stack[((hsi*150+2728)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*28+117)*1+lsi)*1]), &(inteval->stack[((hsi*21+173)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+117)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*45+4492)*1+lsi)*1]), &(inteval->stack[((hsi*21+173)*1+lsi)*1]), &(inteval->stack[((hsi*15+215)*1+lsi)*1]), &(inteval->stack[((hsi*15+230)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d(inteval, &(inteval->stack[((hsi*90+117)*1+lsi)*1]), &(inteval->stack[((hsi*63+2878)*1+lsi)*1]), &(inteval->stack[((hsi*45+4492)*1+lsi)*1]), &(inteval->stack[((hsi*45+2383)*1+lsi)*1]),1);
HRRPart0bra0ket0g100f(inteval, &(inteval->stack[((hsi*150+207)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*90+117)*1+lsi)*1]), &(inteval->stack[((hsi*90+2428)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+2320)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d(inteval, &(inteval->stack[((hsi*168+4492)*1+lsi)*1]), &(inteval->stack[((hsi*108+2320)*1+lsi)*1]), &(inteval->stack[((hsi*84+2941)*1+lsi)*1]), &(inteval->stack[((hsi*84+2518)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f(inteval, &(inteval->stack[((hsi*210+2320)*1+lsi)*1]), &(inteval->stack[((hsi*168+4492)*1+lsi)*1]), &(inteval->stack[((hsi*126+3025)*1+lsi)*1]), &(inteval->stack[((hsi*126+2602)*1+lsi)*1]),1);
HRRPart0bra0ket0g100g(inteval, &(inteval->stack[((hsi*225+970)*1+lsi)*1]), &(inteval->stack[((hsi*210+2320)*1+lsi)*1]), &(inteval->stack[((hsi*150+207)*1+lsi)*1]), &(inteval->stack[((hsi*150+2728)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*225+970)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*225+1195)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*225+1420)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*225+1645)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*225+1870)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*225+2095)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
