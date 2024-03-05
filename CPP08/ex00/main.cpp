#include<iostream>
#include"easyfind.hpp"
#include<list>

int main() {
    try {
        std::vector<int> a; 
        std::list<int> ab;

        ab.push_back(45);
        ab.push_back(45);
        ab.push_back(455);

        a.push_back(1);
        a.push_back(2);
        a.push_back(3);

        std::cout << easyfind(a,3) << std::endl;
        std::cout << easyfind(ab,3) << std::endl;
    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    return(0);
}