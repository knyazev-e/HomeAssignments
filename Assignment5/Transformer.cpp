/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include "Transformer.h"


Transformer::Transformer(std::string _name, int _hp, Effect _effect, Weapon* _weapon):
    name(_name), health_points(_hp), power(100), effect(_effect), weapon(_weapon) {}

Transformer::Transformer():
    name("Unnamed"), health_points(1000), power(100), effect("NoEffect"), weapon(nullptr) {}

Transformer::~Transformer() {}

std::string Transformer::getName() const {
    return name;
}

void Transformer::setName(std::string _name) {
    name = _name;
}

int Transformer::getHp() const {
    return health_points;
}

void Transformer::setHp(int _hp) {
    health_points = _hp;
}

int Transformer::getPower() const {
    return power;
}

void Transformer::setPower(int _pwr) {
    power = _pwr;
}

Weapon* Transformer::getWeapon() const {
    return weapon;
}

void Transformer::setWeapon(Weapon* _weapon) {
    weapon = _weapon;
}

Effect Transformer::getEffect() const {
    return effect;
}

void Transformer::setEffect(Effect _effect) {
    effect = _effect;
}

void Transformer::talk() {}
void Transformer::walk() {}
void Transformer::think() {}

std::ostream& operator<<(std::ostream& stream, const Transformer& transformer) {
    stream << "Transformer Info: "
           << "Name: " << transformer.getName() << std::endl
           << "Current HP: " << transformer.getHp() << std::endl
           << "Power: " << transformer.getPower() << std::endl;
    return stream;
}

bool Transformer::operator<(const Transformer& other) const {
    return this->getPower() < other.getPower();
}

bool Transformer::operator>(const Transformer& other) const {
    return this->getPower() > other.getPower();
}

void Transformer::fight() {
    std::cout << "This is the 'fight()' method of the Transformer() class." << std::endl;
}

void Transformer::transform() {
    std::cout << "This is the 'transform()' method of the Transformer() class." << std::endl;
}

void Transformer::upgrade() {
    std::cout << "This is the 'upgrade()' method of the Transformer() class." << std::endl;
}
