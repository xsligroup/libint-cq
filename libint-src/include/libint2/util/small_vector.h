/*
 *  Copyright (C) 2004-2018 Edward F. Valeev
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

#ifndef _libint2_include_libint2_util_smallvector_h_
#define _libint2_include_libint2_util_smallvector_h_

#if __has_include(<boost/container/small_vector.hpp>) && !defined(LIBINT2_DISABLE_BOOST_CONTAINER_SMALL_VECTOR)
#  define LIBINT2_HAS_BOOST_CONTAINER_SMALL_VECTOR_H 1
#  if !defined(LIBINT2_SVECTOR_OPTIMIZED_RANK)  // user can override by defining LIBINT2_SVECTOR_OPTIMIZED_RANK
#    define LIBINT2_SVECTOR_OPTIMIZED_RANK 6
#  endif
#  include <boost/container/small_vector.hpp>
#else
#  include <vector>
#endif

namespace libint2 {

#if defined(LIBINT2_HAS_BOOST_CONTAINER_SMALL_VECTOR_H)
#define LIBINT2_USES_BOOST_CONTAINER_SMALL_VECTOR_AS_SVECTOR 1
template <typename T> using svector = boost::container::small_vector<T, LIBINT2_SVECTOR_OPTIMIZED_RANK>;
#else
template <typename T> using svector = std::vector<T>;
#endif

} // namespace libint2

#endif // header guard

