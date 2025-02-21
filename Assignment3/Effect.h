/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#ifndef EFFECT_H
#define EFFECT_H

#include <string>

class Effect {
public:
    Effect(std::string name);
    ~Effect();

    std::string getName();
    void setName(std::string name);

private:
    std::string effect_name;
};

#endif
