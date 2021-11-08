#ifndef FIGHT_GAME_DEMO_HERO_H
#define FIGHT_GAME_DEMO_HERO_H
#include<string>
using namespace std;

class Hero {
private:
    unsigned int _hp;
    unsigned int _power;
    unsigned int _protection;
    string _name;
    void receiveDamage(unsigned int damage);

protected:
    Hero(string  name, unsigned int hp, unsigned int power, unsigned int protection);
public:
    unsigned int getHp() const noexcept;
    void Attack(Hero& hero);
    const string& getName() const noexcept;

};


#endif
