#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/variadic_macro_data/vmd.hpp>
#else
#include <boost/variadic_macro_data/vmd_assert_is_list.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

  BOOST_VMD_ASSERT_IS_LIST((4,(5,BOOST_PP_NIL),6))
  
#else

  typedef char BOOST_VMD_ASSERT_IS_LIST_ERROR[-1];
   
#endif

  return boost::report_errors();
  
  }