#include "entities.h"


EN::Entity::Entity(int teamID, WA::Weapon* lWeapon, WA::Weapon* rWeapon):
    TY::Circle(0,0,0), teamID(teamID), lWeapon(lWeapon), rWeapon(rWeapon){state = TY::PState::dead;}

void EN::Entity::spawn(int x, int y){
    this->setCoor(x,y);
    state = TY::PState::active;
}
