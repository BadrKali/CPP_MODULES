#include"BitcoinExchange.hpp"



int main(int ac, char **av) {
    if(ac != 2) {
        std::cout << " ** ERROR ** " << std::endl;
        return(1);
    }
    std::string input(av[1]);
    try {
        BitcoinExchange btc(input);
        btc.evaluate();
    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    return(0);
}