/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */

#include <gtest/gtest.h>
#include <vector>
#include "Template.h"
#include "Classes.h"


TEST(TestClass1, Class1True) {
    Class1 obj;
    std::vector<float> vect = {1.1f, 2.2f, 3.3f};
    TemplateClass<Class1> tmplt(obj, 3, vect);
    EXPECT_TRUE(tmplt.foo());
}

TEST(TestClass1, Class1False) {
    Class1 obj;
    std::vector<float> vect = {1.1f, 2.2f, 3.3f};
    TemplateClass<Class1> tmplt(obj, -20, vect);
    EXPECT_FALSE(tmplt.foo());
}

TEST(TestClass2, Class2True) {
    Class2 obj;
    std::vector<float> vect = {1.1f, 2.2f, 3.3f};
    TemplateClass<Class2> tmplt(obj, 11, vect);
    EXPECT_TRUE(tmplt.foo());
}

TEST(TestClass2, Class2False) {
    Class2 obj;
    std::vector<float> vect;
    TemplateClass<Class2> tmplt(obj, 1, vect);
    EXPECT_FALSE(tmplt.foo());
}

TEST(TestClass3, Class3True) {
    Class3 obj;
    std::vector<float> vect = {1.1f, 2.2f, 3.3f, 4.4f};
    TemplateClass<Class3> tmplt(obj, -4, vect);
    EXPECT_TRUE(tmplt.foo());
}

TEST(TestClass3, Class3False) {
    Class3 obj;
    std::vector<float> vect = {1.1f, 2.2f, 3.3f, 4.4f};
    TemplateClass<Class3> tmplt(obj, 13, vect);
    EXPECT_FALSE(tmplt.foo());
}

TEST(SpecTests, IntSpec) {
    std::vector<float> vect = {1.1f, 2.2f, 3.3f};
    TemplateClass<int> tmplt(1, 11, vect);
    EXPECT_TRUE(tmplt.foo());
}

TEST(SpecTests, DoubleSpec) {
    std::vector<float> vect = {1.1f, 2.2f, 3.3f};
    TemplateClass<double> tmplt(3.5, 11, vect);
    EXPECT_FALSE(tmplt.foo());
}
