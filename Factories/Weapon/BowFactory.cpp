#include "BowFactory.h"
#include "../../Equipment/Weapons/Bows/PlasticBow.h"
#include "../../Exceptions/IncorrectNameException.h"

Weapon *BowFactory::Create(const string &weapon) {
    if(weapon=="PlasticBow")
        return new PlasticBow();
    throw IncorrectNameException();
}
