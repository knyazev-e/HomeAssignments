/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include "Direction.h"

Direction::Direction(std::string direction_name)
    : _direction_name(direction_name) {}

Direction::~Direction() {}

std::string Direction::get_direction_name() {
    return _direction_name;
}

void Direction::set_direction_name(std::string direction_name) {
    _direction_name = direction_name;
}
