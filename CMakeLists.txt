cmake_minimum_required(VERSION 3.30) #defining minimum cmake version (3.30)

set(CMAKE_CXX_STANDARD 20) #defining c++ standard version to use c++ 20

project(c-testing VERSION 1.0) #Indicating project name and I can also indicate version of the project
add_executable(c-testing main.cpp basic.cpp guessTheNumber.cpp math.cpp Vector3.cpp) #Here I indicate all the executable files (.c, .cpp) that my project is going to have.
