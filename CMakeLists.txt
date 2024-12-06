cmake_minimum_required(VERSION 3.29.6)
project(simasciitrain-team-rocket)

set(CMAKE_CXX_STANDARD 20)

add_executable(simasciitrain-team-rocket main.cpp
        TrainElement.h
        TypeWagon.h
        TypeWagon.cpp
        AbstractWagon.cpp
        AbstractWagon.h
        FreightWagon.h
        FreightWagon.cpp
        PassengerWagon.h
        PassengerWagon.cpp
        UtilityWagon.h
        UtilityWagon.cpp
        TypeLocomotive.h
        TypeLocomotive.cpp
        ElectricLocomotive.h
        ElectricLocomotive.h
        AbstractLocomotive.h
        AbstractLocomotive.cpp
        GasolineLocomotive.h
        GasolineLocomotive.cpp
        Wagons.h
        Wagons.cpp
        ITrain.h
        Train.h
        Train.cpp
        ElectricLocomotive.cpp
)