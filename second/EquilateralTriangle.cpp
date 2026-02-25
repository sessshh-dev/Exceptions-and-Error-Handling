#include "EquilateralTriangle.h"
#include "FigureError.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C)
    : Triangle(a, b, c, A, B, C) {
    name = "Равносторонний треугольник";
    if (!(a == b && b == c && A == 60 && B == 60 && C == 60)) {
        throw FigureError("не все стороны равны или углы не равны 60");
    }
}