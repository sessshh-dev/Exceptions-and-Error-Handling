#include <iostream>
#include "RightTriangle.h"
#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"

int main() {
    try {
        RightTriangle t1(3, 4, 5, 30, 60, 90);
        t1.print_info();
        std::cout << " создан\n";

        EquilateralTriangle t2(3, 3, 3, 60, 60, 60);
        t2.print_info();
        std::cout << " создан\n";

        RightTriangle t3(3, 4, 5, 30, 60, 80);
    }
    catch (const std::exception& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }
}