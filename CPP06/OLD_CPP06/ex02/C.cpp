#include"C.hpp"



C::C() {
    std::cout << "C Desfault Constructor Called" << std::endl;
}

C::~C() {
    std::cout << "C default Constructo Called" << std::endl;
}

C::C(const C& other) {
    std::cout << "C Copy Constructor Called" << std::endl;
}

C& C::operator = (const C& other) {
    return(*this);
}