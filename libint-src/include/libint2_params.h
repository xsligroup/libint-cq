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

#ifndef _libint2_libint2params_h_
#define _libint2_libint2params_h_

#ifndef LIBINT2_API_PREFIX
# define LIBINT2_API_PREFIX 
#endif
#ifndef LIBINT2_MAX_VECLEN
# define LIBINT2_MAX_VECLEN 1
#endif
#ifndef LIBINT2_CONTRACTED_INTS
# define LIBINT2_CONTRACTED_INTS 1
#endif
#ifndef LIBINT2_USE_COMPOSITE_EVALUATORS
# define LIBINT2_USE_COMPOSITE_EVALUATORS 1
#endif

#ifndef LIBINT2_CARTGAUSS_MAX_AM
# define LIBINT2_CARTGAUSS_MAX_AM 32
#endif

#ifndef LIBINT2_CGSHELL_ORDERING
# define LIBINT2_CGSHELL_ORDERING 1
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_STANDARD
# define LIBINT2_CGSHELL_ORDERING_STANDARD 1
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_INTV3
# define LIBINT2_CGSHELL_ORDERING_INTV3 2
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_GAMESS
# define LIBINT2_CGSHELL_ORDERING_GAMESS 3
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_ORCA
# define LIBINT2_CGSHELL_ORDERING_ORCA 4
#endif

#ifndef LIBINT2_CGSHELL_ORDERING_BAGEL
# define LIBINT2_CGSHELL_ORDERING_BAGEL 5
#endif

#ifndef LIBINT2_SHELLQUARTET_SET
# define LIBINT2_SHELLQUARTET_SET 1
#endif

#ifndef LIBINT2_SHELLQUARTET_SET_STANDARD
# define LIBINT2_SHELLQUARTET_SET_STANDARD 1
#endif

#ifndef LIBINT2_SHELLQUARTET_SET_ORCA
# define LIBINT2_SHELLQUARTET_SET_ORCA 2
#endif

#ifndef LIBINT2_MAX_AM
# define LIBINT2_MAX_AM 5
#endif

#ifndef LIBINT2_MAX_AM_default
# define LIBINT2_MAX_AM_default 5
#endif

#ifndef LIBINT2_MAX_AM_default1
# define LIBINT2_MAX_AM_default1 5
#endif

#ifndef LIBINT2_MAX_AM_default2
# define LIBINT2_MAX_AM_default2 5
#endif

#ifndef LIBINT2_MAX_AM_overlap
# define LIBINT2_MAX_AM_overlap 5
#endif

#ifndef LIBINT2_MAX_AM_kinetic
# define LIBINT2_MAX_AM_kinetic 5
#endif

#ifndef LIBINT2_MAX_AM_elecpot
# define LIBINT2_MAX_AM_elecpot 5
#endif

#ifndef LIBINT2_MAX_AM_1emultipole
# define LIBINT2_MAX_AM_1emultipole 5
#endif

#ifndef LIBINT2_MAX_AM_2emultipole
# define LIBINT2_MAX_AM_2emultipole 5
#endif

#ifndef LIBINT2_MAX_AM_3emultipole
# define LIBINT2_MAX_AM_3emultipole 5
#endif

#ifndef LIBINT2_MAX_AM_sphemultipole
# define LIBINT2_MAX_AM_sphemultipole 5
#endif

#ifndef LIBINT2_MAX_AM_overlap1
# define LIBINT2_MAX_AM_overlap1 5
#endif

#ifndef LIBINT2_MAX_AM_kinetic1
# define LIBINT2_MAX_AM_kinetic1 5
#endif

#ifndef LIBINT2_MAX_AM_elecpot1
# define LIBINT2_MAX_AM_elecpot1 5
#endif

#ifndef LIBINT2_MAX_AM_1emultipole1
# define LIBINT2_MAX_AM_1emultipole1 5
#endif

#ifndef LIBINT2_MAX_AM_2emultipole1
# define LIBINT2_MAX_AM_2emultipole1 5
#endif

#ifndef LIBINT2_MAX_AM_3emultipole1
# define LIBINT2_MAX_AM_3emultipole1 5
#endif

#ifndef LIBINT2_MAX_AM_sphemultipole1
# define LIBINT2_MAX_AM_sphemultipole1 5
#endif

#ifndef LIBINT2_MAX_AM_overlap2
# define LIBINT2_MAX_AM_overlap2 5
#endif

#ifndef LIBINT2_MAX_AM_kinetic2
# define LIBINT2_MAX_AM_kinetic2 5
#endif

#ifndef LIBINT2_MAX_AM_elecpot2
# define LIBINT2_MAX_AM_elecpot2 5
#endif

#ifndef LIBINT2_MAX_AM_1emultipole2
# define LIBINT2_MAX_AM_1emultipole2 5
#endif

#ifndef LIBINT2_MAX_AM_2emultipole2
# define LIBINT2_MAX_AM_2emultipole2 5
#endif

#ifndef LIBINT2_MAX_AM_3emultipole2
# define LIBINT2_MAX_AM_3emultipole2 5
#endif

#ifndef LIBINT2_MAX_AM_sphemultipole2
# define LIBINT2_MAX_AM_sphemultipole2 5
#endif

#ifndef LIBINT2_MAX_AM_eri
# define LIBINT2_MAX_AM_eri 5
#endif

#ifndef LIBINT2_MAX_AM_eri1
# define LIBINT2_MAX_AM_eri1 5
#endif

#ifndef LIBINT2_MAX_AM_eri2
# define LIBINT2_MAX_AM_eri2 5
#endif

#ifndef LIBINT2_MAX_AM_3eri
# define LIBINT2_MAX_AM_3eri 5
#endif

#ifndef LIBINT2_MAX_AM_3eri1
# define LIBINT2_MAX_AM_3eri1 5
#endif

#ifndef LIBINT2_MAX_AM_3eri2
# define LIBINT2_MAX_AM_3eri2 5
#endif

#ifndef LIBINT2_MAX_AM_2eri
# define LIBINT2_MAX_AM_2eri 5
#endif

#ifndef LIBINT2_MAX_AM_2eri1
# define LIBINT2_MAX_AM_2eri1 5
#endif

#ifndef LIBINT2_MAX_AM_2eri2
# define LIBINT2_MAX_AM_2eri2 5
#endif

#ifndef LIBINT2_SUPPORT_ONEBODY
# define LIBINT2_SUPPORT_ONEBODY 1
#endif

#ifndef LIBINT2_DERIV_ONEBODY_ORDER
# define LIBINT2_DERIV_ONEBODY_ORDER 2
#endif

#ifndef LIBINT2_DERIV_ONEBODY_PROPERTY_ORDER
# define LIBINT2_DERIV_ONEBODY_PROPERTY_ORDER 0
#endif

#ifndef LIBINT2_SUPPORT_ERI
# define LIBINT2_SUPPORT_ERI 1
#endif

