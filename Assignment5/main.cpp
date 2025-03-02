/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */

#include "Transformer.h"
#include "Decepticon.h"
#include "Autobot.h"
#include "Effect.h"
#include "Weapon.h"
#include "Worker.h"
#include <iostream>

int main() {
    Weapon none("empty");
    Weapon laser("optical");
    Weapon gun("firearm");

    Effect PowerUp("Power Up");
    Effect Agility("Agility");
    Effect IncreasedStrength("Strength");

    Autobot Bumblebee("Bumblebee", 1000, Agility, &none, 20, "Default");
    Decepticon Megatron("Megatron", 1200, PowerUp, &gun, 10);
    Worker Racolt("Racolt", 700, IncreasedStrength, &none, "Construction", 80);

    Bumblebee.setWeapon(&laser);
    Megatron.setLuck(true);
    Megatron.setStability(5);

    Megatron.attack();
    std::cout << "Megatron attacks" << std::endl;

    Bumblebee.think();
    std::cout << "Bumblebee is thinking" << std::endl;

    Bumblebee.dodge();
    std::cout << "Bumblebee dodged Megatron's attack" << std::endl;

    Racolt.work();
    std::cout << "Racolt is working" << std::endl;

    if (Bumblebee == Megatron) {
        std::cout << "Bumblebee and Megatron have equal powers" << std::endl;
    }

    Bumblebee.setPower(150);

    if (Bumblebee > Megatron) {
        std::cout << "Bumblebee is now stronger than Megatron" <<std::endl;
    }

    Worker RandomWorker;
    std::cout << RandomWorker << std::endl;

    //Calling virtual methods through a base class pointer
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
