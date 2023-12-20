#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include<iostream>

struct Data {
    int value;
    double value1;
};

class Serializer {
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private:
        Serializer();
};



#endif