#ifndef LIBINT2_DERIV_ERI_ORDER
# define LIBINT2_DERIV_ERI_ORDER 2
#endif

#ifndef LIBINT2_SUPPORT_ERI3
# define LIBINT2_SUPPORT_ERI3 1
#endif

#ifndef LIBINT2_DERIV_ERI3_ORDER
# define LIBINT2_DERIV_ERI3_ORDER 2
#endif

#ifndef LIBINT2_SUPPORT_ERI2
# define LIBINT2_SUPPORT_ERI2 1
#endif

#ifndef LIBINT2_DERIV_ERI2_ORDER
# define LIBINT2_DERIV_ERI2_ORDER 2
#endif

#ifndef LIBINT2_MAX_DERIV_ORDER
# define LIBINT2_MAX_DERIV_ORDER 2
#endif

#ifndef LIBINT2_TASK_EXISTS_0overlap
# define LIBINT2_TASK_EXISTS_0overlap 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0kinetic
# define LIBINT2_TASK_EXISTS_0kinetic 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0elecpot
# define LIBINT2_TASK_EXISTS_0elecpot 0
#endif

#ifndef LIBINT2_TASK_EXISTS_01emultipole
# define LIBINT2_TASK_EXISTS_01emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_02emultipole
# define LIBINT2_TASK_EXISTS_02emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_03emultipole
# define LIBINT2_TASK_EXISTS_03emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0sphemultipole
# define LIBINT2_TASK_EXISTS_0sphemultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0eri
# define LIBINT2_TASK_EXISTS_0eri 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12kg12
# define LIBINT2_TASK_EXISTS_0r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12_0_g12
# define LIBINT2_TASK_EXISTS_0r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12_2_g12
# define LIBINT2_TASK_EXISTS_0r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0g12_T1_g12
# define LIBINT2_TASK_EXISTS_0g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0g12dkh
# define LIBINT2_TASK_EXISTS_0g12dkh 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0overlap1
# define LIBINT2_TASK_EXISTS_0overlap1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0kinetic1
# define LIBINT2_TASK_EXISTS_0kinetic1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0elecpot1
# define LIBINT2_TASK_EXISTS_0elecpot1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_01emultipole1
# define LIBINT2_TASK_EXISTS_01emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_02emultipole1
# define LIBINT2_TASK_EXISTS_02emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_03emultipole1
# define LIBINT2_TASK_EXISTS_03emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0sphemultipole1
# define LIBINT2_TASK_EXISTS_0sphemultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0eri1
# define LIBINT2_TASK_EXISTS_0eri1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12kg121
# define LIBINT2_TASK_EXISTS_0r12kg121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12_0_g121
# define LIBINT2_TASK_EXISTS_0r12_0_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12_2_g121
# define LIBINT2_TASK_EXISTS_0r12_2_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0g12_T1_g121
# define LIBINT2_TASK_EXISTS_0g12_T1_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0g12dkh1
# define LIBINT2_TASK_EXISTS_0g12dkh1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0overlap2
# define LIBINT2_TASK_EXISTS_0overlap2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0kinetic2
# define LIBINT2_TASK_EXISTS_0kinetic2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0elecpot2
# define LIBINT2_TASK_EXISTS_0elecpot2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_01emultipole2
# define LIBINT2_TASK_EXISTS_01emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_02emultipole2
# define LIBINT2_TASK_EXISTS_02emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_03emultipole2
# define LIBINT2_TASK_EXISTS_03emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0sphemultipole2
# define LIBINT2_TASK_EXISTS_0sphemultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0eri2
# define LIBINT2_TASK_EXISTS_0eri2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12kg122
# define LIBINT2_TASK_EXISTS_0r12kg122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12_0_g122
# define LIBINT2_TASK_EXISTS_0r12_0_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0r12_2_g122
# define LIBINT2_TASK_EXISTS_0r12_2_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0g12_T1_g122
# define LIBINT2_TASK_EXISTS_0g12_T1_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_0g12dkh2
# define LIBINT2_TASK_EXISTS_0g12dkh2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1overlap
# define LIBINT2_TASK_EXISTS_1overlap 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1kinetic
# define LIBINT2_TASK_EXISTS_1kinetic 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1elecpot
# define LIBINT2_TASK_EXISTS_1elecpot 0
#endif

#ifndef LIBINT2_TASK_EXISTS_11emultipole
# define LIBINT2_TASK_EXISTS_11emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_12emultipole
# define LIBINT2_TASK_EXISTS_12emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_13emultipole
# define LIBINT2_TASK_EXISTS_13emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1sphemultipole
# define LIBINT2_TASK_EXISTS_1sphemultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1eri
# define LIBINT2_TASK_EXISTS_1eri 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12kg12
# define LIBINT2_TASK_EXISTS_1r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12_0_g12
# define LIBINT2_TASK_EXISTS_1r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12_2_g12
# define LIBINT2_TASK_EXISTS_1r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1g12_T1_g12
# define LIBINT2_TASK_EXISTS_1g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1g12dkh
# define LIBINT2_TASK_EXISTS_1g12dkh 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1overlap1
# define LIBINT2_TASK_EXISTS_1overlap1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1kinetic1
# define LIBINT2_TASK_EXISTS_1kinetic1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1elecpot1
# define LIBINT2_TASK_EXISTS_1elecpot1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_11emultipole1
# define LIBINT2_TASK_EXISTS_11emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_12emultipole1
# define LIBINT2_TASK_EXISTS_12emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_13emultipole1
# define LIBINT2_TASK_EXISTS_13emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1sphemultipole1
# define LIBINT2_TASK_EXISTS_1sphemultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1eri1
# define LIBINT2_TASK_EXISTS_1eri1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12kg121
# define LIBINT2_TASK_EXISTS_1r12kg121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12_0_g121
# define LIBINT2_TASK_EXISTS_1r12_0_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12_2_g121
# define LIBINT2_TASK_EXISTS_1r12_2_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1g12_T1_g121
# define LIBINT2_TASK_EXISTS_1g12_T1_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1g12dkh1
# define LIBINT2_TASK_EXISTS_1g12dkh1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1overlap2
# define LIBINT2_TASK_EXISTS_1overlap2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1kinetic2
# define LIBINT2_TASK_EXISTS_1kinetic2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1elecpot2
# define LIBINT2_TASK_EXISTS_1elecpot2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_11emultipole2
# define LIBINT2_TASK_EXISTS_11emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_12emultipole2
# define LIBINT2_TASK_EXISTS_12emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_13emultipole2
# define LIBINT2_TASK_EXISTS_13emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1sphemultipole2
# define LIBINT2_TASK_EXISTS_1sphemultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1eri2
# define LIBINT2_TASK_EXISTS_1eri2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12kg122
# define LIBINT2_TASK_EXISTS_1r12kg122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12_0_g122
# define LIBINT2_TASK_EXISTS_1r12_0_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1r12_2_g122
# define LIBINT2_TASK_EXISTS_1r12_2_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1g12_T1_g122
# define LIBINT2_TASK_EXISTS_1g12_T1_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_1g12dkh2
# define LIBINT2_TASK_EXISTS_1g12dkh2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2overlap
# define LIBINT2_TASK_EXISTS_2overlap 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2kinetic
# define LIBINT2_TASK_EXISTS_2kinetic 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2elecpot
# define LIBINT2_TASK_EXISTS_2elecpot 1
#endif

