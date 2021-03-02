cmake_minimum_required(VERSION 3.17)
project(j)

set(CMAKE_CXX_STANDARD 14)

add_executable(j main.cpp Config/Config.h Config/List/ConfigListEntry.cpp Config/List/ConfigListEntry.h Config/configs/SpecialConfiguration/SpecialConfiguration.cpp Config/configs/SpecialConfiguration/SpecialConfiguration.h Config/configs/NormieConfig/NormieConfiguration.cpp Config/configs/NormieConfig/NormieConfiguration.h)