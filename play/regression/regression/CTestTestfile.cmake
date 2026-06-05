# CMake generated Testfile for 
# Source directory: /src/regression/regression
# Build directory: /src/build/regression/regression
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(regression_regression "/usr/bin/cmake" "-DOPENTTD_EXECUTABLE=/src/build/openttd.html" "-DEDITBIN_EXECUTABLE=" "-DREGRESSION_TEST=regression" "-P" "/src/cmake/scripts/Regression.cmake")
set_tests_properties(regression_regression PROPERTIES  WORKING_DIRECTORY "/src/build" _BACKTRACE_TRIPLES "/src/cmake/CreateRegression.cmake;48;add_test;/src/regression/regression/CMakeLists.txt;2;create_regression;/src/regression/regression/CMakeLists.txt;0;")
