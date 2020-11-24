cmake_minimum_required(VERSION 3.5)

project(cpp-mistakes)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(1.sign)
add_subdirectory(2.fp_comparison)
add_subdirectory(3.new_delete)
add_subdirectory(4.dead_reference)
add_subdirectory(5.local_reference)
add_subdirectory(6.stack_overflow)
add_subdirectory(7.sizeof_struct)
add_subdirectory(8.value_or_reference)
