/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include "Decepticon.h"


Decepticon::Decepticon(std::string _name, int _hp, Effect _effect, Weapon* _weapon, int _stability):
    Transformer(_name, _hp, _effect, _weapon), stability(_stability), luck(false) {}

Decepticon::Decepticon():
    Transformer(), stability(0), luck(false) {}

Decepticon::~Decepticon() {}

void Decepticon::setStability(int _stability) {
    stability = _stability;
}

int Decepticon::getStability() {
    return stability;
}

void Decepticon::setLuck(bool _luck) {
    luck = _luck;
}

bool Decepticon::getLuck() {
    return luck;
}

void Decepticon::attack() {}
