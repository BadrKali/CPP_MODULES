#include"RPN.hpp"





int main(int ac, char **av) {
    if(ac != 2) {
        std::cout << "ARG ERROR" << std::endl;
        return(0);
    }
    std::string myArgs(av[1]);
    try {
        RPN a(myArgs);
        std::cout << a.evaluate() << std::endl;
    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl;
        return(1);
    }
}