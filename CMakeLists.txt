cmake_minimum_required(VERSION 3.22)
project(LR6)


add_library(String STATIC Tasks.cpp)

add_executable(AddressSan Tasks_adress_san.cpp)
target_compile_options(AddressSan PRIVATE -fsanitize=address)
target_link_options(AddressSan PRIVATE -fsanitize=address)



add_executable(ThreadSan Tasks_tread_san.cpp)
target_compile_options(ThreadSan PRIVATE -fsanitize=thread)
target_link_options(ThreadSan PRIVATE -fsanitize=thread)

enable_testing()