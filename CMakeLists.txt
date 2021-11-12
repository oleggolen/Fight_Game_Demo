cmake_minimum_required(VERSION 3.19)
project(Fight_Game_Demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Fight_Game_Demo main.cpp Heroes/Hero.cpp Heroes/Hero.h Heroes/Archer.cpp Heroes/Archer.h Heroes/Knight.cpp Heroes/Knight.h Equipment/Weapons/Weapon.cpp Equipment/Weapons/Weapon.h Equipment/Weapons/Swords/Sword.cpp Equipment/Weapons/Swords/Sword.h Equipment/Weapons/Swords/WoodenSword.cpp Equipment/Weapons/Swords/WoodenSword.h Equipment/Weapons/Swords/DragonSword.cpp Equipment/Weapons/Swords/DragonSword.h Equipment/Weapons/Bows/Bow.cpp Equipment/Weapons/Bows/Bow.h Equipment/Weapons/Bows/PlasticBow.cpp Equipment/Weapons/Bows/PlasticBow.h Factories/WeaponFactory.cpp Factories/WeaponFactory.h Exceptions/IncorrectNameException.cpp Exceptions/IncorrectNameException.h)