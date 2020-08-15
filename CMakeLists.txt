project(nojam)
set(CMAKE_CXX_STANDARD 20)
cmake_minimum_required(VERSION 3.16)

SET(PROBLEM_NO "1006")

file(GLOB files "Solving/${PROBLEM_NO}/*.h" "Solving/${PROBLEM_NO}/*.cpp")
add_executable(nojam ${files})