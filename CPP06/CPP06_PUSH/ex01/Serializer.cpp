#include"Serializer.hpp"




Serializer::Serializer() {
    std::cout << "Serializer Default Constructor called" << std::endl;
}


uintptr_t Serializer::serialize(Data *ptr) {
    uintptr_t value = reinterpret_cast<uintptr_t>(ptr);
    return(value);
}

Data* Serializer::deserialize(uintptr_t raw) {
    Data *value = reinterpret_cast<Data*>(raw);
    return(value);
}