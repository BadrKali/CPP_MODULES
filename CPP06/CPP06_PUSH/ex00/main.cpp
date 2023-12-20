#include<iostream>
#include"ScalarConverter.hpp"
#include<math.h>

// float : .2f / 0.2f / 0.f == 0 / 



int main(int ac, char **av) {
    if(ac != 2)
        return(1);
    float num = 0.f;
    std::cout << num << std::endl;
    std::cout << "==================" << std::endl;
    std::string value = av[1];
    ScalarConverter::convert(value);
    //std::cout << isnan(3.5f/0) << std::endl;
    return(0);
}