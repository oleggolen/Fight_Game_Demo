#include "SwordFactory.h"
#include "../../Exceptions/IncorrectNameException.h"
#include "../../Equipment/Weapons/Swords/DragonSword.h"
#include "../../Equipment/Weapons/Swords/WoodenSword.h"

Weapon *SwordFactory::Create(const string &weapon) {
    if(weapon=="WoodenSword")
        return new WoodenSword();
    if(weapon=="DragonSword")
        return new DragonSword();;
    throw IncorrectNameException();
}

SwordFactory *SwordFactory::Create() {
    if(!_swordFactory)
        _swordFactory = new SwordFactory();
    return _swordFactory;
}

SwordFactory::SwordFactory() = default;
