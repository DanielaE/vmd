#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_SIMPLE_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_SIMPLE_HPP

#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/control/while.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/detail/after_identifier_common.hpp>
#include <boost/vmd/detail/paren_or_empty_or_simple_number.hpp>

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_SIMPLE_OP(d,state) \
	( \
	BOOST_PP_TUPLE_ELEM(0,state), \
	BOOST_PP_TUPLE_ELEM(1,state), \
	BOOST_PP_INC(BOOST_PP_TUPLE_ELEM(2,state)), \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_SIMPLE_NUMBER(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_REST(state)), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FOUND, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CONTINUE \
		) \
	(state) \
	) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_SIMPLE(parameter,keys) \
	BOOST_PP_TUPLE_ELEM \
		( \
		3, \
		BOOST_PP_WHILE \
			( \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_PRED, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_SIMPLE_OP, \
				( \
				parameter, \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_TUPLE \
					( \
					BOOST_PP_VARIADIC_ELEM(keys) \
					), \
				0, \
				(0,) \
				) \
			) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_SIMPLE_HPP */