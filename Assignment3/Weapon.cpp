/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include "Weapon.h"

Weapon::Weapon(std::string type): weapon_type(type) {}

Weapon::~Weapon() {}

std::string Weapon::getWeaponType() {
    return weapon_type;
}

void Weapon::setWeaponType(std::string type) {
    weapon_type = type;
}
