//
// Created by oleg- on 12.11.2021.
//

#ifndef FIGHT_GAME_DEMO_SWORD_FACTORY_H
#define FIGHT_GAME_DEMO_SWORD_FACTORY_H


#include "WeaponFactory.h"

class SwordFactory : public WeaponFactory {
private:
    SwordFactory();
    static SwordFactory* _swordFactory;
public:
    Weapon * Create(const string &weapon) override;
    static SwordFactory* Create();


};


#endif
