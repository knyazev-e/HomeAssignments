/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include "Autobot.h"

Autobot::Autobot(std::string _name, int _hp, Effect _effect, Weapon* _weapon, int _speed, std::string _state):
    Transformer(_name, _hp, _effect, _weapon), speed(_speed), state(_state), attention(false) {}

Autobot::Autobot():
    Transformer(), speed(10), state("Default"), attention(false) {}

Autobot::~Autobot() {}

void Autobot::setSpeed(int _speed) {
    speed = _speed;
}

int Autobot::getSpeed() {
    return speed;
}

void Autobot::setState(std::string _state) {
    state = _state;
}

std::string Autobot::getState() {
    return state;
}

void Autobot::setAttention(bool _attention) {
    attention = _attention;
}

bool Autobot::getAttention() {
    return attention;
}

void Autobot::dodge() {}
