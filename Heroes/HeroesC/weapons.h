#ifndef WEAPON_H
#define WEAPON_H

#include "types.h"

namespace WA{

//do weapon and tool class need to be two separate things?
//make them separate for now for modification space
class Weapon : public TY::Tool{
private:
    int dmg;
    TY::WType wType;
protected:
    bool firing;
public:
    Weapon(int cool, int dmg, TY::WType wType, TY::TClass tClass, TY::Owner owner):
        TY::Tool(cool, tClass, owner), dmg(dmg), wType(wType){firing = false;}
    bool isFiring(){return firing;}
    int getDamage(){return dmg;}
    void setDamage(int dmg1){dmg = dmg1;}
    virtual ~Weapon();
};


class WClose : public Weapon{
private:
    int range;
    float angle;
public:
    WClose(int cool, int dmg, int range, float angle, TY::WType wType, TY::Owner owner):
        Weapon(cool, dmg, wType, TY::TClass::close, owner), range(range), angle(angle){}
    virtual ~WClose();
    int getRange(){return range;}
    float getAngle(){return angle;}
    void fire();

};


class WShoot : public Weapon{
private:
    int range;
public:
    WShoot(int cool, int dmg, int range, TY::WType wType, TY::Owner owner):
        Weapon(cool, dmg, wType, TY::TClass::shoot, owner), range(range){}
    virtual ~WShoot();
    int getRange(){return range;}
    void fire();

};





}
#endif // WEAPON_H
