
#include"B.hpp"





B::B() {
    std::cout << "B Desfault Constructor Called" << std::endl;
}

B::~B() {
    std::cout << "B default Constructo Called" << std::endl;
}

B::B(const B& other) {
    std::cout << "B Copy Constructor Called" << std::endl;
}

B& B::operator = (const B& other) {
    return(*this);
}