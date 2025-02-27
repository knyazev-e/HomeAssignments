/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include "Transformer.h"


Transformer::Transformer(std::string _name, int _hp, Effect _effect, Weapon* _weapon):
    name(_name), health_points(_hp), power(100), effect(_effect), weapon(_weapon) {}

Transformer::Transformer():
    name("Unnamed"), health_points(1000), power(100), weapon(nullptr) {}

Transformer::~Transformer() {}

std::string Transformer::getName() {
    return name;
}

void Transformer::setName(std::string _name) {
    name = _name;
}

int Transformer::getHp() {
    return health_points;
}

void Transformer::setHp(int _hp) {
    health_points = _hp;
}

int Transformer::getPower() {
    return power;
}

void Transformer::setPower(int _pwr) {
    power = _pwr;
}

Weapon* Transformer::getWeapon() {
    return weapon;
}

void Transformer::setWeapon(Weapon* _weapon) {
    weapon = _weapon;
}

Effect Transformer::getEffect() {
    return effect;
}

void Transformer::setEffect(Effect _effect) {
    effect = _effect;
}

void Transformer::talk() {}
void Transformer::walk() {}
void Transformer::think() {}

std::ostream& operator << (std::ostream& stream, const Transformer& transformer) {
    stream << "Transformer Info: " << std::endl;
           << "Name: " << transformer.getName() << std::endl;
           << "Current HP: " << transformer.getHp() << std::endl;
           << "Power: " << transformer.getPower() << std::endl;
    return stream;
}

bool operator < (const Transformer& other) const {
    return this->getPower() < other.getPower();
}

bool operator > (const Transformer& other) const {
    return this->getPower() > other.getPower();
}

bool operator == (const Transformer& other)const {
    return this->getPower() == other.getPower();
}
