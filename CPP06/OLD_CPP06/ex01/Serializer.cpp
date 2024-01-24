#include"Serializer.hpp"


uintptr_t Serializer::serialize(Data *ptr) {
    uintptr_t p;

    p = reinterpret_cast<uintptr_t>(ptr);
    return(p);
}

Data* Serializer::deserialize(uintptr_t row) {
    Data *p;

    p = reinterpret_cast<Data*>(row);
    return(p);
}