//          Copyright Odin Holmes 2016.
// Distributed under the Boost Software License, Version 1.0.
//     (See accompanying file LICENSE.md or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
#pragma once

#include "../algorithm/transform.hpp"
#include "../functional/call.hpp"
#include "../functional/identity.hpp"
#include "../sequence/join.hpp"
#include "../utility/conditional.hpp"

namespace kvasir {
	namespace mpl {
		/// \brief output is equivalent to the input parameter pack with every element
		/// replaced with Input where the predicate F holds.
		template <typename Input, typename F = identity, typename C = listify>
		using replace_if = transform<if_<F, always<Input>, identity>, C>;

		/// \exclude
		template <template <typename...> class F, typename Input, template <typename...> class C>
		struct transform<detail::replace_if_pred<cfe<F, identity>, Input>, cfe<C, identity>> {
			template <typename... Ts>
			using f = typename dcallf<(sizeof...(Ts) > 100000)>::template f1<
			        C, typename conditional<F<Ts>::value>::template f<Input, Ts>...>;
		};

		namespace eager {
			template <typename List, typename Input, template <typename...> class Cond = identity>
			using replace_if = call<unpack<mpl::replace_if<Input, cfe<Cond>>>, List>;
		}
	} // namespace mpl
} // namespace kvasir
