#pragma once

#include "Color.hpp"

class Shape
{
public:
    virtual ~Shape() {}
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    Color color;
    virtual void print() const;
};
