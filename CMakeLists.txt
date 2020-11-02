cmake_minimum_required(VERSION 3.17)
project(TemePOO)

set(CMAKE_CXX_STANDARD 14)

add_executable(TemePOO main.cpp Engine.cpp Engine.h F1car.cpp F1car.h Pilot.cpp Pilot.h Team.cpp Team.h Teams/ScuderiaFerrari.cpp Teams/ScuderiaFerrari.h Teams/MercedesAMG.cpp Teams/MercedesAMG.h Teams/RedBullRacing.cpp Teams/RedBullRacing.h Teams/McLaren.cpp Teams/McLaren.h Teams/Renault.cpp Teams/Renault.h Teams/RacingPoint.cpp Teams/RacingPoint.h Teams/AlphaTauri.cpp Teams/AlphaTauri.h Teams/AlfaRomeoRacing.cpp Teams/AlfaRomeoRacing.h Teams/Haas.cpp Teams/Haas.h Teams/Williams.cpp Teams/Williams.h)