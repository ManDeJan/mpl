//          Copyright Chiel Douwes 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE.md or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
#pragma once

namespace kvasir {
	namespace mpl {
		/// \brief wrapper which represents bool types
		template <bool Value>
		struct bool_ {
			static constexpr bool value = Value;
		};
		/// \brief universal true type in the library
		using true_ = bool_<true>;
		/// \brief universal false type in the library
		using false_ = bool_<false>;
	} // namespace mpl
} // namespace kvasir
