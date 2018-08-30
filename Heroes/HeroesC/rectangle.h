#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "types.h"
#include "object.h"


class Rectangle : public Object
{
protected:
    int width;
    int height;
public:
    Rectangle(int width, int height, int x, int y, float angle, Owner owner, Shape shape);
    void getSides(int& width1, int& height1);
    void setSides(int width1, int height1);
};

#endif // RECTANGLE_H
