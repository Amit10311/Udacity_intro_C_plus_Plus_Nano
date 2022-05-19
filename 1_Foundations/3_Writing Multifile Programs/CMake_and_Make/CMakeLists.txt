cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_STANDARD 17)

#project(<your_project_name>)
project(ExampleProject)

#add_executable(your_executable_name  path_to_file_1  path_to_file_2 ...)
add_executable(example_files  src/main.cpp  src/vect_add_one.cpp  src/increment_and_sum.cpp)
