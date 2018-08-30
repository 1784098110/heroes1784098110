#ifndef OBJECT_H
#define OBJECT_H
#include "types.h"


class Object
{
protected:
    int x;
    int y;
    float angle;

    Owner owner;
    Shape shape;
public:
    Object(int x, int y, float angle = 0, Owner owner = Owner::ai, Shape shape = Shape::inValid):
        x(x), y(y), angle(angle), owner(owner), shape(shape){}
    void setCoor(int x, int y);
    void getCoor(int& x1, int& y1);
};

#endif // OBJECT_H
