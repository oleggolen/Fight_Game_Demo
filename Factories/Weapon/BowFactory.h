#ifndef FIGHT_GAME_DEMO_BOW_FACTORY_H
#define FIGHT_GAME_DEMO_BOW_FACTORY_H


#include "WeaponFactory.h"

class BowFactory : public WeaponFactory {
public:
    Weapon * Create(const string &weapon) override;

};


#endif
