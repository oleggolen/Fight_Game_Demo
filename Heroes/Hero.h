#ifndef FIGHT_GAME_DEMO_HERO_H
#define FIGHT_GAME_DEMO_HERO_H
#include<string>
#include "../Equipment/Weapons/Weapon.h"
#include "../Factories/Weapon/WeaponFactory.h"

using namespace std;

class Hero {
private:
    unsigned int _hp;
    unsigned int _power;
    unsigned int _protection;
    string _name;
    void receiveDamage(unsigned int damage);
    Weapon* _weapon;
    WeaponFactory* _weaponFactory;

protected:
    Hero(string  name, unsigned int hp, unsigned int power, unsigned int protection, const string& weapon, WeaponFactory* weaponFactory);
public:
    unsigned int getHp() const noexcept;
    void Attack(Hero& hero);
    const string& getName() const noexcept;
    virtual ~Hero();
};


#endif
