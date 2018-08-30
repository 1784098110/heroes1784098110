#include "weapons.h"

WA::Weapon::~Weapon(){}

WA::WClose::~WClose(){}

WA::WShoot::~WShoot(){}




void WA::WClose::fire(){
    firing = true;
}
