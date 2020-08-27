# CPPND: Capstone Snake Game Example

This is the Udacity Capstone project. My project implements a simple AI module using Best First Search algorithm. The snake can score on average at least 15 points in a game. This simple implementatono encompaasses creating an AI class that inherits from the base game class. The AI class then have to be sucessfully integrated with the main game class. 
This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.


<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## CRITERIA
- [X] A README with instructions is included with the project

- [X] The README is included with the project and has instructions for building/running the project.
  * If any additional libraries are needed to run the project, these are indicated with cross-platform installation instructions.
  * You can submit your writeup as markdown or pdf.

- [X] The README indicates which project is chosen.

- [X] The README describes the project you have built.

- [X] The README also indicates the file and class structure, along with the expected behavior or output of the program.
  * snakePlanner Class: An AI class that inherits from the snake class. 
  * Nodes Class: a class that is used to hold data points for the AI to make decisions
  * Game Class: This class initalizes the AI module. This module replaces the original snake class
  * Controller Class: This class implememnts a spearate method that sends control sent by the AI class back to the game 

- [X] The README includes information about each rubric point addressed. 

- [X] The README indicates which rubric points are addressed. The README also indicates where in the code (i.e. files and line numbers) that the rubric points are addressed.

## Compiling and Testing (All Rubric Points REQUIRED)

- [X] The submission must compile and run.

- [X] The project code must compile and run without errors.


## Loops, Functions, I/O

CRITERIA
MEETS SPECIFICATIONS
- [X] The project demonstrates an understanding of C++ functions and control structures.

- [X] A variety of control structures are used in the project.

- [X] The project code is clearly organized into functions.
  * Please see the snakePlanner class for the different functions implemented
- [] The project reads data from a file and process the data, or the program writes data to a file.

- [] The project reads data from an external file or writes data to a file as part of the necessary operation of the program.

- [] The project accepts user input and processes the input.

- [] The project accepts input from a user as part of the necessary operation of the program.

## Object Oriented Programming

CRITERIA
MEETS SPECIFICATIONS
- [X] The project uses Object Oriented Programming techniques.
  * As evidence of the snakePlanner and Nodes class implemented

- [X] The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
  * As evidence of the snakePlanner and Nodes class implemented
- [X] Classes use appropriate access specifiers for class members.
  * As evidence of the snakePlanner and Nodes class implemented
- [X] All class data members are explicitly specified as public, protected, or private.
  * As evidence of the snakePlanner and Nodes class implemented
- [X] Class constructors utilize member initialization lists.
  * SnakePlanner.h l.32
- [] All class members that are set to argument values are initialized through member initialization lists.

- [X] Classes abstract implementation details from their interfaces.
  * Please see snakePlanner.h and Nodes.h header files
- [] All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.

- [] Classes encapsulate behavior.

- [X] Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions.
  * Snake class implements couple access functions. Line 31, 32
- [X] Classes follow an appropriate inheritance hierarchy.
  * Snakeplanner class inherits from snake. as this is a more specialized class with separate decision making capbability

- [X] Inheritance hierarchies are logical. Composition is used instead of inheritance when appropriate. Abstract classes are composed of pure virtual functions. Override functions are specified.
  * Snakeplanner class inherits from snake. as this is a more specialized class with separate decision making capbability

- [X] Overloaded functions allow the same function to operate on different parameters.
  * Nodes class implements its own == operator, which compares the location of two nodes Please see nodes.h l.23

- [] One function is overloaded with different signatures for the same function name.

- [] Derived class functions override virtual base class functions.

- [] One member function in an inherited class overrides a virtual base class member function.

- [] Templates generalize functions in the project.

- [] One function is declared with a template that allows it to accept a generic parameter.

## Memory Management

CRITERIA
MEETS SPECIFICATIONS
- [X] The project makes use of references in function declarations.
  * Controller.cpp Line 43. HandleInputAI function
- [] At least two variables are defined as references, or two functions use pass-by-reference in the project code.

- [] The project uses destructors appropriately.

- [] At least one class that uses unmanaged dynamically allocated memory, along with any class that otherwise needs to modify state upon the termination of an object, uses a destructor.

- [] The project uses scope / Resource Acquisition Is Initialization (RAII) where appropriate.

- [] The project follows the Resource Acquisition Is Initialization pattern where appropriate, by allocating objects at compile-time, initializing objects when they are declared, and utilizing scope to ensure their automatic destruction.

- [] The project follows the Rule of 5.

- [] For all classes, if any one of the copy constructor, copy assignment operator, move constructor, move assignment operator, and destructor are defined, then all of these functions are defined.

- [] The project uses move semantics to move data, instead of copying it, where possible.

- [] For classes with move constructors, the project returns objects of that class by value, and relies on the move constructor, instead of copying the object.

- [] The project uses smart pointers instead of raw pointers.

- [] The project uses at least one smart pointer: unique_ptr, shared_ptr, or weak_ptr. The project does not use raw pointers.

## Concurrency

CRITERIA
MEETS SPECIFICATIONS
- [] The project uses multithreading.

- [] The project uses multiple threads in the execution.

- [] A promise and future is used in the project.

- [] A promise and future is used to pass data from a worker thread to a parent thread in the project code.

- [] A mutex or lock is used in the project.

- [] A mutex or lock (e.g. std::lock_guard or `std::unique_lock) is used to protect data that is shared across multiple threads in the project code.

- [] A condition variable is used in the project.

- [] A std::condition_variable is used in the project code to synchronize thread execution.