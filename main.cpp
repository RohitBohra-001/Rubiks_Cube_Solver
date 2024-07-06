//
// Created by Rohit Bohra on 06/07/24.
//

#include <iostream>
#include "RubiksCube3dArray.cpp"
#include "RubiksCube1dArray.cpp"
#include "RubiksCubeBitboard.cpp"
using namespace std;

int main(){
    RubiksCube3dArray objectdf;
    RubiksCube1dArray ui;

    objectdf.print();
    objectdf.l();
    objectdf.print();
    ui.print();


    return 0;
}
