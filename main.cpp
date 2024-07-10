//
// Created by Rohit Bohra on 06/07/24.
//

#include <iostream>
#include "RubiksCube3dArray.cpp"
#include "RubiksCube1dArray.cpp"
#include "RubiksCubeBitboard.cpp"
using namespace std;

int main(){

    RubiksCube3dArray c1;
    RubiksCube3dArray c2;

    if(c1 == c2) cout << "Cubes are equal" << endl;
    else cout << "Cubes are not equal" << endl;

    c1.l();

    if(c1 == c2) cout << "Cubes are equal" << endl;
    else cout << "Cubes are not equal" << endl;

    c1 = c2;
    c1.print();
    c2.print();




    return 0;
}
