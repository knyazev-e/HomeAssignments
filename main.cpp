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
