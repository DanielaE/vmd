#if !defined(VARIADIC_MACRO_DATA_HPP)
#define VARIADIC_MACRO_DATA_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/variadic_macro_data/vmd_is_empty.hpp>
#include <boost/variadic_macro_data/vmd_is_begin_parens.hpp>
#include <boost/variadic_macro_data/vmd_remove_parens.hpp>
#include <boost/variadic_macro_data/vmd_assert_is_array.hpp>
#include <boost/variadic_macro_data/vmd_assert_is_list.hpp>
#include <boost/variadic_macro_data/vmd_assert_is_seq.hpp>
#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>

#endif /* BOOST_PP_VARIADICS */
#endif /* VARIADIC_MACRO_DATA_HPP */