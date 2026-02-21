#include <iostream>
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"

int main() {
    try {
        RightTriangle t1(3, 4, 5, 30, 60);
        t1.print_info();

        IsoscelesTriangle t2(10, 20, 50, 60);
        t2.print_info();
    }
    catch (const std::exception& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }
}