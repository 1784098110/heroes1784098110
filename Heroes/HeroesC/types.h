#ifndef TYPES_H
#define TYPES_H

#define PI 3.14159

//#include <cassert>

namespace TY{

enum class Owner {none, ai, p1, p2, p3};

enum class Shape {none, custom, rectangle, square, triangle, circle};

enum class WType {none=13, katana, dagger, machineGun, sniper, launcher, mine};

enum class Passive {speed1, harm1, health1, recover1};

enum class Hand {left, right};

enum class TClass {none, close, shoot, mute};

enum class PState {dead, active, spectate, protect};



struct control{
    int x, y;
    bool W,A,S,D,lClick,rClick;
};

typedef struct {
    int x,y;
} coordinate;


class Object
{
private:
    coordinate coor;
    float angle;

    Owner owner;
    Shape shape;
public:
    Object(int x, int y, float angle = 0, Owner owner = Owner::ai, Shape shape = Shape::none):
        angle(angle), owner(owner), shape(shape){coor.x = x; coor.y = y;}
    void setCoor(int x1, int y1){coor.x = x1; coor.y = y1;}
    void getCoor(int& x1, int& y1){x1 = coor.x; y1 = coor.y;}
    void setOwner(Owner owner1);
    Owner getOwner();

};


class Rectangle : public Object
{
private:
    int width;
    int height;
public:
    Rectangle(int width, int height, int x, int y, float angle=0, Owner owner = Owner::ai, Shape shape = Shape::rectangle):
        Object(x, y, angle, owner, shape), width(width), height(height) {}
    void getSides(int& width1, int& height1){width1 = width; height1 = height;}
    void setSides(int width1, int height1){width = width1; height = height1;}
    int getWidth(){return width;}
    void setWidth(int width1){width = width1;}
    int getHeight(){return height;}
    void setHeight(int height1){height = height1;}
};


class Square : public Rectangle
{
public:
    Square(int side, int x, int y, float angle = 0, Owner owner = Owner::ai):
        Rectangle(side, side, x, y, angle, owner, Shape::square){}
    int getSide(){return this->getWidth();}
    void setSide(int side){this->setSides(side,side);}
};


class Circle : public Object
{
private:
    int r;

public:
    Circle(int r, int x, int y, float angle = 0, Owner owner = Owner::ai):
        Object(x, y, angle, owner, Shape::circle), r(r){}
    int getRadius(){return r;}
};


//something that happens when a key is pressed
class Tool {
private:
    int cool;   //minimum cooltime between firings


    TClass tClass;
    Owner owner;
public:
    Tool(int cool, TClass tClass, Owner owner = Owner::none):
        cool(cool), tClass(tClass), owner(owner){}
    virtual ~Tool();

    void setOwner(Owner owner1){owner = owner1;}
    Owner getOwner(){return owner;}
    void setCool(int cool1){cool = cool1;}
    int getCool(){return cool;}
    virtual void fire()=0;

};






}

#endif // TYPES_H
