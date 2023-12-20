#include<iostream>
#include"Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat a("name", 100);
        std::cout << a << std::endl;
    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl; 
    }

    return(0);
}