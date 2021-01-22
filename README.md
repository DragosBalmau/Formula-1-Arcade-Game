# Formula 1 Arcade Game

## Description

This is an arcade game inspired by [Arlington Horse Racing](https://en.wikipedia.org/wiki/Arlington_Horse_Racing) made with [GLFW](https://www.glfw.org/) and [SOIL](https://github.com/Friduric/simple-opengl-image-library) libraries.

The race is completely random based on a [generation of distances](https://github.com/DragosBalmau/TemePOO/blob/main/Game.cpp#L88), which the cars cover at every step until one reaches the finish line.

## Screenshots from the game

### Start screen

![alt text](https://github.com/DragosBalmau/TemePOO/blob/main/Screenshots/start.png)

### Prerace

![alt text](https://github.com/DragosBalmau/TemePOO/blob/main/Screenshots/prerace.png)

### Finish

![alt text](https://github.com/DragosBalmau/TemePOO/blob/main/Screenshots/end.png)

## Theoretical concepts of OOP treated in this project

- Classes (with private / protected attributes and public functions)
- Constructors
- [Rule of three](https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming))
  - Destructors
  - Operator= overload
  - Copy constructor 
- Inheritance
- Virtual functions
- C++ exceptions
- Smart pointers
- STL library
- Design patterns

## Recomanded requirments

- MinGW
- C++ 14

## Flags used

- -Wall
- -Wextra
- -pedantic
- -Weffc++
- -Werror

# Future updates

- Audio (I'm going to use an audio library [irrKlang](https://www.ambiera.com/irrklang/) for menu backgroung and for cars' effects)
- Make a career mode
- Make multiple levels
- Display live time positions on the track
- Transform the game into a Clicker

## Textures:

Circuit: https://www.freepik.com/free-vector/race-finish-top-view-illustration_3797255.htm

Cars: https://www.freepik.com/free-vector/collection-formula-1-cars_2723962.htm#page=2&query=formula+1+cars&position=22

Start wallpaper: https://images6.alphacoders.com/112/thumb-1920-1120089.jpg


## Libraries:

SOIL: https://github.com/Friduric/simple-opengl-image-library

GLFW: https://www.glfw.org/
