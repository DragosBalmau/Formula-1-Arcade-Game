cmake_minimum_required(VERSION 3.17)
project(TemePOO)

set(CMAKE_CXX_STANDARD 14)

set(GLFW_DIR D:/Proiecte/TemePOO/GLFW)
set(SOIL_DIR D:/Proiecte/TemePOO/SOIL)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -pedantic -Werror -Weffc++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

add_executable(TemePOO Sources/main.cpp Sources/Engine.cpp Headers/Engine.h Sources/F1car.cpp Headers/F1car.h Sources/Pilot.cpp Headers/Pilot.h Sources/Team.cpp Headers/Team.h Teams/Sources/ScuderiaFerrari.cpp Teams/Headers/ScuderiaFerrari.h Teams/Sources/MercedesAMG.cpp Teams/Headers/MercedesAMG.h Teams/Sources/RedBullRacing.cpp Teams/Headers/RedBullRacing.h Teams/Sources/McLaren.cpp Teams/Headers/McLaren.h Teams/Sources/Renault.cpp Teams/Headers/Renault.h Teams/Sources/RacingPoint.cpp Teams/Headers/RacingPoint.h Teams/Sources/AlphaTauri.cpp Teams/Headers/AlphaTauri.h Teams/Sources/AlfaRomeoRacing.cpp Teams/Headers/AlfaRomeoRacing.h Teams/Sources/Haas.cpp Teams/Headers/Haas.h Teams/Sources/Williams.cpp Teams/Headers/Williams.h Fereastra.cpp Fereastra.h Game.cpp Game.h Grafica/Textura.cpp Grafica/Textura.h Grafica/Sprite.cpp Grafica/Sprite.h IO/MOUSE.cpp IO/MOUSE.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${GLFW_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${SOIL_DIR}/src)

target_link_directories(${PROJECT_NAME} PUBLIC ${GLFW_DIR})
target_link_directories(${PROJECT_NAME} PUBLIC ${SOIL_DIR}/lib)

target_link_libraries(${PROJECT_NAME} soil glu32 opengl32 glfw3)