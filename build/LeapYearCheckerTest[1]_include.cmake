if(EXISTS "/Users/steve.bement/Code/LeapYearC/build/LeapYearCheckerTest[1]_tests.cmake")
  include("/Users/steve.bement/Code/LeapYearC/build/LeapYearCheckerTest[1]_tests.cmake")
else()
  add_test(LeapYearCheckerTest_NOT_BUILT LeapYearCheckerTest_NOT_BUILT)
endif()
