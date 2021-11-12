#ifndef FIGHT_GAME_DEMO_SWORD_H
#define FIGHT_GAME_DEMO_SWORD_H
#include "../Weapon.h"

class Sword : public Weapon{
protected:
    explicit Sword(int damage);
public:
    ~Sword() override;
};
#endif
