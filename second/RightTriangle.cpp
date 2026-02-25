#include "RightTriangle.h"
#include "FigureError.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C)
    : Triangle(a, b, c, A, B, C) {
    name = "Прямоугольный треугольник";
    if (C != 90) {
        throw FigureError("угол C не равен 90");
    }
}