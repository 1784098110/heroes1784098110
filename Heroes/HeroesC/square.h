#ifndef SQUARE_H
#define SQUARE_H

#include "types.h"
#include "rectangle.h"

class Square : public Rectangle
{
public:
    Square(int side, int x, int y, float angle = 0, Owner owner = Owner::ai):
        Rectangle(side, side, x, y, angle, owner, Shape::square){};
    int getSide();
};

#endif // SQUARE_H
