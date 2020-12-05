cmake_minimum_required(VERSION 3.17)
project(TemePOO)

set(CMAKE_CXX_STANDARD 14)

add_executable(TemePOO Sources/main.cpp Sources/Engine.cpp Headers/Engine.h Sources/F1car.cpp Headers/F1car.h Sources/Pilot.cpp Headers/Pilot.h Sources/Team.cpp Headers/Team.h Teams/Sources/ScuderiaFerrari.cpp Teams/Headers/ScuderiaFerrari.h Teams/Sources/MercedesAMG.cpp Teams/Headers/MercedesAMG.h Teams/Sources/RedBullRacing.cpp Teams/Headers/RedBullRacing.h Teams/Sources/McLaren.cpp Teams/Headers/McLaren.h Teams/Sources/Renault.cpp Teams/Headers/Renault.h Teams/Sources/RacingPoint.cpp Teams/Headers/RacingPoint.h Teams/Sources/AlphaTauri.cpp Teams/Headers/AlphaTauri.h Teams/Sources/AlfaRomeoRacing.cpp Teams/Headers/AlfaRomeoRacing.h Teams/Sources/Haas.cpp Teams/Headers/Haas.h Teams/Sources/Williams.cpp Teams/Headers/Williams.h)
add_compile_options(-Wall -Wextra -pedantic -Werror -Weffc++)