#ifndef LIBINT2_TASK_EXISTS_21emultipole
# define LIBINT2_TASK_EXISTS_21emultipole 1
#endif

#ifndef LIBINT2_TASK_EXISTS_22emultipole
# define LIBINT2_TASK_EXISTS_22emultipole 1
#endif

#ifndef LIBINT2_TASK_EXISTS_23emultipole
# define LIBINT2_TASK_EXISTS_23emultipole 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2sphemultipole
# define LIBINT2_TASK_EXISTS_2sphemultipole 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2eri
# define LIBINT2_TASK_EXISTS_2eri 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12kg12
# define LIBINT2_TASK_EXISTS_2r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12_0_g12
# define LIBINT2_TASK_EXISTS_2r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12_2_g12
# define LIBINT2_TASK_EXISTS_2r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2g12_T1_g12
# define LIBINT2_TASK_EXISTS_2g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2g12dkh
# define LIBINT2_TASK_EXISTS_2g12dkh 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2overlap1
# define LIBINT2_TASK_EXISTS_2overlap1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2kinetic1
# define LIBINT2_TASK_EXISTS_2kinetic1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2elecpot1
# define LIBINT2_TASK_EXISTS_2elecpot1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_21emultipole1
# define LIBINT2_TASK_EXISTS_21emultipole1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_22emultipole1
# define LIBINT2_TASK_EXISTS_22emultipole1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_23emultipole1
# define LIBINT2_TASK_EXISTS_23emultipole1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2sphemultipole1
# define LIBINT2_TASK_EXISTS_2sphemultipole1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2eri1
# define LIBINT2_TASK_EXISTS_2eri1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12kg121
# define LIBINT2_TASK_EXISTS_2r12kg121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12_0_g121
# define LIBINT2_TASK_EXISTS_2r12_0_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12_2_g121
# define LIBINT2_TASK_EXISTS_2r12_2_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2g12_T1_g121
# define LIBINT2_TASK_EXISTS_2g12_T1_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2g12dkh1
# define LIBINT2_TASK_EXISTS_2g12dkh1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2overlap2
# define LIBINT2_TASK_EXISTS_2overlap2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2kinetic2
# define LIBINT2_TASK_EXISTS_2kinetic2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2elecpot2
# define LIBINT2_TASK_EXISTS_2elecpot2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_21emultipole2
# define LIBINT2_TASK_EXISTS_21emultipole2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_22emultipole2
# define LIBINT2_TASK_EXISTS_22emultipole2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_23emultipole2
# define LIBINT2_TASK_EXISTS_23emultipole2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2sphemultipole2
# define LIBINT2_TASK_EXISTS_2sphemultipole2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2eri2
# define LIBINT2_TASK_EXISTS_2eri2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12kg122
# define LIBINT2_TASK_EXISTS_2r12kg122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12_0_g122
# define LIBINT2_TASK_EXISTS_2r12_0_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2r12_2_g122
# define LIBINT2_TASK_EXISTS_2r12_2_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2g12_T1_g122
# define LIBINT2_TASK_EXISTS_2g12_T1_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_2g12dkh2
# define LIBINT2_TASK_EXISTS_2g12dkh2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3overlap
# define LIBINT2_TASK_EXISTS_3overlap 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3kinetic
# define LIBINT2_TASK_EXISTS_3kinetic 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3elecpot
# define LIBINT2_TASK_EXISTS_3elecpot 0
#endif

#ifndef LIBINT2_TASK_EXISTS_31emultipole
# define LIBINT2_TASK_EXISTS_31emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_32emultipole
# define LIBINT2_TASK_EXISTS_32emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_33emultipole
# define LIBINT2_TASK_EXISTS_33emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3sphemultipole
# define LIBINT2_TASK_EXISTS_3sphemultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3eri
# define LIBINT2_TASK_EXISTS_3eri 1
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12kg12
# define LIBINT2_TASK_EXISTS_3r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12_0_g12
# define LIBINT2_TASK_EXISTS_3r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12_2_g12
# define LIBINT2_TASK_EXISTS_3r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3g12_T1_g12
# define LIBINT2_TASK_EXISTS_3g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3g12dkh
# define LIBINT2_TASK_EXISTS_3g12dkh 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3overlap1
# define LIBINT2_TASK_EXISTS_3overlap1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3kinetic1
# define LIBINT2_TASK_EXISTS_3kinetic1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3elecpot1
# define LIBINT2_TASK_EXISTS_3elecpot1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_31emultipole1
# define LIBINT2_TASK_EXISTS_31emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_32emultipole1
# define LIBINT2_TASK_EXISTS_32emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_33emultipole1
# define LIBINT2_TASK_EXISTS_33emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3sphemultipole1
# define LIBINT2_TASK_EXISTS_3sphemultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3eri1
# define LIBINT2_TASK_EXISTS_3eri1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12kg121
# define LIBINT2_TASK_EXISTS_3r12kg121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12_0_g121
# define LIBINT2_TASK_EXISTS_3r12_0_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12_2_g121
# define LIBINT2_TASK_EXISTS_3r12_2_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3g12_T1_g121
# define LIBINT2_TASK_EXISTS_3g12_T1_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3g12dkh1
# define LIBINT2_TASK_EXISTS_3g12dkh1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3overlap2
# define LIBINT2_TASK_EXISTS_3overlap2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3kinetic2
# define LIBINT2_TASK_EXISTS_3kinetic2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3elecpot2
# define LIBINT2_TASK_EXISTS_3elecpot2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_31emultipole2
# define LIBINT2_TASK_EXISTS_31emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_32emultipole2
# define LIBINT2_TASK_EXISTS_32emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_33emultipole2
# define LIBINT2_TASK_EXISTS_33emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3sphemultipole2
# define LIBINT2_TASK_EXISTS_3sphemultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3eri2
# define LIBINT2_TASK_EXISTS_3eri2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12kg122
# define LIBINT2_TASK_EXISTS_3r12kg122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12_0_g122
# define LIBINT2_TASK_EXISTS_3r12_0_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3r12_2_g122
# define LIBINT2_TASK_EXISTS_3r12_2_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3g12_T1_g122
# define LIBINT2_TASK_EXISTS_3g12_T1_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_3g12dkh2
# define LIBINT2_TASK_EXISTS_3g12dkh2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4overlap
# define LIBINT2_TASK_EXISTS_4overlap 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4kinetic
# define LIBINT2_TASK_EXISTS_4kinetic 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4elecpot
# define LIBINT2_TASK_EXISTS_4elecpot 0
#endif

