#include<iostream>


#include"ScalarConverter.hpp"

int main(int ac ,char **av) {
    if(ac != 2)
    {
        std::cout << "** Use : ./convert + arg **" << std::endl;
        return(1);
    }
    std::string value = av[1];
    ScalarConverter::convert(value);
    return(0);
}