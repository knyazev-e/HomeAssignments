/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */

#ifndef CLASSES_H
#define CLASSES_H

#include <vector>


class Class1 {
public:
    bool bar(int number, std::vector<float>& vect) {
        return number > 0;
    }

    int c_1_1() {
        return 1;
    }
    float c_1_2() {
        return 1.1f;
    }
    void c_1_3() {}
};


class Class2 {
public:
    bool bar(int number, std::vector<float>& vect) {
        return !vect.empty();
    }

    int c_2_1() {
        return 2;
    }
    float c_2_2() {
        return 2.2f;
    }
    void c_2_3() {}
};


class Class3 {
public:
    bool bar(int number, std::vector<float>& vect) {
        return number == -static_cast<int>(vect.size());
    }

    int c_3_1() {
        return 3;
    }
    float c_3_2() {
        return 3.3f;
    }
    void c_3_3() {}
};

#endif
