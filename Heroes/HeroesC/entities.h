#ifndef ENTITY_H
#define ENTITY_H

#include "types.h"
#include "weapons.h"

namespace EN{



class Entity : public TY::Circle
{
private:
    int teamID;
    TY::PState state;

    WA::Weapon* lWeapon;
    WA::Weapon* rWeapon;


public:
    Entity(int teamID, WA::Weapon* lWeapon, WA::Weapon* rWeapon);
    void spawn (int x, int y);

    int getTeamID(){return teamID;}



};










}

#endif // ENTITY_H
