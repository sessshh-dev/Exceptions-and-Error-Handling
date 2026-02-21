#include "IsoscelesTriangle.h"
#include "FigureError.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B)
    : Triangle(a, b, a, A, B, A) {
    name = "Равнобедренный треугольник";

    if (a != c || A != C) {
        throw FigureError("не выполняются условия равнобедренного треугольника");
    }
}