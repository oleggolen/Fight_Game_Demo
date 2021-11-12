#ifndef FIGHT_GAME_DEMO_WEAPON_FACTORY_H
#define FIGHT_GAME_DEMO_WEAPON_FACTORY_H

#include "../../Equipment/Weapons/Weapon.h"
#include<string>
using namespace std;
class WeaponFactory {
protected:
    WeaponFactory();
public:
    virtual Weapon* Create(const string& weapon)=0;
    virtual ~WeaponFactory();

};


#endif