#ifndef LIBINT2_TASK_EXISTS_41emultipole
# define LIBINT2_TASK_EXISTS_41emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_42emultipole
# define LIBINT2_TASK_EXISTS_42emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_43emultipole
# define LIBINT2_TASK_EXISTS_43emultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4sphemultipole
# define LIBINT2_TASK_EXISTS_4sphemultipole 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4eri
# define LIBINT2_TASK_EXISTS_4eri 1
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12kg12
# define LIBINT2_TASK_EXISTS_4r12kg12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12_0_g12
# define LIBINT2_TASK_EXISTS_4r12_0_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12_2_g12
# define LIBINT2_TASK_EXISTS_4r12_2_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4g12_T1_g12
# define LIBINT2_TASK_EXISTS_4g12_T1_g12 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4g12dkh
# define LIBINT2_TASK_EXISTS_4g12dkh 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4overlap1
# define LIBINT2_TASK_EXISTS_4overlap1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4kinetic1
# define LIBINT2_TASK_EXISTS_4kinetic1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4elecpot1
# define LIBINT2_TASK_EXISTS_4elecpot1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_41emultipole1
# define LIBINT2_TASK_EXISTS_41emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_42emultipole1
# define LIBINT2_TASK_EXISTS_42emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_43emultipole1
# define LIBINT2_TASK_EXISTS_43emultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4sphemultipole1
# define LIBINT2_TASK_EXISTS_4sphemultipole1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4eri1
# define LIBINT2_TASK_EXISTS_4eri1 1
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12kg121
# define LIBINT2_TASK_EXISTS_4r12kg121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12_0_g121
# define LIBINT2_TASK_EXISTS_4r12_0_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12_2_g121
# define LIBINT2_TASK_EXISTS_4r12_2_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4g12_T1_g121
# define LIBINT2_TASK_EXISTS_4g12_T1_g121 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4g12dkh1
# define LIBINT2_TASK_EXISTS_4g12dkh1 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4overlap2
# define LIBINT2_TASK_EXISTS_4overlap2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4kinetic2
# define LIBINT2_TASK_EXISTS_4kinetic2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4elecpot2
# define LIBINT2_TASK_EXISTS_4elecpot2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_41emultipole2
# define LIBINT2_TASK_EXISTS_41emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_42emultipole2
# define LIBINT2_TASK_EXISTS_42emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_43emultipole2
# define LIBINT2_TASK_EXISTS_43emultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4sphemultipole2
# define LIBINT2_TASK_EXISTS_4sphemultipole2 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4eri2
# define LIBINT2_TASK_EXISTS_4eri2 1
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12kg122
# define LIBINT2_TASK_EXISTS_4r12kg122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12_0_g122
# define LIBINT2_TASK_EXISTS_4r12_0_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4r12_2_g122
# define LIBINT2_TASK_EXISTS_4r12_2_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4g12_T1_g122
# define LIBINT2_TASK_EXISTS_4g12_T1_g122 0
#endif

#ifndef LIBINT2_TASK_EXISTS_4g12dkh2
# define LIBINT2_TASK_EXISTS_4g12dkh2 0
#endif

