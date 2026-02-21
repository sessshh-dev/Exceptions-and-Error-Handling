#include "Triangle.h"
#include "FigureError.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : Shape("Треугольник", 3), a(a), b(b), c(c), A(A), B(B), C(C)
{
    if (!check()) {
        throw FigureError("сумма углов не равна 180");
    }
}

bool Triangle::check() const {
    return A + B + C == 180;
}

void Triangle::print_info() const {
    Shape::print_info();
    std::cout << "Стороны: " << a << ", " << b << ", " << c << std::endl;
    std::cout << "Углы: " << A << ", " << B << ", " << C << std::endl;
}