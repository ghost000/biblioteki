cmake_minimum_required(VERSION 3.5.1)
project(zad1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -pedantic -W -Wall -Wextra -Wunused -Werror")
#find_package(Threads)

add_executable(zad1 main.cpp Singleton/Singleton.cpp Singleton/Singleton.h calls1/Calls1.cpp calls1/Calls1.h singleton_dynamic/singleton_dynamic.cpp singleton_dynamic/singleton_dynamic.h)
#target_link_libraries (zad1 ${CMAKE_THREAD_LIBS_INIT})
