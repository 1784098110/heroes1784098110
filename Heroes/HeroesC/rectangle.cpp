#include "rectangle.h"
//#define NDEBUG
#include <cassert>

Rectangle::Rectangle(int width, int height, int x, int y, float angle=0, Owner owner = Owner::ai, Shape shape = Shape::rectangle):
    Object(x, y, angle, owner, shape), width(width), height(height) {}

void Rectangle::setSides(int width, int height){
    assert(width && height);

    this->width = width;
    this->height = height;
}


void Rectangle::getSides(int& width1, int& height1){
    assert(width && height);

    width1 = width;
    height1 = height;
}
