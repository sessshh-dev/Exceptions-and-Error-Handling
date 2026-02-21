#include "Rectangle.h"
#include "FigureError.h"

Rectangle::Rectangle(int a, int b)
    : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
    name = "Прямоугольник";
}