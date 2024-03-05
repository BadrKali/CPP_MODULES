#include<iostream>
#include"Serializer.hpp"



int main() {
    Data a;

    a.value = 8;
    a.value1 = 8.8;

    uintptr_t test = Serializer::serialize(&a);
    Data *b = Serializer::deserialize(test);

    std::cout << b->value << std::endl;
    std::cout << b->value1 << std::endl;
}