cmake_minimum_required(VERSION 3.10)
project(base)

# 可选：显式设置编译器要求
set(CMAKE_CXX_STANDARD 11)


# 添加头文件搜索路径
include_directories(include)

add_executable(base src/swap.cpp)