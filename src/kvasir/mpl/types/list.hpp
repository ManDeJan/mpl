//          Copyright Odin Holmes 2016.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE.md or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
#pragma once

namespace kvasir {
	namespace mpl {
		template <typename... Ts>
		struct list {};

		template <typename... Ts>
		list<Ts...> make_list(Ts...) {
			return {};
		}
	}
}