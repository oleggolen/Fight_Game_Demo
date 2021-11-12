#ifndef FIGHT_GAME_DEMO_WEAPON_FACTORY_H
#define FIGHT_GAME_DEMO_WEAPON_FACTORY_H

#include "../Equipment/Weapons/Weapon.h"
#include<string>
using namespace std;
class WeaponFactory {
public:
    Weapon* Create(const string& weapon);

};


#endif
