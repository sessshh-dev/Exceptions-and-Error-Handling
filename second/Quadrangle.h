#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "Shape.h"

class Quadrangle : public Shape {
protected:
    int a, b, c, d;
    int A, B, C, D;

public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
};

#endif