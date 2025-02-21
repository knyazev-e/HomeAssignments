/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include "Autobot.h"
#include "Decepticon.h"
#include "Worker.h"
#include "Effect.h"
#include "Weapon.h"

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
    Bumblebee.transform();
    Bumblebee.dodge();
    Racolt.work();

    return 0;
}
