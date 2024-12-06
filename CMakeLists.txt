cmake_minimum_required(VERSION 3.29.6)
project(simasciitrain-team-rocket)

set(CMAKE_CXX_STANDARD 20)

add_executable(simasciitrain-team-rocket main.cpp
        TrainElement.h
        Train.h
        Train.cpp
        ITrain.h
        AbstractWagon.cpp
        TypeWagon.h
        TypeWagon.cpp
        TypeLocomotive.h
        TypeLocomotive.cpp
        Wagons.h
        Wagons.cpp
        AbstractLocomotive.h
        AbstractLocomotive.cpp
        FreightWagon.h
        FreightWagon.cpp
        PassengerWagon.h
        PassengerWagon.cpp
        UtilityWagon.h
        UtilityWagon.cpp
        ElectricLocomotive.h
        ElectricLocomotive.cpp
        GasolineLocomotive.cpp
)