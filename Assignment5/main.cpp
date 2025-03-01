/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */

#include "Transformer.h"
#include "Decepticon.h"
#include "Autobot.h"
#include "Effect.h"
#include "Weapon.h"
#include <iostream>

int main() {
    Decepticon d;
    Autobot a;
    Transformer t;

    Transformer* t_ptr = &t;
    Transformer* d_ptr = &d;
    Transformer* a_ptr = &a;

    t_ptr->fight();
    a_ptr->fight();
    d_ptr->fight();

    t_ptr->transform();
    a_ptr->transform();
    d_ptr->transform();

    t_ptr->upgrade();
    a_ptr->upgrade();
    d_ptr->upgrade();

    return 0;
}
