/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
    Weapon(std::string type);
    ~Weapon();

    std::string getWeapon();
    void setWeapon(std::string type);

private:
    std::string weapon_type;
};

#endif
