#include"A.hpp"





A::A() {
    std::cout << "A Desfault Constructor Called" << std::endl;
}

A::~A() {
    std::cout << "A default Constructo Called" << std::endl;
}

A::A(const A& other) {
    std::cout << "A Copy Constructor Called" << std::endl;
}

A& A::operator = (const A& other) {
    return(*this);
}