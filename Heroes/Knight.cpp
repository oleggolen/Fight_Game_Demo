#include "Knight.h"
#include "../Factories/Weapon/SwordFactory.h"

Knight::Knight() : Hero("Knight", 70, 30, 5, "PlasticBow",  SwordFactory::Create()) {

}
