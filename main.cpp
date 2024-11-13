// main.cpp
#include "models/RubiksCube.h"
#include <iostream>

extern void make();  // Declare the function using extern

int main() {
    make();  // Call the function defined in 3dArrayRepresentation.cpp
    return 0;
}
