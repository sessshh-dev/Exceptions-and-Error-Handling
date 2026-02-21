#include "EquilateralTriangle.h"
#include "FigureError.h"

EquilateralTriangle::EquilateralTriangle(int a)
    : Triangle(a, a, a, 60, 60, 60) {
    name = "Равносторонний треугольник";
}