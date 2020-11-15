project(nojam)
set(CMAKE_CXX_STANDARD 20)
cmake_minimum_required(VERSION 3.16)

SET(PROBLEM_NO "11437")
SET(CODE_NO "1")

file(GLOB files "Solving/${PROBLEM_NO}/*_${CODE_NO}.cpp")
add_executable(nojam ${files})