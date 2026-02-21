#include "Quadrangle.h"
#include "FigureError.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
    : Shape("Четырёхугольник", 4),
      a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    if (A + B + C + D != 360) {
        throw FigureError("сумма углов не равна 360");
    }
}