#define LIBINT2_NUM_TARGETS_default 1
#define LIBINT2_MAX_STACK_SIZE_0_default 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_default 0
#define LIBINT2_MAX_HRR_HSRANK_0_default 0
#define LIBINT2_MAX_HRR_LSRANK_0_default 0
#define LIBINT2_NUM_TARGETS_overlap 1
#define LIBINT2_MAX_STACK_SIZE_0_overlap 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_0_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_0_overlap 0
#define LIBINT2_MAX_STACK_SIZE_1_overlap 60
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_1_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_1_overlap 0
#define LIBINT2_MAX_STACK_SIZE_2_overlap 162
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_2_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_2_overlap 0
#define LIBINT2_MAX_STACK_SIZE_3_overlap 306
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_3_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_3_overlap 0
#define LIBINT2_MAX_STACK_SIZE_4_overlap 525
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_4_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_4_overlap 0
#define LIBINT2_MAX_STACK_SIZE_5_overlap 990
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_overlap 0
#define LIBINT2_MAX_HRR_HSRANK_5_overlap 0
#define LIBINT2_MAX_HRR_LSRANK_5_overlap 0
#define LIBINT2_NUM_TARGETS_kinetic 1
#define LIBINT2_MAX_STACK_SIZE_0_kinetic 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_0_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_0_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_1_kinetic 84
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_1_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_1_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_2_kinetic 189
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_2_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_2_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_3_kinetic 336
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_3_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_3_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_4_kinetic 558
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_4_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_4_kinetic 0
#define LIBINT2_MAX_STACK_SIZE_5_kinetic 1029
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_kinetic 0
#define LIBINT2_MAX_HRR_HSRANK_5_kinetic 0
#define LIBINT2_MAX_HRR_LSRANK_5_kinetic 0
#define LIBINT2_NUM_TARGETS_elecpot 1
#define LIBINT2_MAX_STACK_SIZE_0_elecpot 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_0_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_0_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_1_elecpot 102
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_1_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_1_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_2_elecpot 181
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_2_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_2_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_3_elecpot 358
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_3_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_3_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_4_elecpot 1306
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_4_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_4_elecpot 0
#define LIBINT2_MAX_STACK_SIZE_5_elecpot 2478
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_elecpot 0
#define LIBINT2_MAX_HRR_HSRANK_5_elecpot 0
#define LIBINT2_MAX_HRR_LSRANK_5_elecpot 0
#define LIBINT2_NUM_TARGETS_1emultipole 4
#define LIBINT2_MAX_STACK_SIZE_0_1emultipole 4
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_0_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_0_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_1_1emultipole 189
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_1_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_1_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_2_1emultipole 546
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_2_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_2_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_3_1emultipole 1071
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_3_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_3_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_4_1emultipole 1890
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_4_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_4_1emultipole 0
#define LIBINT2_MAX_STACK_SIZE_5_1emultipole 3654
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_1emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_5_1emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_5_1emultipole 0
#define LIBINT2_NUM_TARGETS_2emultipole 10
#define LIBINT2_MAX_STACK_SIZE_0_2emultipole 10
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_0_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_0_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_1_2emultipole 444
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_1_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_1_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_2_2emultipole 1308
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_2_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_2_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_3_2emultipole 2592
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_3_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_3_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_4_2emultipole 4605
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_4_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_4_2emultipole 0
#define LIBINT2_MAX_STACK_SIZE_5_2emultipole 8964
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_2emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_5_2emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_5_2emultipole 0
#define LIBINT2_NUM_TARGETS_3emultipole 20
#define LIBINT2_MAX_STACK_SIZE_0_3emultipole 20
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_0_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_0_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_1_3emultipole 867
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_1_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_1_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_2_3emultipole 2574
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_2_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_2_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_3_3emultipole 5121
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_3_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_3_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_4_3emultipole 9120
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_4_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_4_3emultipole 0
#define LIBINT2_MAX_STACK_SIZE_5_3emultipole 17802
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_3emultipole 0
#define LIBINT2_MAX_HRR_HSRANK_5_3emultipole 0
#define LIBINT2_MAX_HRR_LSRANK_5_3emultipole 0
#define LIBINT2_NUM_TARGETS_sphemultipole 25
#define LIBINT2_MAX_STACK_SIZE_0_sphemultipole 25
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_0_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_0_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_1_sphemultipole 1181
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_1_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_1_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_2_sphemultipole 2800
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_2_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_2_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_3_sphemultipole 7438
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_3_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_3_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_4_sphemultipole 16522
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_4_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_4_sphemultipole 0
#define LIBINT2_MAX_STACK_SIZE_5_sphemultipole 33329
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_sphemultipole 0
#define LIBINT2_MAX_HRR_HSRANK_5_sphemultipole 0
#define LIBINT2_MAX_HRR_LSRANK_5_sphemultipole 0
#define LIBINT2_NUM_TARGETS_overlap1 6
#define LIBINT2_MAX_STACK_SIZE_0_overlap1 6
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_overlap1 0
#define LIBINT2_MAX_HRR_HSRANK_0_overlap1 0
#define LIBINT2_MAX_HRR_LSRANK_0_overlap1 0
#define LIBINT2_MAX_STACK_SIZE_1_overlap1 297
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_overlap1 0
#define LIBINT2_MAX_HRR_HSRANK_1_overlap1 0
#define LIBINT2_MAX_HRR_LSRANK_1_overlap1 0
#define LIBINT2_MAX_STACK_SIZE_2_overlap1 816
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_overlap1 0
#define LIBINT2_MAX_HRR_HSRANK_2_overlap1 0
#define LIBINT2_MAX_HRR_LSRANK_2_overlap1 0
#define LIBINT2_MAX_STACK_SIZE_3_overlap1 1599
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_overlap1 0
#define LIBINT2_MAX_HRR_HSRANK_3_overlap1 0
#define LIBINT2_MAX_HRR_LSRANK_3_overlap1 0
#define LIBINT2_MAX_STACK_SIZE_4_overlap1 2790
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_overlap1 0
#define LIBINT2_MAX_HRR_HSRANK_4_overlap1 0
#define LIBINT2_MAX_HRR_LSRANK_4_overlap1 0
#define LIBINT2_MAX_STACK_SIZE_5_overlap1 5418
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_overlap1 0
#define LIBINT2_MAX_HRR_HSRANK_5_overlap1 0
#define LIBINT2_MAX_HRR_LSRANK_5_overlap1 0
#define LIBINT2_NUM_TARGETS_kinetic1 6
#define LIBINT2_MAX_STACK_SIZE_0_kinetic1 6
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_kinetic1 0
#define LIBINT2_MAX_HRR_HSRANK_0_kinetic1 0
#define LIBINT2_MAX_HRR_LSRANK_0_kinetic1 0
#define LIBINT2_MAX_STACK_SIZE_1_kinetic1 321
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_kinetic1 0
#define LIBINT2_MAX_HRR_HSRANK_1_kinetic1 0
#define LIBINT2_MAX_HRR_LSRANK_1_kinetic1 0
#define LIBINT2_MAX_STACK_SIZE_2_kinetic1 856
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_kinetic1 0
#define LIBINT2_MAX_HRR_HSRANK_2_kinetic1 0
#define LIBINT2_MAX_HRR_LSRANK_2_kinetic1 0
#define LIBINT2_MAX_STACK_SIZE_3_kinetic1 1643
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_kinetic1 0
#define LIBINT2_MAX_HRR_HSRANK_3_kinetic1 0
#define LIBINT2_MAX_HRR_LSRANK_3_kinetic1 0
#define LIBINT2_MAX_STACK_SIZE_4_kinetic1 2826
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_kinetic1 0
#define LIBINT2_MAX_HRR_HSRANK_4_kinetic1 0
#define LIBINT2_MAX_HRR_LSRANK_4_kinetic1 0
#define LIBINT2_MAX_STACK_SIZE_5_kinetic1 5460
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_kinetic1 0
#define LIBINT2_MAX_HRR_HSRANK_5_kinetic1 0
#define LIBINT2_MAX_HRR_LSRANK_5_kinetic1 0
#define LIBINT2_NUM_TARGETS_elecpot1 6
#define LIBINT2_MAX_STACK_SIZE_0_elecpot1 6
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_elecpot1 0
#define LIBINT2_MAX_HRR_HSRANK_0_elecpot1 0
#define LIBINT2_MAX_HRR_LSRANK_0_elecpot1 0
#define LIBINT2_MAX_STACK_SIZE_1_elecpot1 363
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_elecpot1 0
#define LIBINT2_MAX_HRR_HSRANK_1_elecpot1 0
#define LIBINT2_MAX_HRR_LSRANK_1_elecpot1 0
#define LIBINT2_MAX_STACK_SIZE_2_elecpot1 792
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_elecpot1 0
#define LIBINT2_MAX_HRR_HSRANK_2_elecpot1 0
#define LIBINT2_MAX_HRR_LSRANK_2_elecpot1 0
#define LIBINT2_MAX_STACK_SIZE_3_elecpot1 1945
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_elecpot1 0
#define LIBINT2_MAX_HRR_HSRANK_3_elecpot1 0
#define LIBINT2_MAX_HRR_LSRANK_3_elecpot1 0
#define LIBINT2_MAX_STACK_SIZE_4_elecpot1 4870
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_elecpot1 0
#define LIBINT2_MAX_HRR_HSRANK_4_elecpot1 0
#define LIBINT2_MAX_HRR_LSRANK_4_elecpot1 0
#define LIBINT2_MAX_STACK_SIZE_5_elecpot1 9933
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_elecpot1 0
#define LIBINT2_MAX_HRR_HSRANK_5_elecpot1 0
#define LIBINT2_MAX_HRR_LSRANK_5_elecpot1 0
#define LIBINT2_NUM_TARGETS_1emultipole1 1
#define LIBINT2_MAX_STACK_SIZE_0_1emultipole1 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_1emultipole1 0
#define LIBINT2_MAX_HRR_HSRANK_0_1emultipole1 0
#define LIBINT2_MAX_HRR_LSRANK_0_1emultipole1 0
#define LIBINT2_NUM_TARGETS_2emultipole1 1
#define LIBINT2_MAX_STACK_SIZE_0_2emultipole1 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_2emultipole1 0
#define LIBINT2_MAX_HRR_HSRANK_0_2emultipole1 0
#define LIBINT2_MAX_HRR_LSRANK_0_2emultipole1 0
#define LIBINT2_NUM_TARGETS_3emultipole1 1
#define LIBINT2_MAX_STACK_SIZE_0_3emultipole1 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_3emultipole1 0
#define LIBINT2_MAX_HRR_HSRANK_0_3emultipole1 0
#define LIBINT2_MAX_HRR_LSRANK_0_3emultipole1 0
#define LIBINT2_NUM_TARGETS_sphemultipole1 1
#define LIBINT2_MAX_STACK_SIZE_0_sphemultipole1 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_sphemultipole1 0
#define LIBINT2_MAX_HRR_HSRANK_0_sphemultipole1 0
#define LIBINT2_MAX_HRR_LSRANK_0_sphemultipole1 0
#define LIBINT2_NUM_TARGETS_overlap2 21
#define LIBINT2_MAX_STACK_SIZE_0_overlap2 21
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_overlap2 0
#define LIBINT2_MAX_HRR_HSRANK_0_overlap2 0
#define LIBINT2_MAX_HRR_LSRANK_0_overlap2 0
#define LIBINT2_MAX_STACK_SIZE_1_overlap2 946
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_overlap2 0
#define LIBINT2_MAX_HRR_HSRANK_1_overlap2 0
#define LIBINT2_MAX_HRR_LSRANK_1_overlap2 0
#define LIBINT2_MAX_STACK_SIZE_2_overlap2 2787
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_overlap2 0
#define LIBINT2_MAX_HRR_HSRANK_2_overlap2 0
#define LIBINT2_MAX_HRR_LSRANK_2_overlap2 0
#define LIBINT2_MAX_STACK_SIZE_3_overlap2 5482
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_overlap2 0
#define LIBINT2_MAX_HRR_HSRANK_3_overlap2 0
#define LIBINT2_MAX_HRR_LSRANK_3_overlap2 0
#define LIBINT2_MAX_STACK_SIZE_4_overlap2 9696
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_overlap2 0
#define LIBINT2_MAX_HRR_HSRANK_4_overlap2 0
#define LIBINT2_MAX_HRR_LSRANK_4_overlap2 0
#define LIBINT2_MAX_STACK_SIZE_5_overlap2 18859
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_overlap2 0
#define LIBINT2_MAX_HRR_HSRANK_5_overlap2 0
#define LIBINT2_MAX_HRR_LSRANK_5_overlap2 0
#define LIBINT2_NUM_TARGETS_kinetic2 21
#define LIBINT2_MAX_STACK_SIZE_0_kinetic2 21
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_kinetic2 0
#define LIBINT2_MAX_HRR_HSRANK_0_kinetic2 0
#define LIBINT2_MAX_HRR_LSRANK_0_kinetic2 0
#define LIBINT2_MAX_STACK_SIZE_1_kinetic2 981
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_kinetic2 0
#define LIBINT2_MAX_HRR_HSRANK_1_kinetic2 0
#define LIBINT2_MAX_HRR_LSRANK_1_kinetic2 0
#define LIBINT2_MAX_STACK_SIZE_2_kinetic2 2801
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_kinetic2 0
#define LIBINT2_MAX_HRR_HSRANK_2_kinetic2 0
#define LIBINT2_MAX_HRR_LSRANK_2_kinetic2 0
#define LIBINT2_MAX_STACK_SIZE_3_kinetic2 5566
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_kinetic2 0
#define LIBINT2_MAX_HRR_HSRANK_3_kinetic2 0
#define LIBINT2_MAX_HRR_LSRANK_3_kinetic2 0
#define LIBINT2_MAX_STACK_SIZE_4_kinetic2 9787
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_kinetic2 0
#define LIBINT2_MAX_HRR_HSRANK_4_kinetic2 0
#define LIBINT2_MAX_HRR_LSRANK_4_kinetic2 0
#define LIBINT2_MAX_STACK_SIZE_5_kinetic2 18964
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_kinetic2 0
#define LIBINT2_MAX_HRR_HSRANK_5_kinetic2 0
#define LIBINT2_MAX_HRR_LSRANK_5_kinetic2 0
#define LIBINT2_NUM_TARGETS_elecpot2 21
#define LIBINT2_MAX_STACK_SIZE_0_elecpot2 21
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_elecpot2 0
#define LIBINT2_MAX_HRR_HSRANK_0_elecpot2 0
#define LIBINT2_MAX_HRR_LSRANK_0_elecpot2 0
#define LIBINT2_MAX_STACK_SIZE_1_elecpot2 1256
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_elecpot2 0
#define LIBINT2_MAX_HRR_HSRANK_1_elecpot2 0
#define LIBINT2_MAX_HRR_LSRANK_1_elecpot2 0
#define LIBINT2_MAX_STACK_SIZE_2_elecpot2 2654
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_elecpot2 0
#define LIBINT2_MAX_HRR_HSRANK_2_elecpot2 0
#define LIBINT2_MAX_HRR_LSRANK_2_elecpot2 0
#define LIBINT2_MAX_STACK_SIZE_3_elecpot2 6867
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_elecpot2 0
#define LIBINT2_MAX_HRR_HSRANK_3_elecpot2 0
#define LIBINT2_MAX_HRR_LSRANK_3_elecpot2 0
#define LIBINT2_MAX_STACK_SIZE_4_elecpot2 16444
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_elecpot2 0
#define LIBINT2_MAX_HRR_HSRANK_4_elecpot2 0
#define LIBINT2_MAX_HRR_LSRANK_4_elecpot2 0
#define LIBINT2_MAX_STACK_SIZE_5_elecpot2 36761
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_elecpot2 0
#define LIBINT2_MAX_HRR_HSRANK_5_elecpot2 0
#define LIBINT2_MAX_HRR_LSRANK_5_elecpot2 0
#define LIBINT2_NUM_TARGETS_1emultipole2 1
#define LIBINT2_MAX_STACK_SIZE_0_1emultipole2 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_1emultipole2 0
#define LIBINT2_MAX_HRR_HSRANK_0_1emultipole2 0
#define LIBINT2_MAX_HRR_LSRANK_0_1emultipole2 0
#define LIBINT2_NUM_TARGETS_2emultipole2 1
#define LIBINT2_MAX_STACK_SIZE_0_2emultipole2 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_2emultipole2 0
#define LIBINT2_MAX_HRR_HSRANK_0_2emultipole2 0
#define LIBINT2_MAX_HRR_LSRANK_0_2emultipole2 0
#define LIBINT2_NUM_TARGETS_3emultipole2 1
#define LIBINT2_MAX_STACK_SIZE_0_3emultipole2 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_3emultipole2 0
#define LIBINT2_MAX_HRR_HSRANK_0_3emultipole2 0
#define LIBINT2_MAX_HRR_LSRANK_0_3emultipole2 0
#define LIBINT2_NUM_TARGETS_sphemultipole2 1
#define LIBINT2_MAX_STACK_SIZE_0_sphemultipole2 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_sphemultipole2 0
#define LIBINT2_MAX_HRR_HSRANK_0_sphemultipole2 0
#define LIBINT2_MAX_HRR_LSRANK_0_sphemultipole2 0
#define LIBINT2_NUM_TARGETS_eri 1
#define LIBINT2_MAX_STACK_SIZE_0_eri 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_eri 0
#define LIBINT2_MAX_HRR_HSRANK_0_eri 0
#define LIBINT2_MAX_HRR_LSRANK_0_eri 0
#define LIBINT2_MAX_STACK_SIZE_1_eri 7434
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_eri 0
#define LIBINT2_MAX_HRR_HSRANK_1_eri 0
#define LIBINT2_MAX_HRR_LSRANK_1_eri 0
#define LIBINT2_MAX_STACK_SIZE_2_eri 32430
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_eri 0
#define LIBINT2_MAX_HRR_HSRANK_2_eri 0
#define LIBINT2_MAX_HRR_LSRANK_2_eri 0
#define LIBINT2_MAX_STACK_SIZE_3_eri 92837
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_eri 0
#define LIBINT2_MAX_HRR_HSRANK_3_eri 0
#define LIBINT2_MAX_HRR_LSRANK_3_eri 0
#define LIBINT2_MAX_STACK_SIZE_4_eri 299402
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_eri 0
#define LIBINT2_MAX_HRR_HSRANK_4_eri 0
#define LIBINT2_MAX_HRR_LSRANK_4_eri 0
#define LIBINT2_MAX_STACK_SIZE_5_eri 1073332
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_eri 0
#define LIBINT2_MAX_HRR_HSRANK_5_eri 0
#define LIBINT2_MAX_HRR_LSRANK_5_eri 0
#define LIBINT2_NUM_TARGETS_eri1 12
#define LIBINT2_MAX_STACK_SIZE_0_eri1 12
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_eri1 0
#define LIBINT2_MAX_HRR_HSRANK_0_eri1 0
#define LIBINT2_MAX_HRR_LSRANK_0_eri1 0
#define LIBINT2_MAX_STACK_SIZE_1_eri1 50892
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_eri1 0
#define LIBINT2_MAX_HRR_HSRANK_1_eri1 0
#define LIBINT2_MAX_HRR_LSRANK_1_eri1 0
#define LIBINT2_MAX_STACK_SIZE_2_eri1 212104
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_eri1 0
#define LIBINT2_MAX_HRR_HSRANK_2_eri1 0
#define LIBINT2_MAX_HRR_LSRANK_2_eri1 0
#define LIBINT2_MAX_STACK_SIZE_3_eri1 940788
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_eri1 0
#define LIBINT2_MAX_HRR_HSRANK_3_eri1 0
#define LIBINT2_MAX_HRR_LSRANK_3_eri1 0
#define LIBINT2_MAX_STACK_SIZE_4_eri1 2610423
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_eri1 0
#define LIBINT2_MAX_HRR_HSRANK_4_eri1 0
#define LIBINT2_MAX_HRR_LSRANK_4_eri1 0
#define LIBINT2_MAX_STACK_SIZE_5_eri1 7862145
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_eri1 0
#define LIBINT2_MAX_HRR_HSRANK_5_eri1 0
#define LIBINT2_MAX_HRR_LSRANK_5_eri1 0
#define LIBINT2_NUM_TARGETS_eri2 78
#define LIBINT2_MAX_STACK_SIZE_0_eri2 78
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_eri2 0
#define LIBINT2_MAX_HRR_HSRANK_0_eri2 0
#define LIBINT2_MAX_HRR_LSRANK_0_eri2 0
#define LIBINT2_MAX_STACK_SIZE_1_eri2 288441
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_eri2 0
#define LIBINT2_MAX_HRR_HSRANK_1_eri2 0
#define LIBINT2_MAX_HRR_LSRANK_1_eri2 0
#define LIBINT2_MAX_STACK_SIZE_2_eri2 1371904
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_eri2 0
#define LIBINT2_MAX_HRR_HSRANK_2_eri2 0
#define LIBINT2_MAX_HRR_LSRANK_2_eri2 0
#define LIBINT2_MAX_STACK_SIZE_3_eri2 5788280
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_eri2 0
#define LIBINT2_MAX_HRR_HSRANK_3_eri2 0
#define LIBINT2_MAX_HRR_LSRANK_3_eri2 0
#define LIBINT2_MAX_STACK_SIZE_4_eri2 16373800
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_eri2 0
#define LIBINT2_MAX_HRR_HSRANK_4_eri2 0
#define LIBINT2_MAX_HRR_LSRANK_4_eri2 0
#define LIBINT2_MAX_STACK_SIZE_5_eri2 55563016
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_eri2 0
#define LIBINT2_MAX_HRR_HSRANK_5_eri2 0
#define LIBINT2_MAX_HRR_LSRANK_5_eri2 0
#define LIBINT2_NUM_TARGETS_3eri 1
#define LIBINT2_MAX_STACK_SIZE_0_3eri 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_0_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_0_3eri 0
#define LIBINT2_MAX_STACK_SIZE_1_3eri 2478
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_1_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_1_3eri 0
#define LIBINT2_MAX_STACK_SIZE_2_3eri 7434
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_2_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_2_3eri 0
#define LIBINT2_MAX_STACK_SIZE_3_3eri 14868
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_3_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_3_3eri 0
#define LIBINT2_MAX_STACK_SIZE_4_3eri 24780
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_4_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_4_3eri 0
#define LIBINT2_MAX_STACK_SIZE_5_3eri 52038
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_3eri 0
#define LIBINT2_MAX_HRR_HSRANK_5_3eri 0
#define LIBINT2_MAX_HRR_LSRANK_5_3eri 0
#define LIBINT2_NUM_TARGETS_3eri1 9
#define LIBINT2_MAX_STACK_SIZE_0_3eri1 9
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_3eri1 0
#define LIBINT2_MAX_HRR_HSRANK_0_3eri1 0
#define LIBINT2_MAX_HRR_LSRANK_0_3eri1 0
#define LIBINT2_MAX_STACK_SIZE_1_3eri1 10857
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_3eri1 0
#define LIBINT2_MAX_HRR_HSRANK_1_3eri1 0
#define LIBINT2_MAX_HRR_LSRANK_1_3eri1 0
#define LIBINT2_MAX_STACK_SIZE_2_3eri1 32571
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_3eri1 0
#define LIBINT2_MAX_HRR_HSRANK_2_3eri1 0
#define LIBINT2_MAX_HRR_LSRANK_2_3eri1 0
#define LIBINT2_MAX_STACK_SIZE_3_3eri1 65142
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_3eri1 0
#define LIBINT2_MAX_HRR_HSRANK_3_3eri1 0
#define LIBINT2_MAX_HRR_LSRANK_3_3eri1 0
#define LIBINT2_MAX_STACK_SIZE_4_3eri1 108570
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_3eri1 0
#define LIBINT2_MAX_HRR_HSRANK_4_3eri1 0
#define LIBINT2_MAX_HRR_LSRANK_4_3eri1 0
#define LIBINT2_MAX_STACK_SIZE_5_3eri1 227997
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_3eri1 0
#define LIBINT2_MAX_HRR_HSRANK_5_3eri1 0
#define LIBINT2_MAX_HRR_LSRANK_5_3eri1 0
#define LIBINT2_NUM_TARGETS_3eri2 45
#define LIBINT2_MAX_STACK_SIZE_0_3eri2 45
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_3eri2 0
#define LIBINT2_MAX_HRR_HSRANK_0_3eri2 0
#define LIBINT2_MAX_HRR_LSRANK_0_3eri2 0
#define LIBINT2_MAX_STACK_SIZE_1_3eri2 43016
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_3eri2 0
#define LIBINT2_MAX_HRR_HSRANK_1_3eri2 0
#define LIBINT2_MAX_HRR_LSRANK_1_3eri2 0
#define LIBINT2_MAX_STACK_SIZE_2_3eri2 129048
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_3eri2 0
#define LIBINT2_MAX_HRR_HSRANK_2_3eri2 0
#define LIBINT2_MAX_HRR_LSRANK_2_3eri2 0
#define LIBINT2_MAX_STACK_SIZE_3_3eri2 258096
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_3eri2 0
#define LIBINT2_MAX_HRR_HSRANK_3_3eri2 0
#define LIBINT2_MAX_HRR_LSRANK_3_3eri2 0
#define LIBINT2_MAX_STACK_SIZE_4_3eri2 430160
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_3eri2 0
#define LIBINT2_MAX_HRR_HSRANK_4_3eri2 0
#define LIBINT2_MAX_HRR_LSRANK_4_3eri2 0
#define LIBINT2_MAX_STACK_SIZE_5_3eri2 903336
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_3eri2 0
#define LIBINT2_MAX_HRR_HSRANK_5_3eri2 0
#define LIBINT2_MAX_HRR_LSRANK_5_3eri2 0
#define LIBINT2_NUM_TARGETS_2eri 1
#define LIBINT2_MAX_STACK_SIZE_0_2eri 1
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_0_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_0_2eri 0
#define LIBINT2_MAX_STACK_SIZE_1_2eri 117
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_1_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_1_2eri 0
#define LIBINT2_MAX_STACK_SIZE_2_2eri 178
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_2_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_2_2eri 0
#define LIBINT2_MAX_STACK_SIZE_3_2eri 529
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_3_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_3_2eri 0
#define LIBINT2_MAX_STACK_SIZE_4_2eri 1099
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_4_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_4_2eri 0
#define LIBINT2_MAX_STACK_SIZE_5_2eri 2625
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_2eri 0
#define LIBINT2_MAX_HRR_HSRANK_5_2eri 0
#define LIBINT2_MAX_HRR_LSRANK_5_2eri 0
#define LIBINT2_NUM_TARGETS_2eri1 6
#define LIBINT2_MAX_STACK_SIZE_0_2eri1 6
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_2eri1 0
#define LIBINT2_MAX_HRR_HSRANK_0_2eri1 0
#define LIBINT2_MAX_HRR_LSRANK_0_2eri1 0
#define LIBINT2_MAX_STACK_SIZE_1_2eri1 259
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_2eri1 0
#define LIBINT2_MAX_HRR_HSRANK_1_2eri1 0
#define LIBINT2_MAX_HRR_LSRANK_1_2eri1 0
#define LIBINT2_MAX_STACK_SIZE_2_2eri1 531
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_2eri1 0
#define LIBINT2_MAX_HRR_HSRANK_2_2eri1 0
#define LIBINT2_MAX_HRR_LSRANK_2_2eri1 0
#define LIBINT2_MAX_STACK_SIZE_3_2eri1 1318
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_2eri1 0
#define LIBINT2_MAX_HRR_HSRANK_3_2eri1 0
#define LIBINT2_MAX_HRR_LSRANK_3_2eri1 0
#define LIBINT2_MAX_STACK_SIZE_4_2eri1 2301
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_2eri1 0
#define LIBINT2_MAX_HRR_HSRANK_4_2eri1 0
#define LIBINT2_MAX_HRR_LSRANK_4_2eri1 0
#define LIBINT2_MAX_STACK_SIZE_5_2eri1 5041
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_2eri1 0
#define LIBINT2_MAX_HRR_HSRANK_5_2eri1 0
#define LIBINT2_MAX_HRR_LSRANK_5_2eri1 0
#define LIBINT2_NUM_TARGETS_2eri2 21
#define LIBINT2_MAX_STACK_SIZE_0_2eri2 21
#define LIBINT2_MAX_VECTOR_STACK_SIZE_0_2eri2 0
#define LIBINT2_MAX_HRR_HSRANK_0_2eri2 0
#define LIBINT2_MAX_HRR_LSRANK_0_2eri2 0
#define LIBINT2_MAX_STACK_SIZE_1_2eri2 469
#define LIBINT2_MAX_VECTOR_STACK_SIZE_1_2eri2 0
#define LIBINT2_MAX_HRR_HSRANK_1_2eri2 0
#define LIBINT2_MAX_HRR_LSRANK_1_2eri2 0
#define LIBINT2_MAX_STACK_SIZE_2_2eri2 1323
#define LIBINT2_MAX_VECTOR_STACK_SIZE_2_2eri2 0
#define LIBINT2_MAX_HRR_HSRANK_2_2eri2 0
#define LIBINT2_MAX_HRR_LSRANK_2_2eri2 0
#define LIBINT2_MAX_STACK_SIZE_3_2eri2 3048
#define LIBINT2_MAX_VECTOR_STACK_SIZE_3_2eri2 0
#define LIBINT2_MAX_HRR_HSRANK_3_2eri2 0
#define LIBINT2_MAX_HRR_LSRANK_3_2eri2 0
#define LIBINT2_MAX_STACK_SIZE_4_2eri2 4725
#define LIBINT2_MAX_VECTOR_STACK_SIZE_4_2eri2 0
#define LIBINT2_MAX_HRR_HSRANK_4_2eri2 0
#define LIBINT2_MAX_HRR_LSRANK_4_2eri2 0
#define LIBINT2_MAX_STACK_SIZE_5_2eri2 9261
#define LIBINT2_MAX_VECTOR_STACK_SIZE_5_2eri2 0
#define LIBINT2_MAX_HRR_HSRANK_5_2eri2 0
#define LIBINT2_MAX_HRR_LSRANK_5_2eri2 0
#endif

