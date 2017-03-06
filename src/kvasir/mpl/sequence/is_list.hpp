//          Copyright Chiel Douwes 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE.md or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
#pragma once

#include "../types/list.hpp"
#include "../types/bool.hpp"

namespace kvasir {
	namespace mpl {
		namespace impl {
			template <typename Elem>
			struct is_list {
				using f = bool_<false>;
			};

			template <typename... Ts>
			struct is_list<mpl::list<Ts...>> {
				using f = bool_<true>;
			};
		}

		template <typename Elem>
		using is_list = typename impl::is_list<Elem>::f;
	}
}
