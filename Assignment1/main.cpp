/* Eva Knyazeva st128104@student.spbu.ru
1st home assignment
*/


#include <iostream>
#include <string>
#include "function.h"

std::string name = "world";

int main() {

    while(true) {

        hello(name);
        std::cout << "Type your name: ";
        std::cin >> name;
    }
}
