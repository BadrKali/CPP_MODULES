#include"Base.hpp"
#include"A.hpp"
#include"B.hpp"
#include"C.hpp"




Base * generate(void) {
    int seed  = std::time(0);
    std::srand(seed);
    int random  = std::rand() % 3;

    if(random == 0)
        return(new A);
    else if(random == 1)
        return(new B);
    else
        return(new C);
    return(NULL);
}


void identify(Base* p) {
    if(dynamic_cast<A*>(p) != NULL)
    {
        std::cout << "Type A : YES" << std::endl;
        std::cout << "Type B : NO" << std::endl;
        std::cout << "Type C : NO" << std::endl;
    }
    else if(dynamic_cast<B*>(p))
    {
        std::cout << "Type A : NO" << std::endl;
        std::cout << "Type B : YES" << std::endl;
        std::cout << "Type C : NO" << std::endl;
    }
    else if(dynamic_cast<C*>(p))
    {
        std::cout << "Type A : NO" << std::endl;
        std::cout << "Type B : NO" << std::endl;
        std::cout << "Type C : YES" << std::endl;
    }
}   


void identify(Base& p) {

    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "Type A : YES" << std::endl;
    }
    catch(std::exception &ex){
        std::cout << "Type A : NO" << std::endl;
    }
    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "Type B : YES" << std::endl;
    }
    catch(std::exception &ex) {
        std::cout << "Type B : NO" << std::endl;
    }
    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "Type C : YES" << std::endl;
    }
    catch(std::exception &ex) {
        std::cout << "Type C : NO" << std::endl;
    }
}

int main() {
        identify(*generate());
}