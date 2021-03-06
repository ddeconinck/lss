// Copyright (C) 2013 Vrije Universiteit Brussel, Belgium
//
// This software is distributed under the terms of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.


#include "common/Builder.hpp"
#include "LAPACK.hpp"


namespace cf3 {
namespace lss {


template<> std::string LAPACK< double >::type_name() { return "LAPACK"; }
template<> std::string LAPACK< float  >::type_name() { return "LAPACK_SinglePrecision"; }
common::ComponentBuilder< LAPACK< double >, common::Component, LibLSS > Builder_LAPACK;
common::ComponentBuilder< LAPACK< float  >, common::Component, LibLSS > Builder_LAPACK_SinglePrecision;


}  // namespace lss
}  // namespace cf3

