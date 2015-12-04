cmake_minimum_required(VERSION 2.8.11)

project(test)



include_directories(
    C:/Users/Boris/Documents/interviews/test/
    C:/Users/Boris/Documents/interviews/test/

)

# Linker options
set(CMAKE_LDFLAGS "${CMAKE_LDFLAGS}  ")

# Library path
set(CMAKE_LDFLAGS "${CMAKE_LDFLAGS} -L\".\" ")

# Define the CXX sources
set ( CXX_SRCS
    testsMain.cpp
    fibinacci.cpp
    LinkedList.cpp
    stringoperations.cpp
    BinaryTree.cpp
)

set_source_files_properties(
    ${CXX_SRCS} PROPERTIES COMPILE_FLAGS 
    " -g -O0 -Wall")

add_executable(test ${CXX_SRCS} ${C_SRCS})

