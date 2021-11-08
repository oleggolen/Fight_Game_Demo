#include "Hero.h"
#include<iostream>
void Hero::receiveDamage(unsigned int damage)
{
    if(!_hp)
    {
        cout << _name << " is dead";
        return;
    }
    if(_protection>=damage)
    {
        cout << _name << " blocked damage fully" << endl;
        return;
    }
    if(_hp>damage- _protection)
    {
        cout << _name << " has received " << damage << " damage points" << endl;
        _hp-=(damage-_protection);
    }
    else
    {
        cout << _name << " has received " << _hp << " damage points" << endl;
        cout << _name << " is dead" << endl;
        _hp=0;
    }
}

Hero::Hero(string  name,unsigned int hp, unsigned int power, unsigned int protection) : _name(move(name)),_hp(hp), _power(power),
_protection(protection)
{

}

unsigned int Hero::getHp() const  noexcept {
    return _hp;
}

void Hero::Attack(Hero &hero)
{
    if(!_hp)
    {
        cout << _name << " is dead" << endl;
        return;
    }
    if(!hero._hp)
    {
        cout << hero._name << " is dead" << endl;
        return;
    }
    hero.receiveDamage(_power);
}

const string &Hero::getName() const noexcept {
    return _name;
}
