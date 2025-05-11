cmake_minimum_required(VERSION 3.30) #defining minimum cmake version (3.30)

set(CMAKE_CXX_STANDARD 20) #defining c++ standard version to use c++ 20

project(c-testing VERSION 1.0) #Indicating project name and I can also indicate version of the project

#Here I indicate all the executable files (.c, .cpp) that my project is going to have.
#add_executable(c-testing src/main.cpp src/basic.cpp src/guessTheNumber.cpp src/math.cpp src/Vector3.cpp)

#And is better to use this when I have multiple source files that I want to add without typing all the names.
file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(c-testing ${SRC_FILES})

target_include_directories(c-testing PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include) #With this we indicate the directory
#where the headers files are, this is an extra, because I like to put my header files in the same directory of my source files this means src.

#To run a cmake project do mkdir build, cd build, cmake .. and finally make, and after that every time I make a change
#in the code I just need to use make in the build file to generate a new executable.
#The main purposes of cmake is to generate a simple makefile to build the project.
#cmake is cleaner that makefiles, that is one of the reason why anyone should use it.