
#include "models/RubiksCube.h"
#include "models/3dArrayReprenstation.cpp"

int main() {
    RubiksCube3dArray obj;
    obj.randomShuffleCube(10);
    obj.print();
    obj.u();
    obj.print();
    return 0;
}