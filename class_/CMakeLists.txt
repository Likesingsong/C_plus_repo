cmake_minimum_required(VERSION 3.10)
project(class_)

# 可选：显式设置编译器要求
set(CMAKE_CXX_STANDARD 11)


# 添加头文件搜索路径
include_directories(include)

add_executable(class_ src/people.cpp src/student.cpp
                      src/graduate.cpp src/teacher.cpp
                      src/teacher_assistant.cpp src/main.cpp)