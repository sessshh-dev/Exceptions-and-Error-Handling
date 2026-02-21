#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <iostream>

class Shape {
protected:
    std::string name;
    int sides_count;

public:
    Shape(const std::string& name, int sides_count);
    virtual void print_info() const;
    virtual bool check() const = 0;

    virtual ~Shape() = default;
};

#endif