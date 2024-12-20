/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>

int main() {
    std::string input_line;
    std::cout << "Input the expression in reversed polish notation: " << std::endl;
    std::getline(std::cin, input_line);

    int size = (std::count(input_line.begin(), input_line.end(), ' ')/2) + 1;
    float *numbers = new float[size];

    std::istringstream stream(input_line);
    std::string word;

    int index = 0;
    while(stream >> word) {
        if (word == "-") {
            numbers[index - 2] = numbers[index - 2] - numbers[index - 1];
            numbers[index] = 0;
            index--;
        }
        else if (word == "+") {
            numbers[index - 2] = numbers[index - 2] + numbers[index - 1];
            numbers[index] = 0;
            index--;
        }
        else if (word == "/") {
            numbers[index - 2] = numbers[index - 2] / numbers[index - 1];
            numbers[index] = 0;
            index--;
        }
        else if (word == "*") {
            numbers[index - 2] = numbers[index - 2] * numbers[index - 1];
            numbers[index] = 0;
            index--;
        }
        else {
            numbers[index] = std::stof(word);
            index++;
        }
    }

    std::cout << numbers[0] << std::endl;
    delete[] numbers;
}
