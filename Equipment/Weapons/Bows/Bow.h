#ifndef FIGHT_GAME_DEMO_BOW_H
#define FIGHT_GAME_DEMO_BOW_H
#include "../Weapon.h"

class Bow : public Weapon {
protected:
    explicit Bow(unsigned int damage);
public:
    virtual ~Bow();

};


#endif //FIGHT_GAME_DEMO_BOW_H
