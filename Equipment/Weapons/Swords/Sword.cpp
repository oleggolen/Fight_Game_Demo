#include "Sword.h"
Sword::Sword(int damage) : Weapon(damage) {

}

Sword::~Sword() {
    Weapon::~Weapon();

}
