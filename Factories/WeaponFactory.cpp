#include "WeaponFactory.h"
#include "../Equipment/Weapons/Swords/WoodenSword.h"
#include "../Equipment/Weapons/Swords/DragonSword.h"
#include "../Equipment/Weapons/Bows/PlasticBow.h"
#include "../Exceptions/IncorrectNameException.h"
Weapon *WeaponFactory::Create(const string &weapon) {
    if(weapon=="WoodenSword")
        return new WoodenSword();
    if(weapon=="DragonSword")
        return new DragonSword();
    if(weapon=="PlasticBow")
        return new PlasticBow();
    throw IncorrectNameException();
}
