cmake_minimum_required(VERSION 3.30)
project(Philburn_HW3_Q1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Philburn_HW3_Q1 main.cpp
        Person.h
        Person.cpp
        Hero.h
        Hero.cpp
        SuperHero.h
        SuperHero.cpp
        Villain.h
        Villain.cpp)
