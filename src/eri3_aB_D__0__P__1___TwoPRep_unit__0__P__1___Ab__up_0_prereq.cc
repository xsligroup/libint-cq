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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_D__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp356;
fp356 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp352;
fp352 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp280;
fp280 = fp352 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp213;
fp213 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp214;
fp214 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp214 + fp213;
LIBINT2_REALTYPE fp138;
fp138 = inteval->WP_z[vi] * fp212;
LIBINT2_REALTYPE fp137;
fp137 = fp138 + fp280;
LIBINT2_REALTYPE fp55;
fp55 = fp356 * fp137;
LIBINT2_REALTYPE fp303;
fp303 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp293;
fp293 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp285;
fp285 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp284;
fp284 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp285;
LIBINT2_REALTYPE fp283;
fp283 = fp293 * fp284;
LIBINT2_REALTYPE fp167;
fp167 = inteval->WQ_z[vi] * fp212;
LIBINT2_REALTYPE fp306;
fp306 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp307;
fp307 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp305;
fp305 = fp307 + fp306;
LIBINT2_REALTYPE fp168;
fp168 = inteval->QC_z[vi] * fp305;
LIBINT2_REALTYPE fp166;
fp166 = fp168 + fp167;
LIBINT2_REALTYPE fp165;
fp165 = fp166 + fp283;
LIBINT2_REALTYPE fp176;
fp176 = inteval->roz[vi] * fp165;
LIBINT2_REALTYPE fp292;
fp292 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp291;
fp291 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp292;
LIBINT2_REALTYPE fp290;
fp290 = fp293 * fp291;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WQ_z[vi] * fp305;
LIBINT2_REALTYPE fp309;
fp309 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp310;
fp310 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp308;
fp308 = fp310 + fp309;
LIBINT2_REALTYPE fp172;
fp172 = inteval->QC_z[vi] * fp308;
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
LIBINT2_REALTYPE fp169;
fp169 = fp170 + fp290;
LIBINT2_REALTYPE fp175;
fp175 = fp169 - fp176;
LIBINT2_REALTYPE fp174;
fp174 = fp303 * fp175;
LIBINT2_REALTYPE fp324;
fp324 = fp356 * fp212;
LIBINT2_REALTYPE fp275;
fp275 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp274;
fp274 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi] - fp275;
LIBINT2_REALTYPE fp273;
fp273 = fp293 * fp274;
LIBINT2_REALTYPE fp210;
fp210 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp211;
fp211 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp209;
fp209 = fp211 + fp210;
LIBINT2_REALTYPE fp163;
fp163 = inteval->WQ_z[vi] * fp209;
LIBINT2_REALTYPE fp164;
fp164 = inteval->QC_z[vi] * fp212;
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
LIBINT2_REALTYPE fp161;
fp161 = fp162 + fp273;
LIBINT2_REALTYPE fp325;
fp325 = inteval->WP_z[vi] * fp161;
LIBINT2_REALTYPE fp323;
fp323 = fp325 + fp324;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_z[vi] * fp323;
LIBINT2_REALTYPE fp56;
fp56 = fp57 + fp174;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp356 * fp142;
LIBINT2_REALTYPE fp252;
fp252 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp251;
fp251 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp252;
LIBINT2_REALTYPE fp250;
fp250 = fp303 * fp251;
LIBINT2_REALTYPE fp132;
fp132 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_z[vi] * fp132;
LIBINT2_REALTYPE fp78;
fp78 = fp79 + fp250;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WQ_z[vi] * fp78;
LIBINT2_REALTYPE fp257;
fp257 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp256;
fp256 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp257;
LIBINT2_REALTYPE fp255;
fp255 = fp303 * fp256;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_z[vi] * fp142;
LIBINT2_REALTYPE fp80;
fp80 = fp81 + fp255;
LIBINT2_REALTYPE fp62;
fp62 = inteval->QC_z[vi] * fp80;
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
LIBINT2_REALTYPE fp52;
fp52 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp230;
fp230 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp231;
fp231 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp229;
fp229 = fp231 + fp230;
LIBINT2_REALTYPE fp358;
fp358 = inteval->WP_z[vi] * fp229;
LIBINT2_REALTYPE fp64;
fp64 = fp352 * fp358;
LIBINT2_REALTYPE fp182;
fp182 = inteval->WQ_z[vi] * fp229;
LIBINT2_REALTYPE fp312;
fp312 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp313;
fp313 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp311;
fp311 = fp313 + fp312;
LIBINT2_REALTYPE fp183;
fp183 = inteval->QC_z[vi] * fp311;
LIBINT2_REALTYPE fp181;
fp181 = fp183 + fp182;
LIBINT2_REALTYPE fp187;
fp187 = inteval->roz[vi] * fp181;
LIBINT2_REALTYPE fp362;
fp362 = inteval->WQ_z[vi] * fp311;
LIBINT2_REALTYPE fp315;
fp315 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp316;
fp316 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp314;
fp314 = fp316 + fp315;
LIBINT2_REALTYPE fp363;
fp363 = inteval->QC_z[vi] * fp314;
LIBINT2_REALTYPE fp361;
fp361 = fp363 + fp362;
LIBINT2_REALTYPE fp186;
fp186 = fp361 - fp187;
LIBINT2_REALTYPE fp185;
fp185 = fp303 * fp186;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp229;
LIBINT2_REALTYPE fp227;
fp227 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp228;
fp228 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
LIBINT2_REALTYPE fp368;
fp368 = inteval->WQ_z[vi] * fp226;
LIBINT2_REALTYPE fp369;
fp369 = inteval->QC_z[vi] * fp229;
LIBINT2_REALTYPE fp367;
fp367 = fp369 + fp368;
LIBINT2_REALTYPE fp327;
fp327 = inteval->WP_z[vi] * fp367;
LIBINT2_REALTYPE fp326;
fp326 = fp327 + fp351;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_z[vi] * fp326;
LIBINT2_REALTYPE fp65;
fp65 = fp66 + fp185;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp51;
fp51 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp195;
fp195 = inteval->WQ_y[vi] * fp229;
LIBINT2_REALTYPE fp196;
fp196 = inteval->QC_y[vi] * fp311;
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
LIBINT2_REALTYPE fp193;
fp193 = fp194 + fp283;
LIBINT2_REALTYPE fp204;
fp204 = inteval->roz[vi] * fp193;
LIBINT2_REALTYPE fp199;
fp199 = inteval->WQ_y[vi] * fp311;
LIBINT2_REALTYPE fp200;
fp200 = inteval->QC_y[vi] * fp314;
LIBINT2_REALTYPE fp198;
fp198 = fp200 + fp199;
LIBINT2_REALTYPE fp197;
fp197 = fp198 + fp290;
LIBINT2_REALTYPE fp203;
fp203 = fp197 - fp204;
LIBINT2_REALTYPE fp202;
fp202 = fp303 * fp203;
LIBINT2_REALTYPE fp191;
fp191 = inteval->WQ_y[vi] * fp226;
LIBINT2_REALTYPE fp192;
fp192 = inteval->QC_y[vi] * fp229;
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
LIBINT2_REALTYPE fp189;
fp189 = fp190 + fp273;
LIBINT2_REALTYPE fp328;
fp328 = inteval->WP_z[vi] * fp189;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_z[vi] * fp328;
LIBINT2_REALTYPE fp67;
fp67 = fp68 + fp202;
LIBINT2_REALTYPE fp50;
fp50 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_y[vi] * fp78;
LIBINT2_REALTYPE fp71;
fp71 = inteval->QC_y[vi] * fp80;
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp49;
fp49 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp270;
fp270 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp271;
fp271 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp269;
fp269 = fp271 + fp270;
LIBINT2_REALTYPE fp359;
fp359 = inteval->WP_z[vi] * fp269;
LIBINT2_REALTYPE fp73;
fp73 = fp352 * fp359;
LIBINT2_REALTYPE fp217;
fp217 = inteval->WQ_z[vi] * fp269;
LIBINT2_REALTYPE fp318;
fp318 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp319;
fp319 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp317;
fp317 = fp319 + fp318;
LIBINT2_REALTYPE fp218;
fp218 = inteval->QC_z[vi] * fp317;
LIBINT2_REALTYPE fp216;
fp216 = fp218 + fp217;
LIBINT2_REALTYPE fp224;
fp224 = inteval->roz[vi] * fp216;
LIBINT2_REALTYPE fp365;
fp365 = inteval->WQ_z[vi] * fp317;
LIBINT2_REALTYPE fp321;
fp321 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp322;
fp322 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp320;
fp320 = fp322 + fp321;
LIBINT2_REALTYPE fp366;
fp366 = inteval->QC_z[vi] * fp320;
LIBINT2_REALTYPE fp364;
fp364 = fp366 + fp365;
LIBINT2_REALTYPE fp223;
fp223 = fp364 - fp224;
LIBINT2_REALTYPE fp222;
fp222 = fp303 * fp223;
LIBINT2_REALTYPE fp341;
fp341 = fp352 * fp269;
LIBINT2_REALTYPE fp265;
fp265 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp266;
fp266 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp264;
fp264 = fp266 + fp265;
LIBINT2_REALTYPE fp371;
fp371 = inteval->WQ_z[vi] * fp264;
LIBINT2_REALTYPE fp372;
fp372 = inteval->QC_z[vi] * fp269;
LIBINT2_REALTYPE fp370;
fp370 = fp372 + fp371;
LIBINT2_REALTYPE fp330;
fp330 = inteval->WP_z[vi] * fp370;
LIBINT2_REALTYPE fp329;
fp329 = fp330 + fp341;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_z[vi] * fp329;
LIBINT2_REALTYPE fp74;
fp74 = fp75 + fp222;
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
LIBINT2_REALTYPE fp48;
fp48 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp237;
fp237 = inteval->WQ_y[vi] * fp269;
LIBINT2_REALTYPE fp238;
fp238 = inteval->QC_y[vi] * fp317;
LIBINT2_REALTYPE fp236;
fp236 = fp238 + fp237;
LIBINT2_REALTYPE fp247;
fp247 = inteval->roz[vi] * fp236;
LIBINT2_REALTYPE fp240;
fp240 = inteval->WQ_y[vi] * fp317;
LIBINT2_REALTYPE fp241;
fp241 = inteval->QC_y[vi] * fp320;
LIBINT2_REALTYPE fp239;
fp239 = fp241 + fp240;
LIBINT2_REALTYPE fp246;
fp246 = fp239 - fp247;
LIBINT2_REALTYPE fp245;
fp245 = fp303 * fp246;
LIBINT2_REALTYPE fp233;
fp233 = inteval->WQ_y[vi] * fp264;
LIBINT2_REALTYPE fp234;
fp234 = inteval->QC_y[vi] * fp269;
LIBINT2_REALTYPE fp232;
fp232 = fp234 + fp233;
LIBINT2_REALTYPE fp331;
fp331 = inteval->WP_z[vi] * fp232;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_z[vi] * fp331;
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp245;
LIBINT2_REALTYPE fp47;
fp47 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_x[vi] * fp78;
LIBINT2_REALTYPE fp84;
fp84 = inteval->QC_x[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
LIBINT2_REALTYPE fp46;
fp46 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp287;
fp287 = inteval->WQ_x[vi] * fp269;
LIBINT2_REALTYPE fp288;
fp288 = inteval->QC_x[vi] * fp317;
LIBINT2_REALTYPE fp286;
fp286 = fp288 + fp287;
LIBINT2_REALTYPE fp282;
fp282 = fp286 + fp283;
LIBINT2_REALTYPE fp302;
fp302 = inteval->roz[vi] * fp282;
LIBINT2_REALTYPE fp295;
fp295 = inteval->WQ_x[vi] * fp317;
LIBINT2_REALTYPE fp296;
fp296 = inteval->QC_x[vi] * fp320;
LIBINT2_REALTYPE fp294;
fp294 = fp296 + fp295;
LIBINT2_REALTYPE fp289;
fp289 = fp294 + fp290;
LIBINT2_REALTYPE fp301;
fp301 = fp289 - fp302;
LIBINT2_REALTYPE fp300;
fp300 = fp303 * fp301;
LIBINT2_REALTYPE fp277;
fp277 = inteval->WQ_x[vi] * fp264;
LIBINT2_REALTYPE fp278;
fp278 = inteval->QC_x[vi] * fp269;
LIBINT2_REALTYPE fp276;
fp276 = fp278 + fp277;
LIBINT2_REALTYPE fp272;
fp272 = fp276 + fp273;
LIBINT2_REALTYPE fp332;
fp332 = inteval->WP_z[vi] * fp272;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * fp332;
LIBINT2_REALTYPE fp85;
fp85 = fp86 + fp300;
LIBINT2_REALTYPE fp45;
fp45 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_y[vi] * fp323;
LIBINT2_REALTYPE fp44;
fp44 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_y[vi] * fp137;
LIBINT2_REALTYPE fp43;
fp43 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp153;
fp153 = inteval->WP_y[vi] * fp229;
LIBINT2_REALTYPE fp152;
fp152 = fp153 + fp280;
LIBINT2_REALTYPE fp90;
fp90 = fp352 * fp152;
LIBINT2_REALTYPE fp348;
fp348 = fp352 * fp212;
LIBINT2_REALTYPE fp335;
fp335 = inteval->WP_y[vi] * fp367;
LIBINT2_REALTYPE fp334;
fp334 = fp335 + fp348;
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_z[vi] * fp334;
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
LIBINT2_REALTYPE fp42;
fp42 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp337;
fp337 = fp356 * fp229;
LIBINT2_REALTYPE fp338;
fp338 = inteval->WP_y[vi] * fp189;
LIBINT2_REALTYPE fp336;
fp336 = fp338 + fp337;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_z[vi] * fp336;
LIBINT2_REALTYPE fp41;
fp41 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * fp152;
LIBINT2_REALTYPE fp40;
fp40 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_y[vi] * fp329;
LIBINT2_REALTYPE fp39;
fp39 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp342;
fp342 = inteval->WP_y[vi] * fp232;
LIBINT2_REALTYPE fp340;
fp340 = fp342 + fp341;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_z[vi] * fp340;
LIBINT2_REALTYPE fp38;
fp38 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp159;
fp159 = inteval->WP_y[vi] * fp269;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_z[vi] * fp159;
LIBINT2_REALTYPE fp37;
fp37 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp343;
fp343 = inteval->WP_y[vi] * fp272;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_z[vi] * fp343;
LIBINT2_REALTYPE fp36;
fp36 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp333;
fp333 = inteval->WP_y[vi] * fp161;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_y[vi] * fp333;
LIBINT2_REALTYPE fp98;
fp98 = fp99 + fp174;
LIBINT2_REALTYPE fp35;
fp35 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp149;
fp149 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_y[vi] * fp149;
LIBINT2_REALTYPE fp122;
fp122 = fp123 + fp250;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_z[vi] * fp122;
LIBINT2_REALTYPE fp157;
fp157 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_y[vi] * fp157;
LIBINT2_REALTYPE fp124;
fp124 = fp125 + fp255;
LIBINT2_REALTYPE fp102;
fp102 = inteval->QC_z[vi] * fp124;
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
LIBINT2_REALTYPE fp34;
fp34 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp360;
fp360 = inteval->WP_y[vi] * fp212;
LIBINT2_REALTYPE fp104;
fp104 = fp352 * fp360;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_y[vi] * fp334;
LIBINT2_REALTYPE fp105;
fp105 = fp106 + fp185;
LIBINT2_REALTYPE fp103;
fp103 = fp105 + fp104;
LIBINT2_REALTYPE fp33;
fp33 = fp103;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp108;
fp108 = fp356 * fp152;
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * fp336;
LIBINT2_REALTYPE fp109;
fp109 = fp110 + fp202;
LIBINT2_REALTYPE fp107;
fp107 = fp109 + fp108;
LIBINT2_REALTYPE fp32;
fp32 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp112;
fp112 = fp356 * fp157;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_y[vi] * fp122;
LIBINT2_REALTYPE fp115;
fp115 = inteval->QC_y[vi] * fp124;
LIBINT2_REALTYPE fp113;
fp113 = fp115 + fp114;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp31;
fp31 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp339;
fp339 = inteval->WP_y[vi] * fp370;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WP_y[vi] * fp339;
LIBINT2_REALTYPE fp116;
fp116 = fp117 + fp222;
LIBINT2_REALTYPE fp30;
fp30 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp119;
fp119 = fp352 * fp159;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_y[vi] * fp340;
LIBINT2_REALTYPE fp120;
fp120 = fp121 + fp245;
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
LIBINT2_REALTYPE fp29;
fp29 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->WQ_x[vi] * fp122;
LIBINT2_REALTYPE fp128;
fp128 = inteval->QC_x[vi] * fp124;
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
LIBINT2_REALTYPE fp28;
fp28 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_y[vi] * fp343;
LIBINT2_REALTYPE fp129;
fp129 = fp130 + fp300;
LIBINT2_REALTYPE fp27;
fp27 = fp129;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp131;
fp131 = inteval->WP_x[vi] * fp323;
LIBINT2_REALTYPE fp26;
fp26 = fp131;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_x[vi] * fp137;
LIBINT2_REALTYPE fp25;
fp25 = fp133;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp134;
fp134 = inteval->WP_x[vi] * fp326;
LIBINT2_REALTYPE fp24;
fp24 = fp134;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp346;
fp346 = inteval->WP_x[vi] * fp189;
LIBINT2_REALTYPE fp135;
fp135 = inteval->WP_z[vi] * fp346;
LIBINT2_REALTYPE fp23;
fp23 = fp135;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp235;
fp235 = inteval->WP_x[vi] * fp229;
LIBINT2_REALTYPE fp136;
fp136 = inteval->WP_z[vi] * fp235;
LIBINT2_REALTYPE fp22;
fp22 = fp136;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp281;
fp281 = inteval->WP_x[vi] * fp269;
LIBINT2_REALTYPE fp279;
fp279 = fp281 + fp280;
LIBINT2_REALTYPE fp155;
fp155 = fp352 * fp279;
LIBINT2_REALTYPE fp349;
fp349 = inteval->WP_x[vi] * fp370;
LIBINT2_REALTYPE fp347;
fp347 = fp349 + fp348;
LIBINT2_REALTYPE fp140;
fp140 = inteval->WP_z[vi] * fp347;
LIBINT2_REALTYPE fp139;
fp139 = fp140 + fp155;
LIBINT2_REALTYPE fp21;
fp21 = fp139;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp353;
fp353 = inteval->WP_x[vi] * fp232;
LIBINT2_REALTYPE fp350;
fp350 = fp353 + fp351;
LIBINT2_REALTYPE fp141;
fp141 = inteval->WP_z[vi] * fp350;
LIBINT2_REALTYPE fp20;
fp20 = fp141;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp143;
fp143 = inteval->WP_z[vi] * fp279;
LIBINT2_REALTYPE fp19;
fp19 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp269;
LIBINT2_REALTYPE fp357;
fp357 = inteval->WP_x[vi] * fp272;
LIBINT2_REALTYPE fp354;
fp354 = fp357 + fp355;
LIBINT2_REALTYPE fp144;
fp144 = inteval->WP_z[vi] * fp354;
LIBINT2_REALTYPE fp18;
fp18 = fp144;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp344;
fp344 = inteval->WP_x[vi] * fp161;
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_y[vi] * fp344;
LIBINT2_REALTYPE fp17;
fp17 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp215;
fp215 = inteval->WP_x[vi] * fp212;
LIBINT2_REALTYPE fp146;
fp146 = inteval->WP_y[vi] * fp215;
LIBINT2_REALTYPE fp16;
fp16 = fp146;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp147;
fp147 = inteval->WP_x[vi] * fp334;
LIBINT2_REALTYPE fp15;
fp15 = fp147;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_x[vi] * fp336;
LIBINT2_REALTYPE fp14;
fp14 = fp148;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp150;
fp150 = inteval->WP_x[vi] * fp152;
LIBINT2_REALTYPE fp13;
fp13 = fp150;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp151;
fp151 = inteval->WP_y[vi] * fp347;
LIBINT2_REALTYPE fp12;
fp12 = fp151;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_y[vi] * fp350;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp11;
fp11 = fp154;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp158;
fp158 = inteval->WP_y[vi] * fp279;
LIBINT2_REALTYPE fp10;
fp10 = fp158;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp160;
fp160 = inteval->WP_y[vi] * fp354;
LIBINT2_REALTYPE fp9;
fp9 = fp160;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_x[vi] * fp344;
LIBINT2_REALTYPE fp173;
fp173 = fp177 + fp174;
LIBINT2_REALTYPE fp8;
fp8 = fp173;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp267;
fp267 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp253;
fp253 = inteval->WP_x[vi] * fp267;
LIBINT2_REALTYPE fp249;
fp249 = fp253 + fp250;
LIBINT2_REALTYPE fp179;
fp179 = inteval->WQ_z[vi] * fp249;
LIBINT2_REALTYPE fp268;
fp268 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp258;
fp258 = inteval->WP_x[vi] * fp268;
LIBINT2_REALTYPE fp254;
fp254 = fp258 + fp255;
LIBINT2_REALTYPE fp180;
fp180 = inteval->QC_z[vi] * fp254;
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
LIBINT2_REALTYPE fp7;
fp7 = fp178;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp345;
fp345 = inteval->WP_x[vi] * fp367;
LIBINT2_REALTYPE fp188;
fp188 = inteval->WP_x[vi] * fp345;
LIBINT2_REALTYPE fp184;
fp184 = fp188 + fp185;
LIBINT2_REALTYPE fp6;
fp6 = fp184;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp205;
fp205 = inteval->WP_x[vi] * fp346;
LIBINT2_REALTYPE fp201;
fp201 = fp205 + fp202;
LIBINT2_REALTYPE fp5;
fp5 = fp201;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp207;
fp207 = inteval->WQ_y[vi] * fp249;
LIBINT2_REALTYPE fp208;
fp208 = inteval->QC_y[vi] * fp254;
LIBINT2_REALTYPE fp206;
fp206 = fp208 + fp207;
LIBINT2_REALTYPE fp4;
fp4 = fp206;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp220;
fp220 = fp352 * fp215;
LIBINT2_REALTYPE fp225;
fp225 = inteval->WP_x[vi] * fp347;
LIBINT2_REALTYPE fp221;
fp221 = fp225 + fp222;
LIBINT2_REALTYPE fp219;
fp219 = fp221 + fp220;
LIBINT2_REALTYPE fp3;
fp3 = fp219;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp243;
fp243 = fp352 * fp235;
LIBINT2_REALTYPE fp248;
fp248 = inteval->WP_x[vi] * fp350;
LIBINT2_REALTYPE fp244;
fp244 = fp248 + fp245;
LIBINT2_REALTYPE fp242;
fp242 = fp244 + fp243;
LIBINT2_REALTYPE fp2;
fp2 = fp242;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp260;
fp260 = fp356 * fp268;
LIBINT2_REALTYPE fp262;
fp262 = inteval->WQ_x[vi] * fp249;
LIBINT2_REALTYPE fp263;
fp263 = inteval->QC_x[vi] * fp254;
LIBINT2_REALTYPE fp261;
fp261 = fp263 + fp262;
LIBINT2_REALTYPE fp259;
fp259 = fp261 + fp260;
LIBINT2_REALTYPE fp1;
fp1 = fp259;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp298;
fp298 = fp356 * fp279;
LIBINT2_REALTYPE fp304;
fp304 = inteval->WP_x[vi] * fp354;
LIBINT2_REALTYPE fp299;
fp299 = fp304 + fp300;
LIBINT2_REALTYPE fp297;
fp297 = fp299 + fp298;
LIBINT2_REALTYPE fp0;
fp0 = fp297;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 373 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
