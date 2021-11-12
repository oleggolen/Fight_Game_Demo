#ifndef FIGHT_GAME_DEMO_WEAPON_H
#define FIGHT_GAME_DEMO_WEAPON_H


class Weapon {
private:
    unsigned int _damage;
protected:
     explicit Weapon(unsigned int damage);

public:
    unsigned int getDamage() const;
    virtual ~Weapon();

};
#endif
