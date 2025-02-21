/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Effect.h"
#include "Weapon.h"


class Transformer {
public:
    Transformer(std::string _name, int _hp, Effect _effect, Weapon* _weapon);
    ~Transformer();

    std::string getName();
    void setName(std::string _name);

    int getHp();
    void setHp(int _hp);

    int getPower();
    void setPower(int _pwr);

    Weapon* getWeapon();
    void setWeapon(Weapon* _weapon);

    Effect getEffect();
    void setEffect(Effect _effect);

    void talk();
    void walk();
    void transform();

protected:
    std::string name;
    int health_points;
    int power;
    Effect effect;
    Weapon* weapon;
};

#endif
