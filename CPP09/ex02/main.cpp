#include"PmergeMe.hpp"




int main(int ac, char **av) {
    if(ac < 2) {
        std::cout << "ARGS ERROR" << std::endl;
        return(1);
    }
    try {
        PmergeMe a(av);
        a.evaluate();
        a.evaluate_d();
        a.printResult();

    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
} 