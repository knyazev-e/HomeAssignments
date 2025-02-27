/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include "Effect.h"


Effect::Effect(std::string name): effect_name(name) {}

Effect::~Effect() {}

std::string Effect::getName() {
    return effect_name;
}

void Effect::setName(std::string name) {
    effect_name = name;
}
