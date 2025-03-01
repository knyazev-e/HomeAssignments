/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>
#include "Effect.h"
#include "Weapon.h"


class Transformer {
public:
    Transformer(std::string _name, int _hp, Effect _effect, Weapon* _weapon);
    Transformer();

    ~Transformer();

    std::string getName() const;
    void setName(std::string _name);

    int getHp() const;
    void setHp(int _hp);

    int getPower() const;
    void setPower(int _pwr);

    Weapon* getWeapon() const;
    void setWeapon(Weapon* _weapon);

    Effect getEffect() const;
    void setEffect(Effect _effect);

    void talk();
    void walk();
    void think();

    friend std::ostream& operator<<(std::ostream& stream, const Transformer& transformer);

    bool operator<(const Transformer& other) const;
    bool operator>(const Transformer& other) const;
    bool operator==(const Transformer& other) const;

    virtual void fight();
    virtual void transform();
    virtual void upgrade();

protected:
    std::string name;
    int health_points;
    int power;
    Effect effect;
    Weapon* weapon;
};

#endif
