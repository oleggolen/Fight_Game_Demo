#include "Weapon.h"
Weapon::Weapon(unsigned int damage) : _damage(damage) {

}

unsigned int Weapon::getDamage() const {
    return _damage;
}

Weapon::~Weapon() = default;
