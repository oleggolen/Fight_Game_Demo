cmake_minimum_required(VERSION 3.19)
project(Fight_Game_Demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Fight_Game_Demo main.cpp Heroes/Hero.cpp Heroes/Hero.h Heroes/Archer.cpp Heroes/Archer.h Heroes/Knight.cpp Heroes/Knight.h)