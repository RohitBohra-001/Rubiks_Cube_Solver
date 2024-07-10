cmake_minimum_required(VERSION 3.21)
project(Rubiks_Cube_Solver)

set(CMAKE_CXX_STANDARD 14)

add_executable(Rubiks_Cube_Solver main.cpp
        RubiksCube1dArray.cpp
        RubiksCube3dArray.cpp
        RubiksCubeBitboard.cpp
        GenericRubiksCube.cpp
        DFSSolver.h
        BFSSolver.h
        IDDFSSolver.h
        IDAstarSolver.h
        PatternDatabases/NibbleArray.h
        PatternDatabases/NibbleArray.cpp
        PatternDatabases/CornerPatternDatabase.cpp
        PatternDatabases/PatternDatabase.cpp
        PatternDatabases/math.cpp
        PatternDatabases/CornerDBMaker.cpp)