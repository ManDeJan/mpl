//          Copyright Chiel Douwes 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE.md or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
#pragma once

namespace kvasir {
	namespace mpl {
    template<typename A, typename B>
    using bitwise_or = integral_constant<decltype(A{} | B{}), (A{} | B{})>;
	}
}
