#include "Archer.h"
#include "../Factories/Weapon/BowFactory.h"

Archer::Archer() : Hero("Archer", 50, 10,15, "PlasticBow", new BowFactory()) {

}
