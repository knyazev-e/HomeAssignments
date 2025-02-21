/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot(std::string _name, int _hp, Effect _effect, Weapon* _weapon, int _speed, std::string _state);
    ~Autobot();

    void setSpeed(int _speed);
    int getSpeed();

    void setState(std::string _state);
    std::string getState();

    void setAttention(bool _attention);
    bool getAttention();

    void dodge();

private:
    std::string state;
    int speed;
    bool attention;
};

#endif
