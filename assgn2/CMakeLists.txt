project(717_Assgn_2)
cmake_minimum_required(VERSION 2.8)

enable_testing()
add_subdirectory( /usr/src/gtest gtest )
include_directories( "/usr/include/gtest" )

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_library(1heap src/1heap.hpp)
set_target_properties(1heap PROPERTIES LINKER_LANGUAGE CXX)

include_directories(src)
add_executable(test_heap test/1test.cpp)
target_link_libraries(test_heap gtest gtest_main pthread)
add_test(test_heap ${EXECUTABLE_OUTPUT_PATH}/test_heap --verbose)
