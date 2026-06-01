cmake_minimum_required(VERSION 3.20)
project(CharacterPlugin)

set(CMAKE_CXX_STANDARD 17)

add_library(character_plugin SHARED
    plugin.cpp
    joint_controller.cpp
)