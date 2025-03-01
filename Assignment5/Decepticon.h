/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"


class Decepticon : public Transformer {
public:
    Decepticon(std::string _name, int _hp, Effect _effect, Weapon* _weapon, int _stability);
    Decepticon();

    ~Decepticon();

    void setStability(int _stability);
    int getStability();

    void setLuck(bool _luck);
    bool getLuck();

    void attack();

private:
    int stability;
    bool luck;
};

#endif
