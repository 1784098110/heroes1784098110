#include "object.h"
//#define NDEBUG
#include <cassert>



void Object::setCoor(int x, int y){
    assert(x && y);

    this->x = x;
    this->y = y;
}


void Object::getCoor(int& x1, int& y1){
    assert(x && y);

    x1 = x;
    y1 = y;
}
