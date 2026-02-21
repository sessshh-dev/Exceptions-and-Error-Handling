#include "Shape.h"

Shape::Shape(const std::string& name, int sides_count)
    : name(name), sides_count(sides_count) {}

void Shape::print_info() const {
    std::cout << name << " создан\n";
    std::cout << "Количество сторон: " << sides_count << std::endl;
}