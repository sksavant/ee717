project(717_Assgn_1)

enable_testing()
add_subdirectory( /usr/src/gtest gtest )
include_directories( "/usr/include/gtest" )

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_library(two-stacks SHARED src/1stacks.hpp)
set_target_properties(two-stacks PROPERTIES LINKER_LANGUAGE CXX)

add_executable(two_stacks_main src/main.cpp)
target_link_libraries(two_stacks_main two-stacks)

include_directories(src)
add_executable(two_stacks_test test/test.cpp)
target_link_libraries(two_stacks_test gtest gtest_main pthread)
add_test(two_stacks_test ${EXECUTABLE_OUTPUT_PATH}/two_stacks_test)
