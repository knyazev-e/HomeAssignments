/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */

#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <vector>

template<typename Type>
class TemplateClass {
public:
    TemplateClass(Type obj, int num, std::vector<float> vec): object(obj), number(num), vect(vec) {}

    bool foo() {
        return object.bar(number, vect);
    }

private:
    Type object;
    int number;
    std::vector<float> vect;
};


template<>
class TemplateClass<int> {
public:
    TemplateClass(int obj, int num, std::vector<float> vec): object(obj), number(num), vect(vec) {}

    bool foo() {
        return true;
    }

private:
    int object;
    int number;
    std::vector<float> vect;
};


template<>
class TemplateClass<double> {
public:
    TemplateClass(double obj, int num, std::vector<float> vec): object(obj), number(num), vect(vec) {}

    bool foo() {
        return false;
    }

private:
    double object;
    int number;
    std::vector<float> vect;
};

#endif
