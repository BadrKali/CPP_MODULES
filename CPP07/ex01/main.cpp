#include<iostream>
#include"iter.hpp"



int main() {
    int intArray[10] = {0,1,2,3,4,5,6,7,8,9};
    char charArray[3] = {'A','B','C'};
    std::string stringArray[] = {"hello","world"};

    std::cout << "iter on intArray" << std::endl;
    iter(intArray, 10, print<int>);
    std::cout << "========================" << std::endl;
    std::cout << "iter on charArray" << std::endl;
    iter(charArray, 3, print<char>);
    std::cout << "========================" << std::endl;
    std::cout << "iter on stringArray" << std::endl;
    iter(stringArray, sizeof(stringArray)/sizeof(std::string), print<std::string>);
    std::cout << "========================" << std::endl;

    return(0);
}